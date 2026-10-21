# src/nova/tests/unit/compute/monitors/cpu/test_virt_driver.py

## Overview

This file implements the `test_virt_driver` module, defining 3 classs, 1 field, 4 methods, 4 imports.

Lines: total 86, code 53, comment 19, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FakeDriver` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/monitors/cpu/test_virt_driver.py:L25–L31` |
| `FakeDriver.get_host_cpu_stats` | method | (self) | public | `{'kernel': 5664160000000, 'idle': 1592705190000000, 'frequency': 800, 'user': 26728850000000, 'iowait': 6121490000000}` (src/nova/tests/unit/compute/monitors/cpu/test_virt_driver.py:L27) | 1/6 | `src/nova/tests/unit/compute/monitors/cpu/test_virt_driver.py:L26–L31` |
| `FakeResourceTracker` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/monitors/cpu/test_virt_driver.py:L34–L35` |
| `FakeResourceTracker.driver` | field | — | public | not declared | — | `src/nova/tests/unit/compute/monitors/cpu/test_virt_driver.py:L35–L35` |
| `VirtDriverCPUMonitorTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/monitors/cpu/test_virt_driver.py:L38–L86` |
| `VirtDriverCPUMonitorTestCase.test_get_metric_names` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/compute/monitors/cpu/test_virt_driver.py:L40–L53` |
| `VirtDriverCPUMonitorTestCase.test_populate_metrics` | method | (self) | public | not declared | 3/18 | `src/nova/tests/unit/compute/monitors/cpu/test_virt_driver.py:L55–L74` |
| `VirtDriverCPUMonitorTestCase.test_ensure_single_sampling` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/monitors/cpu/test_virt_driver.py:L76–L86` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/compute/monitors/cpu/test_virt_driver.py:L18)
- `nova.compute.monitors.cpu`: imports `virt_driver` (src/nova/tests/unit/compute/monitors/cpu/test_virt_driver.py:L20)
- `nova`: imports `objects` (src/nova/tests/unit/compute/monitors/cpu/test_virt_driver.py:L21)
- `nova`: imports `test` (src/nova/tests/unit/compute/monitors/cpu/test_virt_driver.py:L22)

