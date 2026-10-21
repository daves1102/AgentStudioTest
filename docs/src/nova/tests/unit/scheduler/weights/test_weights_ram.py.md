# src/nova/tests/unit/scheduler/weights/test_weights_ram.py

## Overview

This file implements the `test_weights_ram` module, defining 1 class, 9 methods, 5 imports.

Lines: total 171, code 102, comment 45, blank 24

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `RamWeigherTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/weights/test_weights_ram.py:L26–L171` |
| `RamWeigherTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/weights/test_weights_ram.py:L27–L31` |
| `RamWeigherTestCase._get_weighed_host` | method | (self, hosts, weight_properties=None) | private | `self.weight_handler.get_weighed_objects(self.weighers, hosts, weight_properties)[0]` (src/nova/tests/unit/scheduler/weights/test_weights_ram.py:L36) | 2/5 | `src/nova/tests/unit/scheduler/weights/test_weights_ram.py:L33–L37` |
| `RamWeigherTestCase._get_all_hosts` | method | (self) | private | `[fakes.FakeHostState(host, node, values) for host, node, values in host_values]` (src/nova/tests/unit/scheduler/weights/test_weights_ram.py:L46) | 2/9 | `src/nova/tests/unit/scheduler/weights/test_weights_ram.py:L39–L47` |
| `RamWeigherTestCase.test_default_of_spreading_first` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/weights/test_weights_ram.py:L49–L60` |
| `RamWeigherTestCase.test_ram_filter_multiplier1` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/weights/test_weights_ram.py:L62–L73` |
| `RamWeigherTestCase.test_ram_filter_multiplier2` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/weights/test_weights_ram.py:L75–L87` |
| `RamWeigherTestCase.test_ram_filter_negative` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/scheduler/weights/test_weights_ram.py:L89–L113` |
| `RamWeigherTestCase.test_ram_weigher_multiplier` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/scheduler/weights/test_weights_ram.py:L115–L147` |
| `RamWeigherTestCase.test_host_with_agg` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/scheduler/weights/test_weights_ram.py:L149–L171` |

## Dependencies

- `nova`: imports `objects` (src/nova/tests/unit/scheduler/weights/test_weights_ram.py:L19)
- `nova.scheduler`: imports `weights` (src/nova/tests/unit/scheduler/weights/test_weights_ram.py:L20)
- `nova.scheduler.weights`: imports `ram` (src/nova/tests/unit/scheduler/weights/test_weights_ram.py:L21)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/weights/test_weights_ram.py:L22)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/weights/test_weights_ram.py:L23)

