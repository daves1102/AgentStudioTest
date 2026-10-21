# src/nova/tests/unit/conductor/tasks/test_migrate.py

## Overview

This file implements the `test_migrate` module, defining 2 classs, 2 functions, 18 methods, 15 imports.

Lines: total 442, code 365, comment 29, blank 48

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `MigrationTaskTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/conductor/tasks/test_migrate.py:L32–L394` |
| `MigrationTaskTestCase.setUp` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/conductor/tasks/test_migrate.py:L33–L69` |
| `MigrationTaskTestCase._generate_task` | method | (self) | private | `migrate.MigrationTask(self.context, self.instance, self.flavor, self.request_spec, self.clean_shutdown, compute_rpcapi.ComputeAPI(), query.SchedulerQueryClient(), report.SchedulerReportClient(), host_` (src/nova/tests/unit/conductor/tasks/test_migrate.py:L72) | 1/9 | `src/nova/tests/unit/conductor/tasks/test_migrate.py:L71–L79` |
| `MigrationTaskTestCase._test_execute` | method | (self, cross_cell_exec_mock, prep_resize_mock, sel_dest_mock, sig_mock, az_mock, gmv_mock, cm_mock, sm_mock, cn_mock, rc_mock, gbf_mock, requested_destination=False, same_cell=True) | private | not declared | 5/78 | `src/nova/tests/unit/conductor/tasks/test_migrate.py:L93–L189` |
| `MigrationTaskTestCase._test_execute.set_migration_uuid` | function | (*a, **k) | public | `mock.MagicMock()` (src/nova/tests/unit/conductor/tasks/test_migrate.py:L121) | — | `src/nova/tests/unit/conductor/tasks/test_migrate.py:L119–L121` |
| `MigrationTaskTestCase.test_execute` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/conductor/tasks/test_migrate.py:L191–L192` |
| `MigrationTaskTestCase.test_execute_with_destination` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/conductor/tasks/test_migrate.py:L194–L195` |
| `MigrationTaskTestCase.test_execute_resize` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/conductor/tasks/test_migrate.py:L197–L200` |
| `MigrationTaskTestCase.test_execute_same_cell_false` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/conductor/tasks/test_migrate.py:L202–L207` |
| `MigrationTaskTestCase.test_execute_rollback` | method | (self, prep_resize_mock, sel_dest_mock, sig_mock, az_mock, gmv_mock, cm_mock, sm_mock, cn_mock, rc_mock, mock_ra, mock_gbf) | public | not declared | 1/24 | `src/nova/tests/unit/conductor/tasks/test_migrate.py:L220–L253` |
| `MigrationTaskTestCase.test_execute_rollback.set_migration_uuid` | function | (*a, **k) | public | `mock.MagicMock()` (src/nova/tests/unit/conductor/tasks/test_migrate.py:L236) | — | `src/nova/tests/unit/conductor/tasks/test_migrate.py:L234–L236` |
| `MigrationTaskTestCase.test_execute_reschedule` | method | (self, mock_elevated, mock_claim) | public | not declared | 1/26 | `src/nova/tests/unit/conductor/tasks/test_migrate.py:L257–L285` |
| `MigrationTaskTestCase.test_execute_reschedule_claim_fails_no_more_alternate` | method | (self, mock_elevated, mock_claim, mock_fill_provider_mapping) | public | not declared | 1/27 | `src/nova/tests/unit/conductor/tasks/test_migrate.py:L290–L319` |
| `MigrationTaskTestCase.test_set_requested_destination_cell_allow_cross_cell_resize_true` | method | (self, mock_debug, mock_get_im) | public | not declared | 1/13 | `src/nova/tests/unit/conductor/tasks/test_migrate.py:L325–L340` |
| `MigrationTaskTestCase.test_set_requested_destination_cell_allow_cross_cell_resize_true_host` | method | (self, mock_debug, mock_get_im) | public | not declared | 1/11 | `src/nova/tests/unit/conductor/tasks/test_migrate.py:L346–L359` |
| `MigrationTaskTestCase.test_set_requested_destination_cell_allow_cross_cell_resize_false` | method | (self, mock_debug, mock_get_im) | public | not declared | 1/8 | `src/nova/tests/unit/conductor/tasks/test_migrate.py:L365–L378` |
| `MigrationTaskTestCase.test_is_selected_host_in_source_cell_true` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/conductor/tasks/test_migrate.py:L380–L386` |
| `MigrationTaskTestCase.test_is_selected_host_in_source_cell_false` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/conductor/tasks/test_migrate.py:L388–L394` |
| `MigrationTaskAllocationUtils` | class | — | exported | not declared | — | `src/nova/tests/unit/conductor/tasks/test_migrate.py:L397–L442` |
| `MigrationTaskAllocationUtils.test_replace_allocation_with_migration_no_host` | method | (self, mock_cn) | public | not declared | 1/10 | `src/nova/tests/unit/conductor/tasks/test_migrate.py:L399–L409` |
| `MigrationTaskAllocationUtils.test_replace_allocation_with_migration_no_allocs` | method | (self, mock_cn, mock_ga) | public | not declared | 1/9 | `src/nova/tests/unit/conductor/tasks/test_migrate.py:L414–L423` |
| `MigrationTaskAllocationUtils.test_replace_allocation_with_migration_allocs_fail` | method | (self, mock_cn, mock_ga, mock_pa) | public | not declared | 1/12 | `src/nova/tests/unit/conductor/tasks/test_migrate.py:L430–L442` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/conductor/tasks/test_migrate.py:L13)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/conductor/tasks/test_migrate.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/conductor/tasks/test_migrate.py:L16)
- `nova.compute`: imports `rpcapi as compute_rpcapi` (src/nova/tests/unit/conductor/tasks/test_migrate.py:L18)
- `nova.conductor.tasks`: imports `migrate` (src/nova/tests/unit/conductor/tasks/test_migrate.py:L19)
- `nova`: imports `context` (src/nova/tests/unit/conductor/tasks/test_migrate.py:L20)
- `nova`: imports `exception` (src/nova/tests/unit/conductor/tasks/test_migrate.py:L21)
- `nova`: imports `objects` (src/nova/tests/unit/conductor/tasks/test_migrate.py:L22)
- `nova.scheduler.client`: imports `query` (src/nova/tests/unit/conductor/tasks/test_migrate.py:L23)
- `nova.scheduler.client`: imports `report` (src/nova/tests/unit/conductor/tasks/test_migrate.py:L24)
- `nova.scheduler`: imports `utils as scheduler_utils` (src/nova/tests/unit/conductor/tasks/test_migrate.py:L25)
- `nova`: imports `test` (src/nova/tests/unit/conductor/tasks/test_migrate.py:L26)
- `nova.tests.unit.conductor.test_conductor`: imports `FakeContext` (src/nova/tests/unit/conductor/tasks/test_migrate.py:L27)
- `nova.tests.unit`: imports `fake_flavor` (src/nova/tests/unit/conductor/tasks/test_migrate.py:L28)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/conductor/tasks/test_migrate.py:L29)

