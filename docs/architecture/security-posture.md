# Security Posture Report

_Batch: `c7e94e29eea2e3abd5797fc0759b0d98232c7830` — 2026-10-21_

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

Sources: `.aee/security-log.jsonl` (1,509 files analysed, 10 files with findings); `.aee/security-chains.json` (`summary`). Batch 10 adds 1 new individual finding: `crypto.py` L91–92 SHA-1 X.509 fingerprint (CWE-327, low, confirmed).

---

## Top Findings

Top 10 of 12 findings by severity then confidence. Findings 11–12 (`virt/libvirt/imagecache.py` L317–318 CWE-327 and `crypto.py` L91–92 CWE-327, both low confirmed) are omitted from this table; both are documented in the finding details below.

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

**Finding 3 detail** (`.aee/security/src/nova/virt/disk/api.py.findings.json`): `_generate_salt` (lines 612–619) uses `random.choice(salt_set)` (line 619) — Mersenne Twister PRNG — to generate a cryptographic salt used at line 649 (`algos['MD5'] + salt`) to hash admin passwords. Tool: bandit B311, manual; OWASP A02 / CWE-338. Severity medium: deterministic PRNG observable to local attacker.

**Finding 4 detail** (`.aee/security/src/nova/virt/zvm/utils.py.findings.json`): When HTTPS is configured but no CA file is provided (`_ssl_enabled=True`, `ca_file=None`), `connector.ZVMConnector(..., verify=False)` is used (lines 52–55). No warning is emitted for this case. Tool: manual; OWASP A02 / CWE-295. Severity medium.

**Finding 5 detail** (`.aee/security/src/nova/accelerator/cyborg.py.findings.json`): In `get_arq_by_uuid`, `arq_uuid` is interpolated into the Cyborg REST API URL path via `"/".join([self.ARQ_URL, arq_uuid])` (line 359). No UUID format check or path-character filtering visible in this file. Production call site not found in 1,509-file source set; see Partial Chains below.

**Finding 6 detail** (`.aee/security/src/nova/scheduler/filters/json_filter.py.findings.json`): In `_parse_string` (lines 93–112), scheduler hint strings starting with `$` have their first segment passed to `getattr(host_state, path[0], None)` (line 105), allowing probing of arbitrary `HostState` attributes.

**Finding 7 detail** (`.aee/security/src/nova/privsep/libvirt.py.findings.json`): `readpty` (lines 150–161) is a privsep entrypoint with `CAP_DAC_READ_SEARCH`. Line 161 opens `path` directly with no validation; developer TODO at lines 151–152 explicitly acknowledges the missing path check.

**Finding 8 detail** (`.aee/security/src/nova/utils.py.findings.json`): `generate_hostid` (lines 857–871) uses `hashlib.sha224` (line 869); disallowed by NIST SP 800-131Ar2 and some policies.

**Finding 9 detail** (`.aee/security/src/nova/privsep/libvirt.py.findings.json`): Inside `sys_admin_pctxt`, `os.chmod(disk_path, st.st_mode | stat.S_IROTH)` (line 84) sets world-read on a ploop disk image. Developer TODO at lines 78–82 flags this as undesirable.

**Finding 10 detail** (`.aee/security/src/nova/virt/libvirt/imagecache.py.findings.json`): `hashlib.sha1(image_id.encode('utf-8')).hexdigest()` at line 52 derives a cache filename without `usedforsecurity=False`. Tools: bandit B324, semgrep SHA-1 rule. OWASP A02 / CWE-327. Severity low: non-password hash; no direct attack path but FIPS incompatible.

**Finding 11 detail** (`.aee/security/src/nova/virt/libvirt/imagecache.py.findings.json`): `hashlib.sha1(encodeutils.safe_encode(img)).hexdigest()` at lines 317–318 derives an image path fingerprint without `usedforsecurity=False`. Same file and KB as finding 10. Tools: bandit B324, semgrep. Severity low; same FIPS compliance concern.

**Finding 12 detail** (`.aee/security/src/nova/crypto.py.findings.json`): `cert.fingerprint(hashes.SHA1())` at line 91 uses SHA-1 for an X.509 certificate fingerprint (display/identification, not authentication). Tool: bandit B303, semgrep SHA-1 rule; ruleId B303. OWASP A02 / CWE-327. Severity low (downgraded from bandit Medium): fingerprint is for display, not authentication; `hashlib.md5` at line 77 correctly uses `usedforsecurity=False` for SSH key fingerprinting and was excluded as a false positive.

---

## Confirmed Taint Chains

No confirmed taint chains. (`.aee/security-chains.json`, `summary.confirmedChains: 0`)

---

## Cross-Component Security Seams

No cross-component security seams. The Link Graph records zero cross-component edges and zero seams (`.aee/link-summary.md`). The single partial chain (chain-001) does not cross component boundaries.

All 11 findings evaluated as potential taint sources (`.aee/security-chains.json`, `evaluatedFindings`): handler.py CWE-306 and authvencrypt.py CWE-297 are standalone confirmed findings excluded as non-injection sources; utils.py CWE-327 is a standalone cryptographic weakness; json_filter.py CWE-470 is excluded due to dynamic dispatch blind spot; privsep/libvirt.py CWE-732 is a standalone privilege misconfiguration; privsep/libvirt.py CWE-73 is excluded — privsep IPC blind spot prevents partial chain formation; cyborg.py CWE-74 is the chain-001 source; virt/disk/api.py CWE-338 and imagecache.py CWE-327 (×2) are standalone cryptographic weaknesses with no entry-point entries; virt/zvm/utils.py CWE-295 is a standalone deployment configuration weakness; crypto.py CWE-327 is excluded — KB securitySurface has 17 entries (15 crypto-key privileges, 2 file-write sinks), no entry-point entries.

---

## Partial Taint Chains

| Chain ID | Source File | Source Lines | Sink File | Sink Lines | OWASP | CWE | Severity |
|----------|------------|-------------|----------|-----------|-------|-----|----------|
| chain-001 | `src/nova/accelerator/cyborg.py` | 337–337 | `src/nova/accelerator/cyborg.py` | 358–359 | A03 Injection | CWE-74 | medium |

**chain-001 stopped-at detail — updated in batch 10** (`.aee/security-chains.json`, `chains[0].stoppedAt`): `get_arq_by_uuid` has no production call site in the near-complete 1,509-file source set (only 10 unresolved imports remain, all in test files). grep over all production files for `get_arq_by_uuid` and `.get_arq_by_uuid` returns only the definition at `cyborg.py:337`. The five production files calling `cyborg.get_client()` (`compute/api.py:4578`, `compute/manager.py:3024`, `compute/utils.py:1622`, `conductor/manager.py:938`, `network/neutron.py:673`) store the result in a local variable and call other `_CyborgClient` methods, not `get_arq_by_uuid`. The method may be dead code in the current codebase version, or called via a local-variable dispatch pattern invisible to static analysis. The chain remains partial rather than terminated because the local-variable blind spot cannot be ruled out (`.aee/security-chains.json`, `chains[0].stoppedAt.detail`).

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
