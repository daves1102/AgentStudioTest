# Verification Summary — Round 1

**Batch:** `823b1a433785100533d3a59a54e28407ea51a545`  
**Date:** 2026-10-16  
**Documents audited:** 4 (2 file documents, 1 component document, 1 security finding, 1 security chain)

---

## Issue Counts

| Severity | Count |
|----------|-------|
| error    | 0     |
| warning  | 3     |
| info     | 1     |

| Issue Type          | Count |
|---------------------|-------|
| `unsupported-claim` | 2     |
| `missing-citation`  | 2     |

---

## All Warnings and Errors

| # | Severity | Document | Issue Type | Description |
|---|----------|----------|------------|-------------|
| 1 | warning | `docs/components/nova.md` | `unsupported-claim` | Sinks table GET row shows `?instance_uuid=` but source L317 uses query key `"instance"` → actual URL param is `?instance=<value>` |
| 2 | warning | `docs/components/nova.md` | `unsupported-claim` | Sinks table DELETE (by instance) row shows `?instance_uuid=` but source L377 uses param key `"instance"` → actual URL param is `?instance=<value>` |
| 3 | warning | `docs/src/nova/accelerator/cyborg.py.md` | `missing-citation` | Overview paragraph claim "adapter created lazily" (L121–134) lacks a `(file:Lstart–Lend)` citation |

---

## Documents Passed (zero errors)

All documents passed with zero errors (warnings and infos do not block verification):

| Document | Type | Errors | Warnings | Infos |
|----------|------|--------|----------|-------|
| `docs/src/nova/accelerator/__init__.py.md` | file-document | 0 | 0 | 1 |
| `docs/src/nova/accelerator/cyborg.py.md` | file-document | 0 | 1 | 0 |
| `docs/components/nova.md` | component-document | 0 | 2 | 0 |
| `Security:src/nova/accelerator/cyborg.py` | security-finding | 0 | 0 | 0 |
| `chain-001` | security-chain | 0 | 0 | 0 |

---

## Verification Detail

### `docs/src/nova/accelerator/__init__.py.md`
Empty file (0 lines). All claims accurate. No citation possible for line-count claim (info only).

### `docs/src/nova/accelerator/cyborg.py.md`
- All 32 inventory symbols verified: names, kinds, and line ranges match fresh `aee-inventory` output.
- All imports, side-effect citations, security-surface citations, and dependency line ranges verified against source.
- `_client` property (manual, L120–134) verified by reading: `@property` at L120, `def _client(self):` at L121, `return self._adapter` at L134. ✓
- One warning: overview paragraph's lazy-adapter claim lacks a citation.

### `docs/components/nova.md`
- File inventory line counts match KB. ✓  
- Top-5 CCN table accurate (verified against KB symbol `ccn` fields). ✓  
- Two warnings: Sinks table uses `?instance_uuid=` as the query key for GET and DELETE calls, but source code uses the key `"instance"`. Security analysts relying on these URL patterns for traffic analysis should note the correction.

### Security finding `Security:src/nova/accelerator/cyborg.py`
- One finding (manual, CWE-74, A03 Injection, medium/needs_cross_file).
- Cited range L358–359 verified: `"/".join([self.ARQ_URL, arq_uuid])` confirms arq_uuid is concatenated into the URL path without visible validation. ✓  
- OWASP A03 / CWE-74 consistent with URL path injection pattern. ✓  
- Severity and confidence consistent with partial (cross-file) evidence. ✓  
- Tool is `manual` — no scanner re-run required.

### Security chain `chain-001`
- Source L337–337 verified: `def get_arq_by_uuid(self, arq_uuid):` — entry point where arq_uuid is accepted. ✓  
- Sink L358–359 verified: URL path concatenation confirmed. ✓  
- No hops (stoppedAt source, reason no-static-edge) — consistent with unresolved nova.* imports. ✓  
- Chain is partial, correctly flagged for human review.
