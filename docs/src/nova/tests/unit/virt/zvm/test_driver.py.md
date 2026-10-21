# src/nova/tests/unit/virt/zvm/test_driver.py

## Overview

This file implements the `test_driver` module, defining 1 class, 1 constant, 32 methods, 14 imports, 4 side effects, 2 security surface entries.

Lines: total 557, code 478, comment 15, blank 64

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/zvm/test_driver.py:L33–L33` |
| `TestZVMDriver` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/zvm/test_driver.py:L36–L557` |
| `TestZVMDriver.setUp` | method | (self) | public | not declared | 1/82 | `src/nova/tests/unit/virt/zvm/test_driver.py:L38–L124` |
| `TestZVMDriver.test_driver_init_no_url` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/zvm/test_driver.py:L126–L129` |
| `TestZVMDriver.test_get_available_resource_err_case` | method | (self, call, uptime_mock) | public | not declared | 1/11 | `src/nova/tests/unit/virt/zvm/test_driver.py:L135–L145` |
| `TestZVMDriver.test_driver_template_validation` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/zvm/test_driver.py:L147–L150` |
| `TestZVMDriver.test_get_info` | method | (self, mock_get) | public | not declared | 1/3 | `src/nova/tests/unit/virt/zvm/test_driver.py:L153–L155` |
| `TestZVMDriver.test_private_get_image_info_err` | method | (self, call) | public | not declared | 1/10 | `src/nova/tests/unit/virt/zvm/test_driver.py:L158–L167` |
| `TestZVMDriver.test_private_get_image_info` | method | (self, image_import, call) | public | not declared | 1/12 | `src/nova/tests/unit/virt/zvm/test_driver.py:L171–L183` |
| `TestZVMDriver.test_private_get_image_info_exist` | method | (self, call) | public | not declared | 1/6 | `src/nova/tests/unit/virt/zvm/test_driver.py:L186–L191` |
| `TestZVMDriver._test_set_disk_list` | method | (self, call, has_get_root_units=False, has_eph_disks=False) | private | not declared | 4/25 | `src/nova/tests/unit/virt/zvm/test_driver.py:L194–L223` |
| `TestZVMDriver.test_private_set_disk_list_simple` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/zvm/test_driver.py:L225–L226` |
| `TestZVMDriver.test_private_set_disk_list_with_eph_disks` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/zvm/test_driver.py:L228–L229` |
| `TestZVMDriver.test_private_set_disk_list_with_get_root_units` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/zvm/test_driver.py:L231–L232` |
| `TestZVMDriver.test_private_setup_network` | method | (self, call) | public | not declared | 1/13 | `src/nova/tests/unit/virt/zvm/test_driver.py:L235–L247` |
| `TestZVMDriver.test_private_import_spawn_image` | method | (self, call, fetch) | public | not declared | 1/11 | `src/nova/tests/unit/virt/zvm/test_driver.py:L251–L262` |
| `TestZVMDriver.test_destroy` | method | (self, call, guest_exists) | public | not declared | 1/5 | `src/nova/tests/unit/virt/zvm/test_driver.py:L266–L270` |
| `TestZVMDriver.test_spawn` | method | (self, call, get_image_info, gen_conf_file, set_disk_list, setup_network, mock_wait, mock_exists) | public | not declared | 1/31 | `src/nova/tests/unit/virt/zvm/test_driver.py:L279–L310` |
| `TestZVMDriver.test_spawn_image_no_distro_empty` | method | (self, get_image_info, mock_exists) | public | not declared | 1/13 | `src/nova/tests/unit/virt/zvm/test_driver.py:L314–L326` |
| `TestZVMDriver.test_spawn_image_no_distro_none` | method | (self, get_image_info, mock_exists) | public | not declared | 1/12 | `src/nova/tests/unit/virt/zvm/test_driver.py:L330–L341` |
| `TestZVMDriver.test_snapshot` | method | (self, call, get_image_service, mock_open) | public | not declared | 1/44 | `src/nova/tests/unit/virt/zvm/test_driver.py:L346–L391` |
| `TestZVMDriver.test_snapshot_capture_fail` | method | (self, mock_capture, get_image_service) | public | not declared | 1/11 | `src/nova/tests/unit/virt/zvm/test_driver.py:L395–L407` |
| `TestZVMDriver.test_snapshot_import_fail` | method | (self, mock_import, mock_delete, call, get_image_service) | public | not declared | 1/16 | `src/nova/tests/unit/virt/zvm/test_driver.py:L413–L431` |
| `TestZVMDriver.test_snapshot_update_fail` | method | (self, mock_import, mock_delete, call, get_image_service, mock_open) | public | not declared | 1/23 | `src/nova/tests/unit/virt/zvm/test_driver.py:L438–L465` |
| `TestZVMDriver.test_guest_start` | method | (self, call) | public | not declared | 1/3 | `src/nova/tests/unit/virt/zvm/test_driver.py:L468–L470` |
| `TestZVMDriver.test_power_off` | method | (self, ipa) | public | not declared | 1/3 | `src/nova/tests/unit/virt/zvm/test_driver.py:L473–L475` |
| `TestZVMDriver.test_power_off_with_timeout_interval` | method | (self, ipa) | public | not declared | 1/4 | `src/nova/tests/unit/virt/zvm/test_driver.py:L478–L481` |
| `TestZVMDriver.test_pause` | method | (self, ipa) | public | not declared | 1/3 | `src/nova/tests/unit/virt/zvm/test_driver.py:L484–L486` |
| `TestZVMDriver.test_unpause` | method | (self, ipa) | public | not declared | 1/3 | `src/nova/tests/unit/virt/zvm/test_driver.py:L489–L491` |
| `TestZVMDriver.test_reboot_soft` | method | (self, ipa) | public | not declared | 1/3 | `src/nova/tests/unit/virt/zvm/test_driver.py:L494–L496` |
| `TestZVMDriver.test_reboot_hard` | method | (self, ipa) | public | not declared | 1/3 | `src/nova/tests/unit/virt/zvm/test_driver.py:L499–L501` |
| `TestZVMDriver.test_instance_exists` | method | (self, mock_list) | public | not declared | 1/6 | `src/nova/tests/unit/virt/zvm/test_driver.py:L504–L510` |
| `TestZVMDriver.test_get_console_output` | method | (self, call) | public | not declared | 1/5 | `src/nova/tests/unit/virt/zvm/test_driver.py:L513–L517` |
| `TestZVMDriver.test_update_provider_tree` | method | (self, call) | public | not declared | 1/37 | `src/nova/tests/unit/virt/zvm/test_driver.py:L520–L557` |

## Dependencies

- `import copy` (src/nova/tests/unit/virt/zvm/test_driver.py:L15)
- `import os` (src/nova/tests/unit/virt/zvm/test_driver.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/zvm/test_driver.py:L17)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/unit/virt/zvm/test_driver.py:L19)
- `nova.compute`: imports `provider_tree` (src/nova/tests/unit/virt/zvm/test_driver.py:L21)
- `nova`: imports `conf` (src/nova/tests/unit/virt/zvm/test_driver.py:L22)
- `nova`: imports `context` (src/nova/tests/unit/virt/zvm/test_driver.py:L23)
- `nova`: imports `exception` (src/nova/tests/unit/virt/zvm/test_driver.py:L24)
- `nova.network`: imports `model as network_model` (src/nova/tests/unit/virt/zvm/test_driver.py:L25)
- `nova`: imports `objects` (src/nova/tests/unit/virt/zvm/test_driver.py:L26)
- `nova`: imports `test` (src/nova/tests/unit/virt/zvm/test_driver.py:L27)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/virt/zvm/test_driver.py:L28)
- `nova.virt`: imports `fake` (src/nova/tests/unit/virt/zvm/test_driver.py:L29)
- `nova.virt.zvm`: imports `driver as zvmdriver` (src/nova/tests/unit/virt/zvm/test_driver.py:L30)

## Side Effects

- **file-io**: with mock.patch('os.path.exists', side_effect=[False]): (src/nova/tests/unit/virt/zvm/test_driver.py:L256)
- **file-io**: image_path = os.path.join(os.path.normpath( (src/nova/tests/unit/virt/zvm/test_driver.py:L366)
- **file-io**: image_path = os.path.join(os.path.normpath( (src/nova/tests/unit/virt/zvm/test_driver.py:L445)
- **global-mutation**: CONF = conf.CONF (src/nova/tests/unit/virt/zvm/test_driver.py:L33)

## Security Surface

- **sink** (`db-write`): image_service.update.assert_called_once_with(self._context, (src/nova/tests/unit/virt/zvm/test_driver.py:L376)
- **sink** (`db-write`): image_service.update.side_effect = exception.ImageNotAuthorized( (src/nova/tests/unit/virt/zvm/test_driver.py:L443)

