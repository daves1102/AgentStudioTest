# Unresolved Items Index

Verification Summary (`.aee/verification-summary.md`) reports 0 errors — this document is not an escalation.

---

## Unresolved and Ambiguous References (Link Graph)

Source: `.aee/link-graph.json` (`unresolved` and `ambiguous` arrays).

### Unresolved References

| File | Line | Symbol | Reason |
|------|------|--------|--------|
| `src/nova/accelerator/cyborg.py` | 46 | `nova` | module-not-found |
| `src/nova/accelerator/cyborg.py` | 47 | `nova.i18n` | module-not-found |
| `src/nova/accelerator/cyborg.py` | 48 | `nova` | module-not-found |
| `src/nova/accelerator/cyborg.py` | 49 | `nova.scheduler` | module-not-found |
| `src/nova/accelerator/cyborg.py` | 50 | `nova` | module-not-found |
| `src/nova/accelerator/cyborg.py` | 51 | `nova` | module-not-found |

### Ambiguous References

None. (`.aee/link-graph.json`, `ambiguous: []`, `summary.ambiguous: 0`)

---

## Partial Taint Chains (Security Chains)

Source: `.aee/security-chains.json` (`chains` array, `status: "partial"`).

| Chain ID | Source File | Source Lines | Sink File | Sink Lines | Stopped-At File | Stopped-At Lines | Reason |
|----------|------------|-------------|----------|-----------|----------------|-----------------|--------|
| chain-001 | `src/nova/accelerator/cyborg.py` | 337–337 | `src/nova/accelerator/cyborg.py` | 358–359 | `src/nova/accelerator/cyborg.py` | 337–337 | `no-static-edge` — callers of `get_arq_by_uuid` are in unresolved `nova.*` modules outside the source set |

No terminated chains. (`.aee/security-chains.json`, `summary.terminatedChains: 0`)

---

## UNKNOWN-Language Files (Intake Summary)

None. (`.aee/intake-summary.md`, "UNKNOWN Files — Flagged for Human Review: None")

---

## Verification Errors (Verification Report)

No errors. All issues in the Verification Report (`.aee/verification-report.json`) are at `severity: "warning"` or `severity: "info"`.

| Severity | Count |
|----------|-------|
| error    | 0     |
| warning  | 3     |
| info     | 1     |
