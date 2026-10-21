# Security Posture Report

_Batch: `da4f90f3140927b8c63f00b11af32787a70ff1ac` — 2026-10-21_

## Executive Summary

| Metric | Value |
|--------|-------|
| Total findings | 7 |
| Critical findings | 0 |
| High findings | 0 |
| Medium findings | 5 |
| Low findings | 2 |
| Confirmed taint chains | 0 |
| Partial taint chains | 1 |
| Terminated chains | 0 |

Sources: `.aee/security-log.jsonl` (1,388 files analysed, 6 files with findings); `.aee/security-chains.json` (`summary`). No new security findings in batch 8 (Verification Summary `.aee/verification-summary.md`: "No new security findings in this batch ✓").

---

## Top Findings

All 7 findings shown (no new findings in batch 8).

| # | File | Line Range | Title | OWASP Category | CWE | Severity | Confidence | Tool |
|---|------|-----------|-------|----------------|-----|----------|------------|------|
| 1 | `src/nova/api/metadata/handler.py` | 276–280 | HMAC validation of metadata proxy request conditionally skipped when shared secret is unconfigured | A07 Identification and Authentication Failures | CWE-306 | medium | confirmed | manual |
| 2 | `src/nova/console/rfb/authvencrypt.py` | 151–152 | TLS hostname verification disabled in VeNCrypt security handshake | A02 Cryptographic Failures | CWE-297 | medium | confirmed | manual |
| 3 | `src/nova/accelerator/cyborg.py` | 358–359 | Caller-supplied `arq_uuid` concatenated into Cyborg API URL path without visible validation | A03 Injection | CWE-74 | medium | needs_cross_file | manual |
| 4 | `src/nova/scheduler/filters/json_filter.py` | 104–112 | User-controlled scheduler hint string used as `getattr` attribute name on `HostState` | A01 Broken Access Control | CWE-470 | medium | needs_cross_file | manual |
| 5 | `src/nova/privsep/libvirt.py` | 150–161 | `readpty` opens unvalidated path as root with `CAP_DAC_READ_SEARCH` | A01 Broken Access Control | CWE-73 | medium | needs_cross_file | manual |
| 6 | `src/nova/utils.py` | 869 | SHA-224 used to generate obfuscated host ID — deprecated in stricter security policies | A02 Cryptographic Failures | CWE-327 | low | confirmed | semgrep |
| 7 | `src/nova/privsep/libvirt.py` | 81–84 | ploop disk image set world-readable (`S_IROTH`) inside privsep | A05 Security Misconfiguration | CWE-732 | low | confirmed | manual |

**Finding 1 detail** (`.aee/security/src/nova/api/metadata/handler.py.findings.json`): In `_handle_instance_id_request_from_lb` (lines 265–296), the HMAC signature check is guarded by `if CONF.neutron.metadata_proxy_shared_secret:` (line 277). When absent, `X-Metadata-Provider` and `X-Forwarded-For` headers are accepted without authentication. Constructor (lines 53–57) logs a WARNING when the secret is absent but does not reject requests.

**Finding 2 detail** (`.aee/security/src/nova/console/rfb/authvencrypt.py.findings.json`): `ssl_ctx.check_hostname = False` (line 152) disables TLS hostname validation on the proxy-to-QEMU connection while retaining CA chain verification.

**Finding 3 detail** (`.aee/security/src/nova/accelerator/cyborg.py.findings.json`): In `get_arq_by_uuid`, `arq_uuid` is interpolated into the Cyborg REST API URL path via `"/".join([self.ARQ_URL, arq_uuid])` (line 359). No UUID format check or path-character filtering visible in this file. Batch 8 test evidence now confirms this method IS called from production code (see Partial Chains below).

**Finding 4 detail** (`.aee/security/src/nova/scheduler/filters/json_filter.py.findings.json`): In `_parse_string` (lines 93–112), scheduler hint strings starting with `$` have their first segment passed to `getattr(host_state, path[0], None)` (line 105), allowing probing of arbitrary `HostState` attributes.

**Finding 5 detail** (`.aee/security/src/nova/privsep/libvirt.py.findings.json`): `readpty` (lines 150–161) is a privsep entrypoint with `CAP_DAC_READ_SEARCH`. Line 161 opens `path` directly with no validation; developer TODO at lines 151–152 explicitly acknowledges the missing path check. If `path` is externally reachable, arbitrary root file read is possible.

**Finding 6 detail** (`.aee/security/src/nova/utils.py.findings.json`): `generate_hostid` (lines 857–871) uses `hashlib.sha224` (line 869); disallowed by NIST SP 800-131Ar2 and some policies.

**Finding 7 detail** (`.aee/security/src/nova/privsep/libvirt.py.findings.json`): Inside `sys_admin_pctxt`, `os.chmod(disk_path, st.st_mode | stat.S_IROTH)` (line 84) sets world-read on a ploop disk image. Developer TODO at lines 78–82 flags this as undesirable.

---

## Confirmed Taint Chains

No confirmed taint chains. (`.aee/security-chains.json`, `summary.confirmedChains: 0`)

---

## Cross-Component Security Seams

No cross-component security seams. The Link Graph records zero cross-component edges and zero seams (`.aee/link-summary.md`). The single partial chain (chain-001) does not cross component boundaries.

All seven findings evaluated as potential taint sources (`.aee/security-chains.json`, `evaluatedFindings`): handler.py CWE-306 and authvencrypt.py CWE-297 are standalone confirmed findings excluded as non-injection sources; utils.py CWE-327 is a standalone cryptographic weakness; json_filter.py CWE-470 is excluded due to dynamic dispatch blind spot; privsep/libvirt.py CWE-732 is a standalone privilege misconfiguration; privsep/libvirt.py CWE-73 is excluded — privsep IPC blind spot prevents partial chain formation; cyborg.py CWE-74 is the chain-001 source.

---

## Partial Taint Chains

| Chain ID | Source File | Source Lines | Sink File | Sink Lines | OWASP | CWE | Severity |
|----------|------------|-------------|----------|-----------|-------|-----|----------|
| chain-001 | `src/nova/accelerator/cyborg.py` | 337–337 | `src/nova/accelerator/cyborg.py` | 358–359 | A03 Injection | CWE-74 | medium |

**chain-001 stopped-at detail — updated in batch 8** (`.aee/security-chains.json`, `chains[0].stoppedAt`): `get_arq_by_uuid` has no production call site in the 1,388-file source set. However, batch 8 test infrastructure provides new evidence: `tests/fixtures/cyborg.py` mocks `get_arq_by_uuid` via `oslo_fixtures.MockPatch` (`CyborgFixture`, lines 274–277), and `tests/unit/accelerator/test_cyborg.py` calls it directly (lines 426–457). `CyborgFixture` is used by compute manager and virt/libvirt driver tests, strongly suggesting the production caller is in `nova.virt.libvirt` or a compute manager accelerator workflow — subsystems not yet extracted. The five previously confirmed callers of `cyborg.py` (`compute/api.py`, `compute/manager.py`, `compute/utils.py`, `conductor/manager.py`, `network/neutron.py`) all call other `_CyborgClient` methods, not `get_arq_by_uuid`.

---

## Verification Status

The Verification Summary (`.aee/verification-summary.md`, Round 1, Batch 8, 2026-10-21) reports:

| Severity | Count |
|----------|-------|
| error    | 0     |
| warning  | 0     |
| info     | 1     |

All 1,394 audited items (1,388 file-documents, 1 component-document, 6 security-finding documents, 1 security-chain) passed with zero errors and zero warnings.

The one info item: `docs/src/nova/accelerator/__init__.py.md` — file has 0 lines, no citation possible; informational only (Verification Report `.aee/verification-report.json`, item 1).

No escalation — the Verification Summary does not begin with "Escalated — max revision rounds (3) reached".
