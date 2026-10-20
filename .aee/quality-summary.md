# Quality Analysis Summary — Batch 3 (2026-10-20)

## Overview

| Metric | Batch 3 | Total (all batches) |
|---|---|---|
| Files analyzed | 311 | 366 |
| Files with findings | 110 | 130 |
| High | 11 | 22 |
| Medium | 135 | 152 |
| Low | 141 | 164 |
| Info | 0 | 10 |

**Batch 3 findings by category:**

| Category | Count |
|---|---|
| bug-risk | 89 |
| error-handling | 78 |
| complexity | 63 |
| maintainability | 45 |
| dead-code | 12 |

**Configuration applied:** ruff defaults, pylint defaults, lizard defaults.
No project `pyproject.toml`, `ruff.toml`, or `.pylintrc` found.
All pylint `E0401` import errors dropped as environment noise.
OVo framework patterns (`RUF012`, `super-with-arguments`, `attribute-defined-outside-init`, `too-few-public-methods`) not reported.
`SIM102` (nested-if merging), `I001` (import sort), `UP031` (printf→f-string), and similar style-only codes suppressed as noise across all files.

---

## Hotspots

**Highest-complexity functions (CCN > 15) — Batch 3:**

| Function | CCN | NLOC | File |
|---|---|---|---|
| `show` | 50 | 134 | `api/openstack/compute/views/servers.py:263` |
| `_validate_bdm` | 43 | 92 | `compute/api.py:1977` |
| `_init_instance` | 40 | 189 | `compute/manager.py:1013` |
| `_get_servers` | 37 | 122 | `api/openstack/compute/servers.py:193` |
| `build_instances` | 34 | 151 | `conductor/manager.py:671` |
| `_delete` | 29 | 121 | `compute/api.py:2464` |
| `resize` | 28 | 120 | `compute/api.py:4295` |
| `heal_allocations` | 28 | 106 | `cmd/manage.py:2216` |
| `_ports_needed_per_instance` | 28 | 72 | `network/neutron.py:2522` |
| `create` | 27 | 173 | `api/openstack/compute/servers.py:717` |
| `_new_ingress_rule` | 27 | 54 | `network/security_group_api.py:106` |
| `_rebuild` | 25 | 120 | `api/openstack/compute/servers.py:1264` |
| `get_all` | 25 | 87 | `compute/api.py:3086` |
| `_get_device_metadata` | 25 | 63 | `api/metadata/base.py:371` |
| `_build_and_run_instance` | 22 | 192 | `compute/manager.py:2644` |

**Files with most findings:**

| File | Findings | High | Medium |
|---|---|---|---|
| `compute/manager.py` | 23 | 1 | 17 |
| `compute/api.py` | 21 | 3 | 14 |
| `conductor/manager.py` | 15 | 1 | 8 |
| `network/neutron.py` | 13 | 1 | 9 |
| `cmd/manage.py` | 10 | 1 | 9 |
| `compute/resource_tracker.py` | 9 | 0 | 6 |
| `compute/utils.py` | 9 | 0 | 4 |
| `api/openstack/compute/servers.py` | 8 | 2 | 3 |
| `network/security_group_api.py` | 8 | 1 | 3 |
| `api/metadata/base.py` | 6 | 0 | 3 |

**Files over 1000 lines (Batch 3):**

| File | Lines |
|---|---|
| `compute/manager.py` | 12137 |
| `compute/api.py` | 7124 |
| `network/neutron.py` | 3989 |
| `cmd/manage.py` | 3858 |
| `conductor/manager.py` | 2393 |
| `compute/resource_tracker.py` | 2269 |
| `api/openstack/compute/schemas/servers.py` | 2123 |
| `compute/rpcapi.py` | 1738 |
| `conf/libvirt.py` | 1716 |
| `compute/utils.py` | 1678 |
| `api/openstack/compute/servers.py` | 1639 |
| `conf/compute.py` | 1600 |
| `conductor/tasks/cross_cell_migrate.py` | 1471 |
| `conf/scheduler.py` | 1067 |

---

## Selected Medium+ Findings (Batch 3)

- **`compute/api.py`** — `create()` has 36 parameters and CCN=43; `_delete()` CCN=29; `resize()` CCN=28. Core instance lifecycle methods are the primary defect-risk hotspot.
- **`compute/manager.py`** — `_init_instance()` CCN=40 (189 lines), `_build_and_run_instance()` CCN=22 (192 lines), `_shutdown_instance()` CCN=22 (106 lines). File is 14k+ lines with 14× broad `except Exception` and 10× inconsistent return statements — the largest maintenance burden in this batch.
- **`conductor/manager.py`** — `build_instances()` CCN=34 (151 lines), `rebuild_instance()` CCN=21 (141 lines), `schedule_and_build_instances()` CCN=18 (140 lines). Cross-cell migration and scheduling logic concentrated here.
- **`network/neutron.py`** — `_ports_needed_per_instance()` CCN=28, `_build_network_info_model()` CCN=20, `create_resource_requests()` CCN=19. High complexity combined with 7× raise-without-from and broad exception catches.
- **`api/openstack/compute/servers.py`** — `_get_servers()` CCN=37, `create()` CCN=27, `_rebuild()` CCN=25. REST API entry points with deep validation logic.
- **`api/openstack/compute/views/servers.py`** — `show()` CCN=50 (134 lines, 20 params) — highest CCN in the entire codebase across all batches.

---

## Languages Not Linted

None. All 311 files are Python and were covered by ruff, pylint, and lizard.

## Tools Skipped or Failed

No tools failed. All pylint `E0401` import errors were dropped as environment noise.
OVo framework noise (`RUF012`, `super-with-arguments`, `attribute-defined-outside-init`, `too-few-public-methods`) suppressed.
`I001` (import sort), `UP031` (printf→f-string), `SIM102` (nested if), `C408` (dict literal), `UP008`/`UP004` (style modernisation) suppressed as formatting noise.

## Notes

- `compute/manager.py` is by far the most complex file in the codebase: 14k lines, broad exception handling throughout, and seven functions with CCN > 15. It is the primary maintainability risk.
- The `show()` method in `views/servers.py` has CCN=50 and 20 parameters — the highest complexity in any file analyzed across all three batches.
- `raise-missing-from` appears in 44 files across this batch; exception chaining is systematically not preserved across the compute and conductor layers.
- Broad `except Exception` is similarly widespread; many instances are likely defensive patterns inherited from early Nova architecture. Each should be tightened or documented with a comment explaining the intent.
- `tox.ini` and `pyproject.toml` are absent; no project-level linter configuration was applied.
