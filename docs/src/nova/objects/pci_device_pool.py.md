# src/nova/objects/pci_device_pool.py

## Overview

This file implements the `pci_device_pool` module, defining 2 classs, 2 constants, 2 fields, 1 function, 3 methods, 1 variable, 6 imports, 2 side effects.

Lines: total 109, code 68, comment 27, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/pci_device_pool.py:L25–L29` |
| `PciDevicePool` | class | — | exported | not declared | — | `src/nova/objects/pci_device_pool.py:L33–L73` |
| `PciDevicePool.VERSION` | constant | — | public | not declared | — | `src/nova/objects/pci_device_pool.py:L36–L36` |
| `PciDevicePool.fields` | field | — | public | not declared | — | `src/nova/objects/pci_device_pool.py:L38–L44` |
| `PciDevicePool.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 3/4 | `src/nova/objects/pci_device_pool.py:L46–L49` |
| `PciDevicePool.from_dict` | method | (cls, value) | public | `pool` (src/nova/objects/pci_device_pool.py:L63) | 1/9 | `src/nova/objects/pci_device_pool.py:L55–L63` |
| `PciDevicePool.to_dict` | method | (self) | public | `pci_pool` (src/nova/objects/pci_device_pool.py:L73) | 2/6 | `src/nova/objects/pci_device_pool.py:L68–L73` |
| `PciDevicePoolList` | class | — | exported | not declared | — | `src/nova/objects/pci_device_pool.py:L77–L84` |
| `PciDevicePoolList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/pci_device_pool.py:L81–L81` |
| `PciDevicePoolList.fields` | field | — | public | not declared | — | `src/nova/objects/pci_device_pool.py:L82–L84` |
| `from_pci_stats` | function | (pci_stats) | exported | `objects.PciDevicePoolList.obj_from_primitive(pci_stats)` (src/nova/objects/pci_device_pool.py:L101); `objects.PciDevicePoolList(objects=pools)` (src/nova/objects/pci_device_pool.py:L109) | 7/17 | `src/nova/objects/pci_device_pool.py:L87–L109` |

## Dependencies

- `import copy` (src/nova/objects/pci_device_pool.py:L16)
- `oslo_serialization`: imports `jsonutils` (src/nova/objects/pci_device_pool.py:L18)
- `oslo_utils`: imports `versionutils` (src/nova/objects/pci_device_pool.py:L19)
- `nova`: imports `objects` (src/nova/objects/pci_device_pool.py:L21)
- `nova.objects`: imports `base` (src/nova/objects/pci_device_pool.py:L22)
- `nova.objects`: imports `fields` (src/nova/objects/pci_device_pool.py:L23)

## Side Effects

- **global-mutation**: VERSION = '1.1' (src/nova/objects/pci_device_pool.py:L36)
- **global-mutation**: VERSION = '1.1' (src/nova/objects/pci_device_pool.py:L81)

