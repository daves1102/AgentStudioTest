# src/nova/tests/unit/virt/vmwareapi/fake.py

## Overview

This file implements the `fake` module, defining 41 classs, 1 constant, 1 field, 37 functions, 95 methods, 1 property, 6 variables, 10 imports, 5 side effects, 1 security surface entry.

Lines: total 1690, code 1277, comment 77, blank 336

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_CLASSES` | variable | — | unexported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L35–L38` |
| `_FAKE_FILE_SIZE` | variable | — | unexported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L40–L40` |
| `_FAKE_VCENTER_UUID` | variable | — | unexported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L41–L41` |
| `_db_content` | variable | — | unexported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L43–L43` |
| `_array_types` | variable | — | unexported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L44–L44` |
| `_vim_map` | variable | — | unexported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L45–L45` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L47–L47` |
| `reset` | function | — | exported | not declared | 1/15 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L50–L65` |
| `cleanup` | function | — | exported | not declared | 3/6 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L68–L76` |
| `_create_object` | function | (table_obj) | unexported | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L79–L82` |
| `get_object` | function | (obj_ref) | exported | `_db_content[obj_ref.type][obj_ref.value]` (src/nova/tests/unit/virt/vmwareapi/fake.py:L87) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L85–L87` |
| `get_objects` | function | (obj_type) | exported | `_db_content[obj_type].values()` (src/nova/tests/unit/virt/vmwareapi/fake.py:L92) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L90–L92` |
| `get_first_object` | function | (obj_type) | exported | `next(iter(_db_content[obj_type].values()))` (src/nova/tests/unit/virt/vmwareapi/fake.py:L97) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L95–L97` |
| `get_first_object_ref` | function | (obj_type) | exported | `get_first_object(obj_type).obj` (src/nova/tests/unit/virt/vmwareapi/fake.py:L102) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L100–L102` |
| `_no_objects_of_type` | function | (obj_type) | unexported | `not _db_content.get(obj_type)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L106) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L105–L106` |
| `_convert_to_array_of_mor` | function | (mors) | unexported | `array_of_mors` (src/nova/tests/unit/virt/vmwareapi/fake.py:L113) | 1/4 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L109–L113` |
| `_convert_to_array_of_opt_val` | function | (optvals) | unexported | `array_of_optv` (src/nova/tests/unit/virt/vmwareapi/fake.py:L120) | 1/4 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L116–L120` |
| `_create_array_of_type` | function | (t) | unexported | `_array_types[t]()` (src/nova/tests/unit/virt/vmwareapi/fake.py:L126); `array_type()` (src/nova/tests/unit/virt/vmwareapi/fake.py:L138) | 2/9 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L123–L138` |
| `_create_array_of_type.__init__` | function | (self) | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L131–L133` |
| `FakeRetrieveResult` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L141–L150` |
| `FakeRetrieveResult.__init__` | method | (self, token=None) | public | not declared | 2/4 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L144–L147` |
| `FakeRetrieveResult.add_object` | method | (self, obj) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L149–L150` |
| `get_object_refs` | function | (obj_type) | exported | not declared | 2/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L153–L156` |
| `update_object` | function | (table_obj) | exported | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L159–L161` |
| `Prop` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L164–L169` |
| `Prop.__init__` | method | (self, name=None, val=None) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L167–L169` |
| `ManagedObjectReference` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L172–L195` |
| `ManagedObjectReference.__init__` | method | (self, name="ManagedObject", value=None) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L175–L187` |
| `ManagedObjectReference.__repr__` | method | (self) | public | `f'{self._type}:{self.value}'` (src/nova/tests/unit/virt/vmwareapi/fake.py:L190) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L189–L190` |
| `ManagedObjectReference.__eq__` | method | (self, other) | public | `(other is not None and vim_util.get_moref_value(other) == self.value and vim_util.get_moref_type(other) == self.type)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L193) | 3/4 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L192–L195` |
| `ObjectContent` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L198–L222` |
| `ObjectContent.__init__` | method | (self, obj_ref, prop_list=None, missing_list=None) | public | not declared | 5/10 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L204–L222` |
| `ManagedObject` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L225–L286` |
| `ManagedObject._counter` | field | — | private | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L227–L227` |
| `ManagedObject.__init__` | method | (self, mo_id_prefix="obj") | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L229–L235` |
| `ManagedObject.set` | method | (self, attr, val) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L237–L242` |
| `ManagedObject.get` | method | (self, attr) | public | `self.__getattr__(attr)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L248) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L244–L248` |
| `ManagedObject.delete` | method | (self, attr) | public | not declared | 3/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L250–L252` |
| `ManagedObject.__setattr__` | method | (self, attr, val) | public | `` (src/nova/tests/unit/virt/vmwareapi/fake.py:L259) | 3/9 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L254–L263` |
| `ManagedObject.__getattr__` | method | (self, attr) | public | `elem.val` (src/nova/tests/unit/virt/vmwareapi/fake.py:L271) | 3/7 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L265–L274` |
| `ManagedObject._generate_moid` | method | (self, prefix) | private | `prefix + "-" + str(self.__class__._counter)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L279) | 1/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L276–L279` |
| `ManagedObject.__repr__` | method | (self) | public | `"{}:{}({})".format(self.obj._type, self.obj.value, ", ".join( "{}={}".format(p.name, p.val if p.name == "name" else "<>") for p in self.propSet))` (src/nova/tests/unit/virt/vmwareapi/fake.py:L283) | 3/5 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L281–L286` |
| `DataObject` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L289–L301` |
| `DataObject.__init__` | method | (self, obj_name=None) | public | not declared | 2/4 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L292–L295` |
| `DataObject.__repr__` | method | (self) | public | `str(self.__dict__)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L298) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L297–L298` |
| `DataObject.__eq__` | method | (self, other) | public | `self.__dict__ == other.__dict__` (src/nova/tests/unit/virt/vmwareapi/fake.py:L301) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L300–L301` |
| `HostInternetScsiHba` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L304–L311` |
| `HostInternetScsiHba.__init__` | method | (self, iscsi_name=None) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L307–L311` |
| `FileAlreadyExists` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L314–L319` |
| `FileAlreadyExists.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L317–L319` |
| `FileNotFound` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L322–L327` |
| `FileNotFound.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L325–L327` |
| `FileFault` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L330–L335` |
| `FileFault.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L333–L335` |
| `CannotDeleteFile` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L338–L343` |
| `CannotDeleteFile.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L341–L343` |
| `FileLocked` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L346–L351` |
| `FileLocked.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L349–L351` |
| `VirtualDisk` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L354–L361` |
| `VirtualDisk.__init__` | method | (self, controllerKey=0, unitNumber=0) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L357–L361` |
| `VirtualDiskFlatVer2BackingInfo` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L364–L370` |
| `VirtualDiskFlatVer2BackingInfo.__init__` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L367–L370` |
| `VirtualDiskRawDiskMappingVer1BackingInfo` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L373–L378` |
| `VirtualDiskRawDiskMappingVer1BackingInfo.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L376–L378` |
| `VirtualIDEController` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L381–L384` |
| `VirtualIDEController.__init__` | method | (self, key=0) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L383–L384` |
| `VirtualLsiLogicController` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L387–L394` |
| `VirtualLsiLogicController.__init__` | method | (self, key=0, scsiCtlrUnitNumber=0, busNumber=0) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L390–L394` |
| `VirtualLsiLogicSASController` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L397–L399` |
| `VirtualPCNet32` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L402–L407` |
| `VirtualPCNet32.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L405–L407` |
| `OptionValue` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L410–L416` |
| `OptionValue.__init__` | method | (self, key=None, value=None) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L413–L416` |
| `VirtualMachine` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L419–L547` |
| `VirtualMachine.__init__` | method | (self, **kwargs) | public | not declared | 3/59 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L422–L485` |
| `VirtualMachine._update_extra_config` | method | (self, extra) | private | `` (src/nova/tests/unit/virt/vmwareapi/fake.py:L493) | 3/13 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L487–L499` |
| `VirtualMachine.reconfig` | method | (self, factory, val) | public | `` (src/nova/tests/unit/virt/vmwareapi/fake.py:L522); `` (src/nova/tests/unit/virt/vmwareapi/fake.py:L530) | 13/31 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L501–L547` |
| `Folder` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L550–L555` |
| `Folder.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L553–L555` |
| `Network` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L558–L563` |
| `Network.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L561–L563` |
| `ResourcePool` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L566–L604` |
| `ResourcePool.__init__` | method | (self, name="test_ResPool", value="resgroup-test") | public | not declared | 1/34 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L569–L604` |
| `DatastoreHostMount` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L607–L614` |
| `DatastoreHostMount.__init__` | method | (self, value='host-100') | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L608–L614` |
| `ClusterComputeResource` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L617–L691` |
| `ClusterComputeResource.__init__` | method | (self, name="test_cluster") | public | not declared | 1/18 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L620–L639` |
| `ClusterComputeResource._add_root_resource_pool` | method | (self, r_pool) | private | not declared | 2/5 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L641–L645` |
| `ClusterComputeResource._add_host` | method | (self, host_sys) | private | not declared | 3/9 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L647–L656` |
| `ClusterComputeResource._add_datastore` | method | (self, datastore) | private | not declared | 3/8 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L658–L665` |
| `ClusterComputeResource._update_summary` | method | (self) | private | not declared | 4/22 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L668–L691` |
| `Datastore` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L694–L706` |
| `Datastore.__init__` | method | (self, name="fake-ds", capacity=1024, free=500, accessible=True, maintenance_mode="normal") | public | not declared | 1/10 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L697–L706` |
| `HostNetworkSystem` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L709–L722` |
| `HostNetworkSystem.__init__` | method | (self, name="networkSystem") | public | not declared | 1/8 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L712–L722` |
| `HostStorageSystem` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L725–L729` |
| `HostStorageSystem.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L728–L729` |
| `HostSystem` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L732–L897` |
| `HostSystem.__init__` | method | (self, name="ha-host", connected=True, ds_ref=None, maintenance_mode=False) | public | not declared | 6/89 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L735–L847` |
| `HostSystem._add_iscsi_target` | method | (self, data) | private | not declared | 1/22 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L849–L872` |
| `HostSystem._add_port_group` | method | (self, spec) | private | not declared | 1/18 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L874–L897` |
| `Datacenter` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L900–L923` |
| `Datacenter.__init__` | method | (self, name="ha-datacenter", ds_ref=None) | public | not declared | 4/21 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L903–L923` |
| `Task` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L926–L944` |
| `Task.__init__` | method | (self, task_name, state="running", result=None, error_fault=None) | public | not declared | 3/16 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L929–L944` |
| `create_host_network_system` | function | — | exported | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L947–L949` |
| `create_host_storage_system` | function | — | exported | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L952–L954` |
| `create_host` | function | (ds_ref=None) | exported | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L957–L959` |
| `create_datacenter` | function | (name, ds_ref=None) | exported | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L962–L964` |
| `create_datastore` | function | (name, capacity, free) | exported | `data_store.obj` (src/nova/tests/unit/virt/vmwareapi/fake.py:L970) | 1/4 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L967–L970` |
| `create_res_pool` | function | — | exported | `res_pool.obj` (src/nova/tests/unit/virt/vmwareapi/fake.py:L976) | 1/4 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L973–L976` |
| `create_folder` | function | — | exported | `folder.obj` (src/nova/tests/unit/virt/vmwareapi/fake.py:L982) | 1/4 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L979–L982` |
| `create_network` | function | — | exported | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L985–L987` |
| `create_cluster` | function | (name, ds_ref) | exported | `cluster` (src/nova/tests/unit/virt/vmwareapi/fake.py:L999) | 3/10 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L990–L999` |
| `create_vm` | function | (uuid=None, name=None, cpus=1, memory=128, devices=None, vmPathName=None, extraConfig=None, res_pool_ref=None, host_ref=None, version=None) | exported | `vm.obj` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1058) | 10/43 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1002–L1058` |
| `create_task` | function | (task_name, state="running", result=None, error_fault=None) | exported | `task` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1064) | 1/4 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1061–L1064` |
| `_add_file` | function | (file_path) | unexported | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1067–L1069` |
| `_remove_file` | function | (file_path) | unexported | not declared | 6/12 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1072–L1086` |
| `fake_plug_vifs` | function | (*args, **kwargs) | exported | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1089–L1091` |
| `fake_get_network` | function | (*args, **kwargs) | exported | `{'type': 'fake'}` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1096) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1094–L1096` |
| `assertPathExists` | function | (test, path) | exported | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1099–L1100` |
| `assertPathNotExists` | function | (test, path) | exported | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1103–L1104` |
| `get_file` | function | (file_path) | exported | `file_path in _db_content.get("files")` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1109) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1107–L1109` |
| `fake_upload_image` | function | (context, image, instance, **kwargs) | exported | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1112–L1114` |
| `fake_fetch_image` | function | (context, instance, host, port, dc_name, ds_name, file_path, cookies=None) | exported | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1117–L1121` |
| `_get_vm_mdo` | function | (vm_ref) | unexported | `vms[vm_ref.value]` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1130) | 3/9 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1124–L1133` |
| `_merge_extraconfig` | function | (existing, changes) | unexported | `existing` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1146) | 9/10 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1136–L1146` |
| `FakeFactory` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1149–L1160` |
| `FakeFactory.create` | method | (self, obj_name) | public | `DataObject(obj_name)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1158); `fake_klass()` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1160) | 2/8 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1152–L1160` |
| `SharesInfo` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1163–L1167` |
| `SharesInfo.__init__` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1164–L1167` |
| `VirtualEthernetCardResourceAllocation` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1170–L1173` |
| `VirtualEthernetCardResourceAllocation.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1171–L1173` |
| `VirtualE1000` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1176–L1179` |
| `VirtualE1000.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1177–L1179` |
| `FakeService` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1182–L1189` |
| `FakeService.Logout` | method | (self, session_manager) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1185–L1186` |
| `FakeService.FindExtension` | method | (self, extension_manager, key) | public | `[]` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1189) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1188–L1189` |
| `FakeClient` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1192–L1197` |
| `FakeClient.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1195–L1197` |
| `FakeSession` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1200–L1210` |
| `FakeSession.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1203–L1204` |
| `FakeSession._call_method` | method | (self, module, method, *args, **kwargs) | private | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1206–L1207` |
| `FakeSession._wait_for_task` | method | (self, task_ref) | private | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1209–L1210` |
| `FakeObjectRetrievalSession` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1213–L1231` |
| `FakeObjectRetrievalSession.__init__` | method | (self, *ret) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1220–L1223` |
| `FakeObjectRetrievalSession._call_method` | method | (self, module, method, *args, **kwargs) | private | `` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1228); `self.ret[self.ind - 1]` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1231) | 3/6 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1225–L1231` |
| `get_fake_vim_object` | function | (vmware_api_session) | exported | `_vim_map[key]` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1238) | 2/5 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1234–L1238` |
| `FakeVim` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1241–L1690` |
| `FakeVim.__init__` | method | (self, protocol="https", host="localhost", trace=None) | public | not declared | 1/19 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1244–L1271` |
| `FakeVim.service_content` | method | (self) | public | `self._service_content` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1275) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1274–L1275` |
| `FakeVim.__repr__` | method | (self) | public | `"Fake VIM Object"` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1278) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1277–L1278` |
| `FakeVim.__str__` | method | (self) | public | `"Fake VIM Object"` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1281) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1280–L1281` |
| `FakeVim._login` | method | (self) | private | `session` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1290) | 1/7 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1283–L1290` |
| `FakeVim._terminate_session` | method | (self, *args, **kwargs) | private | `` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1296) | 2/5 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1292–L1297` |
| `FakeVim._check_session` | method | (self) | private | not declared | 3/6 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1299–L1305` |
| `FakeVim._session_is_active` | method | (self, *args, **kwargs) | private | `True` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1310); `False` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1312) | 2/6 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1307–L1312` |
| `FakeVim._create_vm` | method | (self, method, *args, **kwargs) | private | `create_task(method, "error", error_fault=ex).obj` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1321); `task_mdo.obj` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1337) | 4/19 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1314–L1337` |
| `FakeVim._create_folder` | method | (self, method, *args, **kwargs) | private | `create_folder()` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1340) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1339–L1340` |
| `FakeVim._reconfig_vm` | method | (self, method, *args, **kwargs) | private | `task_mdo.obj` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1348) | 1/6 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1342–L1348` |
| `FakeVim._rename` | method | (self, method, *args, **kwargs) | private | `task_mdo.obj` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1355) | 1/6 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1350–L1355` |
| `FakeVim._create_copy_disk` | method | (self, method, vmdk_file_path) | private | `task_mdo.obj` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1364) | 1/6 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1357–L1364` |
| `FakeVim._extend_disk` | method | (self, method, size) | private | `task_mdo.obj` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1369) | 1/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1366–L1369` |
| `FakeVim._snapshot_vm` | method | (self, method) | private | `task_mdo.obj` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1374) | 1/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1371–L1374` |
| `FakeVim._find_all_by_uuid` | method | (self, *args, **kwargs) | private | `vm_refs` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1383) | 3/8 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1376–L1383` |
| `FakeVim._delete_snapshot` | method | (self, method, *args, **kwargs) | private | `task_mdo.obj` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1388) | 1/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1385–L1388` |
| `FakeVim._delete_file` | method | (self, method, *args, **kwargs) | private | `task_mdo.obj` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1394) | 1/4 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1390–L1394` |
| `FakeVim._just_return` | method | (self) | private | `` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1398) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1396–L1398` |
| `FakeVim._just_return_task` | method | (self, method) | private | `task_mdo.obj` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1403) | 1/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1400–L1403` |
| `FakeVim._clone_vm` | method | (self, method, *args, **kwargs) | private | `task_mdo.obj` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1438) | 5/28 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1405–L1438` |
| `FakeVim._unregister_vm` | method | (self, method, *args, **kwargs) | private | `task_mdo.obj` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1446) | 1/6 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1440–L1446` |
| `FakeVim._search_ds` | method | (self, method, *args, **kwargs) | private | `task_mdo.obj` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1487) | 13/35 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1448–L1487` |
| `FakeVim._move_file` | method | (self, method, *args, **kwargs) | private | `task_mdo.obj` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1504) | 5/14 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1489–L1504` |
| `FakeVim._make_dir` | method | (self, method, *args, **kwargs) | private | not declared | 2/5 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1506–L1511` |
| `FakeVim._set_power_state` | method | (self, method, vm_ref, pwr_state="poweredOn") | private | `task_mdo.obj` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1518) | 1/5 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1513–L1518` |
| `FakeVim._retrieve_properties_continue` | method | (self, method, *args, **kwargs) | private | `FakeRetrieveResult()` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1522) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1520–L1522` |
| `FakeVim._retrieve_properties_cancel` | method | (self, method, *args, **kwargs) | private | `None` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1526) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1524–L1526` |
| `FakeVim._retrieve_properties` | method | (self, method, *args, **kwargs) | private | `lst_ret_objs` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1575) | 8/32 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1528–L1575` |
| `FakeVim._add_port_group` | method | (self, method, *args, **kwargs) | private | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1577–L1580` |
| `FakeVim._add_iscsi_send_tgt` | method | (self, method, *args, **kwargs) | private | not declared | 2/10 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1582–L1592` |
| `FakeVim.__getattr__` | method | (self, attr_name) | public | `lambda *args, **kwargs: self._login()` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1598); `lambda *args, **kwargs: self._session_is_active( *args, **kwargs)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1600); `lambda *args, **kwargs: self._terminate_session( *args, **kwargs)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1603); `lambda *args, **kwargs: self._create_vm(attr_name, *args, **kwargs)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1606); `lambda *args, **kwargs: self._create_folder(attr_name, *args, **kwargs)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1609); `lambda *args, **kwargs: self._reconfig_vm(attr_name, *args, **kwargs)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1612); `lambda *args, **kwargs: self._rename(attr_name, *args, **kwargs)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1615); `lambda *args, **kwargs: self._create_copy_disk(attr_name, kwargs.get("name"))` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1618); `lambda *args, **kwargs: self._delete_file(attr_name, *args, **kwargs)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1621); `lambda *args, **kwargs: self._set_power_state(attr_name, args[0], "poweredOn")` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1624); `lambda *args, **kwargs: self._set_power_state(attr_name, args[0], "poweredOff")` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1627); `lambda *args, **kwargs: self._just_return()` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1630); `lambda *args, **kwargs: self._set_power_state(attr_name, args[0], "poweredOn")` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1632); `lambda *args, **kwargs: self._set_power_state(attr_name, args[0], "suspended")` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1635); `lambda *args, **kwargs: self._snapshot_vm(attr_name)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1638); `lambda *args, **kwargs: self._delete_snapshot(attr_name, *args, **kwargs)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1640); `lambda *args, **kwargs: self._create_copy_disk(attr_name, kwargs.get("destName"))` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1643); `lambda *args, **kwargs: self._extend_disk(attr_name, kwargs.get("size"))` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1646); `lambda *args, **kwargs: self._unregister_vm(attr_name, *args, **kwargs)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1649); `lambda *args, **kwargs: self._unregister_vm(attr_name, *args, **kwargs)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1652); `lambda *args, **kwargs: self._clone_vm(attr_name, *args, **kwargs)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1655); `lambda *args, **kwargs: self._find_all_by_uuid(attr_name, *args, **kwargs)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1658); `lambda *args, **kwargs: self._search_ds(attr_name, *args, **kwargs)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1661); `lambda *args, **kwargs: self._move_file(attr_name, *args, **kwargs)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1664); `lambda *args, **kwargs: self._make_dir(attr_name, *args, **kwargs)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1667); `lambda *args, **kwargs: self._retrieve_properties( attr_name, *args, **kwargs)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1670); `lambda *args, **kwargs: self._retrieve_properties_continue( attr_name, *args, **kwargs)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1673); `lambda *args, **kwargs: self._retrieve_properties_cancel( attr_name, *args, **kwargs)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1676); `lambda *args, **kwargs: self._add_port_group(attr_name, *args, **kwargs)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1679); `lambda *args, **kwargs: self._just_return_task(attr_name)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1687); `lambda *args, **kwargs: self._add_iscsi_send_tgt(attr_name, *args, **kwargs)` (src/nova/tests/unit/virt/vmwareapi/fake.py:L1689) | 33/97 | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1594–L1690` |
| `FakeVim.service_content` | property | — | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/fake.py:L1273–L1275` |

## Dependencies

- `import collections` (src/nova/tests/unit/virt/vmwareapi/fake.py:L22)
- `import sys` (src/nova/tests/unit/virt/vmwareapi/fake.py:L23)
- `oslo_log`: imports `log as logging` (src/nova/tests/unit/virt/vmwareapi/fake.py:L25)
- `oslo_utils`: imports `units` (src/nova/tests/unit/virt/vmwareapi/fake.py:L26)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/virt/vmwareapi/fake.py:L27)
- `oslo_vmware`: imports `exceptions as vexc` (src/nova/tests/unit/virt/vmwareapi/fake.py:L28)
- `oslo_vmware.objects`: imports `datastore as ds_obj` (src/nova/tests/unit/virt/vmwareapi/fake.py:L29)
- `oslo_vmware`: imports `vim_util` (src/nova/tests/unit/virt/vmwareapi/fake.py:L30)
- `nova`: imports `exception` (src/nova/tests/unit/virt/vmwareapi/fake.py:L32)
- `nova.virt.vmwareapi`: imports `constants` (src/nova/tests/unit/virt/vmwareapi/fake.py:L33)

## Side Effects

- **network**: self.client.factory = FakeFactory() (src/nova/tests/unit/virt/vmwareapi/fake.py:L1250)
- **network**: self.client.cookiejar = "Fake-CookieJar" (src/nova/tests/unit/virt/vmwareapi/fake.py:L1252)
- **network**: service_content = self.client.factory.create('ns0:ServiceContent') (src/nova/tests/unit/virt/vmwareapi/fake.py:L1254)
- **network**: vm_mdo.reconfig(self.client.factory, kwargs.get("spec")) (src/nova/tests/unit/virt/vmwareapi/fake.py:L1346)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/unit/virt/vmwareapi/fake.py:L47)

## Security Surface

- **sink** (`db-write`): """Update objects of the type.""" (src/nova/tests/unit/virt/vmwareapi/fake.py:L160)

