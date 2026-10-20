# Link Summary

## Counts

| Metric | Value |
|---|---|
| Files | 532 |
| File edges | 1882 |
| Cross-component edges | 0 |
| Resolved | 5164 |
| Ambiguous | 0 |
| Unresolved | 196 |
| External imports | 1148 |
| Seams | 0 |

## Component Dependencies

No cross-component file edges found. All 1882 file edges are intra-component (within the `nova` component).

## Seams

| Kind | Count |
|---|---|
| http-endpoint | 0 |
| bus-topic | 0 |
| db-table | 0 |
| env-var | 0 |
| executable | 0 |
| native-symbol | 0 |

No cross-component seams found in `src/`. All seam kinds produced no results.

## Unresolved Imports

196 unresolved imports across 10 distinct symbol roots (down from 286 last run — a reduction of 90). This batch extracted `nova.policies.*` and `nova.privsep.*`, resolving three of the top-5 gaps from the previous run: `nova.policies` (was 60), `nova.notifications.objects` (was 17), and `nova.pci` (was 13).

**Summary by unresolved module root:**

| Symbol | Refs | vs prev run |
|---|---|---|
| nova | 151 | — |
| nova.virt | 23 | — |
| nova.volume | 9 | — |
| nova.context | 4 | +1 (was 3) |
| nova.share | 3 | — |
| nova.virt.libvirt | 2 | — |
| nova.quota | 1 | — |
| nova.policy | 1 | — |
| nova.virt.node | 1 | — |
| nova.storage | 1 | — |

Resolved vs previous run: `nova.policies` (was 60 refs), `nova.notifications.objects` (was 17 refs), `nova.pci` (was 13 refs) — all now in the KB. The bare `nova` symbol (151 refs) remains the largest group and is structurally distinct from module-level gaps: it represents top-level package re-exports and `nova.<attr>` access patterns spread across many files. `nova.virt` (23) is the next meaningful module-level gap.

**Remaining gap clusters:**

| Gap | Refs | Notes |
|---|---|---|
| nova | 151 | Top-level package access patterns; will reduce progressively as nova sub-packages are extracted |
| nova.virt | 23 | Hypervisor abstraction layer — not yet extracted |
| nova.volume | 9 | Cinder volume integration — not yet extracted |
| nova.context | 4 | Request context module; may resolve with nova.compute |
| nova.share | 3 | Manila share integration — not yet extracted |
| nova.virt.libvirt | 2 | libvirt-specific driver — sub-module of nova.virt |
| nova.quota | 1 | Quota enforcement — not yet extracted |
| nova.policy | 1 | Policy enforcer — not yet extracted |
| nova.virt.node | 1 | Node resource tracking — sub-module of nova.virt |
| nova.storage | 1 | Storage utility — not yet extracted |

Expected to resolve primarily when `nova/virt/`, `nova/compute/`, and `nova/volume/` are extracted.

## Ambiguous References

None.

## Warnings

None. All 532 KB records were usable.
