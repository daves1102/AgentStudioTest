# src/nova/objects/virt_device_metadata.py

## Overview

This file implements the `virt_device_metadata` module, defining 11 classs, 11 constants, 10 fields, 4 methods, 1 variable, 5 imports, 11 side effects.

Lines: total 165, code 110, comment 16, blank 39

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/virt_device_metadata.py:L22–L34` |
| `DeviceBus` | class | — | exported | not declared | — | `src/nova/objects/virt_device_metadata.py:L38–L39` |
| `DeviceBus.VERSION` | constant | — | public | not declared | — | `src/nova/objects/virt_device_metadata.py:L39–L39` |
| `PCIDeviceBus` | class | — | exported | not declared | — | `src/nova/objects/virt_device_metadata.py:L43–L48` |
| `PCIDeviceBus.VERSION` | constant | — | public | not declared | — | `src/nova/objects/virt_device_metadata.py:L44–L44` |
| `PCIDeviceBus.fields` | field | — | public | not declared | — | `src/nova/objects/virt_device_metadata.py:L46–L48` |
| `USBDeviceBus` | class | — | exported | not declared | — | `src/nova/objects/virt_device_metadata.py:L52–L57` |
| `USBDeviceBus.VERSION` | constant | — | public | not declared | — | `src/nova/objects/virt_device_metadata.py:L53–L53` |
| `USBDeviceBus.fields` | field | — | public | not declared | — | `src/nova/objects/virt_device_metadata.py:L55–L57` |
| `SCSIDeviceBus` | class | — | exported | not declared | — | `src/nova/objects/virt_device_metadata.py:L61–L66` |
| `SCSIDeviceBus.VERSION` | constant | — | public | not declared | — | `src/nova/objects/virt_device_metadata.py:L62–L62` |
| `SCSIDeviceBus.fields` | field | — | public | not declared | — | `src/nova/objects/virt_device_metadata.py:L64–L66` |
| `IDEDeviceBus` | class | — | exported | not declared | — | `src/nova/objects/virt_device_metadata.py:L70–L75` |
| `IDEDeviceBus.VERSION` | constant | — | public | not declared | — | `src/nova/objects/virt_device_metadata.py:L71–L71` |
| `IDEDeviceBus.fields` | field | — | public | not declared | — | `src/nova/objects/virt_device_metadata.py:L73–L75` |
| `XenDeviceBus` | class | — | exported | not declared | — | `src/nova/objects/virt_device_metadata.py:L79–L84` |
| `XenDeviceBus.VERSION` | constant | — | public | not declared | — | `src/nova/objects/virt_device_metadata.py:L80–L80` |
| `XenDeviceBus.fields` | field | — | public | not declared | — | `src/nova/objects/virt_device_metadata.py:L82–L84` |
| `DeviceMetadata` | class | — | exported | not declared | — | `src/nova/objects/virt_device_metadata.py:L88–L94` |
| `DeviceMetadata.VERSION` | constant | — | public | not declared | — | `src/nova/objects/virt_device_metadata.py:L89–L89` |
| `DeviceMetadata.fields` | field | — | public | not declared | — | `src/nova/objects/virt_device_metadata.py:L91–L94` |
| `NetworkInterfaceMetadata` | class | — | exported | not declared | — | `src/nova/objects/virt_device_metadata.py:L98–L115` |
| `NetworkInterfaceMetadata.VERSION` | constant | — | public | not declared | — | `src/nova/objects/virt_device_metadata.py:L102–L102` |
| `NetworkInterfaceMetadata.fields` | field | — | public | not declared | — | `src/nova/objects/virt_device_metadata.py:L104–L108` |
| `NetworkInterfaceMetadata.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 5/6 | `src/nova/objects/virt_device_metadata.py:L110–L115` |
| `DiskMetadata` | class | — | exported | not declared | — | `src/nova/objects/virt_device_metadata.py:L119–L125` |
| `DiskMetadata.VERSION` | constant | — | public | not declared | — | `src/nova/objects/virt_device_metadata.py:L120–L120` |
| `DiskMetadata.fields` | field | — | public | not declared | — | `src/nova/objects/virt_device_metadata.py:L122–L125` |
| `ShareMetadata` | class | — | exported | not declared | — | `src/nova/objects/virt_device_metadata.py:L129–L135` |
| `ShareMetadata.VERSION` | constant | — | public | not declared | — | `src/nova/objects/virt_device_metadata.py:L130–L130` |
| `ShareMetadata.fields` | field | — | public | not declared | — | `src/nova/objects/virt_device_metadata.py:L132–L135` |
| `InstanceDeviceMetadata` | class | — | exported | not declared | — | `src/nova/objects/virt_device_metadata.py:L139–L165` |
| `InstanceDeviceMetadata.VERSION` | constant | — | public | not declared | — | `src/nova/objects/virt_device_metadata.py:L140–L140` |
| `InstanceDeviceMetadata.fields` | field | — | public | not declared | — | `src/nova/objects/virt_device_metadata.py:L141–L144` |
| `InstanceDeviceMetadata.obj_from_db` | method | (cls, context, db_dev_meta) | public | `device_metadata` (src/nova/objects/virt_device_metadata.py:L150) | 1/4 | `src/nova/objects/virt_device_metadata.py:L147–L150` |
| `InstanceDeviceMetadata.get_by_instance_uuid` | method | (cls, context, instance_uuid) | public | `None` (src/nova/objects/virt_device_metadata.py:L158); `device_metadata` (src/nova/objects/virt_device_metadata.py:L162) | 3/8 | `src/nova/objects/virt_device_metadata.py:L154–L162` |
| `InstanceDeviceMetadata._to_json` | method | (self) | private | `jsonutils.dumps(self.obj_to_primitive())` (src/nova/objects/virt_device_metadata.py:L165) | 1/2 | `src/nova/objects/virt_device_metadata.py:L164–L165` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/objects/virt_device_metadata.py:L15)
- `oslo_utils`: imports `versionutils` (src/nova/objects/virt_device_metadata.py:L16)
- `nova.db.main`: imports `api as db` (src/nova/objects/virt_device_metadata.py:L18)
- `nova.objects`: imports `base` (src/nova/objects/virt_device_metadata.py:L19)
- `nova.objects`: imports `fields` (src/nova/objects/virt_device_metadata.py:L20)

## Side Effects

- **global-mutation**: VERSION = '1.0' (src/nova/objects/virt_device_metadata.py:L39)
- **global-mutation**: VERSION = '1.0' (src/nova/objects/virt_device_metadata.py:L44)
- **global-mutation**: VERSION = '1.0' (src/nova/objects/virt_device_metadata.py:L53)
- **global-mutation**: VERSION = '1.0' (src/nova/objects/virt_device_metadata.py:L62)
- **global-mutation**: VERSION = '1.0' (src/nova/objects/virt_device_metadata.py:L71)
- **global-mutation**: VERSION = '1.0' (src/nova/objects/virt_device_metadata.py:L80)
- **global-mutation**: VERSION = '1.0' (src/nova/objects/virt_device_metadata.py:L89)
- **global-mutation**: VERSION = '1.2' (src/nova/objects/virt_device_metadata.py:L102)
- **global-mutation**: VERSION = '1.0' (src/nova/objects/virt_device_metadata.py:L120)
- **global-mutation**: VERSION = '1.0' (src/nova/objects/virt_device_metadata.py:L130)
- **global-mutation**: VERSION = '1.0' (src/nova/objects/virt_device_metadata.py:L140)

