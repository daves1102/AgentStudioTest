# Unresolved Items Index

_Batch: `caa20451a7b7df151b4ddbaab06f92e6857e74a6` — 2026-10-20_

Verification Summary (`.aee/verification-summary.md`) reports 0 errors — this document is not an escalation.

---

## Unresolved and Ambiguous References (Link Graph)

Source: `.aee/link-summary.md` (Unresolved Imports table) and `.aee/link-graph.json` (`unresolved` and `ambiguous` arrays).

### Unresolved References (287 total)

**Summary by unresolved module root** (14 distinct roots):

| Symbol root | Refs | Notes |
|-------------|------|-------|
| `nova` | 73 | bare generic import |
| `nova.compute` | 66 | compute service layer — not yet extracted |
| `nova.policies` | 58 | policy layer — new in batch 4 (API layer), not yet extracted |
| `nova.conf` | 53 | configuration layer — not yet extracted |
| `nova.virt` | 11 | virt driver layer — not yet extracted |
| `nova.pci` | 6 | PCI management — not yet extracted |
| `nova.notifications.objects` | 4 | notification objects — not yet extracted |
| `nova.image` | 4 | image service client — not yet extracted |
| `nova.limit` | 3 | limit enforcement layer — not yet extracted |
| `nova.volume` | 3 | volume integration — not yet extracted |
| `nova.share` | 2 | share mapping — not yet extracted |
| `nova.context` | 2 | request context — not yet extracted |
| `nova.conductor` | 1 | conductor service — not yet extracted |
| `nova.notifications` | 1 | notification helpers — not yet extracted |
| **Total** | **287** | |

Notable resolved since batch 3: `nova.network` (was 4 refs) — `nova/network/` was fully extracted in Batch 4. New entrant: `nova.policies` (58 refs), introduced by the newly-extracted API layer (`api/openstack/compute/*`).

**Selected unresolved entries** (Link Summary `.aee/link-summary.md`):

| File | Symbol | Reason |
|------|--------|--------|
| `src/nova/api/openstack/compute/*` (multiple) | `nova.policies` | module-not-found |
| `src/nova/api/openstack/compute/*` (multiple) | `nova.compute` | module-not-found |
| `src/nova/api/openstack/compute/*` (multiple) | `nova.conf` | module-not-found |
| `src/nova/db/main/api.py` | `nova.conf` | module-not-found |
| `src/nova/db/main/api.py` | `nova` | module-not-found |
| `src/nova/utils.py` | `nova.virt` | module-not-found |
| `src/nova/objects/pci_device.py` | `nova.pci` | module-not-found |
| `src/nova/objects/share_mapping.py` | `nova.share` | module-not-found |

### Ambiguous References

None. (`.aee/link-graph.json`, `ambiguous: []`, `summary.ambiguous: 0`)

---

## Partial Taint Chains (Security Chains)

Source: `.aee/security-chains.json` (`chains` array, `status: "partial"`).

| Chain ID | Source File | Source Lines | Sink File | Sink Lines | Stopped-At File | Stopped-At Lines | Reason |
|----------|------------|-------------|----------|-----------|----------------|-----------------|--------|
| chain-001 | `src/nova/accelerator/cyborg.py` | 337–337 | `src/nova/accelerator/cyborg.py` | 358–359 | `src/nova/accelerator/cyborg.py` | 337–337 | `no-static-edge` — `src/nova/network/neutron.py` calls `get_client()`, `get_arq_pci_device_profile`, and `get_device_amount_of_dp_groups` but NOT `get_arq_by_uuid`; callers of `get_arq_by_uuid` are expected in `nova.compute` or `nova.conductor` (not yet extracted) |

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

The one open warning (4th consecutive round): `docs/src/nova/accelerator/cyborg.py.md` overview paragraph "adapter created lazily" claim lacks a `(file:Lstart–Lend)` citation; should cite `src/nova/accelerator/cyborg.py:L121–L134` (Verification Report `.aee/verification-report.json`, item 1).
