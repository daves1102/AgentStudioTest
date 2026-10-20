# Link Summary

## Counts

| Metric | Value |
|---|---|
| Files | 443 |
| File edges | 1577 |
| Cross-component edges | 0 |
| Resolved | 4548 |
| Ambiguous | 0 |
| Unresolved | 286 |
| External imports | 1012 |
| Seams | 0 |

## Component Dependencies

No cross-component file edges found. All 1577 file edges are intra-component (within the `nova` component).

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

286 unresolved imports across 14 distinct symbol roots (down from 302 last run). This batch extracted `nova.image`, `nova.keymgr`, `nova.limit`, and `nova.locale` — resolving `nova.image` (was 9 refs) and `nova.limit` (was 10 refs) completely. New entrant: `nova.storage` (1 ref).

**Summary by unresolved module root:**

| Symbol | Refs | vs prev run |
|---|---|---|
| nova | 151 | +2 (was 149) |
| nova.policies | 60 | — |
| nova.virt | 23 | — |
| nova.notifications.objects | 17 | — |
| nova.pci | 13 | — |
| nova.volume | 9 | — |
| nova.share | 3 | — |
| nova.context | 3 | — |
| nova.virt.libvirt | 2 | — |
| nova.notifications | 1 | — |
| nova.quota | 1 | — |
| nova.policy | 1 | — |
| nova.virt.node | 1 | — |
| nova.storage | 1 | new |

Resolved vs previous run: `nova.image` (was 9 refs), `nova.limit` (was 10 refs) — both now in the KB. The dominant remaining gaps remain unchanged: bare `nova` top-level imports (151), `nova.policies` (60), `nova.virt` (23), and `nova.notifications.objects` (17).

**Remaining gap clusters:**

| Gap | Refs | Likely source files |
|---|---|---|
| nova | 151 | nova.conf.*, nova.console.*, nova.db.*, nova.api.* (top-level sub-package pattern) |
| nova.policies | 60 | nova.api.openstack.compute.* |
| nova.virt | 23 | nova.conf.*, nova.utils, nova.compute.* (not yet extracted) |
| nova.notifications.objects | 17 | nova.objects.*, nova.compute.* |
| nova.pci | 13 | nova.objects.pci_device, nova.api.* |
| nova.volume | 9 | nova.api.*, nova.compute.* |

Expected to resolve when `nova/virt/`, `nova/policies/`, `nova/compute/`, and `nova/notifications/` are extracted.

## Ambiguous References

None.

## Warnings

None. All 443 KB records were usable.
