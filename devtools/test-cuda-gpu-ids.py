#!/usr/bin/env python3
# SPDX-License-Identifier: BSD-3-Clause
# Copyright(c) 2026 DPDK contributors


import argparse
import os
import re
import sys


DEVICES_H_PATH = os.path.join(os.path.dirname(__file__),
                              "..", "drivers", "gpu", "cuda", "devices.h")
CUDA_C_PATH    = os.path.join(os.path.dirname(__file__),
                              "..", "drivers", "gpu", "cuda", "cuda.c")


DEFINE_RE = re.compile(
    r'^\s*#define\s+(NVIDIA_GPU_\w+)\s+(0x[0-9a-fA-F]{4})',
    re.MULTILINE
)

PCI_MAP_RE = re.compile(
    r'RTE_PCI_DEVICE\s*\(\s*NVIDIA_GPU_VENDOR_ID\s*,\s*(NVIDIA_GPU_\w+)\s*\)'
)


def parse_devices_h(content: str) -> dict:
    """
    Return {macro_name: device_id_int} from devices.h.
    """
    result = {}
    for m in DEFINE_RE.finditer(content):
        macro  = m.group(1)
        dev_id = int(m.group(2), 16)
        result[macro] = dev_id
    return result


def parse_cuda_c(content: str) -> list:
    """
    Return list of macro names from pci_id_cuda_map[] in cuda.c.
    Preserves order and duplicates for duplicate detection.
    """
    return PCI_MAP_RE.findall(content)


def check_no_duplicate_defines(defines: dict, raw_matches: list) -> list:
    """
    Check for duplicate macro names in devices.h.
    raw_matches: list of (macro, dev_id_str) from re.findall
    """
    errors  = []
    seen    = {}
    for macro, dev_hex in raw_matches:
        dev_id = int(dev_hex, 16)
        if macro in seen:
            errors.append(
                f"  DUPLICATE macro in devices.h: {macro} "
                f"(0x{seen[macro]:04x} and 0x{dev_id:04x})"
            )
        else:
            seen[macro] = dev_id

    id_to_macros = {}
    for macro, dev_id in defines.items():
        id_to_macros.setdefault(dev_id, []).append(macro)
    for dev_id, macros in id_to_macros.items():
        if len(macros) > 1:
            errors.append(
                f"  DUPLICATE device ID 0x{dev_id:04x} in devices.h "
                f"under macros: {', '.join(macros)}"
            )
    return errors


def check_no_duplicate_map_entries(map_macros: list) -> list:
    """Check for duplicate macro entries in pci_id_cuda_map[]."""
    errors = []
    seen   = {}
    for macro in map_macros:
        seen[macro] = seen.get(macro, 0) + 1
    for macro, count in seen.items():
        if count > 1:
            errors.append(
                f"  DUPLICATE entry in pci_id_cuda_map[]: {macro} "
                f"appears {count} times"
            )
    return errors


def check_defines_in_map(defines: dict, map_macros: list) -> list:
    """Check every #define in devices.h has an entry in pci_id_cuda_map[]."""
    map_set = set(map_macros)
    errors  = []
    for macro in sorted(defines):
        if macro not in map_set:
            errors.append(
                f"  {macro} (0x{defines[macro]:04x}) "
                f"defined in devices.h but missing from pci_id_cuda_map[]"
            )
    return errors


def check_map_in_defines(defines: dict, map_macros: list) -> list:
    """Check every pci_id_cuda_map[] entry has a #define in devices.h."""
    errors = []
    for macro in sorted(set(map_macros)):
        if macro not in defines:
            errors.append(
                f"  {macro} in pci_id_cuda_map[] but not defined in devices.h"
            )
    return errors


def main():
    parser = argparse.ArgumentParser(
        description="Validate drivers/gpu/cuda/devices.h and cuda.c are consistent"
    )
    parser.add_argument("--devices-h", metavar="PATH", default=DEVICES_H_PATH,
                        help=f"Path to devices.h (default: {DEVICES_H_PATH})")
    parser.add_argument("--cuda-c", metavar="PATH", default=CUDA_C_PATH,
                        help=f"Path to cuda.c (default: {CUDA_C_PATH})")
    parser.add_argument("--verbose", action="store_true",
                        help="Print passing checks as well as failures")
    args = parser.parse_args()

    for path in (args.devices_h, args.cuda_c):
        if not os.path.exists(path):
            print(f"ERROR: File not found: {path}", file=sys.stderr)
            sys.exit(1)

    with open(args.devices_h, "r", encoding="utf-8") as f:
        devices_content = f.read()

    with open(args.cuda_c, "r", encoding="utf-8") as f:
        cuda_content = f.read()

    raw_define_matches = DEFINE_RE.findall(devices_content)
    defines            = parse_devices_h(devices_content)
    map_macros         = parse_cuda_c(cuda_content)

    print(f"devices.h : {len(defines)} device ID definitions")
    print(f"cuda.c    : {len(map_macros)} pci_id_cuda_map entries")
    print()

    all_errors = []
    checks = [
        ("No duplicate #defines in devices.h",
         check_no_duplicate_defines(defines, raw_define_matches)),
        ("No duplicate entries in pci_id_cuda_map[]",
         check_no_duplicate_map_entries(map_macros)),
        ("All devices.h defines present in pci_id_cuda_map[]",
         check_defines_in_map(defines, map_macros)),
        ("All pci_id_cuda_map[] entries defined in devices.h",
         check_map_in_defines(defines, map_macros)),
    ]

    for check_name, errors in checks:
        if errors:
            print(f"FAIL: {check_name}")
            for e in errors:
                print(e)
            print()
            all_errors.extend(errors)
        else:
            if args.verbose:
                print(f"PASS: {check_name}")

    print()
    if all_errors:
        print(f"FAILED: {len(all_errors)} issue(s) found.")
        print("Run 'python devtools/sync-cuda-gpu-ids.py' to fix.")
        sys.exit(1)
    else:
        print("All checks passed.")
        sys.exit(0)


if __name__ == "__main__":
    main()