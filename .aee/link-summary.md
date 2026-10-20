# Link Summary

## Counts

| Metric | Value |
|---|---|
| Files | 327 |
| File edges | 1060 |
| Cross-component edges | 0 |
| Resolved | 3066 |
| Ambiguous | 0 |
| Unresolved | 287 |
| External imports | 649 |
| Seams | 0 |

## Component Dependencies

No cross-component file edges found. All 1060 file edges are intra-component (within the `nova` component).

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

287 unresolved imports across 14 distinct symbol roots. This run added `nova.api.*`, `nova.network.*`, and other sub-packages — the `nova.conf` and `nova.compute` gaps from the previous run remain dominant, now joined by `nova.policies`.

**Summary by unresolved module root:**

| Symbol | Refs |
|---|---|
| nova | 73 |
| nova.compute | 66 |
| nova.policies | 58 |
| nova.conf | 53 |
| nova.virt | 11 |
| nova.pci | 6 |
| nova.image | 4 |
| nova.notifications.objects | 4 |
| nova.limit | 3 |
| nova.volume | 3 |
| nova.share | 2 |
| nova.context | 2 |
| nova.conductor | 1 |
| nova.notifications | 1 |

Resolved vs previous run: `nova.network` (3 refs) is now fully resolved — `nova/network/` was extracted in this batch. New entrant: `nova.policies` (58 refs) introduced by the newly-extracted API layer. Dominant remaining gaps: `nova.compute` (compute service layer), `nova.policies` (policy layer), and `nova.conf` (configuration layer).

**Selected unresolved entries:**

| File | Symbol | Reason |
|---|---|---|
| src/nova/api/openstack/compute/* | nova.policies | module-not-found |
| src/nova/api/openstack/compute/* | nova.compute | module-not-found |
| src/nova/api/openstack/compute/* | nova.conf | module-not-found |
| src/nova/db/main/api.py | nova.conf | module-not-found |
| src/nova/db/main/api.py | nova | module-not-found |
| src/nova/utils.py | nova.virt | module-not-found |
| src/nova/objects/pci_device.py | nova.pci | module-not-found |
| src/nova/objects/share_mapping.py | nova.share | module-not-found |

These are expected to resolve when `nova/compute/`, `nova/policies/`, `nova/conf/`, and related sub-packages are extracted.

## Ambiguous References

None.

## Warnings

None. All 327 KB records were usable.
