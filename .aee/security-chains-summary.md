# Security Chains Summary

_Updated 2026-10-20 (pass 4). Source set: **443 files** (1577 file edges, 4548 resolved). nova.hacking, nova.image, nova.keymgr, nova.limit, nova.conf.imagecache now included._

## Confirmed Chains by Severity

_No confirmed multi-hop chains found._

All 5 security findings across 443 files were evaluated (3 confirmed, 1 needs_cross_file, zero probable). None qualifies as a taint source: the 3 confirmed findings either lack entry-point overlap in their KB records or have an empty securitySurface. The 2 `needs_cross_file` findings are used as sink candidates (per protocol) but no confirmed/probable findings overlap any entry-point to start a chain from.

## Partial Chains (1)

| Chain ID | Stopped-At File | Stopped-At Lines | Reason |
|---|---|---|---|
| chain-001 | `src/nova/accelerator/cyborg.py` | 337–337 | `no-static-edge` — `get_arq_by_uuid` does not appear in any of the 443 source files except its own definition; callers are in files not yet extracted |

## Terminated Chains

_None._

## Evaluated But Excluded Findings

| File | Lines | Confidence | CWE | Reason Excluded |
|---|---|---|---|---|
| `src/nova/utils.py` | 869 | confirmed | CWE-327 | No entry-point overlap; standalone crypto weakness |
| `src/nova/scheduler/filters/json_filter.py` | 104–112 | needs_cross_file | CWE-470 | Empty securitySurface; scheduler filter loaded via dynamic dispatch |
| `src/nova/api/metadata/handler.py` | 276–280 | confirmed | CWE-306 | Finding (276-280) does not overlap entry-point (97); auth-bypass, not injection |
| `src/nova/console/rfb/authvencrypt.py` | 151–152 | confirmed | CWE-297 | Empty securitySurface; TLS config weakness on outbound management-network connection |

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

**Why still partial (2026-10-20 pass 4, 443 files):** A `grep` over the full `src/` tree confirms `get_arq_by_uuid` appears **only** at its definition (cyborg.py:337). It is not called anywhere in the 443-file source set. Five callers import cyborg.py (`compute/api.py`, `compute/manager.py`, `compute/utils.py`, `conductor/manager.py`, `network/neutron.py`) and each calls `get_client` (or `get_device_profile_request_groups`, `get_arq_pci_device_profile`, `get_device_amount_of_dp_groups`) — none calls `get_arq_by_uuid`. The new namespaces added in this pass (nova.hacking, nova.image, nova.keymgr, nova.limit) also contain no callers. The method's callers remain in source files not yet extracted from the nova codebase.

**Sanitisation gap:** No UUID format check or path-character filtering between method entry (line 337) and HTTP call (lines 358–359).

**Human review required:** When the file(s) that call `cyborg_client.get_arq_by_uuid(arq_uuid)` are extracted, confirm whether `arq_uuid` is validated as a well-formed UUID before the call. If not, promote this chain to `confirmed`. Based on the Nova architecture, this call is likely in nova.virt or a compute manager task for accelerator lifecycle (bind/unbind ARQ).

---

## Standalone Findings (Not Part of Any Chain)

These confirmed findings are security-relevant but do not qualify as taint sources under the cross-file correlation protocol.

### authvencrypt.py — TLS Hostname Verification Gap (CWE-297)

**`src/nova/console/rfb/authvencrypt.py:151–152`** (confirmed, medium, A02 Cryptographic Failures, CWE-297)

In the VeNCrypt security handshake, `ssl_ctx.check_hostname = False` (line 152) disables TLS hostname validation on the proxy-to-QEMU connection while retaining CA chain verification. An attacker with a CA-signed certificate for a *different* compute node could redirect the proxy to an alternative target within the management network without triggering a TLS error. The securitySurface for this file is empty, so it cannot be a taint source per protocol. This is a standalone TLS configuration issue on an internal management-network path.

### handler.py — HMAC Authentication Bypass (CWE-306)

**`src/nova/api/metadata/handler.py:276–280`** (confirmed, medium, A07 Identification and Authentication Failures, CWE-306)

`_handle_instance_id_request_from_lb` skips HMAC validation of `X-Metadata-Provider` when `CONF.neutron.metadata_proxy_shared_secret` is empty. In unconfigured deployments, any request with an `X-Metadata-Provider` header is accepted without proof of origin, allowing provider_id spoofing and metadata disclosure. The KB entry-point is at line 97 (the WSGI decorator), not at lines 276-280, so this finding does not overlap an entry-point and cannot be a taint source.

### utils.py — Weak Hash Algorithm (CWE-327)

**`src/nova/utils.py:869`** (confirmed, low, A02 Cryptographic Failures, CWE-327)

SHA-224 used in `generate_hostid` for host fingerprinting. No entry-point overlap. Standalone low-severity crypto issue.
