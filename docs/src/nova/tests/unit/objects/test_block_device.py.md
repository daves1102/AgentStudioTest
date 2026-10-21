# src/nova/tests/unit/objects/test_block_device.py

## Overview

This file implements the `test_block_device` module, defining 8 classs, 54 methods, 12 imports, 1 security surface entry.

Lines: total 613, code 479, comment 36, blank 98

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_TestBlockDeviceMappingObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_block_device.py:L31–L347` |
| `_TestBlockDeviceMappingObject.fake_bdm` | method | (self, instance=None) | public | `fake_bdm` (src/nova/tests/unit/objects/test_block_device.py:L48) | 4/17 | `src/nova/tests/unit/objects/test_block_device.py:L32–L48` |
| `_TestBlockDeviceMappingObject.test_save` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_block_device.py:L50–L61` |
| `_TestBlockDeviceMappingObject.test_save_instance_changed` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_block_device.py:L63–L67` |
| `_TestBlockDeviceMappingObject.test_save_not_found` | method | (self, bdm_update) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_block_device.py:L70–L73` |
| `_TestBlockDeviceMappingObject.test_get_by_volume_id` | method | (self, get_by_vol_id) | public | not declared | 2/7 | `src/nova/tests/unit/objects/test_block_device.py:L76–L86` |
| `_TestBlockDeviceMappingObject.test_get_by_volume_id_not_found` | method | (self, get_by_vol_id) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_block_device.py:L89–L94` |
| `_TestBlockDeviceMappingObject.test_get_by_volume_instance_uuid_mismatch` | method | (self, get_by_vol_id) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_block_device.py:L97–L104` |
| `_TestBlockDeviceMappingObject.test_get_by_volume_id_with_expected` | method | (self, get_by_vol_id) | public | not declared | 2/9 | `src/nova/tests/unit/objects/test_block_device.py:L107–L116` |
| `_TestBlockDeviceMappingObject.test_get_by_volume_returned_single` | method | (self, get_all) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_block_device.py:L119–L124` |
| `_TestBlockDeviceMappingObject.test_get_by_volume_returned_multiple` | method | (self, get_all) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_block_device.py:L127–L133` |
| `_TestBlockDeviceMappingObject.test_get_by_instance_and_volume_id` | method | (self, mock_get) | public | not declared | 2/8 | `src/nova/tests/unit/objects/test_block_device.py:L137–L145` |
| `_TestBlockDeviceMappingObject.test_test_get_by_instance_and_volume_id_with_expected` | method | (self, mock_get) | public | not declared | 2/11 | `src/nova/tests/unit/objects/test_block_device.py:L149–L160` |
| `_TestBlockDeviceMappingObject.test_get_by_instance_and_volume_id_not_found` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_block_device.py:L164–L170` |
| `_TestBlockDeviceMappingObject._test_create_mocked` | method | (self, update_or_create=False) | private | not declared | 3/25 | `src/nova/tests/unit/objects/test_block_device.py:L172–L198` |
| `_TestBlockDeviceMappingObject.test_create` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_block_device.py:L200–L201` |
| `_TestBlockDeviceMappingObject.test_update_or_create` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_block_device.py:L203–L204` |
| `_TestBlockDeviceMappingObject.test_create_fails` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_block_device.py:L206–L214` |
| `_TestBlockDeviceMappingObject.test_create_fails_instance` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_block_device.py:L216–L223` |
| `_TestBlockDeviceMappingObject.test_destroy` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_block_device.py:L225–L232` |
| `_TestBlockDeviceMappingObject.test_is_image_true` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_block_device.py:L234–L237` |
| `_TestBlockDeviceMappingObject.test_is_image_false` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_block_device.py:L239–L242` |
| `_TestBlockDeviceMappingObject.test_is_volume_true` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_block_device.py:L244–L247` |
| `_TestBlockDeviceMappingObject.test_is_volume_false` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_block_device.py:L249–L252` |
| `_TestBlockDeviceMappingObject.test_is_mutiattach_true` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_block_device.py:L254–L259` |
| `_TestBlockDeviceMappingObject.test_is_multiattach_false` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_block_device.py:L261–L265` |
| `_TestBlockDeviceMappingObject.test_is_local` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_block_device.py:L267–L273` |
| `_TestBlockDeviceMappingObject.test_obj_load_attr_not_instance` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_block_device.py:L275–L281` |
| `_TestBlockDeviceMappingObject.test_obj_load_attr_orphaned` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_block_device.py:L283–L289` |
| `_TestBlockDeviceMappingObject.test_obj_load_attr_instance` | method | (self, mock_inst_get_by_uuid) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_block_device.py:L293–L298` |
| `_TestBlockDeviceMappingObject.test_obj_load_attr_encrypted` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_block_device.py:L300–L303` |
| `_TestBlockDeviceMappingObject.test_obj_make_compatible_pre_1_17` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_block_device.py:L305–L315` |
| `_TestBlockDeviceMappingObject.test_obj_make_compatible_pre_1_18` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_block_device.py:L317–L326` |
| `_TestBlockDeviceMappingObject.test_obj_make_compatible_pre_1_19` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_block_device.py:L328–L336` |
| `_TestBlockDeviceMappingObject.test_obj_make_compatible_pre_1_20` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_block_device.py:L338–L347` |
| `TestBlockDeviceMappingUUIDMigration` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_block_device.py:L350–L456` |
| `TestBlockDeviceMappingUUIDMigration.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_block_device.py:L351–L357` |
| `TestBlockDeviceMappingUUIDMigration._create_legacy_bdm` | method | (context, deleted=False) | private | `bdm_ref` (src/nova/tests/unit/objects/test_block_device.py:L371) | 2/8 | `src/nova/tests/unit/objects/test_block_device.py:L361–L371` |
| `TestBlockDeviceMappingUUIDMigration.test_populate_uuid` | method | (self, mock_create_uuid) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_block_device.py:L374–L390` |
| `TestBlockDeviceMappingUUIDMigration.test_create_uuid_race` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_block_device.py:L392–L417` |
| `TestBlockDeviceMappingUUIDMigration._assert_online_migration` | method | (self, expected_total, expected_done, limit=10) | private | not declared | 1/6 | `src/nova/tests/unit/objects/test_block_device.py:L419–L424` |
| `TestBlockDeviceMappingUUIDMigration.test_online_migration` | method | (self) | public | not declared | 3/19 | `src/nova/tests/unit/objects/test_block_device.py:L426–L456` |
| `TestBlockDeviceMappingObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_block_device.py:L459–L461` |
| `TestRemoteBlockDeviceMappingObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_block_device.py:L464–L466` |
| `_TestBlockDeviceMappingListObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_block_device.py:L469–L585` |
| `_TestBlockDeviceMappingListObject.fake_bdm` | method | (self, bdm_id, boot_index=-1, instance_uuid=uuids.instance) | public | `fake_bdm` (src/nova/tests/unit/objects/test_block_device.py:L482) | 1/13 | `src/nova/tests/unit/objects/test_block_device.py:L470–L482` |
| `_TestBlockDeviceMappingListObject.test_bdms_by_instance_uuid` | method | (self, get_all_by_inst_uuids) | public | not declared | 2/11 | `src/nova/tests/unit/objects/test_block_device.py:L485–L495` |
| `_TestBlockDeviceMappingListObject.test_bdms_by_instance_uuid_no_result` | method | (self, get_all_by_inst_uuids) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_block_device.py:L498–L502` |
| `_TestBlockDeviceMappingListObject.test_get_by_instance_uuids` | method | (self, get_all_by_inst_uuids) | public | not declared | 2/8 | `src/nova/tests/unit/objects/test_block_device.py:L505–L512` |
| `_TestBlockDeviceMappingListObject.test_get_by_instance_uuids_no_result` | method | (self, get_all_by_inst_uuids) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_block_device.py:L515–L519` |
| `_TestBlockDeviceMappingListObject.test_get_by_instance_uuid` | method | (self, get_all_by_inst) | public | not declared | 2/8 | `src/nova/tests/unit/objects/test_block_device.py:L522–L529` |
| `_TestBlockDeviceMappingListObject.test_get_by_instance_uuid_no_result` | method | (self, get_all_by_inst) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_block_device.py:L532–L536` |
| `_TestBlockDeviceMappingListObject.test_root_bdm` | method | (self, get_all_by_inst) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_block_device.py:L539–L544` |
| `_TestBlockDeviceMappingListObject.test_root_bdm_empty_bdm_list` | method | (self, get_all_by_inst) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_block_device.py:L547–L551` |
| `_TestBlockDeviceMappingListObject.test_root_bdm_undefined` | method | (self, get_all_by_inst) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_block_device.py:L554–L562` |
| `_TestBlockDeviceMappingListObject.test_get_by_volume` | method | (self, get_all_by_volume_id) | public | not declared | 2/11 | `src/nova/tests/unit/objects/test_block_device.py:L565–L575` |
| `_TestBlockDeviceMappingListObject.test_get_by_volume_no_result` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_block_device.py:L579–L585` |
| `TestBlockDeviceMappingListObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_block_device.py:L588–L590` |
| `TestRemoteBlockDeviceMappingListObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_block_device.py:L593–L595` |
| `TestBlockDeviceUtils` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_block_device.py:L598–L613` |
| `TestBlockDeviceUtils.test_make_list_from_dicts` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_block_device.py:L599–L607` |
| `TestBlockDeviceUtils.test_make_list_from_dicts_empty` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_block_device.py:L609–L613` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_block_device.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/objects/test_block_device.py:L17)
- `nova`: imports `context` (src/nova/tests/unit/objects/test_block_device.py:L19)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/objects/test_block_device.py:L20)
- `nova.db.main`: imports `models as db_models` (src/nova/tests/unit/objects/test_block_device.py:L21)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_block_device.py:L22)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_block_device.py:L23)
- `nova.objects`: imports `block_device as block_device_obj` (src/nova/tests/unit/objects/test_block_device.py:L24)
- `nova`: imports `test` (src/nova/tests/unit/objects/test_block_device.py:L25)
- `nova.tests.unit`: imports `fake_block_device` (src/nova/tests/unit/objects/test_block_device.py:L26)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/objects/test_block_device.py:L27)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_block_device.py:L28)

## Security Surface

- **sink** (`db-write`): bdm_ref.update(values) (src/nova/tests/unit/objects/test_block_device.py:L365)

