# Security Chains Summary

_Updated 2026-10-21 (pass 6). Source set: **1388 files** (5129 file edges, 13877 resolved). nova.tests (unit + functional + fixtures) now included, plus nova.servicegroup + nova.share._

## Confirmed Chains by Severity

_No confirmed multi-hop chains found._

7 findings across 6 files evaluated. Same 6 finding files as pass 5 — no new findings from the large test batch. 4 confirmed findings and 2 `needs_cross_file` findings. None qualifies as a taint source.

## Partial Chains (1)

| Chain ID | Stopped-At File | Stopped-At Lines | Reason |
|---|---|---|---|
| chain-001 | `src/nova/accelerator/cyborg.py` | 337–337 | `no-static-edge` — no production call to `get_arq_by_uuid` in 1388 files; test fixture confirms method IS used in production but caller not yet extracted |

## Terminated Chains

_None._

## Evaluated But Excluded Findings

| File | Lines | Confidence | CWE | Reason Excluded |
|---|---|---|---|---|
| `src/nova/utils.py` | 869 | confirmed | CWE-327 | No entry-point overlap; standalone crypto weakness |
| `src/nova/scheduler/filters/json_filter.py` | 104–112 | needs_cross_file | CWE-470 | Empty securitySurface; dynamic dispatch — no inbound static edges |
| `src/nova/api/metadata/handler.py` | 276–280 | confirmed | CWE-306 | Finding (276-280) does not overlap entry-point (97); standalone auth-bypass |
| `src/nova/console/rfb/authvencrypt.py` | 151–152 | confirmed | CWE-297 | Empty securitySurface; TLS config weakness on outbound connection |
| `src/nova/privsep/libvirt.py` | 81–84 | confirmed | CWE-732 | KB has only `privilege` entries; standalone file-permission misconfiguration |
| `src/nova/privsep/libvirt.py` | 150–161 | needs_cross_file | CWE-73 | Sink candidate; no inbound static edges (privsep IPC blind spot); no source to chain from |

## Confirmed Chains Detail

_None._

## Partial Chain Detail

### chain-001 — arq_uuid URL-path injection (partial, persistent)

| Field | Value |
|---|---|
| **Status** | partial |
| **OWASP** | A03 Injection |
| **CWE** | CWE-74 |
| **Severity** | medium |
| **Confidence** | needs_cross_file |
| **Severity Upgrade** | none (no cross-component hop traced) |

**Source (KB entry-point):** `src/nova/accelerator/cyborg.py:337`
Parameter `arq_uuid` accepted from caller by `_CyborgClient.get_arq_by_uuid`.

**Sink:** `src/nova/accelerator/cyborg.py:358–359`
`arq_uuid` concatenated into the Cyborg REST API URL via `"/".join([self.ARQ_URL, arq_uuid])` — no UUID-format or path-character filtering.

**Why still partial (2026-10-21 pass 6, 1388 files):** `grep` over `src/` confirms `get_arq_by_uuid` has **no production call site** in any of the 1388 extracted files. It appears only at:
- its definition (`cyborg.py:337`)
- `tests/fixtures/cyborg.py:274-277, 341` (test mock setup and fake implementation)
- `tests/unit/accelerator/test_cyborg.py:426-457` (unit tests calling via `self.client` — local variable, link-graph blind spot)

The test fixture (`CyborgFixture`) mocks `_CyborgClient.get_arq_by_uuid` and is used by `tests/unit/compute/test_compute_mgr.py` and `tests/unit/virt/libvirt/test_driver.py` — strongly indicating the production caller is in `nova.virt.libvirt` or a compute manager accelerator workflow. Those files are not yet extracted.

**Sanitisation gap:** No UUID format check or path-character filtering between method entry (line 337) and HTTP call (lines 358–359).

**Human review required:** The production caller is likely in `nova.virt.libvirt.driver` or `nova.compute.manager` (accelerator bind/unbind path). When extracted, confirm whether `arq_uuid` is validated as a well-formed UUID before the call. If not, promote this chain to `confirmed`.

---

## Standalone Findings (Not Part of Any Chain)

### privsep/libvirt.py — World-readable Disk Image Inside Privsep (CWE-732)

**`src/nova/privsep/libvirt.py:81–84`** (confirmed, low, A05 Security Misconfiguration, CWE-732)

`ploop_init` calls `os.chmod(disk_path, st.st_mode | stat.S_IROTH)` to set world-read on a ploop disk image inside `sys_admin_pctxt` with CAP_FOWNER. Standalone file-permission misconfiguration.

### privsep/libvirt.py — Unvalidated Path in readpty (CWE-73)

**`src/nova/privsep/libvirt.py:150–161`** (needs_cross_file, medium, A01 Broken Access Control, CWE-73)

`readpty(path)` runs as root with CAP_DAC_READ_SEARCH and opens any path without validating it is a PTY device. Needs manual review when `nova.virt.libvirt` is extracted.

### authvencrypt.py — TLS Hostname Verification Gap (CWE-297)

**`src/nova/console/rfb/authvencrypt.py:151–152`** (confirmed, medium, A02 Cryptographic Failures, CWE-297)

`ssl_ctx.check_hostname = False` disables TLS hostname validation on proxy-to-QEMU connection.

### handler.py — HMAC Authentication Bypass (CWE-306)

**`src/nova/api/metadata/handler.py:276–280`** (confirmed, medium, A07 Identification and Authentication Failures, CWE-306)

`_handle_instance_id_request_from_lb` skips HMAC validation when `metadata_proxy_shared_secret` is unconfigured.

### utils.py — Weak Hash Algorithm (CWE-327)

**`src/nova/utils.py:869`** (confirmed, low, A02 Cryptographic Failures, CWE-327)

SHA-224 in `generate_hostid`. Standalone low-severity crypto issue.
