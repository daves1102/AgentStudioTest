# Unresolved Items Index

_Batch: `c7012ab2592eef3f2cf00f50553e7d290ce204fc` — 2026-10-20_

Verification Summary (`.aee/verification-summary.md`) reports 0 errors — this document is not an escalation.

---

## Unresolved and Ambiguous References (Link Graph)

Source: `.aee/link-summary.md` (Unresolved Imports table).

### Unresolved References (286 total)

**Summary by unresolved module root** (14 distinct roots):

| Symbol root | Refs | Notes |
|-------------|------|-------|
| `nova` | 151 | bare generic import |
| `nova.policies` | 60 | policy layer — not yet extracted |
| `nova.virt` | 23 | virt driver layer — not yet extracted |
| `nova.notifications.objects` | 17 | notification objects — not yet extracted |
| `nova.pci` | 13 | PCI management — not yet extracted |
| `nova.volume` | 9 | volume integration — not yet extracted |
| `nova.share` | 3 | share mapping — not yet extracted |
| `nova.context` | 3 | request context — not yet extracted |
| `nova.virt.libvirt` | 2 | libvirt driver — not yet extracted |
| `nova.notifications` | 1 | notification helpers — not yet extracted |
| `nova.quota` | 1 | quota enforcement — not yet extracted |
| `nova.policy` | 1 | policy module — not yet extracted |
| `nova.virt.node` | 1 | virt node module — not yet extracted |
| `nova.storage` | 1 | storage module — new in batch 6, not yet extracted |
| **Total** | **286** | |

Resolved since batch 5: `nova.image` (was 9 refs) and `nova.limit` (was 10 refs) — both fully extracted in Batch 6 (`image/glance.py`, `limit/local.py`, `limit/placement.py`, `limit/utils.py`). New entrant: `nova.storage` (1 ref).

**Selected unresolved entries** (Link Summary `.aee/link-summary.md`):

| File | Symbol | Reason |
|------|--------|--------|
| `src/nova/api/openstack/compute/*` (multiple) | `nova.policies` | module-not-found |
| `src/nova/conf/*`, `src/nova/console/*` (multiple) | `nova` | module-not-found (top-level sub-package imports) |
| `src/nova/utils.py` | `nova.virt` | module-not-found |
| `src/nova/objects/pci_device.py` | `nova.pci` | module-not-found |
| `src/nova/objects/share_mapping.py` | `nova.share` | module-not-found |
| `src/nova/api/*`, `src/nova/compute/*` (multiple) | `nova.volume` | module-not-found |

### Ambiguous References

None. (`.aee/link-summary.md`, `summary.ambiguous: 0`)

---

## Partial Taint Chains (Security Chains)

Source: `.aee/security-chains.json` (`chains` array, `status: "partial"`).

| Chain ID | Source File | Source Lines | Sink File | Sink Lines | Stopped-At File | Stopped-At Lines | Reason |
|----------|------------|-------------|----------|-----------|----------------|-----------------|--------|
| chain-001 | `src/nova/accelerator/cyborg.py` | 337–337 | `src/nova/accelerator/cyborg.py` | 358–359 | `src/nova/accelerator/cyborg.py` | 337–337 | `no-static-edge` — `get_arq_by_uuid` does not appear in any of the 443 source files except its own definition; five callers of `cyborg.py` all confirmed as not calling `get_arq_by_uuid`; new batch 6 namespaces (hacking/, image/, keymgr/, limit/) contain no callers; callers expected in files not yet extracted |

No terminated chains. (`.aee/security-chains.json`, `summary.terminatedChains: 0`)

---

## UNKNOWN-Language Files (Intake Summary)

None. (`.aee/intake-summary.md`, "UNKNOWN Files — Flagged for Human Review: None")

Note: 12 `.po` gettext translation files under `src/nova/locale/` were classified as OTHER (non-source) and are not tracked as UNKNOWN. (`.aee/intake-summary.md`, "OTHER files: 12")

---

## Verification Errors (Verification Report)

No errors. All issues in the Verification Report (`.aee/verification-report.json`) are at `severity: "info"`.

| Severity | Count |
|----------|-------|
| error    | 0     |
| warning  | 0     |
| info     | 1     |

The one info item: `docs/src/nova/accelerator/__init__.py.md` — file has 0 lines, so no citation is possible; informational only (Verification Report `.aee/verification-report.json`, item 1).
