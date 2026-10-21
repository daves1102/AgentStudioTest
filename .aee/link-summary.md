# Link Summary

## Counts

| Metric | Value |
|---|---|
| Files | 1388 |
| File edges | 5129 |
| Cross-component edges | 0 |
| Resolved | 13877 |
| Ambiguous | 0 |
| Unresolved | 1200 |
| External imports | 3483 |
| Seams | 0 |

## Component Dependencies

No cross-component file edges found. All 5129 file edges are intra-component (within the `nova` component).

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

1200 unresolved imports across 22 distinct symbol roots (up from 196 — increase driven by the test suite extraction). This batch added 856 KB records, primarily from `nova.tests.unit.*` (unit tests for virt drivers). The test files import heavily from `nova.virt.*` sub-modules which are not yet in the KB. None of the previous resolved modules regressed.

**Summary by unresolved module root:**

| Symbol | Refs | Notes |
|---|---|---|
| nova | 884 | Top-level package access patterns + test suite imports |
| nova.virt | 97 | Hypervisor abstraction layer — not yet extracted |
| nova.virt.libvirt | 72 | libvirt driver — not yet extracted |
| nova.virt.vmwareapi | 45 | VMware API driver — not yet extracted |
| nova.volume | 23 | Cinder integration — not yet extracted |
| nova.virt.libvirt.volume | 21 | libvirt volume handling — not yet extracted |
| nova.virt.image | 10 | VM image management — not yet extracted |
| nova.virt.disk.mount | 8 | Disk mount utilities — not yet extracted |
| nova.context | 7 | Request context — not yet extracted |
| nova.virt.libvirt.cpu | 5 | libvirt CPU pinning — not yet extracted |
| nova.virt.zvm | 5 | z/VM driver — not yet extracted |
| nova.virt.ironic | 4 | Ironic driver — not yet extracted |
| nova.virt.libvirt.storage | 4 | libvirt storage — not yet extracted |
| nova.virt.disk | 3 | Disk utilities — not yet extracted |
| nova.policy | 2 | Policy enforcer — not yet extracted |
| nova.virt.libvirt.host | 2 | libvirt host management — not yet extracted |
| nova.virt.block_device | 2 | Block device management — not yet extracted |
| nova.virt.disk.vfs | 2 | Virtual filesystem utilities — not yet extracted |
| nova.quota | 1 | Quota enforcement — not yet extracted |
| nova.virt.node | 1 | Node resource tracking — not yet extracted |
| nova.virt.hardware | 1 | Hardware topology — not yet extracted |
| nova.virt.libvirt.driver | 1 | libvirt main driver — not yet extracted |

**Key observation:** The `nova.virt.*` family now accounts for 283 of 1200 unresolved refs across 14 sub-modules. This cluster will collapse significantly once `nova/virt/` is extracted. The bare `nova` symbol increase (from 151 to 884) is largely driven by test files importing from not-yet-extracted top-level modules.

## Ambiguous References

None.

## Warnings

None. All 1388 KB records were usable.
