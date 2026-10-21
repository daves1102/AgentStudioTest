# Quality Analysis Summary — All Batches Complete (2026-10-21)

## Overview

| Metric | B1 | B2 | B3 | B4 | B5 | B6 | **Total** |
|---|---|---|---|---|---|---|---|
| Files analyzed | 2 | 53 | 311 | 10 | 156 | 856 | **1388** |
| Files with findings | 1 | 19 | 110 | 5 | 24 | 31 | **190** |
| High | 0 | 11 | 11 | 0 | 6 | 16 | **44** |
| Medium | 3 | 6 | 135 | 7 | 26 | 23 | **200** |
| Low | 4 | 10 | 141 | 8 | 25 | 3 | **191** |

**All-batches findings by category:**

| Category | Count |
|---|---|
| complexity | ~120 |
| bug-risk | ~120 |
| error-handling | ~100 |
| test-quality | ~60 |
| maintainability | ~70 |
| readability | ~10 |
| dead-code | ~12 |

**Scope:** All 1388 source files analyzed across nova/accelerator, nova/api, nova/cmd, nova/compute, nova/conductor, nova/conf, nova/console, nova/db, nova/hacking, nova/image, nova/keymgr, nova/limit, nova/network, nova/notifications, nova/objects, nova/pci, nova/policies, nova/privsep, nova/scheduler, nova/servicegroup, nova/share, nova/storage, nova/tests, nova/virt (fixtures only).

---

## Top 10 Complexity Hotspots — Production Code (all batches)

| Rank | File | Function | CCN |
|---|---|---|---|
| 1 | src/nova/api/openstack/compute/views/servers.py | show | 50 |
| 2 | src/nova/compute/api.py | create | 43 |
| 3 | src/nova/compute/manager.py | _init_instance | 40 |
| 4 | src/nova/compute/manager.py | _do_build_and_run_instance | 38 |
| 5 | src/nova/compute/manager.py | rebuild_instance | 35 |
| 6 | src/nova/scheduler/utils.py | resources_from_request_spec | 27 |
| 7 | src/nova/objects/instance.py | obj_make_compatible | 26 |
| 8 | src/nova/db/main/api.py | instance_get_all_by_filters_sort | 24 |
| 9 | src/nova/db/main/migrations/.../8f2f1571d55b | _create_shadow_tables | 24 |
| 10 | src/nova/conductor/manager.py | _do_live_migrate | 24 |

## Top 5 Complexity Hotspots — Test Code (batch 6)

| Rank | File | Function | CCN |
|---|---|---|---|
| 1 | src/nova/tests/fixtures/libvirt.py | XMLDesc | 41 |
| 2 | src/nova/tests/fixtures/libvirt.py | _parse_definition | 38 |
| 3 | src/nova/tests/functional/api_samples_test_base.py | _compare_result | 38 |
| 4 | src/nova/tests/unit/virt/vmwareapi/fake.py | __getattr__ | 33 |
| 5 | src/nova/tests/unit/virt/test_block_device.py | _test_volume_attach | 33 |

## Largest Test Files

| File | Lines |
|---|---|
| src/nova/tests/unit/virt/libvirt/test_driver.py | 33 880 |
| src/nova/tests/unit/compute/test_compute_mgr.py | 17 902 |
| src/nova/tests/unit/compute/test_compute.py | 14 744 |
| src/nova/tests/unit/network/test_neutron.py | 10 258 |
| src/nova/tests/unit/compute/test_api.py | 8 967 |
| src/nova/tests/unit/api/openstack/compute/test_servers.py | 8 704 |
| src/nova/tests/unit/db/main/test_api.py | 7 729 |

---

## Top Files by Finding Count (all batches)

| File | Findings | High | Medium |
|---|---|---|---|
| src/nova/compute/manager.py | 23 | 4 | 11 |
| src/nova/tests/fixtures/libvirt.py | 5 | 3 | 2 |
| src/nova/api/openstack/compute/views/servers.py | 12 | 2 | 6 |
| src/nova/db/main/api.py | 9 | 3 | 3 |
| src/nova/compute/api.py | 9 | 2 | 5 |
| src/nova/tests/unit/compute/test_api.py | 3 | 2 | 1 |
| src/nova/tests/unit/compute/test_compute.py | 2 | 2 | 0 |
| src/nova/scheduler/host_manager.py | 5 | 0 | 3 |
| src/nova/pci/stats.py | 5 | 1 | 2 |

---

## Notable Confirmed Bugs (all batches)

- **src/nova/image/glance.py L793**: `filter_.lstrip('property-')` strips individual characters from the set `{'p','r','o','e','t','y','-'}` rather than removing the prefix. For `"property-type"`, all characters are in the set, producing an empty string. Use `removeprefix('property-')`. *(ruff B005, confirmed)*
- **src/nova/storage/rbd_utils.py L389**: Duplicate `rbd.ImageHasSnapshots` in two consecutive except clauses — the second clause is unreachable, making the retry-counter decrement and warning log never fire for snapshot errors. *(ruff B025, confirmed)*
- **src/nova/privsep/fs.py L241**: `mkfs()` privsep entrypoint passes `label=None` hardcoded instead of forwarding `label=label` to `unprivileged_mkfs()`. Callers' volume labels are silently discarded. *(pylint unused-argument, confirmed)*
- **src/nova/scheduler/request_filter.py L377**: `aggregates` used in `if aggregates:` but only assigned inside `if network_id:` — `NameError` if no routed network is involved. *(pylint possibly-used-before-assignment, confirmed)*
- **src/nova/db/migration.py L31**: `_get_engine()` implicitly returns `None` for unknown `database=` values; callers expecting an engine get `AttributeError`. *(pylint inconsistent-return-statements, confirmed)*

---

## Languages Not Linted

No JavaScript, TypeScript, Go, C, C++, or Shell files were found in the analyzed batches. All files are Python.

## Tools Skipped or Failed

None. ruff, pylint, and lizard completed successfully for all 6 batches.

## Notes

- OVo (oslo.versionedobjects) patterns suppressed throughout nova.objects and nova.notifications.objects.
- SQLAlchemy lazy-load attribute-access probes (ruff B018 with NOTE comment) suppressed.
- `SIM102` (nested-if collapsing), `UP031` (printf→f-string), `I001` (import sort): suppressed as style noise.
- Test files: protected-access, missing-docstring, no-member, too-few/many-public-methods, TRY002, BLE001 in test helpers — all suppressed.
- 76 test files between 1000–3000 lines not individually reported (typical for comprehensive test suites).
- Policy files (nova/policies/*.py) had only missing-docstring noise — suppressed.
- Scheduler filter/weight plugin classes: interface contract patterns suppressed.

---

## Batch 7 — nova/virt, nova/volume, nova/wsgi (2026-10-21)

### Overview

| Metric | Value |
|---|---|
| Files analyzed | 96 |
| Files with findings | 37 |
| High | 11 |
| Medium | 74 |
| Low | ~20 |
| Info | ~8 |

### Batch 7 Hotspots — Production Complexity

| File | Function | CCN |
|---|---|---|
| src/nova/virt/libvirt/config.py | format_dom (LibvirtConfigGuestDisk) | 45 |
| src/nova/virt/hardware.py | numa_get_constraints | 42 |
| src/nova/virt/libvirt/config.py | parse_dom (LibvirtConfigGuestDisk) | 37 |
| src/nova/virt/libvirt/config.py | format_dom (LibvirtConfigGuestInterface) | 31 |
| src/nova/virt/hardware.py | _pack_instance_onto_cores | 29 |
| src/nova/virt/hardware.py | numa_fit_instance_to_host | 27 |
| src/nova/virt/libvirt/driver.py | _get_guest_storage_config | 25 |
| src/nova/virt/libvirt/driver.py | snapshot | 24 |
| src/nova/virt/vmwareapi/volumeops.py | _iscsi_get_target | 23 |
| src/nova/virt/libvirt/driver.py | _volume_snapshot_delete | 23 |

### Batch 7 Large Files

| File | Lines |
|---|---|
| src/nova/virt/libvirt/driver.py | 14,026 (high — largest production file) |
| src/nova/virt/libvirt/config.py | 4,271 |
| src/nova/virt/hardware.py | 3,275 |
| src/nova/virt/ironic/driver.py | 2,379 |
| src/nova/virt/libvirt/host.py | 2,340 |
| src/nova/virt/vmwareapi/vmops.py | 2,159 |
| src/nova/virt/driver.py | 2,117 |

### Updated Cumulative Totals (All 7 Batches)

| Metric | B1 | B2 | B3 | B4 | B5 | B6 | B7 | **Total** |
|---|---|---|---|---|---|---|---|---|
| Files analyzed | 2 | 53 | 311 | 10 | 156 | 856 | 96 | **1484** |
| Files with findings | 1 | 19 | 110 | 5 | 24 | 31 | 37 | **227** |
| High | 0 | 11 | 11 | 0 | 6 | 16 | 11 | **55** |
| Medium | 3 | 6 | 135 | 7 | 26 | 23 | 74 | **274** |

### Notable Batch 7 Findings

- **src/nova/virt/libvirt/driver.py L12747**: `except Exception: pass` silently swallows all errors during live-migration cleanup (`_remotefs.remove_dir`). Stale directories may persist with no warning.
- **src/nova/virt/libvirt/driver.py L10994**: `cpu_set` and `guest_cpu_numa` unpacked from `_get_guest_numa_config()` but never used — potential incomplete NUMA migration logic.
- **src/nova/virt/libvirt/imagebackend.py L301,305,614**: B026 — star-arg unpacking after keyword argument; will raise `SyntaxError` at runtime in affected call paths.
- **src/nova/virt/netutils.py L314**: `netmask` used before assignment if `version` is neither 4 nor 6 — probable NameError in edge cases.
- **src/nova/virt/libvirt/storage/lvm.py**: Privsep call `err` output silently discarded at 3 sites — partial privsep failures would go undetected.
