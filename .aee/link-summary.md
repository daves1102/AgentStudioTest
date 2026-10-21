# Link Summary

## Counts

| Metric | Value |
|---|---|
| Files | 1509 |
| File edges | 6902 |
| Cross-component edges | 4660 |
| Resolved | 18812 |
| Ambiguous | 0 |
| Unresolved | 10 |
| External imports | 4049 |
| Seams | 0 |

## Component Dependencies

The manual update to `link-graph.json` reclassified file edges across 30 components. There are now **213 distinct component pairs** with **4660 cross-component file edges** covering **13283 resolved references**.

| From | To | File Edges | Resolved Refs |
|---|---|---|---|
| accelerator | nova | 4 | 10 |
| accelerator | objects | 1 | 2 |
| accelerator | scheduler | 1 | 2 |
| api | compute | 53 | 101 |
| api | conductor | 1 | 2 |
| api | conf | 21 | 21 |
| api | image | 4 | 8 |
| api | limit | 3 | 6 |
| api | network | 10 | 34 |
| api | notifications | 1 | 2 |
| api | nova | 151 | 277 |
| api | objects | 34 | 108 |
| api | pci | 1 | 2 |
| api | policies | 57 | 57 |
| api | scheduler | 1 | 2 |
| api | servicegroup | 3 | 6 |
| api | share | 1 | 2 |
| api | virt | 3 | 8 |
| api | volume | 3 | 6 |
| cmd | compute | 5 | 9 |
| cmd | conductor | 2 | 3 |
| cmd | conf | 16 | 21 |
| cmd | console | 2 | 4 |
| cmd | db | 8 | 15 |
| cmd | limit | 2 | 2 |
| cmd | network | 2 | 5 |
| cmd | nova | 48 | 121 |
| cmd | objects | 18 | 66 |
| cmd | policies | 1 | 2 |
| cmd | scheduler | 3 | 7 |
| cmd | virt | 2 | 6 |
| cmd | volume | 2 | 4 |
| compute | accelerator | 3 | 7 |
| compute | conductor | 2 | 4 |
| compute | conf | 12 | 14 |
| compute | db | 5 | 13 |
| compute | image | 2 | 4 |
| compute | limit | 3 | 7 |
| compute | network | 6 | 15 |
| compute | notifications | 14 | 60 |
| compute | nova | 58 | 323 |
| compute | objects | 39 | 212 |
| compute | pci | 7 | 13 |
| compute | policies | 2 | 2 |
| compute | scheduler | 7 | 16 |
| compute | servicegroup | 1 | 2 |
| compute | share | 1 | 2 |
| compute | virt | 12 | 45 |
| compute | volume | 2 | 4 |
| conductor | accelerator | 1 | 3 |
| conductor | compute | 13 | 35 |
| conductor | conf | 4 | 4 |
| conductor | image | 3 | 6 |
| conductor | limit | 2 | 4 |
| conductor | network | 4 | 7 |
| conductor | notifications | 1 | 2 |
| conductor | nova | 24 | 67 |
| conductor | objects | 9 | 68 |
| conductor | scheduler | 7 | 27 |
| conductor | servicegroup | 1 | 2 |
| conductor | volume | 2 | 4 |
| conf | virt | 1 | 1 |
| console | compute | 1 | 2 |
| console | conf | 2 | 2 |
| console | nova | 11 | 27 |
| console | objects | 1 | 3 |
| db | compute | 2 | 2 |
| db | conf | 2 | 2 |
| db | nova | 10 | 58 |
| db | objects | 3 | 4 |
| image | conf | 1 | 3 |
| image | nova | 4 | 22 |
| image | objects | 2 | 4 |
| image | storage | 1 | 2 |
| keymgr | conf | 1 | 1 |
| keymgr | nova | 2 | 5 |
| limit | conf | 3 | 3 |
| limit | nova | 4 | 9 |
| limit | objects | 2 | 6 |
| limit | scheduler | 2 | 4 |
| network | accelerator | 1 | 4 |
| network | compute | 1 | 2 |
| network | conf | 1 | 1 |
| network | nova | 14 | 85 |
| network | objects | 3 | 20 |
| network | pci | 3 | 6 |
| network | policies | 1 | 1 |
| notifications | conf | 2 | 2 |
| notifications | image | 1 | 2 |
| notifications | nova | 6 | 10 |
| notifications | objects | 32 | 125 |
| nova | api | 1 | 3 |
| nova | compute | 2 | 3 |
| nova | conductor | 1 | 2 |
| nova | conf | 16 | 16 |
| nova | db | 8 | 13 |
| nova | limit | 2 | 7 |
| nova | notifications | 2 | 6 |
| nova | objects | 12 | 37 |
| nova | pci | 1 | 2 |
| nova | policies | 1 | 2 |
| nova | scheduler | 3 | 5 |
| nova | servicegroup | 1 | 2 |
| nova | tests-fixtures | 1 | 26 |
| nova | tests-unit | 1 | 2 |
| nova | virt | 5 | 11 |
| objects | compute | 6 | 14 |
| objects | conductor | 1 | 2 |
| objects | conf | 6 | 6 |
| objects | db | 56 | 248 |
| objects | network | 3 | 6 |
| objects | notifications | 5 | 12 |
| objects | nova | 51 | 170 |
| objects | scheduler | 1 | 2 |
| objects | share | 1 | 2 |
| objects | virt | 4 | 7 |
| pci | conf | 2 | 2 |
| pci | network | 1 | 1 |
| pci | nova | 11 | 27 |
| pci | objects | 9 | 17 |
| privsep | conf | 1 | 1 |
| privsep | nova | 3 | 7 |
| scheduler | compute | 4 | 12 |
| scheduler | conf | 23 | 23 |
| scheduler | network | 1 | 2 |
| scheduler | nova | 29 | 91 |
| scheduler | objects | 17 | 57 |
| scheduler | pci | 2 | 4 |
| scheduler | servicegroup | 2 | 4 |
| scheduler | virt | 4 | 25 |
| servicegroup | conf | 3 | 3 |
| servicegroup | nova | 4 | 7 |
| share | conf | 1 | 1 |
| share | nova | 2 | 10 |
| storage | conf | 1 | 1 |
| storage | nova | 3 | 10 |
| tests-fixtures | api | 2 | 4 |
| tests-fixtures | compute | 2 | 4 |
| tests-fixtures | conf | 7 | 11 |
| tests-fixtures | db | 3 | 7 |
| tests-fixtures | network | 2 | 3 |
| tests-fixtures | nova | 16 | 45 |
| tests-fixtures | objects | 6 | 9 |
| tests-fixtures | policies | 1 | 2 |
| tests-fixtures | privsep | 1 | 1 |
| tests-fixtures | scheduler | 1 | 2 |
| tests-fixtures | tests-functional | 1 | 2 |
| tests-fixtures | tests-unit | 1 | 1 |
| tests-fixtures | virt | 11 | 42 |
| tests-functional | api | 5 | 8 |
| tests-functional | cmd | 3 | 9 |
| tests-functional | compute | 58 | 70 |
| tests-functional | conductor | 2 | 2 |
| tests-functional | conf | 31 | 34 |
| tests-functional | db | 24 | 73 |
| tests-functional | image | 1 | 1 |
| tests-functional | limit | 2 | 2 |
| tests-functional | network | 12 | 17 |
| tests-functional | nova | 295 | 616 |
| tests-functional | objects | 122 | 421 |
| tests-functional | pci | 1 | 2 |
| tests-functional | policies | 11 | 11 |
| tests-functional | scheduler | 10 | 17 |
| tests-functional | tests | 1 | 2 |
| tests-functional | tests-fixtures | 176 | 625 |
| tests-functional | tests-unit | 41 | 78 |
| tests-functional | virt | 35 | 52 |
| tests-functional | volume | 3 | 4 |
| tests-unit | accelerator | 3 | 8 |
| tests-unit | api | 204 | 428 |
| tests-unit | cmd | 7 | 30 |
| tests-unit | compute | 199 | 319 |
| tests-unit | conductor | 12 | 33 |
| tests-unit | conf | 58 | 68 |
| tests-unit | console | 18 | 37 |
| tests-unit | db | 70 | 300 |
| tests-unit | hacking | 1 | 14 |
| tests-unit | image | 11 | 34 |
| tests-unit | keymgr | 1 | 2 |
| tests-unit | limit | 16 | 29 |
| tests-unit | network | 50 | 176 |
| tests-unit | notifications | 10 | 30 |
| tests-unit | nova | 784 | 2232 |
| tests-unit | objects | 362 | 1752 |
| tests-unit | pci | 25 | 59 |
| tests-unit | policies | 70 | 71 |
| tests-unit | privsep | 11 | 69 |
| tests-unit | scheduler | 83 | 206 |
| tests-unit | servicegroup | 8 | 13 |
| tests-unit | share | 1 | 3 |
| tests-unit | storage | 5 | 9 |
| tests-unit | tests | 1 | 3 |
| tests-unit | tests-fixtures | 85 | 246 |
| tests-unit | virt | 209 | 795 |
| tests-unit | volume | 12 | 18 |
| virt | api | 5 | 10 |
| virt | compute | 31 | 47 |
| virt | conf | 49 | 62 |
| virt | console | 5 | 18 |
| virt | image | 5 | 10 |
| virt | network | 10 | 17 |
| virt | nova | 122 | 468 |
| virt | objects | 36 | 108 |
| virt | pci | 7 | 20 |
| virt | privsep | 26 | 96 |
| virt | scheduler | 2 | 4 |
| virt | servicegroup | 1 | 2 |
| virt | storage | 3 | 6 |
| virt | volume | 1 | 2 |
| volume | conf | 1 | 1 |
| volume | nova | 4 | 21 |
| wsgi | api | 2 | 4 |
| wsgi | nova | 2 | 4 |

**Top 10 heaviest component pairs by resolved refs:**

| From | To | Resolved Refs |
|---|---|---|
| tests-unit | nova | 2232 |
| tests-unit | objects | 1752 |
| tests-unit | virt | 795 |
| tests-functional | tests-fixtures | 625 |
| tests-functional | nova | 616 |
| tests-functional | objects | 421 |
| tests-unit | api | 428 |
| tests-unit | compute | 319 |
| tests-unit | scheduler | 206 |
| objects | db | 248 |

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

10 unresolved imports — all bare `nova` package (1 distinct symbol root). These 10 references are in test files and map to `src/nova/__init__.py`, which does not exist in the repository.

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

These will resolve if `src/nova/__init__.py` is added to the repository and extracted.

## Ambiguous References

None.

## Warnings

None. All 1509 KB records were usable.
