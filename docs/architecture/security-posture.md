# Security Posture Report

_Batch: `10997c0ea56f02ffec4fd9f8c917d68241ae9ea9` — 2026-10-20_

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

Sources: `.aee/security-log.jsonl` (532 files analysed, 6 files with findings); `.aee/security-chains.json` (`summary`). Two new findings in `privsep/libvirt.py` added in batch 7 (Verification Summary `.aee/verification-summary.md`).

---

## Top Findings

Top 10 highest-severity findings (by severity then confidence). All 7 findings shown.

| # | File | Line Range | Title | OWASP Category | CWE | Severity | Confidence | Tool |
|---|------|-----------|-------|----------------|-----|----------|------------|------|
| 1 | `src/nova/api/metadata/handler.py` | 276–280 | HMAC validation of metadata proxy request conditionally skipped when shared secret is unconfigured | A07 Identification and Authentication Failures | CWE-306 | medium | confirmed | manual |
| 2 | `src/nova/console/rfb/authvencrypt.py` | 151–152 | TLS hostname verification disabled in VeNCrypt security handshake | A02 Cryptographic Failures | CWE-297 | medium | confirmed | manual |
| 3 | `src/nova/accelerator/cyborg.py` | 358–359 | Caller-supplied `arq_uuid` concatenated into Cyborg API URL path without visible validation | A03 Injection | CWE-74 | medium | needs_cross_file | manual |
| 4 | `src/nova/scheduler/filters/json_filter.py` | 104–112 | User-controlled scheduler hint string used as `getattr` attribute name on `HostState` | A01 Broken Access Control | CWE-470 | medium | needs_cross_file | manual |
| 5 | `src/nova/privsep/libvirt.py` | 150–161 | `readpty` opens unvalidated path as root with `CAP_DAC_READ_SEARCH` | A01 Broken Access Control | CWE-73 | medium | needs_cross_file | manual |
| 6 | `src/nova/utils.py` | 869 | SHA-224 used to generate obfuscated host ID — deprecated in stricter security policies | A02 Cryptographic Failures | CWE-327 | low | confirmed | semgrep |
| 7 | `src/nova/privsep/libvirt.py` | 81–84 | ploop disk image set world-readable (`S_IROTH`) inside privsep | A05 Security Misconfiguration | CWE-732 | low | confirmed | manual |

**Finding 1 detail** (`.aee/security/src/nova/api/metadata/handler.py.findings.json`): In `_handle_instance_id_request_from_lb` (lines 265–296), the HMAC signature check is guarded by `if CONF.neutron.metadata_proxy_shared_secret:` (line 277). When absent, `X-Metadata-Provider` and `X-Forwarded-For` headers are accepted without authentication.

**Finding 2 detail** (`.aee/security/src/nova/console/rfb/authvencrypt.py.findings.json`): `ssl_ctx.check_hostname = False` (line 152) disables TLS hostname validation on the proxy-to-QEMU connection while retaining CA chain verification. An attacker with a CA-signed certificate for a different compute node and management network access could redirect the proxy.

**Finding 3 detail** (`.aee/security/src/nova/accelerator/cyborg.py.findings.json`): In `get_arq_by_uuid`, `arq_uuid` is interpolated into the Cyborg REST API URL path via `"/".join([self.ARQ_URL, arq_uuid])` (line 359). No UUID format check or path-character filtering visible.

**Finding 4 detail** (`.aee/security/src/nova/scheduler/filters/json_filter.py.findings.json`): In `_parse_string` (lines 93–112), scheduler hint strings starting with `$` have their first segment passed to `getattr(host_state, path[0], None)` (line 105), allowing probing of arbitrary Python attributes of `HostState`.

**Finding 5 detail** (`.aee/security/src/nova/privsep/libvirt.py.findings.json`): `readpty` (lines 150–161) is a privsep entrypoint decorated with `@nova.privsep.sys_admin_pctxt.entrypoint` (line 149), giving it `CAP_DAC_READ_SEARCH`. Line 161 opens `path` directly — a developer TODO at lines 151–152 explicitly acknowledges the missing pty-path validation. If the `path` argument is reachable by an attacker, arbitrary file read as root is possible. Confidence is `needs_cross_file` because privsep functions are called via IPC dispatch, not direct Python imports (link-graph blind spot for privsep).

**Finding 6 detail** (`.aee/security/src/nova/utils.py.findings.json`): `generate_hostid` (lines 857–871) uses `hashlib.sha224` at line 869. SHA-224 is disallowed by NIST SP 800-131Ar2 and some policies.

**Finding 7 detail** (`.aee/security/src/nova/privsep/libvirt.py.findings.json`): Inside `sys_admin_pctxt` privsep context, `os.chmod(disk_path, st.st_mode | stat.S_IROTH)` (line 84) sets world-read permission on a ploop disk image. A developer TODO at lines 78–82 explicitly flags this as undesirable. Requires local user access on the compute host to exploit.

---

## Confirmed Taint Chains

No confirmed taint chains. (`.aee/security-chains.json`, `summary.confirmedChains: 0`)

---

## Cross-Component Security Seams

No cross-component security seams. The Link Graph records zero cross-component edges (`summary.crossComponentEdges: 0`) and zero seams (`summary.seams: 0`) (`.aee/link-summary.md`). The single partial chain (chain-001) does not cross component boundaries.

All seven findings were evaluated as potential taint sources (`.aee/security-chains.json`, `evaluatedFindings`):

- `handler.py` CWE-306 (confirmed): standalone auth-bypass; finding at 276–280 does not overlap KB entry-point (line 97). Excluded.
- `utils.py` CWE-327 (confirmed): no entry-point overlap; standalone cryptographic weakness. Excluded.
- `json_filter.py` CWE-470 (needs_cross_file): KB `securitySurface` empty; scheduler filters loaded dynamically — link-graph blind spot. Excluded.
- `cyborg.py` CWE-74 (needs_cross_file): source chain traced — see Partial Chains below.
- `authvencrypt.py` CWE-297 (confirmed): KB `securitySurface` empty; TLS config weakness on outbound connection. Excluded.
- `privsep/libvirt.py` L81–84 CWE-732 (confirmed): KB `securitySurface` has 16 entries all of kind `privilege` (privsep-entrypoint), no `entry-point` entries; standalone permission misconfiguration. Excluded.
- `privsep/libvirt.py` L150–161 CWE-73 (needs_cross_file): used as sink candidate per protocol; no inbound static edges — privsep functions called via IPC/oslo.privsep dispatch, not Python imports (link-graph blind spot); no confirmed/probable taint source can be traced to `readpty`. Excluded — no partial chain formable without a source.

---

## Partial Taint Chains

| Chain ID | Source File | Source Lines | Sink File | Sink Lines | OWASP | CWE | Severity |
|----------|------------|-------------|----------|-----------|-------|-----|----------|
| chain-001 | `src/nova/accelerator/cyborg.py` | 337–337 | `src/nova/accelerator/cyborg.py` | 358–359 | A03 Injection | CWE-74 | medium |

**chain-001 stopped-at detail** (`.aee/security-chains.json`, `chains[0].stoppedAt`): `get_arq_by_uuid` (defined at `cyborg.py:337`) does not appear anywhere in the 532-file source set. Five known callers of `cyborg.py` all call other methods. All namespaces added across batches 1–7 (`nova.hacking`, `nova.image`, `nova.keymgr`, `nova.limit`, `nova.notifications`, `nova.pci`, `nova.policies`, `nova.privsep`) contain no callers. Callers remain in files not yet extracted.

---

## Verification Status

The Verification Summary (`.aee/verification-summary.md`, Round 1, Batch 7, 2026-10-20) reports:

| Severity | Count |
|----------|-------|
| error    | 0     |
| warning  | 0     |
| info     | 1     |

All 538 audited items (532 file-documents, 1 component-document, 6 security-finding documents, 1 security-chain) passed with zero errors and zero warnings.

The one info item: `docs/src/nova/accelerator/__init__.py.md` — file has 0 lines, no citation possible; informational only (Verification Report `.aee/verification-report.json`, item 1).

No escalation — the Verification Summary does not begin with "Escalated — max revision rounds (3) reached".
