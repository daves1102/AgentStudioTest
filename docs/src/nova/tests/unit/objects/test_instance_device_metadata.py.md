# src/nova/tests/unit/objects/test_instance_device_metadata.py

## Overview

This file implements the `test_instance_device_metadata` module, defining 3 classs, 1 function, 4 methods, 6 variables, 4 imports.

Lines: total 103, code 74, comment 11, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_net_interface_meta` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_device_metadata.py:L20–L24` |
| `fake_pci_disk_meta` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_device_metadata.py:L25–L27` |
| `fake_obj_devices_metadata` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_device_metadata.py:L28–L29` |
| `fake_devices_metadata` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_device_metadata.py:L31–L31` |
| `fake_db_metadata` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_device_metadata.py:L33–L40` |
| `fake_old_db_metadata` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_device_metadata.py:L42–L42` |
| `get_fake_obj_device_metadata` | function | (context) | exported | `fake_obj_devices_metadata_cpy` (src/nova/tests/unit/objects/test_instance_device_metadata.py:L50) | 1/4 | `src/nova/tests/unit/objects/test_instance_device_metadata.py:L47–L50` |
| `_TestInstanceDeviceMetadata` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_instance_device_metadata.py:L53–L93` |
| `_TestInstanceDeviceMetadata._check_object` | method | (self, obj_meta) | private | not declared | 4/14 | `src/nova/tests/unit/objects/test_instance_device_metadata.py:L54–L67` |
| `_TestInstanceDeviceMetadata.test_get_by_instance_uuid` | method | (self, mock_get) | public | not declared | 2/9 | `src/nova/tests/unit/objects/test_instance_device_metadata.py:L70–L78` |
| `_TestInstanceDeviceMetadata.test_obj_from_db` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/objects/test_instance_device_metadata.py:L80–L84` |
| `_TestInstanceDeviceMetadata.test_net_if_compatible_pre_1_1` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_instance_device_metadata.py:L86–L93` |
| `TestInstanceDeviceMetadata` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_device_metadata.py:L96–L98` |
| `TestInstanceDeviceMetadataRemote` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_device_metadata.py:L101–L103` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_instance_device_metadata.py:L13)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/objects/test_instance_device_metadata.py:L15)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_instance_device_metadata.py:L17)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_instance_device_metadata.py:L18)

