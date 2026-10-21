# src/nova/tests/unit/scheduler/weights/test_weights_ioopsweight.py

## Overview

This file implements the `test_weights_ioopsweight` module, defining 1 class, 9 methods, 5 imports.

Lines: total 126, code 95, comment 16, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `IoOpsWeigherTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/weights/test_weights_ioopsweight.py:L23–L126` |
| `IoOpsWeigherTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/weights/test_weights_ioopsweight.py:L25–L29` |
| `IoOpsWeigherTestCase._get_weighed_host` | method | (self, hosts, io_ops_weight_multiplier) | private | `self.weight_handler.get_weighed_objects(self.weighers, hosts, {})[0]` (src/nova/tests/unit/scheduler/weights/test_weights_ioopsweight.py:L35) | 2/6 | `src/nova/tests/unit/scheduler/weights/test_weights_ioopsweight.py:L31–L36` |
| `IoOpsWeigherTestCase._get_all_hosts` | method | (self) | private | `[fakes.FakeHostState(host, node, values) for host, node, values in host_values]` (src/nova/tests/unit/scheduler/weights/test_weights_ioopsweight.py:L45) | 2/9 | `src/nova/tests/unit/scheduler/weights/test_weights_ioopsweight.py:L38–L46` |
| `IoOpsWeigherTestCase._do_test` | method | (self, io_ops_weight_multiplier, expected_weight, expected_host) | private | not declared | 2/8 | `src/nova/tests/unit/scheduler/weights/test_weights_ioopsweight.py:L48–L55` |
| `IoOpsWeigherTestCase.test_io_ops_weight_multiplier_by_default` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/weights/test_weights_ioopsweight.py:L57–L60` |
| `IoOpsWeigherTestCase.test_io_ops_weight_multiplier_zero_value` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/weights/test_weights_ioopsweight.py:L62–L66` |
| `IoOpsWeigherTestCase.test_io_ops_weight_multiplier_positive_value` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/weights/test_weights_ioopsweight.py:L68–L71` |
| `IoOpsWeigherTestCase.test_io_ops_weight_multiplier` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/scheduler/weights/test_weights_ioopsweight.py:L73–L106` |
| `IoOpsWeigherTestCase.test_host_with_agg` | method | (self) | public | not declared | 2/18 | `src/nova/tests/unit/scheduler/weights/test_weights_ioopsweight.py:L108–L126` |

## Dependencies

- `nova`: imports `objects` (src/nova/tests/unit/scheduler/weights/test_weights_ioopsweight.py:L16)
- `nova.scheduler`: imports `weights` (src/nova/tests/unit/scheduler/weights/test_weights_ioopsweight.py:L17)
- `nova.scheduler.weights`: imports `io_ops` (src/nova/tests/unit/scheduler/weights/test_weights_ioopsweight.py:L18)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/weights/test_weights_ioopsweight.py:L19)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/weights/test_weights_ioopsweight.py:L20)

