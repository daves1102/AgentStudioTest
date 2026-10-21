# Security Posture Report

_Batch: `624338e5475ffbce89d00d3abf4134e98314eb03` — 2026-10-21_

## Executive Summary

| Metric | Value |
|--------|-------|
| Total findings | 11 |
| Critical findings | 0 |
| High findings | 0 |
| Medium findings | 7 |
| Low findings | 4 |
| Confirmed taint chains | 0 |
| Partial taint chains | 1 |
| Terminated chains | 0 |

Sources: `.aee/security-log.jsonl` (1,484 files analysed, 9 files with findings); `.aee/security-chains.json` (`summary`). Batch 9 adds 4 new individual findings across 3 new finding files: `virt/disk/api.py` (CWE-338, medium), `virt/libvirt/imagecache.py` (CWE-327 at L52 and L317–318, low), and `virt/zvm/utils.py` (CWE-295, medium).

---

## Top Findings

Top 10 of 11 findings by severity then confidence. Finding 11 (`virt/libvirt/imagecache.py` L317–318, CWE-327, low confirmed) is omitted from this table; it is documented in the finding detail below.

| # | File | Line Range | Title | OWASP Category | CWE | Severity | Confidence | Tool |
|---|------|-----------|-------|----------------|-----|----------|------------|------|
| 1 | `src/nova/api/metadata/handler.py` | 276–280 | HMAC validation of metadata proxy request conditionally skipped when shared secret is unconfigured | A07 Identification and Authentication Failures | CWE-306 | medium | confirmed | manual |
| 2 | `src/nova/console/rfb/authvencrypt.py` | 151–152 | TLS hostname verification disabled in VeNCrypt security handshake | A02 Cryptographic Failures | CWE-297 | medium | confirmed | manual |
| 3 | `src/nova/virt/disk/api.py` | 612–619 | Non-cryptographic PRNG (`random.choice`) used to generate password hash salt | A02 Cryptographic Failures | CWE-338 | medium | confirmed | bandit, manual |
| 4 | `src/nova/virt/zvm/utils.py` | 52–55 | TLS certificate verification disabled when z/VM connector URL lacks CA file | A02 Cryptographic Failures | CWE-295 | medium | confirmed | manual |
| 5 | `src/nova/accelerator/cyborg.py` | 358–359 | Caller-supplied `arq_uuid` concatenated into Cyborg API URL path without visible validation | A03 Injection | CWE-74 | medium | needs_cross_file | manual |
| 6 | `src/nova/scheduler/filters/json_filter.py` | 104–112 | User-controlled scheduler hint string used as `getattr` attribute name on `HostState` | A01 Broken Access Control | CWE-470 | medium | needs_cross_file | manual |
| 7 | `src/nova/privsep/libvirt.py` | 150–161 | `readpty` opens unvalidated path as root with `CAP_DAC_READ_SEARCH` | A01 Broken Access Control | CWE-73 | medium | needs_cross_file | manual |
| 8 | `src/nova/utils.py` | 869 | SHA-224 used to generate obfuscated host ID — deprecated in stricter security policies | A02 Cryptographic Failures | CWE-327 | low | confirmed | semgrep |
| 9 | `src/nova/privsep/libvirt.py` | 81–84 | ploop disk image set world-readable (`S_IROTH`) inside privsep | A05 Security Misconfiguration | CWE-732 | low | confirmed | manual |
| 10 | `src/nova/virt/libvirt/imagecache.py` | 52–52 | SHA-1 hash used for image cache filename without `usedforsecurity=False` | A02 Cryptographic Failures | CWE-327 | low | confirmed | semgrep, bandit |

**Finding 1 detail** (`.aee/security/src/nova/api/metadata/handler.py.findings.json`): In `_handle_instance_id_request_from_lb` (lines 265–296), the HMAC signature check is guarded by `if CONF.neutron.metadata_proxy_shared_secret:` (line 277). When absent, `X-Metadata-Provider` and `X-Forwarded-For` headers are accepted without authentication. Constructor (lines 53–57) logs a WARNING when the secret is absent but does not reject requests.

**Finding 2 detail** (`.aee/security/src/nova/console/rfb/authvencrypt.py.findings.json`): `ssl_ctx.check_hostname = False` (line 152) disables TLS hostname validation on the proxy-to-QEMU connection while retaining CA chain verification.

**Finding 3 detail** (`.aee/security/src/nova/virt/disk/api.py.findings.json`): `_generate_salt` (lines 612–619) uses `random.choice(salt_set)` (line 619) — Mersenne Twister PRNG — to generate a cryptographic salt. The salt is used at line 649 (`algos['MD5'] + salt`) to hash admin passwords. Tool: bandit B311, manual; OWASP A02 / CWE-338. Severity medium: deterministic PRNG observable to local attacker. Citation range L612–619 includes 2 leading blank lines; the finding content is within the cited range.

**Finding 4 detail** (`.aee/security/src/nova/virt/zvm/utils.py.findings.json`): In the z/VM Cloud Connector initialisation (lines 52–55), when HTTPS is configured but no CA file is provided (`_ssl_enabled=True`, `ca_file=None`), the condition `if _ssl_enabled and ca_file` is False, falling to an `else` branch with `connector.ZVMConnector(..., verify=False)`. No warning is emitted for this case. Tool: manual; OWASP A02 / CWE-295. Severity medium: explicit `verify=False`; management-network access required.

**Finding 5 detail** (`.aee/security/src/nova/accelerator/cyborg.py.findings.json`): In `get_arq_by_uuid`, `arq_uuid` is interpolated into the Cyborg REST API URL path via `"/".join([self.ARQ_URL, arq_uuid])` (line 359). No UUID format check or path-character filtering visible in this file.

**Finding 6 detail** (`.aee/security/src/nova/scheduler/filters/json_filter.py.findings.json`): In `_parse_string` (lines 93–112), scheduler hint strings starting with `$` have their first segment passed to `getattr(host_state, path[0], None)` (line 105), allowing probing of arbitrary `HostState` attributes.

**Finding 7 detail** (`.aee/security/src/nova/privsep/libvirt.py.findings.json`): `readpty` (lines 150–161) is a privsep entrypoint with `CAP_DAC_READ_SEARCH`. Line 161 opens `path` directly with no validation; developer TODO at lines 151–152 explicitly acknowledges the missing path check. If `path` is externally reachable, arbitrary root file read is possible.

**Finding 8 detail** (`.aee/security/src/nova/utils.py.findings.json`): `generate_hostid` (lines 857–871) uses `hashlib.sha224` (line 869); disallowed by NIST SP 800-131Ar2 and some policies.

**Finding 9 detail** (`.aee/security/src/nova/privsep/libvirt.py.findings.json`): Inside `sys_admin_pctxt`, `os.chmod(disk_path, st.st_mode | stat.S_IROTH)` (line 84) sets world-read on a ploop disk image. Developer TODO at lines 78–82 flags this as undesirable.

**Finding 10 detail** (`.aee/security/src/nova/virt/libvirt/imagecache.py.findings.json`): `hashlib.sha1(image_id.encode('utf-8')).hexdigest()` at line 52 derives a cache filename without `usedforsecurity=False`. Tools: bandit B324, semgrep SHA-1 rule. OWASP A02 / CWE-327. Severity low: non-password hash (cache filename derivation); no direct attack path but FIPS incompatible. Note: scanners also flag L109 (`hashlib.sha1().digest_size`) but that queries digest size metadata without hashing data — confirmed false positive, correctly excluded.

**Finding 11 detail** (`.aee/security/src/nova/virt/libvirt/imagecache.py.findings.json`): `hashlib.sha1(encodeutils.safe_encode(img)).hexdigest()` at lines 317–318 derives an image path fingerprint without `usedforsecurity=False`. Same file and KB as finding 10. Tools: bandit B324, semgrep SHA-1 rule. Severity low; same FIPS compliance concern.

---

## Confirmed Taint Chains

No confirmed taint chains. (`.aee/security-chains.json`, `summary.confirmedChains: 0`)

---

## Cross-Component Security Seams

No cross-component security seams. The Link Graph records zero cross-component edges and zero seams (`.aee/link-summary.md`). The single partial chain (chain-001) does not cross component boundaries.

All ten findings evaluated as potential taint sources (`.aee/security-chains.json`, `evaluatedFindings`): handler.py CWE-306 and authvencrypt.py CWE-297 are standalone confirmed findings excluded as non-injection sources; utils.py CWE-327 is a standalone cryptographic weakness; json_filter.py CWE-470 is excluded due to dynamic dispatch blind spot; privsep/libvirt.py CWE-732 is a standalone privilege misconfiguration; privsep/libvirt.py CWE-73 is excluded — privsep IPC blind spot prevents partial chain formation; cyborg.py CWE-74 is the chain-001 source; virt/disk/api.py CWE-338 is a standalone cryptographic weakness inside privsep context with no entry-point entries; imagecache.py CWE-327 (×2) are standalone FIPS compliance issues with no entry-point entries; virt/zvm/utils.py CWE-295 is a standalone deployment configuration weakness with no entry-point entries.

---

## Partial Taint Chains

| Chain ID | Source File | Source Lines | Sink File | Sink Lines | OWASP | CWE | Severity |
|----------|------------|-------------|----------|-----------|-------|-----|----------|
| chain-001 | `src/nova/accelerator/cyborg.py` | 337–337 | `src/nova/accelerator/cyborg.py` | 358–359 | A03 Injection | CWE-74 | medium |

**chain-001 stopped-at detail — updated in batch 9** (`.aee/security-chains.json`, `chains[0].stoppedAt`): `get_arq_by_uuid` has no production call site across all 1,484 extracted files. `virt/libvirt/driver.py` (now extracted in batch 9) uses accel_info ARQ dicts passed in from the compute manager but does not call `get_arq_by_uuid` — grep confirmed. The five previously identified callers of `_CyborgClient` in the extracted source set (`compute/api.py`, `compute/manager.py`, `compute/utils.py`, `conductor/manager.py`, `network/neutron.py`) all call other `_CyborgClient` methods, not `get_arq_by_uuid`. Test fixture `tests/fixtures/cyborg.py` (CyborgFixture, lines 274–277) remains the only evidence that the method is called from production — via `oslo_fixtures.MockPatch` consumed by compute manager and virt/libvirt driver tests.

---

## Verification Status

The Verification Summary (`.aee/verification-summary.md`, Round 1, Batch 9, 2026-10-21) reports:

| Severity | Count |
|----------|-------|
| error    | 0     |
| warning  | 0     |
| info     | 1     |

All 1,490 audited items (1,484 file-documents, 1 component-document, 9 security-finding documents, 1 security-chain) passed with zero errors and zero warnings.

The one info item: `docs/src/nova/accelerator/__init__.py.md` — file has 0 lines, no citation possible; informational only (Verification Report `.aee/verification-report.json`, item 1).

No escalation — the Verification Summary does not begin with "Escalated — max revision rounds (3) reached".
