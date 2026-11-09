"""Compare the local firmware with one pinned linux-firmware upstream blob."""

import base64
import hashlib
import json
from pathlib import Path
import urllib.request


OUTPUT = Path(__file__).resolve().parent
REPOSITORY = "https://kernel.googlesource.com/pub/scm/linux/kernel/git/firmware/linux-firmware"
SOURCE = Path("/workspace/build/core-r1-product-r3/root/lib/firmware/rtlwifi/rtl8192eefw.bin")


def fetch(url):
    request = urllib.request.Request(url, headers={"User-Agent": "OpenMitraStar-offline-firmware-review"})
    with urllib.request.urlopen(request, timeout=30) as response:
        data = response.read(2 * 1024 * 1024 + 1)
    if len(data) > 2 * 1024 * 1024:
        raise ValueError("Unexpectedly large upstream response")
    return data


def main():
    report = {"schema": "openmitrastar.rtl8192ee-upstream-comparison/v1", "hardware_accessed": False}
    try:
        head_url = REPOSITORY + "/+/refs/heads/main?format=JSON"
        head = json.loads(fetch(head_url).split(b"\n", 1)[1])
        commit = head["commit"]
        blob_url = REPOSITORY + "/+/" + commit + "/rtlwifi/rtl8192eu_nic.bin?format=TEXT"
        upstream = base64.b64decode(fetch(blob_url), validate=True)
        local = SOURCE.read_bytes()
        report.update({
            "status": "PASS_BYTE_EQUAL" if upstream == local else "DIFFERENT_UPSTREAM_BLOB",
            "repository": REPOSITORY, "upstream_commit": commit,
            "upstream_blob_path": "rtlwifi/rtl8192eu_nic.bin", "blob_url": blob_url,
            "local_path": str(SOURCE), "local_bytes": len(local), "upstream_bytes": len(upstream),
            "local_sha256": hashlib.sha256(local).hexdigest(),
            "upstream_sha256": hashlib.sha256(upstream).hexdigest(),
            "byte_equal": upstream == local,
            "alias_source_commit": "b986edd80647b68af068ebaaa1323d2b046c5435",
            "comparison_scope": "Current main snapshot in the kernel.org Git mirror. No firmware installation or body replacement.",
        })
    except Exception as error:
        report.update({"status": "UPSTREAM_COMPARISON_UNAVAILABLE", "error_type": type(error).__name__, "error": str(error)})
    (OUTPUT / "upstream-comparison.json").write_text(json.dumps(report, indent=2) + "\n")
    print(json.dumps(report, indent=2))


if __name__ == "__main__":
    main()
