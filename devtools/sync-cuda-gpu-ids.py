#!/usr/bin/env python3
# SPDX-License-Identifier: BSD-3-Clause
# Copyright(c) 2026 DPDK contributors


import argparse
import gzip
import io
import os
import re
import sys
import urllib.request
from datetime import datetime, timezone


NVIDIA_VENDOR_ID    = "10de"
OKM_URL             = ("https://raw.githubusercontent.com/NVIDIA/"
                       "open-gpu-kernel-modules/refs/heads/main/src/"
                       "nvidia/generated/g_nv_name_released.h")
PCIDB_URL           = ("https://raw.githubusercontent.com/pciutils/"
                       "pciids/refs/heads/master/pci.ids")
USER_AGENT          = "dpdk-sync-cuda-gpu-ids/1.0 (DPDK devtool; https://dpdk.org)"
DEVICES_H_PATH      = os.path.join(os.path.dirname(__file__),
                                   "..", "drivers", "gpu", "cuda", "devices.h")

LICENSE_HEADER = """\
/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright (c) 2021 NVIDIA CORPORATION & AFFILIATES
 */
"""

def fetch_url(url: str) -> str:
    """Fetch URL with gzip support and a descriptive User-Agent."""
    req = urllib.request.Request(
        url,
        headers={
            "User-Agent":      USER_AGENT,
            "Accept-Encoding": "gzip",
        }
    )
    with urllib.request.urlopen(req) as resp:
        raw = resp.read()
        encoding = resp.headers.get("Content-Encoding", "")
        if encoding == "gzip":
            raw = gzip.decompress(raw)
        return raw.decode("utf-8", errors="replace")


def read_file(path: str) -> str:
    with open(path, "r", encoding="utf-8", errors="replace") as f:
        return f.read()


OKM_ENTRY_RE = re.compile(
    r'\{\s*'
    r'0x([0-9a-fA-F]{4})'
    r'\s*,\s*'
    r'0x[0-9a-fA-F]+'
    r'\s*,\s*'
    r'0x10[Dd][Ee]'         # NVIDIA Vendor ID Only
    r'\s*,\s*'
    r'"([^"]+)"'
    r'\s*\}',
    re.IGNORECASE
)

def parse_okm(content: str) -> dict:
    """Return {device_id: canonical_name} deduplicating on first occurrence."""
    result = {}
    for m in OKM_ENTRY_RE.finditer(content):
        dev_id = int(m.group(1), 16)
        name   = m.group(2).strip()
        if dev_id not in result:
            result[dev_id] = name
    return result


def parse_pcidb(content: str) -> dict:
    """Return {device_id: (arch, description)} for all NVIDIA device entries."""
    result      = {}
    in_nvidia   = False

    vendor_re   = re.compile(r'^([0-9a-fA-F]{4})\s+')
    device_re   = re.compile(r'^\t([0-9a-fA-F]{4})\s+(\S+)\s+\[([^\]]+)\]')
    device_nb_re= re.compile(r'^\t([0-9a-fA-F]{4})\s+(.+)')

    for line in content.splitlines():

        if not line or line.startswith("#"):
            continue

        if not line.startswith("\t"):
            m = vendor_re.match(line)
            if m:
                vid = m.group(1).lower()
                if vid == NVIDIA_VENDOR_ID:
                    in_nvidia = True
                elif in_nvidia:
                    break
            continue

        if not in_nvidia:
            continue

        if line.startswith("\t\t"):
            continue

        m = device_re.match(line)
        if m:
            dev_id = int(m.group(1), 16)
            arch   = m.group(2).strip()
            desc   = m.group(3).strip()
            result[dev_id] = (arch, desc)
            continue

        m = device_nb_re.match(line)
        if m:
            dev_id = int(m.group(1), 16)
            parts  = m.group(2).strip().split(None, 1)
            arch   = parts[0]
            desc   = parts[1] if len(parts) > 1 else parts[0]
            result[dev_id] = (arch, desc)

    return result


def _sanitize(s: str) -> str:
    """Convert a description string to an uppercase C macro fragment."""
    # Replace common separators with underscore
    s = re.sub(r'[\s\-/\.\[\]]+', '_', s)
    # Remove characters not valid in a C identifier
    s = re.sub(r'[^A-Za-z0-9_]', '', s)
    # Collapse multiple underscores
    s = re.sub(r'_+', '_', s)
    return s.upper().strip('_')


def make_macro(dev_id: int, pcidb: dict, okm: dict) -> tuple:
    """
    Return (macro_name, device_id_hex, comment) for a device ID.
    """
    dev_hex = f"0x{dev_id:04x}"

    if dev_id in pcidb:
        arch, desc = pcidb[dev_id]
        if dev_id in okm:
            # Short form: arch name only
            macro   = f"NVIDIA_GPU_{_sanitize(arch)}"
            comment = desc
        else:
            # Long form: arch + sanitized description
            macro   = f"NVIDIA_GPU_{_sanitize(arch)}_{_sanitize(desc)}"
            comment = desc
    elif dev_id in okm:
        # Only in OKM — derive name from OKM canonical name
        macro   = "NVIDIA_GPU_" + _sanitize(okm[dev_id])
        comment = okm[dev_id]
    else:
        # Should not happen in normal flow
        macro   = f"NVIDIA_GPU_{dev_hex.upper().replace('0X', '')}"
        comment = "unknown"

    return macro, dev_hex, comment


def generate_header(entries: list, okm_sha: str, pci_sha: str,
                    sync_time: str) -> str:
    """
    Generate the full devices.h content.
    entries: list of (macro, dev_hex, comment) sorted by device id
    """
    lines = []

    lines.append(LICENSE_HEADER)

    lines.append("/*")
    lines.append(" * This file is auto-generated by devtools/sync-cuda-gpu-ids.py")
    lines.append(" * Do not edit manually.")
    lines.append(" *")
    lines.append(f" * Last sync : {sync_time}")
    lines.append(f" * OKM ref   : {OKM_URL}")
    if okm_sha:
        lines.append(f" *             commit {okm_sha}")
    lines.append(f" * PCI DB ref: {PCIDB_URL}")
    if pci_sha:
        lines.append(f" *             commit {pci_sha}")
    lines.append(" *")
    lines.append(" * To re-sync:")
    lines.append(" *   python devtools/sync-cuda-gpu-ids.py")
    lines.append(" */")
    lines.append("")
    lines.append("#ifndef _CUDA_GPU_DEVICES_H_")
    lines.append("#define _CUDA_GPU_DEVICES_H_")
    lines.append("")

    if entries:
        max_macro = max(len(e[0]) for e in entries)
    else:
        max_macro = 40

    for macro, dev_hex, comment in entries:
        pad = " " * (max_macro - len(macro) + 2)
        lines.append(f"#define {macro}{pad}{dev_hex}  /* {comment} */")

    lines.append("")
    lines.append("#endif /* _CUDA_GPU_DEVICES_H_ */")
    lines.append("")

    return "\n".join(lines)


def show_diff(old: str, new: str):
    """Print a simple added/removed line diff."""
    import difflib
    old_lines = old.splitlines(keepends=True)
    new_lines = new.splitlines(keepends=True)
    diff = difflib.unified_diff(old_lines, new_lines,
                                fromfile="devices.h (current)",
                                tofile="devices.h (new)")
    sys.stdout.writelines(diff)


def main():
    parser = argparse.ArgumentParser(
        description="Sync NVIDIA GPU device IDs into drivers/gpu/cuda/devices.h"
    )
    parser.add_argument("--dry-run", action="store_true",
                        help="Print output but do not write devices.h")
    parser.add_argument("--diff", action="store_true",
                        help="Show diff against current devices.h (implies --dry-run)")
    parser.add_argument("--okm-file", metavar="PATH",
                        help="Use local OKM header instead of fetching from internet")
    parser.add_argument("--pci-file", metavar="PATH",
                        help="Use local pci.ids instead of fetching from internet")
    parser.add_argument("--output", metavar="PATH", default=DEVICES_H_PATH,
                        help=f"Output path (default: {DEVICES_H_PATH})")
    args = parser.parse_args()

    if args.diff:
        args.dry_run = True

    if args.okm_file:
        print(f"WARNING: Reading OKM from local file '{args.okm_file}'. "
              "This may not reflect the latest upstream changes.", file=sys.stderr)
        okm_content = read_file(args.okm_file)
        okm_sha     = None
    else:
        print("Fetching OKM header from GitHub...", file=sys.stderr)
        okm_content = fetch_url(OKM_URL)
        okm_sha     = None  # could be extended to query GitHub API for SHA

    if args.pci_file:
        print(f"WARNING: Reading PCI DB from local file '{args.pci_file}'. "
              "This may not reflect the latest upstream changes.", file=sys.stderr)
        pci_content = read_file(args.pci_file)
        pci_sha     = None
    else:
        print("Fetching PCI ID database from GitHub...", file=sys.stderr)
        pci_content = fetch_url(PCIDB_URL)
        pci_sha     = None


    print("Parsing OKM entries...", file=sys.stderr)
    okm   = parse_okm(okm_content)
    print(f"  {len(okm)} unique NVIDIA device IDs found in OKM", file=sys.stderr)

    print("Parsing PCI DB entries...", file=sys.stderr)
    pcidb = parse_pcidb(pci_content)
    print(f"  {len(pcidb)} NVIDIA device IDs found in PCI DB", file=sys.stderr)

    all_ids = sorted(set(okm.keys()) | set(pcidb.keys()))
    print(f"  {len(all_ids)} total unique device IDs after merge", file=sys.stderr)

    entries = [make_macro(dev_id, pcidb, okm) for dev_id in all_ids]


    sync_time  = datetime.now(timezone.utc).strftime("%Y-%m-%d %H:%M UTC")
    new_content = generate_header(entries, okm_sha, pci_sha, sync_time)

    if not args.dry_run and os.path.exists(args.output):
        with open(args.output, "r", encoding="utf-8") as f:
            current = f.read()
        # Strip sync timestamp line for comparison (it always changes)
        def strip_timestamp(s):
            return re.sub(r'\* Last sync\s*:.*', '', s)
        if strip_timestamp(current) == strip_timestamp(new_content):
            print("devices.h is already up to date. Nothing to do.", file=sys.stderr)
            sys.exit(0)

    if args.diff and os.path.exists(args.output):
        with open(args.output, "r", encoding="utf-8") as f:
            current = f.read()
        show_diff(current, new_content)
        return

    if args.dry_run:
        print(new_content)
        return

    os.makedirs(os.path.dirname(os.path.abspath(args.output)), exist_ok=True)
    with open(args.output, "w", encoding="utf-8") as f:
        f.write(new_content)
    print(f"Written to {args.output}", file=sys.stderr)


if __name__ == "__main__":
    main()