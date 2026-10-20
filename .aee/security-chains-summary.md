# Security Chains Summary

_Updated 2026-10-20 (pass 5). Source set: **532 files** (1882 file edges, 5164 resolved). nova.notifications, nova.pci, nova.policies, nova.privsep now included._

## Confirmed Chains by Severity

_No confirmed multi-hop chains found._

7 findings across 6 files evaluated. 4 confirmed findings and 2 `needs_cross_file` findings. None qualifies as a taint source: the 4 confirmed findings either lack entry-point overlap (KB securitySurface has no `entry-point` entries), or their finding lineRange does not overlap the only KB entry-point. The 2 `needs_cross_file` findings are sink candidates, but no confirmed/probable taint source can be traced to either.

## Partial Chains (1)

| Chain ID | Stopped-At File | Stopped-At Lines | Reason |
|---|---|---|---|
| chain-001 | `src/nova/accelerator/cyborg.py` | 337–337 | `no-static-edge` — `get_arq_by_uuid` does not appear in any of the 532 source files except its own definition; callers are in files not yet extracted |

## Terminated Chains

_None._

## Evaluated But Excluded Findings

| File | Lines | Confidence | CWE | Reason Excluded |
|---|---|---|---|---|
| `src/nova/utils.py` | 869 | confirmed | CWE-327 | No entry-point overlap; standalone crypto weakness |
| `src/nova/scheduler/filters/json_filter.py` | 104–112 | needs_cross_file | CWE-470 | Empty securitySurface; dynamic dispatch — no inbound static edges |
| `src/nova/api/metadata/handler.py` | 276–280 | confirmed | CWE-306 | Finding (276-280) does not overlap entry-point (97); standalone auth-bypass |
| `src/nova/console/rfb/authvencrypt.py` | 151–152 | confirmed | CWE-297 | Empty securitySurface; TLS config weakness on outbound connection |
| `src/nova/privsep/libvirt.py` | 81–84 | confirmed | CWE-732 | KB has only `privilege` entries; no entry-point. Standalone file-permission misconfiguration |
| `src/nova/privsep/libvirt.py` | 150–161 | needs_cross_file | CWE-73 | Sink candidate but no inbound static edges (privsep IPC blind spot); no source to chain from |

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

**Why still partial (2026-10-20 pass 5, 532 files):** `grep` over `src/` confirms `get_arq_by_uuid` appears **only** at its definition (cyborg.py:337). Five callers import cyborg.py but call other methods. All new namespaces checked (nova.hacking, .image, .keymgr, .limit, .notifications, .pci, .policies, .privsep) — none contain callers of `get_arq_by_uuid`.

**Sanitisation gap:** No UUID format check or path-character filtering between method entry (line 337) and HTTP call (lines 358–359).

**Human review required:** When the file(s) that call `cyborg_client.get_arq_by_uuid(arq_uuid)` are extracted (expected in nova.virt.libvirt or a compute manager task), confirm whether `arq_uuid` is validated as a well-formed UUID before the call. If not, promote this chain to `confirmed`.

---

## Standalone Findings (Not Part of Any Chain)

### privsep/libvirt.py — World-readable Disk Image Inside Privsep (CWE-732)

**`src/nova/privsep/libvirt.py:81–84`** (confirmed, low, A05 Security Misconfiguration, CWE-732)

`ploop_init` calls `os.chmod(disk_path, st.st_mode | stat.S_IROTH)` to set world-read on a ploop disk image. The inline comment acknowledges this is undesirable. Running inside `sys_admin_pctxt` with CAP_FOWNER, any local process on the compute host can read guest disk data. KB securitySurface has only `privilege` entries — no entry-point, so this cannot be a taint source. Standalone file-permission misconfiguration.

### privsep/libvirt.py — Unvalidated Path in readpty (CWE-73)

**`src/nova/privsep/libvirt.py:150–161`** (needs_cross_file, medium, A01 Broken Access Control, CWE-73)

`readpty(path)` runs as root with CAP_DAC_READ_SEARCH and opens any path without validating it is a PTY device. A caller passing an attacker-controlled path (e.g. `/etc/shadow`) would allow arbitrary file read as root. No inbound static edges exist (privsep IPC blind spot). Needs manual review when nova.virt.libvirt is extracted.

### authvencrypt.py — TLS Hostname Verification Gap (CWE-297)

**`src/nova/console/rfb/authvencrypt.py:151–152`** (confirmed, medium, A02 Cryptographic Failures, CWE-297)

`ssl_ctx.check_hostname = False` disables TLS hostname validation on the proxy-to-QEMU connection. An attacker with a CA-signed certificate for a different compute node could redirect the proxy within the management network. Standalone TLS configuration issue.

### handler.py — HMAC Authentication Bypass (CWE-306)

**`src/nova/api/metadata/handler.py:276–280`** (confirmed, medium, A07 Identification and Authentication Failures, CWE-306)

`_handle_instance_id_request_from_lb` skips HMAC validation when `metadata_proxy_shared_secret` is unconfigured, allowing provider_id spoofing and metadata disclosure. Standalone auth-bypass.

### utils.py — Weak Hash Algorithm (CWE-327)

**`src/nova/utils.py:869`** (confirmed, low, A02 Cryptographic Failures, CWE-327)

SHA-224 in `generate_hostid`. Standalone low-severity crypto issue.
