# Link Summary

## Counts

| Metric | Value |
|---|---|
| Files | 433 |
| File edges | 1536 |
| Cross-component edges | 0 |
| Resolved | 4451 |
| Ambiguous | 0 |
| Unresolved | 302 |
| External imports | 970 |
| Seams | 0 |

## Component Dependencies

No cross-component file edges found. All 1536 file edges are intra-component (within the `nova` component).

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

302 unresolved imports across 15 distinct symbol roots. This run extracted `nova.conf.*` and `nova.console.*` — `nova.conf` (53 refs) and `nova.compute` (66 refs) from the previous run are now fully resolved. New dominant gaps are bare `nova` references and `nova.policies`.

**Summary by unresolved module root:**

| Symbol | Refs | vs prev run |
|---|---|---|
| nova | 149 | +76 (was 73) |
| nova.policies | 60 | +2 (was 58) |
| nova.virt | 23 | +12 (was 11) |
| nova.notifications.objects | 17 | +13 (was 4) |
| nova.pci | 13 | +7 (was 6) |
| nova.limit | 10 | +7 (was 3) |
| nova.image | 9 | +5 (was 4) |
| nova.volume | 9 | +6 (was 3) |
| nova.share | 3 | +1 (was 2) |
| nova.context | 3 | +1 (was 2) |
| nova.virt.libvirt | 2 | new |
| nova.notifications | 1 | new |
| nova.quota | 1 | new |
| nova.policy | 1 | new |
| nova.virt.node | 1 | new |

Resolved vs previous run: `nova.conf` (was 53 refs), `nova.compute` (was 66 refs) are now fully in the KB. The bare `nova` symbol count jumped (+76) because newly-extracted console and conf files reference top-level nova sub-packages not yet extracted (`nova.virt`, `nova.policies`, `nova.pci`, etc. via `nova.<module>` wildcard imports).

**Selected unresolved entries:**

| Symbol | Typical ref sites |
|---|---|
| nova | nova.conf.*, nova.console.* (top-level sub-package imports) |
| nova.policies | nova.api.openstack.compute.* |
| nova.virt | nova.conf.*, nova.console.*, nova.utils |
| nova.notifications.objects | nova.objects.*, nova.compute.* |
| nova.pci | nova.objects.pci_device, nova.api.* |
| nova.limit | nova.api.* |
| nova.image | nova.api.*, nova.compute.* |
| nova.volume | nova.api.*, nova.compute.* |

These are expected to resolve when `nova/virt/`, `nova/policies/`, `nova/compute/`, and related sub-packages are extracted.

## Ambiguous References

None.

## Warnings

None. All 433 KB records were usable.
