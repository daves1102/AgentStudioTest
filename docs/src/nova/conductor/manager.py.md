# src/nova/conductor/manager.py

## Overview

This file implements the `manager` module, defining 2 classs, 2 constants, 2 fields, 9 functions, 50 methods, 1 property, 4 staticmethods, 49 imports, 7 side effects, 7 security surface entries.

Lines: total 2393, code 1721, comment 467, blank 205

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/conductor/manager.py:L69–L69` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/conductor/manager.py:L70–L70` |
| `targets_cell` | function | (fn) | exported | `wrapper` (src/nova/conductor/manager.py:L104) | 1/4 | `src/nova/conductor/manager.py:L73–L104` |
| `targets_cell.wrapper` | function | (self, context, *args, **kwargs) | public | `fn(self, context, *args, **kwargs)` (src/nova/conductor/manager.py:L103) | — | `src/nova/conductor/manager.py:L81–L103` |
| `ConductorManager` | class | — | exported | not declared | — | `src/nova/conductor/manager.py:L107–L232` |
| `ConductorManager.target` | field | — | public | not declared | — | `src/nova/conductor/manager.py:L120–L120` |
| `ConductorManager.__init__` | method | (self, *args, **kwargs) | public | not declared | 1/5 | `src/nova/conductor/manager.py:L122–L126` |
| `ConductorManager.provider_fw_rule_get_all` | method | (self, context) | public | `[]` (src/nova/conductor/manager.py:L131) | 1/2 | `src/nova/conductor/manager.py:L129–L131` |
| `ConductorManager._object_dispatch` | method | (self, target, method, args, kwargs) | private | `getattr(target, method)(*args, **kwargs)` (src/nova/conductor/manager.py:L143) | 2/5 | `src/nova/conductor/manager.py:L133–L145` |
| `ConductorManager.object_class_action_versions` | method | (self, context, objname, objmethod, object_versions, args, kwargs) | public | `result` (src/nova/conductor/manager.py:L170) | 4/19 | `src/nova/conductor/manager.py:L147–L170` |
| `ConductorManager.object_action` | method | (self, context, objinst, objmethod, args, kwargs) | public | `updates, result` (src/nova/conductor/manager.py:L190) | 5/13 | `src/nova/conductor/manager.py:L172–L190` |
| `ConductorManager.object_backport_versions` | method | (self, context, objinst, object_versions) | public | `objinst.obj_to_primitive(target_version=target, version_manifest=object_versions)` (src/nova/conductor/manager.py:L200) | 2/10 | `src/nova/conductor/manager.py:L192–L201` |
| `ConductorManager.reset` | method | (self) | public | not declared | 1/2 | `src/nova/conductor/manager.py:L203–L204` |
| `ConductorManager.graceful_shutdown` | method | (self, timeout) | public | not declared | 2/14 | `src/nova/conductor/manager.py:L206–L232` |
| `try_target_cell` | function | (context, cell) | exported | not declared | 2/6 | `src/nova/conductor/manager.py:L236–L248` |
| `obj_target_cell` | function | (obj, cell) | exported | not declared | 1/4 | `src/nova/conductor/manager.py:L252–L256` |
| `ComputeTaskManager` | class | — | exported | not declared | — | `src/nova/conductor/manager.py:L260–L2393` |
| `ComputeTaskManager.target` | field | — | public | not declared | — | `src/nova/conductor/manager.py:L269–L269` |
| `ComputeTaskManager.__init__` | method | (self) | public | not declared | 4/27 | `src/nova/conductor/manager.py:L271–L308` |
| `ComputeTaskManager.report_client` | method | (self) | public | `report.report_client_singleton()` (src/nova/conductor/manager.py:L312) | 1/2 | `src/nova/conductor/manager.py:L311–L312` |
| `ComputeTaskManager.reset` | method | (self) | public | not declared | 1/4 | `src/nova/conductor/manager.py:L314–L317` |
| `ComputeTaskManager.migrate_server` | method | (self, context, instance, scheduler_hint, live, rebuild, flavor, block_migration, disk_over_commit, reservations=None, clean_shutdown=True, request_spec=None, host_list=None) | public | not declared | 11/24 | `src/nova/conductor/manager.py:L339–L367` |
| `ComputeTaskManager._get_request_spec_for_cold_migrate` | method | (context, instance, flavor, filter_properties, request_spec) | private | `request_spec` (src/nova/conductor/manager.py:L406) | 3/16 | `src/nova/conductor/manager.py:L370–L406` |
| `ComputeTaskManager._cold_migrate` | method | (self, context, instance, flavor, filter_properties, clean_shutdown, request_spec, host_list) | private | not declared | 10/45 | `src/nova/conductor/manager.py:L408–L463` |
| `ComputeTaskManager._set_vm_state_and_notify` | method | (self, context, instance_uuid, method, updates, ex, request_spec) | private | not declared | 1/5 | `src/nova/conductor/manager.py:L465–L469` |
| `ComputeTaskManager._cleanup_allocated_networks` | method | (self, context, instance, requested_networks) | private | `` (src/nova/conductor/manager.py:L481) | 5/14 | `src/nova/conductor/manager.py:L471–L490` |
| `ComputeTaskManager.live_migrate_instance` | method | (self, context, instance, scheduler_hint, block_migration, disk_over_commit, request_spec) | public | not declared | 1/4 | `src/nova/conductor/manager.py:L494–L497` |
| `ComputeTaskManager._live_migrate` | method | (self, context, instance, scheduler_hint, block_migration, disk_over_commit, request_spec) | private | not declared | 4/49 | `src/nova/conductor/manager.py:L499–L563` |
| `ComputeTaskManager._live_migrate._set_vm_state` | function | (context, instance, ex, vm_state=None, task_state=None) | private | not declared | — | `src/nova/conductor/manager.py:L503–L514` |
| `ComputeTaskManager._build_live_migrate_task` | method | (self, context, instance, destination, block_migration, disk_over_commit, migration, request_spec=None) | private | `live_migrate.LiveMigrationTask(context, instance, destination, block_migration, disk_over_commit, migration, self.compute_rpcapi, self.servicegroup_api, self.query_client, self.report_client, request_` (src/nova/conductor/manager.py:L568) | 1/11 | `src/nova/conductor/manager.py:L565–L575` |
| `ComputeTaskManager._build_cold_migrate_task` | method | (self, context, instance, flavor, request_spec, clean_shutdown, host_list) | private | `migrate.MigrationTask(context, instance, flavor, request_spec, clean_shutdown, self.compute_rpcapi, self.query_client, self.report_client, host_list, self.network_api)` (src/nova/conductor/manager.py:L579) | 1/7 | `src/nova/conductor/manager.py:L577–L583` |
| `ComputeTaskManager._destroy_build_request` | method | (self, context, instance) | private | not declared | 1/4 | `src/nova/conductor/manager.py:L585–L594` |
| `ComputeTaskManager._populate_instance_mapping` | method | (self, context, instance, host) | private | `None` (src/nova/conductor/manager.py:L608); `None` (src/nova/conductor/manager.py:L620); `inst_mapping` (src/nova/conductor/manager.py:L624) | 3/20 | `src/nova/conductor/manager.py:L596–L624` |
| `ComputeTaskManager._validate_existing_attachment_ids` | method | (self, context, instance, bdms) | private | not declared | 5/10 | `src/nova/conductor/manager.py:L626–L642` |
| `ComputeTaskManager._cleanup_when_reschedule_fails` | method | (self, context, instance, exception, legacy_request_spec, requested_networks) | private | not declared | 4/15 | `src/nova/conductor/manager.py:L644–L666` |
| `ComputeTaskManager.build_instances` | method | (self, context, instances, image, filter_properties, admin_password, injected_files, requested_networks, security_groups, block_device_mapping=None, legacy_bdm=True, request_spec=None, host_lists=None) | public | `` (src/nova/conductor/manager.py:L770); `` (src/nova/conductor/manager.py:L806); `` (src/nova/conductor/manager.py:L827); `` (src/nova/conductor/manager.py:L897) | 34/151 | `src/nova/conductor/manager.py:L671–L929` |
| `ComputeTaskManager._create_and_bind_arq_for_instance` | method | (self, context, instance, hostname, request_spec, requested_networks=None) | private | `list(bindings.keys())` (src/nova/conductor/manager.py:L959) | 6/26 | `src/nova/conductor/manager.py:L931–L965` |
| `ComputeTaskManager._schedule_instances` | method | (self, context, request_spec, instance_uuids=None, return_alternates=False) | private | `host_lists` (src/nova/conductor/manager.py:L976) | 1/10 | `src/nova/conductor/manager.py:L967–L976` |
| `ComputeTaskManager._restrict_request_spec_to_cell` | method | (context, instance, request_spec) | private | not declared | 3/15 | `src/nova/conductor/manager.py:L979–L1002` |
| `ComputeTaskManager._recheck_quota` | method | (self, context, flavor, request_spec, orig_num_req, project_id=None, user_id=None) | private | not declared | 2/15 | `src/nova/conductor/manager.py:L1004–L1029` |
| `ComputeTaskManager.unshelve_instance` | method | (self, context, instance, request_spec=None) | public | `` (src/nova/conductor/manager.py:L1172); `` (src/nova/conductor/manager.py:L1188) | 12/110 | `src/nova/conductor/manager.py:L1033–L1188` |
| `ComputeTaskManager.unshelve_instance.safe_image_show` | function | (ctx, image_id) | public | `self.image_api.get(ctx, image_id, show_deleted=False)` (src/nova/conductor/manager.py:L1038) | — | `src/nova/conductor/manager.py:L1036–L1040` |
| `ComputeTaskManager._allocate_for_evacuate_dest_host` | method | (self, context, instance, host, request_spec=None) | private | not declared | 4/33 | `src/nova/conductor/manager.py:L1190–L1229` |
| `ComputeTaskManager.rebuild_instance` | method | (self, context, instance, orig_image_ref, image_ref, injected_files, new_pass, orig_sys_metadata, bdms, recreate, on_shared_storage, preserve_ephemeral=False, host=None, request_spec=None, reimage_boot_volume=False, target_state=None) | public | not declared | 21/142 | `src/nova/conductor/manager.py:L1233–L1443` |
| `ComputeTaskManager._validate_image_traits_for_rebuild` | method | (self, context, instance, image_ref) | private | `` (src/nova/conductor/manager.py:L1460) | 10/42 | `src/nova/conductor/manager.py:L1445–L1513` |
| `ComputeTaskManager._volume_size` | method | (flavor, bdm) | private | `size` (src/nova/conductor/manager.py:L1526) | 5/9 | `src/nova/conductor/manager.py:L1517–L1526` |
| `ComputeTaskManager._create_block_device_mapping` | method | (self, cell, flavor, instance_uuid, block_device_mapping) | private | `instance_block_device_mapping` (src/nova/conductor/manager.py:L1543) | 2/11 | `src/nova/conductor/manager.py:L1528–L1543` |
| `ComputeTaskManager._create_tags` | method | (self, context, instance_uuid, tags) | private | `instance_tags` (src/nova/conductor/manager.py:L1551); `tags` (src/nova/conductor/manager.py:L1553) | 3/8 | `src/nova/conductor/manager.py:L1545–L1553` |
| `ComputeTaskManager._create_instance_action_for_cell0` | method | (self, context, instance, exc) | private | not declared | 1/10 | `src/nova/conductor/manager.py:L1555–L1576` |
| `ComputeTaskManager._bury_in_cell0` | method | (self, context, request_spec, exc, build_requests=None, instances=None, block_device_mapping=None, tags=None) | private | `` (src/nova/conductor/manager.py:L1602) | 15/58 | `src/nova/conductor/manager.py:L1578–L1673` |
| `ComputeTaskManager.schedule_and_build_instances` | method | (self, context, build_requests, request_specs, image, admin_password, injected_files, requested_networks, block_device_mapping, tags=None) | public | `` (src/nova/conductor/manager.py:L1691) | 18/140 | `src/nova/conductor/manager.py:L1675–L1868` |
| `ComputeTaskManager._create_and_bind_arqs` | method | (self, cyclient, instance_uuid, extra_specs, hostname, resource_provider_mapping) | private | `bindings` (src/nova/conductor/manager.py:L1885); `bindings` (src/nova/conductor/manager.py:L1900) | 3/21 | `src/nova/conductor/manager.py:L1870–L1900` |
| `ComputeTaskManager._create_arqs_for_ports` | method | (self, cyclient, instance_uuid, requested_networks, hostname, resource_provider_mapping) | private | `bindings` (src/nova/conductor/manager.py:L1941) | 5/29 | `src/nova/conductor/manager.py:L1902–L1941` |
| `ComputeTaskManager._map_instance_to_cell` | method | (context, instance, cell) | private | `inst_mapping` (src/nova/conductor/manager.py:L1972) | 2/14 | `src/nova/conductor/manager.py:L1944–L1972` |
| `ComputeTaskManager._cleanup_build_artifacts` | method | (self, context, exc, instances, build_requests, request_specs, block_device_mappings, tags, cell_mapping_cache) | private | not declared | 7/32 | `src/nova/conductor/manager.py:L1974–L2025` |
| `ComputeTaskManager._delete_build_request` | method | (self, context, build_request, instance, cell, instance_bdms, instance_tags) | private | `False` (src/nova/conductor/manager.py:L2083); `True` (src/nova/conductor/manager.py:L2084) | 9/33 | `src/nova/conductor/manager.py:L2027–L2084` |
| `ComputeTaskManager.cache_images` | method | (self, context, aggregate, image_ids) | public | not declared | 7/80 | `src/nova/conductor/manager.py:L2086–L2213` |
| `ComputeTaskManager.cache_images.host_completed` | function | (context, host, result) | public | not declared | — | `src/nova/conductor/manager.py:L2129–L2147` |
| `ComputeTaskManager.cache_images.wrap_cache_images` | function | (ctxt, host, image_ids) | public | not declared | — | `src/nova/conductor/manager.py:L2149–L2154` |
| `ComputeTaskManager.cache_images.skipped_host` | function | (context, host, image_ids) | public | not declared | — | `src/nova/conductor/manager.py:L2156–L2158` |
| `ComputeTaskManager.confirm_snapshot_based_resize` | method | (self, context, instance, migration) | public | not declared | 1/4 | `src/nova/conductor/manager.py:L2217–L2228` |
| `ComputeTaskManager.revert_snapshot_based_resize` | method | (self, context, instance, migration) | public | not declared | 1/4 | `src/nova/conductor/manager.py:L2236–L2247` |
| `ComputeTaskManager._create_volume_bdm` | method | (self, context, instance, device, volume, disk_bus, device_type, tag=None, delete_on_termination=False) | private | `volume_bdm` (src/nova/conductor/manager.py:L2264) | 1/11 | `src/nova/conductor/manager.py:L2249–L2264` |
| `ComputeTaskManager.attach_volume` | method | (self, context, instance, volume, device, disk_bus, device_type, tag=None, supports_multiattach=False, delete_on_termination=False) | public | `volume_bdm.device_name` (src/nova/conductor/manager.py:L2332) | 5/35 | `src/nova/conductor/manager.py:L2267–L2332` |
| `ComputeTaskManager._reserve_and_attach_volume` | method | (self, context, instance, volume, device, disk_bus, device_type, tag, supports_multiattach, delete_on_termination) | private | `volume_bdm` (src/nova/conductor/manager.py:L2393) | 5/44 | `src/nova/conductor/manager.py:L2334–L2393` |
| `ComputeTaskManager.report_client` | property | — | public | not declared | — | `src/nova/conductor/manager.py:L310–L312` |
| `ComputeTaskManager._get_request_spec_for_cold_migrate` | staticmethod | — | private | not declared | — | `src/nova/conductor/manager.py:L369–L406` |
| `ComputeTaskManager._restrict_request_spec_to_cell` | staticmethod | — | private | not declared | — | `src/nova/conductor/manager.py:L978–L1002` |
| `ComputeTaskManager._volume_size` | staticmethod | — | private | not declared | — | `src/nova/conductor/manager.py:L1516–L1526` |
| `ComputeTaskManager._map_instance_to_cell` | staticmethod | — | private | not declared | — | `src/nova/conductor/manager.py:L1943–L1972` |

## Dependencies

- `import collections` (src/nova/conductor/manager.py:L17)
- `import concurrent.futures` (src/nova/conductor/manager.py:L18)
- `import contextlib` (src/nova/conductor/manager.py:L19)
- `import copy` (src/nova/conductor/manager.py:L20)
- `import functools` (src/nova/conductor/manager.py:L21)
- `import sys` (src/nova/conductor/manager.py:L22)
- `import threading` (src/nova/conductor/manager.py:L23)
- `keystoneauth1`: imports `exceptions as ks_exc` (src/nova/conductor/manager.py:L25)
- `oslo_config`: imports `cfg` (src/nova/conductor/manager.py:L26)
- `oslo_db`: imports `exception as db_exc` (src/nova/conductor/manager.py:L27)
- `oslo_limit`: imports `exception as limit_exceptions` (src/nova/conductor/manager.py:L28)
- `oslo_log`: imports `log as logging` (src/nova/conductor/manager.py:L29)
- `import oslo_messaging as messaging` (src/nova/conductor/manager.py:L30)
- `oslo_serialization`: imports `jsonutils` (src/nova/conductor/manager.py:L31)
- `oslo_utils`: imports `excutils` (src/nova/conductor/manager.py:L32)
- `oslo_utils`: imports `timeutils` (src/nova/conductor/manager.py:L33)
- `oslo_utils`: imports `versionutils` (src/nova/conductor/manager.py:L34)
- `nova.accelerator`: imports `cyborg` (src/nova/conductor/manager.py:L36)
- `nova`: imports `availability_zones` (src/nova/conductor/manager.py:L37)
- `nova.compute`: imports `instance_actions` (src/nova/conductor/manager.py:L38)
- `nova.compute`: imports `rpcapi as compute_rpcapi` (src/nova/conductor/manager.py:L39)
- `nova.compute`: imports `task_states` (src/nova/conductor/manager.py:L40)
- `nova.compute`: imports `utils as compute_utils` (src/nova/conductor/manager.py:L41)
- `nova.compute.utils`: imports `wrap_instance_event` (src/nova/conductor/manager.py:L42)
- `nova.compute`: imports `vm_states` (src/nova/conductor/manager.py:L43)
- `nova.conductor.tasks`: imports `cross_cell_migrate` (src/nova/conductor/manager.py:L44)
- `nova.conductor.tasks`: imports `live_migrate` (src/nova/conductor/manager.py:L45)
- `nova.conductor.tasks`: imports `migrate` (src/nova/conductor/manager.py:L46)
- `nova`: imports `context as nova_context` (src/nova/conductor/manager.py:L47)
- `nova`: imports `exception` (src/nova/conductor/manager.py:L48)
- `nova.i18n`: imports `_` (src/nova/conductor/manager.py:L49)
- `nova.image`: imports `glance` (src/nova/conductor/manager.py:L50)
- `nova.limit`: imports `placement as placement_limits` (src/nova/conductor/manager.py:L51)
- `nova.limit`: imports `utils as limit_utils` (src/nova/conductor/manager.py:L52)
- `nova`: imports `manager` (src/nova/conductor/manager.py:L53)
- `nova.network`: imports `neutron` (src/nova/conductor/manager.py:L54)
- `nova`: imports `notifications` (src/nova/conductor/manager.py:L55)
- `nova`: imports `objects` (src/nova/conductor/manager.py:L56)
- `nova.objects`: imports `base as nova_object` (src/nova/conductor/manager.py:L57)
- `nova.objects`: imports `fields` (src/nova/conductor/manager.py:L58)
- `nova`: imports `profiler` (src/nova/conductor/manager.py:L59)
- `nova`: imports `rpc` (src/nova/conductor/manager.py:L60)
- `nova.scheduler.client`: imports `query` (src/nova/conductor/manager.py:L61)
- `nova.scheduler.client`: imports `report` (src/nova/conductor/manager.py:L62)
- `nova.scheduler`: imports `utils as scheduler_utils` (src/nova/conductor/manager.py:L63)
- `nova`: imports `servicegroup` (src/nova/conductor/manager.py:L64)
- `nova`: imports `thread_pool_factory` (src/nova/conductor/manager.py:L65)
- `nova`: imports `utils` (src/nova/conductor/manager.py:L66)
- `nova.volume`: imports `cinder` (src/nova/conductor/manager.py:L67)

## Side Effects

- **network**: cyclient = cyborg.get_client( (src/nova/conductor/manager.py:L938)
- **network**: cyclient = cyborg.get_client(context) (src/nova/conductor/manager.py:L963)
- **network**: cyclient = cyborg.get_client(context) (src/nova/conductor/manager.py:L1175)
- **network**: cyclient = cyborg.get_client(context) (src/nova/conductor/manager.py:L1406)
- **network**: cyclient = cyborg.get_client(context) (src/nova/conductor/manager.py:L1419)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/conductor/manager.py:L69)
- **global-mutation**: CONF = cfg.CONF (src/nova/conductor/manager.py:L70)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as ks_exc (src/nova/conductor/manager.py:L25)
- **sink** (`db-write`): bindings.update(port_bindings) (src/nova/conductor/manager.py:L955)
- **sink** (`db-write`): LOG.debug('Took %0.2f seconds to select destinations for %s ' (src/nova/conductor/manager.py:L974)
- **sink** (`db-write`): traits_in_instance_rps.update( (src/nova/conductor/manager.py:L1503)
- **sink** (`db-write`): bindings.update(arq_binding) (src/nova/conductor/manager.py:L1939)
- **sink** (`db-write`): """Update the instance mapping to point at the given cell. (src/nova/conductor/manager.py:L1945)
- **sink** (`db-write`): to build the instance this method is used to update the instance (src/nova/conductor/manager.py:L1948)

