"""Compare evidence of mailbox register access in the two microfirmwares."""

import csv
import json
from pathlib import Path


OUTPUT = Path(__file__).resolve().parent
SOURCES = {
    "installed_19_0": (
        Path("/workspace/build/core-r1-product-r3/root/lib/firmware/rtlwifi/rtl8192eefw.bin"), OUTPUT,
    ),
    "upstream_35_7": (
        Path("/workspace/build/evidence/hgw500-rtl8192ee-20261103/public-candidate/rtl8192eu_nic.bin"), OUTPUT / "public-candidate",
    ),
}
REGISTERS = {"HMETFR": 0x1cc, "HMEBOX_0": 0x1d0, "C2HEVT_MSG_NORMAL": 0x1a0, "C2HEVT_CLEAR": 0x1af}


def main():
    report = {
        "schema": "openmitrastar.rtl8192ee-mailbox-observations/v1",
        "scope": "Exact MOV DPTR immediate byte patterns, with decoded-instruction status independently checked. Access through computed addresses and ROM helpers is outside this projection.",
        "driver_register_source": "/workspace/OpenMitraStar/HGW500/drivers/realtek/kernel/radio2g-linux-7.3-v1/overlay/drivers/net/wireless/realtek/rtlwifi/rtl8192ee/reg.h",
        "firmwares": {}, "hardware_accessed": False,
    }
    for name, (source, export) in SOURCES.items():
        raw = source.read_bytes()
        rows = list(csv.DictReader((export / "ghidra-instructions.tsv").open(), delimiter="\t"))
        offsets = {int(row["file_offset"]): row for row in rows}
        observations = {}
        for register, value in REGISTERS.items():
            pattern = bytes([0x90]) + value.to_bytes(2, "big")
            hits = []
            position = raw.find(pattern, 32)
            while position >= 0:
                instruction = offsets.get(position)
                hits.append({
                    "file_offset": position, "code_address": hex(position - 32 + 0x4000),
                    "bytes": pattern.hex(),
                    "decoded_instruction": instruction["instruction"] if instruction else None,
                    "native_instruction_verified": instruction is not None and instruction["bytes"] == pattern.hex(),
                })
                position = raw.find(pattern, position + 1)
            observations[register] = {"register_address": hex(value), "observations": hits}
        report["firmwares"][name] = observations
    (OUTPUT / "mailbox-comparison.json").write_text(json.dumps(report, indent=2) + "\n")
    print(json.dumps(report, indent=2))


if __name__ == "__main__":
    main()
