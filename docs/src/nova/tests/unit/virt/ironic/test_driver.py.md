# src/nova/tests/unit/virt/ironic/test_driver.py

## Overview

This file implements the `test_driver` module, defining 7 classs, 2 constants, 24 functions, 217 methods, 39 imports, 5 side effects.

Lines: total 3941, code 3259, comment 106, blank 576

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L61–L61` |
| `SENTINEL` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L63–L63` |
| `FakeLoopingCall` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L66–L70` |
| `FakeLoopingCall.__init__` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/ironic/test_driver.py:L67–L70` |
| `_get_properties` | function | — | unexported | `{'cpus': 2, 'memory_mb': 512, 'local_gb': 10, 'cpu_arch': 'x86_64', 'capabilities': None}` (src/nova/tests/unit/virt/ironic/test_driver.py:L74) | 1/6 | `src/nova/tests/unit/virt/ironic/test_driver.py:L73–L78` |
| `_get_instance_info` | function | — | unexported | `{'vcpus': 1, 'memory_mb': 1024, 'local_gb': 10}` (src/nova/tests/unit/virt/ironic/test_driver.py:L82) | 1/4 | `src/nova/tests/unit/virt/ironic/test_driver.py:L81–L84` |
| `_get_stats` | function | — | unexported | `{'cpu_arch': 'x86_64'}` (src/nova/tests/unit/virt/ironic/test_driver.py:L88) | 1/2 | `src/nova/tests/unit/virt/ironic/test_driver.py:L87–L88` |
| `_get_cached_node` | function | (**kw) | unexported | `ironic_utils.get_test_node(**kw)` (src/nova/tests/unit/virt/ironic/test_driver.py:L93) | 1/2 | `src/nova/tests/unit/virt/ironic/test_driver.py:L91–L93` |
| `_make_compute_service` | function | (hostname) | unexported | `objects.Service(host=hostname)` (src/nova/tests/unit/virt/ironic/test_driver.py:L97) | 1/2 | `src/nova/tests/unit/virt/ironic/test_driver.py:L96–L97` |
| `IronicDriverTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L101–L2778` |
| `IronicDriverTestCase.setUp` | method | (self, mock_sg, mock_hash) | public | not declared | 1/13 | `src/nova/tests/unit/virt/ironic/test_driver.py:L105–L125` |
| `IronicDriverTestCase.test_public_api_signatures` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/ironic/test_driver.py:L127–L128` |
| `IronicDriverTestCase.test_validate_driver_loading` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/ironic/test_driver.py:L130–L131` |
| `IronicDriverTestCase.test_driver_capabilities` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/ironic/test_driver.py:L133–L143` |
| `IronicDriverTestCase.test__get_hypervisor_type` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/ironic/test_driver.py:L145–L146` |
| `IronicDriverTestCase.test__get_hypervisor_version` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/ironic/test_driver.py:L148–L149` |
| `IronicDriverTestCase.test__get_node` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/ironic/test_driver.py:L151–L160` |
| `IronicDriverTestCase.test__get_node_not_found` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/ironic/test_driver.py:L162–L169` |
| `IronicDriverTestCase.test__validate_instance_and_node` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/ironic/test_driver.py:L171–L181` |
| `IronicDriverTestCase.test__validate_instance_and_node_failed` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/ironic/test_driver.py:L183–L191` |
| `IronicDriverTestCase.test__validate_instance_and_node_unexpected_many_nodes` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/ironic/test_driver.py:L193–L201` |
| `IronicDriverTestCase.test__wait_for_active_pass` | method | (self, fake_validate, fake_refresh) | public | not declared | 1/8 | `src/nova/tests/unit/virt/ironic/test_driver.py:L206–L214` |
| `IronicDriverTestCase.test__wait_for_active_done` | method | (self, fake_validate, fake_refresh) | public | not declared | 1/9 | `src/nova/tests/unit/virt/ironic/test_driver.py:L219–L228` |
| `IronicDriverTestCase.test__wait_for_active_from_error` | method | (self, fake_validate, fake_refresh) | public | not declared | 1/12 | `src/nova/tests/unit/virt/ironic/test_driver.py:L233–L245` |
| `IronicDriverTestCase.test__wait_for_active_fail` | method | (self, fake_validate, fake_refresh) | public | not declared | 1/9 | `src/nova/tests/unit/virt/ironic/test_driver.py:L250–L259` |
| `IronicDriverTestCase._wait_for_active_abort` | method | (self, instance_params, fake_validate, fake_refresh) | private | not declared | 1/9 | `src/nova/tests/unit/virt/ironic/test_driver.py:L264–L273` |
| `IronicDriverTestCase.test__wait_for_active_abort_deleting` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/ironic/test_driver.py:L275–L276` |
| `IronicDriverTestCase.test__wait_for_active_abort_deleted` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/ironic/test_driver.py:L278–L279` |
| `IronicDriverTestCase.test__wait_for_active_abort_error` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/ironic/test_driver.py:L281–L283` |
| `IronicDriverTestCase.test__wait_for_power_state_pass` | method | (self, fake_validate) | public | not declared | 1/7 | `src/nova/tests/unit/virt/ironic/test_driver.py:L287–L294` |
| `IronicDriverTestCase.test__wait_for_power_state_ok` | method | (self, fake_validate) | public | not declared | 1/8 | `src/nova/tests/unit/virt/ironic/test_driver.py:L298–L306` |
| `IronicDriverTestCase.test__node_resource_with_instance_uuid` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/virt/ironic/test_driver.py:L308–L341` |
| `IronicDriverTestCase.test__node_resource_canonicalizes_arch` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/ironic/test_driver.py:L343–L351` |
| `IronicDriverTestCase.test__node_resource_unknown_arch` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/ironic/test_driver.py:L353–L360` |
| `IronicDriverTestCase.test__node_resource_exposes_capabilities` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/ironic/test_driver.py:L362–L370` |
| `IronicDriverTestCase.test__node_resource_no_capabilities` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/ironic/test_driver.py:L372–L377` |
| `IronicDriverTestCase.test__node_resource_malformed_capabilities` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/ironic/test_driver.py:L379–L385` |
| `IronicDriverTestCase.test__node_resource_available` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/ironic/test_driver.py:L387–L406` |
| `IronicDriverTestCase.test__node_resource_unavailable_node_res` | method | (self, mock_res_unavail) | public | not declared | 1/19 | `src/nova/tests/unit/virt/ironic/test_driver.py:L410–L429` |
| `IronicDriverTestCase.test__node_resource_used_node_res` | method | (self, mock_res_used) | public | not declared | 1/21 | `src/nova/tests/unit/virt/ironic/test_driver.py:L433–L454` |
| `IronicDriverTestCase.test__parse_node_properties` | method | (self, mock_warning) | public | not declared | 1/9 | `src/nova/tests/unit/virt/ironic/test_driver.py:L457–L470` |
| `IronicDriverTestCase.test__parse_node_properties_bad_values` | method | (self, mock_warning) | public | not declared | 1/18 | `src/nova/tests/unit/virt/ironic/test_driver.py:L473–L493` |
| `IronicDriverTestCase.test__parse_node_properties_canonicalize_cpu_arch` | method | (self, mock_warning) | public | not declared | 1/12 | `src/nova/tests/unit/virt/ironic/test_driver.py:L496–L513` |
| `IronicDriverTestCase.test_instance_exists` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/ironic/test_driver.py:L515–L527` |
| `IronicDriverTestCase.test_instance_exists_fail` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/ironic/test_driver.py:L529–L537` |
| `IronicDriverTestCase.test__get_node_list` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/virt/ironic/test_driver.py:L539–L549` |
| `IronicDriverTestCase.test__get_node_list_generator` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/virt/ironic/test_driver.py:L551–L564` |
| `IronicDriverTestCase.test__get_node_list_fail` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/ironic/test_driver.py:L566–L573` |
| `IronicDriverTestCase.test_list_instances` | method | (self, mock_inst_by_uuid) | public | not declared | 2/19 | `src/nova/tests/unit/virt/ironic/test_driver.py:L576–L596` |
| `IronicDriverTestCase.test_list_instances_fail` | method | (self, mock_inst_by_uuid, mock_cache) | public | not declared | 1/5 | `src/nova/tests/unit/virt/ironic/test_driver.py:L600–L605` |
| `IronicDriverTestCase.test_get_num_instances` | method | (self, mock_list_instance_uuids) | public | not declared | 1/5 | `src/nova/tests/unit/virt/ironic/test_driver.py:L608–L614` |
| `IronicDriverTestCase.test_get_num_instances_fail` | method | (self, mock_cache) | public | not declared | 1/4 | `src/nova/tests/unit/virt/ironic/test_driver.py:L617–L620` |
| `IronicDriverTestCase.test_get_num_instances_no_db_call` | method | (self, mock_inst_by_uuid) | public | not declared | 2/11 | `src/nova/tests/unit/virt/ironic/test_driver.py:L623–L633` |
| `IronicDriverTestCase.test_list_instance_uuids` | method | (self) | public | not declared | 2/14 | `src/nova/tests/unit/virt/ironic/test_driver.py:L635–L649` |
| `IronicDriverTestCase.test_list_instance_uuids_fail` | method | (self, mock_cache) | public | not declared | 1/4 | `src/nova/tests/unit/virt/ironic/test_driver.py:L652–L656` |
| `IronicDriverTestCase.test_node_is_available_empty_cache_empty_list` | method | (self, mock_services, mock_instances) | public | not declared | 1/12 | `src/nova/tests/unit/virt/ironic/test_driver.py:L660–L673` |
| `IronicDriverTestCase.test_node_is_available_empty_cache` | method | (self, mock_services, mock_instances) | public | not declared | 1/10 | `src/nova/tests/unit/virt/ironic/test_driver.py:L677–L688` |
| `IronicDriverTestCase.test_node_is_available_with_cache` | method | (self, mock_services, mock_instances) | public | not declared | 1/11 | `src/nova/tests/unit/virt/ironic/test_driver.py:L692–L707` |
| `IronicDriverTestCase.test__node_resources_unavailable` | method | (self) | public | not declared | 3/38 | `src/nova/tests/unit/virt/ironic/test_driver.py:L709–L757` |
| `IronicDriverTestCase.test__node_resources_used` | method | (self) | public | not declared | 2/13 | `src/nova/tests/unit/virt/ironic/test_driver.py:L759–L773` |
| `IronicDriverTestCase.test_get_available_nodes` | method | (self, mock_gi, mock_services) | public | not declared | 4/27 | `src/nova/tests/unit/virt/ironic/test_driver.py:L777–L807` |
| `IronicDriverTestCase.test_update_provider_tree_no_rc` | method | (self, mock_nfc, mock_nr, mock_res_unavail, mock_res_used) | public | not declared | 1/18 | `src/nova/tests/unit/virt/ironic/test_driver.py:L815–L837` |
| `IronicDriverTestCase.test_update_provider_tree_with_rc` | method | (self, mock_nfc, mock_nr, mock_res_unavail, mock_res_used) | public | not declared | 1/28 | `src/nova/tests/unit/virt/ironic/test_driver.py:L845–L878` |
| `IronicDriverTestCase.test_update_provider_tree_only_rc` | method | (self, mock_nfc, mock_nr, mock_res_unavail, mock_res_used) | public | not declared | 1/28 | `src/nova/tests/unit/virt/ironic/test_driver.py:L886–L919` |
| `IronicDriverTestCase.test_update_provider_tree_with_rc_occupied` | method | (self, mock_nfc, mock_nr, mock_res_unavail, mock_res_used) | public | not declared | 1/29 | `src/nova/tests/unit/virt/ironic/test_driver.py:L927–L960` |
| `IronicDriverTestCase.test_update_provider_tree_with_rc_occupied_workaround` | method | (self, mock_nfc, mock_nr, mock_res_unavail, mock_res_used) | public | not declared | 1/30 | `src/nova/tests/unit/virt/ironic/test_driver.py:L968–L1002` |
| `IronicDriverTestCase.test_update_provider_tree_disabled_node` | method | (self, mock_nfc, mock_nr, mock_res_unavail, mock_res_used) | public | not declared | 1/29 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1010–L1043` |
| `IronicDriverTestCase.test_update_provider_tree_no_traits` | method | (self, mock_nfc, mock_nr, mock_res_unavail, mock_res_used) | public | not declared | 1/19 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1051–L1073` |
| `IronicDriverTestCase.test_update_provider_tree_with_traits` | method | (self, mock_nfc, mock_nr, mock_res_unavail, mock_res_used) | public | not declared | 1/27 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1081–L1113` |
| `IronicDriverTestCase.test_get_available_resource` | method | (self, mock_nr, mock_services, mock_instances) | public | not declared | 1/14 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1118–L1133` |
| `IronicDriverTestCase.test_get_available_resource_with_cache` | method | (self, mock_nr, mock_services, mock_instances) | public | not declared | 1/13 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1138–L1153` |
| `IronicDriverTestCase.test_get_info` | method | (self, mock_svc_by_hv, mock_uuids_by_host, mock_get_node_list) | public | not declared | 1/19 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1158–L1180` |
| `IronicDriverTestCase.test_get_info_cached` | method | (self, mock_svc_by_hv, mock_uuids_by_host, mock_get_node_list) | public | not declared | 1/15 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1185–L1203` |
| `IronicDriverTestCase.test_get_info_not_found_in_cache` | method | (self, mock_svc_by_hv, mock_uuids_by_host, mock_get_node_list) | public | not declared | 1/21 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1208–L1232` |
| `IronicDriverTestCase.test_get_info_skip_cache` | method | (self, mock_svc_by_hv, mock_uuids_by_host, mock_get_node_list) | public | not declared | 1/19 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1237–L1260` |
| `IronicDriverTestCase.test__get_node_list_bad_response` | method | (self, mock_error) | public | not declared | 1/11 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1263–L1275` |
| `IronicDriverTestCase.test_get_info_http_not_found` | method | (self, mock_svc_by_hv, mock_uuids_by_host) | public | not declared | 1/15 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1279–L1294` |
| `IronicDriverTestCase._test_spawn` | method | (self, mock_aiitn, mock_wait_active, mock_avti, mock_looping, mock_save, mock_metadata, config_drive_value=None) | private | not declared | 1/40 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1304–L1350` |
| `IronicDriverTestCase.test_spawn` | method | (self, mock_required_by, mock_configdrive) | public | not declared | 1/4 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1354–L1358` |
| `IronicDriverTestCase.test_spawn_with_configdrive` | method | (self, mock_required_by, mock_configdrive) | public | not declared | 1/7 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1362–L1369` |
| `IronicDriverTestCase.test_spawn_destroyed_after_failure` | method | (self, mock_aiitn, mock_wait_active, mock_avti, mock_destroy, mock_looping, mock_required_by, mock_metadata) | public | not declared | 1/26 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1380–L1408` |
| `IronicDriverTestCase.test__add_instance_info_to_node` | method | (self) | public | not declared | 1/41 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1410–L1453` |
| `IronicDriverTestCase.test__remove_instance_info_from_node` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1455–L1462` |
| `IronicDriverTestCase._create_fake_block_device_info` | method | (self) | private | `{ 'block_device_mapping': [driver_bdm] }` (src/nova/tests/unit/virt/ironic/test_driver.py:L1478) | 1/17 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1464–L1480` |
| `IronicDriverTestCase.test__add_volume_target_info` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1482–L1500` |
| `IronicDriverTestCase.test__add_volume_target_info_empty_bdms` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1502–L1508` |
| `IronicDriverTestCase.test__add_volume_target_info_failures` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1510–L1528` |
| `IronicDriverTestCase.test__cleanup_volume_target_info` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1530–L1543` |
| `IronicDriverTestCase.test__cleanup_volume_target_info_empty_targets` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1545–L1552` |
| `IronicDriverTestCase.test__cleanup_volume_target_info_not_found` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1554–L1573` |
| `IronicDriverTestCase.test__cleanup_volume_target_info_bad_request` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1575–L1594` |
| `IronicDriverTestCase.test_spawn_node_driver_validation_fail` | method | (self, mock_avti, mock_required_by, mock_metadata) | public | not declared | 1/30 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1600–L1632` |
| `IronicDriverTestCase.test_spawn_node_configdrive_fail` | method | (self, mock_configdrive, mock_avti, mock_save, mock_required_by, mock_metadata) | public | not declared | 1/26 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1640–L1667` |
| `IronicDriverTestCase.test_spawn_node_trigger_deploy_fail` | method | (self, mock_cleanup_deploy, mock_avti, mock_required_by, mock_metadata) | public | not declared | 1/29 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1674–L1705` |
| `IronicDriverTestCase.test_spawn_node_trigger_deploy_fail_invalid_image` | method | (self, mock_cleanup_deploy, mock_avti, mock_required_by, mock_metadata) | public | not declared | 1/34 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1712–L1750` |
| `IronicDriverTestCase.test_spawn_sets_default_ephemeral_device` | method | (self, mock_wait, mock_avti, mock_save, mock_looping, mock_required_by, mock_metadata) | public | not declared | 1/19 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1759–L1779` |
| `IronicDriverTestCase._test_destroy` | method | (self, state, mock_cleanup_deploy, mock_remove_instance_info) | private | not declared | 2/25 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1784–L1818` |
| `IronicDriverTestCase._test_destroy.fake_set_node_provision_state` | function | (*_) | public | not declared | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L1793–L1794` |
| `IronicDriverTestCase.test_destroy` | method | (self, state) | public | not declared | 1/2 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1821–L1822` |
| `IronicDriverTestCase.test_destroy_servicing_states_unprovision` | method | (self, mock_cleanup_deploy, mock_remove_instance_info) | public | not declared | 2/28 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1827–L1869` |
| `IronicDriverTestCase.test_destroy_servicing_states_unprovision.fake_set_node_provision_state` | function | (*_) | public | not declared | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L1856–L1857` |
| `IronicDriverTestCase.test_destroy_unknown_state_unprovision` | method | (self, mock_cleanup_deploy, mock_remove_instance_info) | public | not declared | 1/18 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1874–L1907` |
| `IronicDriverTestCase.test_destroy_unknown_state_unprovision.fake_set_node_provision_state` | function | (*_) | public | not declared | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L1894–L1895` |
| `IronicDriverTestCase.test_destroy_trigger_undeploy_fail` | method | (self, mock_clean, fake_validate) | public | not declared | 1/17 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1913–L1930` |
| `IronicDriverTestCase._test__unprovision_instance` | method | (self, mock_validate_inst, state=None) | private | not declared | 1/11 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1934–L1944` |
| `IronicDriverTestCase.test__unprovision_cleaning` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1946–L1947` |
| `IronicDriverTestCase.test__unprovision_cleanwait` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1949–L1950` |
| `IronicDriverTestCase.test__unprovision_fail_max_retries` | method | (self, mock_validate_inst) | public | not declared | 1/14 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1954–L1968` |
| `IronicDriverTestCase.test__unprovision_instance_not_found` | method | (self, mock_validate_inst) | public | not declared | 1/11 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1972–L1983` |
| `IronicDriverTestCase.test_destroy_unassociate_fail` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/ironic/test_driver.py:L1985–L2006` |
| `IronicDriverTestCase.test_reboot` | method | (self, fake_validate, mock_looping) | public | not declared | 1/10 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2011–L2021` |
| `IronicDriverTestCase.test_trigger_crash_dump` | method | (self, fake_validate) | public | not declared | 1/6 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2025–L2030` |
| `IronicDriverTestCase.test_trigger_crash_dump_error` | method | (self, fake_validate) | public | not declared | 1/8 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2034–L2041` |
| `IronicDriverTestCase.test_reboot_soft` | method | (self, fake_validate, mock_looping) | public | not declared | 1/10 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2046–L2056` |
| `IronicDriverTestCase.test_reboot_soft_not_supported` | method | (self, fake_validate, mock_looping) | public | not declared | 1/17 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2061–L2078` |
| `IronicDriverTestCase.test_power_update_event` | method | (self, mock_save) | public | not declared | 1/12 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2081–L2092` |
| `IronicDriverTestCase.test_power_on` | method | (self, fake_validate, mock_looping) | public | not declared | 1/16 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2097–L2114` |
| `IronicDriverTestCase._test_power_off` | method | (self, mock_looping, timeout=0) | private | not declared | 1/6 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2117–L2123` |
| `IronicDriverTestCase.test_power_off` | method | (self, fake_validate) | public | not declared | 1/7 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2127–L2135` |
| `IronicDriverTestCase.test_power_off_soft` | method | (self, fake_validate) | public | not declared | 1/8 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2139–L2148` |
| `IronicDriverTestCase.test_power_off_soft_exception` | method | (self, fake_validate) | public | not declared | 1/16 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2152–L2169` |
| `IronicDriverTestCase.test_power_off_soft_not_stopped` | method | (self, fake_validate) | public | not declared | 1/13 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2173–L2187` |
| `IronicDriverTestCase.test_plug_vifs_with_port` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2189–L2203` |
| `IronicDriverTestCase.test_plug_vifs` | method | (self, mock__plug_vifs) | public | not declared | 1/7 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2206–L2213` |
| `IronicDriverTestCase.test_plug_vifs_multiple_ports` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2215–L2235` |
| `IronicDriverTestCase.test_plug_vifs_failure` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2237–L2257` |
| `IronicDriverTestCase.test_plug_vifs_already_attached` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2259–L2275` |
| `IronicDriverTestCase.test_plug_vifs_no_network_info` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2277–L2287` |
| `IronicDriverTestCase.test_unplug_vifs` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2289–L2303` |
| `IronicDriverTestCase.test_unplug_vifs_port_not_associated` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2305–L2319` |
| `IronicDriverTestCase.test_unplug_vifs_no_network_info` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2321–L2325` |
| `IronicDriverTestCase.test_attach_interface` | method | (self, mock_pv) | public | not declared | 1/9 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2328–L2337` |
| `IronicDriverTestCase.test_detach_interface` | method | (self, mock_uv) | public | not declared | 1/4 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2340–L2343` |
| `IronicDriverTestCase._test_rebuild` | method | (self, mock_save, mock_add_instance_info, mock_looping, mock_wait_active, mock_metadata, preserve=False, reimage_boot_volume=False, block_device_info=None) | private | not declared | 1/40 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2352–L2397` |
| `IronicDriverTestCase.test_rebuild_preserve_ephemeral` | method | (self, mock_required_by, mock_configdrive) | public | not declared | 1/5 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2401–L2406` |
| `IronicDriverTestCase.test_rebuild_no_preserve_ephemeral` | method | (self, mock_required_by, mock_configdrive) | public | not declared | 1/4 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2410–L2413` |
| `IronicDriverTestCase.test_rebuild_with_configdrive` | method | (self, mock_required_by, mock_configdrive) | public | not declared | 1/6 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2417–L2423` |
| `IronicDriverTestCase.test_rebuild_bfv_fails` | method | (self, mock_required_by, mock_configdrive) | public | not declared | 1/11 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2427–L2437` |
| `IronicDriverTestCase.test_rebuild_with_configdrive_failure` | method | (self, mock_save, mock_add_instance_info, mock_required_by, mock_configdrive, mock_metadata) | public | not declared | 1/25 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2446–L2473` |
| `IronicDriverTestCase.test_rebuild_failures` | method | (self, mock_save, mock_add_instance_info, mock_required_by, mock_configdrive, mock_metadata) | public | not declared | 1/27 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2482–L2511` |
| `IronicDriverTestCase.test_network_binding_host_id` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2513–L2524` |
| `IronicDriverTestCase.test_get_volume_connector` | method | (self) | public | not declared | 1/38 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2526–L2566` |
| `IronicDriverTestCase._test_get_volume_connector_no_ip` | method | (self, mac_specified, mock_nw_info, portgroup_exist=False, no_fixed_ip=False) | private | not declared | 6/68 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2569–L2639` |
| `IronicDriverTestCase.test_get_volume_connector_no_ip_with_mac` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2641–L2642` |
| `IronicDriverTestCase.test_get_volume_connector_no_ip_with_mac_with_portgroup` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2644–L2645` |
| `IronicDriverTestCase.test_get_volume_connector_no_ip_without_mac` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2647–L2648` |
| `IronicDriverTestCase.test_get_volume_connector_no_ip_no_fixed_ip` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2650–L2651` |
| `IronicDriverTestCase.test_prepare_networks_before_block_device_mapping` | method | (self, mock_pvifs) | public | not declared | 1/9 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2654–L2662` |
| `IronicDriverTestCase.test_prepare_networks_before_block_device_mapping_error` | method | (self, mock_pvifs) | public | not declared | 1/13 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2665–L2677` |
| `IronicDriverTestCase.test_clean_networks_preparation` | method | (self, mock_upvifs) | public | not declared | 1/5 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2680–L2684` |
| `IronicDriverTestCase.test_clean_networks_preparation_error` | method | (self, mock_upvifs) | public | not declared | 1/6 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2687–L2692` |
| `IronicDriverTestCase.test_prepare_for_spawn` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2694–L2709` |
| `IronicDriverTestCase.test__set_instance_id` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2711–L2719` |
| `IronicDriverTestCase.test_prepare_for_spawn_invalid_instance` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2721–L2726` |
| `IronicDriverTestCase.test_prepare_for_spawn_conflict` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2728–L2738` |
| `IronicDriverTestCase.test_prepare_for_spawn_not_available` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2740–L2750` |
| `IronicDriverTestCase.test_failed_spawn_cleanup` | method | (self, mock_cleanup) | public | not declared | 1/9 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2753–L2763` |
| `IronicDriverTestCase.test__cleanup_deploy` | method | (self, mock_remove_info, mock_vol, mock_unvif) | public | not declared | 1/7 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2770–L2778` |
| `IronicDriverSyncTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L2781–L2943` |
| `IronicDriverSyncTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2783–L2788` |
| `IronicDriverSyncTestCase.test_rescue` | method | (self, mock_looping) | public | not declared | 1/11 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2791–L2803` |
| `IronicDriverSyncTestCase.test_rescue_provision_state_fail` | method | (self, mock_looping) | public | not declared | 1/16 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2806–L2823` |
| `IronicDriverSyncTestCase.test_rescue_instance_not_found` | method | (self, fake_validate) | public | not declared | 1/12 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2827–L2840` |
| `IronicDriverSyncTestCase.test_rescue_rescue_fail` | method | (self, fake_validate) | public | not declared | 1/12 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2844–L2857` |
| `IronicDriverSyncTestCase.test_unrescue` | method | (self, mock_looping) | public | not declared | 1/9 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2860–L2870` |
| `IronicDriverSyncTestCase.test_unrescue_provision_state_fail` | method | (self, mock_looping) | public | not declared | 1/11 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2873–L2885` |
| `IronicDriverSyncTestCase.test_unrescue_instance_not_found` | method | (self, fake_validate) | public | not declared | 1/8 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2889–L2898` |
| `IronicDriverSyncTestCase.test_unrescue_unrescue_fail` | method | (self, fake_validate) | public | not declared | 1/10 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2902–L2913` |
| `IronicDriverSyncTestCase.test__can_send_version` | method | (self, mock_supports_microversion) | public | not declared | 1/6 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2916–L2922` |
| `IronicDriverSyncTestCase.test__can_send_version_too_new` | method | (self, mock_supports_microversion) | public | not declared | 1/11 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2925–L2936` |
| `IronicDriverSyncTestCase.test__can_send_version_too_old` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2939–L2940` |
| `IronicDriverSyncTestCase.test__can_send_version_not_negotiated` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2942–L2943` |
| `IronicDriverGenerateConfigDriveTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L2948–L3071` |
| `IronicDriverGenerateConfigDriveTestCase.setUp` | method | (self, mock_services) | public | not declared | 1/12 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2951–L2963` |
| `IronicDriverGenerateConfigDriveTestCase.test_generate_configdrive` | method | (self, mock_cd_builder, mock_instance_meta) | public | not declared | 1/13 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2965–L2977` |
| `IronicDriverGenerateConfigDriveTestCase.test_generate_configdrive_fail` | method | (self, mock_cd_builder, mock_instance_meta) | public | not declared | 1/17 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2979–L2997` |
| `IronicDriverGenerateConfigDriveTestCase._test_generate_network_metadata` | method | (self, address=None, vif_internal_info=True) | private | not declared | 5/41 | `src/nova/tests/unit/virt/ironic/test_driver.py:L2999–L3042` |
| `IronicDriverGenerateConfigDriveTestCase.test_generate_network_metadata_with_pg_address` | method | (self, mock_cd_builder, mock_instance_meta) | public | not declared | 1/3 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3044–L3046` |
| `IronicDriverGenerateConfigDriveTestCase.test_generate_network_metadata_no_pg_address` | method | (self, mock_cd_builder, mock_instance_meta) | public | not declared | 1/3 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3048–L3050` |
| `IronicDriverGenerateConfigDriveTestCase.test_generate_network_metadata_vif_in_extra` | method | (self, mock_cd_builder, mock_instance_meta) | public | not declared | 1/3 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3052–L3054` |
| `IronicDriverGenerateConfigDriveTestCase.test_generate_network_metadata_ports_only` | method | (self, mock_cd_builder, mock_instance_meta) | public | not declared | 1/13 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3056–L3071` |
| `HashRingTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L3074–L3240` |
| `HashRingTestCase.setUp` | method | (self, mock_sg, mock_services) | public | not declared | 1/7 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3078–L3085` |
| `HashRingTestCase.test_hash_ring_refreshed_on_init` | method | (self, mock_hr) | public | not declared | 1/5 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3088–L3092` |
| `HashRingTestCase._test__refresh_hash_ring` | method | (self, services, expected_hosts, mock_services, mock_hash_ring, uncalled=None) | private | not declared | 5/15 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3096–L3112` |
| `HashRingTestCase.test__refresh_hash_ring_same_host_different_case` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3114–L3120` |
| `HashRingTestCase.test__refresh_hash_ring_one_compute` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3122–L3126` |
| `HashRingTestCase.test__refresh_hash_ring_many_computes` | method | (self, mock_log_debug) | public | not declared | 1/7 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3129–L3135` |
| `HashRingTestCase.test__refresh_hash_ring_one_compute_new_compute` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3137–L3141` |
| `HashRingTestCase.test__refresh_hash_ring_many_computes_new_compute` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3143–L3147` |
| `HashRingTestCase.test__refresh_hash_ring_some_computes_down` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3149–L3153` |
| `HashRingTestCase.test__refresh_hash_ring_peer_list` | method | (self, mock_can_send) | public | not declared | 1/9 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3156–L3164` |
| `HashRingTestCase.test__refresh_hash_ring_peer_list_shard` | method | (self, mock_can_send) | public | not declared | 1/9 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3167–L3175` |
| `HashRingTestCase.test__refresh_hash_ring_peer_list_shard_and_cg` | method | (self, mock_can_send) | public | not declared | 1/11 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3178–L3189` |
| `HashRingTestCase.test__refresh_hash_ring_peer_list_old_api` | method | (self, mock_can_send) | public | not declared | 1/11 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3192–L3202` |
| `HashRingTestCase.test__check_peer_list` | method | (self, mock_log) | public | not declared | 1/7 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3205–L3212` |
| `HashRingTestCase.test__check_peer_list_empty` | method | (self, mock_log) | public | not declared | 1/7 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3215–L3221` |
| `HashRingTestCase.test__check_peer_list_missing_self` | method | (self, mock_log) | public | not declared | 1/7 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3224–L3230` |
| `HashRingTestCase.test__check_peer_list_only_self` | method | (self, mock_log) | public | not declared | 1/7 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3233–L3240` |
| `NodeCacheTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L3243–L3512` |
| `NodeCacheTestCase.setUp` | method | (self, mock_services) | public | not declared | 1/8 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3246–L3255` |
| `NodeCacheTestCase._test__refresh_cache` | method | (self, instances, nodes, hosts, mock_instances, mock_nodes, mock_hosts, mock_hash_ring, mock_can_send, partition_key=None, can_send_146=True, shard=None, can_send_182=True) | private | not declared | 7/37 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3262–L3304` |
| `NodeCacheTestCase.test__refresh_cache_same_host_different_case` | method | (self) | public | not declared | 2/16 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3306–L3324` |
| `NodeCacheTestCase.test__refresh_cache` | method | (self) | public | not declared | 2/14 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3326–L3342` |
| `NodeCacheTestCase.test__refresh_cache_partition_key` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3344–L3363` |
| `NodeCacheTestCase.test__refresh_cache_shard` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3365–L3384` |
| `NodeCacheTestCase.test__refresh_cache_shard_and_conductor_group` | method | (self) | public | not declared | 2/19 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3386–L3407` |
| `NodeCacheTestCase.test__refresh_cache_shard_and_conductor_group_skip_shard` | method | (self) | public | not declared | 2/20 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3409–L3431` |
| `NodeCacheTestCase.test__refresh_cache_partition_key_old_api` | method | (self) | public | not declared | 2/18 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3433–L3453` |
| `NodeCacheTestCase.test__refresh_cache_multiple_services` | method | (self) | public | not declared | 2/14 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3455–L3471` |
| `NodeCacheTestCase.test__refresh_cache_our_instances` | method | (self) | public | not declared | 2/14 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3473–L3491` |
| `NodeCacheTestCase.test__refresh_cache_their_instances` | method | (self) | public | not declared | 2/15 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3493–L3512` |
| `IronicDriverConsoleTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L3515–L3941` |
| `IronicDriverConsoleTestCase.setUp` | method | (self, mock_services) | public | not declared | 1/19 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3517–L3542` |
| `IronicDriverConsoleTestCase._create_console_data` | method | (self, enabled=True, console_type='socat', url='tcp://127.0.0.1:10000') | private | `{ 'console_enabled': enabled, 'console_info': { 'type': console_type, 'url': url } }` (src/nova/tests/unit/virt/ironic/test_driver.py:L3546) | 1/9 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3544–L3552` |
| `IronicDriverConsoleTestCase.test__get_node_console_with_reset_success` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3554–L3577` |
| `IronicDriverConsoleTestCase.test__get_node_console_with_reset_success._fake_get_console` | function | (node_uuid) | private | `self._create_console_data(enabled=temp_data['target_mode'])` (src/nova/tests/unit/virt/ironic/test_driver.py:L3558) | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L3557–L3558` |
| `IronicDriverConsoleTestCase.test__get_node_console_with_reset_success._fake_enable_console` | function | (node_uuid) | private | not declared | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L3560–L3562` |
| `IronicDriverConsoleTestCase.test__get_node_console_with_reset_console_disabled` | method | (self, mock_log) | public | not declared | 1/11 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3580–L3595` |
| `IronicDriverConsoleTestCase.test__get_node_console_with_reset_console_disabled._fake_log_debug` | function | (msg, *args, **kwargs) | private | not declared | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L3581–L3583` |
| `IronicDriverConsoleTestCase.test__get_node_console_with_reset_set_mode_failed` | method | (self, mock_log) | public | not declared | 1/16 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3598–L3618` |
| `IronicDriverConsoleTestCase.test__get_node_console_with_reset_set_mode_failed._fake_log_error` | function | (msg, *args, **kwargs) | private | not declared | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L3599–L3601` |
| `IronicDriverConsoleTestCase.test__get_node_console_with_reset_wait_failed` | method | (self, mock_log) | public | not declared | 1/12 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3621–L3644` |
| `IronicDriverConsoleTestCase.test__get_node_console_with_reset_wait_failed._fake_get_console` | function | (node_uuid) | private | `self._create_console_data()` (src/nova/tests/unit/virt/ironic/test_driver.py:L3628) | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L3622–L3628` |
| `IronicDriverConsoleTestCase.test__get_node_console_with_reset_wait_failed._fake_log_error` | function | (msg, *args, **kwargs) | private | not declared | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L3630–L3632` |
| `IronicDriverConsoleTestCase.test__get_node_console_with_reset_wait_timeout` | method | (self, mock_log, mock_looping) | public | not declared | 1/24 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3649–L3684` |
| `IronicDriverConsoleTestCase.test__get_node_console_with_reset_wait_timeout._fake_log_error` | function | (msg, *args, **kwargs) | private | not declared | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L3654–L3656` |
| `IronicDriverConsoleTestCase.test__get_node_console_with_reset_wait_timeout._fake_get_console` | function | (node_uuid) | private | `self._create_console_data(enabled=True)` (src/nova/tests/unit/virt/ironic/test_driver.py:L3659) | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L3658–L3659` |
| `IronicDriverConsoleTestCase.test__get_node_console_with_reset_wait_timeout._fake_disable_console_mode` | function | (node_uuid) | private | not declared | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L3661–L3662` |
| `IronicDriverConsoleTestCase.test_get_vnc_console_disabled` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3687–L3715` |
| `IronicDriverConsoleTestCase.test_get_vnc_console_enable_timeout` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3718–L3736` |
| `IronicDriverConsoleTestCase.test_get_vnc_console_enabled` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3738–L3757` |
| `IronicDriverConsoleTestCase.test_get_vnc_console_missing_internal_info` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3759–L3775` |
| `IronicDriverConsoleTestCase.test_get_vnc_console_wrong_type` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3777–L3790` |
| `IronicDriverConsoleTestCase.test_get_vnc_console_api_error` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3792–L3801` |
| `IronicDriverConsoleTestCase.test_get_vnc_console_enable_api_error` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3803–L3817` |
| `IronicDriverConsoleTestCase.test_get_serial_console_socat` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3819–L3839` |
| `IronicDriverConsoleTestCase.test_get_serial_console_socat._fake_get_console` | function | (node_uuid) | private | `self._create_console_data(enabled=temp_data['target_mode'])` (src/nova/tests/unit/virt/ironic/test_driver.py:L3823) | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L3822–L3823` |
| `IronicDriverConsoleTestCase.test_get_serial_console_socat._fake_enable_console` | function | (node_uuid) | private | not declared | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L3825–L3826` |
| `IronicDriverConsoleTestCase.test_get_serial_console_socat_disabled` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3841–L3849` |
| `IronicDriverConsoleTestCase.test_get_serial_console_socat_invalid_url` | method | (self, mock_log) | public | not declared | 1/14 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3852–L3869` |
| `IronicDriverConsoleTestCase.test_get_serial_console_socat_invalid_url._fake_log_error` | function | (msg, *args, **kwargs) | private | not declared | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L3853–L3855` |
| `IronicDriverConsoleTestCase.test_get_serial_console_socat_invalid_url_2` | method | (self, mock_log) | public | not declared | 1/13 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3872–L3890` |
| `IronicDriverConsoleTestCase.test_get_serial_console_socat_invalid_url_2._fake_log_error` | function | (msg, *args, **kwargs) | private | not declared | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L3874–L3876` |
| `IronicDriverConsoleTestCase.test_get_serial_console_socat_unsupported_scheme` | method | (self, mock_log) | public | not declared | 1/13 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3893–L3909` |
| `IronicDriverConsoleTestCase.test_get_serial_console_socat_unsupported_scheme._fake_log_warning` | function | (msg, *args, **kwargs) | private | not declared | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L3894–L3896` |
| `IronicDriverConsoleTestCase.test_get_serial_console_socat_tcp6` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3911–L3925` |
| `IronicDriverConsoleTestCase.test_get_serial_console_socat_tcp6._fake_get_console` | function | (node_uuid) | private | `self._create_console_data(enabled=True, url='tcp://[::1]:10000')` (src/nova/tests/unit/virt/ironic/test_driver.py:L3913) | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L3912–L3914` |
| `IronicDriverConsoleTestCase.test_get_serial_console_shellinabox` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/ironic/test_driver.py:L3927–L3941` |
| `IronicDriverConsoleTestCase.test_get_serial_console_shellinabox._fake_get_console` | function | (node_uuid) | private | `self._create_console_data(enabled=True, console_type='shellinabox')` (src/nova/tests/unit/virt/ironic/test_driver.py:L3930) | — | `src/nova/tests/unit/virt/ironic/test_driver.py:L3929–L3931` |

## Dependencies

- `import base64` (src/nova/tests/unit/virt/ironic/test_driver.py:L18)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/ironic/test_driver.py:L19)
- `import ddt` (src/nova/tests/unit/virt/ironic/test_driver.py:L21)
- `import fixtures` (src/nova/tests/unit/virt/ironic/test_driver.py:L22)
- `openstack.baremetal.v1`: imports `node as _node` (src/nova/tests/unit/virt/ironic/test_driver.py:L23)
- `openstack`: imports `exceptions as sdk_exc` (src/nova/tests/unit/virt/ironic/test_driver.py:L24)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/virt/ironic/test_driver.py:L25)
- `oslo_service`: imports `loopingcall` (src/nova/tests/unit/virt/ironic/test_driver.py:L26)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/virt/ironic/test_driver.py:L27)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/virt/ironic/test_driver.py:L28)
- `testtools`: imports `matchers` (src/nova/tests/unit/virt/ironic/test_driver.py:L29)
- `tooz`: imports `hashring as hash_ring` (src/nova/tests/unit/virt/ironic/test_driver.py:L30)
- `nova.api.metadata`: imports `base as instance_metadata` (src/nova/tests/unit/virt/ironic/test_driver.py:L32)
- `nova.api.openstack`: imports `common` (src/nova/tests/unit/virt/ironic/test_driver.py:L33)
- `nova`: imports `block_device` (src/nova/tests/unit/virt/ironic/test_driver.py:L34)
- `nova.compute`: imports `power_state as nova_states` (src/nova/tests/unit/virt/ironic/test_driver.py:L35)
- `nova.compute`: imports `provider_tree` (src/nova/tests/unit/virt/ironic/test_driver.py:L36)
- `nova.compute`: imports `task_states` (src/nova/tests/unit/virt/ironic/test_driver.py:L37)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/virt/ironic/test_driver.py:L38)
- `nova.console`: imports `type as console_type` (src/nova/tests/unit/virt/ironic/test_driver.py:L39)
- `nova`: imports `context as nova_context` (src/nova/tests/unit/virt/ironic/test_driver.py:L40)
- `nova`: imports `exception` (src/nova/tests/unit/virt/ironic/test_driver.py:L41)
- `nova.network`: imports `model as network_model` (src/nova/tests/unit/virt/ironic/test_driver.py:L42)
- `nova`: imports `objects` (src/nova/tests/unit/virt/ironic/test_driver.py:L43)
- `nova`: imports `servicegroup` (src/nova/tests/unit/virt/ironic/test_driver.py:L44)
- `nova`: imports `test` (src/nova/tests/unit/virt/ironic/test_driver.py:L45)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/virt/ironic/test_driver.py:L46)
- `nova.tests.unit`: imports `fake_block_device` (src/nova/tests/unit/virt/ironic/test_driver.py:L47)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/virt/ironic/test_driver.py:L48)
- `nova.tests.unit`: imports `matchers as nova_matchers` (src/nova/tests/unit/virt/ironic/test_driver.py:L49)
- `nova.tests.unit`: imports `utils` (src/nova/tests/unit/virt/ironic/test_driver.py:L50)
- `nova.tests.unit.virt.ironic`: imports `utils as ironic_utils` (src/nova/tests/unit/virt/ironic/test_driver.py:L51)
- `nova.virt`: imports `block_device as driver_block_device` (src/nova/tests/unit/virt/ironic/test_driver.py:L52)
- `nova.virt`: imports `configdrive` (src/nova/tests/unit/virt/ironic/test_driver.py:L53)
- `nova.virt`: imports `driver` (src/nova/tests/unit/virt/ironic/test_driver.py:L54)
- `nova.virt`: imports `fake` (src/nova/tests/unit/virt/ironic/test_driver.py:L55)
- `nova.virt`: imports `hardware` (src/nova/tests/unit/virt/ironic/test_driver.py:L56)
- `nova.virt.ironic`: imports `driver as ironic_driver` (src/nova/tests/unit/virt/ironic/test_driver.py:L57)
- `nova.virt.ironic`: imports `ironic_states` (src/nova/tests/unit/virt/ironic/test_driver.py:L58)

## Side Effects

- **network**: from openstack.baremetal.v1 import node as _node (src/nova/tests/unit/virt/ironic/test_driver.py:L23)
- **network**: @mock.patch('openstack.utils.supports_microversion') (src/nova/tests/unit/virt/ironic/test_driver.py:L2915)
- **network**: @mock.patch('openstack.utils.supports_microversion') (src/nova/tests/unit/virt/ironic/test_driver.py:L2924)
- **global-mutation**: CONF = cfg.CONF (src/nova/tests/unit/virt/ironic/test_driver.py:L61)
- **global-mutation**: SENTINEL = object() (src/nova/tests/unit/virt/ironic/test_driver.py:L63)

