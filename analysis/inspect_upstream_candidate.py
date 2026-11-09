"""Inspect one previously pinned public firmware candidate without installation."""

import base64
import hashlib
import json
from pathlib import Path
import struct
import urllib.request


OUTPUT = Path(__file__).resolve().parent


def fetch(url):
    with urllib.request.urlopen(url, timeout=30) as response:
        return response.read(2 * 1024 * 1024)


def main():
    comparison = json.loads((OUTPUT / "upstream-comparison.json").read_text())
    repository = comparison["repository"]
    commit = comparison["upstream_commit"]
    raw = base64.b64decode(fetch(comparison["blob_url"]), validate=True)
    whence_url = repository + "/+/" + commit + "/WHENCE?format=TEXT"
    whence = base64.b64decode(fetch(whence_url), validate=True).decode()
    position = whence.find("Driver: rtl8192ee")
    if position < 0:
        raise ValueError("Pinned WHENCE lacks the expected driver record")
    end = whence.find("\nDriver:", position + 1)
    record = whence[position:end if end >= 0 else len(whence)]
    assert "rtlwifi/rtl8192eefw.bin -> rtl8192eu_nic.bin" in record
    signature, category, function, version, subversion, reserved1, month, day, hour, minute, ram_size, reserved2, revision = struct.unpack_from("<HBBHBBBBBBHHI", raw)
    report = {
        "schema": "openmitrastar.rtl8192ee-public-candidate/v1", "upstream_commit": commit,
        "upstream_blob_path": comparison["upstream_blob_path"], "sha256": hashlib.sha256(raw).hexdigest(),
        "bytes": len(raw), "header_bytes": 32, "payload_bytes": len(raw) - 32,
        "signature": hex(signature), "category": category, "function": function,
        "version": version, "subversion": subversion, "revision": revision,
        "ramcodesize": ram_size, "ramcodesize_matches_payload": ram_size == len(raw) - 32,
        "padding_to_dword": (-ram_size) % 4,
        "timestamp_literal_bytes": [month, day, hour, minute],
        "whence_url": whence_url, "whence_record": record,
        "declared_for_rtl8192ee_by_alias": True,
        "fits_current_0x8000_allocation": len(raw) + (-ram_size) % 4 <= 0x8000,
        "hardware_accessed": False, "installed": False,
        "limitation": "Vendor-declared alias and size checks do not establish runtime equivalence with this HGW500.",
    }
    (OUTPUT / "upstream-candidate.json").write_text(json.dumps(report, indent=2) + "\n")
    print(json.dumps(report, indent=2))


if __name__ == "__main__":
    main()
