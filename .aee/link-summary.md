# Link Summary

## Counts

| Metric | Value |
|---|---|
| Files | 1509 |
| File edges | 6902 |
| Cross-component edges | 0 |
| Resolved | 18812 |
| Ambiguous | 0 |
| Unresolved | 10 |
| External imports | 4049 |
| Seams | 0 |

## Component Dependencies

No cross-component file edges found. All 6902 file edges are intra-component (within the `nova` component).

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

**10 unresolved imports — 1 distinct symbol root.** This batch extracted `nova.context`, `nova.policy`, `nova.quota`, and 17 other top-level nova modules, resolving all named-module gaps from the previous run. The graph is now effectively complete.

**Summary by unresolved module root:**

| Symbol | Refs | Notes |
|---|---|---|
| nova | 10 | Bare top-level package access in test/functional files |

**All 10 remaining unresolved entries (for human review):**

| File | Line | Symbol | Reason |
|---|---|---|---|
| src/nova/tests/fixtures/manila.py | 14 | nova | module-not-found |
| src/nova/tests/functional/libvirt/test_numa_servers.py | 22 | nova | module-not-found |
| src/nova/tests/functional/libvirt/test_pci_sriov_servers.py | 31 | nova | module-not-found |
| src/nova/tests/functional/libvirt/test_vif_model.py | 20 | nova | module-not-found |
| src/nova/tests/functional/regressions/test_bug_1845291.py | 14 | nova | module-not-found |
| src/nova/tests/functional/regressions/test_bug_1849165.py | 14 | nova | module-not-found |
| src/nova/tests/functional/regressions/test_bug_2143972.py | 13 | nova | module-not-found |
| src/nova/tests/unit/compute/test_compute.py | 47 | nova | module-not-found |
| src/nova/tests/unit/compute/test_compute_mgr.py | 37 | nova | module-not-found |
| src/nova/tests/unit/scheduler/test_host_manager.py | 28 | nova | module-not-found |

These 10 references use the bare `nova` package name (e.g. `import nova` or `nova.<attr>`) in test files. They may reference dynamically-loaded sub-modules (compute, scheduler, fixtures) whose source files have not been extracted yet — `nova.compute`, `nova.scheduler`, and `nova.tests.fixtures.*` are the likely targets. They may also resolve in a later run once the remaining test infrastructure files land.

**Resolved vs previous run:** `nova.context` (7 refs), `nova.policy` (2 refs), `nova.quota` (1 ref), plus 903 bare `nova` references that resolved to the newly-extracted top-level modules (`nova.context.py`, `nova.policy.py`, `nova.quota.py`, `nova.rpc.py`, `nova.service.py`, `nova.manager.py`, etc.).

## Ambiguous References

None.

## Warnings

None. All 1509 KB records were usable.
