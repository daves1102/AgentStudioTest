# Dependency Analysis Summary

**Run date:** 2026-10-08  
**Scanners:** osv-scanner v2.6.0, trivy v0.75.0

## Manifest Inventory

| Manifest | Ecosystem | Component | Dependencies | Unpinned |
|---|---|---|---|---|
| `src/payload_plaintext/aurora-portal/requirements.txt` | pip | aurora-portal | 7 | 0 |
| `src/payload_plaintext/aurora-compute/go.mod` | go | aurora-compute | 4 | 0 |

**Total:** 2 manifests · 11 dependencies · 0 unpinned

---

## Advisory Matches

**93 advisories across 10 of 11 dependencies** (9 critical · 39 high · 37 medium · 7 low)  
Only github.com/miekg/dns v1.1.25 has no reported vulnerabilities.

| Dependency | Version | Ecosystem | Component | Advisory ID | Severity | CVE | Fixed In |
|---|---|---|---|---|---|---|---|
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2019-13 | **critical** | CVE-2019-14234 | 1.11.23, 2.1.11, 2.2.4 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2019-16 | **critical** | CVE-2019-19844 | 1.11.27, 2.2.9, 3.0.1 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2020-35 | **critical** | CVE-2020-7471 | 1.11.28, 2.2.10, 3.0.3 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2022-190 | **critical** | CVE-2022-28346 | 2.2.28, 3.2.13, 4.0.4 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2022-191 | **critical** | CVE-2022-28347 | 2.2.28, 3.2.13, 4.0.4 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2025-108 | **critical** | CVE-2025-64459 | 5.2.8, 5.1.14, 4.2.26 |
| `PyYAML` | 5.1 | pip | aurora-portal | PYSEC-2020-176 | **critical** | CVE-2019-20477 | 5.2 |
| `PyYAML` | 5.1 | pip | aurora-portal | PYSEC-2020-96 | **critical** | CVE-2020-1747 | 5.3.1 |
| `PyYAML` | 5.1 | pip | aurora-portal | PYSEC-2021-142 | **critical** | CVE-2020-14343 | 5.4 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2019-11 | **high** | CVE-2019-14232 | 1.11.23, 2.1.11, 2.2.4 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2019-12 | **high** | CVE-2019-14233 | 1.11.23, 2.1.11, 2.2.4 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2019-14 | **high** | CVE-2019-14235 | 1.11.23, 2.1.11, 2.2.4 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2019-15 | **high** | CVE-2019-19118 | 2.1.15, 2.2.8 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2020-31 | **high** | CVE-2020-13254 | 2.2.13, 3.0.7 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2020-33 | **high** | CVE-2020-24583 | 2.2.16, 3.0.10, 3.1.1 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2020-34 | **high** | CVE-2020-24584 | 2.2.16, 3.0.10, 3.1.1 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2020-36 | **high** | CVE-2020-9402 | 1.11.29, 2.2.11, 3.0.4 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2021-439 | **high** | CVE-2021-44420 | 2.2.25, 3.1.14, 3.2.10 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2021-7 | **high** | CVE-2021-31542 | 2.2.21, 3.1.9, 3.2.1 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2021-99 | **high** | CVE-2021-33571 | 2.2.24, 3.1.12, 3.2.4 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2022-1 | **high** | CVE-2021-45115 | 2.2.26, 3.2.11, 4.0.1 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2022-2 | **high** | CVE-2021-45116 | 2.2.26, 3.2.11, 4.0.1 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2022-20 | **high** | CVE-2022-23833 | 2.2.27, 3.2.12, 4.0.2 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2026-4035 | **high** | CVE-2026-15307 | 5.2.17, 6.0.8 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2025-105 | **high** | CVE-2025-57833 | 4.2.24, 5.1.12, 5.2.6 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2022-245 | **high** | CVE-2022-36359 | 3.2.15, 4.0.7 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2025-107 | **high** | CVE-2025-64458 | 5.2.8, 5.1.14, 4.2.26 |
| `requests` | 2.19.1 | pip | aurora-portal | PYSEC-2018-28 | **high** | CVE-2018-18074 | 2.20.0 |
| `urllib3` | 1.24.1 | pip | aurora-portal | PYSEC-2019-133 | **high** | CVE-2019-11324 | 1.24.2 |
| `urllib3` | 1.24.1 | pip | aurora-portal | PYSEC-2023-192 | **high** | CVE-2023-43804 | 2.0.6, 1.26.17 |
| `urllib3` | 1.24.1 | pip | aurora-portal | PYSEC-2026-141 | **high** | CVE-2026-44431 | 2.7.0 |
| `urllib3` | 1.24.1 | pip | aurora-portal | PYSEC-2026-1994 | **high** | CVE-2025-66471 | 2.6.0 |
| `urllib3` | 1.24.1 | pip | aurora-portal | PYSEC-2026-1996 | **high** | CVE-2026-21441 | 2.6.3 |
| `urllib3` | 1.24.1 | pip | aurora-portal | PYSEC-2026-1998 | **high** | CVE-2025-66418 | 2.6.0 |
| `urllib3` | 1.24.1 | pip | aurora-portal | PYSEC-2026-4177 | **high** | CVE-2026-97689 | 2.8.0 |
| `Jinja2` | 2.10 | pip | aurora-portal | PYSEC-2019-217 | **high** | CVE-2019-10906 | 2.10.1 |
| `Jinja2` | 2.10 | pip | aurora-portal | PYSEC-2026-1475 | **high** | CVE-2024-56326 | 3.1.5 |
| `cryptography` | 2.3 | pip | aurora-portal | PYSEC-2021-62 | **high** | CVE-2020-25659 | 3.2 |
| `cryptography` | 2.3 | pip | aurora-portal | PYSEC-2024-225 | **high** | CVE-2024-26130 | — |
| `cryptography` | 2.3 | pip | aurora-portal | PYSEC-2026-1283 | **high** | CVE-2023-50782 | 42.0.0 |
| `cryptography` | 2.3 | pip | aurora-portal | PYSEC-2026-2141 | **high** | CVE-2026-26007 | 46.0.5 |
| `cryptography` | 2.3 | pip | aurora-portal | PYSEC-2026-3553 | **high** | CVE-2026-69249 | — |
| `cryptography` | 2.3 | pip | aurora-portal | PYSEC-2026-800 | **high** | CVE-2023-0286 | 39.0.1 |
| `cryptography` | 2.3 | pip | aurora-portal | GHSA-537c-gmf6-5ccf | **high** | — | 48.0.1 |
| `paramiko` | 2.4.1 | pip | aurora-portal | PYSEC-2018-69 | **high** | CVE-2018-1000805 | 2.4.2, 2.3.3, 2.2.4, 2.1.6, 2.0.9 |
| `github.com/gin-gonic/gin` | v1.6.3 | go | aurora-compute | GO-2021-0052 | **high** | CVE-2020-28483 | 1.7.7 |
| `github.com/dgrijalva/jwt-go` | 3.2.0+incompatible | go | aurora-compute | GO-2020-0017 | **high** | CVE-2020-26160 | — |
| `gopkg.in/yaml.v2` | v2.2.2 | go | aurora-compute | GO-2022-0956 | **high** | CVE-2022-3064 | 2.2.4 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2019-10 | medium | CVE-2019-12781 | 2.1.10, 2.2.3, 1.11.22 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2019-79 | medium | CVE-2019-12308 | 1.11.21, 2.1.9, 2.2.2 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2020-32 | medium | CVE-2020-13596 | 2.2.13, 3.0.7 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2021-6 | medium | CVE-2021-28658 | 2.2.20, 3.0.14, 3.1.8 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2021-8 | medium | CVE-2021-32052 | 2.2.22, 3.1.10, 3.2.2 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2021-9 | medium | CVE-2021-3281 | 2.2.18, 3.1.6, 3.0.12 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2021-98 | medium | CVE-2021-33203 | 2.2.24, 3.1.12, 3.2.4 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2022-19 | medium | CVE-2022-22818 | 2.2.27, 3.2.12, 4.0.2 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2022-3 | medium | CVE-2021-45452 | 2.2.26, 3.2.11, 4.0.1 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2026-1297 | medium | CVE-2024-45231 | 5.1.1, 5.0.9, 4.2.16 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2026-3717 | medium | CVE-2026-15830 | 5.2.17, 6.0.8, 6.1.1 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2026-628 | medium | CVE-2019-11358 | 2.1.9, 2.2.2 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2025-47 | medium | CVE-2025-48432 | 5.2.2, 5.1.10, 4.2.22 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2026-2092 | medium | CVE-2026-53878 | 5.2.16, 6.0.7 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2026-2091 | medium | CVE-2026-53877 | 5.2.16, 6.0.7 |
| `requests` | 2.19.1 | pip | aurora-portal | PYSEC-2023-74 | medium | CVE-2023-32681 | 2.31.0 |
| `requests` | 2.19.1 | pip | aurora-portal | PYSEC-2026-1872 | medium | CVE-2024-47081 | 2.32.4 |
| `requests` | 2.19.1 | pip | aurora-portal | PYSEC-2026-1873 | medium | CVE-2024-35195 | 2.32.0 |
| `requests` | 2.19.1 | pip | aurora-portal | PYSEC-2026-2275 | medium | CVE-2026-25645 | 2.33.0 |
| `urllib3` | 1.24.1 | pip | aurora-portal | PYSEC-2019-132 | medium | CVE-2019-11236 | 1.24.3 |
| `urllib3` | 1.24.1 | pip | aurora-portal | PYSEC-2020-148 | medium | CVE-2020-26137 | 1.25.9 |
| `urllib3` | 1.24.1 | pip | aurora-portal | PYSEC-2023-207 | medium | CVE-2018-25091 | 1.24.2 |
| `urllib3` | 1.24.1 | pip | aurora-portal | PYSEC-2023-212 | medium | CVE-2023-45803 | 2.0.7, 1.26.18 |
| `urllib3` | 1.24.1 | pip | aurora-portal | PYSEC-2026-1995 | medium | CVE-2024-37891 | 1.26.19, 2.2.2 |
| `urllib3` | 1.24.1 | pip | aurora-portal | PYSEC-2026-1999 | medium | CVE-2025-50181 | 2.5.0 |
| `Jinja2` | 2.10 | pip | aurora-portal | PYSEC-2021-66 | medium | CVE-2020-28493 | 2.11.3 |
| `Jinja2` | 2.10 | pip | aurora-portal | PYSEC-2026-1471 | medium | CVE-2025-27516 | 3.1.6 |
| `Jinja2` | 2.10 | pip | aurora-portal | PYSEC-2026-1473 | medium | CVE-2024-22195 | 3.1.3 |
| `Jinja2` | 2.10 | pip | aurora-portal | PYSEC-2026-1474 | medium | CVE-2024-34064 | 3.1.4 |
| `cryptography` | 2.3 | pip | aurora-portal | PYSEC-2023-11 | medium | CVE-2023-23931 | 39.0.1 |
| `cryptography` | 2.3 | pip | aurora-portal | PYSEC-2026-1285 | medium | CVE-2024-0727 | 42.0.2 |
| `cryptography` | 2.3 | pip | aurora-portal | PYSEC-2026-35 | medium | CVE-2026-34073 | 46.0.6 |
| `cryptography` | 2.3 | pip | aurora-portal | PYSEC-2026-3554 | medium | CVE-2026-69248 | — |
| `github.com/gin-gonic/gin` | v1.6.3 | go | aurora-compute | GO-2023-1737 | medium | CVE-2023-29401 | 1.9.1 |
| `github.com/gin-gonic/gin` | v1.6.3 | go | aurora-compute | GHSA-3vp4-m3rf-835h | medium | CVE-2023-26125 | 1.9.0 |
| `gopkg.in/yaml.v2` | v2.2.2 | go | aurora-compute | GO-2020-0036 | medium | CVE-2019-11254 | 2.2.8 |
| `gopkg.in/yaml.v2` | v2.2.2 | go | aurora-compute | GO-2021-0061 | medium | CVE-2021-4235 | 2.2.3 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2026-2090 | low | CVE-2026-48588 | 5.2.16, 6.0.7 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2026-201 | low | CVE-2026-8404 | 5.2.15, 6.0.6 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2026-198 | low | CVE-2026-48587 | 5.2.15, 6.0.6 |
| `Django` | 2.2.0 | pip | aurora-portal | PYSEC-2026-199 | low | CVE-2026-6873 | 5.2.15, 6.0.6 |
| `cryptography` | 2.3 | pip | aurora-portal | GHSA-5cpq-8wj7-hf2v | low | — | 41.0.0 |
| `cryptography` | 2.3 | pip | aurora-portal | GHSA-jm77-qphf-c4w8 | low | — | 41.0.3 |
| `paramiko` | 2.4.1 | pip | aurora-portal | PYSEC-2026-2858 | low | CVE-2026-44405 | — |
| `paramiko` | 2.4.1 | pip | aurora-portal | PYSEC-2022-166 | informational | CVE-2022-24302 | — |

---

## Unpinned Dependencies

*(none — all 11 dependencies use exact version pinning: `==` for pip, explicit versions in go.mod)*

---

## Notes

- **Scanners run:** osv-scanner v2.6.0 (exit 1 = vulnerabilities found), trivy v0.75.0 (exit 0). Both completed successfully with live advisory databases.
- **Source path:** `/workspace/agents/reverse-engineering-dependency-analyzer/AgentStudioTest/src` (mapped from `/src` — symlink not present; full path used).
- **go.mod note:** `module aurora/compute` (line 1) and `go 1.21` (line 3) are module directives, not dependencies. The `require` block spans lines 5–10; 4 direct dependencies declared (lines 6–9), 0 marked `// indirect`.
- **PyYAML 5.1:** CVE-2019-20477 and CVE-2020-14343 are both critical — the `yaml.load()` calls in `aurora_portal/api.py` and `telemetry_consumer.py` (confirmed by security findings) are directly exploitable via these advisories.
- **github.com/dgrijalva/jwt-go 3.2.0+incompatible:** This library is unmaintained and has been replaced by `github.com/golang-jwt/jwt`. Trivy reports no `fixedIn` version — migration to the successor library is the only remediation.
- **Transitive advisories:** Neither scanner reported transitive-only packages lacking manifest declarations. No transitive entries to add.
- **OSV groups with empty max_severity:** Several GHSA-only entries (e.g. GHSA-5cpq-8wj7-hf2v for cryptography, GHSA-jm77-qphf-c4w8 for cryptography) carried no CVSS score in the OSV database; severity resolved from Trivy where available, otherwise recorded as `informational`.
