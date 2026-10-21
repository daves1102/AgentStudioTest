# src/nova/tests/unit/virt/test_osinfo.py

## Overview

This file implements the `test_osinfo` module, defining 1 class, 9 methods, 7 imports.

Lines: total 131, code 99, comment 13, blank 19

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LibvirtOsInfoTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_osinfo.py:L26–L131` |
| `LibvirtOsInfoTest.setUp` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/test_osinfo.py:L28–L41` |
| `LibvirtOsInfoTest.test_get_os` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_osinfo.py:L43–L46` |
| `LibvirtOsInfoTest.test_get_os_fails` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_osinfo.py:L48–L52` |
| `LibvirtOsInfoTest.test_module_load_failed` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/test_osinfo.py:L54–L68` |
| `LibvirtOsInfoTest.test_hardware_properties_from_osinfo_fedora19` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/test_osinfo.py:L70–L81` |
| `LibvirtOsInfoTest.test_hardware_properties_from_osinfo_fedora22` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/test_osinfo.py:L83–L94` |
| `LibvirtOsInfoTest.test_hardware_properties_from_osinfo_fedora23` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/test_osinfo.py:L96–L107` |
| `LibvirtOsInfoTest.test_hardware_properties_from_meta` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_osinfo.py:L109–L116` |
| `LibvirtOsInfoTest.test_hardware_properties_from_meta_no_os_distro` | method | (self, mock_warn) | public | not declared | 1/10 | `src/nova/tests/unit/virt/test_osinfo.py:L119–L131` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/virt/test_osinfo.py:L15)
- `import fixtures` (src/nova/tests/unit/virt/test_osinfo.py:L17)
- `nova`: imports `exception` (src/nova/tests/unit/virt/test_osinfo.py:L19)
- `nova`: imports `objects` (src/nova/tests/unit/virt/test_osinfo.py:L20)
- `nova`: imports `test` (src/nova/tests/unit/virt/test_osinfo.py:L21)
- `nova.tests.unit.virt`: imports `fakelibosinfo` (src/nova/tests/unit/virt/test_osinfo.py:L22)
- `nova.virt`: imports `osinfo` (src/nova/tests/unit/virt/test_osinfo.py:L23)

