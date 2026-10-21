# src/nova/tests/unit/virt/vmwareapi/test_volumeops.py

## Overview

This file implements the `test_volumeops` module, defining 1 class, 2 functions, 39 methods, 17 imports.

Lines: total 869, code 740, comment 13, blank 116

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `VMwareVolumeOpsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L37–L869` |
| `VMwareVolumeOpsTestCase.setUp` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L39–L60` |
| `VMwareVolumeOpsTestCase._test_detach_disk_from_vm` | method | (self, destroy_disk=False) | private | not declared | 1/15 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L62–L88` |
| `VMwareVolumeOpsTestCase._test_detach_disk_from_vm.fake_call_method` | function | (module, method, *args, **kwargs) | public | `'fake_configure_task'` (src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L75) | — | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L63–L75` |
| `VMwareVolumeOpsTestCase.test_detach_with_destroy_disk_from_vm` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L90–L91` |
| `VMwareVolumeOpsTestCase.test_detach_without_destroy_disk_from_vm` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L93–L94` |
| `VMwareVolumeOpsTestCase._fake_call_get_object_property` | method | (self, uuid, result) | private | `fake_call_method` (src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L102) | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L96–L102` |
| `VMwareVolumeOpsTestCase._fake_call_get_object_property.fake_call_method` | function | (vim, method, vm_ref, prop) | public | `result` (src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L101) | — | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L97–L101` |
| `VMwareVolumeOpsTestCase.test_get_volume_uuid` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L104–L112` |
| `VMwareVolumeOpsTestCase.test_get_volume_uuid_not_found` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L114–L121` |
| `VMwareVolumeOpsTestCase.test_attach_volume_vmdk_invalid` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L123–L150` |
| `VMwareVolumeOpsTestCase.test_update_volume_details` | method | (self, reconfigure_vm, get_vm_extra_config_spec) | public | not declared | 1/12 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L155–L167` |
| `VMwareVolumeOpsTestCase._fake_connection_info` | method | (self) | private | `{'driver_volume_type': 'vmdk', 'serial': 'volume-fake-id', 'data': {'volume': 'vm-10', 'volume_id': 'volume-fake-id'}}` (src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L170) | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L169–L173` |
| `VMwareVolumeOpsTestCase.test_get_vmdk_backed_disk_device` | method | (self, get_vmdk_backed_disk_device, get_volume_uuid) | public | not declared | 1/21 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L177–L201` |
| `VMwareVolumeOpsTestCase.test_get_vmdk_backed_disk_device_with_missing_disk_device` | method | (self, get_vmdk_backed_disk_device, get_volume_uuid) | public | not declared | 1/20 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L205–L227` |
| `VMwareVolumeOpsTestCase.test_detach_volume_vmdk` | method | (self) | public | not declared | 1/50 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L229–L283` |
| `VMwareVolumeOpsTestCase.test_detach_volume_vmdk_invalid` | method | (self) | public | not declared | 1/35 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L285–L323` |
| `VMwareVolumeOpsTestCase.test_detach_volume_iscsi` | method | (self, detach_disk_from_vm, iscsi_get_target, get_rdm_disk, get_vm_ref) | public | not declared | 1/23 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L329–L356` |
| `VMwareVolumeOpsTestCase.test_detach_volume_iscsi_with_missing_iscsi_target` | method | (self, iscsi_get_target, get_vm_ref) | public | not declared | 1/12 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L360–L374` |
| `VMwareVolumeOpsTestCase.test_detach_volume_iscsi_with_missing_disk_device` | method | (self, detach_disk_from_vm, iscsi_get_target, get_rdm_disk, get_vm_ref) | public | not declared | 1/24 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L380–L407` |
| `VMwareVolumeOpsTestCase._test__detach_volume_fcd` | method | (self, detach_fcd, get_vm_state, get_vm_ref, adapter_type=constants.ADAPTER_TYPE_IDE, powered_off=True) | private | not declared | 5/24 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L412–L438` |
| `VMwareVolumeOpsTestCase.test_detach_volume_fcd_powered_off_instance` | method | (self, adapter_type) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L443–L444` |
| `VMwareVolumeOpsTestCase.test_detach_volume_fcd_powered_on_instance` | method | (self, adapter_type) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L449–L451` |
| `VMwareVolumeOpsTestCase.test_detach_volume_fcd` | method | (self, detach_volume_fcd) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L454–L458` |
| `VMwareVolumeOpsTestCase._test_attach_volume_vmdk` | method | (self, adapter_type=None) | private | not declared | 4/48 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L460–L509` |
| `VMwareVolumeOpsTestCase._test_attach_volume_iscsi` | method | (self, adapter_type=None) | private | not declared | 3/29 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L511–L541` |
| `VMwareVolumeOpsTestCase.test_attach_volume_vmdk` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L543–L549` |
| `VMwareVolumeOpsTestCase.test_get_controller_key_and_unit` | method | (self, allocate_controller_key_and_unit_number) | public | not declared | 1/18 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L552–L571` |
| `VMwareVolumeOpsTestCase._test_attach_fcd` | method | (self, attach_fcd, reconfigure_vm, get_controller_key_and_unit, existing_controller=True) | private | not declared | 3/33 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L577–L612` |
| `VMwareVolumeOpsTestCase.test_attach_fcd_using_existing_controller` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L614–L615` |
| `VMwareVolumeOpsTestCase.test_attach_fcd_using_new_controller` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L617–L618` |
| `VMwareVolumeOpsTestCase._test__attach_volume_fcd` | method | (self, attach_fcd, get_vm_state, get_vm_ref, adapter_type=constants.ADAPTER_TYPE_IDE, powered_off=True) | private | not declared | 5/24 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L623–L649` |
| `VMwareVolumeOpsTestCase.test_attach_volume_fcd_powered_off_instance` | method | (self, adapter_type) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L654–L655` |
| `VMwareVolumeOpsTestCase.test_attach_volume_fcd_powered_on_instance` | method | (self, adapter_type) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L660–L662` |
| `VMwareVolumeOpsTestCase.test_attach_volume_fcd` | method | (self, attach_volume_fcd) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L665–L669` |
| `VMwareVolumeOpsTestCase.test_attach_volume_iscsi` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L671–L676` |
| `VMwareVolumeOpsTestCase.test_consolidate_vmdk_volume_with_no_relocate` | method | (self, relocate_vm, get_vmdk_base_volume_device) | public | not declared | 1/13 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L681–L697` |
| `VMwareVolumeOpsTestCase.test_consolidate_vmdk_volume_with_relocate` | method | (self, attach_disk_to_vm, detach_disk_from_vm, get_res_pool_of_host, get_host_of_vm, relocate_vm, get_vmdk_base_volume_device) | public | not declared | 1/33 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L706–L743` |
| `VMwareVolumeOpsTestCase.test_consolidate_vmdk_volume_with_missing_vmdk` | method | (self, attach_disk_to_vm, detach_disk_from_vm, get_res_pool_of_host, get_host_of_vm, relocate_vm, get_vmdk_base_volume_device) | public | not declared | 1/36 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L752–L794` |
| `VMwareVolumeOpsTestCase.test_iscsi_get_host_iqn` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L796–L817` |
| `VMwareVolumeOpsTestCase.test_iscsi_get_host_iqn_instance_not_found` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L819–L846` |
| `VMwareVolumeOpsTestCase.test_get_volume_connector` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L848–L869` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L15)
- `import ddt` (src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L17)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L18)
- `oslo_vmware`: imports `exceptions as oslo_vmw_exceptions` (src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L19)
- `oslo_vmware`: imports `vim_util as vutil` (src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L20)
- `nova.compute`: imports `power_state` (src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L22)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L23)
- `nova`: imports `context` (src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L24)
- `nova`: imports `exception` (src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L25)
- `nova`: imports `test` (src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L26)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L27)
- `nova.tests.unit.virt.vmwareapi`: imports `fake as vmwareapi_fake` (src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L28)
- `nova.tests.unit.virt.vmwareapi`: imports `stubs` (src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L29)
- `nova.virt.vmwareapi`: imports `constants` (src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L30)
- `nova.virt.vmwareapi`: imports `session` (src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L31)
- `nova.virt.vmwareapi`: imports `vm_util` (src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L32)
- `nova.virt.vmwareapi`: imports `volumeops` (src/nova/tests/unit/virt/vmwareapi/test_volumeops.py:L33)

