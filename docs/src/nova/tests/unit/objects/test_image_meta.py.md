# src/nova/tests/unit/objects/test_image_meta.py

## Overview

This file implements the `test_image_meta` module, defining 2 classs, 48 methods, 7 imports.

Lines: total 695, code 566, comment 39, blank 90

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestImageMeta` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_image_meta.py:L26–L105` |
| `TestImageMeta.test_basic_attrs` | method | (self) | public | not declared | 1/38 | `src/nova/tests/unit/objects/test_image_meta.py:L27–L68` |
| `TestImageMeta.test_no_props` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_image_meta.py:L70–L73` |
| `TestImageMeta.test_volume_backed_image` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_image_meta.py:L75–L86` |
| `TestImageMeta.test_null_substitution` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/objects/test_image_meta.py:L88–L105` |
| `TestImageMetaProps` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_image_meta.py:L108–L695` |
| `TestImageMetaProps.test_normal_props` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/objects/test_image_meta.py:L109–L125` |
| `TestImageMetaProps.test_default_props` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/objects/test_image_meta.py:L127–L132` |
| `TestImageMetaProps.test_default_prop_value` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_image_meta.py:L134–L139` |
| `TestImageMetaProps.test_non_existent_prop` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_image_meta.py:L141–L147` |
| `TestImageMetaProps.test_to_dict` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_image_meta.py:L149–L153` |
| `TestImageMetaProps.test_legacy_compat` | method | (self) | public | not declared | 1/49 | `src/nova/tests/unit/objects/test_image_meta.py:L155–L205` |
| `TestImageMetaProps.test_legacy_compat_vmware_adapter_types` | method | (self) | public | not declared | 6/22 | `src/nova/tests/unit/objects/test_image_meta.py:L207–L230` |
| `TestImageMetaProps.test_duplicate_legacy_and_normal_props` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_image_meta.py:L232–L240` |
| `TestImageMetaProps.test_get` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_image_meta.py:L242–L246` |
| `TestImageMetaProps.test_set_numa_mem` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_image_meta.py:L248–L254` |
| `TestImageMetaProps.test_set_numa_mem_sparse` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_image_meta.py:L256–L263` |
| `TestImageMetaProps.test_set_numa_mem_no_count` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_image_meta.py:L265–L270` |
| `TestImageMetaProps.test_set_numa_cpus` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_image_meta.py:L272–L279` |
| `TestImageMetaProps.test_set_numa_cpus_sparse` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_image_meta.py:L281–L289` |
| `TestImageMetaProps.test_set_numa_cpus_no_count` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_image_meta.py:L291–L297` |
| `TestImageMetaProps.test_locked_memory_prop` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_image_meta.py:L299–L302` |
| `TestImageMetaProps.test_obj_make_compatible_hw_locked_memory` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_image_meta.py:L304–L319` |
| `TestImageMetaProps.test_get_unnumbered_trait_fields` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_image_meta.py:L321–L341` |
| `TestImageMetaProps.test_traits_required_initialized_as_list` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_image_meta.py:L343–L356` |
| `TestImageMetaProps.test_obj_make_compatible` | method | (self) | public | not declared | 3/26 | `src/nova/tests/unit/objects/test_image_meta.py:L358–L385` |
| `TestImageMetaProps.test_obj_make_compatible_hw_ephemeral_encryption` | method | (self) | public | not declared | 3/21 | `src/nova/tests/unit/objects/test_image_meta.py:L387–L413` |
| `TestImageMetaProps.test_obj_make_compatible_hw_emulation` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_image_meta.py:L415–L432` |
| `TestImageMetaProps.test_obj_make_compatible_input_bus` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_image_meta.py:L434–L448` |
| `TestImageMetaProps.test_obj_make_compatible_video_model` | method | (self) | public | not declared | 2/20 | `src/nova/tests/unit/objects/test_image_meta.py:L450–L473` |
| `TestImageMetaProps.test_obj_bochs_model_positive` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_image_meta.py:L475–L484` |
| `TestImageMetaProps.test_obj_bochs_model_negative` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_image_meta.py:L486–L495` |
| `TestImageMetaProps.test_obj_make_compatible_watchdog_action_not_disabled` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_image_meta.py:L497–L506` |
| `TestImageMetaProps.test_set_os_secure_boot` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_image_meta.py:L508–L511` |
| `TestImageMetaProps.test_set_hw_maxphysaddr_mode` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_image_meta.py:L513–L516` |
| `TestImageMetaProps.test_set_hw_maxphysaddr_mode_negative` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_image_meta.py:L518–L520` |
| `TestImageMetaProps.test_set_hw_maxphysaddr_bits` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_image_meta.py:L522–L525` |
| `TestImageMetaProps.test_obj_make_compatible_img_hide_hypervisor_id` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_image_meta.py:L527–L532` |
| `TestImageMetaProps.test_obj_make_compatible_trait_fields` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_image_meta.py:L534–L538` |
| `TestImageMetaProps.test_obj_make_compatible_pmu` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_image_meta.py:L540–L546` |
| `TestImageMetaProps.test_obj_make_compatible_vtpm` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_image_meta.py:L548–L559` |
| `TestImageMetaProps.test_obj_make_compatible_sound_model` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_image_meta.py:L561–L570` |
| `TestImageMetaProps.test_obj_make_compatible_usb_model_and_redirected_ports` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_image_meta.py:L572–L585` |
| `TestImageMetaProps.test_obj_make_compatible_socket_policy` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_image_meta.py:L587–L591` |
| `TestImageMetaProps.test_obj_make_compatible_viommu_model` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_image_meta.py:L593–L607` |
| `TestImageMetaProps.test_obj_make_compatible_ephemeral_encryption_secret_uuid` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/objects/test_image_meta.py:L609–L626` |
| `TestImageMetaProps.test_obj_make_compatible_stateless_firmware` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_image_meta.py:L628–L643` |
| `TestImageMetaProps.test_obj_make_compatible_vif_model_igb` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_image_meta.py:L645–L659` |
| `TestImageMetaProps.test_obj_make_compatible_mem_encryption_model` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/objects/test_image_meta.py:L661–L677` |
| `TestImageMetaProps.test_obj_make_compatible_mem_encryption_model_amd_sev_snp` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/objects/test_image_meta.py:L679–L695` |

## Dependencies

- `import datetime` (src/nova/tests/unit/objects/test_image_meta.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/objects/test_image_meta.py:L17)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_image_meta.py:L19)
- `nova.network`: imports `model as network_model` (src/nova/tests/unit/objects/test_image_meta.py:L20)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_image_meta.py:L21)
- `nova.objects`: imports `fields` (src/nova/tests/unit/objects/test_image_meta.py:L22)
- `nova`: imports `test` (src/nova/tests/unit/objects/test_image_meta.py:L23)

