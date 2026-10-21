# src/nova/tests/unit/api/openstack/compute/test_disk_config.py

## Overview

This file implements the `test_disk_config` module, defining 1 class, 3 constants, 1 field, 6 functions, 25 methods, 12 imports, 7 side effects.

Lines: total 423, code 342, comment 18, blank 63

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `MANUAL_INSTANCE_UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L32–L32` |
| `AUTO_INSTANCE_UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L33–L33` |
| `API_DISK_CONFIG` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L35–L35` |
| `DiskConfigTestCaseV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L38–L423` |
| `DiskConfigTestCaseV21.project_id` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L39–L39` |
| `DiskConfigTestCaseV21.setUp` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L41–L91` |
| `DiskConfigTestCaseV21.setUp.fake_instance_get` | function | (_self, context, server_id, *args, **kwargs) | public | `instance` (src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L62) | — | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L59–L63` |
| `DiskConfigTestCaseV21.setUp.fake_rebuild` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L69–L70` |
| `DiskConfigTestCaseV21.setUp.fake_instance_create` | function | (context, inst_, session=None) | public | `inst` (src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L89) | — | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L74–L89` |
| `DiskConfigTestCaseV21._set_up_app` | method | (self) | private | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L93–L94` |
| `DiskConfigTestCaseV21._get_expected_msg_for_invalid_disk_config` | method | (self) | private | `('{{"badRequest": {{"message": "Invalid input for' ' field/attribute {0}. Value: {1}. \'{1}\' is' ' not one of [\'AUTO\', \'MANUAL\']", "code": 400}}}}')` (src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L97) | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L96–L99` |
| `DiskConfigTestCaseV21._setup_fake_image_service` | method | (self) | private | not declared | 1/16 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L101–L116` |
| `DiskConfigTestCaseV21.assertDiskConfig` | method | (self, dict_, value) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L118–L120` |
| `DiskConfigTestCaseV21.test_show_server` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L122–L133` |
| `DiskConfigTestCaseV21.test_detail_servers` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L135–L142` |
| `DiskConfigTestCaseV21.test_show_image` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L144–L159` |
| `DiskConfigTestCaseV21.test_detail_image` | method | (self) | public | not declared | 3/8 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L161–L171` |
| `DiskConfigTestCaseV21.test_create_server_override_auto` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L173–L187` |
| `DiskConfigTestCaseV21.test_create_server_override_manual` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L189–L203` |
| `DiskConfigTestCaseV21.test_create_server_detect_from_image` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L205–L235` |
| `DiskConfigTestCaseV21.test_create_server_detect_from_image_disabled_goes_to_manual` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L237–L250` |
| `DiskConfigTestCaseV21.test_create_server_errors_when_disabled_and_auto` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L252–L265` |
| `DiskConfigTestCaseV21.test_create_server_when_disabled_and_manual` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L267–L281` |
| `DiskConfigTestCaseV21._test_update_server_disk_config` | method | (self, uuid, disk_config, get_instance_mock) | private | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L284–L301` |
| `DiskConfigTestCaseV21.test_update_server_override_auto` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L303–L304` |
| `DiskConfigTestCaseV21.test_update_server_override_manual` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L306–L307` |
| `DiskConfigTestCaseV21.test_update_server_invalid_disk_config` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L309–L323` |
| `DiskConfigTestCaseV21._test_rebuild_server_disk_config` | method | (self, uuid, disk_config, get_instance_mock) | private | not declared | 1/21 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L326–L346` |
| `DiskConfigTestCaseV21.test_rebuild_server_override_auto` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L348–L349` |
| `DiskConfigTestCaseV21.test_rebuild_server_override_manual` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L351–L352` |
| `DiskConfigTestCaseV21.test_create_server_with_auto_disk_config` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L354–L376` |
| `DiskConfigTestCaseV21.test_create_server_with_auto_disk_config.create` | function | (*args, **kwargs) | public | `old_create(*args, **kwargs)` (src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L369) | — | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L366–L369` |
| `DiskConfigTestCaseV21.test_rebuild_server_with_auto_disk_config` | method | (self, get_instance_mock) | public | not declared | 1/21 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L379–L404` |
| `DiskConfigTestCaseV21.test_rebuild_server_with_auto_disk_config.rebuild` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L395–L397` |
| `DiskConfigTestCaseV21.test_resize_server_with_auto_disk_config` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L406–L423` |
| `DiskConfigTestCaseV21.test_resize_server_with_auto_disk_config.resize` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L416–L418` |

## Dependencies

- `import datetime` (src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L17)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L19)
- `nova.api.openstack`: imports `compute` (src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L21)
- `nova.compute`: imports `api as compute_api` (src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L22)
- `nova`: imports `context as nova_context` (src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L23)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L24)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L25)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L26)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L27)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L28)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L29)

## Side Effects

- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L283)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L325)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L378)
- **global-mutation**: MANUAL_INSTANCE_UUID = fakes.FAKE_UUID (src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L32)
- **global-mutation**: AUTO_INSTANCE_UUID = fakes.FAKE_UUID.replace('a', 'b') (src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L33)
- **global-mutation**: API_DISK_CONFIG = 'OS-DCF:diskConfig' (src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L35)
- **global-mutation**: FAKE_INSTANCES = [ (src/nova/tests/unit/api/openstack/compute/test_disk_config.py:L50)

