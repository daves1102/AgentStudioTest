# Quality Analysis Summary — All Batches (2026-10-20)

## Overview

| Metric | B1 | B2 | B3 | B4 | B5 | **Total** |
|---|---|---|---|---|---|---|
| Files analyzed | 2 | 53 | 311 | 10 | 156 | **532** |
| Files with findings | 1 | 19 | 110 | 5 | 24 | **159** |
| High | 0 | 11 | 11 | 0 | 6 | **28** |
| Medium | 3 | 6 | 135 | 7 | 26 | **177** |
| Low | 4 | 10 | 141 | 8 | 25 | **188** |

**All-batches findings by category:**

| Category | Count |
|---|---|
| complexity | ~110 |
| bug-risk | ~115 |
| error-handling | ~90 |
| maintainability | ~65 |
| readability | ~10 |
| dead-code | ~12 |
| shell-hygiene | 0 |
| container-hygiene | 0 |

**Scope note:** Batches 1–5 cover nova/accelerator, nova/api, nova/cmd, nova/compute, nova/conductor, nova/conf, nova/console, nova/db, nova/hacking, nova/image, nova/keymgr, nova/limit, nova/network, nova/notifications, nova/objects, nova/pci, nova/policies, nova/privsep, nova/scheduler.

---

## Top 10 Complexity Hotspots (all batches)

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

---

## Top Files by Finding Count (all batches)

| File | Findings | High | Medium |
|---|---|---|---|
| src/nova/compute/manager.py | 23 | 4 | 11 |
| src/nova/api/openstack/compute/views/servers.py | 12 | 2 | 6 |
| src/nova/db/main/api.py | 9 | 3 | 3 |
| src/nova/compute/api.py | 9 | 2 | 5 |
| src/nova/conductor/manager.py | 9 | 2 | 4 |
| src/nova/image/glance.py | 8 | 0 | 3 |
| src/nova/scheduler/host_manager.py | 5 | 0 | 3 |
| src/nova/pci/stats.py | 5 | 1 | 2 |
| src/nova/scheduler/utils.py | 4 | 1 | 2 |
| src/nova/scheduler/client/report.py | 4 | 0 | 2 |

---

## Notable Confirmed Bugs

- **src/nova/image/glance.py L793**: `filter_.lstrip('property-')` strips individual characters from the set `{'p','r','o','e','t','y','-'}` rather than the prefix `"property-"`. For a filter key like `"property-type"`, all characters are in the strip set, producing an empty string. Use `removeprefix('property-')` instead. *(ruff B005, confirmed)*
- **src/nova/privsep/fs.py L241–243**: `mkfs()` privsep entrypoint passes `label=None` hardcoded instead of forwarding the `label` parameter to `unprivileged_mkfs()`. Any caller providing a volume label will have it silently discarded. *(pylint unused-argument, confirmed)*
- **src/nova/scheduler/request_filter.py L377**: `aggregates` variable is used in an `if aggregates:` check but is only assigned inside an `if network_id:` block. If no routed network is requested, the reference raises `NameError`. *(pylint possibly-used-before-assignment, confirmed)*
- **src/nova/db/migration.py L31**: `_get_engine()` returns `None` implicitly for any `database` value other than `'main'` or `'api'`. Callers expecting an engine object will receive `None` and raise `AttributeError`. *(pylint inconsistent-return-statements, confirmed)*

---

## Languages Not Linted

No JavaScript, TypeScript, Go, C, or C++ files were found in the analyzed batches. All batches were Python-only.

## Tools Skipped or Failed

None. ruff, pylint, and lizard all ran successfully for all batches.

## Notes

- OVo (oslo.versionedobjects) framework patterns — `RUF012`, `super-with-arguments`, `attribute-defined-outside-init`, `too-few-public-methods` — are intentional and suppressed throughout nova.objects and nova.notifications.objects.
- SQLAlchemy lazy-load attribute-access probes wrapped in try/except (ruff B018) are intentional and suppressed where a NOTE comment is present.
- `SIM102` (nested-if collapsing) suppressed as style churn across all files.
- pylint `E0401` import errors dropped as environment noise across all batches.
- Scheduler filter/weight plugin classes: `too-few-public-methods` and `unused-argument` for callback parameters are interface contracts — suppressed.
- Policy definition files (nova/policies/*.py): only missing-docstring (info level) — suppressed as convention noise.
