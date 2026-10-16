# Security Posture Report

## Executive Summary

| Metric | Value |
|--------|-------|
| Total findings | 1 |
| Critical findings | 0 |
| High findings | 0 |
| Medium findings | 1 |
| Low findings | 0 |
| Confirmed taint chains | 0 |
| Partial taint chains | 1 |
| Terminated chains | 0 |

Sources: `.aee/security/src/nova/accelerator/cyborg.py.findings.json`; `.aee/security/src/nova/accelerator/__init__.py.findings.json` (empty); `.aee/security-chains.json` (`summary`).

---

## Top Findings

Top 10 highest-severity findings (by severity then confidence). Only 1 finding exists across all files.

| # | File | Line Range | OWASP Category | CWE | Severity | Confidence |
|---|------|-----------|----------------|-----|----------|------------|
| 1 | `src/nova/accelerator/cyborg.py` | 358–359 | A03 Injection | CWE-74 | medium | needs_cross_file |

**Finding detail:** Caller-supplied `arq_uuid` is concatenated into the Cyborg API URL path via `"/".join([self.ARQ_URL, arq_uuid])` (cyborg.py:359) without visible UUID-format or path-character validation in this file. Path-traversal characters (e.g. `../other-endpoint`) or query-string metacharacters could redirect the request to an unintended Cyborg API endpoint. Whether callers validate the format before invoking this method requires cross-file inspection (`.aee/security/src/nova/accelerator/cyborg.py.findings.json`).

---

## Confirmed Taint Chains

No confirmed taint chains. (`.aee/security-chains.json`, `summary.confirmedChains: 0`)

---

## Cross-Component Security Seams

No cross-component security seams. The Link Graph records zero cross-component edges (`summary.crossComponentEdges: 0`) and zero seams (`summary.seams: 0`) (`.aee/link-graph.json`). The single partial chain (chain-001) does not cross component boundaries — both its source (`src/nova/accelerator/cyborg.py:337`) and sink (`src/nova/accelerator/cyborg.py:358–359`) are within the `nova` component (`.aee/security-chains.json`).

---

## Verification Status

The Verification Summary (`.aee/verification-summary.md`, Round 1, 2026-10-16) reports:

| Severity | Count |
|----------|-------|
| error    | 0     |
| warning  | 3     |
| info     | 1     |

All documents passed with zero errors. The three warnings are:

1. **`docs/components/nova.md`** — `unsupported-claim`: Sinks table GET row shows `?instance_uuid=` but source line 317 uses query key `"instance"`; actual URL param is `?instance=<value>` (Verification Report `.aee/verification-report.json`, item 1).
2. **`docs/components/nova.md`** — `unsupported-claim`: Sinks table DELETE (by instance) row shows `?instance_uuid=` but source line 377 uses param key `"instance"`; actual URL param is `?instance=<value>` (Verification Report `.aee/verification-report.json`, item 2).
3. **`docs/src/nova/accelerator/cyborg.py.md`** — `missing-citation`: Overview paragraph claim about lazy adapter creation lacks a `(file:Lstart–Lend)` citation (Verification Report `.aee/verification-report.json`, item 3).

No escalation — the Verification Summary does not begin with "Escalated — max revision rounds (3) reached".
