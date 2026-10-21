# src/nova/virt/osinfo.py

## Overview

This file implements the `osinfo` module, defining 3 classs, 1 classmethod, 1 constant, 1 field, 10 methods, 4 propertys, 1 variable, 4 imports, 1 side effect.

Lines: total 147, code 101, comment 22, blank 24

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `libosinfo` | variable | — | exported | not declared | — | `src/nova/virt/osinfo.py:L21–L21` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/osinfo.py:L22–L22` |
| `_OsInfoDatabase` | class | — | unexported | not declared | — | `src/nova/virt/osinfo.py:L31–L82` |
| `_OsInfoDatabase._instance` | field | — | private | not declared | — | `src/nova/virt/osinfo.py:L33–L33` |
| `_OsInfoDatabase.__init__` | method | (self) | public | not declared | 3/13 | `src/nova/virt/osinfo.py:L35–L49` |
| `_OsInfoDatabase.get_instance` | method | (cls) | public | `cls._instance` (src/nova/virt/osinfo.py:L58) | 2/4 | `src/nova/virt/osinfo.py:L52–L58` |
| `_OsInfoDatabase.get_os` | method | (self, os_name) | public | `` (src/nova/virt/osinfo.py:L72); `filtered.get_nth(0)` (src/nova/virt/osinfo.py:L82) | 5/13 | `src/nova/virt/osinfo.py:L60–L82` |
| `OsInfo` | class | — | exported | not declared | — | `src/nova/virt/osinfo.py:L85–L127` |
| `OsInfo.__init__` | method | (self, os_name) | public | not declared | 1/2 | `src/nova/virt/osinfo.py:L89–L90` |
| `OsInfo._get_os_obj` | method | (self, os_name) | private | `_OsInfoDatabase.get_instance().get_os(os_name)` (src/nova/virt/osinfo.py:L95) | 3/6 | `src/nova/virt/osinfo.py:L92–L97` |
| `OsInfo.network_model` | method | (self) | public | `'virtio'` (src/nova/virt/osinfo.py:L109); `net_model` (src/nova/virt/osinfo.py:L112) | 5/11 | `src/nova/virt/osinfo.py:L100–L112` |
| `OsInfo.disk_model` | method | (self) | public | `'virtio'` (src/nova/virt/osinfo.py:L124); `disk_model` (src/nova/virt/osinfo.py:L127) | 5/11 | `src/nova/virt/osinfo.py:L115–L127` |
| `HardwareProperties` | class | — | exported | not declared | — | `src/nova/virt/osinfo.py:L130–L147` |
| `HardwareProperties.__init__` | method | (self, image_meta) | public | not declared | 1/4 | `src/nova/virt/osinfo.py:L132–L137` |
| `HardwareProperties.network_model` | method | (self) | public | `self.img_props.get('hw_vif_model', self.os_info_obj.network_model)` (src/nova/virt/osinfo.py:L141) | 1/3 | `src/nova/virt/osinfo.py:L140–L142` |
| `HardwareProperties.disk_model` | method | (self) | public | `self.img_props.get('hw_disk_bus', self.os_info_obj.disk_model)` (src/nova/virt/osinfo.py:L146) | 1/3 | `src/nova/virt/osinfo.py:L145–L147` |
| `_OsInfoDatabase.get_instance` | classmethod | — | public | not declared | — | `src/nova/virt/osinfo.py:L51–L58` |
| `OsInfo.network_model` | property | — | public | not declared | — | `src/nova/virt/osinfo.py:L99–L112` |
| `OsInfo.disk_model` | property | — | public | not declared | — | `src/nova/virt/osinfo.py:L114–L127` |
| `HardwareProperties.network_model` | property | — | public | not declared | — | `src/nova/virt/osinfo.py:L139–L142` |
| `HardwareProperties.disk_model` | property | — | public | not declared | — | `src/nova/virt/osinfo.py:L144–L147` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/virt/osinfo.py:L15)
- `oslo_utils`: imports `importutils` (src/nova/virt/osinfo.py:L16)
- `nova`: imports `exception` (src/nova/virt/osinfo.py:L18)
- `nova.objects`: imports `fields` (src/nova/virt/osinfo.py:L19)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/osinfo.py:L22)

