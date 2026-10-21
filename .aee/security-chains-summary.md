# Security Chains Summary

_Updated 2026-10-21 (pass 8 — near-complete). Source set: **1509 files** (6902 file edges, 18812 resolved, **10 unresolved — all test files**). nova.context, nova.crypto, nova.quota, nova.rpc, nova.service, nova.vtpm, and remaining core files now included. Codebase is functionally complete._

## Confirmed Chains by Severity

_No confirmed multi-hop chains found._

12 findings across 10 files evaluated (11 confirmed, 2 needs_cross_file — 1 finding evaluated as both). None qualifies as a taint source.

## Partial Chains (1)

| Chain ID | Stopped-At File | Stopped-At Lines | Reason |
|---|---|---|---|
| chain-001 | `src/nova/accelerator/cyborg.py` | 337–337 | `no-static-edge` — no production call site for `get_arq_by_uuid` found in 1509 files (near-complete codebase); method may be dead code or called via local-variable dispatch invisible to static analysis |

## Terminated Chains

_None._

## Evaluated But Excluded Findings

| File | Lines | Confidence | CWE | Reason Excluded |
|---|---|---|---|---|
| `src/nova/utils.py` | 869 | confirmed | CWE-327 | No entry-point overlap; standalone crypto weakness |
| `src/nova/scheduler/filters/json_filter.py` | 104–112 | needs_cross_file | CWE-470 | Empty securitySurface; dynamic dispatch; no inbound static edges in full source set |
| `src/nova/api/metadata/handler.py` | 276–280 | confirmed | CWE-306 | Finding does not overlap entry-point (97); standalone auth-bypass |
| `src/nova/console/rfb/authvencrypt.py` | 151–152 | confirmed | CWE-297 | Empty securitySurface; TLS config weakness on outbound connection |
| `src/nova/privsep/libvirt.py` | 81–84 | confirmed | CWE-732 | Only `privilege` KB entries; standalone file-permission misconfiguration |
| `src/nova/privsep/libvirt.py` | 150–161 | needs_cross_file | CWE-73 | Sink candidate; no inbound static edges (privsep IPC); no source to chain from |
| `src/nova/virt/disk/api.py` | 612–619 | confirmed | CWE-338 | Only `privilege`/`sink` KB entries; weak PRNG inside privsep |
| `src/nova/virt/libvirt/imagecache.py` | 52 | confirmed | CWE-327 | Only `privilege`/`sink` KB entries; SHA-1 for cache filename |
| `src/nova/virt/libvirt/imagecache.py` | 317–318 | confirmed | CWE-327 | Same KB; SHA-1 for image path fingerprint |
| `src/nova/virt/zvm/utils.py` | 52–55 | confirmed | CWE-295 | Empty securitySurface; TLS cert verification disabled for z/VM connector |
| `src/nova/crypto.py` | 91–92 | confirmed | CWE-327 | Only `privilege`/`sink` KB entries; SHA-1 for X509 fingerprint display |

## Confirmed Chains Detail

_None._

## Partial Chain Detail

### chain-001 — arq_uuid URL-path injection (partial — likely dead code or local-variable dispatch)

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

**Status update (2026-10-21 pass 8, 1509 files, 10 unresolved):** The source set is now functionally complete — only 10 unresolved imports remain, all in test files. `grep` confirms `get_arq_by_uuid` appears only at its definition (`cyborg.py:337`) in all 1509 production and test files (excluding test files that define unit tests for it). No production file calls the method.

**Interpretation:**
- Five production files call `cyborg.get_client()` and use the client via a local variable; their subsequent method calls are invisible to static analysis (documented local-variable blind spot). Among these, `compute/manager.py:3024` calls `cyclient.get_arqs_for_instance()` and related methods — but NOT `get_arq_by_uuid`.
- `CyborgFixture` mocks the method but `mock_get_arq_by_uuid` is never asserted in any test — the mock is set up preemptively for all `_CyborgClient` methods.
- The method may be dead code introduced when ARQ-by-UUID lookup was planned but the production caller was not yet implemented, or the caller was removed.
- Chain remains `partial` (not `terminated`) because the local-variable blind spot prevents definitive exclusion.

**Sanitisation gap:** No UUID format check or path-character filtering between method entry (line 337) and HTTP call (lines 358–359).

**Recommendation:** Manual code review to determine if `get_arq_by_uuid` is dead code. If it is, remove the KB entry-point and close this chain. If a caller is found, verify UUID validation before the call.

---

## Standalone Findings (Not Part of Any Chain)

### nova/crypto.py — SHA-1 for X509 Fingerprint (CWE-327)

**`src/nova/crypto.py:91–92`** (confirmed, low, A02 Cryptographic Failures, CWE-327)

`generate_x509_fingerprint()` uses `hashes.SHA1()` for certificate fingerprint display. SHA-1 is deprecated; while used for display rather than authentication, it should be replaced with SHA-256 and `usedforsecurity=False` for FIPS compatibility.

### virt/disk/api.py — Weak PRNG for Password Hash Salt (CWE-338)

**`src/nova/virt/disk/api.py:612–619`** (confirmed, medium, A02 Cryptographic Failures, CWE-338)

`_generate_salt()` uses `random.choice()` (Mersenne Twister) to build a 16-char salt. Should use `secrets.choice()`.

### virt/libvirt/imagecache.py — SHA-1 Without usedforsecurity=False (CWE-327)

**Lines 52, 317–318** (confirmed, low, A02 Cryptographic Failures, CWE-327)

Two `hashlib.sha1()` calls for cache filename derivation. Blocks FIPS-compliant deployments.

### virt/zvm/utils.py — TLS Cert Verification Disabled (CWE-295)

**Lines 52–55** (confirmed, medium, A02 Cryptographic Failures, CWE-295)

`verify=False` on z/VM Cloud Connector when https is configured without `ca_file`.

### privsep/libvirt.py — Unvalidated Path in readpty (CWE-73)

**Lines 150–161** (needs_cross_file, medium, A01 Broken Access Control, CWE-73)

`readpty(path)` opens any path as root with CAP_DAC_READ_SEARCH.

### authvencrypt.py — TLS Hostname Verification Gap (CWE-297)

**Lines 151–152** (confirmed, medium, A02 Cryptographic Failures, CWE-297)

`ssl_ctx.check_hostname = False` on proxy-to-QEMU connection.

### handler.py — HMAC Authentication Bypass (CWE-306)

**Lines 276–280** (confirmed, medium, A07 Identification and Authentication Failures, CWE-306)

HMAC skipped when `metadata_proxy_shared_secret` is unconfigured.

### Weak/Deprecated Hash Algorithms (CWE-327, low)

- `nova/utils.py:869` — SHA-224 in `generate_hostid`
- `nova/virt/libvirt/imagecache.py:52, 317–318` — SHA-1 for cache filenames
- `nova/crypto.py:91–92` — SHA-1 for X509 fingerprint

### privsep/libvirt.py — World-readable Disk Image (CWE-732)

**Lines 81–84** (confirmed, low, A05 Security Misconfiguration, CWE-732)

`os.chmod` sets world-read on ploop disk image inside privsep.
