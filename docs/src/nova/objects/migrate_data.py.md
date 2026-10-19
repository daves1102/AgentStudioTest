# src/nova/objects/migrate_data.py

## Overview

This file implements the `migrate_data` module, defining 7 classs, 9 constants, 7 fields, 20 methods, 7 propertys, 1 variable, 7 imports, 9 side effects.

Lines: total 463, code 294, comment 113, blank 56

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/objects/migrate_data.py:L25–L25` |
| `OS_VIF_DELEGATION` | constant | — | exported | not declared | — | `src/nova/objects/migrate_data.py:L26–L26` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/migrate_data.py:L28–L36` |
| `VIFMigrateData` | class | — | exported | not declared | — | `src/nova/objects/migrate_data.py:L40–L137` |
| `VIFMigrateData.VERSION` | constant | — | public | not declared | — | `src/nova/objects/migrate_data.py:L42–L42` |
| `VIFMigrateData.fields` | field | — | public | not declared | — | `src/nova/objects/migrate_data.py:L48–L69` |
| `VIFMigrateData.vif_details` | method | (self) | public | `{}` (src/nova/objects/migrate_data.py:L74); `jsonutils.loads(self.vif_details_json)` (src/nova/objects/migrate_data.py:L75) | 2/4 | `src/nova/objects/migrate_data.py:L72–L75` |
| `VIFMigrateData.vif_details` | method | (self, vif_details_dict) | public | not declared | 1/2 | `src/nova/objects/migrate_data.py:L78–L79` |
| `VIFMigrateData.profile` | method | (self) | public | `{}` (src/nova/objects/migrate_data.py:L84); `jsonutils.loads(self.profile_json)` (src/nova/objects/migrate_data.py:L85) | 2/4 | `src/nova/objects/migrate_data.py:L82–L85` |
| `VIFMigrateData.profile` | method | (self, profile_dict) | public | not declared | 1/2 | `src/nova/objects/migrate_data.py:L88–L89` |
| `VIFMigrateData.supports_os_vif_delegation` | method | (self) | public | `self.profile.get(OS_VIF_DELEGATION, False)` (src/nova/objects/migrate_data.py:L93) | 1/2 | `src/nova/objects/migrate_data.py:L92–L93` |
| `VIFMigrateData.supports_os_vif_delegation` | method | (self, supported) | public | not declared | 2/3 | `src/nova/objects/migrate_data.py:L98–L102` |
| `VIFMigrateData.get_dest_vif` | method | (self) | public | `vif` (src/nova/objects/migrate_data.py:L122) | 2/11 | `src/nova/objects/migrate_data.py:L104–L122` |
| `VIFMigrateData.create_skeleton_migrate_vifs` | method | (cls, vifs) | public | `vif_mig_data` (src/nova/objects/migrate_data.py:L137) | 2/6 | `src/nova/objects/migrate_data.py:L125–L137` |
| `LibvirtLiveMigrateNUMAInfo` | class | — | exported | not declared | — | `src/nova/objects/migrate_data.py:L141–L157` |
| `LibvirtLiveMigrateNUMAInfo.VERSION` | constant | — | public | not declared | — | `src/nova/objects/migrate_data.py:L143–L143` |
| `LibvirtLiveMigrateNUMAInfo.fields` | field | — | public | not declared | — | `src/nova/objects/migrate_data.py:L145–L157` |
| `LiveMigrateData` | class | — | exported | not declared | — | `src/nova/objects/migrate_data.py:L161–L185` |
| `LiveMigrateData.VERSION` | constant | — | public | not declared | — | `src/nova/objects/migrate_data.py:L167–L167` |
| `LiveMigrateData.fields` | field | — | public | not declared | — | `src/nova/objects/migrate_data.py:L169–L185` |
| `LibvirtLiveMigrateBDMInfo` | class | — | exported | not declared | — | `src/nova/objects/migrate_data.py:L189–L237` |
| `LibvirtLiveMigrateBDMInfo.VERSION` | constant | — | public | not declared | — | `src/nova/objects/migrate_data.py:L193–L193` |
| `LibvirtLiveMigrateBDMInfo.fields` | field | — | public | not declared | — | `src/nova/objects/migrate_data.py:L195–L205` |
| `LibvirtLiveMigrateBDMInfo.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 3/6 | `src/nova/objects/migrate_data.py:L207–L212` |
| `LibvirtLiveMigrateBDMInfo.connection_info` | method | (self) | public | `jsonutils.loads(self.connection_info_json)` (src/nova/objects/migrate_data.py:L221) | 1/2 | `src/nova/objects/migrate_data.py:L220–L221` |
| `LibvirtLiveMigrateBDMInfo.connection_info` | method | (self, info) | public | not declared | 1/2 | `src/nova/objects/migrate_data.py:L224–L225` |
| `LibvirtLiveMigrateBDMInfo.as_disk_info` | method | (self) | public | `info_dict` (src/nova/objects/migrate_data.py:L237) | 5/11 | `src/nova/objects/migrate_data.py:L227–L237` |
| `LibvirtLiveMigrateData` | class | — | exported | not declared | — | `src/nova/objects/migrate_data.py:L241–L411` |
| `LibvirtLiveMigrateData.VERSION` | constant | — | public | not declared | — | `src/nova/objects/migrate_data.py:L260–L260` |
| `LibvirtLiveMigrateData.fields` | field | — | public | not declared | — | `src/nova/objects/migrate_data.py:L262–L301` |
| `LibvirtLiveMigrateData.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 31/51 | `src/nova/objects/migrate_data.py:L303–L361` |
| `LibvirtLiveMigrateData.is_on_shared_storage` | method | (self) | public | `self.is_shared_block_storage or self.is_shared_instance_path` (src/nova/objects/migrate_data.py:L364) | 2/2 | `src/nova/objects/migrate_data.py:L363–L364` |
| `LibvirtLiveMigrateData.has_vtpm` | method | (self) | public | `(self.obj_attr_is_set('vtpm_secret_uuid') and self.obj_attr_is_set('vtpm_secret_value'))` (src/nova/objects/migrate_data.py:L369) | 2/3 | `src/nova/objects/migrate_data.py:L367–L370` |
| `LibvirtLiveMigrateData.has_vtpm_secret_data` | method | (self) | public | `( self.has_vtpm and self.vtpm_secret_uuid and self.vtpm_secret_value)` (src/nova/objects/migrate_data.py:L375) | 3/3 | `src/nova/objects/migrate_data.py:L373–L376` |
| `LibvirtLiveMigrateData.vtpm_secret_value_bytes` | method | (self) | public | `self.vtpm_secret_value.encode(encoding='ascii')` (src/nova/objects/migrate_data.py:L393) | 1/2 | `src/nova/objects/migrate_data.py:L379–L393` |
| `LibvirtLiveMigrateData.vtpm_secret_value_bytes` | method | (self, value) | public | not declared | 1/2 | `src/nova/objects/migrate_data.py:L396–L411` |
| `HyperVLiveMigrateData` | class | — | exported | not declared | — | `src/nova/objects/migrate_data.py:L418–L444` |
| `HyperVLiveMigrateData.VERSION` | constant | — | public | not declared | — | `src/nova/objects/migrate_data.py:L425–L425` |
| `HyperVLiveMigrateData.fields` | field | — | public | not declared | — | `src/nova/objects/migrate_data.py:L427–L427` |
| `HyperVLiveMigrateData.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 10/16 | `src/nova/objects/migrate_data.py:L429–L444` |
| `VMwareLiveMigrateData` | class | — | exported | not declared | — | `src/nova/objects/migrate_data.py:L448–L463` |
| `VMwareLiveMigrateData.VERSION` | constant | — | public | not declared | — | `src/nova/objects/migrate_data.py:L451–L451` |
| `VMwareLiveMigrateData.fields` | field | — | public | not declared | — | `src/nova/objects/migrate_data.py:L453–L456` |
| `VMwareLiveMigrateData.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 2/6 | `src/nova/objects/migrate_data.py:L458–L463` |
| `VIFMigrateData.vif_details` | property | — | public | not declared | — | `src/nova/objects/migrate_data.py:L71–L75` |
| `VIFMigrateData.profile` | property | — | public | not declared | — | `src/nova/objects/migrate_data.py:L81–L85` |
| `VIFMigrateData.supports_os_vif_delegation` | property | — | public | not declared | — | `src/nova/objects/migrate_data.py:L91–L93` |
| `LibvirtLiveMigrateBDMInfo.connection_info` | property | — | public | not declared | — | `src/nova/objects/migrate_data.py:L219–L221` |
| `LibvirtLiveMigrateData.has_vtpm` | property | — | public | not declared | — | `src/nova/objects/migrate_data.py:L366–L370` |
| `LibvirtLiveMigrateData.has_vtpm_secret_data` | property | — | public | not declared | — | `src/nova/objects/migrate_data.py:L372–L376` |
| `LibvirtLiveMigrateData.vtpm_secret_value_bytes` | property | — | public | not declared | — | `src/nova/objects/migrate_data.py:L378–L393` |

## Dependencies

- `import copy` (src/nova/objects/migrate_data.py:L15)
- `oslo_log`: imports `log` (src/nova/objects/migrate_data.py:L17)
- `oslo_serialization`: imports `jsonutils` (src/nova/objects/migrate_data.py:L18)
- `oslo_utils`: imports `versionutils` (src/nova/objects/migrate_data.py:L19)
- `nova`: imports `exception` (src/nova/objects/migrate_data.py:L21)
- `nova.objects`: imports `base as obj_base` (src/nova/objects/migrate_data.py:L22)
- `nova.objects`: imports `fields` (src/nova/objects/migrate_data.py:L23)

## Side Effects

- **global-mutation**: LOG = log.getLogger(__name__) (src/nova/objects/migrate_data.py:L25)
- **global-mutation**: OS_VIF_DELEGATION = 'os_vif_delegation' (src/nova/objects/migrate_data.py:L26)
- **global-mutation**: VERSION = '1.0' (src/nova/objects/migrate_data.py:L42)
- **global-mutation**: VERSION = '1.0' (src/nova/objects/migrate_data.py:L143)
- **global-mutation**: VERSION = '1.4' (src/nova/objects/migrate_data.py:L167)
- **global-mutation**: VERSION = '1.1' (src/nova/objects/migrate_data.py:L193)
- **global-mutation**: VERSION = '1.14' (src/nova/objects/migrate_data.py:L260)
- **global-mutation**: VERSION = '1.5' (src/nova/objects/migrate_data.py:L425)
- **global-mutation**: VERSION = '1.1' (src/nova/objects/migrate_data.py:L451)

