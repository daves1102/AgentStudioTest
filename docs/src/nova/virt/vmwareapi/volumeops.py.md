# src/nova/virt/vmwareapi/volumeops.py

## Overview

This file implements the `volumeops` module, defining 2 classs, 2 constants, 31 methods, 1 staticmethod, 10 imports, 2 side effects.

Lines: total 673, code 527, comment 59, blank 87

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/volumeops.py:L32–L32` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/volumeops.py:L33–L33` |
| `VolumeMoRefProxy` | class | — | exported | not declared | — | `src/nova/virt/vmwareapi/volumeops.py:L36–L50` |
| `VolumeMoRefProxy.__init__` | method | (self, connection_info_data) | public | not declared | 2/7 | `src/nova/virt/vmwareapi/volumeops.py:L37–L43` |
| `VolumeMoRefProxy.fetch_moref` | method | (self, session) | public | not declared | 3/6 | `src/nova/virt/vmwareapi/volumeops.py:L45–L50` |
| `VMwareVolumeOps` | class | — | exported | not declared | — | `src/nova/virt/vmwareapi/volumeops.py:L53–L673` |
| `VMwareVolumeOps.__init__` | method | (self, session, cluster=None) | public | not declared | 1/3 | `src/nova/virt/vmwareapi/volumeops.py:L56–L58` |
| `VMwareVolumeOps.attach_disk_to_vm` | method | (self, vm_ref, instance, adapter_type, disk_type, vmdk_path=None, disk_size=None, linked_clone=False, device_name=None, disk_io_limits=None) | public | not declared | 2/31 | `src/nova/virt/vmwareapi/volumeops.py:L60–L93` |
| `VMwareVolumeOps._update_volume_details` | method | (self, vm_ref, volume_uuid, device_uuid) | private | not declared | 1/7 | `src/nova/virt/vmwareapi/volumeops.py:L95–L103` |
| `VMwareVolumeOps._get_volume_uuid` | method | (self, vm_ref, volume_uuid) | private | `opt_val.value` (src/nova/virt/vmwareapi/volumeops.py:L112) | 2/8 | `src/nova/virt/vmwareapi/volumeops.py:L105–L112` |
| `VMwareVolumeOps.detach_disk_from_vm` | method | (self, vm_ref, instance, device, destroy_disk=False) | public | not declared | 1/16 | `src/nova/virt/vmwareapi/volumeops.py:L114–L130` |
| `VMwareVolumeOps._iscsi_get_target` | method | (self, data) | private | `result` (src/nova/virt/vmwareapi/volumeops.py:L156); `result` (src/nova/virt/vmwareapi/volumeops.py:L159); `result` (src/nova/virt/vmwareapi/volumeops.py:L165); `result` (src/nova/virt/vmwareapi/volumeops.py:L168); `result` (src/nova/virt/vmwareapi/volumeops.py:L171); `result` (src/nova/virt/vmwareapi/volumeops.py:L176); `result` (src/nova/virt/vmwareapi/volumeops.py:L182); `result` (src/nova/virt/vmwareapi/volumeops.py:L191); `result` (src/nova/virt/vmwareapi/volumeops.py:L194); `result` (src/nova/virt/vmwareapi/volumeops.py:L197); `(scsi_lun.deviceName, scsi_lun.uuid)` (src/nova/virt/vmwareapi/volumeops.py:L200); `result` (src/nova/virt/vmwareapi/volumeops.py:L202) | 23/63 | `src/nova/virt/vmwareapi/volumeops.py:L132–L202` |
| `VMwareVolumeOps._iscsi_add_send_target_host` | method | (self, storage_system_mor, hba_device, target_portal) | private | not declared | 1/9 | `src/nova/virt/vmwareapi/volumeops.py:L204–L213` |
| `VMwareVolumeOps._iscsi_rescan_hba` | method | (self, target_portal) | private | `` (src/nova/virt/vmwareapi/volumeops.py:L230); `` (src/nova/virt/vmwareapi/volumeops.py:L233); `` (src/nova/virt/vmwareapi/volumeops.py:L249) | 8/35 | `src/nova/virt/vmwareapi/volumeops.py:L215–L253` |
| `VMwareVolumeOps._iscsi_discover_target` | method | (self, data) | private | `(device_name, uuid)` (src/nova/virt/vmwareapi/volumeops.py:L265); `(device_name, uuid)` (src/nova/virt/vmwareapi/volumeops.py:L282) | 3/23 | `src/nova/virt/vmwareapi/volumeops.py:L255–L282` |
| `VMwareVolumeOps._iscsi_get_host_iqn` | method | (self, instance) | private | `` (src/nova/virt/vmwareapi/volumeops.py:L299); `` (src/nova/virt/vmwareapi/volumeops.py:L302); `hba.iScsiName` (src/nova/virt/vmwareapi/volumeops.py:L305) | 6/18 | `src/nova/virt/vmwareapi/volumeops.py:L284–L305` |
| `VMwareVolumeOps.get_volume_connector` | method | (self, instance) | public | `connector` (src/nova/virt/vmwareapi/volumeops.py:L319) | 3/12 | `src/nova/virt/vmwareapi/volumeops.py:L307–L319` |
| `VMwareVolumeOps._get_volume_ref` | method | (connection_info_data) | private | `VolumeMoRefProxy(connection_info_data)` (src/nova/virt/vmwareapi/volumeops.py:L324) | 1/2 | `src/nova/virt/vmwareapi/volumeops.py:L322–L324` |
| `VMwareVolumeOps._get_vmdk_base_volume_device` | method | (self, volume_ref) | private | `vm_util.get_vmdk_volume_disk(hardware_devices)` (src/nova/virt/vmwareapi/volumeops.py:L330) | 1/4 | `src/nova/virt/vmwareapi/volumeops.py:L326–L330` |
| `VMwareVolumeOps._attach_volume_vmdk` | method | (self, connection_info, instance, adapter_type=None) | private | not declared | 4/19 | `src/nova/virt/vmwareapi/volumeops.py:L332–L361` |
| `VMwareVolumeOps._attach_volume_iscsi` | method | (self, connection_info, instance, adapter_type=None) | private | not declared | 3/18 | `src/nova/virt/vmwareapi/volumeops.py:L363–L387` |
| `VMwareVolumeOps._get_controller_key_and_unit` | method | (self, vm_ref, adapter_type) | private | `vm_util.allocate_controller_key_and_unit_number( client_factory, devices, adapter_type)` (src/nova/virt/vmwareapi/volumeops.py:L398) | 1/11 | `src/nova/virt/vmwareapi/volumeops.py:L389–L399` |
| `VMwareVolumeOps._attach_fcd` | method | (self, vm_ref, adapter_type, fcd_id, ds_ref_val) | private | not declared | 2/15 | `src/nova/virt/vmwareapi/volumeops.py:L401–L418` |
| `VMwareVolumeOps._attach_volume_fcd` | method | (self, connection_info, instance) | private | not declared | 3/12 | `src/nova/virt/vmwareapi/volumeops.py:L420–L434` |
| `VMwareVolumeOps.attach_volume` | method | (self, connection_info, instance, adapter_type=None) | public | not declared | 4/12 | `src/nova/virt/vmwareapi/volumeops.py:L436–L448` |
| `VMwareVolumeOps._get_host_of_vm` | method | (self, vm_ref) | private | `self._session._call_method(vutil, 'get_object_property', vm_ref, 'runtime').host` (src/nova/virt/vmwareapi/volumeops.py:L452) | 1/3 | `src/nova/virt/vmwareapi/volumeops.py:L450–L453` |
| `VMwareVolumeOps._get_res_pool_of_host` | method | (self, host) | private | `self._session._call_method(vutil, 'get_object_property', compute_res, 'resourcePool')` (src/nova/virt/vmwareapi/volumeops.py:L463) | 1/9 | `src/nova/virt/vmwareapi/volumeops.py:L455–L466` |
| `VMwareVolumeOps._get_res_pool_of_vm` | method | (self, vm_ref) | private | `self._get_res_pool_of_host(host)` (src/nova/virt/vmwareapi/volumeops.py:L473) | 1/3 | `src/nova/virt/vmwareapi/volumeops.py:L468–L473` |
| `VMwareVolumeOps._consolidate_vmdk_volume` | method | (self, instance, vm_ref, device, volume_ref, adapter_type=None, disk_type=None) | private | `` (src/nova/virt/vmwareapi/volumeops.py:L507) | 5/42 | `src/nova/virt/vmwareapi/volumeops.py:L475–L552` |
| `VMwareVolumeOps._get_vmdk_backed_disk_device` | method | (self, vm_ref, connection_info_data) | private | `device` (src/nova/virt/vmwareapi/volumeops.py:L565) | 2/9 | `src/nova/virt/vmwareapi/volumeops.py:L554–L565` |
| `VMwareVolumeOps._detach_volume_vmdk` | method | (self, connection_info, instance) | private | not declared | 5/26 | `src/nova/virt/vmwareapi/volumeops.py:L567–L605` |
| `VMwareVolumeOps._detach_volume_iscsi` | method | (self, connection_info, instance) | private | not declared | 3/15 | `src/nova/virt/vmwareapi/volumeops.py:L607–L627` |
| `VMwareVolumeOps._detach_volume_fcd` | method | (self, connection_info, instance) | private | not declared | 3/10 | `src/nova/virt/vmwareapi/volumeops.py:L629–L641` |
| `VMwareVolumeOps.detach_volume` | method | (self, connection_info, instance) | public | not declared | 4/12 | `src/nova/virt/vmwareapi/volumeops.py:L643–L655` |
| `VMwareVolumeOps.attach_root_volume` | method | (self, connection_info, instance, datastore, adapter_type=None) | public | not declared | 2/12 | `src/nova/virt/vmwareapi/volumeops.py:L657–L673` |
| `VMwareVolumeOps._get_volume_ref` | staticmethod | — | private | not declared | — | `src/nova/virt/vmwareapi/volumeops.py:L321–L324` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/virt/vmwareapi/volumeops.py:L20)
- `oslo_vmware`: imports `exceptions as oslo_vmw_exceptions` (src/nova/virt/vmwareapi/volumeops.py:L21)
- `oslo_vmware`: imports `vim_util as vutil` (src/nova/virt/vmwareapi/volumeops.py:L22)
- `nova.compute`: imports `power_state` (src/nova/virt/vmwareapi/volumeops.py:L24)
- `import nova.conf` (src/nova/virt/vmwareapi/volumeops.py:L25)
- `nova`: imports `exception` (src/nova/virt/vmwareapi/volumeops.py:L26)
- `nova.i18n`: imports `_` (src/nova/virt/vmwareapi/volumeops.py:L27)
- `nova.virt.vmwareapi`: imports `constants` (src/nova/virt/vmwareapi/volumeops.py:L28)
- `nova.virt.vmwareapi`: imports `session` (src/nova/virt/vmwareapi/volumeops.py:L29)
- `nova.virt.vmwareapi`: imports `vm_util` (src/nova/virt/vmwareapi/volumeops.py:L30)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/vmwareapi/volumeops.py:L32)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/vmwareapi/volumeops.py:L33)

