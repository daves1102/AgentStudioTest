# src/nova/tests/functional/test_conf_max_attach_disk_devices.py

## Overview

This file implements the `test_conf_max_attach_disk_devices` module, defining 1 class, 3 methods, 3 imports.

Lines: total 94, code 63, comment 25, blank 6

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ConfigurableMaxDiskDevicesTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_conf_max_attach_disk_devices.py:L18–L94` |
| `ConfigurableMaxDiskDevicesTest.test_boot_from_volume` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/test_conf_max_attach_disk_devices.py:L20–L32` |
| `ConfigurableMaxDiskDevicesTest.test_boot_from_volume_plus_attach_max_exceeded` | method | (self) | public | not declared | 1/26 | `src/nova/tests/functional/test_conf_max_attach_disk_devices.py:L34–L66` |
| `ConfigurableMaxDiskDevicesTest.test_attach` | method | (self) | public | not declared | 1/21 | `src/nova/tests/functional/test_conf_max_attach_disk_devices.py:L68–L94` |

## Dependencies

- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/test_conf_max_attach_disk_devices.py:L13)
- `nova.tests.functional.api`: imports `client` (src/nova/tests/functional/test_conf_max_attach_disk_devices.py:L14)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_conf_max_attach_disk_devices.py:L15)

