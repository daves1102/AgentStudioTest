# src/nova/tests/unit/objects/test_pci_device_pool.py

## Overview

This file implements the `test_pci_device_pool` module, defining 4 classs, 12 methods, 6 imports.

Lines: total 112, code 77, comment 14, blank 21

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_TestPciDevicePoolObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_pci_device_pool.py:L25–L77` |
| `_TestPciDevicePoolObject.test_pci_pool_from_dict_not_distructive` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_pci_device_pool.py:L27–L30` |
| `_TestPciDevicePoolObject.test_pci_pool_from_dict` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_pci_device_pool.py:L32–L38` |
| `_TestPciDevicePoolObject.test_pci_pool_from_dict_bad_tags` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_pci_device_pool.py:L40–L45` |
| `_TestPciDevicePoolObject.test_pci_pool_from_dict_no_tags` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_pci_device_pool.py:L47–L52` |
| `_TestPciDevicePoolObject.test_pci_pool_to_dict` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_pci_device_pool.py:L54–L60` |
| `_TestPciDevicePoolObject.test_pci_pool_to_dict_no_tags` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_pci_device_pool.py:L62–L65` |
| `_TestPciDevicePoolObject.test_pci_pool_to_dict_with_tags_unset` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_pci_device_pool.py:L67–L70` |
| `_TestPciDevicePoolObject.test_obj_make_compatible` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_pci_device_pool.py:L72–L77` |
| `TestPciDevicePoolObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_pci_device_pool.py:L80–L82` |
| `TestRemotePciDevicePoolObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_pci_device_pool.py:L85–L87` |
| `TestConvertPciStats` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_pci_device_pool.py:L90–L112` |
| `TestConvertPciStats.test_from_pci_stats_obj` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_pci_device_pool.py:L91–L95` |
| `TestConvertPciStats.test_from_pci_stats_dict` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_pci_device_pool.py:L97–L101` |
| `TestConvertPciStats.test_from_pci_stats_list_of_dicts` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_pci_device_pool.py:L103–L107` |
| `TestConvertPciStats.test_from_pci_stats_bad` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_pci_device_pool.py:L109–L112` |

## Dependencies

- `import copy` (src/nova/tests/unit/objects/test_pci_device_pool.py:L16)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_pci_device_pool.py:L18)
- `nova.objects`: imports `pci_device_pool` (src/nova/tests/unit/objects/test_pci_device_pool.py:L19)
- `nova`: imports `test` (src/nova/tests/unit/objects/test_pci_device_pool.py:L20)
- `nova.tests.unit`: imports `fake_pci_device_pools as fake_pci` (src/nova/tests/unit/objects/test_pci_device_pool.py:L21)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_pci_device_pool.py:L22)

