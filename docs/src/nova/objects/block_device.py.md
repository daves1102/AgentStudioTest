# src/nova/objects/block_device.py

## Overview

This file implements the `block_device` module, defining 2 classs, 4 constants, 2 fields, 4 functions, 28 methods, 6 propertys, 2 variables, 14 imports, 6 side effects.

Lines: total 504, code 356, comment 82, blank 66

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/objects/block_device.py:L32–L32` |
| `_BLOCK_DEVICE_OPTIONAL_JOINED_FIELD` | variable | — | unexported | not declared | — | `src/nova/objects/block_device.py:L35–L35` |
| `BLOCK_DEVICE_OPTIONAL_ATTRS` | constant | — | exported | not declared | — | `src/nova/objects/block_device.py:L36–L36` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/block_device.py:L38–L44` |
| `_expected_cols` | function | (expected_attrs) | unexported | `[attr for attr in expected_attrs if attr in _BLOCK_DEVICE_OPTIONAL_JOINED_FIELD]` (src/nova/objects/block_device.py:L48) | 3/3 | `src/nova/objects/block_device.py:L47–L49` |
| `BlockDeviceMapping` | class | — | exported | not declared | — | `src/nova/objects/block_device.py:L54–L387` |
| `BlockDeviceMapping.VERSION` | constant | — | public | not declared | — | `src/nova/objects/block_device.py:L81–L81` |
| `BlockDeviceMapping.fields` | field | — | public | not declared | — | `src/nova/objects/block_device.py:L83–L112` |
| `BlockDeviceMapping.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 10/15 | `src/nova/objects/block_device.py:L114–L128` |
| `BlockDeviceMapping.populate_uuids` | method | (cls, context, max_count) | public | `done, done` (src/nova/objects/block_device.py:L144) | 2/9 | `src/nova/objects/block_device.py:L131–L144` |
| `BlockDeviceMapping.populate_uuids.get_bdms_no_uuid` | function | (context) | public | `context.session.query(db_models.BlockDeviceMapping).\ filter_by(uuid=None).limit(max_count).all()` (src/nova/objects/block_device.py:L134) | — | `src/nova/objects/block_device.py:L133–L135` |
| `BlockDeviceMapping._create_uuid` | method | (context, bdm_id) | private | `uuid` (src/nova/objects/block_device.py:L182) | 2/15 | `src/nova/objects/block_device.py:L148–L182` |
| `BlockDeviceMapping._from_db_object` | method | (cls, context, block_device_obj, db_block_device, expected_attrs=None) | private | `block_device_obj` (src/nova/objects/block_device.py:L206) | 7/19 | `src/nova/objects/block_device.py:L185–L206` |
| `BlockDeviceMapping._create` | method | (self, context, update_or_create=False) | private | not declared | 4/15 | `src/nova/objects/block_device.py:L208–L237` |
| `BlockDeviceMapping.create` | method | (self) | public | not declared | 1/2 | `src/nova/objects/block_device.py:L240–L241` |
| `BlockDeviceMapping.update_or_create` | method | (self) | public | not declared | 1/2 | `src/nova/objects/block_device.py:L244–L245` |
| `BlockDeviceMapping.destroy` | method | (self) | public | not declared | 2/6 | `src/nova/objects/block_device.py:L248–L253` |
| `BlockDeviceMapping.save` | method | (self) | public | not declared | 3/11 | `src/nova/objects/block_device.py:L256–L266` |
| `BlockDeviceMapping.get_by_volume_id` | method | (cls, context, volume_id, instance_uuid=None, expected_attrs=None) | public | `cls._from_db_object(context, cls(), db_bdm, expected_attrs=expected_attrs)` (src/nova/objects/block_device.py:L291) | 6/19 | `src/nova/objects/block_device.py:L272–L292` |
| `BlockDeviceMapping.get_by_volume_and_instance` | method | (cls, context, volume_id, instance_uuid, expected_attrs=None) | public | `cls._from_db_object(context, cls(), db_bdm, expected_attrs=expected_attrs)` (src/nova/objects/block_device.py:L305) | 3/11 | `src/nova/objects/block_device.py:L296–L306` |
| `BlockDeviceMapping.get_by_volume` | method | (cls, context, volume_id, expected_attrs=None) | public | `cls._from_db_object(context, cls(), db_bdms[0], expected_attrs=expected_attrs)` (src/nova/objects/block_device.py:L319) | 4/11 | `src/nova/objects/block_device.py:L310–L320` |
| `BlockDeviceMapping.is_root` | method | (self) | public | `self.boot_index == 0` (src/nova/objects/block_device.py:L324) | 1/2 | `src/nova/objects/block_device.py:L323–L324` |
| `BlockDeviceMapping.is_volume` | method | (self) | public | `(self.destination_type == fields.BlockDeviceDestinationType.VOLUME)` (src/nova/objects/block_device.py:L328) | 1/3 | `src/nova/objects/block_device.py:L327–L329` |
| `BlockDeviceMapping.is_multiattach` | method | (self) | public | `False` (src/nova/objects/block_device.py:L343); `False` (src/nova/objects/block_device.py:L345); `False` (src/nova/objects/block_device.py:L347); `info.get("multiattach", False)` (src/nova/objects/block_device.py:L349) | 4/9 | `src/nova/objects/block_device.py:L332–L349` |
| `BlockDeviceMapping.is_image` | method | (self) | public | `self.source_type == fields.BlockDeviceSourceType.IMAGE` (src/nova/objects/block_device.py:L353) | 1/2 | `src/nova/objects/block_device.py:L352–L353` |
| `BlockDeviceMapping.is_local` | method | (self) | public | `(self.destination_type == fields.BlockDeviceDestinationType.LOCAL)` (src/nova/objects/block_device.py:L357) | 1/3 | `src/nova/objects/block_device.py:L356–L358` |
| `BlockDeviceMapping.get_image_mapping` | method | (self) | public | `blockdev.BlockDeviceDict(self).get_image_mapping()` (src/nova/objects/block_device.py:L361) | 1/2 | `src/nova/objects/block_device.py:L360–L361` |
| `BlockDeviceMapping.obj_load_attr` | method | (self, attrname) | public | not declared | 4/22 | `src/nova/objects/block_device.py:L364–L387` |
| `BlockDeviceMappingList` | class | — | exported | not declared | — | `src/nova/objects/block_device.py:L391–L491` |
| `BlockDeviceMappingList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/block_device.py:L411–L411` |
| `BlockDeviceMappingList.fields` | field | — | public | not declared | — | `src/nova/objects/block_device.py:L413–L415` |
| `BlockDeviceMappingList.instance_uuids` | method | (self) | public | `set( bdm.instance_uuid for bdm in self if bdm.obj_attr_is_set('instance_uuid') )` (src/nova/objects/block_device.py:L419) | 3/5 | `src/nova/objects/block_device.py:L418–L422` |
| `BlockDeviceMappingList.bdms_by_instance_uuid` | method | (cls, context, instance_uuids) | public | `base.obj_make_dict_of_lists( context, cls, bdms, 'instance_uuid')` (src/nova/objects/block_device.py:L427) | 1/4 | `src/nova/objects/block_device.py:L425–L428` |
| `BlockDeviceMappingList._db_block_device_mapping_get_all_by_instance_uuids` | method | (context, instance_uuids, use_slave=False) | private | `db.block_device_mapping_get_all_by_instance_uuids( context, instance_uuids)` (src/nova/objects/block_device.py:L434) | 1/4 | `src/nova/objects/block_device.py:L432–L435` |
| `BlockDeviceMappingList.get_by_instance_uuids` | method | (cls, context, instance_uuids, use_slave=False) | public | `base.obj_make_list(context, cls(), db_bdms or [])` (src/nova/objects/block_device.py:L442) | 2/4 | `src/nova/objects/block_device.py:L439–L442` |
| `BlockDeviceMappingList._db_block_device_mapping_get_all_by_instance` | method | (context, instance_uuid, use_slave=False) | private | `db.block_device_mapping_get_all_by_instance( context, instance_uuid)` (src/nova/objects/block_device.py:L448) | 1/4 | `src/nova/objects/block_device.py:L446–L449` |
| `BlockDeviceMappingList.get_by_instance_uuid` | method | (cls, context, instance_uuid, use_slave=False) | public | `base.obj_make_list(context, cls(), db_bdms or [])` (src/nova/objects/block_device.py:L456) | 2/4 | `src/nova/objects/block_device.py:L453–L456` |
| `BlockDeviceMappingList._db_block_device_mapping_get_all_by_volume` | method | (context, volume_id, use_slave=False) | private | `db.block_device_mapping_get_all_by_volume_id( context, volume_id)` (src/nova/objects/block_device.py:L462) | 1/4 | `src/nova/objects/block_device.py:L460–L463` |
| `BlockDeviceMappingList.get_by_volume` | method | (cls, context, volume_id, use_slave=False) | public | `base.obj_make_list(context, cls(), db_bdms)` (src/nova/objects/block_device.py:L472) | 2/6 | `src/nova/objects/block_device.py:L467–L472` |
| `BlockDeviceMappingList.root_bdm` | method | (self) | public | `next(bdm_obj for bdm_obj in self if bdm_obj.is_root)` (src/nova/objects/block_device.py:L489); `` (src/nova/objects/block_device.py:L491) | 5/7 | `src/nova/objects/block_device.py:L474–L491` |
| `block_device_make_list` | function | (context, db_list, **extra_args) | exported | `base.obj_make_list(context, objects.BlockDeviceMappingList(context), db_list, **extra_args)` (src/nova/objects/block_device.py:L495) | 1/5 | `src/nova/objects/block_device.py:L494–L498` |
| `block_device_make_list_from_dicts` | function | (context, bdm_dicts_list) | exported | `BlockDeviceMappingList(objects=bdm_objects)` (src/nova/objects/block_device.py:L504) | 2/4 | `src/nova/objects/block_device.py:L501–L504` |
| `BlockDeviceMapping.is_root` | property | — | public | not declared | — | `src/nova/objects/block_device.py:L322–L324` |
| `BlockDeviceMapping.is_volume` | property | — | public | not declared | — | `src/nova/objects/block_device.py:L326–L329` |
| `BlockDeviceMapping.is_multiattach` | property | — | public | not declared | — | `src/nova/objects/block_device.py:L331–L349` |
| `BlockDeviceMapping.is_image` | property | — | public | not declared | — | `src/nova/objects/block_device.py:L351–L353` |
| `BlockDeviceMapping.is_local` | property | — | public | not declared | — | `src/nova/objects/block_device.py:L355–L358` |
| `BlockDeviceMappingList.instance_uuids` | property | — | public | not declared | — | `src/nova/objects/block_device.py:L417–L422` |

## Dependencies

- `oslo_db`: imports `api as oslo_db_api` (src/nova/objects/block_device.py:L15)
- `oslo_db.sqlalchemy`: imports `update_match` (src/nova/objects/block_device.py:L16)
- `oslo_log`: imports `log as logging` (src/nova/objects/block_device.py:L17)
- `oslo_serialization`: imports `jsonutils` (src/nova/objects/block_device.py:L18)
- `oslo_utils`: imports `uuidutils` (src/nova/objects/block_device.py:L19)
- `oslo_utils`: imports `versionutils` (src/nova/objects/block_device.py:L20)
- `nova`: imports `block_device as blockdev` (src/nova/objects/block_device.py:L22)
- `nova.db.main`: imports `api as db` (src/nova/objects/block_device.py:L23)
- `nova.db.main`: imports `models as db_models` (src/nova/objects/block_device.py:L24)
- `nova`: imports `exception` (src/nova/objects/block_device.py:L25)
- `nova.i18n`: imports `_` (src/nova/objects/block_device.py:L26)
- `nova`: imports `objects` (src/nova/objects/block_device.py:L27)
- `nova.objects`: imports `base` (src/nova/objects/block_device.py:L28)
- `nova.objects`: imports `fields` (src/nova/objects/block_device.py:L29)

## Side Effects

- **network**: return context.session.query(db_models.BlockDeviceMapping).\ (src/nova/objects/block_device.py:L134)
- **network**: query = context.session.query(db_models.BlockDeviceMapping).\ (src/nova/objects/block_device.py:L170)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/objects/block_device.py:L32)
- **global-mutation**: BLOCK_DEVICE_OPTIONAL_ATTRS = _BLOCK_DEVICE_OPTIONAL_JOINED_FIELD (src/nova/objects/block_device.py:L36)
- **global-mutation**: VERSION = '1.21' (src/nova/objects/block_device.py:L81)
- **global-mutation**: VERSION = '1.18' (src/nova/objects/block_device.py:L411)

