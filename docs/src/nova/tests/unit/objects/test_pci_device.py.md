# src/nova/tests/unit/objects/test_pci_device.py

## Overview

This file implements the `test_pci_device` module, defining 10 classs, 3 functions, 70 methods, 5 variables, 16 imports, 2 security surface entries.

Lines: total 1010, code 819, comment 50, blank 141

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `dev_dict` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_pci_device.py:L36–L45` |
| `fake_db_dev` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_pci_device.py:L48–L68` |
| `fake_db_dev_1` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_pci_device.py:L71–L91` |
| `fake_db_dev_old` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_pci_device.py:L94–L114` |
| `_TestPciDeviceObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_pci_device.py:L118–L525` |
| `_TestPciDeviceObject._create_fake_instance` | method | (self) | private | not declared | 1/4 | `src/nova/tests/unit/objects/test_pci_device.py:L119–L122` |
| `_TestPciDeviceObject._create_fake_pci_device` | method | (self, mock_get, ctxt=None) | private | not declared | 2/6 | `src/nova/tests/unit/objects/test_pci_device.py:L125–L130` |
| `_TestPciDeviceObject.test_create_pci_device` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_pci_device.py:L132–L138` |
| `_TestPciDeviceObject.test_pci_device_extra_info` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_pci_device.py:L140–L151` |
| `_TestPciDeviceObject.test_pci_device_extra_info_with_dict` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_pci_device.py:L153–L164` |
| `_TestPciDeviceObject.test_pci_device_extra_info_card_serial_number` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_pci_device.py:L166–L174` |
| `_TestPciDeviceObject.test_pci_device_extra_info_network_capabilities` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_pci_device.py:L176–L184` |
| `_TestPciDeviceObject.test_update_device` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_pci_device.py:L186–L193` |
| `_TestPciDeviceObject.test_update_and_remove_extra_info_key` | method | (self, data) | public | not declared | 1/30 | `src/nova/tests/unit/objects/test_pci_device.py:L197–L228` |
| `_TestPciDeviceObject.test_update_device_same_value` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_pci_device.py:L230–L238` |
| `_TestPciDeviceObject.test_get_by_dev_addr` | method | (self, mock_get) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_pci_device.py:L241–L247` |
| `_TestPciDeviceObject.test_get_by_dev_id` | method | (self, mock_get) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_pci_device.py:L250–L256` |
| `_TestPciDeviceObject.test_from_db_obj_pre_1_5_format` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_pci_device.py:L258–L265` |
| `_TestPciDeviceObject.test_from_db_obj_missing_uuid` | method | (self, mock_create_uuid) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_pci_device.py:L269–L281` |
| `_TestPciDeviceObject.test_dev_type_vdpa_1_6_fails` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_pci_device.py:L283–L290` |
| `_TestPciDeviceObject.test_dev_type_vdpa_1_6` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_pci_device.py:L292–L299` |
| `_TestPciDeviceObject.test_save_empty_parent_addr` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_pci_device.py:L301–L310` |
| `_TestPciDeviceObject.test_save` | method | (self, mock_update) | public | not declared | 1/16 | `src/nova/tests/unit/objects/test_pci_device.py:L313–L328` |
| `_TestPciDeviceObject.test_save_no_extra_info` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_pci_device.py:L330–L343` |
| `_TestPciDeviceObject.test_save_no_extra_info._fake_update` | function | (ctxt, node_id, addr, updates) | private | `return_dev` (src/nova/tests/unit/objects/test_pci_device.py:L336) | — | `src/nova/tests/unit/objects/test_pci_device.py:L334–L336` |
| `_TestPciDeviceObject.test_save_removed` | method | (self, mock_destroy) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_pci_device.py:L346–L353` |
| `_TestPciDeviceObject.test_save_deleted` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_pci_device.py:L355–L367` |
| `_TestPciDeviceObject.test_save_deleted._fake_destroy` | function | (ctxt, node_id, addr) | private | not declared | — | `src/nova/tests/unit/objects/test_pci_device.py:L356–L357` |
| `_TestPciDeviceObject.test_save_deleted._fake_update` | function | (ctxt, node_id, addr, updates) | private | not declared | — | `src/nova/tests/unit/objects/test_pci_device.py:L359–L360` |
| `_TestPciDeviceObject.test_update_numa_node` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_pci_device.py:L369–L376` |
| `_TestPciDeviceObject.test_pci_device_equivalent` | method | (self, mock_uuid) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_pci_device.py:L380–L383` |
| `_TestPciDeviceObject.test_pci_device_equivalent_with_ignore_field` | method | (self, mock_uuid) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_pci_device.py:L387–L391` |
| `_TestPciDeviceObject.test_pci_device_not_equivalent1` | method | (self, mock_uuid) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_pci_device.py:L395–L400` |
| `_TestPciDeviceObject.test_pci_device_not_equivalent2` | method | (self, mock_uuid) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_pci_device.py:L404–L408` |
| `_TestPciDeviceObject.test_pci_device_not_equivalent_with_none` | method | (self, mock_uuid) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_pci_device.py:L412–L417` |
| `_TestPciDeviceObject.test_pci_device_not_equivalent_with_not_pci_device` | method | (self, mock_uuid) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_pci_device.py:L421–L426` |
| `_TestPciDeviceObject.test_claim_device` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_pci_device.py:L428–L436` |
| `_TestPciDeviceObject.test_claim_device_fail` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_pci_device.py:L438–L443` |
| `_TestPciDeviceObject.test_allocate_device` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_pci_device.py:L445–L457` |
| `_TestPciDeviceObject.test_allocate_device_fail_status` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_pci_device.py:L459–L464` |
| `_TestPciDeviceObject.test_allocate_device_fail_owner` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_pci_device.py:L466–L473` |
| `_TestPciDeviceObject.test_free_claimed_device` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_pci_device.py:L475–L482` |
| `_TestPciDeviceObject.test_free_allocated_device` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_pci_device.py:L484–L496` |
| `_TestPciDeviceObject.test_free_device_fail` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_pci_device.py:L498–L502` |
| `_TestPciDeviceObject.test_remove_device` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_pci_device.py:L504–L509` |
| `_TestPciDeviceObject.test_remove_device_fail` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_pci_device.py:L511–L515` |
| `_TestPciDeviceObject.test_remove_device_fail_owned_with_unavailable_state` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_pci_device.py:L517–L525` |
| `TestPciDeviceObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_pci_device.py:L528–L530` |
| `TestPciDeviceObjectRemote` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_pci_device.py:L533–L535` |
| `fake_pci_devs` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_pci_device.py:L538–L538` |
| `_TestPciDeviceListObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_pci_device.py:L541–L577` |
| `_TestPciDeviceListObject.test_create_pci_device_list` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_pci_device.py:L543–L549` |
| `_TestPciDeviceListObject.test_get_by_compute_node` | method | (self, mock_get) | public | not declared | 2/8 | `src/nova/tests/unit/objects/test_pci_device.py:L552–L559` |
| `_TestPciDeviceListObject.test_get_by_instance_uuid` | method | (self, mock_get) | public | not declared | 2/16 | `src/nova/tests/unit/objects/test_pci_device.py:L562–L577` |
| `TestPciDeviceListObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_pci_device.py:L580–L582` |
| `TestPciDeviceListObjectRemote` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_pci_device.py:L585–L587` |
| `_TestSRIOVPciDeviceObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_pci_device.py:L590–L889` |
| `_TestSRIOVPciDeviceObject._create_pci_devices` | method | (self, vf_product_id=1515, pf_product_id=1528, num_pfs=2, num_vfs=8, num_vdpa=0) | private | not declared | 4/55 | `src/nova/tests/unit/objects/test_pci_device.py:L591–L647` |
| `_TestSRIOVPciDeviceObject._create_fake_instance` | method | (self) | private | not declared | 1/4 | `src/nova/tests/unit/objects/test_pci_device.py:L649–L652` |
| `_TestSRIOVPciDeviceObject._create_fake_pci_device` | method | (self, mock_get, ctxt=None) | private | not declared | 2/6 | `src/nova/tests/unit/objects/test_pci_device.py:L655–L660` |
| `_TestSRIOVPciDeviceObject._get_children_by_parent_address` | method | (self, addr) | private | `vf_devs` (src/nova/tests/unit/objects/test_pci_device.py:L667) | 3/6 | `src/nova/tests/unit/objects/test_pci_device.py:L662–L667` |
| `_TestSRIOVPciDeviceObject._get_parent_by_address` | method | (self, addr) | private | `dev` (src/nova/tests/unit/objects/test_pci_device.py:L672) | 3/4 | `src/nova/tests/unit/objects/test_pci_device.py:L669–L672` |
| `_TestSRIOVPciDeviceObject.test_claim_PF` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/objects/test_pci_device.py:L674–L686` |
| `_TestSRIOVPciDeviceObject.test_claim_VF` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_pci_device.py:L688–L699` |
| `_TestSRIOVPciDeviceObject.test_claim_VDPA` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_pci_device.py:L701–L712` |
| `_TestSRIOVPciDeviceObject.test_allocate_PF` | method | (self) | public | not declared | 2/13 | `src/nova/tests/unit/objects/test_pci_device.py:L714–L727` |
| `_TestSRIOVPciDeviceObject.test_allocate_VF` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_pci_device.py:L729–L741` |
| `_TestSRIOVPciDeviceObject.test_allocate_VDPA` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_pci_device.py:L743–L755` |
| `_TestSRIOVPciDeviceObject.test_claim_PF_fail` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_pci_device.py:L757–L764` |
| `_TestSRIOVPciDeviceObject.test_claim_PF_fail_VDPA` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_pci_device.py:L766–L773` |
| `_TestSRIOVPciDeviceObject.test_claim_VF_fail` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_pci_device.py:L775–L783` |
| `_TestSRIOVPciDeviceObject.test_claim_VDPA_fail` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_pci_device.py:L785–L792` |
| `_TestSRIOVPciDeviceObject.test_allocate_PF_fail` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_pci_device.py:L794–L801` |
| `_TestSRIOVPciDeviceObject.test_allocate_VF_fail` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_pci_device.py:L803–L811` |
| `_TestSRIOVPciDeviceObject.test_allocate_PF_fail_VDPA` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_pci_device.py:L813–L820` |
| `_TestSRIOVPciDeviceObject.test_allocate_VDPA_fail` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_pci_device.py:L822–L830` |
| `_TestSRIOVPciDeviceObject.test_free_allocated_PF` | method | (self) | public | not declared | 2/13 | `src/nova/tests/unit/objects/test_pci_device.py:L832–L845` |
| `_TestSRIOVPciDeviceObject.test_free_allocated_VF` | method | (self) | public | not declared | 3/19 | `src/nova/tests/unit/objects/test_pci_device.py:L847–L867` |
| `_TestSRIOVPciDeviceObject.test_free_allocated_VDPA` | method | (self) | public | not declared | 4/19 | `src/nova/tests/unit/objects/test_pci_device.py:L869–L889` |
| `TestSRIOVPciDeviceListObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_pci_device.py:L892–L894` |
| `TestSRIOVPciDeviceListObjectRemote` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_pci_device.py:L897–L899` |
| `TestPciDeviceUUIDMigration` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_pci_device.py:L902–L1010` |
| `TestPciDeviceUUIDMigration.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_pci_device.py:L903–L906` |
| `TestPciDeviceUUIDMigration._create_db_dev` | method | (context, deleted=False, **updates) | private | `dev_ref` (src/nova/tests/unit/objects/test_pci_device.py:L927) | 2/13 | `src/nova/tests/unit/objects/test_pci_device.py:L910–L927` |
| `TestPciDeviceUUIDMigration.test_populate_uuid` | method | (self, mock_create_uuid) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_pci_device.py:L931–L948` |
| `TestPciDeviceUUIDMigration.test_create_uuid_race` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_pci_device.py:L950–L973` |
| `TestPciDeviceUUIDMigration._assert_online_migration` | method | (self, expected_total, expected_done, limit=10) | private | not declared | 1/6 | `src/nova/tests/unit/objects/test_pci_device.py:L975–L980` |
| `TestPciDeviceUUIDMigration.test_online_migration` | method | (self) | public | not declared | 3/16 | `src/nova/tests/unit/objects/test_pci_device.py:L982–L1010` |

## Dependencies

- `import copy` (src/nova/tests/unit/objects/test_pci_device.py:L16)
- `import ddt` (src/nova/tests/unit/objects/test_pci_device.py:L17)
- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_pci_device.py:L18)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/objects/test_pci_device.py:L20)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/objects/test_pci_device.py:L21)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/objects/test_pci_device.py:L22)
- `nova`: imports `context` (src/nova/tests/unit/objects/test_pci_device.py:L24)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/objects/test_pci_device.py:L25)
- `nova.db.main`: imports `models as db_models` (src/nova/tests/unit/objects/test_pci_device.py:L26)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_pci_device.py:L27)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_pci_device.py:L28)
- `nova.objects`: imports `fields` (src/nova/tests/unit/objects/test_pci_device.py:L29)
- `nova.objects`: imports `instance` (src/nova/tests/unit/objects/test_pci_device.py:L30)
- `nova.objects`: imports `pci_device` (src/nova/tests/unit/objects/test_pci_device.py:L31)
- `nova`: imports `test` (src/nova/tests/unit/objects/test_pci_device.py:L32)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_pci_device.py:L33)

## Security Surface

- **sink** (`db-write`): values.update(updates) (src/nova/tests/unit/objects/test_pci_device.py:L918)
- **sink** (`db-write`): dev_ref.update(values) (src/nova/tests/unit/objects/test_pci_device.py:L921)

