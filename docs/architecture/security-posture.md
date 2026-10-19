# Security Posture Report

_Batch: `733c737267c89a04a0ad54b304c4e167bd16c887` — 2026-10-19_

## Executive Summary

| Metric | Value |
|--------|-------|
| Total findings | 2 |
| Critical findings | 0 |
| High findings | 0 |
| Medium findings | 1 |
| Low findings | 1 |
| Confirmed taint chains | 0 |
| Partial taint chains | 1 |
| Terminated chains | 0 |

Sources: `.aee/security-log.jsonl` (55 files analysed, 2 with findings); `.aee/security-chains.json` (`summary`).

---

## Top Findings

Top 10 highest-severity findings (by severity then confidence). Only 2 findings exist across all 55 files.

| # | File | Line Range | Title | OWASP Category | CWE | Severity | Confidence | Tool |
|---|------|-----------|-------|----------------|-----|----------|------------|------|
| 1 | `src/nova/accelerator/cyborg.py` | 358–359 | Caller-supplied `arq_uuid` concatenated into Cyborg API URL path without visible validation | A03 Injection | CWE-74 | medium | needs_cross_file | manual |
| 2 | `src/nova/utils.py` | 869 | SHA-224 used to generate obfuscated host ID — deprecated in stricter security policies | A02 Cryptographic Failures | CWE-327 | low | confirmed | semgrep |

**Finding 1 detail** (`.aee/security/src/nova/accelerator/cyborg.py.findings.json`): In `get_arq_by_uuid`, `arq_uuid` received from the caller is interpolated directly into the Cyborg REST API URL path via `"/".join([self.ARQ_URL, arq_uuid])` (line 359). No UUID format check or path-character filtering is visible in this file before the value reaches the HTTP call. Path-traversal characters (e.g. `../other-endpoint`) or query-string metacharacters could redirect the request to a different Cyborg endpoint. Whether callers validate before passing `arq_uuid` requires cross-file inspection.

**Finding 2 detail** (`.aee/security/src/nova/utils.py.findings.json`): `generate_hostid` (lines 857–871) hashes `project_id+host` using `hashlib.sha224` (line 869) to produce an opaque identifier returned in API responses. SHA-224 is not cryptographically broken but is disallowed by NIST SP 800-131Ar2 and some organisational policies. A SHA-256 helper (`get_sha256_str`, line 603) already exists in the same file. This hash is not used for password or key derivation — it serves solely as an obfuscation identifier for API consumers.

---

## Confirmed Taint Chains

No confirmed taint chains. (`.aee/security-chains.json`, `summary.confirmedChains: 0`)

---

## Cross-Component Security Seams

No cross-component security seams. The Link Graph records zero cross-component edges (`summary.crossComponentEdges: 0`) and zero seams (`summary.seams: 0`) (`.aee/link-graph.json`). The single partial chain (chain-001) does not cross component boundaries — both its source (`src/nova/accelerator/cyborg.py:337`) and sink (`src/nova/accelerator/cyborg.py:358–359`) are within the `nova` component (`.aee/security-chains.json`).

The `utils.py` SHA-224 finding was evaluated as a potential taint source but excluded: `utils.py` has no `securitySurface` entry of `kind: entry-point` overlapping `generate_hostid` (lines 857–871), so the protocol definition of a taint source is not satisfied (`.aee/security-chains.json`, `evaluatedFindings`, `disposition: excluded-not-a-source`).

---

## Verification Status

The Verification Summary (`.aee/verification-summary.md`, Round 1, Batch 2, 2026-10-19) reports:

| Severity | Count |
|----------|-------|
| error    | 0     |
| warning  | 1     |
| info     | 1     |

All 59 audited items (55 file-documents, 1 component-document, 2 security-findings, 1 security-chain) passed with zero errors.

The one open warning: `docs/src/nova/accelerator/cyborg.py.md` overview paragraph claim about lazy adapter creation (implemented at `src/nova/accelerator/cyborg.py:L121–L134`) still lacks a `(file:Lstart–Lend)` citation — carried forward from round 1 (Verification Report `.aee/verification-report.json`, item 1).

No escalation — the Verification Summary does not begin with "Escalated — max revision rounds (3) reached".
