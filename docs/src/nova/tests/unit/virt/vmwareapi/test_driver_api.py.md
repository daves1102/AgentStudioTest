# src/nova/tests/unit/virt/vmwareapi/test_driver_api.py

## Overview

This file implements the `test_driver_api` module, defining 2 classs, 6 constants, 28 functions, 186 methods, 45 imports, 8 side effects, 2 security surface entries.

Lines: total 2433, code 2029, comment 91, blank 313

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L71–L71` |
| `HOST` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L73–L73` |
| `DEFAULT_FLAVORS` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L75–L101` |
| `CONTEXT` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L103–L103` |
| `DEFAULT_FLAVOR_OBJS` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L105–L109` |
| `VMwareDriverStartupTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L112–L145` |
| `VMwareDriverStartupTestCase._start_driver_with_flags` | method | (self, expected_exception_type, startup_flags) | private | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L113–L118` |
| `VMwareDriverStartupTestCase.test_start_driver_no_user` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L120–L124` |
| `VMwareDriverStartupTestCase.test_start_driver_no_host` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L126–L130` |
| `VMwareDriverStartupTestCase.test_start_driver_no_password` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L132–L136` |
| `VMwareDriverStartupTestCase.test_start_driver_with_user_host_password` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L138–L145` |
| `VMwareAPIVMTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L148–L2433` |
| `VMwareAPIVMTestCase.REQUIRES_LOCKING` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L152–L152` |
| `VMwareAPIVMTestCase._create_service` | method | (self, **kwargs) | private | `objects.Service(**service_ref)` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L161) | 1/8 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L154–L161` |
| `VMwareAPIVMTestCase.setUp` | method | (self, mock_register) | public | not declared | 1/52 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L164–L224` |
| `VMwareAPIVMTestCase.tearDown` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L226–L228` |
| `VMwareAPIVMTestCase.test_get_host_ip_addr` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L230–L231` |
| `VMwareAPIVMTestCase.test_init_host_with_no_session` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L233–L237` |
| `VMwareAPIVMTestCase.test_init_host` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L239–L243` |
| `VMwareAPIVMTestCase._set_exception_vars` | method | (self) | private | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L245–L249` |
| `VMwareAPIVMTestCase.test_cleanup_host` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L251–L256` |
| `VMwareAPIVMTestCase.test_driver_capabilities` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L258–L262` |
| `VMwareAPIVMTestCase.test_configuration_pbm` | method | (self, get_profile_mock) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L265–L270` |
| `VMwareAPIVMTestCase.test_configuration_pbm_bad_default` | method | (self, get_profile_mock) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L273–L279` |
| `VMwareAPIVMTestCase.test_login_retries` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L281–L302` |
| `VMwareAPIVMTestCase.test_login_retries._fake_login` | function | (_self) | private | `self.login_session` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L290) | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L286–L290` |
| `VMwareAPIVMTestCase.test_login_retries._fake_check_session` | function | (_self) | private | `True` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L293) | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L292–L293` |
| `VMwareAPIVMTestCase._get_flavor_by_name` | method | (self, type) | private | `flavor` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L307); `{'memory_mb': 128, 'root_gb': 0, 'deleted_at': None, 'name': 'm1.micro', 'deleted': 0, 'created_at': None, 'ephemeral_gb': 0, 'updated_at': None, 'disabled': False, 'vcpus': 1, 'extra_specs': {}, 'swa` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L309) | 4/11 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L304–L314` |
| `VMwareAPIVMTestCase._create_instance` | method | (self, node=None, set_image_ref=True, uuid=None, flavor='m1.large', ephemeral=None, flavor_updates=None) | private | not declared | 6/36 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L316–L351` |
| `VMwareAPIVMTestCase._create_vm` | method | (self, node=None, num_instances=1, uuid=None, flavor='m1.large', powered_on=True, ephemeral=None, bdi=None, flavor_updates=None) | private | not declared | 2/18 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L353–L371` |
| `VMwareAPIVMTestCase._get_vm_record` | method | (self) | private | `vm` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L379) | 3/7 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L373–L380` |
| `VMwareAPIVMTestCase._get_info` | method | (self, uuid=None, node=None, name=None) | private | `self.conn.get_info(fake_instance.fake_instance_obj( None, **{'uuid': uuid, 'name': name, 'node': node}))` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L386) | 4/9 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L382–L390` |
| `VMwareAPIVMTestCase._check_vm_record` | method | (self, num_instances=1, powered_on=True, uuid=None) | private | not declared | 8/30 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L392–L437` |
| `VMwareAPIVMTestCase._check_vm_info` | method | (self, info, pwr_state=power_state.RUNNING) | private | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L439–L443` |
| `VMwareAPIVMTestCase.test_instance_exists` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L445–L451` |
| `VMwareAPIVMTestCase.test_list_instances_1` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L453–L456` |
| `VMwareAPIVMTestCase.test_list_instance_uuids` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L458–L461` |
| `VMwareAPIVMTestCase._cached_files_exist` | method | (self, exists=True) | private | not declared | 2/8 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L463–L470` |
| `VMwareAPIVMTestCase.test_instance_dir_disk_created` | method | (self, mock_from_image) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L474–L486` |
| `VMwareAPIVMTestCase.test_cache_dir_disk_created` | method | (self, mock_from_image) | public | not declared | 1/16 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L490–L509` |
| `VMwareAPIVMTestCase._iso_disk_type_created` | method | (self, flavor='m1.large') | private | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L511–L517` |
| `VMwareAPIVMTestCase.test_iso_disk_type_created` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L519–L522` |
| `VMwareAPIVMTestCase.test_iso_disk_type_created_with_root_gb_0` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L524–L527` |
| `VMwareAPIVMTestCase.test_iso_disk_cdrom_attach` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L529–L541` |
| `VMwareAPIVMTestCase.test_iso_disk_cdrom_attach.fake_attach_cdrom` | function | (vm_ref, instance, data_store_ref, iso_uploaded_path) | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L534–L536` |
| `VMwareAPIVMTestCase.test_iso_disk_cdrom_attach_with_config_drive` | method | (self, mock_from_image) | public | not declared | 1/29 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L545–L580` |
| `VMwareAPIVMTestCase.test_iso_disk_cdrom_attach_with_config_drive.fake_attach_cdrom` | function | (vm_ref, instance, data_store_ref, iso_uploaded_path) | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L563–L566` |
| `VMwareAPIVMTestCase.test_ephemeral_disk_attach` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L582–L586` |
| `VMwareAPIVMTestCase.test_ephemeral_disk_attach_from_bdi` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L588–L602` |
| `VMwareAPIVMTestCase.test_ephemeral_disk_attach_from_bdii_with_no_ephs` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L604–L609` |
| `VMwareAPIVMTestCase.test_cdrom_attach_with_config_drive` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L611–L629` |
| `VMwareAPIVMTestCase.test_cdrom_attach_with_config_drive.fake_attach_cdrom` | function | (vm_ref, instance, data_store_ref, iso_uploaded_path) | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L617–L620` |
| `VMwareAPIVMTestCase.test_destroy_with_attached_volumes` | method | (self, mock_destroy, mock_detach_volume, mock_power_off) | public | not declared | 1/18 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L634–L651` |
| `VMwareAPIVMTestCase.test_destroy_with_attached_volumes_missing` | method | (self, mock_destroy, mock_power_off) | public | not declared | 1/15 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L656–L670` |
| `VMwareAPIVMTestCase.test_destroy_with_attached_volumes_with_exception` | method | (self, mock_destroy, mock_detach_volume) | public | not declared | 1/15 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L675–L689` |
| `VMwareAPIVMTestCase.test_destroy_with_attached_volumes_with_disk_not_found` | method | (self, mock_destroy, mock_detach_volume) | public | not declared | 1/15 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L694–L708` |
| `VMwareAPIVMTestCase.test_spawn` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L710–L713` |
| `VMwareAPIVMTestCase.test_spawn_vm_ref_cached` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L715–L719` |
| `VMwareAPIVMTestCase.test_spawn_power_on` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L721–L724` |
| `VMwareAPIVMTestCase.test_spawn_root_size_0` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L726–L735` |
| `VMwareAPIVMTestCase._spawn_with_delete_exception` | method | (self, fault=None) | private | not declared | 2/13 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L737–L758` |
| `VMwareAPIVMTestCase._spawn_with_delete_exception.fake_call_method` | function | (module, method, *args, **kwargs) | public | `task_mdo.obj` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L745); `task_ref` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L746) | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L739–L746` |
| `VMwareAPIVMTestCase.test_spawn_with_delete_exception_not_found` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L760–L761` |
| `VMwareAPIVMTestCase.test_spawn_with_delete_exception_file_fault` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L763–L764` |
| `VMwareAPIVMTestCase.test_spawn_with_delete_exception_cannot_delete_file` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L766–L767` |
| `VMwareAPIVMTestCase.test_spawn_with_delete_exception_file_locked` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L769–L770` |
| `VMwareAPIVMTestCase.test_spawn_with_delete_exception_general` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L772–L773` |
| `VMwareAPIVMTestCase.test_spawn_disk_extend` | method | (self, mock_extend) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L776–L782` |
| `VMwareAPIVMTestCase.test_spawn_disk_extend_exists` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L784–L800` |
| `VMwareAPIVMTestCase.test_spawn_disk_extend_exists._fake_extend` | function | (instance, requested_size, name, dc_ref) | private | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L789–L790` |
| `VMwareAPIVMTestCase.test_spawn_disk_extend_sparse` | method | (self, mock_from_image) | public | not declared | 1/22 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L804–L827` |
| `VMwareAPIVMTestCase.test_spawn_disk_extend_failed_copy` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L829–L854` |
| `VMwareAPIVMTestCase.test_spawn_disk_extend_failed_copy.fake_wait_for_task` | function | (task_ref) | public | `self.wait_task(task_ref)` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L841) | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L838–L841` |
| `VMwareAPIVMTestCase.test_spawn_disk_extend_failed_copy.fake_call_method` | function | (module, method, *args, **kwargs) | public | `'fake-copy-task'` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L845); `self.call_method(module, method, *args, **kwargs)` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L847) | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L843–L847` |
| `VMwareAPIVMTestCase.test_spawn_disk_extend_failed_partial_copy` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L856–L891` |
| `VMwareAPIVMTestCase.test_spawn_disk_extend_failed_partial_copy.fake_wait_for_task` | function | (task_ref) | public | `self.wait_task(task_ref)` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L877) | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L870–L877` |
| `VMwareAPIVMTestCase.test_spawn_disk_extend_failed_partial_copy.fake_call_method` | function | (module, method, *args, **kwargs) | public | `task_ref` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L883) | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L879–L883` |
| `VMwareAPIVMTestCase.test_spawn_disk_extend_failed_partial_copy_failed_cleanup` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L893–L935` |
| `VMwareAPIVMTestCase.test_spawn_disk_extend_failed_partial_copy_failed_cleanup.fake_wait_for_task` | function | (task_ref) | public | `self.wait_task(task_ref)` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L918) | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L909–L918` |
| `VMwareAPIVMTestCase.test_spawn_disk_extend_failed_partial_copy_failed_cleanup.fake_call_method` | function | (module, method, *args, **kwargs) | public | `'fake-delete-task'` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L922); `task_ref` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L927) | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L920–L927` |
| `VMwareAPIVMTestCase.test_spawn_disk_invalid_disk_size` | method | (self, mock_from_image) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L939–L949` |
| `VMwareAPIVMTestCase.test_spawn_disk_extend_insufficient_disk_space` | method | (self, mock_from_image) | public | not declared | 1/27 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L953–L993` |
| `VMwareAPIVMTestCase.test_spawn_disk_extend_insufficient_disk_space.fake_wait_for_task` | function | (task_ref) | public | `self.wait_task(task_ref)` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L977) | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L973–L977` |
| `VMwareAPIVMTestCase.test_spawn_disk_extend_insufficient_disk_space.fake_call_method` | function | (module, method, *args, **kwargs) | public | `task_ref` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L983) | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L979–L983` |
| `VMwareAPIVMTestCase.test_spawn_with_move_file_exists_exception` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L995–L1024` |
| `VMwareAPIVMTestCase.test_spawn_with_move_file_exists_exception.fake_wait_for_task` | function | (task_ref) | public | `self.wait_task(task_ref)` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1007) | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1002–L1007` |
| `VMwareAPIVMTestCase.test_spawn_with_move_file_exists_exception.fake_call_method` | function | (module, method, *args, **kwargs) | public | `task_ref` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1013) | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1009–L1013` |
| `VMwareAPIVMTestCase.test_spawn_with_move_general_exception` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1026–L1054` |
| `VMwareAPIVMTestCase.test_spawn_with_move_general_exception.fake_wait_for_task` | function | (task_ref) | public | `self.wait_task(task_ref)` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1038) | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1033–L1038` |
| `VMwareAPIVMTestCase.test_spawn_with_move_general_exception.fake_call_method` | function | (module, method, *args, **kwargs) | public | `task_ref` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1044) | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1040–L1044` |
| `VMwareAPIVMTestCase.test_spawn_with_move_poll_exception` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1056–L1071` |
| `VMwareAPIVMTestCase.test_spawn_with_move_poll_exception.fake_call_method` | function | (module, method, *args, **kwargs) | public | `task_mdo.obj` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1063); `task_ref` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1064) | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1059–L1064` |
| `VMwareAPIVMTestCase.test_spawn_with_move_file_exists_poll_exception` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1073–L1096` |
| `VMwareAPIVMTestCase.test_spawn_with_move_file_exists_poll_exception.fake_call_method` | function | (module, method, *args, **kwargs) | public | `task_mdo.obj` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1086); `task_ref` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1087) | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1080–L1087` |
| `VMwareAPIVMTestCase._spawn_attach_volume_vmdk` | method | (self, mock_info_get_mapping, mock_volume_in_mapping, mock_get_res_pool_of_vm, mock_attach_volume, mock_relocate_vm, set_image_ref=True) | private | not declared | 1/23 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1105–L1131` |
| `VMwareAPIVMTestCase.test_spawn_attach_volume_iscsi` | method | (self, mock_info_get_mapping, mock_block_volume_in_mapping, mock_attach_volume) | public | not declared | 1/17 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1137–L1154` |
| `VMwareAPIVMTestCase.test_spawn_hw_versions` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1156–L1161` |
| `VMwareAPIVMTestCase.mock_upload_image` | method | (self, context, image, instance, session, **kwargs) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1163–L1166` |
| `VMwareAPIVMTestCase.test_get_vm_ref_using_extra_config` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1168–L1183` |
| `VMwareAPIVMTestCase.test_search_vm_ref_by_identifier` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1185–L1199` |
| `VMwareAPIVMTestCase.test_get_object_for_optionvalue` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1201–L1207` |
| `VMwareAPIVMTestCase._test_snapshot` | method | (self) | private | not declared | 1/19 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1209–L1227` |
| `VMwareAPIVMTestCase.test_snapshot` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1229–L1231` |
| `VMwareAPIVMTestCase.test_snapshot_no_root_disk` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1233–L1237` |
| `VMwareAPIVMTestCase.test_snapshot_non_existent` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1239–L1243` |
| `VMwareAPIVMTestCase.test_snapshot_delete_vm_snapshot` | method | (self, mock_attach_volume, mock_create_vm_snapshot, mock_delete_vm_snapshot) | public | not declared | 1/16 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1249–L1267` |
| `VMwareAPIVMTestCase._snapshot_delete_vm_snapshot_exception` | method | (self, exception, call_count=1) | private | not declared | 2/21 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1269–L1290` |
| `VMwareAPIVMTestCase.test_snapshot_delete_vm_snapshot_exception` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1292–L1293` |
| `VMwareAPIVMTestCase.test_snapshot_delete_vm_snapshot_exception_retry` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1295–L1298` |
| `VMwareAPIVMTestCase.test_reboot` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1300–L1308` |
| `VMwareAPIVMTestCase.test_reboot_hard` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1310–L1318` |
| `VMwareAPIVMTestCase.test_reboot_with_uuid` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1320–L1329` |
| `VMwareAPIVMTestCase.test_reboot_non_existent` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1331–L1335` |
| `VMwareAPIVMTestCase.test_poll_rebooting_instances` | method | (self, mock_reboot) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1338–L1342` |
| `VMwareAPIVMTestCase.test_reboot_not_poweredon` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1344–L1353` |
| `VMwareAPIVMTestCase.test_suspend` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1355–L1361` |
| `VMwareAPIVMTestCase.test_suspend_non_existent` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1363–L1366` |
| `VMwareAPIVMTestCase.test_resume` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1368–L1377` |
| `VMwareAPIVMTestCase.test_resume_non_existent` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1379–L1382` |
| `VMwareAPIVMTestCase.test_resume_not_suspended` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1384–L1389` |
| `VMwareAPIVMTestCase.test_power_on` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1391–L1400` |
| `VMwareAPIVMTestCase.test_power_on_non_existent` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1402–L1405` |
| `VMwareAPIVMTestCase.test_power_off` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1407–L1413` |
| `VMwareAPIVMTestCase.test_power_off_non_existent` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1415–L1418` |
| `VMwareAPIVMTestCase.test_resume_state_on_host_boot` | method | (self, mock_get_vm_state, mock_reboot) | public | not declared | 1/10 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1423–L1432` |
| `VMwareAPIVMTestCase.test_resume_state_on_host_boot_no_reboot` | method | (self) | public | not declared | 2/14 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1434–L1447` |
| `VMwareAPIVMTestCase.test_detach_instance_volumes` | method | (self, detach_volume, block_device_info_get_mapping) | public | not declared | 1/21 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1451–L1478` |
| `VMwareAPIVMTestCase.test_detach_instance_volumes._mock_bdm` | function | (connection_info, device_name) | private | `{'connection_info': connection_info, 'device_name': device_name}` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1456) | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1455–L1457` |
| `VMwareAPIVMTestCase.test_destroy` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1480–L1489` |
| `VMwareAPIVMTestCase.test_destroy_no_datastore` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1491–L1502` |
| `VMwareAPIVMTestCase.test_destroy_non_existent` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1504–L1513` |
| `VMwareAPIVMTestCase.test_destroy_instance_without_compute` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1515–L1523` |
| `VMwareAPIVMTestCase._destroy_instance_without_vm_ref` | method | (self, task_state=None) | private | not declared | 2/19 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1525–L1544` |
| `VMwareAPIVMTestCase.test_destroy_instance_without_vm_ref` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1546–L1547` |
| `VMwareAPIVMTestCase.test_destroy_instance_without_vm_ref_with_resize_revert` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1549–L1551` |
| `VMwareAPIVMTestCase.test_destroy_instance_with_vm_ref_and_with_volumes` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1553–L1562` |
| `VMwareAPIVMTestCase._rescue` | method | (self, config_drive=False) | private | not declared | 2/29 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1564–L1613` |
| `VMwareAPIVMTestCase._rescue.fake_attach_disk_to_vm` | function | (vm_ref, instance, adapter_type, disk_type, vmdk_path=None, disk_size=None, linked_clone=False, controller_key=None, unit_number=None, device_name=None) | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1569–L1575` |
| `VMwareAPIVMTestCase._rescue.fake_create_config_drive` | function | (instance, injected_files, password, network_info, data_store_name, folder, instance_uuid, cookies) | public | `str(ds_obj.DatastorePath(data_store_name, instance_uuid, 'fake.iso'))` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1582) | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1578–L1583` |
| `VMwareAPIVMTestCase._rescue.fake_power_on_instance` | function | (session, instance, vm_ref=None) | public | `self._power_on(session, instance, vm_ref=vm_ref)` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1592) | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1590–L1592` |
| `VMwareAPIVMTestCase.test_get_diagnostics` | method | (self) | public | not declared | 2/21 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1615–L1635` |
| `VMwareAPIVMTestCase.test_get_instance_diagnostics` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1637–L1655` |
| `VMwareAPIVMTestCase.test_get_vnc_console_non_existent` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1657–L1662` |
| `VMwareAPIVMTestCase._test_get_vnc_console` | method | (self) | private | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1664–L1672` |
| `VMwareAPIVMTestCase.test_get_vnc_console` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1674–L1675` |
| `VMwareAPIVMTestCase.test_get_vnc_console_noport` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1677–L1682` |
| `VMwareAPIVMTestCase.test_get_console_output` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1684–L1698` |
| `VMwareAPIVMTestCase.test_get_volume_connector` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1700–L1708` |
| `VMwareAPIVMTestCase._test_vmdk_connection_info` | method | (self, type) | private | `{'driver_volume_type': type, 'serial': 'volume-fake-id', 'data': {'volume': 'vm-10', 'volume_id': 'volume-fake-id'}}` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1711) | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1710–L1714` |
| `VMwareAPIVMTestCase.test_volume_attach_vmdk` | method | (self, mock_attach_volume_vmdk) | public | not declared | 1/8 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1718–L1725` |
| `VMwareAPIVMTestCase.test_volume_detach_vmdk` | method | (self, mock_detach_volume_vmdk) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1729–L1737` |
| `VMwareAPIVMTestCase.test_attach_vmdk_disk_to_vm` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1739–L1772` |
| `VMwareAPIVMTestCase.test_detach_vmdk_disk_from_vm` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1774–L1784` |
| `VMwareAPIVMTestCase.test_volume_attach_iscsi` | method | (self, mock_attach_volume_iscsi) | public | not declared | 1/8 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1788–L1795` |
| `VMwareAPIVMTestCase.test_volume_detach_iscsi` | method | (self, mock_detach_volume_iscsi) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1799–L1807` |
| `VMwareAPIVMTestCase.test_attach_iscsi_disk_to_vm` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1809–L1838` |
| `VMwareAPIVMTestCase.test_iscsi_rescan_hba` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1840–L1858` |
| `VMwareAPIVMTestCase.test_iscsi_get_target` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1860–L1867` |
| `VMwareAPIVMTestCase.test_detach_iscsi_disk_from_vm` | method | (self, mock_iscsi_get_target, mock_get_rdm_disk, mock_detach_disk_from_vm) | public | not declared | 1/19 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1874–L1895` |
| `VMwareAPIVMTestCase.test_connection_info_get` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1897–L1903` |
| `VMwareAPIVMTestCase.test_connection_info_get_after_destroy` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1905–L1912` |
| `VMwareAPIVMTestCase.test_image_aging_image_used` | method | (self, mock_get_by_inst) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1916–L1920` |
| `VMwareAPIVMTestCase._get_timestamp_filename` | method | (self) | private | `'%s%s' % (imagecache.TIMESTAMP_PREFIX, self.old_time.strftime(imagecache.TIMESTAMP_FORMAT))` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1923) | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1922–L1924` |
| `VMwareAPIVMTestCase._override_time` | method | (self) | private | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1926–L1934` |
| `VMwareAPIVMTestCase._override_time._fake_get_timestamp_filename` | function | (fake) | private | `self._get_timestamp_filename()` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1930) | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1929–L1930` |
| `VMwareAPIVMTestCase._timestamp_file_exists` | method | (self, exists=True) | private | not declared | 2/8 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1936–L1943` |
| `VMwareAPIVMTestCase._image_aging_image_marked_for_deletion` | method | (self) | private | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1945–L1951` |
| `VMwareAPIVMTestCase.test_image_aging_image_marked_for_deletion` | method | (self, mock_get_by_inst) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1955–L1957` |
| `VMwareAPIVMTestCase._timestamp_file_removed` | method | (self) | private | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1959–L1964` |
| `VMwareAPIVMTestCase.test_timestamp_file_removed_spawn` | method | (self, mock_get_by_inst) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1968–L1969` |
| `VMwareAPIVMTestCase.test_timestamp_file_removed_aging` | method | (self, mock_get_by_inst) | public | not declared | 1/10 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1973–L1982` |
| `VMwareAPIVMTestCase.test_image_aging_disabled` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1984–L1992` |
| `VMwareAPIVMTestCase._image_aging_aged` | method | (self, aging_time=100) | private | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1994–L2002` |
| `VMwareAPIVMTestCase.test_image_aging_aged` | method | (self, mock_get_by_inst) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2006–L2008` |
| `VMwareAPIVMTestCase.test_image_aging_not_aged` | method | (self, mock_get_by_inst) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2012–L2014` |
| `VMwareAPIVMTestCase.test_public_api_signatures` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2016–L2017` |
| `VMwareAPIVMTestCase.test_register_extension` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2019–L2028` |
| `VMwareAPIVMTestCase.test_register_extension_already_exists` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2030–L2036` |
| `VMwareAPIVMTestCase.test_register_extension_concurrent` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2038–L2048` |
| `VMwareAPIVMTestCase.test_register_extension_concurrent.fake_call_method` | function | (module, method, *args, **kwargs) | public | `None` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2041) | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2039–L2045` |
| `VMwareAPIVMTestCase.test_list_instances` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2050–L2052` |
| `VMwareAPIVMTestCase._setup_mocks_for_session` | method | (self, mock_init) | private | `vcdriver` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2064) | 1/8 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2054–L2064` |
| `VMwareAPIVMTestCase._setup_mocks_for_session.side_effect` | function | — | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2061–L2062` |
| `VMwareAPIVMTestCase.test_host_power_action` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2066–L2068` |
| `VMwareAPIVMTestCase.test_host_maintenance_mode` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2070–L2072` |
| `VMwareAPIVMTestCase.test_set_host_enabled` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2074–L2076` |
| `VMwareAPIVMTestCase.test_datastore_regex_configured` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2078–L2082` |
| `VMwareAPIVMTestCase.test_datastore_regex_configured_vcstate` | method | (self, mock_get_ds_ref) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2085–L2089` |
| `VMwareAPIVMTestCase.test_get_available_resource` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2091–L2104` |
| `VMwareAPIVMTestCase.test_update_provider_tree` | method | (self, mock_get_avail_ds) | public | not declared | 1/40 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2107–L2149` |
| `VMwareAPIVMTestCase.test_invalid_datastore_regex` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2151–L2157` |
| `VMwareAPIVMTestCase.test_get_available_nodes` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2159–L2162` |
| `VMwareAPIVMTestCase.test_spawn_with_sparse_image` | method | (self, mock_from_image) | public | not declared | 1/10 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2166–L2177` |
| `VMwareAPIVMTestCase.test_plug_vifs` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2179–L2184` |
| `VMwareAPIVMTestCase.test_unplug_vifs` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2186–L2191` |
| `VMwareAPIVMTestCase._create_vif` | method | (self) | private | `vif_bridge_neutron` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2223) | 1/28 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2193–L2223` |
| `VMwareAPIVMTestCase._validate_interfaces` | method | (self, id, index, num_iface_ids) | private | not declared | 5/13 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2225–L2237` |
| `VMwareAPIVMTestCase._attach_interface` | method | (self, vif) | private | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2239–L2242` |
| `VMwareAPIVMTestCase.test_attach_interface` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2244–L2247` |
| `VMwareAPIVMTestCase.test_attach_interface_with_exception` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2249–L2257` |
| `VMwareAPIVMTestCase._detach_interface` | method | (self, vif, mock_get_device) | private | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2261–L2265` |
| `VMwareAPIVMTestCase.test_detach_interface` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2267–L2269` |
| `VMwareAPIVMTestCase.test_detach_interface_and_attach` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2271–L2276` |
| `VMwareAPIVMTestCase.test_detach_interface_no_device` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2278–L2283` |
| `VMwareAPIVMTestCase.test_detach_interface_no_vif_match` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2285–L2291` |
| `VMwareAPIVMTestCase.test_detach_interface_with_exception` | method | (self, mock_get_device) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2295–L2304` |
| `VMwareAPIVMTestCase.test_resize_to_smaller_disk` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2306–L2311` |
| `VMwareAPIVMTestCase.test_spawn_attach_volume_vmdk` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2313–L2314` |
| `VMwareAPIVMTestCase.test_spawn_attach_volume_vmdk_no_image_ref` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2316–L2317` |
| `VMwareAPIVMTestCase.test_pause` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2319–L2322` |
| `VMwareAPIVMTestCase.test_unpause` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2324–L2328` |
| `VMwareAPIVMTestCase.test_datastore_dc_map` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2330–L2334` |
| `VMwareAPIVMTestCase.test_pre_live_migration` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2336–L2343` |
| `VMwareAPIVMTestCase.test_rollback_live_migration_at_destination` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2345–L2350` |
| `VMwareAPIVMTestCase.test_post_live_migration` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2352–L2354` |
| `VMwareAPIVMTestCase.test_get_instance_disk_info_is_implemented` | method | (self) | public | not declared | 2/8 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2356–L2364` |
| `VMwareAPIVMTestCase.test_get_host_uptime` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2366–L2368` |
| `VMwareAPIVMTestCase.test_pbm_wsdl_location` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2370–L2376` |
| `VMwareAPIVMTestCase.test_nodename` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2378–L2383` |
| `VMwareAPIVMTestCase.test_invalid_min_version` | method | (self, mock_version) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2386–L2388` |
| `VMwareAPIVMTestCase.test_warning_deprecated_version` | method | (self, mock_version, mock_warning) | public | not declared | 3/9 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2392–L2401` |
| `VMwareAPIVMTestCase.test_host_state_service_disabled` | method | (self, mock_service) | public | not declared | 1/23 | `src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L2404–L2433` |

## Dependencies

- `import collections` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L22)
- `import datetime` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L23)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L24)
- `import os_resource_classes as orc` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L26)
- `oslo_utils`: imports `fixture as utils_fixture` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L27)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L28)
- `oslo_utils`: imports `units` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L29)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L30)
- `oslo_vmware`: imports `exceptions as vexc` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L31)
- `oslo_vmware.objects`: imports `datastore as ds_obj` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L32)
- `oslo_vmware`: imports `pbm` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L33)
- `oslo_vmware`: imports `vim_util as oslo_vim_util` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L34)
- `nova.compute`: imports `api as compute_api` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L36)
- `nova.compute`: imports `power_state` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L37)
- `nova.compute`: imports `provider_tree` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L38)
- `nova.compute`: imports `task_states` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L39)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L40)
- `import nova.conf` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L41)
- `nova`: imports `context` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L42)
- `nova`: imports `exception` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L43)
- `nova.image`: imports `glance` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L44)
- `nova.network`: imports `model as network_model` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L45)
- `nova`: imports `objects` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L46)
- `nova`: imports `test` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L47)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L48)
- `nova.tests.unit`: imports `fake_diagnostics` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L49)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L50)
- `nova.tests.unit`: imports `matchers` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L51)
- `nova.tests.unit.objects`: imports `test_diagnostics` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L52)
- `nova.tests.unit`: imports `utils` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L53)
- `nova.tests.unit.virt.vmwareapi`: imports `fake as vmwareapi_fake` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L54)
- `nova.tests.unit.virt.vmwareapi`: imports `stubs` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L55)
- `nova.virt`: imports `driver as v_driver` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L56)
- `nova.virt.vmwareapi`: imports `constants` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L57)
- `nova.virt.vmwareapi`: imports `driver` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L58)
- `nova.virt.vmwareapi`: imports `ds_util` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L59)
- `nova.virt.vmwareapi`: imports `error_util` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L60)
- `nova.virt.vmwareapi`: imports `imagecache` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L61)
- `nova.virt.vmwareapi`: imports `images` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L62)
- `nova.virt.vmwareapi`: imports `session` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L63)
- `nova.virt.vmwareapi`: imports `vif` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L64)
- `nova.virt.vmwareapi`: imports `vim_util` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L65)
- `nova.virt.vmwareapi`: imports `vm_util` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L66)
- `nova.virt.vmwareapi`: imports `vmops` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L67)
- `nova.virt.vmwareapi`: imports `volumeops` (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L68)

## Side Effects

- **file-io**: mock.patch('os.path.exists', return_value=True), (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1688)
- **process-spawn**: mock.patch('nova.privsep.path.last_bytes') (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1689)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L71)
- **global-mutation**: HOST = 'testhostname' (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L73)
- **global-mutation**: DEFAULT_FLAVORS = [ (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L75)
- **global-mutation**: CONTEXT = context.RequestContext('fake', 'fake', is_admin=False) (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L103)
- **global-mutation**: DEFAULT_FLAVOR_OBJS = [ (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L105)
- **global-mutation**: REQUIRES_LOCKING = True (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L152)

## Security Surface

- **sink** (`db-write`): self.type_data.update(flavor_updates) (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L325)
- **privilege** (`privsep-entrypoint`): mock.patch('nova.privsep.path.last_bytes') (src/nova/tests/unit/virt/vmwareapi/test_driver_api.py:L1689)

