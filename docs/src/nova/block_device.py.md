# src/nova/block_device.py

## Overview

This file implements the `block_device` module, defining 1 class, 2 classmethods, 4 constants, 3 fields, 30 functions, 6 methods, 9 variables, 10 imports, 4 side effects, 5 security surface entries.

Lines: total 695, code 468, comment 77, blank 150

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/block_device.py:L29–L29` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/block_device.py:L30–L30` |
| `DEFAULT_ROOT_DEV_NAME` | constant | — | exported | not declared | — | `src/nova/block_device.py:L32–L32` |
| `_DEFAULT_MAPPINGS` | variable | — | unexported | not declared | — | `src/nova/block_device.py:L33–L36` |
| `VIM_IMAGE_ATTRIBUTES` | constant | — | exported | not declared | — | `src/nova/block_device.py:L40–L43` |
| `bdm_legacy_fields` | variable | — | exported | not declared | — | `src/nova/block_device.py:L45–L48` |
| `bdm_new_fields` | variable | — | exported | not declared | — | `src/nova/block_device.py:L51–L57` |
| `bdm_db_only_fields` | variable | — | exported | not declared | — | `src/nova/block_device.py:L60–L60` |
| `bdm_db_inherited_fields` | variable | — | exported | not declared | — | `src/nova/block_device.py:L63–L64` |
| `BlockDeviceDict` | class | — | exported | not declared | — | `src/nova/block_device.py:L67–L260` |
| `BlockDeviceDict._fields` | field | — | private | not declared | — | `src/nova/block_device.py:L70–L70` |
| `BlockDeviceDict._db_only_fields` | field | — | private | not declared | — | `src/nova/block_device.py:L71–L72` |
| `BlockDeviceDict._required_fields` | field | — | private | not declared | — | `src/nova/block_device.py:L74–L74` |
| `BlockDeviceDict.__init__` | method | (self, bdm_dict=None, do_not_default=None, **kwargs) | public | not declared | 5/12 | `src/nova/block_device.py:L76–L90` |
| `BlockDeviceDict._validate` | method | (self, bdm_dict) | private | `` (src/nova/block_device.py:L104) | 10/26 | `src/nova/block_device.py:L92–L127` |
| `BlockDeviceDict.from_legacy` | method | (cls, legacy_bdm) | public | `cls(new_bdm, non_computable_fields)` (src/nova/block_device.py:L172) | 8/29 | `src/nova/block_device.py:L130–L172` |
| `BlockDeviceDict.from_api` | method | (cls, api_dict, image_uuid_specified) | public | `cls(api_dict)` (src/nova/block_device.py:L223) | 15/32 | `src/nova/block_device.py:L175–L223` |
| `BlockDeviceDict.legacy` | method | (self) | public | `legacy_block_device` (src/nova/block_device.py:L252) | 9/21 | `src/nova/block_device.py:L225–L252` |
| `BlockDeviceDict.get_image_mapping` | method | (self) | public | `mapping_dict` (src/nova/block_device.py:L260) | 2/7 | `src/nova/block_device.py:L254–L260` |
| `is_safe_for_update` | function | (block_device_dict) | exported | `fields <= (bdm_new_fields \| bdm_db_inherited_fields \| bdm_db_only_fields)` (src/nova/block_device.py:L271) | 1/5 | `src/nova/block_device.py:L263–L273` |
| `create_image_bdm` | function | (image_ref, boot_index=0) | exported | `BlockDeviceDict( {'source_type': 'image', 'image_id': image_ref, 'delete_on_termination': True, 'boot_index': boot_index, 'device_type': 'disk', 'destination_type': 'local'})` (src/nova/block_device.py:L282) | 1/8 | `src/nova/block_device.py:L276–L288` |
| `create_blank_bdm` | function | (size, guest_format=None) | exported | `BlockDeviceDict( {'source_type': 'blank', 'delete_on_termination': True, 'device_type': 'disk', 'boot_index': -1, 'destination_type': 'local', 'guest_format': guest_format, 'volume_size': size})` (src/nova/block_device.py:L292) | 1/9 | `src/nova/block_device.py:L291–L299` |
| `snapshot_from_bdm` | function | (snapshot_id, template) | exported | `BlockDeviceDict(snapshot_dict)` (src/nova/block_device.py:L313) | 2/10 | `src/nova/block_device.py:L302–L313` |
| `from_legacy_mapping` | function | (legacy_block_device_mapping, image_uuid='', root_device_name=None, no_root=False) | exported | `new_bdms` (src/nova/block_device.py:L328); `([image_bdm] if image_bdm else []) + new_bdms` (src/nova/block_device.py:L356) | 17/29 | `src/nova/block_device.py:L316–L356` |
| `properties_root_device_name` | function | (properties) | exported | `root_device_name` (src/nova/block_device.py:L375) | 4/8 | `src/nova/block_device.py:L359–L375` |
| `validate_device_name` | function | (value) | exported | not declared | 3/10 | `src/nova/block_device.py:L378–L391` |
| `validate_and_default_volume_size` | function | (bdm) | exported | not declared | 3/8 | `src/nova/block_device.py:L394–L404` |
| `_ephemeral` | variable | — | unexported | not declared | — | `src/nova/block_device.py:L407–L407` |
| `is_ephemeral` | function | (device_name) | exported | `_ephemeral.match(device_name) is not None` (src/nova/block_device.py:L411) | 1/2 | `src/nova/block_device.py:L410–L411` |
| `ephemeral_num` | function | (ephemeral_name) | exported | `int(_ephemeral.sub('\\1', ephemeral_name))` (src/nova/block_device.py:L416) | 1/3 | `src/nova/block_device.py:L414–L416` |
| `is_swap_or_ephemeral` | function | (device_name) | exported | `(device_name and (device_name == 'swap' or is_ephemeral(device_name)))` (src/nova/block_device.py:L420) | 3/3 | `src/nova/block_device.py:L419–L421` |
| `new_format_is_swap` | function | (bdm) | exported | `True` (src/nova/block_device.py:L428); `False` (src/nova/block_device.py:L429) | 4/6 | `src/nova/block_device.py:L424–L429` |
| `new_format_is_ephemeral` | function | (bdm) | exported | `True` (src/nova/block_device.py:L436); `False` (src/nova/block_device.py:L437) | 4/6 | `src/nova/block_device.py:L432–L437` |
| `get_root_bdm` | function | (bdms) | exported | `next(bdm for bdm in bdms if bdm.get('boot_index', -1) == 0)` (src/nova/block_device.py:L442); `None` (src/nova/block_device.py:L444) | 4/5 | `src/nova/block_device.py:L440–L444` |
| `get_bdms_to_connect` | function | (bdms, exclude_root_mapping=False) | exported | `(bdm for bdm in bdms if bdm.get('boot_index', -1) != 0 or not exclude_root_mapping)` (src/nova/block_device.py:L451) | 4/3 | `src/nova/block_device.py:L447–L452` |
| `mappings_prepend_dev` | function | (mappings) | exported | `mappings` (src/nova/block_device.py:L462) | 4/7 | `src/nova/block_device.py:L455–L462` |
| `_dev` | variable | — | unexported | not declared | — | `src/nova/block_device.py:L465–L465` |
| `strip_dev` | function | (device_name) | exported | `_dev.sub('', device_name) if device_name else device_name` (src/nova/block_device.py:L470) | 2/2 | `src/nova/block_device.py:L468–L470` |
| `prepend_dev` | function | (device_name) | exported | `device_name and '/dev/' + strip_dev(device_name)` (src/nova/block_device.py:L475) | 2/2 | `src/nova/block_device.py:L473–L475` |
| `_pref` | variable | — | unexported | not declared | — | `src/nova/block_device.py:L478–L478` |
| `strip_prefix` | function | (device_name) | exported | `_pref.sub('', device_name) if device_name else device_name` (src/nova/block_device.py:L484) | 2/3 | `src/nova/block_device.py:L481–L484` |
| `_nums` | variable | — | unexported | not declared | — | `src/nova/block_device.py:L487–L487` |
| `get_device_letter` | function | (device_name) | exported | `_nums.sub('', letter) if device_name else device_name` (src/nova/block_device.py:L494) | 2/3 | `src/nova/block_device.py:L490–L494` |
| `generate_device_letter` | function | (index) | exported | `unit_dev_name` (src/nova/block_device.py:L510) | 2/8 | `src/nova/block_device.py:L497–L510` |
| `generate_device_name` | function | (prefix, index) | exported | `prefix + generate_device_letter(index)` (src/nova/block_device.py:L520) | 1/2 | `src/nova/block_device.py:L513–L520` |
| `instance_block_mapping` | function | (instance, bdms) | exported | `_DEFAULT_MAPPINGS` (src/nova/block_device.py:L526); `mappings` (src/nova/block_device.py:L569) | 16/33 | `src/nova/block_device.py:L523–L569` |
| `match_device` | function | (device) | exported | `None` (src/nova/block_device.py:L576); `match.groups()` (src/nova/block_device.py:L577) | 2/5 | `src/nova/block_device.py:L572–L577` |
| `volume_in_mapping` | function | (mount_device, block_device_info) | exported | `strip_dev(mount_device) in block_device_list` (src/nova/block_device.py:L596) | 4/14 | `src/nova/block_device.py:L580–L596` |
| `get_bdm_ephemeral_disk_size` | function | (block_device_mappings) | exported | `sum(bdm.get('volume_size', 0) for bdm in block_device_mappings if new_format_is_ephemeral(bdm))` (src/nova/block_device.py:L600) | 3/4 | `src/nova/block_device.py:L599–L602` |
| `get_bdm_swap_list` | function | (block_device_mappings) | exported | `[bdm for bdm in block_device_mappings if new_format_is_swap(bdm)]` (src/nova/block_device.py:L606) | 3/3 | `src/nova/block_device.py:L605–L607` |
| `get_bdm_local_disk_num` | function | (block_device_mappings) | exported | `len([bdm for bdm in block_device_mappings if bdm.get('destination_type') == 'local'])` (src/nova/block_device.py:L611) | 3/3 | `src/nova/block_device.py:L610–L612` |
| `get_bdm_image_metadata` | function | (context, image_api, volume_api, block_device_mapping, legacy_bdm=True) | exported | `{}` (src/nova/block_device.py:L629); `image_meta` (src/nova/block_device.py:L652); `get_image_metadata_from_volume(volume)` (src/nova/block_device.py:L666); `{}` (src/nova/block_device.py:L667) | 14/34 | `src/nova/block_device.py:L615–L667` |
| `get_image_metadata_from_volume` | function | (volume) | exported | `image_meta` (src/nova/block_device.py:L695) | 4/10 | `src/nova/block_device.py:L670–L695` |
| `BlockDeviceDict.from_legacy` | classmethod | — | public | not declared | — | `src/nova/block_device.py:L129–L172` |
| `BlockDeviceDict.from_api` | classmethod | — | public | not declared | — | `src/nova/block_device.py:L174–L223` |

## Dependencies

- `import copy` (src/nova/block_device.py:L16)
- `import re` (src/nova/block_device.py:L17)
- `oslo_log`: imports `log as logging` (src/nova/block_device.py:L19)
- `oslo_utils`: imports `strutils` (src/nova/block_device.py:L20)
- `oslo_utils`: imports `units` (src/nova/block_device.py:L21)
- `import nova.conf` (src/nova/block_device.py:L23)
- `nova`: imports `exception` (src/nova/block_device.py:L24)
- `nova.i18n`: imports `_` (src/nova/block_device.py:L25)
- `nova`: imports `utils` (src/nova/block_device.py:L26)
- `nova.virt`: imports `driver` (src/nova/block_device.py:L27)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/block_device.py:L29)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/block_device.py:L30)
- **global-mutation**: DEFAULT_ROOT_DEV_NAME = '/dev/sda1' (src/nova/block_device.py:L32)
- **global-mutation**: VIM_IMAGE_ATTRIBUTES = ( (src/nova/block_device.py:L40)

## Security Surface

- **sink** (`db-write`): bdm_dict.update(kwargs) (src/nova/block_device.py:L80)
- **sink** (`db-write`): self.update({field: None for field in self._fields - do_not_default}) (src/nova/block_device.py:L89)
- **sink** (`db-write`): self.update(bdm_dict.items()) (src/nova/block_device.py:L90)
- **sink** (`db-write`): """Determine if passed dict is a safe subset for update. (src/nova/block_device.py:L264)
- **sink** (`db-write`): and new versions of data, that can be passed to an UPDATE query (src/nova/block_device.py:L267)

