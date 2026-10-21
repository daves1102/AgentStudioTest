# src/nova/tests/unit/scheduler/test_rpcapi.py

## Overview

This file implements the `test_rpcapi` module, defining 1 class, 1 constant, 2 functions, 11 methods, 8 imports, 1 side effect, 1 security surface entry.

Lines: total 168, code 129, comment 14, blank 25

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_rpcapi.py:L30–L30` |
| `SchedulerRpcAPITestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_rpcapi.py:L33–L168` |
| `SchedulerRpcAPITestCase._test_scheduler_api` | method | (self, method, rpc_method, expected_args=None, **kwargs) | private | not declared | 6/33 | `src/nova/tests/unit/scheduler/test_rpcapi.py:L34–L80` |
| `SchedulerRpcAPITestCase._test_scheduler_api.fake_can_send_version` | function | (version=None) | public | `orig_prepare(version=version).can_send_version()` (src/nova/tests/unit/scheduler/test_rpcapi.py:L66) | — | `src/nova/tests/unit/scheduler/test_rpcapi.py:L65–L66` |
| `SchedulerRpcAPITestCase._test_scheduler_api.do_test` | function | (mock_csv, mock_prepare, mock_rpc_method) | public | not declared | — | `src/nova/tests/unit/scheduler/test_rpcapi.py:L74–L79` |
| `SchedulerRpcAPITestCase.test_select_destinations` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/test_rpcapi.py:L82–L89` |
| `SchedulerRpcAPITestCase.test_select_destinations_4_4` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/test_rpcapi.py:L91–L98` |
| `SchedulerRpcAPITestCase.test_select_destinations_4_3` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/test_rpcapi.py:L100–L106` |
| `SchedulerRpcAPITestCase.test_select_destinations_old_with_new_params` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/scheduler/test_rpcapi.py:L108–L121` |
| `SchedulerRpcAPITestCase.test_select_destinations_with_old_manager` | method | (self, to_spec, to_props) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/test_rpcapi.py:L125–L135` |
| `SchedulerRpcAPITestCase.test_update_aggregates` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/test_rpcapi.py:L137–L141` |
| `SchedulerRpcAPITestCase.test_delete_aggregate` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/test_rpcapi.py:L143–L147` |
| `SchedulerRpcAPITestCase.test_update_instance_info` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/test_rpcapi.py:L149–L154` |
| `SchedulerRpcAPITestCase.test_delete_instance_info` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/test_rpcapi.py:L156–L161` |
| `SchedulerRpcAPITestCase.test_sync_instance_info` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/test_rpcapi.py:L163–L168` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/scheduler/test_rpcapi.py:L19)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/scheduler/test_rpcapi.py:L21)
- `nova`: imports `conf` (src/nova/tests/unit/scheduler/test_rpcapi.py:L23)
- `nova`: imports `context` (src/nova/tests/unit/scheduler/test_rpcapi.py:L24)
- `nova`: imports `exception as exc` (src/nova/tests/unit/scheduler/test_rpcapi.py:L25)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/test_rpcapi.py:L26)
- `nova.scheduler`: imports `rpcapi as scheduler_rpcapi` (src/nova/tests/unit/scheduler/test_rpcapi.py:L27)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/test_rpcapi.py:L28)

## Side Effects

- **global-mutation**: CONF = conf.CONF (src/nova/tests/unit/scheduler/test_rpcapi.py:L30)

## Security Surface

- **sink** (`db-write`): prepare_kwargs.update({ (src/nova/tests/unit/scheduler/test_rpcapi.py:L53)

