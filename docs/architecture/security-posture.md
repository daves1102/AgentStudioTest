# Security Posture Report

_Batch: `caa20451a7b7df151b4ddbaab06f92e6857e74a6` — 2026-10-20_

## Executive Summary

| Metric | Value |
|--------|-------|
| Total findings | 4 |
| Critical findings | 0 |
| High findings | 0 |
| Medium findings | 3 |
| Low findings | 1 |
| Confirmed taint chains | 0 |
| Partial taint chains | 1 |
| Terminated chains | 0 |

Sources: `.aee/security-log.jsonl` (327 files analysed, 4 with findings); `.aee/security-chains.json` (`summary`).

---

## Top Findings

Top 10 highest-severity findings (by severity then confidence). Only 4 findings exist across all 327 files.

| # | File | Line Range | Title | OWASP Category | CWE | Severity | Confidence | Tool |
|---|------|-----------|-------|----------------|-----|----------|------------|------|
| 1 | `src/nova/api/metadata/handler.py` | 276–280 | HMAC validation of metadata proxy request conditionally skipped when shared secret is unconfigured | A07 Identification and Authentication Failures | CWE-306 | medium | confirmed | manual |
| 2 | `src/nova/accelerator/cyborg.py` | 358–359 | Caller-supplied `arq_uuid` concatenated into Cyborg API URL path without visible validation | A03 Injection | CWE-74 | medium | needs_cross_file | manual |
| 3 | `src/nova/scheduler/filters/json_filter.py` | 104–112 | User-controlled scheduler hint string used as `getattr` attribute name on `HostState` | A01 Broken Access Control | CWE-470 | medium | needs_cross_file | manual |
| 4 | `src/nova/utils.py` | 869 | SHA-224 used to generate obfuscated host ID — deprecated in stricter security policies | A02 Cryptographic Failures | CWE-327 | low | confirmed | semgrep |

**Finding 1 detail** (`.aee/security/src/nova/api/metadata/handler.py.findings.json`): In `_handle_instance_id_request_from_lb` (lines 265–296), the HMAC signature check that authenticates the metadata proxy is guarded by `if CONF.neutron.metadata_proxy_shared_secret:` (line 277). When the shared secret is not configured, lines 278–280 are skipped entirely, so `X-Metadata-Provider` and `X-Forwarded-For` headers are accepted without authentication. An entity able to reach the metadata endpoint and craft these headers could supply an arbitrary `provider_id` and `instance_address` to retrieve metadata for any instance whose IP appears in that provider's Neutron networks. The constructor (lines 53–57) logs a WARNING when the secret is absent but does not reject requests. HMAC validation is correctly implemented with `hmac.compare_digest` when the secret IS present (line 305).

**Finding 2 detail** (`.aee/security/src/nova/accelerator/cyborg.py.findings.json`): In `get_arq_by_uuid`, `arq_uuid` is interpolated directly into the Cyborg REST API URL path via `"/".join([self.ARQ_URL, arq_uuid])` (line 359). No UUID format check or path-character filtering is visible in this file.

**Finding 3 detail** (`.aee/security/src/nova/scheduler/filters/json_filter.py.findings.json`): In `_parse_string` (lines 93–112), scheduler hint query strings starting with `$` have their first segment passed to `getattr(host_state, path[0], None)` (line 105), allowing an API caller to probe arbitrary Python attributes of `HostState` beyond those normally exposed.

**Finding 4 detail** (`.aee/security/src/nova/utils.py.findings.json`): `generate_hostid` (lines 857–871) uses `hashlib.sha224` at line 869 to produce an opaque identifier for API consumers. SHA-224 is not cryptographically broken but is disallowed by NIST SP 800-131Ar2 and some policies.

---

## Confirmed Taint Chains

No confirmed taint chains. (`.aee/security-chains.json`, `summary.confirmedChains: 0`)

---

## Cross-Component Security Seams

No cross-component security seams. The Link Graph records zero cross-component edges (`summary.crossComponentEdges: 0`) and zero seams (`summary.seams: 0`) (`.aee/link-graph.json`). The single partial chain (chain-001) does not cross component boundaries — both its source and sink are within `nova`.

All four findings were evaluated as potential taint sources (`.aee/security-chains.json`, `evaluatedFindings`):

- `handler.py` CWE-306 (confirmed): finding at lines 276–280 does not overlap the KB `securitySurface` entry-point (line 97); excluded per protocol as a standalone authentication-bypass, not an injection taint source. Tracked as a standalone confirmed finding (Finding 1 above).
- `utils.py` CWE-327 (confirmed): no `securitySurface` entry-point overlap with `generate_hostid`; excluded as standalone cryptographic weakness.
- `json_filter.py` CWE-470 (needs_cross_file): KB `securitySurface` empty; scheduler filters are loaded dynamically from config — a link-graph blind spot for dynamic dispatch. Excluded.
- `cyborg.py` CWE-74 (needs_cross_file): source chain traced — see Partial Chains below.

---

## Verification Status

The Verification Summary (`.aee/verification-summary.md`, Round 1, Batch 4, 2026-10-20) reports:

| Severity | Count |
|----------|-------|
| error    | 0     |
| warning  | 1     |
| info     | 1     |

All 333 audited items (327 file-documents, 1 component-document, 4 security-findings, 1 security-chain) passed with zero errors.

The one open warning (now in its **4th consecutive round**): `docs/src/nova/accelerator/cyborg.py.md` overview paragraph claim about lazy adapter creation (implemented at `src/nova/accelerator/cyborg.py:L121–L134`) still lacks a `(file:Lstart–Lend)` citation (Verification Report `.aee/verification-report.json`, item 1).

No escalation — the Verification Summary does not begin with "Escalated — max revision rounds (3) reached".
