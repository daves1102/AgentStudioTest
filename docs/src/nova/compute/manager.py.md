# src/nova/compute/manager.py

## Overview

This file implements the `manager` module, defining 8 classs, 10 constants, 2 fields, 42 functions, 321 methods, 11 staticmethods, 2 variables, 74 imports, 14 side effects, 29 security surface entries.

Lines: total 12137, code 8837, comment 1993, blank 1307

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/compute/manager.py:L104–L104` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/compute/manager.py:L106–L106` |
| `wrap_exception` | variable | — | exported | not declared | — | `src/nova/compute/manager.py:L108–L109` |
| `errors_out_migration_ctxt` | function | (migration) | exported | not declared | 4/13 | `src/nova/compute/manager.py:L113–L130` |
| `errors_out_migration` | function | (function) | exported | `decorated_function` (src/nova/compute/manager.py:L146) | 1/4 | `src/nova/compute/manager.py:L134–L146` |
| `errors_out_migration.decorated_function` | function | (self, context, *args, **kwargs) | public | `function(self, context, *args, **kwargs)` (src/nova/compute/manager.py:L144) | — | `src/nova/compute/manager.py:L138–L144` |
| `reverts_task_state` | function | (function) | exported | `decorated_function` (src/nova/compute/manager.py:L188) | 1/4 | `src/nova/compute/manager.py:L150–L188` |
| `reverts_task_state.decorated_function` | function | (self, context, *args, **kwargs) | public | `function(self, context, *args, **kwargs)` (src/nova/compute/manager.py:L156) | — | `src/nova/compute/manager.py:L154–L186` |
| `wrap_instance_fault` | function | (function) | exported | `decorated_function` (src/nova/compute/manager.py:L216) | 1/4 | `src/nova/compute/manager.py:L192–L216` |
| `wrap_instance_fault.decorated_function` | function | (self, context, *args, **kwargs) | public | `function(self, context, *args, **kwargs)` (src/nova/compute/manager.py:L202) | — | `src/nova/compute/manager.py:L200–L214` |
| `delete_image_on_error` | function | (function) | exported | `decorated_function` (src/nova/compute/manager.py:L237) | 1/4 | `src/nova/compute/manager.py:L220–L237` |
| `delete_image_on_error.decorated_function` | function | (self, context, image_id, instance, *args, **kwargs) | public | `function(self, context, image_id, instance, *args, **kwargs)` (src/nova/compute/manager.py:L229) | — | `src/nova/compute/manager.py:L226–L235` |
| `ThreadingEventWithResult` | class | — | exported | not declared | — | `src/nova/compute/manager.py:L240–L262` |
| `ThreadingEventWithResult.UNSET_SENTINEL` | constant | — | public | not declared | — | `src/nova/compute/manager.py:L242–L242` |
| `ThreadingEventWithResult.FAILED_SENTINEL` | constant | — | public | not declared | — | `src/nova/compute/manager.py:L243–L243` |
| `ThreadingEventWithResult.__init__` | method | (self) | public | not declared | 1/4 | `src/nova/compute/manager.py:L245–L248` |
| `ThreadingEventWithResult.set` | method | (self, result=None) | public | not declared | 3/6 | `src/nova/compute/manager.py:L250–L255` |
| `ThreadingEventWithResult.wait` | method | (self, timeout=None) | public | `self._result` (src/nova/compute/manager.py:L260); `self.FAILED_SENTINEL` (src/nova/compute/manager.py:L262) | 2/6 | `src/nova/compute/manager.py:L257–L262` |
| `_InstanceEvents` | variable | — | unexported | not declared | — | `src/nova/compute/manager.py:L267–L267` |
| `InstanceEvents` | class | — | exported | not declared | — | `src/nova/compute/manager.py:L270–L404` |
| `InstanceEvents.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/compute/manager.py:L271–L272` |
| `InstanceEvents._lock_name` | method | (instance) | private | `'%s-%s' % (instance.uuid, 'events')` (src/nova/compute/manager.py:L276) | 1/2 | `src/nova/compute/manager.py:L275–L276` |
| `InstanceEvents.prepare_for_instance_event` | method | (self, instance, name, tag) | public | `_create_or_get_event()` (src/nova/compute/manager.py:L309) | 1/11 | `src/nova/compute/manager.py:L278–L309` |
| `InstanceEvents.prepare_for_instance_event._create_or_get_event` | function | — | private | `instance_events.setdefault((name, tag), ThreadingEventWithResult())` (src/nova/compute/manager.py:L305) | — | `src/nova/compute/manager.py:L297–L306` |
| `InstanceEvents.pop_instance_event` | method | (self, instance, event) | public | `None` (src/nova/compute/manager.py:L347); `None` (src/nova/compute/manager.py:L359); `result` (src/nova/compute/manager.py:L361) | 3/24 | `src/nova/compute/manager.py:L311–L361` |
| `InstanceEvents.pop_instance_event._pop_event` | function | — | private | `no_events_sentinel` (src/nova/compute/manager.py:L331); `no_events_sentinel` (src/nova/compute/manager.py:L334); `no_matching_event_sentinel` (src/nova/compute/manager.py:L339); `_event` (src/nova/compute/manager.py:L340) | — | `src/nova/compute/manager.py:L327–L340` |
| `InstanceEvents.clear_events_for_instance` | method | (self, instance) | public | `_clear_events()` (src/nova/compute/manager.py:L383) | 1/4 | `src/nova/compute/manager.py:L363–L383` |
| `InstanceEvents.clear_events_for_instance._clear_events` | function | — | private | `dict()` (src/nova/compute/manager.py:L377); `{'%s-%s' % k: e for k, e in self._events.pop(instance.uuid, {}).items()}` (src/nova/compute/manager.py:L381) | — | `src/nova/compute/manager.py:L373–L382` |
| `InstanceEvents.cancel_all_events` | method | (self) | public | `` (src/nova/compute/manager.py:L388) | 4/18 | `src/nova/compute/manager.py:L385–L404` |
| `ComputeVirtAPI` | class | — | exported | not declared | — | `src/nova/compute/manager.py:L407–L640` |
| `ComputeVirtAPI.__init__` | method | (self, compute) | public | not declared | 1/7 | `src/nova/compute/manager.py:L408–L418` |
| `ComputeVirtAPI.__init__.ExitEarly` | class | — | public | not declared | — | `src/nova/compute/manager.py:L413–L416` |
| `ComputeVirtAPI.__init__.ExitEarly.__init__` | method | (self, events) | public | not declared | — | `src/nova/compute/manager.py:L414–L416` |
| `ComputeVirtAPI.exit_wait_early` | method | (self, events) | public | not declared | 1/2 | `src/nova/compute/manager.py:L420–L427` |
| `ComputeVirtAPI._default_error_callback` | method | (self, event_name, instance) | private | not declared | 1/2 | `src/nova/compute/manager.py:L429–L430` |
| `ComputeVirtAPI._InstanceEvent` | class | — | private | not declared | — | `src/nova/compute/manager.py:L432–L481` |
| `ComputeVirtAPI._InstanceEvent.EXPECTED` | constant | — | public | not declared | — | `src/nova/compute/manager.py:L433–L433` |
| `ComputeVirtAPI._InstanceEvent.WAITING` | constant | — | public | not declared | — | `src/nova/compute/manager.py:L434–L434` |
| `ComputeVirtAPI._InstanceEvent.RECEIVED` | constant | — | public | not declared | — | `src/nova/compute/manager.py:L435–L435` |
| `ComputeVirtAPI._InstanceEvent.RECEIVED_EARLY` | constant | — | public | not declared | — | `src/nova/compute/manager.py:L436–L436` |
| `ComputeVirtAPI._InstanceEvent.TIMED_OUT` | constant | — | public | not declared | — | `src/nova/compute/manager.py:L437–L437` |
| `ComputeVirtAPI._InstanceEvent.RECEIVED_NOT_PROCESSED` | constant | — | public | not declared | — | `src/nova/compute/manager.py:L438–L438` |
| `ComputeVirtAPI._InstanceEvent.__init__` | method | (self, name, event) | public | not declared | 1/5 | `src/nova/compute/manager.py:L440–L444` |
| `ComputeVirtAPI._InstanceEvent.mark_as_received_early` | method | (self) | public | not declared | 1/2 | `src/nova/compute/manager.py:L446–L447` |
| `ComputeVirtAPI._InstanceEvent.is_received_early` | method | (self) | public | `self.status == self.RECEIVED_EARLY` (src/nova/compute/manager.py:L450) | 1/2 | `src/nova/compute/manager.py:L449–L450` |
| `ComputeVirtAPI._InstanceEvent._update_status_no_wait` | method | (self) | private | not declared | 3/3 | `src/nova/compute/manager.py:L452–L454` |
| `ComputeVirtAPI._InstanceEvent.wait` | method | (self, timeout) | public | `instance_event` (src/nova/compute/manager.py:L467) | 2/11 | `src/nova/compute/manager.py:L456–L467` |
| `ComputeVirtAPI._InstanceEvent.__str__` | method | (self) | public | `f"{self.name}: expected but not received"` (src/nova/compute/manager.py:L472); `( f"{self.name}: received after waiting " f"{self.wait_time:.2f} seconds")` (src/nova/compute/manager.py:L474); `( f"{self.name}: timed out after " f"{self.wait_time:.2f} seconds")` (src/nova/compute/manager.py:L478); `f"{self.name}: {self.status}"` (src/nova/compute/manager.py:L481) | 4/13 | `src/nova/compute/manager.py:L469–L481` |
| `ComputeVirtAPI._wait_for_instance_events` | method | (instance, events, error_callback, timeout) | private | not declared | 6/19 | `src/nova/compute/manager.py:L484–L505` |
| `ComputeVirtAPI.wait_for_instance_event` | method | (self, instance, event_names, timeout=300, error_callback=None) | public | not declared | 11/47 | `src/nova/compute/manager.py:L508–L605` |
| `ComputeVirtAPI.update_compute_provider_status` | method | (self, context, rp_uuid, enabled) | public | not declared | 6/16 | `src/nova/compute/manager.py:L607–L640` |
| `ComputeManager` | class | — | exported | not declared | — | `src/nova/compute/manager.py:L643–L11996` |
| `ComputeManager.target` | field | — | public | not declared | — | `src/nova/compute/manager.py:L646–L646` |
| `ComputeManager.__init__` | method | (self, compute_driver=None, *args, **kwargs) | public | not declared | 2/37 | `src/nova/compute/manager.py:L648–L724` |
| `ComputeManager.syncs_in_progress` | method | (self) | public | not declared | 1/3 | `src/nova/compute/manager.py:L727–L729` |
| `ComputeManager.reset` | method | (self) | public | not declared | 1/5 | `src/nova/compute/manager.py:L731–L735` |
| `ComputeManager._update_resource_tracker` | method | (self, context, instance) | private | not declared | 2/3 | `src/nova/compute/manager.py:L737–L741` |
| `ComputeManager._instance_update` | method | (self, context, instance, **kwargs) | private | not declared | 2/5 | `src/nova/compute/manager.py:L743–L749` |
| `ComputeManager._nil_out_instance_obj_host_and_node` | method | (self, instance) | private | not declared | 1/6 | `src/nova/compute/manager.py:L751–L769` |
| `ComputeManager._set_instance_obj_error_state` | method | (self, instance, clean_task_state=False) | private | not declared | 3/9 | `src/nova/compute/manager.py:L771–L779` |
| `ComputeManager._get_instances_on_driver` | method | (self, context, filters=None) | private | `objects.InstanceList()` (src/nova/compute/manager.py:L793); `local_instances` (src/nova/compute/manager.py:L797); `local_instances` (src/nova/compute/manager.py:L816) | 7/25 | `src/nova/compute/manager.py:L781–L816` |
| `ComputeManager._destroy_evacuated_instances` | method | (self, context, node_cache) | private | `{}` (src/nova/compute/manager.py:L858); `evacuations` (src/nova/compute/manager.py:L933) | 14/69 | `src/nova/compute/manager.py:L818–L933` |
| `ComputeManager._is_instance_storage_shared` | method | (self, context, instance, host=None) | private | `shared_storage` (src/nova/compute/manager.py:L958) | 6/24 | `src/nova/compute/manager.py:L935–L958` |
| `ComputeManager._complete_partial_deletion` | method | (self, context, instance) | private | not declared | 1/10 | `src/nova/compute/manager.py:L960–L972` |
| `ComputeManager._complete_deletion_vtpm` | method | (self, context, instance) | private | not declared | 1/2 | `src/nova/compute/manager.py:L974–L975` |
| `ComputeManager._complete_deletion` | method | (self, context, instance) | private | not declared | 2/9 | `src/nova/compute/manager.py:L977–L992` |
| `ComputeManager._reset_live_migration` | method | (self, context, instance) | private | not declared | 5/18 | `src/nova/compute/manager.py:L994–L1011` |
| `ComputeManager._init_instance` | method | (self, context, instance) | private | `` (src/nova/compute/manager.py:L1028); `` (src/nova/compute/manager.py:L1040); `` (src/nova/compute/manager.py:L1049); `` (src/nova/compute/manager.py:L1063); `` (src/nova/compute/manager.py:L1074); `` (src/nova/compute/manager.py:L1110); `` (src/nova/compute/manager.py:L1138); `` (src/nova/compute/manager.py:L1175); `` (src/nova/compute/manager.py:L1186); `` (src/nova/compute/manager.py:L1197); `` (src/nova/compute/manager.py:L1214); `` (src/nova/compute/manager.py:L1228) | 40/189 | `src/nova/compute/manager.py:L1013–L1273` |
| `ComputeManager._resume_guests_state` | method | (self, context, instance, net_info) | private | `` (src/nova/compute/manager.py:L1288) | 4/23 | `src/nova/compute/manager.py:L1275–L1301` |
| `ComputeManager._retry_reboot` | method | (self, instance, current_power_state) | private | `retry_reboot, reboot_type` (src/nova/compute/manager.py:L1325) | 7/20 | `src/nova/compute/manager.py:L1303–L1325` |
| `ComputeManager.handle_lifecycle_event` | method | (self, event) | public | not declared | 11/62 | `src/nova/compute/manager.py:L1327–L1409` |
| `ComputeManager.handle_events` | method | (self, event) | public | not declared | 3/9 | `src/nova/compute/manager.py:L1411–L1419` |
| `ComputeManager.init_virt_events` | method | (self) | public | not declared | 3/17 | `src/nova/compute/manager.py:L1421–L1439` |
| `ComputeManager._get_nodes` | method | (self, context) | private | `{}` (src/nova/compute/manager.py:L1456); `{}` (src/nova/compute/manager.py:L1468); `{n.uuid: n for n in nodes}` (src/nova/compute/manager.py:L1479) | 6/27 | `src/nova/compute/manager.py:L1441–L1479` |
| `ComputeManager._ensure_existing_node_identity` | method | (self, service_ref) | private | `` (src/nova/compute/manager.py:L1489); `` (src/nova/compute/manager.py:L1499); `` (src/nova/compute/manager.py:L1503) | 7/28 | `src/nova/compute/manager.py:L1481–L1527` |
| `ComputeManager._check_for_host_rename` | method | (self, nodes_by_uuid) | private | `` (src/nova/compute/manager.py:L1535) | 4/11 | `src/nova/compute/manager.py:L1529–L1543` |
| `ComputeManager._sanity_check_new_host` | method | (self) | private | not declared | 2/7 | `src/nova/compute/manager.py:L1545–L1555` |
| `ComputeManager.init_host` | method | (self, service_ref) | public | not declared | 13/57 | `src/nova/compute/manager.py:L1557–L1679` |
| `ComputeManager._error_out_instances_whose_build_was_interrupted` | method | (self, context, already_handled_instances, node_uuids) | private | not declared | 5/32 | `src/nova/compute/manager.py:L1681–L1739` |
| `ComputeManager.graceful_shutdown` | method | (self, timeout) | public | not declared | 1/8 | `src/nova/compute/manager.py:L1741–L1767` |
| `ComputeManager.cleanup_host` | method | (self) | public | not declared | 2/11 | `src/nova/compute/manager.py:L1769–L1786` |
| `ComputeManager._cleanup_live_migrations_in_pool` | method | (self) | private | not declared | 4/12 | `src/nova/compute/manager.py:L1788–L1801` |
| `ComputeManager.pre_start_hook` | method | (self, service_ref) | public | not declared | 1/5 | `src/nova/compute/manager.py:L1803–L1811` |
| `ComputeManager._get_power_state` | method | (self, instance) | private | `self.driver.get_info(instance, use_cache=False).state` (src/nova/compute/manager.py:L1817); `power_state.NOSTATE` (src/nova/compute/manager.py:L1819) | 2/6 | `src/nova/compute/manager.py:L1813–L1819` |
| `ComputeManager._await_block_device_map_created` | method | (self, context, vol_id) | private | `attempt` (src/nova/compute/manager.py:L1838) | 5/23 | `src/nova/compute/manager.py:L1821–L1849` |
| `ComputeManager._decode_files` | method | (self, injected_files) | private | `[]` (src/nova/compute/manager.py:L1854); `[_decode(f) for f in injected_files]` (src/nova/compute/manager.py:L1865) | 3/5 | `src/nova/compute/manager.py:L1851–L1865` |
| `ComputeManager._decode_files._decode` | function | (f) | private | `path, decoded` (src/nova/compute/manager.py:L1861) | — | `src/nova/compute/manager.py:L1856–L1863` |
| `ComputeManager._validate_instance_group_policy` | method | (self, context, instance, scheduler_hints=None) | private | `` (src/nova/compute/manager.py:L1871); `` (src/nova/compute/manager.py:L1886); `` (src/nova/compute/manager.py:L1899); `` (src/nova/compute/manager.py:L1909) | 7/27 | `src/nova/compute/manager.py:L1867–L1962` |
| `ComputeManager._validate_instance_group_policy._do_validation` | function | (context, instance, group) | private | not declared | — | `src/nova/compute/manager.py:L1912–L1960` |
| `ComputeManager._log_original_error` | method | (self, exc_info, instance_uuid) | private | not declared | 1/3 | `src/nova/compute/manager.py:L1964–L1966` |
| `ComputeManager._check_instance_build_time` | method | (self, context) | private | `` (src/nova/compute/manager.py:L1973) | 4/14 | `src/nova/compute/manager.py:L1969–L1986` |
| `ComputeManager._check_instance_exists` | method | (self, instance) | private | not declared | 2/3 | `src/nova/compute/manager.py:L1988–L1991` |
| `ComputeManager._allocate_network_async` | method | (self, context, instance, requested_networks, security_groups, resource_provider_mapping, network_arqs) | private | `network_model.NetworkInfo([])` (src/nova/compute/manager.py:L2005); `nwinfo` (src/nova/compute/manager.py:L2029) | 7/41 | `src/nova/compute/manager.py:L1993–L2045` |
| `ComputeManager._build_networks_for_instance` | method | (self, context, instance, requested_networks, security_groups, resource_provider_mapping, network_arqs) | private | `self.network_api.get_instance_nw_info(context, instance)` (src/nova/compute/manager.py:L2060); `network_info` (src/nova/compute/manager.py:L2067) | 2/13 | `src/nova/compute/manager.py:L2047–L2067` |
| `ComputeManager._allocate_network` | method | (self, context, instance, requested_networks, security_groups, resource_provider_mapping, network_arqs) | private | `network_model.NetworkInfoAsyncWrapper( self._allocate_network_async, context, instance, requested_networks, security_groups, resource_provider_mapping, network_arqs)` (src/nova/compute/manager.py:L2083) | 1/10 | `src/nova/compute/manager.py:L2069–L2086` |
| `ComputeManager._default_root_device_name` | method | (self, instance, image_meta, root_bdm) | private | `self.driver.default_root_device_name(instance, image_meta, root_bdm)` (src/nova/compute/manager.py:L2101); `compute_utils.get_next_device_name(instance, [])` (src/nova/compute/manager.py:L2105) | 2/7 | `src/nova/compute/manager.py:L2088–L2105` |
| `ComputeManager._default_device_names_for_instance` | method | (self, instance, root_device_name, *block_device_lists) | private | not declared | 2/10 | `src/nova/compute/manager.py:L2107–L2125` |
| `ComputeManager._get_device_name_for_instance` | method | (self, instance, bdms, block_device_obj) | private | `self.driver.get_device_name_for_instance( instance, bdms, block_device_obj)` (src/nova/compute/manager.py:L2143); `compute_utils.get_device_name_for_instance( instance, bdms, block_device_obj.get("device_name"))` (src/nova/compute/manager.py:L2146) | 2/8 | `src/nova/compute/manager.py:L2127–L2147` |
| `ComputeManager._default_block_device_names` | method | (self, instance, image_meta, block_devices) | private | `` (src/nova/compute/manager.py:L2158) | 10/41 | `src/nova/compute/manager.py:L2149–L2206` |
| `ComputeManager._add_missing_dev_names` | method | (self, bdms, instance) | private | not declared | 3/9 | `src/nova/compute/manager.py:L2208–L2217` |
| `ComputeManager._prep_block_device` | method | (self, context, instance, bdms) | private | `block_device_info` (src/nova/compute/manager.py:L2229) | 3/18 | `src/nova/compute/manager.py:L2219–L2244` |
| `ComputeManager._update_instance_after_spawn` | method | (self, instance, vm_state=vm_states.ACTIVE) | private | not declared | 1/7 | `src/nova/compute/manager.py:L2246–L2259` |
| `ComputeManager._update_scheduler_instance_info` | method | (self, context, instance) | private | `` (src/nova/compute/manager.py:L2271) | 3/8 | `src/nova/compute/manager.py:L2261–L2276` |
| `ComputeManager._delete_scheduler_instance_info` | method | (self, context, instance_uuid) | private | `` (src/nova/compute/manager.py:L2281) | 2/6 | `src/nova/compute/manager.py:L2278–L2284` |
| `ComputeManager._sync_scheduler_instance_info` | method | (self, context) | private | `` (src/nova/compute/manager.py:L2289) | 3/9 | `src/nova/compute/manager.py:L2287–L2295` |
| `ComputeManager._notify_about_instance_usage` | method | (self, context, instance, event_suffix, network_info=None, extra_usage_info=None, fault=None, best_effort=False) | private | not declared | 1/8 | `src/nova/compute/manager.py:L2297–L2304` |
| `ComputeManager._deallocate_network` | method | (self, context, instance, requested_networks=None) | private | `` (src/nova/compute/manager.py:L2313) | 3/12 | `src/nova/compute/manager.py:L2306–L2321` |
| `ComputeManager._get_instance_block_device_info` | method | (self, context, instance, refresh_conn_info=False, bdms=None) | private | `block_device_info` (src/nova/compute/manager.py:L2345) | 5/17 | `src/nova/compute/manager.py:L2323–L2345` |
| `ComputeManager._build_failed` | method | (self, node) | private | not declared | 2/3 | `src/nova/compute/manager.py:L2347–L2351` |
| `ComputeManager._build_succeeded` | method | (self, node) | private | not declared | 1/2 | `src/nova/compute/manager.py:L2353–L2354` |
| `ComputeManager._start_recorded_task` | method | (self, executor_type, task_name, instance, context, func, *args, **kwargs) | private | `future` (src/nova/compute/manager.py:L2385) | 2/13 | `src/nova/compute/manager.py:L2356–L2385` |
| `ComputeManager.build_and_run_instance` | method | (self, context, instance, image, request_spec, filter_properties, accel_uuids, admin_password=None, injected_files=None, requested_networks=None, security_groups=None, block_device_mapping=None, node=None, limits=None, host_list=None) | public | not declared | 1/16 | `src/nova/compute/manager.py:L2396–L2466` |
| `ComputeManager.build_and_run_instance._locked_do_build_and_run_instance` | function | (*args, **kwargs) | private | `` (src/nova/compute/manager.py:L2447) | — | `src/nova/compute/manager.py:L2403–L2451` |
| `ComputeManager._check_device_tagging` | method | (self, requested_networks, block_device_mapping) | private | not declared | 12/18 | `src/nova/compute/manager.py:L2468–L2485` |
| `ComputeManager._check_trusted_certs` | method | (self, instance) | private | not declared | 3/7 | `src/nova/compute/manager.py:L2487–L2493` |
| `ComputeManager._do_build_and_run_instance` | method | (self, context, instance, image, request_spec, filter_properties, admin_password, injected_files, requested_networks, security_groups, block_device_mapping, node=None, limits=None, host_list=None, accel_uuids=None) | private | `build_results.FAILED` (src/nova/compute/manager.py:L2513); `build_results.FAILED` (src/nova/compute/manager.py:L2516); `build_results.ACTIVE` (src/nova/compute/manager.py:L2535); `build_results.FAILED_BY_POLICY` (src/nova/compute/manager.py:L2551); `build_results.FAILED` (src/nova/compute/manager.py:L2552); `build_results.RESCHEDULED_BY_POLICY` (src/nova/compute/manager.py:L2580); `build_results.RESCHEDULED` (src/nova/compute/manager.py:L2582); `build_results.FAILED` (src/nova/compute/manager.py:L2589); `build_results.FAILED` (src/nova/compute/manager.py:L2605) | 12/87 | `src/nova/compute/manager.py:L2499–L2605` |
| `ComputeManager._get_scheduler_hints` | method | (filter_properties, request_spec=None) | private | `hints` (src/nova/compute/manager.py:L2624) | 5/7 | `src/nova/compute/manager.py:L2608–L2624` |
| `ComputeManager._get_request_group_mapping` | method | (request_spec) | private | `request_spec.get_request_group_mapping()` (src/nova/compute/manager.py:L2640); `None` (src/nova/compute/manager.py:L2642) | 2/5 | `src/nova/compute/manager.py:L2627–L2642` |
| `ComputeManager._build_and_run_instance` | method | (self, context, instance, image, injected_files, admin_password, requested_networks, security_groups, block_device_mapping, node, limits, filter_properties, request_spec=None, accel_uuids=None) | private | not declared | 22/192 | `src/nova/compute/manager.py:L2644–L2864` |
| `ComputeManager._build_resources_cleanup` | method | (self, instance, network_info) | private | not declared | 2/6 | `src/nova/compute/manager.py:L2866–L2872` |
| `ComputeManager._build_resources` | method | (self, context, instance, requested_networks, security_groups, image_meta, block_device_mapping, resource_provider_mapping, accel_uuids) | private | not declared | 16/103 | `src/nova/compute/manager.py:L2875–L3004` |
| `ComputeManager._get_bound_arq_resources` | method | (self, context, instance, arq_uuids) | private | `arqs` (src/nova/compute/manager.py:L3051) | 8/22 | `src/nova/compute/manager.py:L3006–L3051` |
| `ComputeManager._split_network_arqs` | method | (self, arqs, requested_networks) | private | `spec_arqs, port_arqs` (src/nova/compute/manager.py:L3071) | 4/10 | `src/nova/compute/manager.py:L3053–L3071` |
| `ComputeManager._cleanup_allocated_networks` | method | (self, context, instance, requested_networks) | private | `` (src/nova/compute/manager.py:L3098); `` (src/nova/compute/manager.py:L3123) | 7/40 | `src/nova/compute/manager.py:L3073–L3132` |
| `ComputeManager._try_deallocate_network` | method | (self, context, instance, requested_networks=None) | private | not declared | 2/13 | `src/nova/compute/manager.py:L3134–L3162` |
| `ComputeManager._try_deallocate_network._deallocate_network_with_retries` | function | — | private | not declared | — | `src/nova/compute/manager.py:L3144–L3153` |
| `ComputeManager._get_power_off_values` | method | (self, instance, clean_shutdown) | private | `timeout, retry_interval` (src/nova/compute/manager.py:L3175) | 2/10 | `src/nova/compute/manager.py:L3164–L3175` |
| `ComputeManager._power_off_instance` | method | (self, context, instance, clean_shutdown=True) | private | not declared | 2/12 | `src/nova/compute/manager.py:L3177–L3189` |
| `ComputeManager._shutdown_instance` | method | (self, context, instance, bdms, requested_networks=None, notify=True, try_deallocate_networks=True) | private | not declared | 22/106 | `src/nova/compute/manager.py:L3191–L3334` |
| `ComputeManager._cleanup_volumes` | method | (self, context, instance, bdms, raise_exc=True, detach=True) | private | not declared | 10/28 | `src/nova/compute/manager.py:L3336–L3364` |
| `ComputeManager._get_multiattach_volume_lock_names_bdms` | method | (self, bdms) | private | `[]` (src/nova/compute/manager.py:L3374); `[ f"multi_attach_volume_{bdm.volume_id}" for bdm in bdms if bdm.is_multiattach ]` (src/nova/compute/manager.py:L3375) | 4/9 | `src/nova/compute/manager.py:L3366–L3379` |
| `ComputeManager._delete_instance` | method | (self, context, instance, bdms) | private | not declared | 2/29 | `src/nova/compute/manager.py:L3381–L3440` |
| `ComputeManager.terminate_instance` | method | (self, context, instance, bdms) | public | not declared | 1/4 | `src/nova/compute/manager.py:L3446–L3479` |
| `ComputeManager.terminate_instance.do_terminate_instance` | function | (instance, bdms) | public | not declared | — | `src/nova/compute/manager.py:L3449–L3477` |
| `ComputeManager.stop_instance` | method | (self, context, instance, clean_shutdown) | public | not declared | 1/4 | `src/nova/compute/manager.py:L3488–L3538` |
| `ComputeManager.stop_instance.do_stop_instance` | function | — | public | not declared | — | `src/nova/compute/manager.py:L3492–L3536` |
| `ComputeManager._power_on` | method | (self, context, instance) | private | not declared | 2/15 | `src/nova/compute/manager.py:L3540–L3556` |
| `ComputeManager._delete_snapshot_of_shelved_instance` | method | (self, context, instance, snapshot_id) | private | not declared | 3/13 | `src/nova/compute/manager.py:L3558–L3571` |
| `ComputeManager.start_instance` | method | (self, context, instance) | public | not declared | 2/19 | `src/nova/compute/manager.py:L3581–L3605` |
| `ComputeManager.trigger_crash_dump` | method | (self, context, instance) | public | not declared | 1/12 | `src/nova/compute/manager.py:L3613–L3630` |
| `ComputeManager.soft_delete_instance` | method | (self, context, instance) | public | not declared | 2/14 | `src/nova/compute/manager.py:L3636–L3652` |
| `ComputeManager.restore_instance` | method | (self, context, instance) | public | not declared | 2/17 | `src/nova/compute/manager.py:L3658–L3677` |
| `ComputeManager._set_migration_status` | method | (migration, status) | private | not declared | 2/4 | `src/nova/compute/manager.py:L3680–L3689` |
| `ComputeManager._reimage_failed_callback` | method | (event_name, instance) | private | not declared | 1/6 | `src/nova/compute/manager.py:L3692–L3697` |
| `ComputeManager._detach_root_volume` | method | (self, context, instance, root_bdm) | private | not declared | 4/25 | `src/nova/compute/manager.py:L3699–L3723` |
| `ComputeManager._rebuild_volume_backed_instance` | method | (self, context, instance, bdms, image_id) | private | not declared | 7/56 | `src/nova/compute/manager.py:L3725–L3794` |
| `ComputeManager._rebuild_default_impl` | method | (self, context, instance, image_meta, injected_files, admin_password, allocations, bdms, detach_block_devices, attach_block_devices, network_info=None, evacuate=False, block_device_info=None, preserve_ephemeral=False, accel_uuids=None, reimage_boot_volume=False) | private | not declared | 12/68 | `src/nova/compute/manager.py:L3796–L3879` |
| `ComputeManager._notify_instance_rebuild_error` | method | (self, context, instance, error, bdms) | private | not declared | 1/6 | `src/nova/compute/manager.py:L3881–L3886` |
| `ComputeManager.rebuild_instance` | method | (self, context, instance, orig_image_ref, image_ref, injected_files, new_pass, orig_sys_metadata, bdms, recreate, on_shared_storage, preserve_ephemeral, migration, scheduled_node, limits, request_spec, accel_uuids, reimage_boot_volume=None, target_state=None) | public | not declared | 14/86 | `src/nova/compute/manager.py:L3894–L4066` |
| `ComputeManager._do_rebuild_instance_with_claim` | method | (self, context, instance, orig_image_ref, image_meta, injected_files, new_pass, orig_sys_metadata, bdms, evacuate, on_shared_storage, preserve_ephemeral, migration, request_spec, allocations, rebuild_claim, scheduled_node, limits, accel_uuids, reimage_boot_volume, target_state) | private | not declared | 3/26 | `src/nova/compute/manager.py:L4068–L4098` |
| `ComputeManager._get_image_name` | method | (image_meta) | private | `image_meta.name` (src/nova/compute/manager.py:L4103); `''` (src/nova/compute/manager.py:L4105) | 2/5 | `src/nova/compute/manager.py:L4101–L4105` |
| `ComputeManager._do_rebuild_instance` | method | (self, context, instance, orig_image_ref, image_meta, injected_files, new_pass, orig_sys_metadata, bdms, evacuate, on_shared_storage, preserve_ephemeral, migration, request_spec, allocations, request_group_resource_providers_mapping, accel_uuids, reimage_boot_volume, target_state) | private | not declared | 15/115 | `src/nova/compute/manager.py:L4107–L4308` |
| `ComputeManager._do_rebuild_instance.detach_block_devices` | function | (context, bdms, detach_root_bdm=True) | public | not declared | — | `src/nova/compute/manager.py:L4225–L4259` |
| `ComputeManager._handle_bad_volumes_detached` | method | (self, context, instance, bad_devices, block_device_info) | private | not declared | 4/11 | `src/nova/compute/manager.py:L4310–L4332` |
| `ComputeManager._get_accel_info` | method | (self, context, instance) | private | `accel_info` (src/nova/compute/manager.py:L4341) | 2/8 | `src/nova/compute/manager.py:L4334–L4341` |
| `ComputeManager._delete_dangling_bdms` | method | (self, context, instance, bdms) | private | `` (src/nova/compute/manager.py:L4367) | 10/33 | `src/nova/compute/manager.py:L4343–L4400` |
| `ComputeManager.reboot_instance` | method | (self, context, instance, block_device_info, reboot_type) | public | not declared | 1/5 | `src/nova/compute/manager.py:L4407–L4414` |
| `ComputeManager.reboot_instance.do_reboot_instance` | function | (context, instance, block_device_info, reboot_type) | public | not declared | — | `src/nova/compute/manager.py:L4410–L4413` |
| `ComputeManager._reboot_instance` | method | (self, context, instance, block_device_info, reboot_type) | private | not declared | 10/97 | `src/nova/compute/manager.py:L4416–L4542` |
| `ComputeManager._reboot_instance.bad_volumes_callback` | function | (bad_devices) | public | not declared | — | `src/nova/compute/manager.py:L4463–L4465` |
| `ComputeManager._do_snapshot_instance` | method | (self, context, image_id, instance) | private | not declared | 1/3 | `src/nova/compute/manager.py:L4545–L4547` |
| `ComputeManager.backup_instance` | method | (self, context, image_id, instance, backup_type, rotation) | public | not declared | 1/4 | `src/nova/compute/manager.py:L4553–L4561` |
| `ComputeManager.snapshot_instance` | method | (self, context, image_id, instance) | public | `` (src/nova/compute/manager.py:L4589); `` (src/nova/compute/manager.py:L4594); `self._start_recorded_task( thread_pool_factory.ExecutorType.LONG_TASK, 'snapshot_instance', instance, context, do_snapshot_instance, context, image_id, instance, task_states.IMAGE_SNAPSHOT)` (src/nova/compute/manager.py:L4607) | 3/19 | `src/nova/compute/manager.py:L4569–L4610` |
| `ComputeManager.snapshot_instance.do_snapshot_instance` | function | (context, image_id, instance, expected_task_state) | public | not declared | — | `src/nova/compute/manager.py:L4596–L4601` |
| `ComputeManager._snapshot_instance` | method | (self, context, image_id, instance, expected_task_state) | private | not declared | 7/50 | `src/nova/compute/manager.py:L4616–L4678` |
| `ComputeManager._snapshot_instance.update_task_state` | function | (task_state, expected_state=expected_task_state) | public | not declared | — | `src/nova/compute/manager.py:L4640–L4643` |
| `ComputeManager.volume_snapshot_create` | method | (self, context, instance, volume_id, create_info) | public | not declared | 2/8 | `src/nova/compute/manager.py:L4682–L4690` |
| `ComputeManager.volume_snapshot_delete` | method | (self, context, instance, volume_id, snapshot_id, delete_info) | public | not declared | 2/8 | `src/nova/compute/manager.py:L4694–L4702` |
| `ComputeManager.allow_share` | method | (self, context, instance, share_mapping) | public | not declared | 1/2 | `src/nova/compute/manager.py:L4708–L4709` |
| `ComputeManager.deny_share` | method | (self, context, instance, share_mapping) | public | not declared | 1/2 | `src/nova/compute/manager.py:L4715–L4716` |
| `ComputeManager._rotate_backups` | method | (self, context, instance, backup_type, rotation) | private | not declared | 5/31 | `src/nova/compute/manager.py:L4719–L4765` |
| `ComputeManager.set_admin_password` | method | (self, context, instance, new_pass) | public | not declared | 7/48 | `src/nova/compute/manager.py:L4771–L4836` |
| `ComputeManager._get_rescue_image` | method | (self, context, instance, rescue_image_ref=None) | private | `objects.ImageMeta.from_image_ref( context, self.image_api, rescue_image_ref)` (src/nova/compute/manager.py:L4857) | 3/11 | `src/nova/compute/manager.py:L4838–L4858` |
| `ComputeManager.rescue_instance` | method | (self, context, instance, rescue_password, rescue_image_ref, clean_shutdown) | public | not declared | 3/48 | `src/nova/compute/manager.py:L4864–L4923` |
| `ComputeManager.unrescue_instance` | method | (self, context, instance) | public | not declared | 1/23 | `src/nova/compute/manager.py:L4929–L4955` |
| `ComputeManager.confirm_resize` | method | (self, context, instance, migration) | public | not declared | 1/4 | `src/nova/compute/manager.py:L4961–L5030` |
| `ComputeManager.confirm_resize.do_confirm_resize` | function | (context, instance, migration) | public | `` (src/nova/compute/manager.py:L4978); `` (src/nova/compute/manager.py:L4985); `` (src/nova/compute/manager.py:L4997) | — | `src/nova/compute/manager.py:L4971–L5028` |
| `ComputeManager._get_updated_nw_info_with_pci_mapping` | method | (self, nw_info, pci_mapping) | private | `updated_nw_info` (src/nova/compute/manager.py:L5057) | 6/21 | `src/nova/compute/manager.py:L5032–L5057` |
| `ComputeManager._confirm_resize` | method | (self, context, instance, migration=None) | private | not declared | 2/38 | `src/nova/compute/manager.py:L5059–L5118` |
| `ComputeManager._delete_allocation_after_move` | method | (self, context, instance, migration) | private | not declared | 2/14 | `src/nova/compute/manager.py:L5120–L5139` |
| `ComputeManager._delete_stashed_flavor_info` | method | (self, instance) | private | not declared | 1/5 | `src/nova/compute/manager.py:L5141–L5146` |
| `ComputeManager.confirm_snapshot_based_resize_at_source` | method | (self, ctxt, instance, migration) | public | not declared | 1/5 | `src/nova/compute/manager.py:L5152–L5202` |
| `ComputeManager.confirm_snapshot_based_resize_at_source.do_confirm` | function | — | public | not declared | — | `src/nova/compute/manager.py:L5170–L5201` |
| `ComputeManager._confirm_snapshot_based_resize_at_source` | method | (self, ctxt, instance, migration) | private | not declared | 1/12 | `src/nova/compute/manager.py:L5204–L5249` |
| `ComputeManager._confirm_snapshot_based_resize_delete_port_bindings` | method | (self, ctxt, instance) | private | not declared | 2/10 | `src/nova/compute/manager.py:L5251–L5268` |
| `ComputeManager._delete_volume_attachments` | method | (self, ctxt, bdms) | private | not declared | 4/9 | `src/nova/compute/manager.py:L5270–L5288` |
| `ComputeManager._update_bdm_for_swap_to_finish_resize` | method | (self, context, instance, confirm=True) | private | `bdms` (src/nova/compute/manager.py:L5296); `bdms` (src/nova/compute/manager.py:L5299); `instance.get_bdms()` (src/nova/compute/manager.py:L5317); `bdms` (src/nova/compute/manager.py:L5332) | 12/31 | `src/nova/compute/manager.py:L5290–L5332` |
| `ComputeManager.revert_snapshot_based_resize_at_dest` | method | (self, ctxt, instance, migration) | public | not declared | 2/12 | `src/nova/compute/manager.py:L5339–L5373` |
| `ComputeManager.revert_snapshot_based_resize_at_dest.do_revert` | function | — | public | not declared | — | `src/nova/compute/manager.py:L5357–L5362` |
| `ComputeManager._revert_snapshot_based_resize_at_dest` | method | (self, ctxt, instance, migration) | private | not declared | 2/28 | `src/nova/compute/manager.py:L5375–L5433` |
| `ComputeManager._revert_instance_flavor_host_node` | method | (self, instance, migration) | private | not declared | 1/7 | `src/nova/compute/manager.py:L5435–L5445` |
| `ComputeManager.finish_revert_snapshot_based_resize_at_source` | method | (self, ctxt, instance, migration) | public | not declared | 3/14 | `src/nova/compute/manager.py:L5452–L5488` |
| `ComputeManager.finish_revert_snapshot_based_resize_at_source.do_revert` | function | — | public | not declared | — | `src/nova/compute/manager.py:L5470–L5474` |
| `ComputeManager._finish_revert_snapshot_based_resize_at_source` | method | (self, ctxt, instance, migration) | private | not declared | 5/60 | `src/nova/compute/manager.py:L5490–L5603` |
| `ComputeManager.revert_resize` | method | (self, context, instance, migration, request_spec) | public | not declared | 1/25 | `src/nova/compute/manager.py:L5610–L5654` |
| `ComputeManager.finish_revert_resize` | method | (self, context, instance, migration, request_spec) | public | not declared | 2/6 | `src/nova/compute/manager.py:L5661–L5672` |
| `ComputeManager._finish_revert_resize` | method | (self, context, instance, migration, request_spec=None) | private | not declared | 3/66 | `src/nova/compute/manager.py:L5674–L5777` |
| `ComputeManager._fill_provider_mapping_based_on_allocs` | method | (self, context, allocations, request_spec) | private | `provider_mappings` (src/nova/compute/manager.py:L5811) | 2/10 | `src/nova/compute/manager.py:L5779–L5811` |
| `ComputeManager._revert_allocation` | method | (self, context, instance, migration) | private | `False` (src/nova/compute/manager.py:L5825); `orig_alloc` (src/nova/compute/manager.py:L5838) | 2/16 | `src/nova/compute/manager.py:L5813–L5838` |
| `ComputeManager._prep_resize` | method | (self, context, image, instance, flavor, filter_properties, node, migration, request_spec, clean_shutdown=True) | private | not declared | 9/50 | `src/nova/compute/manager.py:L5840–L5917` |
| `ComputeManager._send_prep_resize_notifications` | method | (self, context, instance, phase, flavor) | private | not declared | 3/16 | `src/nova/compute/manager.py:L5919–L5948` |
| `ComputeManager.prep_resize` | method | (self, context, image, instance, flavor, request_spec, filter_properties, node, clean_shutdown, migration, host_list) | public | not declared | 1/9 | `src/nova/compute/manager.py:L5955–L5980` |
| `ComputeManager._end_pending_dest_resize_task` | method | (self, instance_uuid) | private | not declared | 2/4 | `src/nova/compute/manager.py:L5982–L5985` |
| `ComputeManager._do_prep_resize` | method | (self, context, image, instance, flavor, request_spec, filter_properties, node, clean_shutdown, migration, host_list) | private | not declared | 6/39 | `src/nova/compute/manager.py:L5987–L6044` |
| `ComputeManager._reschedule_resize_or_reraise` | method | (self, context, instance, exc_info, flavor, request_spec, filter_properties, host_list) | private | not declared | 8/57 | `src/nova/compute/manager.py:L6046–L6118` |
| `ComputeManager.prep_snapshot_based_resize_at_dest` | method | (self, ctxt, instance, flavor, nodename, migration, limits) | public | `instance.migration_context` (src/nova/compute/manager.py:L6189) | 3/26 | `src/nova/compute/manager.py:L6124–L6189` |
| `ComputeManager.prep_snapshot_based_resize_at_source` | method | (self, ctxt, instance, migration, snapshot_id=None) | public | not declared | 1/6 | `src/nova/compute/manager.py:L6197–L6225` |
| `ComputeManager._snapshot_for_resize` | method | (self, ctxt, image_id, instance) | private | not declared | 1/8 | `src/nova/compute/manager.py:L6228–L6246` |
| `ComputeManager._prep_snapshot_based_resize_at_source` | method | (self, ctxt, instance, migration, snapshot_id=None) | private | not declared | 3/38 | `src/nova/compute/manager.py:L6248–L6325` |
| `ComputeManager.resize_instance` | method | (self, context, instance, image, migration, flavor, clean_shutdown, request_spec) | public | not declared | 2/9 | `src/nova/compute/manager.py:L6331–L6344` |
| `ComputeManager._resize_instance` | method | (self, context, instance, image, migration, flavor, clean_shutdown, request_spec) | private | not declared | 1/47 | `src/nova/compute/manager.py:L6346–L6418` |
| `ComputeManager._send_resize_instance_notifications` | method | (self, context, instance, bdms, network_info, phase) | private | not declared | 1/9 | `src/nova/compute/manager.py:L6420–L6440` |
| `ComputeManager._terminate_volume_connections` | method | (self, context, instance, bdms) | private | not declared | 5/17 | `src/nova/compute/manager.py:L6442–L6468` |
| `ComputeManager._set_instance_info` | method | (instance, flavor) | private | not declared | 1/7 | `src/nova/compute/manager.py:L6471–L6477` |
| `ComputeManager._update_volume_attachments` | method | (self, context, instance, bdms) | private | not declared | 6/9 | `src/nova/compute/manager.py:L6479–L6494` |
| `ComputeManager._complete_volume_attachments` | method | (self, context, bdms) | private | not declared | 5/6 | `src/nova/compute/manager.py:L6496–L6507` |
| `ComputeManager._finish_resize` | method | (self, context, instance, migration, disk_info, image_meta, bdms, request_spec) | private | `network_info` (src/nova/compute/manager.py:L6639) | 11/73 | `src/nova/compute/manager.py:L6509–L6639` |
| `ComputeManager.finish_resize` | method | (self, context, disk_info, image, instance, migration, request_spec) | public | not declared | 3/15 | `src/nova/compute/manager.py:L6646–L6678` |
| `ComputeManager._finish_resize_helper` | method | (self, context, disk_info, image, instance, migration, request_spec) | private | not declared | 1/12 | `src/nova/compute/manager.py:L6680–L6701` |
| `ComputeManager._send_finish_resize_notifications` | method | (self, context, instance, bdms, network_info, phase) | private | not declared | 1/9 | `src/nova/compute/manager.py:L6703–L6723` |
| `ComputeManager.finish_snapshot_based_resize_at_dest` | method | (self, ctxt, instance, migration, snapshot_id) | public | not declared | 1/7 | `src/nova/compute/manager.py:L6730–L6756` |
| `ComputeManager._finish_snapshot_based_resize_at_dest` | method | (self, ctxt, instance, migration, snapshot_id) | private | not declared | 4/40 | `src/nova/compute/manager.py:L6758–L6828` |
| `ComputeManager._finish_snapshot_based_resize_at_dest_spawn` | method | (self, ctxt, instance, migration, image_meta, bdms) | private | not declared | 6/37 | `src/nova/compute/manager.py:L6830–L6919` |
| `ComputeManager.add_fixed_ip_to_instance` | method | (self, context, network_id, instance) | public | not declared | 1/11 | `src/nova/compute/manager.py:L6923–L6941` |
| `ComputeManager.remove_fixed_ip_from_instance` | method | (self, context, address, instance) | public | not declared | 1/11 | `src/nova/compute/manager.py:L6945–L6963` |
| `ComputeManager.pause_instance` | method | (self, context, instance) | public | not declared | 1/16 | `src/nova/compute/manager.py:L6969–L6985` |
| `ComputeManager.unpause_instance` | method | (self, context, instance) | public | not declared | 1/16 | `src/nova/compute/manager.py:L6991–L7007` |
| `ComputeManager.host_power_action` | method | (self, context, action) | public | `self.driver.host_power_action(action)` (src/nova/compute/manager.py:L7012) | 1/2 | `src/nova/compute/manager.py:L7010–L7012` |
| `ComputeManager.host_maintenance_mode` | method | (self, context, host, mode) | public | `self.driver.host_maintenance_mode(host, mode)` (src/nova/compute/manager.py:L7019) | 1/2 | `src/nova/compute/manager.py:L7015–L7019` |
| `ComputeManager._update_compute_provider_status` | method | (self, context, enabled) | private | not declared | 5/25 | `src/nova/compute/manager.py:L7021–L7064` |
| `ComputeManager.set_host_enabled` | method | (self, context, enabled) | public | `self.driver.set_host_enabled(enabled)` (src/nova/compute/manager.py:L7081); `'enabled' if enabled else 'disabled'` (src/nova/compute/manager.py:L7087) | 4/10 | `src/nova/compute/manager.py:L7067–L7087` |
| `ComputeManager.get_host_uptime` | method | (self, context) | public | `self.driver.get_host_uptime()` (src/nova/compute/manager.py:L7093) | 1/2 | `src/nova/compute/manager.py:L7091–L7093` |
| `ComputeManager.get_diagnostics` | method | (self, context, instance) | public | `self.driver.get_diagnostics(instance)` (src/nova/compute/manager.py:L7103) | 2/11 | `src/nova/compute/manager.py:L7098–L7109` |
| `ComputeManager.get_instance_diagnostics` | method | (self, context, instance) | public | `self.driver.get_instance_diagnostics(instance)` (src/nova/compute/manager.py:L7119) | 2/11 | `src/nova/compute/manager.py:L7114–L7125` |
| `ComputeManager.suspend_instance` | method | (self, context, instance) | public | not declared | 1/18 | `src/nova/compute/manager.py:L7131–L7151` |
| `ComputeManager.resume_instance` | method | (self, context, instance) | public | not declared | 1/26 | `src/nova/compute/manager.py:L7157–L7198` |
| `ComputeManager.shelve_instance` | method | (self, context, instance, image_id, clean_shutdown, accel_uuids) | public | not declared | 1/5 | `src/nova/compute/manager.py:L7204–L7223` |
| `ComputeManager.shelve_instance.do_shelve_instance` | function | — | public | not declared | — | `src/nova/compute/manager.py:L7220–L7222` |
| `ComputeManager._shelve_instance` | method | (self, context, instance, image_id, clean_shutdown, accel_uuids=None) | private | not declared | 5/39 | `src/nova/compute/manager.py:L7225–L7283` |
| `ComputeManager._shelve_instance.update_task_state` | function | (task_state, expected_state=task_states.SHELVING) | public | not declared | — | `src/nova/compute/manager.py:L7244–L7254` |
| `ComputeManager.shelve_offload_instance` | method | (self, context, instance, clean_shutdown, accel_uuids) | public | not declared | 1/5 | `src/nova/compute/manager.py:L7289–L7308` |
| `ComputeManager.shelve_offload_instance.do_shelve_offload_instance` | function | — | public | not declared | — | `src/nova/compute/manager.py:L7305–L7307` |
| `ComputeManager._shelve_offload_instance` | method | (self, context, instance, clean_shutdown, bdms=None, accel_uuids=None) | private | not declared | 4/41 | `src/nova/compute/manager.py:L7310–L7378` |
| `ComputeManager.unshelve_instance` | method | (self, context, instance, image, filter_properties, node, request_spec, accel_uuids) | public | not declared | 2/7 | `src/nova/compute/manager.py:L7384–L7406` |
| `ComputeManager.unshelve_instance.do_unshelve_instance` | function | — | public | not declared | — | `src/nova/compute/manager.py:L7402–L7405` |
| `ComputeManager._unshelve_instance_key_scrub` | method | (self, instance) | private | `cleaned_keys` (src/nova/compute/manager.py:L7415) | 1/7 | `src/nova/compute/manager.py:L7408–L7415` |
| `ComputeManager._unshelve_instance_key_restore` | method | (self, instance, keys) | private | not declared | 1/2 | `src/nova/compute/manager.py:L7417–L7419` |
| `ComputeManager._unshelve_instance` | method | (self, context, instance, image, filter_properties, node, request_spec, accel_uuids) | private | not declared | 8/82 | `src/nova/compute/manager.py:L7421–L7529` |
| `ComputeManager._inject_network_info` | method | (self, instance, network_info) | private | not declared | 1/5 | `src/nova/compute/manager.py:L7531–L7537` |
| `ComputeManager.inject_network_info` | method | (self, context, instance) | public | not declared | 1/3 | `src/nova/compute/manager.py:L7540–L7543` |
| `ComputeManager.get_console_output` | method | (self, context, instance, tail_length) | public | `output.decode('ascii', 'replace')` (src/nova/compute/manager.py:L7562) | 3/9 | `src/nova/compute/manager.py:L7550–L7562` |
| `ComputeManager._tail_log` | method | (self, log, length) | private | `b''` (src/nova/compute/manager.py:L7571); `b'\n'.join(log.split(b'\n')[-int(length):])` (src/nova/compute/manager.py:L7573) | 3/9 | `src/nova/compute/manager.py:L7564–L7573` |
| `ComputeManager.get_vnc_console` | method | (self, context, console_type, instance) | public | `connect_info` (src/nova/compute/manager.py:L7619) | 5/28 | `src/nova/compute/manager.py:L7582–L7619` |
| `ComputeManager.get_spice_console` | method | (self, context, console_type, instance) | public | `connect_info` (src/nova/compute/manager.py:L7669) | 7/33 | `src/nova/compute/manager.py:L7628–L7669` |
| `ComputeManager.get_rdp_console` | method | (self, context, console_type, instance) | public | not declared | 1/4 | `src/nova/compute/manager.py:L7681–L7686` |
| `ComputeManager.get_mks_console` | method | (self, context, console_type, instance) | public | `connect_info` (src/nova/compute/manager.py:L7728) | 5/26 | `src/nova/compute/manager.py:L7695–L7728` |
| `ComputeManager.get_serial_console` | method | (self, context, console_type, instance) | public | `connect_info` (src/nova/compute/manager.py:L7773) | 4/24 | `src/nova/compute/manager.py:L7741–L7773` |
| `ComputeManager.validate_console_port` | method | (self, ctxt, instance, port, console_type) | public | `str(console_info.port) == port` (src/nova/compute/manager.py:L7793) | 4/10 | `src/nova/compute/manager.py:L7780–L7793` |
| `ComputeManager.reserve_block_device_name` | method | (self, context, instance, device, volume_id, disk_bus, device_type, tag, multiattach) | public | `do_reserve()` (src/nova/compute/manager.py:L7840) | 5/14 | `src/nova/compute/manager.py:L7798–L7840` |
| `ComputeManager.reserve_block_device_name.do_reserve` | function | — | public | `new_bdm` (src/nova/compute/manager.py:L7838) | — | `src/nova/compute/manager.py:L7812–L7838` |
| `ComputeManager.attach_volume` | method | (self, context, instance, bdm) | public | not declared | 1/5 | `src/nova/compute/manager.py:L7845–L7857` |
| `ComputeManager.attach_volume.do_attach_volume` | function | (context, instance, driver_bdm) | public | `self._attach_volume(context, instance, driver_bdm)` (src/nova/compute/manager.py:L7852) | — | `src/nova/compute/manager.py:L7850–L7855` |
| `ComputeManager._attach_volume` | method | (self, context, instance, bdm) | private | not declared | 4/44 | `src/nova/compute/manager.py:L7859–L7907` |
| `ComputeManager._notify_volume_usage_detach` | method | (self, context, instance, bdm) | private | `` (src/nova/compute/manager.py:L7911); `` (src/nova/compute/manager.py:L7920); `` (src/nova/compute/manager.py:L7922) | 5/27 | `src/nova/compute/manager.py:L7909–L7938` |
| `ComputeManager._detach_volume` | method | (self, context, bdm, instance, destroy_bdm=True, attachment_id=None) | private | not declared | 4/26 | `src/nova/compute/manager.py:L7940–L7981` |
| `ComputeManager._delete_disk_metadata` | method | (self, instance, bdm) | private | not declared | 5/12 | `src/nova/compute/manager.py:L7983–L7996` |
| `ComputeManager.detach_volume` | method | (self, context, volume_id, instance, attachment_id) | public | not declared | 1/4 | `src/nova/compute/manager.py:L8001–L8018` |
| `ComputeManager.detach_volume.do_detach_volume` | function | (context, volume_id, instance, attachment_id) | public | not declared | — | `src/nova/compute/manager.py:L8012–L8016` |
| `ComputeManager._init_volume_connection` | method | (self, context, new_volume, old_volume_id, connector, bdm, new_attachment_id, mountpoint) | private | `(old_cinfo, new_cinfo)` (src/nova/compute/manager.py:L8064) | 8/26 | `src/nova/compute/manager.py:L8020–L8064` |
| `ComputeManager._swap_volume` | method | (self, context, instance, bdm, connector, old_volume_id, new_volume, resize_to, new_attachment_id, is_cinder_migration) | private | `(comp_ret, new_cinfo)` (src/nova/compute/manager.py:L8187) | 12/75 | `src/nova/compute/manager.py:L8066–L8187` |
| `ComputeManager.swap_volume` | method | (self, context, old_volume_id, new_volume_id, instance, new_attachment_id) | public | not declared | 1/6 | `src/nova/compute/manager.py:L8192–L8208` |
| `ComputeManager.swap_volume._do_locked_swap_volume` | function | (context, old_volume_id, new_volume_id, instance, new_attachment_id) | private | not declared | — | `src/nova/compute/manager.py:L8203–L8206` |
| `ComputeManager._do_swap_volume` | method | (self, context, old_volume_id, new_volume_id, instance, new_attachment_id) | private | not declared | 6/58 | `src/nova/compute/manager.py:L8210–L8298` |
| `ComputeManager.remove_volume_connection` | method | (self, context, volume_id, instance, delete_attachment=False) | public | not declared | 2/10 | `src/nova/compute/manager.py:L8301–L8325` |
| `ComputeManager._remove_volume_connection` | method | (self, context, bdm, instance, delete_attachment=False) | private | not declared | 3/11 | `src/nova/compute/manager.py:L8327–L8353` |
| `ComputeManager._deallocate_port_resource_for_instance` | method | (self, context, instance, port_id, port_allocation) | private | `` (src/nova/compute/manager.py:L8364) | 3/20 | `src/nova/compute/manager.py:L8355–L8381` |
| `ComputeManager._deallocate_port_for_instance` | method | (self, context, instance, port_id, raise_on_failure=False, pci_device=None) | private | not declared | 3/20 | `src/nova/compute/manager.py:L8383–L8405` |
| `ComputeManager._claim_pci_device_for_interface_attach` | method | (self, context, instance, pci_reqs) | private | `None` (src/nova/compute/manager.py:L8426); `device` (src/nova/compute/manager.py:L8442) | 3/19 | `src/nova/compute/manager.py:L8407–L8442` |
| `ComputeManager._allocate_port_resource_for_instance` | method | (self, context, instance, pci_reqs, request_groups, request_level_params) | private | `None, None` (src/nova/compute/manager.py:L8473); `provider_mappings, resources` (src/nova/compute/manager.py:L8546) | 1/10 | `src/nova/compute/manager.py:L8444–L8546` |
| `ComputeManager.attach_interface` | method | (self, context, instance, network_id, port_id, requested_ip, tag) | public | `do_attach_interface(context, instance, network_id, port_id, requested_ip, tag)` (src/nova/compute/manager.py:L8577) | 1/7 | `src/nova/compute/manager.py:L8566–L8578` |
| `ComputeManager.attach_interface.do_attach_interface` | function | (context, instance, network_id, port_id, requested_ip, tag) | public | `self._attach_interface(context, instance, network_id, port_id, requested_ip, tag)` (src/nova/compute/manager.py:L8574) | — | `src/nova/compute/manager.py:L8572–L8575` |
| `ComputeManager._attach_interface` | method | (self, context, instance, network_id, port_id, requested_ip, tag) | private | `network_info[0]` (src/nova/compute/manager.py:L8702) | 10/93 | `src/nova/compute/manager.py:L8580–L8702` |
| `ComputeManager.detach_interface` | method | (self, context, instance, port_id) | public | not declared | 1/5 | `src/nova/compute/manager.py:L8707–L8715` |
| `ComputeManager.detach_interface.do_detach_interface` | function | (context, instance, port_id) | public | not declared | — | `src/nova/compute/manager.py:L8712–L8713` |
| `ComputeManager._detach_interface` | method | (self, context, instance, port_id) | private | not declared | 10/50 | `src/nova/compute/manager.py:L8717–L8778` |
| `ComputeManager._get_compute_info` | method | (self, context, host) | private | `objects.ComputeNode.get_first_node_by_host_for_old_compat( context, host)` (src/nova/compute/manager.py:L8781) | 1/3 | `src/nova/compute/manager.py:L8780–L8782` |
| `ComputeManager.check_instance_shared_storage` | method | (self, ctxt, data) | public | `self.driver.check_instance_shared_storage_remote(ctxt, data)` (src/nova/compute/manager.py:L8794) | 1/2 | `src/nova/compute/manager.py:L8785–L8794` |
| `ComputeManager._dest_can_numa_live_migrate` | method | (self, dest_check_data, migration) | private | `dest_check_data` (src/nova/compute/manager.py:L8805) | 4/6 | `src/nova/compute/manager.py:L8796–L8805` |
| `ComputeManager.check_can_live_migrate_destination` | method | (self, ctxt, instance, block_migration, disk_over_commit, migration, limits) | public | `migrate_data` (src/nova/compute/manager.py:L8913) | 11/68 | `src/nova/compute/manager.py:L8810–L8913` |
| `ComputeManager._flavor_based_pci_claim` | method | (self, ctxt, instance, pci_requests) | private | `{}` (src/nova/compute/manager.py:L8919); `pci_dev_map_src_dst` (src/nova/compute/manager.py:L8962) | 8/30 | `src/nova/compute/manager.py:L8915–L8962` |
| `ComputeManager._claim_from_pci_reqs` | method | (self, ctxt, instance, pci_requests) | private | `claimed_pci_devices_objs` (src/nova/compute/manager.py:L8978) | 3/10 | `src/nova/compute/manager.py:L8964–L8978` |
| `ComputeManager._live_migration_claim` | method | (self, ctxt, instance, migrate_data, migration, limits, allocs) | private | `self.driver.post_claim_migrate_data(ctxt, instance, migrate_data, claim)` (src/nova/compute/manager.py:L9005) | 2/12 | `src/nova/compute/manager.py:L8980–L9006` |
| `ComputeManager._source_can_numa_live_migrate` | method | (self, ctxt, dest_check_data, source_check_data) | private | `source_check_data` (src/nova/compute/manager.py:L9031) | 6/11 | `src/nova/compute/manager.py:L9008–L9031` |
| `ComputeManager.check_can_live_migrate_source` | method | (self, ctxt, instance, dest_check_data) | public | `result` (src/nova/compute/manager.py:L9060) | 1/15 | `src/nova/compute/manager.py:L9036–L9060` |
| `ComputeManager.pre_live_migration` | method | (self, context, instance, disk, migrate_data) | public | `self._do_pre_live_migration( context, instance, disk, migrate_data)` (src/nova/compute/manager.py:L9086) | 2/10 | `src/nova/compute/manager.py:L9066–L9090` |
| `ComputeManager._end_pending_dest_live_migration_task` | method | (self, instance_uuid) | private | not declared | 2/4 | `src/nova/compute/manager.py:L9092–L9095` |
| `ComputeManager._do_pre_live_migration` | method | (self, context, instance, disk, migrate_data) | private | `migrate_data` (src/nova/compute/manager.py:L9231) | 18/73 | `src/nova/compute/manager.py:L9097–L9231` |
| `ComputeManager._neutron_failed_live_migration_callback` | method | (event_name, instance) | private | not declared | 2/7 | `src/nova/compute/manager.py:L9234–L9240` |
| `ComputeManager._get_neutron_events_for_live_migration` | method | (instance) | private | `[('network-vif-plugged', vif['id']) for vif in instance.get_network_info()]` (src/nova/compute/manager.py:L9247); `[]` (src/nova/compute/manager.py:L9250) | 3/6 | `src/nova/compute/manager.py:L9243–L9250` |
| `ComputeManager._cleanup_pre_live_migration` | method | (self, context, dest, instance, migration, migrate_data, source_bdms) | private | not declared | 1/8 | `src/nova/compute/manager.py:L9252–L9282` |
| `ComputeManager._do_pre_live_migration_from_source` | method | (self, context, dest, instance, block_migration, migration, migrate_data, source_bdms) | private | `migrate_data` (src/nova/compute/manager.py:L9393) | 12/68 | `src/nova/compute/manager.py:L9284–L9393` |
| `ComputeManager._do_pre_live_migration_from_source._BreakWaitForInstanceEvent` | class | — | private | not declared | — | `src/nova/compute/manager.py:L9312–L9318` |
| `ComputeManager._do_live_migration` | method | (self, context, dest, instance, block_migration, migration, migrate_data) | private | `` (src/nova/compute/manager.py:L9431) | 3/38 | `src/nova/compute/manager.py:L9395–L9462` |
| `ComputeManager.live_migration` | method | (self, context, dest, instance, block_migration, migration, migrate_data) | public | not declared | 2/16 | `src/nova/compute/manager.py:L9469–L9502` |
| `ComputeManager.live_migration_force_complete` | method | (self, context, instance) | public | not declared | 1/14 | `src/nova/compute/manager.py:L9507–L9526` |
| `ComputeManager._notify_live_migrate_abort_end` | method | (self, context, instance) | private | not declared | 1/7 | `src/nova/compute/manager.py:L9528–L9534` |
| `ComputeManager.live_migration_abort` | method | (self, context, instance, migration_id) | public | not declared | 7/39 | `src/nova/compute/manager.py:L9539–L9617` |
| `ComputeManager._live_migration_cleanup_flags` | method | (self, migrate_data, migr_ctxt=None) | private | `(do_cleanup, destroy_disks)` (src/nova/compute/manager.py:L9674) | 14/27 | `src/nova/compute/manager.py:L9619–L9674` |
| `ComputeManager._post_live_migration_remove_source_vol_connections` | method | (self, context, instance, source_bdms) | private | not declared | 7/27 | `src/nova/compute/manager.py:L9676–L9729` |
| `ComputeManager._post_live_migration_update_host` | method | (self, ctxt, instance, dest, block_migration=False, migrate_data=None, source_bdms=None) | private | not declared | 6/26 | `src/nova/compute/manager.py:L9732–L9767` |
| `ComputeManager._post_live_migration` | method | (self, ctxt, instance, dest, block_migration=False, migrate_data=None, source_bdms=None) | private | not declared | 11/88 | `src/nova/compute/manager.py:L9771–L9931` |
| `ComputeManager._consoles_enabled` | method | (self) | private | `(CONF.vnc.enabled or CONF.spice.enabled or CONF.serial_console.enabled or CONF.mks.enabled)` (src/nova/compute/manager.py:L9935) | 4/4 | `src/nova/compute/manager.py:L9933–L9937` |
| `ComputeManager._clean_instance_console_tokens` | method | (self, ctxt, instance) | private | not declared | 2/4 | `src/nova/compute/manager.py:L9939–L9945` |
| `ComputeManager.post_live_migration_at_destination` | method | (self, context, instance, block_migration) | public | not declared | 2/7 | `src/nova/compute/manager.py:L9950–L9965` |
| `ComputeManager._do_post_live_migration_at_destination` | method | (self, context, instance, block_migration) | private | not declared | 8/68 | `src/nova/compute/manager.py:L9967–L10060` |
| `ComputeManager._remove_remote_volume_connections` | method | (self, context, dest, bdms, instance) | private | not declared | 3/10 | `src/nova/compute/manager.py:L10062–L10075` |
| `ComputeManager._rollback_volume_bdms` | method | (self, context, bdms, original_bdms, instance) | private | not declared | 9/24 | `src/nova/compute/manager.py:L10077–L10109` |
| `ComputeManager._rollback_live_migration` | method | (self, context, instance, dest, migrate_data=None, migration_status='failed', source_bdms=None, pre_live_migration=False) | private | not declared | 13/78 | `src/nova/compute/manager.py:L10113–L10272` |
| `ComputeManager.drop_move_claim_at_destination` | method | (self, context, instance) | public | not declared | 1/6 | `src/nova/compute/manager.py:L10276–L10285` |
| `ComputeManager.rollback_live_migration_at_destination` | method | (self, context, instance, destroy_disks, migrate_data) | public | not declared | 2/8 | `src/nova/compute/manager.py:L10290–L10307` |
| `ComputeManager._do_rollback_live_migration_at_destination` | method | (self, context, instance, destroy_disks, migrate_data) | private | not declared | 4/41 | `src/nova/compute/manager.py:L10309–L10381` |
| `ComputeManager._require_nw_info_update` | method | (self, context, instance) | private | `False` (src/nova/compute/manager.py:L10393); `True` (src/nova/compute/manager.py:L10400); `True` (src/nova/compute/manager.py:L10404); `False` (src/nova/compute/manager.py:L10405) | 6/14 | `src/nova/compute/manager.py:L10383–L10405` |
| `ComputeManager._heal_instance_info_cache` | method | (self, context) | private | `` (src/nova/compute/manager.py:L10502) | 16/66 | `src/nova/compute/manager.py:L10411–L10512` |
| `ComputeManager._poll_rebooting_instances` | method | (self, context) | private | not declared | 4/15 | `src/nova/compute/manager.py:L10515–L10531` |
| `ComputeManager._poll_rescued_instances` | method | (self, context) | private | not declared | 5/14 | `src/nova/compute/manager.py:L10534–L10549` |
| `ComputeManager._poll_unconfirmed_resizes` | method | (self, context) | private | `` (src/nova/compute/manager.py:L10554) | 11/61 | `src/nova/compute/manager.py:L10552–L10633` |
| `ComputeManager._poll_unconfirmed_resizes._set_migration_to_error` | function | (migration, reason, **kwargs) | private | not declared | — | `src/nova/compute/manager.py:L10568–L10574` |
| `ComputeManager._poll_shelved_instances` | method | (self, context) | private | `` (src/nova/compute/manager.py:L10639) | 7/29 | `src/nova/compute/manager.py:L10636–L10671` |
| `ComputeManager._instance_usage_audit` | method | (self, context) | private | `` (src/nova/compute/manager.py:L10676); `` (src/nova/compute/manager.py:L10681) | 5/48 | `src/nova/compute/manager.py:L10674–L10723` |
| `ComputeManager._get_host_volume_bdms` | method | (self, context, use_slave=False) | private | `compute_host_bdms` (src/nova/compute/manager.py:L10737) | 4/11 | `src/nova/compute/manager.py:L10725–L10737` |
| `ComputeManager._update_volume_usage_cache` | method | (self, context, vol_usages) | private | not declared | 2/17 | `src/nova/compute/manager.py:L10739–L10757` |
| `ComputeManager._poll_volume_usage` | method | (self, context) | private | `` (src/nova/compute/manager.py:L10762); `` (src/nova/compute/manager.py:L10767); `` (src/nova/compute/manager.py:L10774) | 4/14 | `src/nova/compute/manager.py:L10760–L10776` |
| `ComputeManager._sync_power_states` | method | (self, context) | private | `` (src/nova/compute/manager.py:L10799) | 5/29 | `src/nova/compute/manager.py:L10780–L10840` |
| `ComputeManager._sync_power_states._sync` | function | (db_instance) | private | not declared | — | `src/nova/compute/manager.py:L10811–L10826` |
| `ComputeManager._sync_power_states._sync.query_driver_power_state_and_sync` | function | — | public | not declared | — | `src/nova/compute/manager.py:L10816–L10817` |
| `ComputeManager._query_driver_power_state_and_sync` | method | (self, context, db_instance) | private | `` (src/nova/compute/manager.py:L10847) | 4/18 | `src/nova/compute/manager.py:L10842–L10864` |
| `ComputeManager._stop_unexpected_shutdown_instance` | method | (self, context, vm_state, db_instance, orig_db_power_state) | private | not declared | 4/25 | `src/nova/compute/manager.py:L10866–L10905` |
| `ComputeManager._sync_instance_power_state` | method | (self, context, db_instance, vm_power_state, use_slave=False) | private | `` (src/nova/compute/manager.py:L10935); `` (src/nova/compute/manager.py:L10946) | 19/92 | `src/nova/compute/manager.py:L10907–L11041` |
| `ComputeManager._reclaim_queued_deletes` | method | (self, context) | private | `` (src/nova/compute/manager.py:L11049) | 5/23 | `src/nova/compute/manager.py:L11044–L11068` |
| `ComputeManager._get_nodename` | method | (self, instance, refresh=False) | private | `node` (src/nova/compute/manager.py:L11078) | 1/5 | `src/nova/compute/manager.py:L11070–L11078` |
| `ComputeManager._update_available_resource_for_node` | method | (self, context, nodename, startup=False) | private | not declared | 9/30 | `src/nova/compute/manager.py:L11080–L11136` |
| `ComputeManager.update_available_resource` | method | (self, context, startup=False) | public | `` (src/nova/compute/manager.py:L11153) | 12/71 | `src/nova/compute/manager.py:L11139–L11241` |
| `ComputeManager._get_compute_nodes_in_db` | method | (self, context, nodenames, use_slave=False, startup=False) | private | `objects.ComputeNodeList.get_all_by_host(context, self.host, use_slave=use_slave)` (src/nova/compute/manager.py:L11246); `[]` (src/nova/compute/manager.py:L11261) | 4/15 | `src/nova/compute/manager.py:L11243–L11261` |
| `ComputeManager._cleanup_running_deleted_instances` | method | (self, context) | private | `` (src/nova/compute/manager.py:L11291); `` (src/nova/compute/manager.py:L11303) | 9/48 | `src/nova/compute/manager.py:L11266–L11343` |
| `ComputeManager._running_deleted_instances` | method | (self, context) | private | `[i for i in instances if self._deleted_old_enough(i, timeout)]` (src/nova/compute/manager.py:L11353) | 3/6 | `src/nova/compute/manager.py:L11345–L11353` |
| `ComputeManager._deleted_old_enough` | method | (self, instance, timeout) | private | `(not deleted_at or timeutils.is_older_than(deleted_at, timeout))` (src/nova/compute/manager.py:L11359) | 3/5 | `src/nova/compute/manager.py:L11355–L11359` |
| `ComputeManager._error_out_instance_on_exception` | method | (self, context, instance, instance_state=vm_states.ACTIVE) | private | not declared | 4/21 | `src/nova/compute/manager.py:L11362–L11418` |
| `ComputeManager._process_instance_event` | method | (self, instance, event) | private | not declared | 4/20 | `src/nova/compute/manager.py:L11420–L11450` |
| `ComputeManager._process_instance_vif_deleted_event` | method | (self, context, instance, deleted_vif_id) | private | not declared | 9/41 | `src/nova/compute/manager.py:L11452–L11504` |
| `ComputeManager.extend_volume` | method | (self, context, instance, extended_volume_id) | public | `` (src/nova/compute/manager.py:L11524); `` (src/nova/compute/manager.py:L11537) | 5/37 | `src/nova/compute/manager.py:L11508–L11554` |
| `ComputeManager._is_state_valid_for_power_update_event` | method | (instance, target_power_state) | private | `True` (src/nova/compute/manager.py:L11575); `False` (src/nova/compute/manager.py:L11576) | 9/11 | `src/nova/compute/manager.py:L11557–L11576` |
| `ComputeManager.power_update` | method | (self, context, instance, target_power_state) | public | not declared | 1/4 | `src/nova/compute/manager.py:L11582–L11654` |
| `ComputeManager.power_update.do_power_update` | function | — | public | `` (src/nova/compute/manager.py:L11608); `` (src/nova/compute/manager.py:L11653) | — | `src/nova/compute/manager.py:L11592–L11653` |
| `ComputeManager.external_instance_event` | method | (self, context, instances, events) | public | not declared | 10/34 | `src/nova/compute/manager.py:L11657–L11694` |
| `ComputeManager._run_image_cache_manager_pass` | method | (self, context) | private | `` (src/nova/compute/manager.py:L11702) | 2/11 | `src/nova/compute/manager.py:L11698–L11719` |
| `ComputeManager.cache_images` | method | (self, context, image_ids) | public | `results` (src/nova/compute/manager.py:L11758) | 5/20 | `src/nova/compute/manager.py:L11722–L11758` |
| `ComputeManager._run_pending_deletes` | method | (self, context) | private | not declared | 4/25 | `src/nova/compute/manager.py:L11761–L11788` |
| `ComputeManager._cleanup_incomplete_migrations` | method | (self, context) | private | `` (src/nova/compute/manager.py:L11808) | 9/35 | `src/nova/compute/manager.py:L11791–L11843` |
| `ComputeManager._reconcile_stale_share_access` | method | (self, context) | private | not declared | 1/2 | `src/nova/compute/manager.py:L11849–L11854` |
| `ComputeManager.quiesce_instance` | method | (self, context, instance) | public | not declared | 1/4 | `src/nova/compute/manager.py:L11861–L11865` |
| `ComputeManager._wait_for_snapshots_completion` | method | (self, context, mapping) | private | not declared | 3/6 | `src/nova/compute/manager.py:L11867–L11878` |
| `ComputeManager._wait_for_snapshots_completion._wait_snapshot` | function | — | private | not declared | — | `src/nova/compute/manager.py:L11871–L11875` |
| `ComputeManager.unquiesce_instance` | method | (self, context, instance, mapping=None) | public | not declared | 3/11 | `src/nova/compute/manager.py:L11885–L11900` |
| `ComputeManager._cleanup_expired_console_auth_tokens` | method | (self, context) | private | not declared | 1/2 | `src/nova/compute/manager.py:L11903–L11911` |
| `ComputeManager._claim_pci_for_instance_vifs` | method | (self, ctxt, instance) | private | `port_id_to_pci_dev` (src/nova/compute/manager.py:L11960) | 6/27 | `src/nova/compute/manager.py:L11913–L11960` |
| `ComputeManager._update_migrate_vifs_profile_with_pci` | method | (self, migrate_vifs, port_id_to_pci_dev) | private | not declared | 7/24 | `src/nova/compute/manager.py:L11962–L11996` |
| `_ComputeV5Proxy` | class | — | unexported | not declared | — | `src/nova/compute/manager.py:L12004–L12137` |
| `_ComputeV5Proxy.target` | field | — | public | not declared | — | `src/nova/compute/manager.py:L12006–L12006` |
| `_ComputeV5Proxy.__init__` | method | (self, manager) | public | not declared | 1/2 | `src/nova/compute/manager.py:L12008–L12009` |
| `_ComputeV5Proxy.__getattr__` | method | (self, name) | public | `getattr(self.manager, name)` (src/nova/compute/manager.py:L12013) | 1/2 | `src/nova/compute/manager.py:L12011–L12013` |
| `_ComputeV5Proxy.pre_live_migration` | method | (self, context, instance, block_migration, disk, migrate_data) | public | `self.manager.pre_live_migration(context, instance, disk, migrate_data)` (src/nova/compute/manager.py:L12018) | 1/4 | `src/nova/compute/manager.py:L12016–L12019` |
| `_ComputeV5Proxy.prep_resize` | method | (self, context, image, instance, instance_type, request_spec, filter_properties, node, clean_shutdown, migration, host_list) | public | not declared | 2/9 | `src/nova/compute/manager.py:L12022–L12040` |
| `_ComputeV5Proxy.resize_instance` | method | (self, context, instance, image, migration, instance_type, clean_shutdown, request_spec=None) | public | not declared | 1/6 | `src/nova/compute/manager.py:L12043–L12048` |
| `_ComputeV5Proxy.finish_resize` | method | (self, context, disk_info, image, instance, migration, request_spec=None) | public | not declared | 1/4 | `src/nova/compute/manager.py:L12051–L12054` |
| `_ComputeV5Proxy.revert_resize` | method | (self, context, instance, migration, request_spec=None) | public | not declared | 1/2 | `src/nova/compute/manager.py:L12057–L12058` |
| `_ComputeV5Proxy.finish_revert_resize` | method | (self, context, instance, migration, request_spec=None) | public | not declared | 1/4 | `src/nova/compute/manager.py:L12061–L12064` |
| `_ComputeV5Proxy.unshelve_instance` | method | (self, context, instance, image, filter_properties, node, request_spec=None, accel_uuids=None) | public | not declared | 2/5 | `src/nova/compute/manager.py:L12068–L12072` |
| `_ComputeV5Proxy.check_can_live_migrate_destination` | method | (self, ctxt, instance, block_migration, disk_over_commit, migration=None, limits=None) | public | `self.manager.check_can_live_migrate_destination( ctxt, instance, block_migration, disk_over_commit, migration, limits)` (src/nova/compute/manager.py:L12078) | 1/6 | `src/nova/compute/manager.py:L12075–L12080` |
| `_ComputeV5Proxy.build_and_run_instance` | method | (self, context, instance, image, request_spec, filter_properties, admin_password=None, injected_files=None, requested_networks=None, security_groups=None, block_device_mapping=None, node=None, limits=None, host_list=None, accel_uuids=None) | public | not declared | 1/11 | `src/nova/compute/manager.py:L12083–L12093` |
| `_ComputeV5Proxy.rebuild_instance` | method | (self, context, instance, orig_image_ref, image_ref, injected_files, new_pass, orig_sys_metadata, bdms, recreate, on_shared_storage, preserve_ephemeral, migration, scheduled_node, limits, request_spec, accel_uuids=None) | public | not declared | 1/13 | `src/nova/compute/manager.py:L12096–L12108` |
| `_ComputeV5Proxy.shelve_instance` | method | (self, context, instance, image_id, clean_shutdown, accel_uuids=None) | public | not declared | 1/4 | `src/nova/compute/manager.py:L12111–L12114` |
| `_ComputeV5Proxy.shelve_offload_instance` | method | (self, context, instance, clean_shutdown, accel_uuids=None) | public | not declared | 1/4 | `src/nova/compute/manager.py:L12117–L12120` |
| `_ComputeV5Proxy.prep_snapshot_based_resize_at_dest` | method | (self, ctxt, instance, flavor, nodename, migration, limits, request_spec) | public | `self.manager.prep_snapshot_based_resize_at_dest( ctxt, instance, flavor, nodename, migration, limits)` (src/nova/compute/manager.py:L12126) | 1/5 | `src/nova/compute/manager.py:L12123–L12127` |
| `_ComputeV5Proxy.finish_snapshot_based_resize_at_dest` | method | (self, ctxt, instance, migration, snapshot_id, request_spec) | public | not declared | 1/4 | `src/nova/compute/manager.py:L12130–L12133` |
| `_ComputeV5Proxy.check_instance_shared_storage` | method | (self, ctxt, instance, data) | public | `self.manager.check_instance_shared_storage(ctxt, data)` (src/nova/compute/manager.py:L12137) | 1/2 | `src/nova/compute/manager.py:L12136–L12137` |
| `InstanceEvents._lock_name` | staticmethod | — | private | not declared | — | `src/nova/compute/manager.py:L274–L276` |
| `ComputeVirtAPI._wait_for_instance_events` | staticmethod | — | private | not declared | — | `src/nova/compute/manager.py:L483–L505` |
| `ComputeManager._get_scheduler_hints` | staticmethod | — | private | not declared | — | `src/nova/compute/manager.py:L2607–L2624` |
| `ComputeManager._get_request_group_mapping` | staticmethod | — | private | not declared | — | `src/nova/compute/manager.py:L2626–L2642` |
| `ComputeManager._set_migration_status` | staticmethod | — | private | not declared | — | `src/nova/compute/manager.py:L3679–L3689` |
| `ComputeManager._reimage_failed_callback` | staticmethod | — | private | not declared | — | `src/nova/compute/manager.py:L3691–L3697` |
| `ComputeManager._get_image_name` | staticmethod | — | private | not declared | — | `src/nova/compute/manager.py:L4100–L4105` |
| `ComputeManager._set_instance_info` | staticmethod | — | private | not declared | — | `src/nova/compute/manager.py:L6470–L6477` |
| `ComputeManager._neutron_failed_live_migration_callback` | staticmethod | — | private | not declared | — | `src/nova/compute/manager.py:L9233–L9240` |
| `ComputeManager._get_neutron_events_for_live_migration` | staticmethod | — | private | not declared | — | `src/nova/compute/manager.py:L9242–L9250` |
| `ComputeManager._is_state_valid_for_power_update_event` | staticmethod | — | private | not declared | — | `src/nova/compute/manager.py:L11556–L11576` |

## Dependencies

- `import base64` (src/nova/compute/manager.py:L27)
- `import binascii` (src/nova/compute/manager.py:L28)
- `collections.abc`: imports `Callable`, `Iterator` (src/nova/compute/manager.py:L29)
- `import contextlib` (src/nova/compute/manager.py:L30)
- `import copy` (src/nova/compute/manager.py:L31)
- `import functools` (src/nova/compute/manager.py:L32)
- `import inspect` (src/nova/compute/manager.py:L33)
- `import math` (src/nova/compute/manager.py:L34)
- `import sys` (src/nova/compute/manager.py:L35)
- `import threading` (src/nova/compute/manager.py:L36)
- `import time` (src/nova/compute/manager.py:L37)
- `import traceback` (src/nova/compute/manager.py:L38)
- `cinderclient`: imports `exceptions as cinder_exception` (src/nova/compute/manager.py:L40)
- `cursive`: imports `exception as cursive_exception` (src/nova/compute/manager.py:L41)
- `keystoneauth1`: imports `exceptions as keystone_exception` (src/nova/compute/manager.py:L42)
- `import os_traits` (src/nova/compute/manager.py:L43)
- `oslo_log`: imports `log as logging` (src/nova/compute/manager.py:L44)
- `import oslo_messaging as messaging` (src/nova/compute/manager.py:L45)
- `oslo_serialization`: imports `jsonutils` (src/nova/compute/manager.py:L46)
- `oslo_service`: imports `loopingcall` (src/nova/compute/manager.py:L47)
- `oslo_service`: imports `periodic_task` (src/nova/compute/manager.py:L48)
- `oslo_utils`: imports `excutils` (src/nova/compute/manager.py:L49)
- `oslo_utils`: imports `strutils` (src/nova/compute/manager.py:L50)
- `oslo_utils`: imports `timeutils` (src/nova/compute/manager.py:L51)
- `oslo_utils`: imports `units` (src/nova/compute/manager.py:L52)
- `nova.accelerator`: imports `cyborg` (src/nova/compute/manager.py:L54)
- `nova`: imports `block_device` (src/nova/compute/manager.py:L55)
- `nova.compute`: imports `api as compute` (src/nova/compute/manager.py:L56)
- `nova.compute`: imports `build_results` (src/nova/compute/manager.py:L57)
- `nova.compute`: imports `claims` (src/nova/compute/manager.py:L58)
- `nova.compute`: imports `power_state` (src/nova/compute/manager.py:L59)
- `nova.compute`: imports `resource_tracker` (src/nova/compute/manager.py:L60)
- `nova.compute`: imports `rpcapi as compute_rpcapi` (src/nova/compute/manager.py:L61)
- `nova.compute`: imports `share_management` (src/nova/compute/manager.py:L62)
- `nova.compute`: imports `task_states` (src/nova/compute/manager.py:L63)
- `nova.compute`: imports `utils as compute_utils` (src/nova/compute/manager.py:L64)
- `nova.compute.utils`: imports `wrap_instance_event` (src/nova/compute/manager.py:L65)
- `nova.compute`: imports `vm_states` (src/nova/compute/manager.py:L66)
- `nova`: imports `conductor` (src/nova/compute/manager.py:L67)
- `import nova.conf` (src/nova/compute/manager.py:L68)
- `import nova.context` (src/nova/compute/manager.py:L69)
- `nova`: imports `exception` (src/nova/compute/manager.py:L70)
- `nova`: imports `exception_wrapper` (src/nova/compute/manager.py:L71)
- `nova.i18n`: imports `_` (src/nova/compute/manager.py:L72)
- `nova.image`: imports `glance` (src/nova/compute/manager.py:L73)
- `nova`: imports `manager` (src/nova/compute/manager.py:L74)
- `nova.network`: imports `model as network_model` (src/nova/compute/manager.py:L75)
- `nova.network`: imports `neutron` (src/nova/compute/manager.py:L76)
- `nova`: imports `objects` (src/nova/compute/manager.py:L77)
- `nova.objects`: imports `base as obj_base` (src/nova/compute/manager.py:L78)
- `nova.objects`: imports `external_event as external_event_obj` (src/nova/compute/manager.py:L79)
- `nova.objects`: imports `fields` (src/nova/compute/manager.py:L80)
- `nova.objects`: imports `instance as obj_instance` (src/nova/compute/manager.py:L81)
- `nova.objects`: imports `migrate_data as migrate_data_obj` (src/nova/compute/manager.py:L82)
- `nova.objects`: imports `service as service_obj` (src/nova/compute/manager.py:L83)
- `nova.pci`: imports `request as pci_req_module` (src/nova/compute/manager.py:L84)
- `nova.pci`: imports `whitelist` (src/nova/compute/manager.py:L85)
- `nova`: imports `safe_utils` (src/nova/compute/manager.py:L86)
- `nova.scheduler.client`: imports `query` (src/nova/compute/manager.py:L87)
- `nova.scheduler.client`: imports `report` (src/nova/compute/manager.py:L88)
- `nova.scheduler`: imports `utils as scheduler_utils` (src/nova/compute/manager.py:L89)
- `nova.share`: imports `manila` (src/nova/compute/manager.py:L90)
- `nova`: imports `thread_pool_factory` (src/nova/compute/manager.py:L91)
- `nova`: imports `utils` (src/nova/compute/manager.py:L92)
- `nova.virt`: imports `block_device as driver_block_device` (src/nova/compute/manager.py:L93)
- `nova.virt`: imports `configdrive` (src/nova/compute/manager.py:L94)
- `nova.virt`: imports `driver` (src/nova/compute/manager.py:L95)
- `nova.virt`: imports `event as virtevent` (src/nova/compute/manager.py:L96)
- `nova.virt`: imports `hardware` (src/nova/compute/manager.py:L97)
- `import nova.virt.node` (src/nova/compute/manager.py:L98)
- `nova.virt`: imports `storage_users` (src/nova/compute/manager.py:L99)
- `nova.virt`: imports `virtapi` (src/nova/compute/manager.py:L100)
- `nova.volume`: imports `cinder` (src/nova/compute/manager.py:L101)
- `nova`: imports `vtpm` (src/nova/compute/manager.py:L102)

## Side Effects

- **network**: cyclient = cyborg.get_client(context) (src/nova/compute/manager.py:L3024)
- **network**: cyclient = cyborg.get_client(context) (src/nova/compute/manager.py:L4337)
- **network**: cyclient = cyborg.get_client(context) (src/nova/compute/manager.py:L7342)
- **network**: cyclient = cyborg.get_client(context) (src/nova/compute/manager.py:L10664)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/compute/manager.py:L104)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/compute/manager.py:L106)
- **global-mutation**: UNSET_SENTINEL = object() (src/nova/compute/manager.py:L242)
- **global-mutation**: FAILED_SENTINEL = object() (src/nova/compute/manager.py:L243)
- **global-mutation**: EXPECTED = "expected" (src/nova/compute/manager.py:L433)
- **global-mutation**: WAITING = "waiting" (src/nova/compute/manager.py:L434)
- **global-mutation**: RECEIVED = "received" (src/nova/compute/manager.py:L435)
- **global-mutation**: RECEIVED_EARLY = "received early" (src/nova/compute/manager.py:L436)
- **global-mutation**: TIMED_OUT = "timed out" (src/nova/compute/manager.py:L437)
- **global-mutation**: RECEIVED_NOT_PROCESSED = "received but not processed" (src/nova/compute/manager.py:L438)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as keystone_exception (src/nova/compute/manager.py:L42)
- **sink** (`db-write`): kwargs.update(dict(zip(function.__code__.co_varnames[2:], args))) (src/nova/compute/manager.py:L210)
- **privilege** (`crypto-key`): :raises: keystoneauth1.exceptions.ClientException (src/nova/compute/manager.py:L619)
- **sink** (`db-write`): """Update an instance in the database using kwargs as value.""" (src/nova/compute/manager.py:L744)
- **sink** (`db-write`): to finish and the _set_instance_host_and_node() to update the (src/nova/compute/manager.py:L1687)
- **sink** (`db-write`): the service up by listening on RPC queues, make sure to update (src/nova/compute/manager.py:L1805)
- **sink** (`db-write`): bdm.update(values) (src/nova/compute/manager.py:L2216)
- **sink** (`db-write`): instance.system_metadata.update( (src/nova/compute/manager.py:L2659)
- **sink** (`db-write`): port_arqs.update({arq['uuid']: arq}) (src/nova/compute/manager.py:L3067)
- **sink** (`db-write`): spec_arqs.update({arq['uuid']: arq}) (src/nova/compute/manager.py:L3069)
- **sink** (`db-write`): 'Failed to update network info cache when cleaning up ' (src/nova/compute/manager.py:L3094)
- **sink** (`db-write`): instance.update(keys) (src/nova/compute/manager.py:L7419)
- **sink** (`db-write`): bdm.update(values) (src/nova/compute/manager.py:L8292)
- **sink** (`db-write`): pci_dev_map_src_dst.update(dict( (src/nova/compute/manager.py:L8958)
- **sink** (`db-write`): """Called periodically.  On every call, try to update the (src/nova/compute/manager.py:L10412)
- **sink** (`db-write`): LOG.debug('Skipping network cache update for instance ' (src/nova/compute/manager.py:L10438)
- **sink** (`db-write`): LOG.debug('Skipping network cache update for instance ' (src/nova/compute/manager.py:L10442)
- **sink** (`db-write`): LOG.debug('Skipping network cache update for instance ' (src/nova/compute/manager.py:L10469)
- **sink** (`db-write`): LOG.debug('Skipping network cache update for instance ' (src/nova/compute/manager.py:L10474)
- **sink** (`db-write`): "update.") (src/nova/compute/manager.py:L10512)
- **sink** (`db-write`): :param instance: The instance to update. The vm_state will be set by (src/nova/compute/manager.py:L11378)
- **sink** (`db-write`): a candidate for the power-update event. (src/nova/compute/manager.py:L11559)
- **sink** (`db-write`): power-update event. (src/nova/compute/manager.py:L11565)
- **sink** (`db-write`): """Power update of an instance prompted by an external event. (src/nova/compute/manager.py:L11583)
- **sink** (`db-write`): LOG.debug('Handling power-update event with target_power_state %s ' (src/nova/compute/manager.py:L11593)
- **sink** (`db-write`): LOG.info('The power-update %(tag)s event for instance ' (src/nova/compute/manager.py:L11599)
- **sink** (`db-write`): LOG.info("The power-update event was possibly preempted: %s ", (src/nova/compute/manager.py:L11651)
- **sink** (`db-write`): elif event.name == 'power-update': (src/nova/compute/manager.py:L11691)
- **sink** (`db-write`): """Update migrate vifs profile with the claimed PCI devices (src/nova/compute/manager.py:L11965)

