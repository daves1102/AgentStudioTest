# src/nova/tests/functional/libvirt/test_device_bus_migration.py

## Overview

This file implements the `test_device_bus_migration` module, defining 1 class, 1 constant, 1 field, 1 function, 10 methods, 11 imports, 1 side effect.

Lines: total 413, code 295, comment 65, blank 53

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LibvirtDeviceBusMigration` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_device_bus_migration.py:L28–L413` |
| `LibvirtDeviceBusMigration.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_device_bus_migration.py:L30–L30` |
| `LibvirtDeviceBusMigration.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_device_bus_migration.py:L32–L32` |
| `LibvirtDeviceBusMigration.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/libvirt/test_device_bus_migration.py:L34–L39` |
| `LibvirtDeviceBusMigration._unset_stashed_image_properties` | method | (self, server_id, properties) | private | not declared | 2/5 | `src/nova/tests/functional/libvirt/test_device_bus_migration.py:L41–L45` |
| `LibvirtDeviceBusMigration._assert_stashed_image_properties` | method | (self, server_id, properties) | private | not declared | 2/4 | `src/nova/tests/functional/libvirt/test_device_bus_migration.py:L47–L50` |
| `LibvirtDeviceBusMigration._assert_stashed_image_properties_persist` | method | (self, server, properties) | private | not declared | 2/14 | `src/nova/tests/functional/libvirt/test_device_bus_migration.py:L52–L72` |
| `LibvirtDeviceBusMigration.test_default_image_property_registration` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/libvirt/test_device_bus_migration.py:L74–L100` |
| `LibvirtDeviceBusMigration.test_non_default_image_property_registration` | method | (self) | public | not declared | 1/40 | `src/nova/tests/functional/libvirt/test_device_bus_migration.py:L102–L147` |
| `LibvirtDeviceBusMigration.test_default_image_property_persists_across_osinfo_changes` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/libvirt/test_device_bus_migration.py:L149–L172` |
| `LibvirtDeviceBusMigration.test_default_image_property_persists_across_host_flag_changes` | method | (self) | public | not declared | 1/40 | `src/nova/tests/functional/libvirt/test_device_bus_migration.py:L174–L241` |
| `LibvirtDeviceBusMigration._assert_guest_config` | method | (self, config, image_properties) | private | not declared | 19/47 | `src/nova/tests/functional/libvirt/test_device_bus_migration.py:L243–L304` |
| `LibvirtDeviceBusMigration.test_machine_type_and_bus_and_model_migration` | method | (self) | public | not declared | 2/77 | `src/nova/tests/functional/libvirt/test_device_bus_migration.py:L306–L413` |
| `LibvirtDeviceBusMigration.test_machine_type_and_bus_and_model_migration._get_guest_config` | function | (_self, *args, **kwargs) | private | `self.guest_configs[instance.uuid]` (src/nova/tests/functional/libvirt/test_device_bus_migration.py:L321) | — | `src/nova/tests/functional/libvirt/test_device_bus_migration.py:L317–L321` |

## Dependencies

- `import datetime` (src/nova/tests/functional/libvirt/test_device_bus_migration.py:L13)
- `unittest`: imports `mock` (src/nova/tests/functional/libvirt/test_device_bus_migration.py:L14)
- `import fixtures` (src/nova/tests/functional/libvirt/test_device_bus_migration.py:L16)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/libvirt/test_device_bus_migration.py:L17)
- `nova.cmd`: imports `manage` (src/nova/tests/functional/libvirt/test_device_bus_migration.py:L19)
- `nova`: imports `context as nova_context` (src/nova/tests/functional/libvirt/test_device_bus_migration.py:L20)
- `nova`: imports `objects` (src/nova/tests/functional/libvirt/test_device_bus_migration.py:L21)
- `nova`: imports `test` (src/nova/tests/functional/libvirt/test_device_bus_migration.py:L22)
- `nova.tests.functional.libvirt`: imports `base` (src/nova/tests/functional/libvirt/test_device_bus_migration.py:L23)
- `nova.virt.libvirt`: imports `config as vconfig` (src/nova/tests/functional/libvirt/test_device_bus_migration.py:L24)
- `nova.virt.libvirt`: imports `driver as libvirt_driver` (src/nova/tests/functional/libvirt/test_device_bus_migration.py:L25)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/libvirt/test_device_bus_migration.py:L32)

