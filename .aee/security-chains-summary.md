# Security Chains Summary

_Updated 2026-10-21 (pass 7). Source set: **1484 files** (5884 file edges, 16347 resolved). nova.virt (libvirt driver, vmwareapi, zvm, volume drivers, disk), nova.volume, nova.wsgi now included._

## Confirmed Chains by Severity

_No confirmed multi-hop chains found._

11 findings across 9 files evaluated (10 confirmed, 2 needs_cross_file). None qualifies as a taint source: all confirmed findings either have KB securitySurface with only `privilege`/`sink` entries (no `entry-point`), or an empty securitySurface.

## Partial Chains (1)

| Chain ID | Stopped-At File | Stopped-At Lines | Reason |
|---|---|---|---|
| chain-001 | `src/nova/accelerator/cyborg.py` | 337–337 | `no-static-edge` — no production call to `get_arq_by_uuid` in 1484 files; virt/libvirt/driver.py now extracted but does not call it; test fixture evidence remains the only indicator of a production caller |

## Terminated Chains

_None._

## Evaluated But Excluded Findings

| File | Lines | Confidence | CWE | Reason Excluded |
|---|---|---|---|---|
| `src/nova/utils.py` | 869 | confirmed | CWE-327 | No entry-point overlap; standalone crypto weakness |
| `src/nova/scheduler/filters/json_filter.py` | 104–112 | needs_cross_file | CWE-470 | Empty securitySurface; dynamic dispatch |
| `src/nova/api/metadata/handler.py` | 276–280 | confirmed | CWE-306 | Finding does not overlap entry-point (97); standalone auth-bypass |
| `src/nova/console/rfb/authvencrypt.py` | 151–152 | confirmed | CWE-297 | Empty securitySurface; TLS config weakness on outbound connection |
| `src/nova/privsep/libvirt.py` | 81–84 | confirmed | CWE-732 | Only `privilege` KB entries; standalone file-permission misconfiguration |
| `src/nova/privsep/libvirt.py` | 150–161 | needs_cross_file | CWE-73 | Sink candidate; no inbound static edges (privsep IPC); no source to chain from |
| `src/nova/virt/disk/api.py` | 612–619 | confirmed | CWE-338 | Only `privilege`/`sink` KB entries; weak PRNG inside privsep |
| `src/nova/virt/libvirt/imagecache.py` | 52 | confirmed | CWE-327 | Only `privilege`/`sink` KB entries; SHA-1 for cache filename |
| `src/nova/virt/libvirt/imagecache.py` | 317–318 | confirmed | CWE-327 | Same KB; SHA-1 for image path fingerprint |
| `src/nova/virt/zvm/utils.py` | 52–55 | confirmed | CWE-295 | Empty securitySurface; TLS cert verification disabled for z/VM connector |

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

**Why still partial (2026-10-21 pass 7, 1484 files):** `virt/libvirt/driver.py` is now extracted. It uses ARQ data (`accel_info`) passed in from the compute manager as dicts — it does NOT call `get_arq_by_uuid`. Production code has zero call sites. The test fixture (`CyborgFixture`) at `tests/fixtures/cyborg.py:274-277` mocks this method for compute manager and libvirt driver tests, which proves it IS called from production — but the caller is not in the extracted source.

**Sanitisation gap:** No UUID format check or path-character filtering between method entry (line 337) and HTTP call (lines 358–359).

**Human review required:** Production caller not identified in 1484 files. The compute manager passes ARQ data as structured dicts to the virt driver; `get_arq_by_uuid` is likely called in a compute manager or conductor utility function not yet part of the extraction. When found, verify whether the UUID argument is validated before the call.

---

## Standalone Findings (Not Part of Any Chain)

### virt/disk/api.py — Weak PRNG for Password Hash Salt (CWE-338)

**`src/nova/virt/disk/api.py:612–619`** (confirmed, medium, A02 Cryptographic Failures, CWE-338)

`_generate_salt()` uses `random.choice()` (Mersenne Twister) to build a 16-char salt for `secretutils.crypt_password()`. An attacker with PRNG state knowledge could predict the salt and reduce offline attack cost. Should use `secrets.choice()` or `os.urandom()`.

### virt/libvirt/imagecache.py — SHA-1 Without usedforsecurity=False (CWE-327)

**`src/nova/virt/libvirt/imagecache.py:52, 317–318`** (confirmed, low, A02 Cryptographic Failures, CWE-327)

Two uses of `hashlib.sha1()` for cache filename derivation without `usedforsecurity=False`. Blocks FIPS-compliant deployments.

### virt/zvm/utils.py — TLS Cert Verification Disabled (CWE-295)

**`src/nova/virt/zvm/utils.py:52–55`** (confirmed, medium, A02 Cryptographic Failures, CWE-295)

`ConnectorClient` sets `verify=False` when https is configured but no `ca_file` is provided, disabling certificate validation against the z/VM Cloud Connector.

### privsep/libvirt.py — Unvalidated Path in readpty (CWE-73)

**`src/nova/privsep/libvirt.py:150–161`** (needs_cross_file, medium, A01 Broken Access Control, CWE-73)

`readpty(path)` opens any path as root (CAP_DAC_READ_SEARCH) without validating it is a PTY device.

### authvencrypt.py — TLS Hostname Verification Gap (CWE-297)

**`src/nova/console/rfb/authvencrypt.py:151–152`** (confirmed, medium, A02 Cryptographic Failures, CWE-297)

`ssl_ctx.check_hostname = False` on proxy-to-QEMU connection.

### handler.py — HMAC Authentication Bypass (CWE-306)

**`src/nova/api/metadata/handler.py:276–280`** (confirmed, medium, A07 Identification and Authentication Failures, CWE-306)

HMAC skipped when `metadata_proxy_shared_secret` is unconfigured.

### utils.py / imagecache.py — Weak/Deprecated Hash Algorithms (CWE-327)

- `src/nova/utils.py:869` — SHA-224 in `generate_hostid` (low)
- `src/nova/virt/libvirt/imagecache.py:52, 317–318` — SHA-1 for cache filenames (low)

### privsep/libvirt.py — World-readable Disk Image (CWE-732)

**`src/nova/privsep/libvirt.py:81–84`** (confirmed, low, A05 Security Misconfiguration, CWE-732)

`os.chmod` sets world-read on ploop disk image inside privsep.
