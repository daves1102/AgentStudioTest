# src/nova/tests/unit/scheduler/weights/test_weights_cpu.py

## Overview

This file implements the `test_weights_cpu` module, defining 1 class, 10 methods, 5 imports.

Lines: total 190, code 113, comment 50, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CPUWeigherTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/weights/test_weights_cpu.py:L26–L190` |
| `CPUWeigherTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/weights/test_weights_cpu.py:L27–L31` |
| `CPUWeigherTestCase._get_weighed_host` | method | (self, hosts, weight_properties=None) | private | `self.weight_handler.get_weighed_objects(self.weighers, hosts, weight_properties)[0]` (src/nova/tests/unit/scheduler/weights/test_weights_cpu.py:L36) | 2/5 | `src/nova/tests/unit/scheduler/weights/test_weights_cpu.py:L33–L37` |
| `CPUWeigherTestCase._get_all_hosts` | method | (self) | private | `[fakes.FakeHostState(host, node, values) for host, node, values in host_values]` (src/nova/tests/unit/scheduler/weights/test_weights_cpu.py:L50) | 2/13 | `src/nova/tests/unit/scheduler/weights/test_weights_cpu.py:L39–L51` |
| `CPUWeigherTestCase.test_multiplier_default` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/weights/test_weights_cpu.py:L53–L64` |
| `CPUWeigherTestCase.test_multiplier_none` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/weights/test_weights_cpu.py:L66–L77` |
| `CPUWeigherTestCase.test_multiplier_positive` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/weights/test_weights_cpu.py:L79–L91` |
| `CPUWeigherTestCase.test_multiplier_negative` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/weights/test_weights_cpu.py:L93–L104` |
| `CPUWeigherTestCase.test_negative_host` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/scheduler/weights/test_weights_cpu.py:L106–L131` |
| `CPUWeigherTestCase.test_cpu_weigher_multiplier` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/scheduler/weights/test_weights_cpu.py:L133–L166` |
| `CPUWeigherTestCase.test_host_with_agg` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/scheduler/weights/test_weights_cpu.py:L168–L190` |

## Dependencies

- `nova`: imports `objects` (src/nova/tests/unit/scheduler/weights/test_weights_cpu.py:L19)
- `nova.scheduler`: imports `weights` (src/nova/tests/unit/scheduler/weights/test_weights_cpu.py:L20)
- `nova.scheduler.weights`: imports `cpu` (src/nova/tests/unit/scheduler/weights/test_weights_cpu.py:L21)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/weights/test_weights_cpu.py:L22)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/weights/test_weights_cpu.py:L23)

