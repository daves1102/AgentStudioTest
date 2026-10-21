# src/nova/tests/unit/objects/test_migrate_data.py

## Overview

This file implements the `test_migrate_data` module, defining 13 classs, 13 methods, 9 imports.

Lines: total 332, code 269, comment 17, blank 46

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_TestLiveMigrateData` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_migrate_data.py:L27–L42` |
| `_TestLiveMigrateData.test_obj_make_compatible` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/objects/test_migrate_data.py:L28–L42` |
| `TestLiveMigrateData` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_migrate_data.py:L45–L47` |
| `TestRemoteLiveMigrateData` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_migrate_data.py:L50–L52` |
| `_TestLibvirtLiveMigrateData` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_migrate_data.py:L55–L208` |
| `_TestLibvirtLiveMigrateData.test_bdm_to_disk_info` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/objects/test_migrate_data.py:L56–L69` |
| `_TestLibvirtLiveMigrateData.test_numa_migrate_data` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/objects/test_migrate_data.py:L71–L86` |
| `_TestLibvirtLiveMigrateData.test_obj_make_compatible` | method | (self) | public | not declared | 1/62 | `src/nova/tests/unit/objects/test_migrate_data.py:L88–L151` |
| `_TestLibvirtLiveMigrateData.test_bdm_obj_make_compatible` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_migrate_data.py:L153–L162` |
| `_TestLibvirtLiveMigrateData.test_vtpm_obj_make_compatible` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_migrate_data.py:L164–L174` |
| `_TestLibvirtLiveMigrateData.test_vif_migrate_data` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/objects/test_migrate_data.py:L176–L208` |
| `TestLibvirtLiveMigrateData` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_migrate_data.py:L211–L213` |
| `TestRemoteLibvirtLiveMigrateData` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_migrate_data.py:L216–L218` |
| `_TestHyperVLiveMigrateData` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_migrate_data.py:L221–L240` |
| `_TestHyperVLiveMigrateData.test_obj_make_compatible` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/objects/test_migrate_data.py:L222–L240` |
| `TestHyperVLiveMigrateData` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_migrate_data.py:L243–L245` |
| `TestRemoteHyperVLiveMigrateData` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_migrate_data.py:L248–L250` |
| `_TestVMwareLiveMigrateData` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_migrate_data.py:L253–L263` |
| `_TestVMwareLiveMigrateData.test_obj_make_compatible` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_migrate_data.py:L254–L263` |
| `TestVMwareLiveMigrateData` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_migrate_data.py:L266–L268` |
| `TestRemoteVMwareLiveMigrateData` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_migrate_data.py:L271–L273` |
| `TestVIFMigrateData` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_migrate_data.py:L276–L332` |
| `TestVIFMigrateData.test_get_dest_vif_source_vif_not_set` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_migrate_data.py:L278–L284` |
| `TestVIFMigrateData.test_get_dest_vif` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/objects/test_migrate_data.py:L286–L301` |
| `TestVIFMigrateData.test_create_skeleton_migrate_vifs` | method | (self) | public | not declared | 3/9 | `src/nova/tests/unit/objects/test_migrate_data.py:L303–L311` |
| `TestVIFMigrateData.test_supports_os_vif_delegation` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/objects/test_migrate_data.py:L313–L332` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/objects/test_migrate_data.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/objects/test_migrate_data.py:L16)
- `oslo_versionedobjects`: imports `base as ovo_base` (src/nova/tests/unit/objects/test_migrate_data.py:L17)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_migrate_data.py:L19)
- `nova.network`: imports `model as network_model` (src/nova/tests/unit/objects/test_migrate_data.py:L20)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_migrate_data.py:L21)
- `nova.objects`: imports `migrate_data` (src/nova/tests/unit/objects/test_migrate_data.py:L22)
- `nova`: imports `test` (src/nova/tests/unit/objects/test_migrate_data.py:L23)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_migrate_data.py:L24)

