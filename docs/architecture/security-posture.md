# Security Posture Report

_Batch: `868bfe40c13e07d11a2aa58ddb0c8900f9d9744d` — 2026-10-20_

## Executive Summary

| Metric | Value |
|--------|-------|
| Total findings | 3 |
| Critical findings | 0 |
| High findings | 0 |
| Medium findings | 2 |
| Low findings | 1 |
| Confirmed taint chains | 0 |
| Partial taint chains | 1 |
| Terminated chains | 0 |

Sources: `.aee/security-log.jsonl` (122 files analysed, 3 with findings); `.aee/security-chains.json` (`summary`).

---

## Top Findings

Top 10 highest-severity findings (by severity then confidence). Only 3 findings exist across all 122 files.

| # | File | Line Range | Title | OWASP Category | CWE | Severity | Confidence | Tool |
|---|------|-----------|-------|----------------|-----|----------|------------|------|
| 1 | `src/nova/accelerator/cyborg.py` | 358–359 | Caller-supplied `arq_uuid` concatenated into Cyborg API URL path without visible validation | A03 Injection | CWE-74 | medium | needs_cross_file | manual |
| 2 | `src/nova/scheduler/filters/json_filter.py` | 104–112 | User-controlled scheduler hint string used as `getattr` attribute name on `HostState` | A01 Broken Access Control | CWE-470 | medium | needs_cross_file | manual |
| 3 | `src/nova/utils.py` | 869 | SHA-224 used to generate obfuscated host ID — deprecated in stricter security policies | A02 Cryptographic Failures | CWE-327 | low | confirmed | semgrep |

**Finding 1 detail** (`.aee/security/src/nova/accelerator/cyborg.py.findings.json`): In `get_arq_by_uuid`, `arq_uuid` is interpolated directly into the Cyborg REST API URL path via `"/".join([self.ARQ_URL, arq_uuid])` (line 359). No UUID format check or path-character filtering is visible in this file. Path-traversal or query-string metacharacters in `arq_uuid` could redirect the request to an unintended Cyborg endpoint.

**Finding 2 detail** (`.aee/security/src/nova/scheduler/filters/json_filter.py.findings.json`): In `_parse_string` (lines 93–112), scheduler hint query strings starting with `$` are parsed and the first segment is passed to `getattr(host_state, path[0], None)` (line 105). This allows an API caller to probe arbitrary Python attributes of `HostState` (e.g. `$__dict__`, `$_sa_instance_state`) beyond what the API normally exposes. No code execution risk, but the impact depends on `HostState`'s attribute surface, which requires cross-file analysis.

**Finding 3 detail** (`.aee/security/src/nova/utils.py.findings.json`): `generate_hostid` (lines 857–871) uses `hashlib.sha224` at line 869 to produce an opaque identifier for API consumers. SHA-224 is not cryptographically broken but is disallowed by NIST SP 800-131Ar2 and some policies; a SHA-256 helper (`get_sha256_str`, line 603) already exists in the same file.

---

## Confirmed Taint Chains

No confirmed taint chains. (`.aee/security-chains.json`, `summary.confirmedChains: 0`)

---

## Cross-Component Security Seams

No cross-component security seams. The Link Graph records zero cross-component edges (`summary.crossComponentEdges: 0`) and zero seams (`summary.seams: 0`) (`.aee/link-graph.json`). The single partial chain (chain-001) does not cross component boundaries — both its source (`src/nova/accelerator/cyborg.py:337`) and sink (`src/nova/accelerator/cyborg.py:358–359`) are within the `nova` component.

The two `needs_cross_file` findings (cyborg.py and json_filter.py) and the `confirmed` utils.py finding were evaluated as taint sources and excluded: none has a KB `securitySurface` entry of `kind: entry-point` overlapping the affected code (`.aee/security-chains.json`, `evaluatedFindings`).

---

## Verification Status

The Verification Summary (`.aee/verification-summary.md`, Round 1, Batch 3, 2026-10-20) reports:

| Severity | Count |
|----------|-------|
| error    | 0     |
| warning  | 1     |
| info     | 1     |

All 127 audited items (122 file-documents, 1 component-document, 3 security-findings, 1 security-chain) passed with zero errors.

The one open warning (now in its 3rd consecutive round): `docs/src/nova/accelerator/cyborg.py.md` overview paragraph claim about lazy adapter creation (implemented at `src/nova/accelerator/cyborg.py:L121–L134`) still lacks a `(file:Lstart–Lend)` citation (Verification Report `.aee/verification-report.json`, item 1).

No escalation — the Verification Summary does not begin with "Escalated — max revision rounds (3) reached".
