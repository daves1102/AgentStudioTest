# src/nova/tests/unit/scheduler/weights/test_weights_pci.py

## Overview

This file implements the `test_weights_pci` module, defining 1 class, 2 functions, 10 methods, 8 imports.

Lines: total 232, code 161, comment 32, blank 39

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_create_pci_pool` | function | (count) | unexported | `objects.PciDevicePool.from_dict(test_dict)` (src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L32) | 1/4 | `src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L29–L32` |
| `_create_pci_stats` | function | (counts) | unexported | `None` (src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L37); `stats.PciDeviceStats(objects.NUMATopology(), pools)` (src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L40) | 3/5 | `src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L35–L40` |
| `PCIWeigherTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L43–L232` |
| `PCIWeigherTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L44–L48` |
| `PCIWeigherTestCase._get_weighed_hosts` | method | (self, hosts, request_spec) | private | `self.weight_handler.get_weighed_objects(self.weighers, hosts, request_spec)` (src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L51) | 1/3 | `src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L50–L52` |
| `PCIWeigherTestCase._get_all_hosts` | method | (self, host_values) | private | `[fakes.FakeHostState( host, node, {'pci_stats': _create_pci_stats(values)}) for host, node, values in host_values]` (src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L55) | 2/4 | `src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L54–L57` |
| `PCIWeigherTestCase.test_multiplier_no_pci_empty_hosts` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L59–L77` |
| `PCIWeigherTestCase.test_multiplier_no_pci_non_empty_hosts` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L79–L97` |
| `PCIWeigherTestCase.test_multiplier_with_pci` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L99–L124` |
| `PCIWeigherTestCase.test_multiplier_with_many_pci` | method | (self) | public | not declared | 2/13 | `src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L126–L148` |
| `PCIWeigherTestCase.test_multiplier_none` | method | (self) | public | not declared | 2/15 | `src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L150–L173` |
| `PCIWeigherTestCase.test_pci_weigher_multiplier` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L175–L208` |
| `PCIWeigherTestCase.test_host_with_agg` | method | (self) | public | not declared | 2/20 | `src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L210–L232` |

## Dependencies

- `import copy` (src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L18)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L20)
- `nova.pci`: imports `stats` (src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L21)
- `nova.scheduler`: imports `weights` (src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L22)
- `nova.scheduler.weights`: imports `pci` (src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L23)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L24)
- `nova.tests.unit`: imports `fake_pci_device_pools as fake_pci` (src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L25)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/weights/test_weights_pci.py:L26)

