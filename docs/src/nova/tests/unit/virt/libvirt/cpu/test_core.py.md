# src/nova/tests/unit/virt/libvirt/cpu/test_core.py

## Overview

This file implements the `test_core` module, defining 2 classs, 12 methods, 5 imports.

Lines: total 122, code 92, comment 11, blank 19

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestCore` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/cpu/test_core.py:L21–L60` |
| `TestCore.test_get_available_cores` | method | (self, mock_parse_cpu_spec, mock_read_sys) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/cpu/test_core.py:L25–L30` |
| `TestCore.test_get_available_cores_none` | method | (self, mock_parse_cpu_spec, mock_read_sys) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/cpu/test_core.py:L34–L38` |
| `TestCore.test_exists` | method | (self, mock_get_available_cores) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/cpu/test_core.py:L41–L45` |
| `TestCore.test_gen_cpu_path` | method | (self, mock_exists, mock_cpu_path) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/cpu/test_core.py:L51–L54` |
| `TestCore.test_gen_cpu_path_raises` | method | (self, mock_exists) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/cpu/test_core.py:L57–L60` |
| `TestCoreHelpers` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/cpu/test_core.py:L63–L122` |
| `TestCoreHelpers.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/cpu/test_core.py:L65–L75` |
| `TestCoreHelpers.test_get_online` | method | (self, mock_read_sys) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/cpu/test_core.py:L78–L81` |
| `TestCoreHelpers.test_get_online_not_exists` | method | (self, mock_read_sys) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/cpu/test_core.py:L84–L87` |
| `TestCoreHelpers.test_set_online` | method | (self, mock_get_online, mock_write_sys) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/cpu/test_core.py:L91–L96` |
| `TestCoreHelpers.test_set_offline` | method | (self, mock_get_online, mock_write_sys) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/cpu/test_core.py:L100–L105` |
| `TestCoreHelpers.test_get_governor` | method | (self, mock_read_sys) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/cpu/test_core.py:L108–L112` |
| `TestCoreHelpers.test_set_governor` | method | (self, mock_write_sys, mock_get_governor) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/cpu/test_core.py:L116–L122` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/cpu/test_core.py:L13)
- `nova`: imports `exception` (src/nova/tests/unit/virt/libvirt/cpu/test_core.py:L15)
- `nova`: imports `test` (src/nova/tests/unit/virt/libvirt/cpu/test_core.py:L16)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/virt/libvirt/cpu/test_core.py:L17)
- `nova.virt.libvirt.cpu`: imports `core` (src/nova/tests/unit/virt/libvirt/cpu/test_core.py:L18)

