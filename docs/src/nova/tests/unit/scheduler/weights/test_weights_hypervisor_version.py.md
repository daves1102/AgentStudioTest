# src/nova/tests/unit/scheduler/weights/test_weights_hypervisor_version.py

## Overview

This file implements the `test_weights_hypervisor_version` module, defining 1 class, 8 methods, 4 imports.

Lines: total 97, code 76, comment 11, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `HypervisorVersionWeigherTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/weights/test_weights_hypervisor_version.py:L22–L97` |
| `HypervisorVersionWeigherTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/weights/test_weights_hypervisor_version.py:L23–L26` |
| `HypervisorVersionWeigherTestCase._get_weighed_host` | method | (self, hosts, weight_properties=None) | private | `self.weight_handler.get_weighed_objects(self.weighers, hosts, weight_properties)[0]` (src/nova/tests/unit/scheduler/weights/test_weights_hypervisor_version.py:L31) | 2/5 | `src/nova/tests/unit/scheduler/weights/test_weights_hypervisor_version.py:L28–L32` |
| `HypervisorVersionWeigherTestCase._get_all_hosts` | method | (self) | private | `[fakes.FakeHostState(host, node, values) for host, node, values in host_values]` (src/nova/tests/unit/scheduler/weights/test_weights_hypervisor_version.py:L41) | 2/9 | `src/nova/tests/unit/scheduler/weights/test_weights_hypervisor_version.py:L34–L42` |
| `HypervisorVersionWeigherTestCase.test_multiplier_default` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/weights/test_weights_hypervisor_version.py:L44–L48` |
| `HypervisorVersionWeigherTestCase.test_multiplier_default_full_ordering` | method | (self) | public | not declared | 3/17 | `src/nova/tests/unit/scheduler/weights/test_weights_hypervisor_version.py:L50–L66` |
| `HypervisorVersionWeigherTestCase.test_multiplier_none` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/weights/test_weights_hypervisor_version.py:L68–L76` |
| `HypervisorVersionWeigherTestCase.test_multiplier_positive` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/weights/test_weights_hypervisor_version.py:L78–L87` |
| `HypervisorVersionWeigherTestCase.test_multiplier_negative` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/weights/test_weights_hypervisor_version.py:L89–L97` |

## Dependencies

- `nova.scheduler`: imports `weights` (src/nova/tests/unit/scheduler/weights/test_weights_hypervisor_version.py:L16)
- `nova.scheduler.weights`: imports `hypervisor_version` (src/nova/tests/unit/scheduler/weights/test_weights_hypervisor_version.py:L17)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/weights/test_weights_hypervisor_version.py:L18)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/weights/test_weights_hypervisor_version.py:L19)

