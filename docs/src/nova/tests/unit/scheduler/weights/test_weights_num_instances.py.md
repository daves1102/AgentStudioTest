# src/nova/tests/unit/scheduler/weights/test_weights_num_instances.py

## Overview

This file implements the `test_weights_num_instances` module, defining 1 class, 6 methods, 4 imports.

Lines: total 71, code 49, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NumInstancesWeigherTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/weights/test_weights_num_instances.py:L22–L71` |
| `NumInstancesWeigherTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/weights/test_weights_num_instances.py:L23–L26` |
| `NumInstancesWeigherTestCase._get_weighed_host` | method | (self, hosts, weight_properties=None) | private | `self.weight_handler.get_weighed_objects(self.weighers, hosts, weight_properties)[0]` (src/nova/tests/unit/scheduler/weights/test_weights_num_instances.py:L31) | 2/5 | `src/nova/tests/unit/scheduler/weights/test_weights_num_instances.py:L28–L32` |
| `NumInstancesWeigherTestCase._get_all_hosts` | method | (self) | private | `[fakes.FakeHostState(host, node, values) for host, node, values in host_values]` (src/nova/tests/unit/scheduler/weights/test_weights_num_instances.py:L41) | 2/9 | `src/nova/tests/unit/scheduler/weights/test_weights_num_instances.py:L34–L42` |
| `NumInstancesWeigherTestCase.test_multiplier_default` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/weights/test_weights_num_instances.py:L44–L49` |
| `NumInstancesWeigherTestCase.test_multiplier_positive` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/weights/test_weights_num_instances.py:L51–L60` |
| `NumInstancesWeigherTestCase.test_multiplier_negative` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/weights/test_weights_num_instances.py:L62–L71` |

## Dependencies

- `nova.scheduler`: imports `weights` (src/nova/tests/unit/scheduler/weights/test_weights_num_instances.py:L16)
- `nova.scheduler.weights`: imports `num_instances` (src/nova/tests/unit/scheduler/weights/test_weights_num_instances.py:L17)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/weights/test_weights_num_instances.py:L18)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/weights/test_weights_num_instances.py:L19)

