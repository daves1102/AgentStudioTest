# src/nova/tests/unit/scheduler/weights/test_cross_cell.py

## Overview

This file implements the `test_cross_cell` module, defining 1 class, 1 constant, 8 methods, 1 staticmethod, 7 imports, 1 side effect.

Lines: total 142, code 104, comment 25, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/scheduler/weights/test_cross_cell.py:L23–L23` |
| `CrossCellWeigherTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/weights/test_cross_cell.py:L26–L142` |
| `CrossCellWeigherTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/weights/test_cross_cell.py:L29–L32` |
| `CrossCellWeigherTestCase._get_weighed_hosts` | method | (self, request_spec) | private | `self.weight_handler.get_weighed_objects( self.weighers, hosts, request_spec)` (src/nova/tests/unit/scheduler/weights/test_cross_cell.py:L36) | 1/4 | `src/nova/tests/unit/scheduler/weights/test_cross_cell.py:L34–L37` |
| `CrossCellWeigherTestCase._get_all_hosts` | method | — | private | `[fakes.FakeHostState(host, node, values) for host, node, values in host_values]` (src/nova/tests/unit/scheduler/weights/test_cross_cell.py:L46) | 2/7 | `src/nova/tests/unit/scheduler/weights/test_cross_cell.py:L40–L47` |
| `CrossCellWeigherTestCase.test_get_weighed_hosts_no_requested_destination_or_cell` | method | (self) | public | not declared | 5/17 | `src/nova/tests/unit/scheduler/weights/test_cross_cell.py:L49–L74` |
| `CrossCellWeigherTestCase.test_get_weighed_hosts_allow_cross_cell_move_false` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/scheduler/weights/test_cross_cell.py:L76–L86` |
| `CrossCellWeigherTestCase.test_get_weighed_hosts_allow_cross_cell_move_true_positive` | method | (self) | public | not declared | 2/11 | `src/nova/tests/unit/scheduler/weights/test_cross_cell.py:L88–L103` |
| `CrossCellWeigherTestCase.test_get_weighed_hosts_allow_cross_cell_move_true_negative` | method | (self) | public | not declared | 2/13 | `src/nova/tests/unit/scheduler/weights/test_cross_cell.py:L105–L123` |
| `CrossCellWeigherTestCase.test_multiplier` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/scheduler/weights/test_cross_cell.py:L125–L142` |
| `CrossCellWeigherTestCase._get_all_hosts` | staticmethod | — | private | not declared | — | `src/nova/tests/unit/scheduler/weights/test_cross_cell.py:L39–L47` |

## Dependencies

- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/scheduler/weights/test_cross_cell.py:L14)
- `nova`: imports `conf` (src/nova/tests/unit/scheduler/weights/test_cross_cell.py:L16)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/weights/test_cross_cell.py:L17)
- `nova.scheduler`: imports `weights` (src/nova/tests/unit/scheduler/weights/test_cross_cell.py:L18)
- `nova.scheduler.weights`: imports `cross_cell` (src/nova/tests/unit/scheduler/weights/test_cross_cell.py:L19)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/weights/test_cross_cell.py:L20)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/weights/test_cross_cell.py:L21)

## Side Effects

- **global-mutation**: CONF = conf.CONF (src/nova/tests/unit/scheduler/weights/test_cross_cell.py:L23)

