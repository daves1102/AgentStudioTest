# Unresolved Items Index

_Batch: `f56908d5e0741524fb4cb768d9b52ccb0f3a585b` — 2026-10-20_

Verification Summary (`.aee/verification-summary.md`) reports 0 errors — this document is not an escalation.

---

## Unresolved and Ambiguous References (Link Graph)

Source: `.aee/link-summary.md` (Unresolved Imports table).

### Unresolved References (302 total)

**Summary by unresolved module root** (15 distinct roots):

| Symbol root | Refs | Notes |
|-------------|------|-------|
| `nova` | 149 | bare generic import; jumped +76 as conf/ and console/ files import top-level sub-packages not yet extracted |
| `nova.policies` | 60 | policy layer — not yet extracted |
| `nova.virt` | 23 | virt driver layer — not yet extracted |
| `nova.notifications.objects` | 17 | notification objects — not yet extracted |
| `nova.pci` | 13 | PCI management — not yet extracted |
| `nova.limit` | 10 | limit enforcement layer — not yet extracted |
| `nova.image` | 9 | image service client — not yet extracted |
| `nova.volume` | 9 | volume integration — not yet extracted |
| `nova.share` | 3 | share mapping — not yet extracted |
| `nova.context` | 3 | request context — not yet extracted |
| `nova.virt.libvirt` | 2 | libvirt driver — not yet extracted |
| `nova.notifications` | 1 | notification helpers — not yet extracted |
| `nova.quota` | 1 | quota enforcement — not yet extracted |
| `nova.policy` | 1 | policy module — not yet extracted |
| `nova.virt.node` | 1 | virt node module — not yet extracted |
| **Total** | **302** | |

Resolved since batch 4: `nova.conf` (was 53 refs) and `nova.compute` (was 66 refs) are now fully in the KB — both extracted in Batch 5 (`cmd/`, `compute/`, `conductor/`, `conf/`, `console/` subsystems). New entrants: `nova.virt.libvirt` (2 refs), `nova.notifications` (1), `nova.quota` (1), `nova.policy` (1), `nova.virt.node` (1) — introduced by the newly-extracted `conf/` and `console/` files.

**Selected unresolved entries** (Link Summary `.aee/link-summary.md`):

| File | Symbol | Reason |
|------|--------|--------|
| `src/nova/api/openstack/compute/*` (multiple) | `nova.policies` | module-not-found |
| `src/nova/conf/*` (multiple) | `nova` | module-not-found (top-level sub-package imports) |
| `src/nova/console/*` (multiple) | `nova` | module-not-found (top-level sub-package imports) |
| `src/nova/utils.py` | `nova.virt` | module-not-found |
| `src/nova/objects/pci_device.py` | `nova.pci` | module-not-found |
| `src/nova/objects/share_mapping.py` | `nova.share` | module-not-found |
| `src/nova/api/*` (multiple) | `nova.limit` | module-not-found |
| `src/nova/api/*` (multiple) | `nova.image` | module-not-found |

### Ambiguous References

None. (`.aee/link-summary.md`, `summary.ambiguous: 0`)

---

## Partial Taint Chains (Security Chains)

Source: `.aee/security-chains.json` (`chains` array, `status: "partial"`).

| Chain ID | Source File | Source Lines | Sink File | Sink Lines | Stopped-At File | Stopped-At Lines | Reason |
|----------|------------|-------------|----------|-----------|----------------|-----------------|--------|
| chain-001 | `src/nova/accelerator/cyborg.py` | 337–337 | `src/nova/accelerator/cyborg.py` | 358–359 | `src/nova/accelerator/cyborg.py` | 337–337 | `no-static-edge` — `get_arq_by_uuid` does not appear in any of the 433 source files except its own definition; five callers of `cyborg.py` (`compute/api.py`, `compute/manager.py`, `compute/utils.py`, `conductor/manager.py`, `network/neutron.py`) all confirmed as not calling `get_arq_by_uuid`; callers expected in files not yet extracted |

No terminated chains. (`.aee/security-chains.json`, `summary.terminatedChains: 0`)

---

## UNKNOWN-Language Files (Intake Summary)

None. (`.aee/intake-summary.md`, "UNKNOWN Files — Flagged for Human Review: None")

---

## Verification Errors (Verification Report)

No errors. All issues in the Verification Report (`.aee/verification-report.json`) are at `severity: "info"`.

| Severity | Count |
|----------|-------|
| error    | 0     |
| warning  | 0     |
| info     | 1     |

The one info item: `docs/src/nova/accelerator/__init__.py.md` overview line-count claim — file has 0 lines, so no citation is possible; informational only (Verification Report `.aee/verification-report.json`, item 1).

The persistent warning from batches 1–4 (`docs/src/nova/accelerator/cyborg.py.md` missing citation for lazy-adapter claim) is **resolved** in Batch 5: citation `(src/nova/accelerator/cyborg.py:L121–L134)` added and verified by Verifier Critic (Verification Summary `.aee/verification-summary.md`).
