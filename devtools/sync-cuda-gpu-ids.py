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


NVIDIA_GPU_VENDOR_ID    = "10de"
OKM_URL             = ("https://raw.githubusercontent.com/NVIDIA/"
                       "open-gpu-kernel-modules/refs/heads/main/src/"
                       "nvidia/generated/g_nv_name_released.h")
PCIDB_URL           = ("https://raw.githubusercontent.com/pciutils/"
                       "pciids/refs/heads/master/pci.ids")
USER_AGENT          = "dpdk-sync-cuda-gpu-ids/1.0 (DPDK devtool; https://dpdk.org)"
DEVICES_H_PATH      = os.path.join(os.path.dirname(__file__),
                                   "..", "drivers", "gpu", "cuda", "devices.h")
CUDA_C_PATH = os.path.join(os.path.dirname(__file__),
                           "..", "drivers", "gpu", "cuda", "cuda.c")

DEVICES_MARKER = "/* NVIDIA GPU device IDs */"

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

CUDA_MAP_RE = re.compile(
    r'(static const struct rte_pci_id pci_id_cuda_map\[\] = \{)'
    r'.*?'
    r'\n\t\{\n\t\t\.device_id = 0\n\t\}\n\};',
    re.DOTALL
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
                if vid == NVIDIA_GPU_VENDOR_ID:
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
    s = re.sub(r'[\s\-/\.\[\]]+', '_', s)
    s = re.sub(r'[^A-Za-z0-9_]', '', s)
    s = re.sub(r'_+', '_', s)
    return s.upper().strip('_')


def build_entries(all_ids: list, pcidb: dict, okm: dict) -> list:
    """
    Build (macro, dev_hex, comment) entries for all device IDs.
    Two-pass: first generate candidate names, then resolve collisions
    by appending sanitized description suffix.
    """

    candidates = []
    for dev_id in all_ids:
        dev_hex = f"0x{dev_id:04x}"
        if dev_id in pcidb:
            arch, desc = pcidb[dev_id]
            if dev_id in okm:
                macro   = f"NVIDIA_GPU_{_sanitize(arch)}"
                comment = desc
            else:
                macro   = f"NVIDIA_GPU_{_sanitize(arch)}_{_sanitize(desc)}"
                comment = desc
        elif dev_id in okm:
            macro   = "NVIDIA_GPU_" + _sanitize(okm[dev_id])
            comment = okm[dev_id]
        else:
            macro   = f"NVIDIA_GPU_{dev_hex.upper().replace('0X', '')}"
            comment = "unknown"
        candidates.append((macro, dev_hex, comment, dev_id))

    from collections import Counter
    name_counts = Counter(macro for macro, _, _, _ in candidates)

    resolved_names = Counter()

    entries = []
    for macro, dev_hex, comment, dev_id in candidates:
        if name_counts[macro] > 1:
            if dev_id in pcidb:
                _, desc = pcidb[dev_id]
                suffix = _sanitize(desc)
            elif dev_id in okm:
                suffix = _sanitize(okm[dev_id])
            else:
                suffix = dev_hex.upper().replace("0X", "")

            unique_macro = f"{macro}_{suffix}"
        else:
            unique_macro = macro

        resolved_names[unique_macro] += 1
        if resolved_names[unique_macro] > 1:
            unique_macro = f"{unique_macro}_{dev_hex.upper().replace('0X', '')}"

        entries.append((unique_macro, dev_hex, comment))

    return entries


def generate_pci_map_block(entries: list) -> str:
    """Generate the pci_id_cuda_map[] entries for cuda.c."""
    lines = []
    for macro, dev_hex, comment in entries:
        lines.append("\t{")
        lines.append(f"\t\tRTE_PCI_DEVICE(NVIDIA_GPU_VENDOR_ID,")
        lines.append(f"\t\t\t\t{macro})")
        lines.append("\t},")

    return "\n".join(lines)


def update_devices_h(entries: list, path: str, okm_sha: str,
                     pci_sha: str, sync_time: str, dry_run: bool = False,
                     diff: bool = False) -> bool:
    """Update only the device ID defines in devices.h, preserving the header."""
    with open(path, "r", encoding="utf-8") as f:
        current = f.read()

    marker_pos = current.find(DEVICES_MARKER)
    if marker_pos == -1:
        print("WARNING: Could not find device ID marker in devices.h",
              file=sys.stderr)
        return False

    static_header = current[:marker_pos]

    lines = []
    lines.append(DEVICES_MARKER)

    if entries:
        max_macro = max(len(e[0]) for e in entries)
    else:
        max_macro = 40

    for macro, dev_hex, comment in entries:
        pad = " " * (max_macro - len(macro) + 2)
        lines.append(f"#define {macro}{pad}{dev_hex}  /* {comment} */")

    lines.append("")
    lines.append("#endif /* CUDA_DEVICES_H */")
    lines.append("")

    new_content = static_header + "\n".join(lines)

    if diff and os.path.exists(path):
        show_diff(current, new_content)
        return True

    if dry_run:
        print(new_content)
        return True

    def strip_timestamp(s):
        return re.sub(r'\* Last sync\s*:.*', '', s)

    if strip_timestamp(current) == strip_timestamp(new_content):
        print("devices.h is already up to date.", file=sys.stderr)
        return False

    with open(path, "w", encoding="utf-8") as f:
        f.write(new_content)
    print(f"Written to {path}", file=sys.stderr)
    return True


def update_cuda_c(entries: list, path: str, dry_run: bool = False, diff: bool = False):
    with open(path, "r", encoding="utf-8") as f:
        content = f.read()

    block = generate_pci_map_block(entries)
    replacement = f"\\1\n{block}\n\t{{\n\t\t.device_id = 0\n\t}}\n}};"
    new_content, count = CUDA_MAP_RE.subn(replacement, content)

    if count == 0:
        print("WARNING: Could not locate pci_id_cuda_map[] in cuda.c. "
              "File not modified.", file=sys.stderr)
        return

    if diff:
        show_diff(content, new_content)
        return

    if dry_run:
        print("\n--- cuda.c (new) ---")
        print(new_content)
        return

    if new_content == content:
        print("cuda.c is already up to date. Nothing to do.", file=sys.stderr)
        return

    with open(path, "w", encoding="utf-8") as f:
        f.write(new_content)
    print(f"Updated pci_id_cuda_map in {path}", file=sys.stderr)



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
    parser.add_argument("--cuda-c", metavar="PATH", default=CUDA_C_PATH,
                        help=f"Path to cuda.c (default: {CUDA_C_PATH})")
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
        okm_sha     = None

    if args.pci_file:
        print(f"WARNING: Reading PCI DB from local file '{args.pci_file}'. "
              "This may not reflect the latest upstream changes.", file=sys.stderr)
        pci_content = read_file(args.pci_file)
        pci_sha     = None
    else:
        print("Fetching PCI ID database from GitHub...", file=sys.stderr)
        pci_content = fetch_url(PCIDB_URL)
        pci_sha     = None

    cuda_c = args.cuda_c if hasattr(args, 'cuda_c') else CUDA_C_PATH

    print("Parsing OKM entries...", file=sys.stderr)
    okm   = parse_okm(okm_content)
    print(f"  {len(okm)} unique NVIDIA device IDs found in OKM", file=sys.stderr)

    print("Parsing PCI DB entries...", file=sys.stderr)
    pcidb = parse_pcidb(pci_content)
    print(f"  {len(pcidb)} NVIDIA device IDs found in PCI DB", file=sys.stderr)

    all_ids = sorted(set(okm.keys()) | set(pcidb.keys()))
    print(f"  {len(all_ids)} total unique device IDs after merge", file=sys.stderr)

    entries = build_entries(all_ids, pcidb, okm)

    sync_time  = datetime.now(timezone.utc).strftime("%Y-%m-%d %H:%M UTC")
    cuda_c = args.cuda_c if hasattr(args, 'cuda_c') else CUDA_C_PATH

    devices_changed = update_devices_h(
        entries, args.output, okm_sha, pci_sha, sync_time,
        dry_run=args.dry_run, diff=args.diff
    )

    update_cuda_c(entries, cuda_c, dry_run=args.dry_run, diff=args.diff)

    print(f"Written to {args.output}", file=sys.stderr)


if __name__ == "__main__":
    main()