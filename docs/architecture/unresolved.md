# Unresolved Items Index

_Batch: `868bfe40c13e07d11a2aa58ddb0c8900f9d9744d` — 2026-10-20_

Verification Summary (`.aee/verification-summary.md`) reports 0 errors — this document is not an escalation.

---

## Unresolved and Ambiguous References (Link Graph)

Source: `.aee/link-summary.md` (Unresolved Imports table) and `.aee/link-graph.json` (`unresolved` and `ambiguous` arrays).

### Unresolved References (99 total)

**Summary by unresolved module root** (9 distinct roots):

| Symbol root | Refs | Notes |
|-------------|------|-------|
| `nova` | 35 | generic `nova` bare import |
| `nova.conf` | 31 | configuration layer — not yet extracted |
| `nova.compute` | 12 | compute service layer — not yet extracted |
| `nova.virt` | 8 | virt driver layer — not yet extracted |
| `nova.network` | 4 | network layer — not yet extracted |
| `nova.notifications.objects` | 4 | notification objects — not yet extracted |
| `nova.context` | 2 | request context — not yet extracted |
| `nova.pci` | 2 | PCI management — not yet extracted |
| `nova.share` | 1 | share mapping — not yet extracted |
| **Total** | **99** | |

Notable resolved since batch 2: `nova.db.main` (was 32 refs) and `nova.db.api` (was 21 refs) — both now in the KB following batch 3 database layer extraction. Dominant remaining gaps are `nova.conf` and `nova.compute`.

**Selected entries** (Link Summary `.aee/link-summary.md`, Unresolved Imports table):

| File | Line | Symbol | Reason |
|------|------|--------|--------|
| `src/nova/accelerator/cyborg.py` | 49 | `nova.scheduler` | module-not-found |
| `src/nova/objects/aggregate.py` | 21 | `nova.compute` | module-not-found |
| `src/nova/objects/instance.py` | — | `nova.notifications.objects` | module-not-found |
| `src/nova/objects/service.py` | — | `nova.network` | module-not-found |
| `src/nova/service_auth.py` | — | `nova.conf` | module-not-found |
| `src/nova/utils.py` | — | `nova.conf` | module-not-found |
| `src/nova/utils.py` | — | `nova.virt` | module-not-found |
| `src/nova/objects/share_mapping.py` | — | `nova.share` | module-not-found |
| `src/nova/db/main/api.py` | — | `nova` | module-not-found |
| `src/nova/db/main/api.py` | — | `nova.conf` | module-not-found |
| `src/nova/db/api/api.py` | — | `nova.context` | module-not-found |
| `src/nova/objects/pci_device.py` | — | `nova.pci` | module-not-found |

### Ambiguous References

None. (`.aee/link-graph.json`, `ambiguous: []`, `summary.ambiguous: 0`)

---

## Partial Taint Chains (Security Chains)

Source: `.aee/security-chains.json` (`chains` array, `status: "partial"`).

| Chain ID | Source File | Source Lines | Sink File | Sink Lines | Stopped-At File | Stopped-At Lines | Reason |
|----------|------------|-------------|----------|-----------|----------------|-----------------|--------|
| chain-001 | `src/nova/accelerator/cyborg.py` | 337–337 | `src/nova/accelerator/cyborg.py` | 358–359 | `src/nova/accelerator/cyborg.py` | 337–337 | `no-static-edge` — no file in the 122-file source set has an inbound edge to `cyborg.py`; callers of `_CyborgClient.get_arq_by_uuid` are expected in `nova.compute` or `nova.conductor` (not yet extracted) |

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
| warning  | 1     |
| info     | 1     |

The one open warning (3rd consecutive round): `docs/src/nova/accelerator/cyborg.py.md` overview paragraph "adapter created lazily" claim lacks a `(file:Lstart–Lend)` citation; should cite `src/nova/accelerator/cyborg.py:L121–L134` (Verification Report `.aee/verification-report.json`, item 1).
