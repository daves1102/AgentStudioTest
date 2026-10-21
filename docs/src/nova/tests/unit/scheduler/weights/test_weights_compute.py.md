# src/nova/tests/unit/scheduler/weights/test_weights_compute.py

## Overview

This file implements the `test_weights_compute` module, defining 1 class, 7 methods, 5 imports.

Lines: total 116, code 88, comment 16, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BuildFailureWeigherTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/weights/test_weights_compute.py:L24–L116` |
| `BuildFailureWeigherTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/weights/test_weights_compute.py:L25–L29` |
| `BuildFailureWeigherTestCase._get_weighed_host` | method | (self, hosts) | private | `self.weight_handler.get_weighed_objects(self.weighers, hosts, {})` (src/nova/tests/unit/scheduler/weights/test_weights_compute.py:L32) | 1/3 | `src/nova/tests/unit/scheduler/weights/test_weights_compute.py:L31–L33` |
| `BuildFailureWeigherTestCase._get_all_hosts` | method | (self) | private | `[fakes.FakeHostState(host, node, values) for host, node, values in host_values]` (src/nova/tests/unit/scheduler/weights/test_weights_compute.py:L42) | 2/9 | `src/nova/tests/unit/scheduler/weights/test_weights_compute.py:L35–L43` |
| `BuildFailureWeigherTestCase.test_build_failure_weigher_disabled` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/scheduler/weights/test_weights_compute.py:L45–L51` |
| `BuildFailureWeigherTestCase.test_build_failure_weigher_scaled` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/scheduler/weights/test_weights_compute.py:L53–L59` |
| `BuildFailureWeigherTestCase.test_build_failure_weight_multiplier` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/scheduler/weights/test_weights_compute.py:L61–L97` |
| `BuildFailureWeigherTestCase.test_host_with_agg` | method | (self) | public | not declared | 3/17 | `src/nova/tests/unit/scheduler/weights/test_weights_compute.py:L99–L116` |

## Dependencies

- `nova`: imports `objects` (src/nova/tests/unit/scheduler/weights/test_weights_compute.py:L17)
- `nova.scheduler`: imports `weights` (src/nova/tests/unit/scheduler/weights/test_weights_compute.py:L18)
- `nova.scheduler.weights`: imports `compute` (src/nova/tests/unit/scheduler/weights/test_weights_compute.py:L19)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/weights/test_weights_compute.py:L20)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/weights/test_weights_compute.py:L21)

