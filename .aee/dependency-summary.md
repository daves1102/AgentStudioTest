# Dependency Analysis Summary

**Run date:** 2026-10-03

## Manifest Inventory

| Manifest | Ecosystem | Component | Dependencies | Unpinned |
|---|---|---|---|---|
| `src/payload_plaintext/aurora-portal/requirements.txt` | pip | aurora-portal | 7 | 0 |

**Total:** 1 manifest · 7 dependencies · 0 unpinned

---

## Advisory Matches

All 7 dependencies have at least one known advisory match (sorted by severity, critical first):

| Dependency | Version | Ecosystem | Component | Advisory ID | Severity | CVE | Fixed In |
|---|---|---|---|---|---|---|---|
| paramiko | 2.4.1 | pip | aurora-portal | PYSEC-2018-34 | **critical** | CVE-2018-1000805 | 2.4.2 |
| PyYAML | 5.1 | pip | aurora-portal | PYSEC-2020-89 | **critical** | CVE-2020-1747 | 5.3.1 |
| Django | 2.2.0 | pip | aurora-portal | PYSEC-2019-16 | **high** | CVE-2019-14234 | 2.2.4 |
| Django | 2.2.0 | pip | aurora-portal | PYSEC-2019-14 | medium | CVE-2019-14232 | 2.2.4 |
| requests | 2.19.1 | pip | aurora-portal | PYSEC-2018-28 | **high** | CVE-2018-18074 | 2.20.0 |
| urllib3 | 1.24.1 | pip | aurora-portal | PYSEC-2019-132 | **high** | CVE-2019-11324 | 1.24.2 |
| urllib3 | 1.24.1 | pip | aurora-portal | PYSEC-2019-133 | medium | CVE-2019-11236 | 1.24.3 |
| Jinja2 | 2.10 | pip | aurora-portal | PYSEC-2019-217 | **high** | CVE-2019-10906 | 2.10.1 |
| cryptography | 2.3 | pip | aurora-portal | PYSEC-2020-265 | medium | CVE-2020-25659 | 3.2 |

**Summary:** 2 critical · 4 high · 3 medium

---

## Unpinned Dependencies

_(none — all 7 dependencies are pinned with exact versions via `==`)_

---

## Notes

- All dependencies parsed successfully from `src/payload_plaintext/aurora-portal/requirements.txt`.
- Every dependency uses `==` pinning; no wildcards or range constraints found.
- The `PyYAML 5.1` advisory (CVE-2020-1747) is particularly relevant given that `aurora_portal/api.py` and `aurora_portal/telemetry_consumer.py` call `yaml.load()` without a SafeLoader — the vulnerable function is actively used.
- `paramiko 2.4.1` (CVE-2018-1000805) allows authenticated SSH clients to bypass authorization via a crafted packet; upgrade to ≥ 2.4.2 is required.
