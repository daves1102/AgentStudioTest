# src/nova/tests/unit/scheduler/weights/test_weights_affinity.py

## Overview

This file implements the `test_weights_affinity` module, defining 3 classs, 17 methods, 6 imports.

Lines: total 258, code 202, comment 24, blank 32

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SoftWeigherTestBase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L25–L79` |
| `SoftWeigherTestBase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L27–L30` |
| `SoftWeigherTestBase._get_weighed_host` | method | (self, hosts, policy, group='default') | private | `self.weight_handler.get_weighed_objects(self.weighers, hosts, request_spec)[0]` (src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L42) | 2/13 | `src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L32–L44` |
| `SoftWeigherTestBase._get_all_hosts` | method | (self) | private | `[fakes.FakeHostState(host, node, values) for host, node, values in host_values]` (src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L69) | 2/25 | `src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L46–L70` |
| `SoftWeigherTestBase._do_test` | method | (self, policy, expected_weight, expected_host, group='default') | private | not declared | 2/8 | `src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L72–L79` |
| `SoftAffinityWeigherTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L82–L176` |
| `SoftAffinityWeigherTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L84–L87` |
| `SoftAffinityWeigherTestCase.test_soft_affinity_weight_multiplier_by_default` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L89–L92` |
| `SoftAffinityWeigherTestCase.test_soft_affinity_weight_multiplier_zero_value` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L94–L100` |
| `SoftAffinityWeigherTestCase.test_soft_affinity_weight_multiplier_positive_value` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L102–L107` |
| `SoftAffinityWeigherTestCase.test_soft_affinity_weight_multiplier` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L109–L142` |
| `SoftAffinityWeigherTestCase.test_host_with_agg` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L144–L161` |
| `SoftAffinityWeigherTestCase.test_running_twice` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L163–L176` |
| `SoftAntiAffinityWeigherTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L179–L258` |
| `SoftAntiAffinityWeigherTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L181–L184` |
| `SoftAntiAffinityWeigherTestCase.test_soft_anti_affinity_weight_multiplier_by_default` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L186–L189` |
| `SoftAntiAffinityWeigherTestCase.test_soft_anti_affinity_weight_multiplier_zero_value` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L191–L197` |
| `SoftAntiAffinityWeigherTestCase.test_soft_anti_affinity_weight_multiplier_positive_value` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L199–L204` |
| `SoftAntiAffinityWeigherTestCase.test_soft_anti_affinity_weight_multiplier` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L206–L239` |
| `SoftAntiAffinityWeigherTestCase.test_host_with_agg` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L241–L258` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L16)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L18)
- `nova.scheduler`: imports `weights` (src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L19)
- `nova.scheduler.weights`: imports `affinity` (src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L20)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L21)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/weights/test_weights_affinity.py:L22)

