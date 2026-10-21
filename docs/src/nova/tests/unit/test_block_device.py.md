# src/nova/tests/unit/test_block_device.py

## Overview

This file implements the `test_block_device` module, defining 4 classs, 5 functions, 49 methods, 12 imports, 2 side effects.

Lines: total 865, code 743, comment 22, blank 100

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BlockDeviceTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_block_device.py:L36–L268` |
| `BlockDeviceTestCase.setUp` | method | (self) | public | not declared | 1/38 | `src/nova/tests/unit/test_block_device.py:L37–L75` |
| `BlockDeviceTestCase.test_properties` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/test_block_device.py:L77–L91` |
| `BlockDeviceTestCase.test_ephemeral` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/test_block_device.py:L93–L111` |
| `BlockDeviceTestCase.test_mappings_prepend_dev` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/test_block_device.py:L113–L132` |
| `BlockDeviceTestCase.test_strip_dev` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_block_device.py:L134–L137` |
| `BlockDeviceTestCase.test_strip_prefix` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_block_device.py:L139–L145` |
| `BlockDeviceTestCase.test_get_device_letter` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_block_device.py:L147–L156` |
| `BlockDeviceTestCase.test_generate_device_name` | method | (self) | public | not declared | 2/13 | `src/nova/tests/unit/test_block_device.py:L158–L170` |
| `BlockDeviceTestCase.test_volume_in_mapping` | method | (self) | public | not declared | 1/29 | `src/nova/tests/unit/test_block_device.py:L172–L205` |
| `BlockDeviceTestCase.test_volume_in_mapping._assert_volume_in_mapping` | function | (device_name, true_or_false) | private | not declared | — | `src/nova/tests/unit/test_block_device.py:L193–L196` |
| `BlockDeviceTestCase.test_get_root_bdm` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/test_block_device.py:L207–L218` |
| `BlockDeviceTestCase.test_get_bdm_ephemeral_disk_size` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_block_device.py:L220–L222` |
| `BlockDeviceTestCase.test_get_bdm_swap_list` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_block_device.py:L224–L227` |
| `BlockDeviceTestCase.test_get_bdm_local_disk_num` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_block_device.py:L229–L231` |
| `BlockDeviceTestCase.test_new_format_is_swap` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/test_block_device.py:L233–L237` |
| `BlockDeviceTestCase.test_new_format_is_ephemeral` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/test_block_device.py:L239–L243` |
| `BlockDeviceTestCase.test_validate_device_name` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/test_block_device.py:L245–L249` |
| `BlockDeviceTestCase.test_validate_and_default_volume_size` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/test_block_device.py:L251–L257` |
| `BlockDeviceTestCase.test_get_bdms_to_connect` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_block_device.py:L259–L268` |
| `TestBlockDeviceDict` | class | — | exported | not declared | — | `src/nova/tests/unit/test_block_device.py:L271–L691` |
| `TestBlockDeviceDict.setUp` | method | (self) | public | not declared | 1/110 | `src/nova/tests/unit/test_block_device.py:L272–L387` |
| `TestBlockDeviceDict.test_init` | method | (self) | public | not declared | 1/35 | `src/nova/tests/unit/test_block_device.py:L389–L434` |
| `TestBlockDeviceDict.test_init.fake_validate` | function | (obj, dct) | public | not declared | — | `src/nova/tests/unit/test_block_device.py:L390–L391` |
| `TestBlockDeviceDict.test_init_prepend_dev_to_device_name` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/test_block_device.py:L436–L452` |
| `TestBlockDeviceDict.test_init_boolify_delete_on_termination` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_block_device.py:L454–L464` |
| `TestBlockDeviceDict.test_validate` | method | (self) | public | not declared | 1/39 | `src/nova/tests/unit/test_block_device.py:L466–L512` |
| `TestBlockDeviceDict.test_from_legacy` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/test_block_device.py:L514–L518` |
| `TestBlockDeviceDict.test_from_legacy_mapping` | method | (self) | public | not declared | 2/27 | `src/nova/tests/unit/test_block_device.py:L520–L556` |
| `TestBlockDeviceDict.test_from_legacy_mapping._get_image_bdms` | function | (bdms) | private | `[bdm for bdm in bdms if bdm['source_type'] == 'image']` (src/nova/tests/unit/test_block_device.py:L522) | — | `src/nova/tests/unit/test_block_device.py:L521–L522` |
| `TestBlockDeviceDict.test_from_legacy_mapping._get_bootable_bdms` | function | (bdms) | private | `[bdm for bdm in bdms if (bdm['boot_index'] is not None and bdm['boot_index'] >= 0)]` (src/nova/tests/unit/test_block_device.py:L525) | — | `src/nova/tests/unit/test_block_device.py:L524–L527` |
| `TestBlockDeviceDict.test_from_api` | method | (self) | public | not declared | 3/8 | `src/nova/tests/unit/test_block_device.py:L558–L565` |
| `TestBlockDeviceDict.test_from_api_invalid_blank_id` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_block_device.py:L567–L576` |
| `TestBlockDeviceDict.test_from_api_invalid_source_to_local_mapping` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_block_device.py:L578–L585` |
| `TestBlockDeviceDict.test_from_api_valid_source_to_local_mapping` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/test_block_device.py:L587–L603` |
| `TestBlockDeviceDict.test_from_api_valid_source_to_local_mapping_with_string_bi` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/test_block_device.py:L605–L621` |
| `TestBlockDeviceDict.test_from_api_invalid_image_to_destination_local_mapping` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/test_block_device.py:L623–L633` |
| `TestBlockDeviceDict.test_from_api_invalid_volume_type_to_destination_local_mapping` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/test_block_device.py:L635–L645` |
| `TestBlockDeviceDict.test_from_api_invalid_specify_volume_type_with_source_volume_mapping` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/test_block_device.py:L647–L658` |
| `TestBlockDeviceDict.test_image_mapping` | method | (self) | public | not declared | 3/8 | `src/nova/tests/unit/test_block_device.py:L660–L667` |
| `TestBlockDeviceDict._test_snapshot_from_bdm` | method | (self, template) | private | not declared | 2/11 | `src/nova/tests/unit/test_block_device.py:L669–L679` |
| `TestBlockDeviceDict.test_snapshot_from_bdm` | method | (self) | public | not declared | 2/3 | `src/nova/tests/unit/test_block_device.py:L681–L683` |
| `TestBlockDeviceDict.test_snapshot_from_object` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/test_block_device.py:L685–L691` |
| `GetBDMImageMetadataTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_block_device.py:L694–L827` |
| `GetBDMImageMetadataTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_block_device.py:L696–L699` |
| `GetBDMImageMetadataTestCase._test_get_bdm_image_metadata__bootable` | method | (self, is_bootable=False) | private | not declared | 2/31 | `src/nova/tests/unit/test_block_device.py:L701–L735` |
| `GetBDMImageMetadataTestCase._test_get_bdm_image_metadata__bootable.get_vol_data` | function | (*args, **kwargs) | public | `{'bootable': is_bootable}` (src/nova/tests/unit/test_block_device.py:L718) | — | `src/nova/tests/unit/test_block_device.py:L717–L718` |
| `GetBDMImageMetadataTestCase.test_get_bdm_image_metadata__non_bootable` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_block_device.py:L737–L738` |
| `GetBDMImageMetadataTestCase.test_get_bdm_image_metadata__bootable` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_block_device.py:L740–L741` |
| `GetBDMImageMetadataTestCase.test_get_bdm_image_metadata__basic_property` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/test_block_device.py:L743–L767` |
| `GetBDMImageMetadataTestCase.test_get_bdm_image_metadata__snapshot_basic_property` | method | (self) | public | not declared | 1/35 | `src/nova/tests/unit/test_block_device.py:L769–L804` |
| `GetBDMImageMetadataTestCase.test_get_bdm_image_metadata__cinder_down` | method | (self, mock_get) | public | not declared | 1/19 | `src/nova/tests/unit/test_block_device.py:L809–L827` |
| `GetImageMetadataFromVolumeTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_block_device.py:L830–L865` |
| `GetImageMetadataFromVolumeTestCase.test_inherit_image_properties` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_block_device.py:L831–L835` |
| `GetImageMetadataFromVolumeTestCase.test_image_size` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_block_device.py:L837–L840` |
| `GetImageMetadataFromVolumeTestCase.test_image_status` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_block_device.py:L842–L845` |
| `GetImageMetadataFromVolumeTestCase.test_values_conversion` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_block_device.py:L847–L852` |
| `GetImageMetadataFromVolumeTestCase.test_suppress_not_image_properties` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/test_block_device.py:L854–L865` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/test_block_device.py:L20)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/test_block_device.py:L22)
- `oslo_utils`: imports `units` (src/nova/tests/unit/test_block_device.py:L23)
- `nova`: imports `block_device` (src/nova/tests/unit/test_block_device.py:L25)
- `nova.compute`: imports `api as compute_api` (src/nova/tests/unit/test_block_device.py:L26)
- `nova`: imports `context` (src/nova/tests/unit/test_block_device.py:L27)
- `nova`: imports `exception` (src/nova/tests/unit/test_block_device.py:L28)
- `nova`: imports `objects` (src/nova/tests/unit/test_block_device.py:L29)
- `nova`: imports `test` (src/nova/tests/unit/test_block_device.py:L30)
- `nova.tests.unit`: imports `fake_block_device` (src/nova/tests/unit/test_block_device.py:L31)
- `nova.tests.unit`: imports `matchers` (src/nova/tests/unit/test_block_device.py:L32)
- `nova.volume`: imports `cinder` (src/nova/tests/unit/test_block_device.py:L33)

## Side Effects

- **global-mutation**: BDM = block_device.BlockDeviceDict (src/nova/tests/unit/test_block_device.py:L39)
- **global-mutation**: BDM = block_device.BlockDeviceDict (src/nova/tests/unit/test_block_device.py:L275)

