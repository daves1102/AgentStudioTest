# src/nova/tests/functional/libvirt/test_rt_servers.py

## Overview

This file implements the `test_rt_servers` module, defining 1 class, 1 constant, 4 methods, 2 imports, 1 side effect.

Lines: total 58, code 29, comment 16, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `RealTimeServersTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_rt_servers.py:L20–L58` |
| `RealTimeServersTest.ADDITIONAL_FILTERS` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_rt_servers.py:L22–L22` |
| `RealTimeServersTest.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_rt_servers.py:L24–L26` |
| `RealTimeServersTest.test_no_dedicated_cpu` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/libvirt/test_rt_servers.py:L28–L35` |
| `RealTimeServersTest.test_no_realtime_mask` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/libvirt/test_rt_servers.py:L37–L45` |
| `RealTimeServersTest.test_success` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/libvirt/test_rt_servers.py:L47–L58` |

## Dependencies

- `nova.tests.functional.api`: imports `client` (src/nova/tests/functional/libvirt/test_rt_servers.py:L16)
- `nova.tests.functional.libvirt`: imports `base` (src/nova/tests/functional/libvirt/test_rt_servers.py:L17)

## Side Effects

- **global-mutation**: ADDITIONAL_FILTERS = ['NUMATopologyFilter'] (src/nova/tests/functional/libvirt/test_rt_servers.py:L22)

