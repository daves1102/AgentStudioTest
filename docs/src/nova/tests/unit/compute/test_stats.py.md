# src/nova/tests/unit/compute/test_stats.py

## Overview

This file implements the `test_stats` module, defining 1 class, 1 function, 19 methods, 6 imports, 1 security surface entry.

Lines: total 272, code 210, comment 14, blank 48

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `StatsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_stats.py:L26–L272` |
| `StatsTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_stats.py:L27–L29` |
| `StatsTestCase._fake_object` | method | (self, updates) | private | `fake_instance.fake_instance_obj(None, **updates)` (src/nova/tests/unit/compute/test_stats.py:L32) | 1/2 | `src/nova/tests/unit/compute/test_stats.py:L31–L32` |
| `StatsTestCase._create_instance` | method | (self, values=None) | private | `self._fake_object(instance)` (src/nova/tests/unit/compute/test_stats.py:L45) | 2/12 | `src/nova/tests/unit/compute/test_stats.py:L34–L45` |
| `StatsTestCase.test_os_type_count` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_stats.py:L47–L55` |
| `StatsTestCase.test_update_project_count` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_stats.py:L57–L67` |
| `StatsTestCase.test_update_project_count._get` | function | — | private | `self.stats.num_instances_for_project(proj_id)` (src/nova/tests/unit/compute/test_stats.py:L61) | — | `src/nova/tests/unit/compute/test_stats.py:L60–L61` |
| `StatsTestCase.test_instance_count` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/compute/test_stats.py:L69–L74` |
| `StatsTestCase.test_add_stats_for_instance` | method | (self) | public | not declared | 1/56 | `src/nova/tests/unit/compute/test_stats.py:L76–L142` |
| `StatsTestCase.test_calculate_workload` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_stats.py:L144–L148` |
| `StatsTestCase.test_update_stats_for_instance_no_change` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_stats.py:L150–L159` |
| `StatsTestCase.test_update_stats_for_instance_vm_change` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_stats.py:L161–L171` |
| `StatsTestCase.test_update_stats_for_instance_task_change` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_stats.py:L173–L183` |
| `StatsTestCase.test_update_stats_for_instance_deleted` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_stats.py:L185–L196` |
| `StatsTestCase.test_update_stats_for_instance_offloaded` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_stats.py:L198–L209` |
| `StatsTestCase.test_update_stats_for_instance_being_unshelved` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_stats.py:L211–L225` |
| `StatsTestCase.test_io_workload` | method | (self) | public | not declared | 3/11 | `src/nova/tests/unit/compute/test_stats.py:L227–L239` |
| `StatsTestCase.test_io_workload_saved_to_stats` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_stats.py:L241–L245` |
| `StatsTestCase.test_clear` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_stats.py:L247–L256` |
| `StatsTestCase.test_build_failed_succeded` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_stats.py:L258–L267` |
| `StatsTestCase.test_build_succeeded_first` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_stats.py:L269–L272` |

## Dependencies

- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/compute/test_stats.py:L17)
- `nova.compute`: imports `stats` (src/nova/tests/unit/compute/test_stats.py:L19)
- `nova.compute`: imports `task_states` (src/nova/tests/unit/compute/test_stats.py:L20)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/compute/test_stats.py:L21)
- `nova`: imports `test` (src/nova/tests/unit/compute/test_stats.py:L22)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/compute/test_stats.py:L23)

## Security Surface

- **sink** (`db-write`): instance.update(values) (src/nova/tests/unit/compute/test_stats.py:L44)

