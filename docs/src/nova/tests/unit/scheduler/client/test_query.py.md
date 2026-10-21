# src/nova/tests/unit/scheduler/client/test_query.py

## Overview

This file implements the `test_query` module, defining 1 class, 6 methods, 6 imports, 5 side effects.

Lines: total 76, code 53, comment 11, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SchedulerQueryClientTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/client/test_query.py:L23–L76` |
| `SchedulerQueryClientTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/client/test_query.py:L25–L29` |
| `SchedulerQueryClientTestCase.test_constructor` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/scheduler/client/test_query.py:L31–L32` |
| `SchedulerQueryClientTestCase.test_select_destinations` | method | (self, mock_select_destinations) | public | not declared | 1/12 | `src/nova/tests/unit/scheduler/client/test_query.py:L35–L46` |
| `SchedulerQueryClientTestCase.test_select_destinations_old_call` | method | (self, mock_select_destinations) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/client/test_query.py:L49–L58` |
| `SchedulerQueryClientTestCase.test_update_aggregates` | method | (self, mock_update_aggs) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/client/test_query.py:L61–L67` |
| `SchedulerQueryClientTestCase.test_delete_aggregate` | method | (self, mock_delete_agg) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/client/test_query.py:L70–L76` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/scheduler/client/test_query.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/scheduler/client/test_query.py:L15)
- `nova`: imports `context` (src/nova/tests/unit/scheduler/client/test_query.py:L17)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/client/test_query.py:L18)
- `nova.scheduler.client`: imports `query` (src/nova/tests/unit/scheduler/client/test_query.py:L19)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/client/test_query.py:L20)

## Side Effects

- **network**: self.assertIsNotNone(self.client.scheduler_rpcapi) (src/nova/tests/unit/scheduler/client/test_query.py:L32)
- **network**: self.client.select_destinations( (src/nova/tests/unit/scheduler/client/test_query.py:L38)
- **network**: self.client.select_destinations( (src/nova/tests/unit/scheduler/client/test_query.py:L52)
- **network**: self.client.update_aggregates( (src/nova/tests/unit/scheduler/client/test_query.py:L63)
- **network**: self.client.delete_aggregate( (src/nova/tests/unit/scheduler/client/test_query.py:L72)

