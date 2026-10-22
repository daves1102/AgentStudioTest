# Security Posture Report

_Regenerated from batch: `c7e94e29eea2e3abd5797fc0759b0d98232c7830` — 2026-10-22 (component synthesis updated)_

## Executive Summary

| Metric | Value |
|--------|-------|
| Total findings | 12 |
| Critical findings | 0 |
| High findings | 0 |
| Medium findings | 7 |
| Low findings | 5 |
| Confirmed taint chains | 0 |
| Partial taint chains | 1 |
| Terminated chains | 0 |

Sources: `.aee/security-log.jsonl` (1,509 files analysed, 10 files with findings); `.aee/security-chains.json` (`summary`). Component attribution updated 2026-10-22 per the new 30-component model.

---

## Top Findings

Top 10 of 12 findings by severity then confidence. Findings 11–12 (`virt/libvirt/imagecache.py` L317–318 CWE-327 and `crypto.py` L91–92 CWE-327, both low confirmed) are omitted from this table; both are documented in the finding details below.

| # | Component | File | Line Range | Title | OWASP Category | CWE | Severity | Confidence | Tool |
|---|-----------|------|-----------|-------|----------------|-----|----------|------------|------|
| 1 | `api` | `src/nova/api/metadata/handler.py` | 276–280 | HMAC validation of metadata proxy request conditionally skipped when shared secret is unconfigured | A07 Identification and Authentication Failures | CWE-306 | medium | confirmed | manual |
| 2 | `console` | `src/nova/console/rfb/authvencrypt.py` | 151–152 | TLS hostname verification disabled in VeNCrypt security handshake | A02 Cryptographic Failures | CWE-297 | medium | confirmed | manual |
| 3 | `virt` | `src/nova/virt/disk/api.py` | 612–619 | Non-cryptographic PRNG (`random.choice`) used to generate password hash salt | A02 Cryptographic Failures | CWE-338 | medium | confirmed | bandit, manual |
| 4 | `virt` | `src/nova/virt/zvm/utils.py` | 52–55 | TLS certificate verification disabled when z/VM connector URL lacks CA file | A02 Cryptographic Failures | CWE-295 | medium | confirmed | manual |
| 5 | `accelerator` | `src/nova/accelerator/cyborg.py` | 358–359 | Caller-supplied `arq_uuid` concatenated into Cyborg API URL path without visible validation | A03 Injection | CWE-74 | medium | needs_cross_file | manual |
| 6 | `scheduler` | `src/nova/scheduler/filters/json_filter.py` | 104–112 | User-controlled scheduler hint string used as `getattr` attribute name on `HostState` | A01 Broken Access Control | CWE-470 | medium | needs_cross_file | manual |
| 7 | `privsep` | `src/nova/privsep/libvirt.py` | 150–161 | `readpty` opens unvalidated path as root with `CAP_DAC_READ_SEARCH` | A01 Broken Access Control | CWE-73 | medium | needs_cross_file | manual |
| 8 | `nova` | `src/nova/utils.py` | 869 | SHA-224 used to generate obfuscated host ID — deprecated in stricter security policies | A02 Cryptographic Failures | CWE-327 | low | confirmed | semgrep |
| 9 | `privsep` | `src/nova/privsep/libvirt.py` | 81–84 | ploop disk image set world-readable (`S_IROTH`) inside privsep | A05 Security Misconfiguration | CWE-732 | low | confirmed | manual |
| 10 | `virt` | `src/nova/virt/libvirt/imagecache.py` | 52–52 | SHA-1 hash used for image cache filename without `usedforsecurity=False` | A02 Cryptographic Failures | CWE-327 | low | confirmed | semgrep, bandit |

**Finding 1 detail** (`.aee/security/src/nova/api/metadata/handler.py.findings.json`, component `api`): In `_handle_instance_id_request_from_lb` (lines 265–296), the HMAC signature check is guarded by `if CONF.neutron.metadata_proxy_shared_secret:` (line 277). When absent, `X-Metadata-Provider` and `X-Forwarded-For` headers are accepted without authentication. Constructor (lines 53–57) logs a WARNING when the secret is absent but does not reject requests.

**Finding 2 detail** (`.aee/security/src/nova/console/rfb/authvencrypt.py.findings.json`, component `console`): `ssl_ctx.check_hostname = False` (line 152) disables TLS hostname validation on the proxy-to-QEMU connection while retaining CA chain verification.

**Finding 3 detail** (`.aee/security/src/nova/virt/disk/api.py.findings.json`, component `virt`): `_generate_salt` (lines 612–619) uses `random.choice(salt_set)` (line 619) — Mersenne Twister PRNG — to generate a cryptographic salt used at line 649 (`algos['MD5'] + salt`) to hash admin passwords. Tool: bandit B311, manual; OWASP A02 / CWE-338. Severity medium: deterministic PRNG observable to local attacker.

**Finding 4 detail** (`.aee/security/src/nova/virt/zvm/utils.py.findings.json`, component `virt`): When HTTPS is configured but no CA file is provided (`_ssl_enabled=True`, `ca_file=None`), `connector.ZVMConnector(..., verify=False)` is used (lines 52–55). No warning is emitted for this case. Tool: manual; OWASP A02 / CWE-295. Severity medium.

**Finding 5 detail** (`.aee/security/src/nova/accelerator/cyborg.py.findings.json`, component `accelerator`): In `get_arq_by_uuid`, `arq_uuid` is interpolated into the Cyborg REST API URL path via `"/".join([self.ARQ_URL, arq_uuid])` (line 359). No UUID format check or path-character filtering visible in this file. Production call site not found in 1,509-file source set; see Partial Chains below.

**Finding 6 detail** (`.aee/security/src/nova/scheduler/filters/json_filter.py.findings.json`, component `scheduler`): In `_parse_string` (lines 93–112), scheduler hint strings starting with `$` have their first segment passed to `getattr(host_state, path[0], None)` (line 105), allowing probing of arbitrary `HostState` attributes. Scheduler filters are loaded via `nova/loadables.py` dynamic class loader — no inbound static edges even in the 30-component link graph.

**Finding 7 detail** (`.aee/security/src/nova/privsep/libvirt.py.findings.json`, component `privsep`): `readpty` (lines 150–161) is a privsep entrypoint with `CAP_DAC_READ_SEARCH`. Line 161 opens `path` directly with no validation; developer TODO at lines 151–152 explicitly acknowledges the missing path check. `virt` → `privsep` has 96 resolved refs in the link graph but these are static import edges, not privsep IPC dispatch paths.

**Finding 8 detail** (`.aee/security/src/nova/utils.py.findings.json`, component `nova`): `generate_hostid` (lines 857–871) uses `hashlib.sha224` (line 869); disallowed by NIST SP 800-131Ar2 and some policies.

**Finding 9 detail** (`.aee/security/src/nova/privsep/libvirt.py.findings.json`, component `privsep`): Inside `sys_admin_pctxt`, `os.chmod(disk_path, st.st_mode | stat.S_IROTH)` (line 84) sets world-read on a ploop disk image. Developer TODO at lines 78–82 flags this as undesirable.

**Finding 10 detail** (`.aee/security/src/nova/virt/libvirt/imagecache.py.findings.json`, component `virt`): `hashlib.sha1(image_id.encode('utf-8')).hexdigest()` at line 52 derives a cache filename without `usedforsecurity=False`. Tools: bandit B324, semgrep SHA-1 rule. OWASP A02 / CWE-327. Severity low: non-password hash; no direct attack path but FIPS incompatible.

**Finding 11 detail** (`.aee/security/src/nova/virt/libvirt/imagecache.py.findings.json`, component `virt`): `hashlib.sha1(encodeutils.safe_encode(img)).hexdigest()` at lines 317–318 derives an image path fingerprint without `usedforsecurity=False`. Same file and KB as finding 10. Severity low; same FIPS compliance concern.

**Finding 12 detail** (`.aee/security/src/nova/crypto.py.findings.json`, component `nova`): `cert.fingerprint(hashes.SHA1())` at line 91 uses SHA-1 for an X.509 certificate fingerprint (display/identification, not authentication). Tool: bandit B303, semgrep; ruleId B303. OWASP A02 / CWE-327. Severity low (downgraded from bandit Medium): fingerprint is for display, not authentication.

---

## Confirmed Taint Chains

No confirmed taint chains. (`.aee/security-chains.json`, `summary.confirmedChains: 0`)

---

## Cross-Component Security Seams

No cross-component security seams. The Link Graph records zero seams across all component pairs (`.aee/link-summary.md`, `summary.seams: 0`). The single partial chain (chain-001) is confined to the `accelerator` component — both source (`cyborg.py:337`) and sink (`cyborg.py:358–359`) are in the same file and component.

All 11 findings evaluated as potential taint sources (`.aee/security-chains.json`, `evaluatedFindings`): `api` handler.py CWE-306 excluded as non-injection source; `console` authvencrypt.py CWE-297 excluded as non-injection source; `nova` utils.py CWE-327 is a standalone cryptographic weakness; `scheduler` json_filter.py CWE-470 excluded due to dynamic dispatch blind spot; `privsep` libvirt.py CWE-732 is a standalone privilege misconfiguration; `privsep` libvirt.py CWE-73 excluded — privsep IPC blind spot prevents partial chain formation (96 `virt→privsep` static import edges exist but do not trace to the `readpty` entrypoint); `accelerator` cyborg.py CWE-74 is the chain-001 source; `virt` disk/api.py CWE-338 and imagecache.py CWE-327 (×2) are standalone cryptographic weaknesses with no entry-point KB entries; `virt` zvm/utils.py CWE-295 is a standalone deployment configuration weakness; `nova` crypto.py CWE-327 is a standalone SHA-1 deprecation issue.

---

## Partial Taint Chains

| Chain ID | Source Component | Source File | Source Lines | Sink File | Sink Lines | OWASP | CWE | Severity |
|----------|-----------------|------------|-------------|----------|-----------|-------|-----|----------|
| chain-001 | `accelerator` | `src/nova/accelerator/cyborg.py` | 337–337 | `src/nova/accelerator/cyborg.py` | 358–359 | A03 Injection | CWE-74 | medium |

**chain-001 stopped-at detail** (`.aee/security-chains.json`, `chains[0].stoppedAt`): `get_arq_by_uuid` has no production call site in the near-complete 1,509-file source set (only 10 unresolved imports remain, all in test files). grep over all production files returns only the definition at `cyborg.py:337`. The five production files calling `cyborg.get_client()` (`compute/api.py:4578`, `compute/manager.py:3024`, `compute/utils.py:1622`, `conductor/manager.py:938`, `network/neutron.py:673`) — crossing the `compute→accelerator` (7 refs) and `conductor→accelerator` (3 refs) and `network→accelerator` (4 refs) component boundaries — call other `_CyborgClient` methods, not `get_arq_by_uuid`. The method may be dead code or called via a local-variable dispatch pattern invisible to static analysis. Chain remains partial rather than terminated.

---

## Verification Status

The Verification Summary (`.aee/verification-summary.md`, Round 1, Batch 10, 2026-10-21) reports:

| Severity | Count |
|----------|-------|
| error    | 0     |
| warning  | 0     |
| info     | 1     |

All 1,515 audited items (1,509 file-documents, 1 component-document, 10 security-finding documents, 1 security-chain) passed with zero errors and zero warnings.

The one info item: `docs/src/nova/accelerator/__init__.py.md` — file has 0 lines, no citation possible; informational only (Verification Report `.aee/verification-report.json`, item 1).

No escalation — the Verification Summary does not begin with "Escalated — max revision rounds (3) reached".
