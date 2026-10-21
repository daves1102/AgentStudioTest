# Link Summary

## Counts

| Metric | Value |
|---|---|
| Files | 1484 |
| File edges | 5884 |
| Cross-component edges | 0 |
| Resolved | 16347 |
| Ambiguous | 0 |
| Unresolved | 923 |
| External imports | 3905 |
| Seams | 0 |

## Component Dependencies

No cross-component file edges found. All 5884 file edges are intra-component (within the `nova` component).

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

923 unresolved imports across only **4 distinct symbol roots** (down from 1200 with 22 roots last run). This batch extracted `nova.virt.*` production code (libvirt, vmwareapi, zvm, ironic drivers, disk utilities, etc.) and `nova.volume.*`, resolving the entire 283-ref `nova.virt.*` cluster and the 23-ref `nova.volume` gap in one go. All named module-level gaps from previous runs are now resolved.

**Summary by unresolved module root:**

| Symbol | Refs | vs prev run |
|---|---|---|
| nova | 913 | +29 (was 884) — newly extracted virt files add references |
| nova.context | 7 | — |
| nova.policy | 2 | — |
| nova.quota | 1 | — |

**Resolved vs previous run:** `nova.virt` (97), `nova.virt.libvirt` (72), `nova.virt.vmwareapi` (45), `nova.virt.libvirt.volume` (21), `nova.virt.image` (10), `nova.virt.disk.mount` (8), `nova.virt.libvirt.cpu` (5), `nova.virt.zvm` (5), `nova.virt.ironic` (4), `nova.virt.libvirt.storage` (4), `nova.virt.disk` (3), `nova.virt.libvirt.host` (2), `nova.virt.block_device` (2), `nova.virt.disk.vfs` (2), `nova.virt.node` (1), `nova.virt.hardware` (1), `nova.virt.libvirt.driver` (1), `nova.volume` (23), `nova.share` (3), `nova.storage` (1) — all now in the KB.

**Remaining gaps:**

| Symbol | Refs | Notes |
|---|---|---|
| nova | 913 | Top-level package access patterns across all extracted files; not a single missing module — will reduce only as remaining top-level nova modules are completed |
| nova.context | 7 | Request context module — may be part of nova.compute or a standalone module not yet extracted |
| nova.policy | 2 | Policy enforcer (distinct from nova.policies which is resolved) |
| nova.quota | 1 | Quota enforcement |

**State assessment:** The graph is now near-complete for named module imports. The remaining 923 unresolved entries are dominated by the bare `nova` pattern (913 refs) which represents dynamic attribute access and re-export patterns rather than a single missing file. The 10 remaining named-module refs (`nova.context`, `nova.policy`, `nova.quota`) are minor gaps.

## Ambiguous References

None.

## Warnings

None. All 1484 KB records were usable.
