# src/nova/cmd/manage.py

## Overview

This file implements the `manage` module, defining 8 classs, 3 constants, 1 field, 10 functions, 71 methods, 11 staticmethods, 8 variables, 65 imports, 11 side effects, 31 security surface entries.

Lines: total 3858, code 2970, comment 502, blank 386

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/cmd/manage.py:L92–L92` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/cmd/manage.py:L93–L93` |
| `_EXTRA_DEFAULT_LOG_LEVELS` | variable | — | unexported | not declared | — | `src/nova/cmd/manage.py:L96–L103` |
| `_CREATE` | variable | — | unexported | not declared | — | `src/nova/cmd/manage.py:L107–L107` |
| `_UPDATE` | variable | — | unexported | not declared | — | `src/nova/cmd/manage.py:L108–L108` |
| `args` | variable | — | exported | not declared | — | `src/nova/cmd/manage.py:L111–L111` |
| `action_description` | variable | — | exported | not declared | — | `src/nova/cmd/manage.py:L112–L112` |
| `mask_passwd_in_url` | function | (url) | exported | `urlparse.urlunparse(new_parsed)` (src/nova/cmd/manage.py:L122) | 1/8 | `src/nova/cmd/manage.py:L115–L122` |
| `format_dict` | function | (dct, dict_property="Property", dict_value='Value', sort_key=None) | exported | `encodeutils.safe_encode(pt.get_string()).decode()` (src/nova/cmd/manage.py:L155) | 8/18 | `src/nova/cmd/manage.py:L125–L155` |
| `locked_instance` | function | (cell_mapping, instance, reason) | exported | not declared | 5/14 | `src/nova/cmd/manage.py:L159–L182` |
| `DbCommands` | class | — | exported | not declared | — | `src/nova/cmd/manage.py:L185–L695` |
| `DbCommands.online_migrations` | field | — | public | not declared | — | `src/nova/cmd/manage.py:L202–L223` |
| `DbCommands.sync` | method | (self, version=None, local_cell=False) | public | `1` (src/nova/cmd/manage.py:L258); `migration.db_sync(version)` (src/nova/cmd/manage.py:L260) | 4/28 | `src/nova/cmd/manage.py:L229–L260` |
| `DbCommands.version` | method | (self) | public | not declared | 1/2 | `src/nova/cmd/manage.py:L262–L264` |
| `DbCommands.archive_deleted_rows` | method | (self, max_rows=1000, verbose=False, until_complete=False, purge=False, before=None, all_cells=False, task_log=False, sleep=0) | public | `2` (src/nova/cmd/manage.py:L312); `2` (src/nova/cmd/manage.py:L316); `3` (src/nova/cmd/manage.py:L329); `4` (src/nova/cmd/manage.py:L336); `int(bool(table_to_rows_archived))` (src/nova/cmd/manage.py:L425) | 22/85 | `src/nova/cmd/manage.py:L296–L425` |
| `DbCommands.archive_deleted_rows.sort_func` | function | (item) | public | `cell_name, table` (src/nova/cmd/manage.py:L361) | — | `src/nova/cmd/manage.py:L359–L361` |
| `DbCommands._do_archive` | method | (self, table_to_rows_archived, cctxt, max_rows, until_complete, verbose, before_date, cell_name, task_log, sleep) | private | `total_rows_archived` (src/nova/cmd/manage.py:L508) | 9/41 | `src/nova/cmd/manage.py:L427–L508` |
| `DbCommands.purge` | method | (self, before=None, purge_all=False, verbose=False, all_cells=False) | public | `1` (src/nova/cmd/manage.py:L525); `2` (src/nova/cmd/manage.py:L531); `4` (src/nova/cmd/manage.py:L548); `0` (src/nova/cmd/manage.py:L559); `3` (src/nova/cmd/manage.py:L561) | 9/36 | `src/nova/cmd/manage.py:L521–L561` |
| `DbCommands.purge.status` | function | (msg) | public | not declared | — | `src/nova/cmd/manage.py:L535–L537` |
| `DbCommands._run_migration` | method | (self, ctxt, max_count) | private | `migrations, exceptions` (src/nova/cmd/manage.py:L594) | 6/27 | `src/nova/cmd/manage.py:L563–L594` |
| `DbCommands.online_data_migrations` | method | (self, max_count=None) | public | `127` (src/nova/cmd/manage.py:L608); `2` (src/nova/cmd/manage.py:L650); `ran and 1 or 0` (src/nova/cmd/manage.py:L654) | 14/42 | `src/nova/cmd/manage.py:L598–L654` |
| `DbCommands.ironic_compute_node_move` | method | (self, compute_node_uuid, destination_service_host) | public | not declared | 5/29 | `src/nova/cmd/manage.py:L661–L695` |
| `ApiDbCommands` | class | — | exported | not declared | — | `src/nova/cmd/manage.py:L698–L711` |
| `ApiDbCommands.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/cmd/manage.py:L701–L702` |
| `ApiDbCommands.sync` | method | (self, version=None) | public | `migration.db_sync(version, database='api')` (src/nova/cmd/manage.py:L707) | 1/2 | `src/nova/cmd/manage.py:L705–L707` |
| `ApiDbCommands.version` | method | (self) | public | not declared | 1/2 | `src/nova/cmd/manage.py:L709–L711` |
| `CellV2Commands` | class | — | exported | not declared | — | `src/nova/cmd/manage.py:L714–L1506` |
| `CellV2Commands._validate_transport_url` | method | (self, transport_url, warn_about_none=True) | private | `None` (src/nova/cmd/manage.py:L725); `None` (src/nova/cmd/manage.py:L737); `transport_url` (src/nova/cmd/manage.py:L739) | 5/21 | `src/nova/cmd/manage.py:L717–L739` |
| `CellV2Commands._validate_database_connection` | method | (self, database_connection, warn_about_none=True) | private | `None` (src/nova/cmd/manage.py:L750); `CONF.database.connection` (src/nova/cmd/manage.py:L754); `database_connection` (src/nova/cmd/manage.py:L755) | 4/15 | `src/nova/cmd/manage.py:L741–L755` |
| `CellV2Commands._non_unique_transport_url_database_connection_checker` | method | (self, ctxt, cell_mapping, transport_url, database_connection) | private | `True` (src/nova/cmd/manage.py:L774); `False` (src/nova/cmd/manage.py:L775) | 6/17 | `src/nova/cmd/manage.py:L757–L775` |
| `CellV2Commands.simple_cell_setup` | method | (self, transport_url=None) | public | `1` (src/nova/cmd/manage.py:L789); `1` (src/nova/cmd/manage.py:L809); `0` (src/nova/cmd/manage.py:L811) | 5/21 | `src/nova/cmd/manage.py:L779–L811` |
| `CellV2Commands.map_cell0` | method | (self, database_connection=None) | public | `0` (src/nova/cmd/manage.py:L836) | 2/6 | `src/nova/cmd/manage.py:L820–L836` |
| `CellV2Commands._map_cell0` | method | (self, database_connection=None) | private | `cell_mapping` (src/nova/cmd/manage.py:L869) | 2/10 | `src/nova/cmd/manage.py:L838–L869` |
| `CellV2Commands._map_cell0.cell0_default_connection` | function | — | public | `urlparse.unquote(url.render_as_string(hide_password=False))` (src/nova/cmd/manage.py:L857) | — | `src/nova/cmd/manage.py:L842–L857` |
| `CellV2Commands._get_and_map_instances` | method | (self, ctxt, cell_mapping, limit, marker) | private | `marker` (src/nova/cmd/manage.py:L895) | 5/22 | `src/nova/cmd/manage.py:L871–L895` |
| `CellV2Commands.map_instances` | method | (self, cell_uuid, max_count=None, reset_marker=None) | public | `127` (src/nova/cmd/manage.py:L945); `1` (src/nova/cmd/manage.py:L985); `0` (src/nova/cmd/manage.py:L986) | 9/39 | `src/nova/cmd/manage.py:L910–L986` |
| `CellV2Commands._map_cell_and_hosts` | method | (self, transport_url, name=None, verbose=False) | private | `None` (src/nova/cmd/manage.py:L995); `cell_mapping_uuid` (src/nova/cmd/manage.py:L1017); `cell_mapping_uuid` (src/nova/cmd/manage.py:L1036) | 10/41 | `src/nova/cmd/manage.py:L988–L1036` |
| `CellV2Commands.map_cell_and_hosts` | method | (self, transport_url=None, name=None, verbose=False) | public | `1` (src/nova/cmd/manage.py:L1057); `0` (src/nova/cmd/manage.py:L1062) | 2/6 | `src/nova/cmd/manage.py:L1043–L1062` |
| `CellV2Commands.verify_instance` | method | (self, uuid, quiet=False) | public | `1` (src/nova/cmd/manage.py:L1093); `2` (src/nova/cmd/manage.py:L1096); `3` (src/nova/cmd/manage.py:L1113); `4` (src/nova/cmd/manage.py:L1119); `0` (src/nova/cmd/manage.py:L1125) | 6/40 | `src/nova/cmd/manage.py:L1068–L1125` |
| `CellV2Commands.verify_instance.say` | function | (string) | public | not declared | — | `src/nova/cmd/manage.py:L1081–L1083` |
| `CellV2Commands.discover_hosts` | method | (self, cell_uuid=None, verbose=False, strict=False, by_service=False) | public | `2` (src/nova/cmd/manage.py:L1168); `int(not hosts)` (src/nova/cmd/manage.py:L1171) | 3/17 | `src/nova/cmd/manage.py:L1139–L1171` |
| `CellV2Commands.discover_hosts.status_fn` | function | (msg) | public | not declared | — | `src/nova/cmd/manage.py:L1153–L1155` |
| `CellV2Commands.create_cell` | method | (self, name=None, database_connection=None, transport_url=None, verbose=False, disabled=False) | public | `1` (src/nova/cmd/manage.py:L1192); `1` (src/nova/cmd/manage.py:L1197); `2` (src/nova/cmd/manage.py:L1200); `0` (src/nova/cmd/manage.py:L1211) | 5/24 | `src/nova/cmd/manage.py:L1187–L1211` |
| `CellV2Commands.list_cells` | method | (self, verbose=False) | public | `0` (src/nova/cmd/manage.py:L1243) | 5/19 | `src/nova/cmd/manage.py:L1215–L1243` |
| `CellV2Commands.delete_cell` | method | (self, cell_uuid, force=False) | public | `1` (src/nova/cmd/manage.py:L1275); `2` (src/nova/cmd/manage.py:L1285); `3` (src/nova/cmd/manage.py:L1301); `4` (src/nova/cmd/manage.py:L1311); `0` (src/nova/cmd/manage.py:L1329) | 10/43 | `src/nova/cmd/manage.py:L1250–L1329` |
| `CellV2Commands.update_cell` | method | (self, cell_uuid, name=None, transport_url=None, db_connection=None, disable=False, enable=False) | public | `1` (src/nova/cmd/manage.py:L1374); `3` (src/nova/cmd/manage.py:L1390); `4` (src/nova/cmd/manage.py:L1400); `5` (src/nova/cmd/manage.py:L1404); `2` (src/nova/cmd/manage.py:L1418); `0` (src/nova/cmd/manage.py:L1420) | 20/42 | `src/nova/cmd/manage.py:L1350–L1420` |
| `CellV2Commands.list_hosts` | method | (self, cell_uuid=None) | public | `1` (src/nova/cmd/manage.py:L1433); `0` (src/nova/cmd/manage.py:L1448) | 4/20 | `src/nova/cmd/manage.py:L1424–L1448` |
| `CellV2Commands.delete_host` | method | (self, cell_uuid, host) | public | `1` (src/nova/cmd/manage.py:L1476); `2` (src/nova/cmd/manage.py:L1482); `3` (src/nova/cmd/manage.py:L1488); `4` (src/nova/cmd/manage.py:L1499); `0` (src/nova/cmd/manage.py:L1506) | 7/31 | `src/nova/cmd/manage.py:L1454–L1506` |
| `PlacementCommands` | class | — | exported | not declared | — | `src/nova/cmd/manage.py:L1509–L2849` |
| `PlacementCommands._get_compute_node_uuid` | method | (ctxt, instance, node_cache) | private | `node_cache[instance.node]` (src/nova/cmd/manage.py:L1524); `node_uuid` (src/nova/cmd/manage.py:L1530) | 2/8 | `src/nova/cmd/manage.py:L1513–L1530` |
| `PlacementCommands._get_ports` | method | (ctxt, instance, neutron) | private | `neutron.list_ports( ctxt, device_id=instance.uuid, fields=['id', constants.RESOURCE_REQUEST, constants.BINDING_PROFILE] )['ports']` (src/nova/cmd/manage.py:L1544) | 2/10 | `src/nova/cmd/manage.py:L1533–L1551` |
| `PlacementCommands._has_request_but_no_allocation` | method | (port, neutron) | private | `has_res_req and not allocation` (src/nova/cmd/manage.py:L1560) | 2/6 | `src/nova/cmd/manage.py:L1554–L1560` |
| `PlacementCommands._merge_allocations` | method | (alloc1, alloc2) | private | `allocations` (src/nova/cmd/manage.py:L1584) | 4/8 | `src/nova/cmd/manage.py:L1563–L1584` |
| `PlacementCommands._get_resource_request_from_ports` | method | (ctxt, ports) | private | `groups, request_level_params` (src/nova/cmd/manage.py:L1632) | 1/6 | `src/nova/cmd/manage.py:L1587–L1632` |
| `PlacementCommands._get_port_binding_profile_allocation` | method | (ctxt, neutron, port, request_groups, resource_provider_mapping) | private | `allocation` (src/nova/cmd/manage.py:L1684) | 3/19 | `src/nova/cmd/manage.py:L1635–L1684` |
| `PlacementCommands._get_port_allocations_to_heal` | method | (self, ctxt, instance, node_cache, placement, neutron, output) | private | `{}, []` (src/nova/cmd/manage.py:L1727); `allocations, ports_to_heal` (src/nova/cmd/manage.py:L1834) | 13/66 | `src/nova/cmd/manage.py:L1686–L1834` |
| `PlacementCommands._update_ports` | method | (self, neutron, ports_to_update, output) | private | not declared | 3/22 | `src/nova/cmd/manage.py:L1836–L1861` |
| `PlacementCommands._rollback_port_updates` | method | (neutron, ports_to_rollback, output) | private | not declared | 4/26 | `src/nova/cmd/manage.py:L1864–L1897` |
| `PlacementCommands._heal_missing_alloc` | method | (self, ctxt, instance, node_cache) | private | `payload` (src/nova/cmd/manage.py:L1916) | 1/14 | `src/nova/cmd/manage.py:L1899–L1916` |
| `PlacementCommands._heal_missing_project_and_user_id` | method | (self, allocations, instance) | private | `allocations` (src/nova/cmd/manage.py:L1921) | 1/4 | `src/nova/cmd/manage.py:L1918–L1921` |
| `PlacementCommands.ensure_instance_has_no_vgpu_request` | method | (instance) | public | not declared | 2/4 | `src/nova/cmd/manage.py:L1924–L1927` |
| `PlacementCommands.ensure_instance_has_no_cyborg_device_profile_request` | method | (instance) | public | not declared | 2/4 | `src/nova/cmd/manage.py:L1930–L1933` |
| `PlacementCommands._heal_allocations_for_instance` | method | (self, ctxt, instance, node_cache, output, placement, dry_run, heal_port_allocations, neutron, force) | private | `` (src/nova/cmd/manage.py:L1976); `` (src/nova/cmd/manage.py:L1980); `True` (src/nova/cmd/manage.py:L2074); `` (src/nova/cmd/manage.py:L2089) | 18/84 | `src/nova/cmd/manage.py:L1935–L2089` |
| `PlacementCommands._heal_instances_in_cell` | method | (self, ctxt, max_count, unlimited, output, placement, dry_run, instance_uuid, heal_port_allocations, neutron, force) | private | `num_processed` (src/nova/cmd/manage.py:L2166); `num_processed` (src/nova/cmd/manage.py:L2175) | 8/26 | `src/nova/cmd/manage.py:L2091–L2175` |
| `PlacementCommands.heal_allocations` | method | (self, max_count=None, verbose=False, dry_run=False, instance_uuid=None, skip_port_allocations=False, cell_uuid=None, force=False) | public | `127` (src/nova/cmd/manage.py:L2255); `127` (src/nova/cmd/manage.py:L2260); `127` (src/nova/cmd/manage.py:L2277); `127` (src/nova/cmd/manage.py:L2296); `127` (src/nova/cmd/manage.py:L2305); `4` (src/nova/cmd/manage.py:L2310); `2` (src/nova/cmd/manage.py:L2342); `3` (src/nova/cmd/manage.py:L2349); `5` (src/nova/cmd/manage.py:L2352); `6` (src/nova/cmd/manage.py:L2355); `7` (src/nova/cmd/manage.py:L2358); `8` (src/nova/cmd/manage.py:L2364); `1` (src/nova/cmd/manage.py:L2375); `4` (src/nova/cmd/manage.py:L2379); `0` (src/nova/cmd/manage.py:L2380) | 28/106 | `src/nova/cmd/manage.py:L2216–L2380` |
| `PlacementCommands._get_rp_uuid_for_host` | method | (ctxt, host) | private | `nodes[0].uuid` (src/nova/cmd/manage.py:L2419) | 2/9 | `src/nova/cmd/manage.py:L2383–L2419` |
| `PlacementCommands.sync_aggregates` | method | (self, verbose=False) | public | `1` (src/nova/cmd/manage.py:L2497); `2` (src/nova/cmd/manage.py:L2516); `3` (src/nova/cmd/manage.py:L2526); `return_code` (src/nova/cmd/manage.py:L2556) | 15/75 | `src/nova/cmd/manage.py:L2436–L2556` |
| `PlacementCommands._get_instances_and_current_migrations` | method | (self, ctxt, cn_uuid) | private | `False` (src/nova/cmd/manage.py:L2571); `(inst_uuids, mig_uuids)` (src/nova/cmd/manage.py:L2595) | 7/29 | `src/nova/cmd/manage.py:L2558–L2595` |
| `PlacementCommands._delete_allocations_from_consumer` | method | (self, ctxt, placement, provider, consumer_uuid, consumer_type) | private | `False` (src/nova/cmd/manage.py:L2629); `False` (src/nova/cmd/manage.py:L2636); `True` (src/nova/cmd/manage.py:L2637) | 4/18 | `src/nova/cmd/manage.py:L2597–L2637` |
| `PlacementCommands._check_orphaned_allocations_for_provider` | method | (self, ctxt, placement, output, provider, delete) | private | `(num_processed, faults)` (src/nova/cmd/manage.py:L2737) | 13/63 | `src/nova/cmd/manage.py:L2639–L2737` |
| `PlacementCommands._get_resource_provider` | method | (self, context, placement, uuid) | private | `resource_providers[0]` (src/nova/cmd/manage.py:L2757) | 2/6 | `src/nova/cmd/manage.py:L2740–L2757` |
| `PlacementCommands._get_resource_providers` | method | (self, context, placement, **kwargs) | private | `resource_providers` (src/nova/cmd/manage.py:L2782) | 3/11 | `src/nova/cmd/manage.py:L2759–L2782` |
| `PlacementCommands.audit` | method | (self, verbose=False, provider_uuid=None, delete=False) | public | `127` (src/nova/cmd/manage.py:L2828); `1` (src/nova/cmd/manage.py:L2842); `4 if delete else 3` (src/nova/cmd/manage.py:L2848); `0` (src/nova/cmd/manage.py:L2849) | 9/38 | `src/nova/cmd/manage.py:L2796–L2849` |
| `LibvirtCommands` | class | — | exported | not declared | — | `src/nova/cmd/manage.py:L2852–L2984` |
| `LibvirtCommands.get_machine_type` | method | (self, instance_uuid=None) | public | `0` (src/nova/cmd/manage.py:L2875); `3` (src/nova/cmd/manage.py:L2879); `2` (src/nova/cmd/manage.py:L2883); `1` (src/nova/cmd/manage.py:L2888) | 4/20 | `src/nova/cmd/manage.py:L2859–L2888` |
| `LibvirtCommands.update_machine_type` | method | (self, instance_uuid=None, machine_type=None, force=False) | public | `5` (src/nova/cmd/manage.py:L2927); `4` (src/nova/cmd/manage.py:L2930); `3` (src/nova/cmd/manage.py:L2933); `2` (src/nova/cmd/manage.py:L2939); `1` (src/nova/cmd/manage.py:L2944); `0` (src/nova/cmd/manage.py:L2951) | 7/38 | `src/nova/cmd/manage.py:L2900–L2951` |
| `LibvirtCommands.list_unset_machine_type` | method | (self, cell_uuid=None) | public | `2` (src/nova/cmd/manage.py:L2972); `1` (src/nova/cmd/manage.py:L2977); `3` (src/nova/cmd/manage.py:L2981); `0` (src/nova/cmd/manage.py:L2984) | 5/18 | `src/nova/cmd/manage.py:L2958–L2984` |
| `VolumeAttachmentCommands` | class | — | exported | not declared | — | `src/nova/cmd/manage.py:L2987–L3276` |
| `VolumeAttachmentCommands.show` | method | (self, instance_uuid=None, volume_id=None, connection_info=False, json=False) | public | `0` (src/nova/cmd/manage.py:L3034); `3` (src/nova/cmd/manage.py:L3037); `2` (src/nova/cmd/manage.py:L3043); `1` (src/nova/cmd/manage.py:L3048) | 8/37 | `src/nova/cmd/manage.py:L3004–L3048` |
| `VolumeAttachmentCommands.get_connector` | method | (self, json=False) | public | `0` (src/nova/cmd/manage.py:L3073); `1` (src/nova/cmd/manage.py:L3078) | 3/18 | `src/nova/cmd/manage.py:L3055–L3078` |
| `VolumeAttachmentCommands._refresh` | method | (self, instance_uuid, volume_id, connector) | private | `self._do_refresh( cctxt, instance, volume_id, bdm, connector)` (src/nova/cmd/manage.py:L3120) | 2/19 | `src/nova/cmd/manage.py:L3080–L3121` |
| `VolumeAttachmentCommands._do_refresh` | method | (self, cctxt, instance, volume_id, bdm, connector) | private | `0` (src/nova/cmd/manage.py:L3173) | 8/48 | `src/nova/cmd/manage.py:L3123–L3202` |
| `VolumeAttachmentCommands.refresh` | method | (self, instance_uuid=None, volume_id=None, connector_path=None) | public | `self._refresh(instance_uuid, volume_id, connector)` (src/nova/cmd/manage.py:L3240); `7` (src/nova/cmd/manage.py:L3247); `6` (src/nova/cmd/manage.py:L3250); `5` (src/nova/cmd/manage.py:L3253); `4` (src/nova/cmd/manage.py:L3259); `3` (src/nova/cmd/manage.py:L3265); `3` (src/nova/cmd/manage.py:L3268); `2` (src/nova/cmd/manage.py:L3271); `1` (src/nova/cmd/manage.py:L3276) | 10/43 | `src/nova/cmd/manage.py:L3215–L3276` |
| `ImagePropertyCommands` | class | — | exported | not declared | — | `src/nova/cmd/manage.py:L3279–L3446` |
| `ImagePropertyCommands.show` | method | (self, instance_uuid=None, image_property=None) | public | `0` (src/nova/cmd/manage.py:L3308); `3` (src/nova/cmd/manage.py:L3312); `2` (src/nova/cmd/manage.py:L3318); `1` (src/nova/cmd/manage.py:L3323) | 4/28 | `src/nova/cmd/manage.py:L3288–L3323` |
| `ImagePropertyCommands._validate_image_properties` | method | (self, image_properties) | private | `image_properties` (src/nova/cmd/manage.py:L3353) | 8/13 | `src/nova/cmd/manage.py:L3325–L3353` |
| `ImagePropertyCommands._update_image_properties` | method | (self, ctxt, instance, image_properties) | private | `0` (src/nova/cmd/manage.py:L3389) | 3/21 | `src/nova/cmd/manage.py:L3355–L3389` |
| `ImagePropertyCommands.set` | method | (self, instance_uuid=None, image_properties=None) | public | `self._update_image_properties( ctxt, instance, image_properties)` (src/nova/cmd/manage.py:L3422); `6` (src/nova/cmd/manage.py:L3426); `5` (src/nova/cmd/manage.py:L3429); `4` (src/nova/cmd/manage.py:L3432); `3` (src/nova/cmd/manage.py:L3435); `2` (src/nova/cmd/manage.py:L3441); `1` (src/nova/cmd/manage.py:L3446) | 7/33 | `src/nova/cmd/manage.py:L3403–L3446` |
| `LimitsCommands` | class | — | exported | not declared | — | `src/nova/cmd/manage.py:L3449–L3789` |
| `LimitsCommands._create_unified_limits` | method | (self, ctxt, keystone_api, service_id, legacy_defaults, project_id, region_id, output, dry_run) | private | `return_code` (src/nova/cmd/manage.py:L3513); `return_code` (src/nova/cmd/manage.py:L3560) | 16/82 | `src/nova/cmd/manage.py:L3451–L3560` |
| `LimitsCommands._get_resources_from_flavor` | method | (flavor, warn_output) | private | `resources` (src/nova/cmd/manage.py:L3578) | 6/14 | `src/nova/cmd/manage.py:L3563–L3578` |
| `LimitsCommands._get_resources_from_api_flavors` | method | (self, ctxt, output, warn_output) | private | `resources` (src/nova/cmd/manage.py:L3594) | 4/15 | `src/nova/cmd/manage.py:L3580–L3594` |
| `LimitsCommands._get_resources_from_embedded_flavors` | method | (self, ctxt, project_id, output, warn_output) | private | `resources, down_cell_uuids` (src/nova/cmd/manage.py:L3619) | 6/24 | `src/nova/cmd/manage.py:L3596–L3619` |
| `LimitsCommands._scan_flavors` | method | (self, ctxt, keystone_api, service_id, project_id, region_id, output, warn_output, verbose, no_embedded_flavor_scan) | private | `return_code` (src/nova/cmd/manage.py:L3687) | 9/51 | `src/nova/cmd/manage.py:L3621–L3687` |
| `LimitsCommands.migrate_to_unified_limits` | method | (self, project_id=None, region_id=None, verbose=False, dry_run=False, quiet=False, no_embedded_flavor_scan=False) | public | `1` (src/nova/cmd/manage.py:L3720); `2` (src/nova/cmd/manage.py:L3743); `result` (src/nova/cmd/manage.py:L3772); `result` (src/nova/cmd/manage.py:L3776); `2` (src/nova/cmd/manage.py:L3783); `1` (src/nova/cmd/manage.py:L3789) | 12/57 | `src/nova/cmd/manage.py:L3707–L3789` |
| `CATEGORIES` | constant | — | exported | not declared | — | `src/nova/cmd/manage.py:L3792–L3801` |
| `add_command_parsers` | variable | — | exported | not declared | — | `src/nova/cmd/manage.py:L3804–L3805` |
| `category_opt` | variable | — | exported | not declared | — | `src/nova/cmd/manage.py:L3808–L3811` |
| `post_mortem_opt` | variable | — | exported | not declared | — | `src/nova/cmd/manage.py:L3813–L3815` |
| `main` | function | — | exported | `0` (src/nova/cmd/manage.py:L3830); `0` (src/nova/cmd/manage.py:L3834); `ret` (src/nova/cmd/manage.py:L3840); `255` (src/nova/cmd/manage.py:L3847) | 5/26 | `src/nova/cmd/manage.py:L3818–L3847` |
| `_at_exit` | function | — | unexported | not declared | 2/4 | `src/nova/cmd/manage.py:L3855–L3858` |
| `PlacementCommands._get_compute_node_uuid` | staticmethod | — | private | not declared | — | `src/nova/cmd/manage.py:L1512–L1530` |
| `PlacementCommands._get_ports` | staticmethod | — | private | not declared | — | `src/nova/cmd/manage.py:L1532–L1551` |
| `PlacementCommands._has_request_but_no_allocation` | staticmethod | — | private | not declared | — | `src/nova/cmd/manage.py:L1553–L1560` |
| `PlacementCommands._merge_allocations` | staticmethod | — | private | not declared | — | `src/nova/cmd/manage.py:L1562–L1584` |
| `PlacementCommands._get_resource_request_from_ports` | staticmethod | — | private | not declared | — | `src/nova/cmd/manage.py:L1586–L1632` |
| `PlacementCommands._get_port_binding_profile_allocation` | staticmethod | — | private | not declared | — | `src/nova/cmd/manage.py:L1634–L1684` |
| `PlacementCommands._rollback_port_updates` | staticmethod | — | private | not declared | — | `src/nova/cmd/manage.py:L1863–L1897` |
| `PlacementCommands.ensure_instance_has_no_vgpu_request` | staticmethod | — | public | not declared | — | `src/nova/cmd/manage.py:L1923–L1927` |
| `PlacementCommands.ensure_instance_has_no_cyborg_device_profile_request` | staticmethod | — | public | not declared | — | `src/nova/cmd/manage.py:L1929–L1933` |
| `PlacementCommands._get_rp_uuid_for_host` | staticmethod | — | private | not declared | — | `src/nova/cmd/manage.py:L2382–L2419` |
| `LimitsCommands._get_resources_from_flavor` | staticmethod | — | private | not declared | — | `src/nova/cmd/manage.py:L3562–L3578` |

## Dependencies

- `nova`: imports `monkey_patch` (src/nova/cmd/manage.py:L24)
- `import atexit` (src/nova/cmd/manage.py:L27)
- `import collections` (src/nova/cmd/manage.py:L28)
- `contextlib`: imports `contextmanager` (src/nova/cmd/manage.py:L29)
- `import functools` (src/nova/cmd/manage.py:L30)
- `import os` (src/nova/cmd/manage.py:L31)
- `import re` (src/nova/cmd/manage.py:L32)
- `import sys` (src/nova/cmd/manage.py:L33)
- `import textwrap` (src/nova/cmd/manage.py:L34)
- `import time` (src/nova/cmd/manage.py:L35)
- `import traceback` (src/nova/cmd/manage.py:L36)
- `import typing as ty` (src/nova/cmd/manage.py:L37)
- `urllib`: imports `parse as urlparse` (src/nova/cmd/manage.py:L38)
- `dateutil`: imports `parser as dateutil_parser` (src/nova/cmd/manage.py:L40)
- `keystoneauth1`: imports `exceptions as ks_exc` (src/nova/cmd/manage.py:L41)
- `neutronclient.common`: imports `exceptions as neutron_client_exc` (src/nova/cmd/manage.py:L42)
- `os_brick.initiator`: imports `connector` (src/nova/cmd/manage.py:L43)
- `import os_resource_classes as orc` (src/nova/cmd/manage.py:L44)
- `oslo_config`: imports `cfg` (src/nova/cmd/manage.py:L45)
- `oslo_db`: imports `exception as db_exc` (src/nova/cmd/manage.py:L46)
- `oslo_log`: imports `log as logging` (src/nova/cmd/manage.py:L47)
- `import oslo_messaging as messaging` (src/nova/cmd/manage.py:L48)
- `oslo_serialization`: imports `jsonutils` (src/nova/cmd/manage.py:L49)
- `oslo_utils`: imports `encodeutils` (src/nova/cmd/manage.py:L50)
- `oslo_utils`: imports `uuidutils` (src/nova/cmd/manage.py:L51)
- `import prettytable` (src/nova/cmd/manage.py:L52)
- `sqlalchemy.engine`: imports `url as sqla_url` (src/nova/cmd/manage.py:L53)
- `nova.cmd`: imports `common as cmd_common` (src/nova/cmd/manage.py:L55)
- `nova.compute`: imports `api` (src/nova/cmd/manage.py:L56)
- `nova.compute`: imports `instance_actions` (src/nova/cmd/manage.py:L57)
- `nova.compute`: imports `instance_list as list_instances` (src/nova/cmd/manage.py:L58)
- `nova.compute`: imports `rpcapi` (src/nova/cmd/manage.py:L59)
- `import nova.conf` (src/nova/cmd/manage.py:L60)
- `nova.conf`: imports `utils as conf_utils` (src/nova/cmd/manage.py:L61)
- `nova`: imports `config` (src/nova/cmd/manage.py:L62)
- `nova`: imports `context` (src/nova/cmd/manage.py:L63)
- `nova.db`: imports `constants as db_const` (src/nova/cmd/manage.py:L64)
- `nova.db.main`: imports `api as db` (src/nova/cmd/manage.py:L65)
- `nova.db`: imports `migration` (src/nova/cmd/manage.py:L66)
- `nova`: imports `exception` (src/nova/cmd/manage.py:L67)
- `nova.i18n`: imports `_` (src/nova/cmd/manage.py:L68)
- `nova.limit`: imports `local as local_limit` (src/nova/cmd/manage.py:L69)
- `nova.limit`: imports `placement as placement_limit` (src/nova/cmd/manage.py:L70)
- `nova.network`: imports `constants` (src/nova/cmd/manage.py:L71)
- `nova.network`: imports `neutron as neutron_api` (src/nova/cmd/manage.py:L72)
- `nova`: imports `objects` (src/nova/cmd/manage.py:L73)
- `nova.objects`: imports `block_device as block_device_obj` (src/nova/cmd/manage.py:L74)
- `nova.objects`: imports `compute_node as compute_node_obj` (src/nova/cmd/manage.py:L75)
- `nova.objects`: imports `fields as obj_fields` (src/nova/cmd/manage.py:L76)
- `nova.objects`: imports `host_mapping as host_mapping_obj` (src/nova/cmd/manage.py:L77)
- `nova.objects`: imports `instance as instance_obj` (src/nova/cmd/manage.py:L78)
- `nova.objects`: imports `instance_mapping as instance_mapping_obj` (src/nova/cmd/manage.py:L79)
- `nova.objects`: imports `pci_device as pci_device_obj` (src/nova/cmd/manage.py:L80)
- `nova.objects`: imports `quotas as quotas_obj` (src/nova/cmd/manage.py:L81)
- `nova.objects`: imports `virtual_interface as virtual_interface_obj` (src/nova/cmd/manage.py:L82)
- `import nova.quota` (src/nova/cmd/manage.py:L83)
- `nova`: imports `rpc` (src/nova/cmd/manage.py:L84)
- `nova.scheduler.client`: imports `report` (src/nova/cmd/manage.py:L85)
- `nova.scheduler`: imports `utils as scheduler_utils` (src/nova/cmd/manage.py:L86)
- `nova`: imports `utils` (src/nova/cmd/manage.py:L87)
- `nova`: imports `version` (src/nova/cmd/manage.py:L88)
- `nova.virt.libvirt`: imports `machine_type_utils` (src/nova/cmd/manage.py:L89)
- `nova.volume`: imports `cinder` (src/nova/cmd/manage.py:L90)
- `import pdb` (src/nova/cmd/manage.py:L3843)
- `import logging` (src/nova/cmd/manage.py:L3857)

## Side Effects

- **network**: from neutronclient.common import exceptions as neutron_client_exc (src/nova/cmd/manage.py:L42)
- **syscall**: enabled/disabled until it is restarted or sent the SIGHUP signal. (src/nova/cmd/manage.py:L1367)
- **syscall**: SIGHUP signal. (src/nova/cmd/manage.py:L1468)
- **network**: neutron = neutron_api.get_client(ctxt, admin=True) (src/nova/cmd/manage.py:L2316)
- **file-io**: if not os.path.exists(connector_path): (src/nova/cmd/manage.py:L3231)
- **file-io**: with open(connector_path, 'rb') as connector_file: (src/nova/cmd/manage.py:L3236)
- **network**: keystone_api = utils.get_sdk_adapter( (src/nova/cmd/manage.py:L3761)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/cmd/manage.py:L92)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/cmd/manage.py:L93)
- **global-mutation**: NOVA_RCS = [orc.VCPU, orc.MEMORY_MB, orc.DISK_GB, orc.VGPU, (src/nova/cmd/manage.py:L2660)
- **global-mutation**: CATEGORIES = { (src/nova/cmd/manage.py:L3792)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as ks_exc (src/nova/cmd/manage.py:L41)
- **sink** (`db-write`): _UPDATE = 'update' (src/nova/cmd/manage.py:L108)
- **sink** (`file-write`): sys.stdout.write(_('Archiving') + '..')  # noqa (src/nova/cmd/manage.py:L342)
- **sink** (`file-write`): sys.stdout.write('.') (src/nova/cmd/manage.py:L505)
- **sink** (`db-write`): required=True, help=_('The uuid of the cell to update.')) (src/nova/cmd/manage.py:L1332)
- **sink** (`db-write`): print(_('Unable to update CellMapping: %s') % e) (src/nova/cmd/manage.py:L1417)
- **sink** (`db-write`): f'information to select the proper candidate to heal the' (src/nova/cmd/manage.py:L1800)
- **sink** (`db-write`): output(_('Rolling back port update for %(port_uuid)s') % (src/nova/cmd/manage.py:L1878)
- **sink** (`db-write`): _('Rolling back update for port %(port_uuid)s failed: ' (src/nova/cmd/manage.py:L1883)
- **sink** (`db-write`): :raises: AllocationUpdateFailed if unable to update allocations for (src/nova/cmd/manage.py:L1962)
- **sink** (`db-write`): :raise UnableToUpdatePorts: if a port update failed in neutron but any (src/nova/cmd/manage.py:L1966)
- **sink** (`db-write`): partial update was rolled back successfully. (src/nova/cmd/manage.py:L1967)
- **sink** (`db-write`): :raise UnableToRollbackPortUpdates: if a port update failed in neutron (src/nova/cmd/manage.py:L1968)
- **sink** (`db-write`): output(_('[dry-run] Update allocations for instance ' (src/nova/cmd/manage.py:L2048)
- **sink** (`db-write`): :raises: AllocationUpdateFailed if unable to update allocations for (src/nova/cmd/manage.py:L2118)
- **sink** (`db-write`): :raise UnableToUpdatePorts: if a port update failed in neutron but any (src/nova/cmd/manage.py:L2122)
- **sink** (`db-write`): partial update was rolled back successfully. (src/nova/cmd/manage.py:L2123)
- **sink** (`db-write`): :raise UnableToRollbackPortUpdates: if a port update failed in neutron (src/nova/cmd/manage.py:L2124)
- **sink** (`db-write`): * 3: Unable to create (or update) allocations for an instance against (src/nova/cmd/manage.py:L2226)
- **sink** (`db-write`): * 6: Unable to update ports in neutron (src/nova/cmd/manage.py:L2230)
- **privilege** (`crypto-key`): :raises: keystoneauth1.exceptions.base.ClientException on failure to (src/nova/cmd/manage.py:L2748)
- **privilege** (`crypto-key`): :raises: keystoneauth1.exceptions.base.ClientException on failure to (src/nova/cmd/manage.py:L2767)
- **sink** (`db-write`): _("Set or update the stored machine type of the instance in the " (src/nova/cmd/manage.py:L2891)
- **sink** (`db-write`): help='UUID of instance to update') (src/nova/cmd/manage.py:L2895)
- **sink** (`db-write`): help='Force the update of the stored machine type') (src/nova/cmd/manage.py:L2899)
- **sink** (`db-write`): """Set or update the machine type of a given instance. (src/nova/cmd/manage.py:L2906)
- **sink** (`db-write`): print(_("Forcing update of machine type.")) (src/nova/cmd/manage.py:L2920)
- **sink** (`db-write`): """Update instance image properties (src/nova/cmd/manage.py:L3356)
- **sink** (`db-write`): :param instance: The instance to update (src/nova/cmd/manage.py:L3359)
- **sink** (`db-write`): :param image_properties: List of image properties and values to update (src/nova/cmd/manage.py:L3360)
- **entry-point** (`cli-args`): config.parse_args(sys.argv) (src/nova/cmd/manage.py:L3821)

