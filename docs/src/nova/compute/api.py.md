# src/nova/compute/api.py

## Overview

This file implements the `api` module, defining 5 classs, 24 constants, 2 fields, 56 functions, 207 methods, 2 propertys, 20 staticmethods, 1 variable, 67 imports, 30 side effects, 22 security surface entries.

Lines: total 7124, code 5092, comment 1165, blank 867

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/compute/api.py:L92–L92` |
| `wrap_exception` | variable | — | exported | not declared | — | `src/nova/compute/api.py:L99–L100` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/compute/api.py:L101–L101` |
| `AGGREGATE_ACTION_UPDATE` | constant | — | exported | not declared | — | `src/nova/compute/api.py:L103–L103` |
| `AGGREGATE_ACTION_UPDATE_META` | constant | — | exported | not declared | — | `src/nova/compute/api.py:L104–L104` |
| `AGGREGATE_ACTION_DELETE` | constant | — | exported | not declared | — | `src/nova/compute/api.py:L105–L105` |
| `AGGREGATE_ACTION_ADD` | constant | — | exported | not declared | — | `src/nova/compute/api.py:L106–L106` |
| `MIN_COMPUTE_SYNC_COMPUTE_STATUS_DISABLED` | constant | — | exported | not declared | — | `src/nova/compute/api.py:L108–L108` |
| `MIN_COMPUTE_CROSS_CELL_RESIZE` | constant | — | exported | not declared | — | `src/nova/compute/api.py:L109–L109` |
| `MIN_COMPUTE_SAME_HOST_COLD_MIGRATE` | constant | — | exported | not declared | — | `src/nova/compute/api.py:L110–L110` |
| `MIN_VER_NOVA_COMPUTE_MIXED_POLICY` | constant | — | exported | not declared | — | `src/nova/compute/api.py:L113–L113` |
| `SUPPORT_ACCELERATOR_SERVICE_FOR_REBUILD` | constant | — | exported | not declared | — | `src/nova/compute/api.py:L115–L115` |
| `SUPPORT_VNIC_TYPE_ACCELERATOR` | constant | — | exported | not declared | — | `src/nova/compute/api.py:L117–L117` |
| `MIN_COMPUTE_BOOT_WITH_EXTENDED_RESOURCE_REQUEST` | constant | — | exported | not declared | — | `src/nova/compute/api.py:L119–L119` |
| `MIN_COMPUTE_MOVE_WITH_EXTENDED_RESOURCE_REQUEST` | constant | — | exported | not declared | — | `src/nova/compute/api.py:L120–L120` |
| `MIN_COMPUTE_INT_ATTACH_WITH_EXTENDED_RES_REQ` | constant | — | exported | not declared | — | `src/nova/compute/api.py:L121–L121` |
| `SUPPORT_VNIC_TYPE_REMOTE_MANAGED` | constant | — | exported | not declared | — | `src/nova/compute/api.py:L123–L123` |
| `MIN_COMPUTE_VDPA_ATTACH_DETACH` | constant | — | exported | not declared | — | `src/nova/compute/api.py:L124–L124` |
| `MIN_COMPUTE_VDPA_HOTPLUG_LIVE_MIGRATION` | constant | — | exported | not declared | — | `src/nova/compute/api.py:L125–L125` |
| `SUPPORT_SHARES` | constant | — | exported | not declared | — | `src/nova/compute/api.py:L127–L127` |
| `MIN_COMPUTE_SOUND_MODEL_TRAITS` | constant | — | exported | not declared | — | `src/nova/compute/api.py:L129–L129` |
| `MIN_COMPUTE_USB_MODEL_TRAITS` | constant | — | exported | not declared | — | `src/nova/compute/api.py:L130–L130` |
| `MIN_COMPUTE_VTPM_LIVE_MIGRATION` | constant | — | exported | not declared | — | `src/nova/compute/api.py:L132–L132` |
| `MIN_COMPUTE_COLD_MIGRATE_WITH_SHARES` | constant | — | exported | not declared | — | `src/nova/compute/api.py:L134–L134` |
| `CELLS` | constant | — | exported | not declared | — | `src/nova/compute/api.py:L139–L139` |
| `check_instance_state` | function | (vm_state=None, task_state=(None,), must_have_launched=True) | exported | `outer` (src/nova/compute/api.py:L180) | 1/2 | `src/nova/compute/api.py:L142–L180` |
| `check_instance_state.outer` | function | (f) | public | `inner` (src/nova/compute/api.py:L179) | 1/4 | `src/nova/compute/api.py:L155–L179` |
| `check_instance_state.outer.inner` | function | (self, context, instance, *args, **kw) | public | `f(self, context, instance, *args, **kw)` (src/nova/compute/api.py:L178) | — | `src/nova/compute/api.py:L157–L178` |
| `_set_or_none` | function | (q) | unexported | `q if q is None or isinstance(q, set) else set(q)` (src/nova/compute/api.py:L184) | 3/2 | `src/nova/compute/api.py:L183–L184` |
| `reject_instance_state` | function | (vm_state=None, task_state=None) | exported | `outer` (src/nova/compute/api.py:L213) | 1/5 | `src/nova/compute/api.py:L187–L213` |
| `reject_instance_state.outer` | function | (f) | public | `inner` (src/nova/compute/api.py:L212) | — | `src/nova/compute/api.py:L195–L212` |
| `reject_instance_state.outer.inner` | function | (self, context, instance, *args, **kw) | public | `f(self, context, instance, *args, **kw)` (src/nova/compute/api.py:L211) | — | `src/nova/compute/api.py:L197–L211` |
| `check_instance_host` | function | (check_is_up=False) | exported | `outer` (src/nova/compute/api.py:L244) | 1/3 | `src/nova/compute/api.py:L216–L244` |
| `check_instance_host.outer` | function | (function) | public | `wrapped` (src/nova/compute/api.py:L243) | — | `src/nova/compute/api.py:L227–L243` |
| `check_instance_host.outer.wrapped` | function | (self, context, instance, *args, **kwargs) | public | `function(self, context, instance, *args, **kwargs)` (src/nova/compute/api.py:L242) | — | `src/nova/compute/api.py:L229–L242` |
| `check_instance_lock` | function | (function) | exported | `inner` (src/nova/compute/api.py:L253) | 1/4 | `src/nova/compute/api.py:L247–L253` |
| `check_instance_lock.inner` | function | (self, context, instance, *args, **kwargs) | public | `function(self, context, instance, *args, **kwargs)` (src/nova/compute/api.py:L252) | — | `src/nova/compute/api.py:L249–L252` |
| `reject_mem_enc_instances` | function | (operation) | exported | `outer` (src/nova/compute/api.py:L274) | 1/3 | `src/nova/compute/api.py:L256–L274` |
| `reject_mem_enc_instances.outer` | function | (f) | public | `inner` (src/nova/compute/api.py:L273) | — | `src/nova/compute/api.py:L264–L273` |
| `reject_mem_enc_instances.outer.inner` | function | (self, context, instance, *args, **kw) | public | `f(self, context, instance, *args, **kw)` (src/nova/compute/api.py:L272) | — | `src/nova/compute/api.py:L266–L272` |
| `reject_legacy_vtpm_live_migration` | function | (function) | exported | `inner` (src/nova/compute/api.py:L300) | 1/4 | `src/nova/compute/api.py:L277–L300` |
| `reject_legacy_vtpm_live_migration.inner` | function | (self, context, instance, *args, **kwargs) | public | `function(self, context, instance, *args, **kwargs)` (src/nova/compute/api.py:L299) | — | `src/nova/compute/api.py:L280–L299` |
| `reject_vtpm_instances` | function | (operation) | exported | `outer` (src/nova/compute/api.py:L319) | 1/3 | `src/nova/compute/api.py:L303–L319` |
| `reject_vtpm_instances.outer` | function | (f) | public | `inner` (src/nova/compute/api.py:L318) | — | `src/nova/compute/api.py:L309–L318` |
| `reject_vtpm_instances.outer.inner` | function | (self, context, instance, *args, **kw) | public | `f(self, context, instance, *args, **kw)` (src/nova/compute/api.py:L317) | — | `src/nova/compute/api.py:L311–L317` |
| `reject_vdpa_instances` | function | (operation, until=None) | exported | `outer` (src/nova/compute/api.py:L350) | 1/3 | `src/nova/compute/api.py:L322–L350` |
| `reject_vdpa_instances.outer` | function | (f) | public | `inner` (src/nova/compute/api.py:L349) | — | `src/nova/compute/api.py:L329–L349` |
| `reject_vdpa_instances.outer.inner` | function | (self, context, instance, *args, **kw) | public | `f(self, context, instance, *args, **kw)` (src/nova/compute/api.py:L348) | — | `src/nova/compute/api.py:L331–L348` |
| `load_cells` | function | — | exported | not declared | 4/10 | `src/nova/compute/api.py:L353–L363` |
| `_get_image_meta_obj` | function | (image_meta_dict) | unexported | `image_meta` (src/nova/compute/api.py:L374) | 2/7 | `src/nova/compute/api.py:L366–L374` |
| `block_accelerators` | function | (until_service=None) | exported | `inner` (src/nova/compute/api.py:L397) | 1/3 | `src/nova/compute/api.py:L377–L397` |
| `block_accelerators.inner` | function | (func) | public | `wrapper` (src/nova/compute/api.py:L396) | — | `src/nova/compute/api.py:L378–L396` |
| `block_accelerators.inner.wrapper` | function | (self, context, instance, *args, **kwargs) | public | `func(self, context, instance, *args, **kwargs)` (src/nova/compute/api.py:L395) | — | `src/nova/compute/api.py:L380–L395` |
| `block_port_accelerators` | function | — | exported | `inner` (src/nova/compute/api.py:L414) | 1/3 | `src/nova/compute/api.py:L400–L414` |
| `block_port_accelerators.inner` | function | (func) | public | `wrapper` (src/nova/compute/api.py:L413) | — | `src/nova/compute/api.py:L401–L413` |
| `block_port_accelerators.inner.wrapper` | function | (self, context, instance, *args, **kwargs) | public | `func(self, context, instance, *args, **kwargs)` (src/nova/compute/api.py:L412) | — | `src/nova/compute/api.py:L403–L412` |
| `block_shares_not_supported` | function | — | exported | `inner` (src/nova/compute/api.py:L428) | 1/3 | `src/nova/compute/api.py:L417–L428` |
| `block_shares_not_supported.inner` | function | (func) | public | `wrapper` (src/nova/compute/api.py:L427) | — | `src/nova/compute/api.py:L420–L427` |
| `block_shares_not_supported.inner.wrapper` | function | (self, context, instance, *args, **kwargs) | public | `func(self, context, instance, *args, **kwargs)` (src/nova/compute/api.py:L426) | — | `src/nova/compute/api.py:L422–L426` |
| `instance_has_share` | function | (context, instance) | exported | `db_shares` (src/nova/compute/api.py:L439) | 1/9 | `src/nova/compute/api.py:L431–L439` |
| `block_extended_resource_request` | function | (function) | exported | `inner` (src/nova/compute/api.py:L453) | 1/4 | `src/nova/compute/api.py:L442–L453` |
| `block_extended_resource_request.inner` | function | (self, context, instance, *args, **kwargs) | public | `function(self, context, instance, *args, **kwargs)` (src/nova/compute/api.py:L452) | — | `src/nova/compute/api.py:L444–L452` |
| `API` | class | — | exported | not declared | — | `src/nova/compute/api.py:L457–L6103` |
| `API._sentinel` | field | — | private | not declared | — | `src/nova/compute/api.py:L460–L460` |
| `API.__init__` | method | (self, image_api=None, network_api=None, volume_api=None) | public | not declared | 5/12 | `src/nova/compute/api.py:L462–L474` |
| `API._record_action_start` | method | (self, context, instance, action) | private | not declared | 1/3 | `src/nova/compute/api.py:L476–L478` |
| `API._check_injected_file_quota` | method | (self, context, injected_files) | private | `` (src/nova/compute/api.py:L486) | 9/36 | `src/nova/compute/api.py:L480–L529` |
| `API._check_metadata_properties_quota` | method | (self, context, metadata=None) | private | `` (src/nova/compute/api.py:L534) | 9/28 | `src/nova/compute/api.py:L531–L566` |
| `API._check_requested_secgroups` | method | (self, context, secgroups) | private | `security_groups` (src/nova/compute/api.py:L588) | 3/9 | `src/nova/compute/api.py:L568–L588` |
| `API._check_requested_networks` | method | (self, context, requested_networks, max_count) | private | `max_count` (src/nova/compute/api.py:L601); `self.network_api.validate_networks(context, requested_networks, max_count)` (src/nova/compute/api.py:L606) | 3/8 | `src/nova/compute/api.py:L590–L607` |
| `API._handle_kernel_and_ramdisk` | method | (self, context, kernel_id, ramdisk_id, image) | private | `kernel_id, ramdisk_id` (src/nova/compute/api.py:L652) | 6/17 | `src/nova/compute/api.py:L609–L652` |
| `API.parse_availability_zone` | method | (context, availability_zone) | public | `availability_zone, forced_host, forced_node` (src/nova/compute/api.py:L682) | 7/20 | `src/nova/compute/api.py:L655–L682` |
| `API._ensure_auto_disk_config_is_valid` | method | (self, auto_disk_config_img, auto_disk_config, image) | private | not declared | 3/6 | `src/nova/compute/api.py:L684–L689` |
| `API._inherit_properties_from_image` | method | (self, image, auto_disk_config) | private | `{ 'os_type': image_properties.get('os_type'), 'architecture': image_properties.get('architecture'), 'vm_mode': image_properties.get('vm_mode'), 'auto_disk_config': auto_disk_config }` (src/nova/compute/api.py:L701) | 2/15 | `src/nova/compute/api.py:L691–L706` |
| `API._check_config_drive` | method | (self, config_drive) | private | `True if bool_val else ''` (src/nova/compute/api.py:L721) | 4/10 | `src/nova/compute/api.py:L708–L721` |
| `API._validate_flavor_image` | method | (self, context, image_id, image, flavor, root_bdm, validate_numa=True) | private | not declared | 3/7 | `src/nova/compute/api.py:L723–L748` |
| `API._detect_nonbootable_image_from_properties` | method | (image_id, image) | private | `` (src/nova/compute/api.py:L766) | 4/9 | `src/nova/compute/api.py:L751–L778` |
| `API._validate_flavor_image_nostatus` | method | (context, image, flavor, root_bdm, validate_numa=True, validate_pci=False) | private | `` (src/nova/compute/api.py:L805) | 15/40 | `src/nova/compute/api.py:L781–L898` |
| `API._check_compute_service_for_mixed_instance` | method | (numa_topology, min_comp_ver) | private | `` (src/nova/compute/api.py:L909); `` (src/nova/compute/api.py:L913) | 4/7 | `src/nova/compute/api.py:L903–L918` |
| `API._validate_flavor_image_numa_pci` | method | (image, flavor, validate_numa=True, validate_pci=False) | private | not declared | 3/14 | `src/nova/compute/api.py:L921–L953` |
| `API._get_image_defined_bdms` | method | (self, flavor, image_meta, root_device_name) | private | `image_defined_bdms` (src/nova/compute/api.py:L976) | 3/16 | `src/nova/compute/api.py:L955–L976` |
| `API._get_flavor_defined_bdms` | method | (self, flavor, block_device_mapping) | private | `flavor_defined_bdms` (src/nova/compute/api.py:L993) | 5/13 | `src/nova/compute/api.py:L978–L993` |
| `API._merge_bdms_lists` | method | (self, overridable_mappings, overrider_mappings) | private | `(overrider_mappings + [bdm for bdm in overridable_mappings if bdm['device_name'] not in device_names])` (src/nova/compute/api.py:L1005) | 5/6 | `src/nova/compute/api.py:L995–L1007` |
| `API._check_and_transform_bdm` | method | (self, context, base_options, flavor, image_meta, min_count, max_count, block_device_mapping, legacy_bdm) | private | `block_device_obj.block_device_make_list_from_dicts( context, block_device_mapping)` (src/nova/compute/api.py:L1067) | 11/38 | `src/nova/compute/api.py:L1009–L1068` |
| `API._check_and_transform_bdm.not_image_and_root_bdm` | function | (bdm) | public | `not (bdm.get('boot_index') == 0 and bdm.get('source_type') == 'image')` (src/nova/compute/api.py:L1048) | — | `src/nova/compute/api.py:L1047–L1049` |
| `API._get_image` | method | (self, context, image_href) | private | `None, {}` (src/nova/compute/api.py:L1072); `image['id'], image` (src/nova/compute/api.py:L1075) | 2/5 | `src/nova/compute/api.py:L1070–L1075` |
| `API._checks_for_create_and_rebuild` | method | (self, context, image_id, image, flavor, metadata, files_to_inject, root_bdm, min_comp_ver, validate_numa=True) | private | not declared | 3/14 | `src/nova/compute/api.py:L1077–L1092` |
| `API._check_support_vnic_accelerator` | method | (self, context, requested_networks, min_comp_ver) | private | not declared | 5/9 | `src/nova/compute/api.py:L1094–L1102` |
| `API._check_vnic_remote_managed_min_version` | method | (self, context) | private | not declared | 2/7 | `src/nova/compute/api.py:L1104–L1110` |
| `API._check_support_vnic_remote_managed` | method | (self, context, requested_networks) | private | not declared | 5/7 | `src/nova/compute/api.py:L1112–L1118` |
| `API._validate_and_build_base_options` | method | (self, context, flavor, boot_meta, image_href, image_id, kernel_id, ramdisk_id, display_name, display_description, hostname, key_name, key_data, security_groups, availability_zone, user_data, metadata, access_ip_v4, access_ip_v6, requested_networks, config_drive, auto_disk_config, reservation_id, max_count, supports_port_resource_request, min_comp_ver) | private | `(base_options, max_network_count, key_pair, security_groups, network_metadata)` (src/nova/compute/api.py:L1251) | 14/92 | `src/nova/compute/api.py:L1120–L1252` |
| `API._create_reqspec_buildreq_instmapping` | method | (context, rs, br, im) | private | not declared | 1/4 | `src/nova/compute/api.py:L1256–L1266` |
| `API._validate_host_or_node` | method | (self, context, host, hypervisor_hostname) | private | not declared | 6/19 | `src/nova/compute/api.py:L1268–L1308` |
| `API._get_volumes_for_bdms` | method | (self, context, bdms) | private | `volumes` (src/nova/compute/api.py:L1328) | 3/7 | `src/nova/compute/api.py:L1310–L1328` |
| `API._validate_vol_az_for_create` | method | (instance_az, volumes) | private | `` (src/nova/compute/api.py:L1360); `` (src/nova/compute/api.py:L1363); `volume_az` (src/nova/compute/api.py:L1397); `` (src/nova/compute/api.py:L1399) | 8/21 | `src/nova/compute/api.py:L1331–L1406` |
| `API._enforce_create_unified_limits` | method | (self, context, flavor, is_bfv, port_resource_requests, dp_request_groups, min_count, num_instances) | private | `num_instances` (src/nova/compute/api.py:L1413); `placement_limits.enforce_num_instances_and_resources( context, context.project_id, req_spec, min_count, num_instances)` (src/nova/compute/api.py:L1417) | 2/10 | `src/nova/compute/api.py:L1408–L1418` |
| `API._provision_instances` | method | (self, context, flavor, min_count, max_count, base_options, boot_meta, security_groups, block_device_mapping, instance_group, check_server_group_quota, filter_properties, key_pair, tags, trusted_certs, supports_multiattach, network_metadata=None, requested_host=None, requested_hypervisor_hostname=None) | private | `instances_to_build` (src/nova/compute/api.py:L1627) | 22/139 | `src/nova/compute/api.py:L1420–L1627` |
| `API._retrieve_trusted_certs_object` | method | (context, trusted_certs, rebuild=False) | private | `None` (src/nova/compute/api.py:L1655); `certs_to_return` (src/nova/compute/api.py:L1657) | 5/11 | `src/nova/compute/api.py:L1630–L1657` |
| `API._get_requested_instance_group` | method | (context, filter_properties) | private | `` (src/nova/compute/api.py:L1663); `` (src/nova/compute/api.py:L1667); `objects.InstanceGroup.get_by_uuid(context, group_hint)` (src/nova/compute/api.py:L1669) | 4/8 | `src/nova/compute/api.py:L1660–L1669` |
| `API._update_ephemeral_encryption_bdms` | method | (self, flavor, image_meta_dict, block_device_mapping) | private | `` (src/nova/compute/api.py:L1690) | 6/16 | `src/nova/compute/api.py:L1671–L1705` |
| `API._create_instance` | method | (self, context, flavor, image_href, kernel_id, ramdisk_id, min_count, max_count, display_name, display_description, hostname, key_name, key_data, security_groups, availability_zone, user_data, metadata, injected_files, admin_password, access_ip_v4, access_ip_v6, requested_networks, config_drive, block_device_mapping, auto_disk_config, filter_properties, reservation_id=None, legacy_bdm=True, check_server_group_quota=False, tags=None, supports_multiattach=False, trusted_certs=None, supports_port_resource_request=False, requested_host=None, requested_hypervisor_hostname=None) | private | `instances, reservation_id` (src/nova/compute/api.py:L1847) | 16/102 | `src/nova/compute/api.py:L1707–L1847` |
| `API._cleanup_build_artifacts` | method | (instances, instances_to_build) | private | not declared | 9/19 | `src/nova/compute/api.py:L1850–L1872` |
| `API._volume_size` | method | (flavor, bdm) | private | `size` (src/nova/compute/api.py:L1884) | 5/9 | `src/nova/compute/api.py:L1875–L1884` |
| `API._prepare_image_mapping` | method | (self, flavor, mappings) | private | `prepared_mappings` (src/nova/compute/api.py:L1923) | 8/28 | `src/nova/compute/api.py:L1886–L1923` |
| `API._bdm_validate_set_size_and_instance` | method | (self, context, instance, flavor, block_device_mapping, image_cache, volumes, supports_multiattach=False) | private | `instance_block_device_mapping` (src/nova/compute/api.py:L1955) | 2/15 | `src/nova/compute/api.py:L1925–L1955` |
| `API._check_requested_volume_type` | method | (bdm, volume_type_id_or_name, volume_types) | private | not declared | 4/10 | `src/nova/compute/api.py:L1958–L1975` |
| `API._validate_bdm` | method | (self, context, instance, flavor, block_device_mappings, image_cache, volumes, supports_multiattach=False) | private | not declared | 43/92 | `src/nova/compute/api.py:L1977–L2111` |
| `API._populate_instance_names` | method | (self, instance, num_instances, index) | private | not declared | 8/12 | `src/nova/compute/api.py:L2113–L2141` |
| `API._populate_instance_for_create` | method | (self, context, instance, image, index, security_groups, flavor, num_instances) | private | `instance` (src/nova/compute/api.py:L2199) | 4/36 | `src/nova/compute/api.py:L2143–L2199` |
| `API._create_tag_list_obj` | method | (self, context, tags) | private | `tag_list_obj` (src/nova/compute/api.py:L2210) | 2/4 | `src/nova/compute/api.py:L2201–L2210` |
| `API._transform_tags` | method | (self, tags, resource_id) | private | `instance_tags` (src/nova/compute/api.py:L2226) | 2/5 | `src/nova/compute/api.py:L2212–L2226` |
| `API._check_multiple_instances_with_neutron_ports` | method | (self, requested_networks) | private | not declared | 3/7 | `src/nova/compute/api.py:L2228–L2235` |
| `API._check_multiple_instances_with_specified_ip` | method | (self, requested_networks) | private | not declared | 4/6 | `src/nova/compute/api.py:L2237–L2244` |
| `API.create` | method | (self, context, flavor, image_href, kernel_id=None, ramdisk_id=None, min_count=None, max_count=None, display_name=None, display_description=None, hostname=None, key_name=None, key_data=None, security_groups=None, availability_zone=None, forced_host=None, forced_node=None, user_data=None, metadata=None, injected_files=None, admin_password=None, block_device_mapping=None, access_ip_v4=None, access_ip_v6=None, requested_networks=None, config_drive=None, auto_disk_config=None, scheduler_hints=None, legacy_bdm=True, check_server_group_quota=False, tags=None, supports_multiattach=False, trusted_certs=None, supports_port_resource_request=False, requested_host=None, requested_hypervisor_hostname=None) | public | `self._create_instance( context, flavor, image_href, kernel_id, ramdisk_id, min_count, max_count, display_name, display_description, hostname, key_name, key_data, security_groups, availability_zone, us` (src/nova/compute/api.py:L2292) | 13/54 | `src/nova/compute/api.py:L2246–L2310` |
| `API._check_auto_disk_config` | method | (self, instance=None, image=None, auto_disk_config=None) | private | `` (src/nova/compute/api.py:L2315); `` (src/nova/compute/api.py:L2317) | 5/19 | `src/nova/compute/api.py:L2312–L2332` |
| `API._lookup_instance` | method | (self, context, uuid) | private | `None, None` (src/nova/compute/api.py:L2369); `None, None` (src/nova/compute/api.py:L2379); `cell, instance` (src/nova/compute/api.py:L2380) | 6/21 | `src/nova/compute/api.py:L2334–L2380` |
| `API._delete_while_booting` | method | (self, context, instance) | private | `True` (src/nova/compute/api.py:L2424); `False` (src/nova/compute/api.py:L2425) | 5/18 | `src/nova/compute/api.py:L2382–L2425` |
| `API._local_delete_cleanup` | method | (self, context, instance_uuid) | private | not declared | 3/13 | `src/nova/compute/api.py:L2427–L2442` |
| `API._attempt_delete_of_buildrequest` | method | (self, context, instance) | private | `False` (src/nova/compute/api.py:L2456); `True` (src/nova/compute/api.py:L2462) | 2/10 | `src/nova/compute/api.py:L2444–L2462` |
| `API._delete` | method | (self, context, instance, delete_type, cb, **instance_attrs) | private | `` (src/nova/compute/api.py:L2467); `` (src/nova/compute/api.py:L2486); `` (src/nova/compute/api.py:L2515); `` (src/nova/compute/api.py:L2519); `` (src/nova/compute/api.py:L2532); `` (src/nova/compute/api.py:L2576); `` (src/nova/compute/api.py:L2614); `` (src/nova/compute/api.py:L2638) | 29/121 | `src/nova/compute/api.py:L2464–L2649` |
| `API._confirm_resize_on_deleting` | method | (self, context, instance) | private | `` (src/nova/compute/api.py:L2673) | 5/26 | `src/nova/compute/api.py:L2651–L2685` |
| `API._local_cleanup_bdm_volumes` | method | (self, bdms, instance, context) | private | not declared | 8/28 | `src/nova/compute/api.py:L2687–L2725` |
| `API.placementclient` | method | (self) | public | `report.report_client_singleton()` (src/nova/compute/api.py:L2729) | 1/2 | `src/nova/compute/api.py:L2728–L2729` |
| `API._local_delete` | method | (self, context, instance, bdms, delete_type, cb) | private | not declared | 3/19 | `src/nova/compute/api.py:L2731–L2757` |
| `API._update_queued_for_deletion` | method | (context, instance_uuid, qfd) | private | not declared | 1/5 | `src/nova/compute/api.py:L2760–L2771` |
| `API._do_delete` | method | (self, context, instance, bdms, local=False) | private | not declared | 2/9 | `src/nova/compute/api.py:L2773–L2781` |
| `API._do_soft_delete` | method | (self, context, instance, bdms, local=False) | private | not declared | 2/9 | `src/nova/compute/api.py:L2783–L2791` |
| `API.soft_delete` | method | (self, context, instance) | public | not declared | 1/6 | `src/nova/compute/api.py:L2797–L2804` |
| `API._delete_instance` | method | (self, context, instance) | private | not declared | 1/3 | `src/nova/compute/api.py:L2806–L2808` |
| `API.delete` | method | (self, context, instance) | public | not declared | 1/3 | `src/nova/compute/api.py:L2813–L2816` |
| `API.restore` | method | (self, context, instance) | public | not declared | 2/21 | `src/nova/compute/api.py:L2820–L2848` |
| `API.force_delete` | method | (self, context, instance) | public | not declared | 1/3 | `src/nova/compute/api.py:L2853–L2856` |
| `API.force_stop` | method | (self, context, instance, do_cast=True, clean_shutdown=True) | public | not declared | 1/8 | `src/nova/compute/api.py:L2858–L2868` |
| `API.stop` | method | (self, context, instance, do_cast=True, clean_shutdown=True) | public | not declared | 1/2 | `src/nova/compute/api.py:L2873–L2875` |
| `API.start` | method | (self, context, instance) | public | not declared | 1/6 | `src/nova/compute/api.py:L2880–L2888` |
| `API.trigger_crash_dump` | method | (self, context, instance) | public | not declared | 1/5 | `src/nova/compute/api.py:L2893–L2900` |
| `API._generate_minimal_construct_for_down_cells` | method | (self, context, down_cell_uuids, project, limit) | private | `unavailable_servers` (src/nova/compute/api.py:L2937) | 5/25 | `src/nova/compute/api.py:L2902–L2937` |
| `API._get_instance_map_or_none` | method | (self, context, instance_uuid) | private | `inst_map` (src/nova/compute/api.py:L2948) | 2/7 | `src/nova/compute/api.py:L2939–L2948` |
| `API._save_user_id_in_instance_mapping` | method | (mapping, instance) | private | not declared | 3/4 | `src/nova/compute/api.py:L2951–L2960` |
| `API._get_instance_from_cell` | method | (self, context, im, expected_attrs, cell_down_support) | private | `inst` (src/nova/compute/api.py:L2977); `inst` (src/nova/compute/api.py:L3006) | 9/43 | `src/nova/compute/api.py:L2962–L3016` |
| `API._get_instance` | method | (self, context, instance_uuid, expected_attrs, cell_down_support=False) | private | `instance` (src/nova/compute/api.py:L3052) | 8/22 | `src/nova/compute/api.py:L3018–L3052` |
| `API.get` | method | (self, context, instance_id, expected_attrs=None, cell_down_support=False) | public | `instance` (src/nova/compute/api.py:L3084) | 4/19 | `src/nova/compute/api.py:L3054–L3084` |
| `API.get_all` | method | (self, context, search_opts=None, limit=None, marker=None, expected_attrs=None, sort_keys=None, sort_dirs=None, cell_down_support=False, all_tenants=False) | public | `objects.InstanceList()` (src/nova/compute/api.py:L3158); `objects.InstanceList()` (src/nova/compute/api.py:L3194); `(self._generate_minimal_construct_for_down_cells(context, down_cell_uuids, project, limit) + instances)` (src/nova/compute/api.py:L3289); `instances` (src/nova/compute/api.py:L3292) | 25/87 | `src/nova/compute/api.py:L3086–L3292` |
| `API.get_all._remap_flavor_filter` | function | (flavor_id) | private | not declared | — | `src/nova/compute/api.py:L3119–L3121` |
| `API.get_all._remap_fixed_ip_filter` | function | (fixed_ip) | private | not declared | — | `src/nova/compute/api.py:L3123–L3126` |
| `API.get_all._get_unique_filter_method` | function | — | private | `_filter` (src/nova/compute/api.py:L3263) | — | `src/nova/compute/api.py:L3237–L3263` |
| `API.get_all._get_unique_filter_method._filter` | function | (instance) | private | `False` (src/nova/compute/api.py:L3259); `True` (src/nova/compute/api.py:L3261) | — | `src/nova/compute/api.py:L3240–L3261` |
| `API._ip_filter` | method | (inst_models, filters, limit) | private | `objects.InstanceList(objects=result_objs)` (src/nova/compute/api.py:L3318) | 5/11 | `src/nova/compute/api.py:L3295–L3318` |
| `API._ip_filter._match_instance` | function | (instance) | private | `True` (src/nova/compute/api.py:L3309); `False` (src/nova/compute/api.py:L3310) | — | `src/nova/compute/api.py:L3299–L3310` |
| `API._ip_filter_using_neutron` | method | (self, context, filters) | private | `uuids` (src/nova/compute/api.py:L3338) | 5/19 | `src/nova/compute/api.py:L3320–L3338` |
| `API.update_instance` | method | (self, context, instance, updates) | public | `instance` (src/nova/compute/api.py:L3400) | 5/29 | `src/nova/compute/api.py:L3340–L3400` |
| `API.backup` | method | (self, context, instance, name, backup_type, rotation, extra_properties=None) | public | `image_meta` (src/nova/compute/api.py:L3441) | 2/21 | `src/nova/compute/api.py:L3406–L3441` |
| `API.snapshot` | method | (self, context, instance, name, extra_properties=None) | public | `image_meta` (src/nova/compute/api.py:L3498) | 5/38 | `src/nova/compute/api.py:L3447–L3498` |
| `API.snapshot_volume_backed` | method | (self, context, instance, name, extra_properties=None) | public | `self.image_api.create(context, image_meta)` (src/nova/compute/api.py:L3641) | 17/75 | `src/nova/compute/api.py:L3504–L3641` |
| `API.snapshot_volume_backed.snapshot_instance` | function | (self, context, instance, bdms) | public | `mapping` (src/nova/compute/api.py:L3615) | — | `src/nova/compute/api.py:L3597–L3628` |
| `API.reboot` | method | (self, context, instance, reboot_type) | public | not declared | 2/5 | `src/nova/compute/api.py:L3644–L3649` |
| `API._soft_reboot` | method | (self, context, instance) | private | not declared | 1/8 | `src/nova/compute/api.py:L3653–L3662` |
| `API._hard_reboot` | method | (self, context, instance) | private | not declared | 1/7 | `src/nova/compute/api.py:L3666–L3674` |
| `API._check_image_arch` | method | (self, image=None) | private | not declared | 3/5 | `src/nova/compute/api.py:L3676–L3680` |
| `API.rebuild` | method | (self, context, instance, image_href, admin_password, files_to_inject=None, reimage_boot_volume=False, **kwargs) | public | not declared | 17/104 | `src/nova/compute/api.py:L3689–L3901` |
| `API.rebuild._reset_image_metadata` | function | — | private | `orig_sys_metadata` (src/nova/compute/api.py:L3837) | — | `src/nova/compute/api.py:L3811–L3837` |
| `API._check_volume_status` | method | (self, context, bdms) | private | not declared | 3/5 | `src/nova/compute/api.py:L3903–L3912` |
| `API._validate_numa_rebuild` | method | (instance, image, flavor) | private | `` (src/nova/compute/api.py:L3935) | 7/20 | `src/nova/compute/api.py:L3915–L3955` |
| `API._check_quota_for_upsize` | method | (context, instance, current_flavor, new_flavor, is_bfv, is_revert) | private | not declared | 4/37 | `src/nova/compute/api.py:L3958–L4002` |
| `API.revert_resize` | method | (self, context, instance) | public | not declared | 4/37 | `src/nova/compute/api.py:L4006–L4092` |
| `API._get_source_compute_service` | method | (context, migration) | private | `objects.Service.get_by_compute_host( cctxt, migration.source_compute)` (src/nova/compute/api.py:L4109); `objects.Service.get_by_compute_host( context, migration.source_compute)` (src/nova/compute/api.py:L4112) | 2/9 | `src/nova/compute/api.py:L4095–L4113` |
| `API.confirm_resize` | method | (self, context, instance, migration=None) | public | not declared | 4/20 | `src/nova/compute/api.py:L4117–L4165` |
| `API._allow_cross_cell_resize` | method | (self, context, instance, min_comp_ver) | private | `False` (src/nova/compute/api.py:L4194); `False` (src/nova/compute/api.py:L4206); `allowed` (src/nova/compute/api.py:L4208) | 4/26 | `src/nova/compute/api.py:L4167–L4208` |
| `API._validate_host_for_cold_migrate` | method | (context, instance, host_name, allow_cross_cell_resize) | private | `node` (src/nova/compute/api.py:L4252) | 4/18 | `src/nova/compute/api.py:L4211–L4252` |
| `API._validate_vtpm_secret_security` | method | (current_flavor, new_flavor, image_meta) | private | `` (src/nova/compute/api.py:L4271) | 6/11 | `src/nova/compute/api.py:L4255–L4285` |
| `API.resize` | method | (self, context, instance, flavor_id=None, clean_shutdown=True, host_name=None, auto_disk_config=None) | public | not declared | 28/120 | `src/nova/compute/api.py:L4295–L4498` |
| `API._allow_resize_to_same_host` | method | (self, cold_migrate, instance) | private | `allow_same_host` (src/nova/compute/api.py:L4549) | 4/18 | `src/nova/compute/api.py:L4500–L4549` |
| `API.shelve` | method | (self, context, instance, clean_shutdown=True) | public | not declared | 3/23 | `src/nova/compute/api.py:L4558–L4592` |
| `API.shelve_offload` | method | (self, context, instance, clean_shutdown=True) | public | not declared | 2/12 | `src/nova/compute/api.py:L4597–L4612` |
| `API._check_offloaded` | method | (self, context, instance) | private | not declared | 2/4 | `src/nova/compute/api.py:L4614–L4624` |
| `API._ensure_host_in_az` | method | (self, context, host, availability_zone) | private | not declared | 3/9 | `src/nova/compute/api.py:L4626–L4637` |
| `API._validate_unshelve_az` | method | (self, context, instance, availability_zone) | private | not declared | 7/21 | `src/nova/compute/api.py:L4639–L4676` |
| `API._check_quota_unshelve_offloaded` | method | (context, instance, request_spec) | private | `` (src/nova/compute/api.py:L4686) | 3/22 | `src/nova/compute/api.py:L4679–L4712` |
| `API.unshelve` | method | (self, context, instance, new_az=_sentinel, host=None) | public | not declared | 11/55 | `src/nova/compute/api.py:L4718–L4822` |
| `API.add_fixed_ip` | method | (self, context, instance, network_id) | public | not declared | 1/3 | `src/nova/compute/api.py:L4825–L4828` |
| `API.remove_fixed_ip` | method | (self, context, instance, address) | public | not declared | 1/3 | `src/nova/compute/api.py:L4831–L4834` |
| `API.pause` | method | (self, context, instance) | public | not declared | 1/5 | `src/nova/compute/api.py:L4838–L4843` |
| `API.unpause` | method | (self, context, instance) | public | not declared | 1/5 | `src/nova/compute/api.py:L4847–L4852` |
| `API.get_diagnostics` | method | (self, context, instance) | public | `self.compute_rpcapi.get_diagnostics(context, instance=instance)` (src/nova/compute/api.py:L4857) | 1/2 | `src/nova/compute/api.py:L4855–L4857` |
| `API.get_instance_diagnostics` | method | (self, context, instance) | public | `self.compute_rpcapi.get_instance_diagnostics(context, instance=instance)` (src/nova/compute/api.py:L4862) | 1/3 | `src/nova/compute/api.py:L4860–L4863` |
| `API.suspend` | method | (self, context, instance) | public | not declared | 1/5 | `src/nova/compute/api.py:L4874–L4879` |
| `API.resume` | method | (self, context, instance) | public | not declared | 1/5 | `src/nova/compute/api.py:L4886–L4891` |
| `API.rescue` | method | (self, context, instance, rescue_password=None, rescue_image_ref=None, clean_shutdown=True, allow_bfv_rescue=False) | public | not declared | 9/48 | `src/nova/compute/api.py:L4897–L4957` |
| `API.unrescue` | method | (self, context, instance) | public | not declared | 1/5 | `src/nova/compute/api.py:L4961–L4968` |
| `API.set_admin_password` | method | (self, context, instance, password) | public | not declared | 1/8 | `src/nova/compute/api.py:L4972–L4987` |
| `API.get_vnc_console` | method | (self, context, instance, console_type) | public | `{'url': connect_info['access_url']}` (src/nova/compute/api.py:L4996) | 1/4 | `src/nova/compute/api.py:L4992–L4996` |
| `API.get_spice_console` | method | (self, context, instance, console_type) | public | `{'url': connect_info['access_url']}` (src/nova/compute/api.py:L5005) | 1/4 | `src/nova/compute/api.py:L5001–L5005` |
| `API.get_serial_console` | method | (self, context, instance, console_type) | public | `{'url': connect_info['access_url']}` (src/nova/compute/api.py:L5014) | 1/4 | `src/nova/compute/api.py:L5010–L5014` |
| `API.get_mks_console` | method | (self, context, instance, console_type) | public | `{'url': connect_info['access_url']}` (src/nova/compute/api.py:L5023) | 1/4 | `src/nova/compute/api.py:L5019–L5023` |
| `API.get_console_output` | method | (self, context, instance, tail_length=None) | public | `self.compute_rpcapi.get_console_output(context, instance=instance, tail_length=tail_length)` (src/nova/compute/api.py:L5028) | 1/3 | `src/nova/compute/api.py:L5026–L5029` |
| `API.lock` | method | (self, context, instance, reason=None) | public | `` (src/nova/compute/api.py:L5036) | 3/14 | `src/nova/compute/api.py:L5031–L5055` |
| `API.lock.lock` | function | (self, context, instance, reason=None) | public | not declared | — | `src/nova/compute/api.py:L5043–L5049` |
| `API.is_expected_locked_by` | method | (self, context, instance) | public | `False` (src/nova/compute/api.py:L5062); `True` (src/nova/compute/api.py:L5063) | 4/7 | `src/nova/compute/api.py:L5057–L5063` |
| `API.unlock` | method | (self, context, instance) | public | not declared | 1/11 | `src/nova/compute/api.py:L5065–L5083` |
| `API.unlock.unlock` | function | (self, context, instance) | public | not declared | — | `src/nova/compute/api.py:L5072–L5077` |
| `API.inject_network_info` | method | (self, context, instance) | public | not declared | 1/2 | `src/nova/compute/api.py:L5086–L5088` |
| `API._create_volume_bdm_locally` | method | (self, context, instance, device, volume, disk_bus, device_type, tag=None, delete_on_termination=False) | private | `volume_bdm` (src/nova/compute/api.py:L5112) | 1/13 | `src/nova/compute/api.py:L5090–L5112` |
| `API._check_volume_already_attached` | method | (self, context, instance, volume) | private | `` (src/nova/compute/api.py:L5143) | 7/24 | `src/nova/compute/api.py:L5114–L5160` |
| `API._attach_volume_shelved_offloaded` | method | (self, context, instance, volume, device, disk_bus, device_type, delete_on_termination) | private | `volume_bdm.device_name` (src/nova/compute/api.py:L5208) | 2/22 | `src/nova/compute/api.py:L5162–L5208` |
| `API._attach_volume_shelved_offloaded.attach_volume` | function | (self, context, v_id, instance, dev, attachment_id) | public | not declared | — | `src/nova/compute/api.py:L5178–L5190` |
| `API.attach_volume` | method | (self, context, instance, volume_id, device=None, disk_bus=None, device_type=None, tag=None, supports_multiattach=False, delete_on_termination=False, needs_device_returned=False) | public | `self._attach_volume_shelved_offloaded(context, instance, volume, device, disk_bus, device_type, delete_on_termination)` (src/nova/compute/api.py:L5255); `self.compute_task_api.attach_volume(context, instance, volume, device, disk_bus, device_type, tag=tag, supports_multiattach=supports_multiattach, delete_on_termination=delete_on_termination, do_cast=n` (src/nova/compute/api.py:L5263) | 6/27 | `src/nova/compute/api.py:L5215–L5267` |
| `API._detach_volume_shelved_offloaded` | method | (self, context, instance, volume) | private | not declared | 3/14 | `src/nova/compute/api.py:L5269–L5296` |
| `API._detach_volume_shelved_offloaded.detach_volume` | function | (self, context, instance, bdms) | public | not declared | — | `src/nova/compute/api.py:L5279–L5280` |
| `API._detach_volume` | method | (self, context, instance, volume) | private | not declared | 4/13 | `src/nova/compute/api.py:L5299–L5311` |
| `API.detach_volume` | method | (self, context, instance, volume) | public | not declared | 2/5 | `src/nova/compute/api.py:L5318–L5323` |
| `API._count_attachments_for_swap` | method | (self, ctxt, volume) | private | `count` (src/nova/compute/api.py:L5366) | 5/16 | `src/nova/compute/api.py:L5325–L5366` |
| `API.swap_volume` | method | (self, context, instance, old_volume, new_volume) | public | not declared | 11/52 | `src/nova/compute/api.py:L5371–L5443` |
| `API.ensure_compute_version_for_resource_request` | method | (self, context, instance, port) | public | not declared | 7/20 | `src/nova/compute/api.py:L5445–L5475` |
| `API.attach_interface` | method | (self, context, instance, network_id, port_id, requested_ip, tag=None) | public | `self.compute_rpcapi.attach_interface(context, instance=instance, network_id=network_id, port_id=port_id, requested_ip=requested_ip, tag=tag)` (src/nova/compute/api.py:L5511) | 4/19 | `src/nova/compute/api.py:L5486–L5513` |
| `API.detach_interface` | method | (self, context, instance, port_id) | public | not declared | 4/12 | `src/nova/compute/api.py:L5524–L5537` |
| `API.get_instance_metadata` | method | (self, context, instance) | public | `main_db_api.instance_metadata_get(context, instance.uuid)` (src/nova/compute/api.py:L5541) | 1/2 | `src/nova/compute/api.py:L5539–L5541` |
| `API.delete_instance_metadata` | method | (self, context, instance, key) | public | not declared | 1/2 | `src/nova/compute/api.py:L5547–L5549` |
| `API.update_instance_metadata` | method | (self, context, instance, metadata, delete=False) | public | `_metadata` (src/nova/compute/api.py:L5573) | 2/11 | `src/nova/compute/api.py:L5555–L5573` |
| `API.live_migrate` | method | (self, context, instance, block_migration, disk_over_commit, host_name, force=None, async_=False) | public | not declared | 6/33 | `src/nova/compute/api.py:L5587–L5641` |
| `API.live_migrate_force_complete` | method | (self, context, instance, migration_id) | public | not declared | 2/14 | `src/nova/compute/api.py:L5646–L5672` |
| `API.live_migrate_abort` | method | (self, context, instance, migration_id, support_abort_in_queue=False) | public | not declared | 3/19 | `src/nova/compute/api.py:L5676–L5715` |
| `API.evacuate` | method | (self, context, instance, host, on_shared_storage, admin_password=None, force=None, target_state=None) | public | `self.compute_task_api.rebuild_instance(context, instance=instance, new_pass=admin_password, injected_files=None, image_ref=None, orig_image_ref=None, orig_sys_metadata=None, bdms=None, recreate=True, ` (src/nova/compute/api.py:L5788) | 5/49 | `src/nova/compute/api.py:L5724–L5800` |
| `API.get_migrations` | method | (self, context, filters) | public | `objects.MigrationList(objects=migrations)` (src/nova/compute/api.py:L5813) | 3/10 | `src/nova/compute/api.py:L5802–L5813` |
| `API.get_migrations_sorted` | method | (self, context, filters, sort_dirs=None, sort_keys=None, limit=None, marker=None) | public | `objects.MigrationList(objects=list(migrations_by_uuid.values()))` (src/nova/compute/api.py:L5867) | 3/14 | `src/nova/compute/api.py:L5815–L5867` |
| `API.get_migrations_sorted._get_newer_obj` | function | (obj1, obj2) | private | `obj1` (src/nova/compute/api.py:L5836); `obj2` (src/nova/compute/api.py:L5837); `obj1` (src/nova/compute/api.py:L5841); `obj2` (src/nova/compute/api.py:L5842); `obj2` (src/nova/compute/api.py:L5845); `obj1` (src/nova/compute/api.py:L5846); `obj1` (src/nova/compute/api.py:L5849); `obj2` (src/nova/compute/api.py:L5850) | — | `src/nova/compute/api.py:L5826–L5850` |
| `API.get_migrations_in_progress_by_instance` | method | (self, context, instance_uuid, migration_type=None) | public | `objects.MigrationList.get_in_progress_by_instance( context, instance_uuid, migration_type)` (src/nova/compute/api.py:L5872) | 1/4 | `src/nova/compute/api.py:L5869–L5873` |
| `API.get_migration_by_id_and_instance` | method | (self, context, migration_id, instance_uuid) | public | `objects.Migration.get_by_id_and_instance( context, migration_id, instance_uuid)` (src/nova/compute/api.py:L5878) | 1/4 | `src/nova/compute/api.py:L5875–L5879` |
| `API._get_bdm_by_volume_id` | method | (self, context, volume_id, expected_attrs=None) | private | `objects.BlockDeviceMapping.get_by_volume( context, volume_id, expected_attrs=expected_attrs)` (src/nova/compute/api.py:L5897) | 3/10 | `src/nova/compute/api.py:L5881–L5901` |
| `API.volume_snapshot_create` | method | (self, context, volume_id, create_info) | public | `do_volume_snapshot_create(self, context, bdm.instance)` (src/nova/compute/api.py:L5922) | 1/7 | `src/nova/compute/api.py:L5903–L5922` |
| `API.volume_snapshot_create.do_volume_snapshot_create` | function | (self, context, instance) | public | `snapshot` (src/nova/compute/api.py:L5920) | — | `src/nova/compute/api.py:L5911–L5920` |
| `API.volume_snapshot_delete` | method | (self, context, volume_id, snapshot_id, delete_info) | public | not declared | 1/8 | `src/nova/compute/api.py:L5924–L5951` |
| `API.volume_snapshot_delete.do_volume_snapshot_delete` | function | (self, context, instance) | public | not declared | — | `src/nova/compute/api.py:L5931–L5949` |
| `API.external_instance_event` | method | (self, api_context, instances, events) | public | not declared | 12/48 | `src/nova/compute/api.py:L5953–L6026` |
| `API._get_relevant_hosts` | method | (self, context, instance) | private | `hosts, cross_cell_move` (src/nova/compute/api.py:L6057) | 3/18 | `src/nova/compute/api.py:L6028–L6057` |
| `API.get_instance_host_status` | method | (self, instance) | public | `host_status` (src/nova/compute/api.py:L6076) | 9/18 | `src/nova/compute/api.py:L6059–L6076` |
| `API.get_instances_host_statuses` | method | (self, instance_list) | public | `host_statuses` (src/nova/compute/api.py:L6091) | 4/14 | `src/nova/compute/api.py:L6078–L6091` |
| `API.allow_share` | method | (self, context, instance, share_mapping) | public | not declared | 1/5 | `src/nova/compute/api.py:L6093–L6097` |
| `API.deny_share` | method | (self, context, instance, share_mapping) | public | not declared | 1/5 | `src/nova/compute/api.py:L6099–L6103` |
| `target_host_cell` | function | (fn) | exported | `targeted` (src/nova/compute/api.py:L6119) | 1/4 | `src/nova/compute/api.py:L6106–L6119` |
| `target_host_cell.targeted` | function | (self, context, host, *args, **kwargs) | public | `fn(self, context, host, *args, **kwargs)` (src/nova/compute/api.py:L6118) | — | `src/nova/compute/api.py:L6115–L6118` |
| `_get_service_in_cell_by_host` | function | (context, host_name) | unexported | `service` (src/nova/compute/api.py:L6134) | 3/11 | `src/nova/compute/api.py:L6122–L6134` |
| `_find_service_in_cell` | function | (context, service_id=None, service_host=None) | unexported | `service` (src/nova/compute/api.py:L6191) | 11/34 | `src/nova/compute/api.py:L6137–L6193` |
| `HostAPI` | class | — | exported | not declared | — | `src/nova/compute/api.py:L6196–L6563` |
| `HostAPI.__init__` | method | (self, rpcapi=None, servicegroup_api=None) | public | not declared | 3/3 | `src/nova/compute/api.py:L6199–L6201` |
| `HostAPI._assert_host_exists` | method | (self, context, host_name, must_be_up=False) | private | `service['host']` (src/nova/compute/api.py:L6210) | 4/7 | `src/nova/compute/api.py:L6203–L6210` |
| `HostAPI.set_host_enabled` | method | (self, context, host_name, enabled) | public | `result` (src/nova/compute/api.py:L6226) | 1/12 | `src/nova/compute/api.py:L6214–L6226` |
| `HostAPI.get_host_uptime` | method | (self, context, host_name) | public | `self.rpcapi.get_host_uptime(context, host=host_name)` (src/nova/compute/api.py:L6233) | 1/4 | `src/nova/compute/api.py:L6229–L6233` |
| `HostAPI.host_power_action` | method | (self, context, host_name, action) | public | `result` (src/nova/compute/api.py:L6249) | 1/12 | `src/nova/compute/api.py:L6237–L6249` |
| `HostAPI.set_host_maintenance` | method | (self, context, host_name, mode) | public | `result` (src/nova/compute/api.py:L6267) | 1/12 | `src/nova/compute/api.py:L6253–L6267` |
| `HostAPI._service_get_all_cells` | method | (self, context, disabled, set_zones, cell_down_support) | private | `services` (src/nova/compute/api.py:L6306) | 10/34 | `src/nova/compute/api.py:L6269–L6306` |
| `HostAPI.service_get_all` | method | (self, context, filters=None, set_zones=False, all_cells=False, cell_down_support=False) | public | `ret_services` (src/nova/compute/api.py:L6346) | 7/22 | `src/nova/compute/api.py:L6308–L6346` |
| `HostAPI.service_get_by_id` | method | (self, context, service_id) | public | `_find_service_in_cell(context, service_id=service_id)` (src/nova/compute/api.py:L6351) | 2/5 | `src/nova/compute/api.py:L6348–L6353` |
| `HostAPI.service_get_by_compute_host` | method | (self, context, host_name) | public | `objects.Service.get_by_compute_host(context, host_name)` (src/nova/compute/api.py:L6358) | 1/2 | `src/nova/compute/api.py:L6356–L6358` |
| `HostAPI._update_compute_provider_status` | method | (self, context, service) | private | `` (src/nova/compute/api.py:L6379); `` (src/nova/compute/api.py:L6389) | 4/24 | `src/nova/compute/api.py:L6360–L6403` |
| `HostAPI.service_update` | method | (self, context, service) | public | `service` (src/nova/compute/api.py:L6425) | 2/6 | `src/nova/compute/api.py:L6405–L6425` |
| `HostAPI.service_update_by_host_and_binary` | method | (self, context, host_name, binary, params_to_update) | public | `self.service_update(context, service)` (src/nova/compute/api.py:L6451) | 1/5 | `src/nova/compute/api.py:L6428–L6451` |
| `HostAPI.instance_get_all_by_host` | method | (self, context, host_name) | public | `objects.InstanceList.get_by_host(context, host_name)` (src/nova/compute/api.py:L6456) | 1/2 | `src/nova/compute/api.py:L6454–L6456` |
| `HostAPI.task_log_get_all` | method | (self, context, task_name, period_beginning, period_ending, host=None, state=None) | public | `main_db_api.task_log_get_all( context, task_name, period_beginning, period_ending, host=host, state=state)` (src/nova/compute/api.py:L6463) | 1/5 | `src/nova/compute/api.py:L6458–L6465` |
| `HostAPI.compute_node_get` | method | (self, context, compute_id) | public | `objects.ComputeNode.get_by_uuid(cctxt, compute_id)` (src/nova/compute/api.py:L6480); `objects.ComputeNode.get_by_id(cctxt, int(compute_id))` (src/nova/compute/api.py:L6482) | 5/16 | `src/nova/compute/api.py:L6467–L6488` |
| `HostAPI.compute_node_get_all` | method | (self, context, limit=None, marker=None) | public | `objects.ComputeNodeList(objects=computes)` (src/nova/compute/api.py:L6533) | 12/29 | `src/nova/compute/api.py:L6490–L6533` |
| `HostAPI.compute_node_search_by_hypervisor` | method | (self, context, hypervisor_match) | public | `objects.ComputeNodeList(objects=computes)` (src/nova/compute/api.py:L6546) | 3/11 | `src/nova/compute/api.py:L6535–L6546` |
| `HostAPI.compute_node_statistics` | method | (self, context) | public | `{k: sum(stats[k] for stats in cell_stats) for k in keys}` (src/nova/compute/api.py:L6560); `{}` (src/nova/compute/api.py:L6563) | 6/14 | `src/nova/compute/api.py:L6548–L6563` |
| `InstanceActionAPI` | class | — | exported | not declared | — | `src/nova/compute/api.py:L6566–L6580` |
| `InstanceActionAPI.actions_get` | method | (self, context, instance, limit=None, marker=None, filters=None) | public | `objects.InstanceActionList.get_by_instance_uuid( context, instance.uuid, limit, marker, filters)` (src/nova/compute/api.py:L6571) | 1/4 | `src/nova/compute/api.py:L6569–L6572` |
| `InstanceActionAPI.action_get_by_request_id` | method | (self, context, instance, request_id) | public | `objects.InstanceAction.get_by_request_id( context, instance.uuid, request_id)` (src/nova/compute/api.py:L6575) | 1/3 | `src/nova/compute/api.py:L6574–L6576` |
| `InstanceActionAPI.action_events_get` | method | (self, context, instance, action_id) | public | `objects.InstanceActionEventList.get_by_action( context, action_id)` (src/nova/compute/api.py:L6579) | 1/3 | `src/nova/compute/api.py:L6578–L6580` |
| `AggregateAPI` | class | — | exported | not declared | — | `src/nova/compute/api.py:L6583–L6965` |
| `AggregateAPI.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/compute/api.py:L6586–L6588` |
| `AggregateAPI.placement_client` | method | (self) | public | `report.report_client_singleton()` (src/nova/compute/api.py:L6592) | 1/2 | `src/nova/compute/api.py:L6591–L6592` |
| `AggregateAPI.create_aggregate` | method | (self, context, aggregate_name, availability_zone) | public | `aggregate` (src/nova/compute/api.py:L6604) | 2/8 | `src/nova/compute/api.py:L6595–L6604` |
| `AggregateAPI.get_aggregate` | method | (self, context, aggregate_id) | public | `objects.Aggregate.get_by_id(context, aggregate_id)` (src/nova/compute/api.py:L6608) | 1/2 | `src/nova/compute/api.py:L6606–L6608` |
| `AggregateAPI.get_aggregate_list` | method | (self, context) | public | `objects.AggregateList.get_all(context)` (src/nova/compute/api.py:L6612) | 1/2 | `src/nova/compute/api.py:L6610–L6612` |
| `AggregateAPI.get_aggregates_by_host` | method | (self, context, compute_host) | public | `objects.AggregateList.get_by_host(context, compute_host)` (src/nova/compute/api.py:L6616) | 1/2 | `src/nova/compute/api.py:L6614–L6616` |
| `AggregateAPI.update_aggregate` | method | (self, context, aggregate_id, values) | public | `aggregate` (src/nova/compute/api.py:L6636) | 4/15 | `src/nova/compute/api.py:L6619–L6636` |
| `AggregateAPI.update_aggregate_metadata` | method | (self, context, aggregate_id, metadata) | public | `aggregate` (src/nova/compute/api.py:L6652) | 3/11 | `src/nova/compute/api.py:L6639–L6652` |
| `AggregateAPI.delete_aggregate` | method | (self, context, aggregate_id) | public | not declared | 2/25 | `src/nova/compute/api.py:L6655–L6682` |
| `AggregateAPI.is_safe_to_update_az` | method | (self, context, metadata, aggregate, hosts=None, action_name=AGGREGATE_ACTION_ADD, check_no_instances_in_az=False) | public | not declared | 12/34 | `src/nova/compute/api.py:L6684–L6729` |
| `AggregateAPI._raise_invalid_aggregate_exc` | method | (self, action_name, aggregate_id, reason) | private | not declared | 5/15 | `src/nova/compute/api.py:L6731–L6746` |
| `AggregateAPI._update_az_cache_for_host` | method | (self, context, host_name, aggregate_meta) | private | not declared | 3/4 | `src/nova/compute/api.py:L6748–L6754` |
| `AggregateAPI.ensure_no_instances_need_to_move_az_when_host_added` | method | (self, context, aggregate, host_name) | public | `` (src/nova/compute/api.py:L6762); `` (src/nova/compute/api.py:L6770) | 7/27 | `src/nova/compute/api.py:L6756–L6799` |
| `AggregateAPI.add_host_to_aggregate` | method | (self, context, aggregate_id, host_name) | public | `aggregate` (src/nova/compute/api.py:L6864) | 3/45 | `src/nova/compute/api.py:L6802–L6864` |
| `AggregateAPI.ensure_no_instances_need_to_move_az_when_host_removed` | method | (self, context, aggregate, host_name) | public | `` (src/nova/compute/api.py:L6872); `` (src/nova/compute/api.py:L6882) | 8/28 | `src/nova/compute/api.py:L6866–L6912` |
| `AggregateAPI.remove_host_from_aggregate` | method | (self, context, aggregate_id, host_name) | public | `aggregate` (src/nova/compute/api.py:L6965) | 2/35 | `src/nova/compute/api.py:L6915–L6965` |
| `KeypairAPI` | class | — | exported | not declared | — | `src/nova/compute/api.py:L6968–L7124` |
| `KeypairAPI.wrap_exception` | field | — | public | not declared | — | `src/nova/compute/api.py:L6971–L6972` |
| `KeypairAPI.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/compute/api.py:L6974–L6975` |
| `KeypairAPI._notify` | method | (self, context, event_suffix, keypair_name) | private | not declared | 1/7 | `src/nova/compute/api.py:L6977–L6983` |
| `KeypairAPI._check_key_pair_quotas` | method | (self, context, user_id, key_name, key_type) | private | not declared | 3/9 | `src/nova/compute/api.py:L6985–L6993` |
| `KeypairAPI.import_key_pair` | method | (self, context, user_id, key_name, public_key, key_type=keypair_obj.KEYPAIR_TYPE_SSH) | public | `keypair` (src/nova/compute/api.py:L7028) | 1/25 | `src/nova/compute/api.py:L6996–L7028` |
| `KeypairAPI.create_key_pair` | method | (self, context, user_id, key_name, key_type=keypair_obj.KEYPAIR_TYPE_SSH) | public | `keypair, private_key` (src/nova/compute/api.py:L7085) | 4/38 | `src/nova/compute/api.py:L7031–L7085` |
| `KeypairAPI._generate_fingerprint` | method | (self, public_key, key_type) | private | `crypto.generate_fingerprint(public_key)` (src/nova/compute/api.py:L7089); `crypto.generate_x509_fingerprint(public_key)` (src/nova/compute/api.py:L7091) | 3/5 | `src/nova/compute/api.py:L7087–L7091` |
| `KeypairAPI._generate_key_pair` | method | (self, user_id, key_type) | private | `crypto.generate_key_pair()` (src/nova/compute/api.py:L7095); `crypto.generate_winrm_x509_cert(user_id)` (src/nova/compute/api.py:L7097) | 3/5 | `src/nova/compute/api.py:L7093–L7097` |
| `KeypairAPI.delete_key_pair` | method | (self, context, user_id, key_name) | public | not declared | 1/15 | `src/nova/compute/api.py:L7100–L7115` |
| `KeypairAPI.get_key_pairs` | method | (self, context, user_id, limit=None, marker=None) | public | `objects.KeyPairList.get_by_user( context, user_id, limit=limit, marker=marker)` (src/nova/compute/api.py:L7119) | 1/3 | `src/nova/compute/api.py:L7117–L7120` |
| `KeypairAPI.get_key_pair` | method | (self, context, user_id, key_name) | public | `objects.KeyPair.get_by_name(context, user_id, key_name)` (src/nova/compute/api.py:L7124) | 1/2 | `src/nova/compute/api.py:L7122–L7124` |
| `API.parse_availability_zone` | staticmethod | — | public | not declared | — | `src/nova/compute/api.py:L654–L682` |
| `API._detect_nonbootable_image_from_properties` | staticmethod | — | private | not declared | — | `src/nova/compute/api.py:L750–L778` |
| `API._validate_flavor_image_nostatus` | staticmethod | — | private | not declared | — | `src/nova/compute/api.py:L780–L898` |
| `API._check_compute_service_for_mixed_instance` | staticmethod | — | private | not declared | — | `src/nova/compute/api.py:L902–L918` |
| `API._validate_flavor_image_numa_pci` | staticmethod | — | private | not declared | — | `src/nova/compute/api.py:L920–L953` |
| `API._validate_vol_az_for_create` | staticmethod | — | private | not declared | — | `src/nova/compute/api.py:L1330–L1406` |
| `API._retrieve_trusted_certs_object` | staticmethod | — | private | not declared | — | `src/nova/compute/api.py:L1629–L1657` |
| `API._get_requested_instance_group` | staticmethod | — | private | not declared | — | `src/nova/compute/api.py:L1659–L1669` |
| `API._cleanup_build_artifacts` | staticmethod | — | private | not declared | — | `src/nova/compute/api.py:L1849–L1872` |
| `API._volume_size` | staticmethod | — | private | not declared | — | `src/nova/compute/api.py:L1874–L1884` |
| `API._check_requested_volume_type` | staticmethod | — | private | not declared | — | `src/nova/compute/api.py:L1957–L1975` |
| `API.placementclient` | property | — | public | not declared | — | `src/nova/compute/api.py:L2727–L2729` |
| `API._update_queued_for_deletion` | staticmethod | — | private | not declared | — | `src/nova/compute/api.py:L2759–L2771` |
| `API._save_user_id_in_instance_mapping` | staticmethod | — | private | not declared | — | `src/nova/compute/api.py:L2950–L2960` |
| `API._ip_filter` | staticmethod | — | private | not declared | — | `src/nova/compute/api.py:L3294–L3318` |
| `API._validate_numa_rebuild` | staticmethod | — | private | not declared | — | `src/nova/compute/api.py:L3914–L3955` |
| `API._check_quota_for_upsize` | staticmethod | — | private | not declared | — | `src/nova/compute/api.py:L3957–L4002` |
| `API._get_source_compute_service` | staticmethod | — | private | not declared | — | `src/nova/compute/api.py:L4094–L4113` |
| `API._validate_host_for_cold_migrate` | staticmethod | — | private | not declared | — | `src/nova/compute/api.py:L4210–L4252` |
| `API._validate_vtpm_secret_security` | staticmethod | — | private | not declared | — | `src/nova/compute/api.py:L4254–L4285` |
| `API._check_quota_unshelve_offloaded` | staticmethod | — | private | not declared | — | `src/nova/compute/api.py:L4678–L4712` |
| `AggregateAPI.placement_client` | property | — | public | not declared | — | `src/nova/compute/api.py:L6590–L6592` |

## Dependencies

- `import collections` (src/nova/compute/api.py:L22)
- `collections.abc`: imports `Mapping` (src/nova/compute/api.py:L23)
- `import functools` (src/nova/compute/api.py:L24)
- `import re` (src/nova/compute/api.py:L25)
- `import typing as ty` (src/nova/compute/api.py:L26)
- `castellan`: imports `key_manager` (src/nova/compute/api.py:L28)
- `import os_traits` (src/nova/compute/api.py:L29)
- `oslo_log`: imports `log as logging` (src/nova/compute/api.py:L30)
- `oslo_messaging`: imports `exceptions as oslo_exceptions` (src/nova/compute/api.py:L31)
- `oslo_serialization`: imports `base64 as base64utils` (src/nova/compute/api.py:L32)
- `oslo_utils`: imports `excutils` (src/nova/compute/api.py:L33)
- `oslo_utils`: imports `strutils` (src/nova/compute/api.py:L34)
- `oslo_utils`: imports `timeutils` (src/nova/compute/api.py:L35)
- `oslo_utils`: imports `units` (src/nova/compute/api.py:L36)
- `oslo_utils`: imports `uuidutils` (src/nova/compute/api.py:L37)
- `nova.accelerator`: imports `cyborg` (src/nova/compute/api.py:L39)
- `nova`: imports `availability_zones` (src/nova/compute/api.py:L40)
- `nova`: imports `block_device` (src/nova/compute/api.py:L41)
- `nova.compute`: imports `flavors` (src/nova/compute/api.py:L42)
- `nova.compute`: imports `instance_actions` (src/nova/compute/api.py:L43)
- `nova.compute`: imports `instance_list` (src/nova/compute/api.py:L44)
- `nova.compute`: imports `migration_list` (src/nova/compute/api.py:L45)
- `nova.compute`: imports `power_state` (src/nova/compute/api.py:L46)
- `nova.compute`: imports `rpcapi as compute_rpcapi` (src/nova/compute/api.py:L47)
- `nova.compute`: imports `task_states` (src/nova/compute/api.py:L48)
- `nova.compute`: imports `utils as compute_utils` (src/nova/compute/api.py:L49)
- `nova.compute.utils`: imports `wrap_instance_event` (src/nova/compute/api.py:L50)
- `nova.compute`: imports `vm_states` (src/nova/compute/api.py:L51)
- `nova`: imports `conductor` (src/nova/compute/api.py:L52)
- `import nova.conf` (src/nova/compute/api.py:L53)
- `nova`: imports `context as nova_context` (src/nova/compute/api.py:L54)
- `nova`: imports `crypto` (src/nova/compute/api.py:L55)
- `nova.db.api`: imports `api as api_db_api` (src/nova/compute/api.py:L56)
- `nova.db.main`: imports `api as main_db_api` (src/nova/compute/api.py:L57)
- `nova`: imports `exception` (src/nova/compute/api.py:L58)
- `nova`: imports `exception_wrapper` (src/nova/compute/api.py:L59)
- `nova.i18n`: imports `_` (src/nova/compute/api.py:L60)
- `nova.image`: imports `glance` (src/nova/compute/api.py:L61)
- `nova.limit`: imports `local as local_limit` (src/nova/compute/api.py:L62)
- `nova.limit`: imports `placement as placement_limits` (src/nova/compute/api.py:L63)
- `nova.limit`: imports `utils as limit_utils` (src/nova/compute/api.py:L64)
- `nova.network`: imports `constants` (src/nova/compute/api.py:L65)
- `nova.network`: imports `model as network_model` (src/nova/compute/api.py:L66)
- `nova.network`: imports `neutron` (src/nova/compute/api.py:L67)
- `nova.network`: imports `security_group_api` (src/nova/compute/api.py:L68)
- `nova`: imports `objects` (src/nova/compute/api.py:L69)
- `nova.objects`: imports `block_device as block_device_obj` (src/nova/compute/api.py:L70)
- `nova.objects`: imports `external_event as external_event_obj` (src/nova/compute/api.py:L71)
- `nova.objects`: imports `fields as fields_obj` (src/nova/compute/api.py:L72)
- `nova.objects`: imports `image_meta as image_meta_obj` (src/nova/compute/api.py:L73)
- `nova.objects`: imports `keypair as keypair_obj` (src/nova/compute/api.py:L74)
- `nova.objects`: imports `quotas as quotas_obj` (src/nova/compute/api.py:L75)
- `nova.objects`: imports `service as service_obj` (src/nova/compute/api.py:L76)
- `nova.pci`: imports `request as pci_request` (src/nova/compute/api.py:L77)
- `nova.policies`: imports `servers as servers_policies` (src/nova/compute/api.py:L78)
- `nova.policies`: imports `shelve as shelve_policies` (src/nova/compute/api.py:L79)
- `import nova.policy` (src/nova/compute/api.py:L80)
- `nova`: imports `profiler` (src/nova/compute/api.py:L81)
- `nova`: imports `rpc` (src/nova/compute/api.py:L82)
- `nova.scheduler.client`: imports `query` (src/nova/compute/api.py:L83)
- `nova.scheduler.client`: imports `report` (src/nova/compute/api.py:L84)
- `nova.scheduler`: imports `utils as scheduler_utils` (src/nova/compute/api.py:L85)
- `nova`: imports `servicegroup` (src/nova/compute/api.py:L86)
- `nova`: imports `utils` (src/nova/compute/api.py:L87)
- `nova.virt`: imports `hardware` (src/nova/compute/api.py:L88)
- `nova.volume`: imports `cinder` (src/nova/compute/api.py:L89)
- `nova`: imports `vtpm` (src/nova/compute/api.py:L90)

## Side Effects

- **network**: api.openstack.compute.servers.INVALID_FLAVOR_IMAGE_EXCEPTIONS (src/nova/compute/api.py:L742)
- **network**: api.openstack.compute.servers.INVALID_FLAVOR_IMAGE_EXCEPTIONS (src/nova/compute/api.py:L801)
- **network**: api.openstack.compute.servers.INVALID_FLAVOR_IMAGE_EXCEPTIONS (src/nova/compute/api.py:L937)
- **network**: cyclient = cyborg.get_client(context) (src/nova/compute/api.py:L4578)
- **network**: cyclient = cyborg.get_client(context) (src/nova/compute/api.py:L4607)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/compute/api.py:L92)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/compute/api.py:L101)
- **global-mutation**: AGGREGATE_ACTION_UPDATE = 'Update' (src/nova/compute/api.py:L103)
- **global-mutation**: AGGREGATE_ACTION_UPDATE_META = 'UpdateMeta' (src/nova/compute/api.py:L104)
- **global-mutation**: AGGREGATE_ACTION_DELETE = 'Delete' (src/nova/compute/api.py:L105)
- **global-mutation**: AGGREGATE_ACTION_ADD = 'Add' (src/nova/compute/api.py:L106)
- **global-mutation**: MIN_COMPUTE_SYNC_COMPUTE_STATUS_DISABLED = 38 (src/nova/compute/api.py:L108)
- **global-mutation**: MIN_COMPUTE_CROSS_CELL_RESIZE = 47 (src/nova/compute/api.py:L109)
- **global-mutation**: MIN_COMPUTE_SAME_HOST_COLD_MIGRATE = 48 (src/nova/compute/api.py:L110)
- **global-mutation**: MIN_VER_NOVA_COMPUTE_MIXED_POLICY = 52 (src/nova/compute/api.py:L113)
- **global-mutation**: SUPPORT_ACCELERATOR_SERVICE_FOR_REBUILD = 53 (src/nova/compute/api.py:L115)
- **global-mutation**: SUPPORT_VNIC_TYPE_ACCELERATOR = 57 (src/nova/compute/api.py:L117)
- **global-mutation**: MIN_COMPUTE_BOOT_WITH_EXTENDED_RESOURCE_REQUEST = 58 (src/nova/compute/api.py:L119)
- **global-mutation**: MIN_COMPUTE_MOVE_WITH_EXTENDED_RESOURCE_REQUEST = 59 (src/nova/compute/api.py:L120)
- **global-mutation**: MIN_COMPUTE_INT_ATTACH_WITH_EXTENDED_RES_REQ = 60 (src/nova/compute/api.py:L121)
- **global-mutation**: SUPPORT_VNIC_TYPE_REMOTE_MANAGED = 61 (src/nova/compute/api.py:L123)
- **global-mutation**: MIN_COMPUTE_VDPA_ATTACH_DETACH = 62 (src/nova/compute/api.py:L124)
- **global-mutation**: MIN_COMPUTE_VDPA_HOTPLUG_LIVE_MIGRATION = 63 (src/nova/compute/api.py:L125)
- **global-mutation**: SUPPORT_SHARES = 67 (src/nova/compute/api.py:L127)
- **global-mutation**: MIN_COMPUTE_SOUND_MODEL_TRAITS = 69 (src/nova/compute/api.py:L129)
- **global-mutation**: MIN_COMPUTE_USB_MODEL_TRAITS = 70 (src/nova/compute/api.py:L130)
- **global-mutation**: MIN_COMPUTE_VTPM_LIVE_MIGRATION = 72 (src/nova/compute/api.py:L132)
- **global-mutation**: MIN_COMPUTE_COLD_MIGRATE_WITH_SHARES = 74 (src/nova/compute/api.py:L134)
- **global-mutation**: CELLS = [] (src/nova/compute/api.py:L139)
- **global-mutation**: CELLS = objects.CellMappingList.get_all( (src/nova/compute/api.py:L356)

## Security Surface

- **sink** (`db-write`): AGGREGATE_ACTION_UPDATE = 'Update' (src/nova/compute/api.py:L103)
- **sink** (`db-write`): base_options.update(options_from_image) (src/nova/compute/api.py:L1247)
- **sink** (`db-write`): instance.update(base_options) (src/nova/compute/api.py:L1521)
- **sink** (`db-write`): """Update local BlockDeviceMappings when ephemeral encryption requested (src/nova/compute/api.py:L1677)
- **sink** (`db-write`): instance.system_metadata.update(system_meta) (src/nova/compute/api.py:L2189)
- **sink** (`db-write`): instance.update(instance_attrs) (src/nova/compute/api.py:L2559)
- **sink** (`db-write`): instance.update(updates) (src/nova/compute/api.py:L3350)
- **sink** (`db-write`): instance.update(updates) (src/nova/compute/api.py:L3363)
- **sink** (`db-write`): instance.update(updates) (src/nova/compute/api.py:L3392)
- **sink** (`db-write`): new_sys_metadata.update({'image_base_image_ref': image_id}) (src/nova/compute/api.py:L3833)
- **sink** (`db-write`): instance.system_metadata.update(new_sys_metadata) (src/nova/compute/api.py:L3835)
- **sink** (`db-write`): instance.update(options_from_image) (src/nova/compute/api.py:L3843)
- **sink** (`db-write`): instance.update(kwargs) (src/nova/compute/api.py:L3853)
- **sink** (`db-write`): instance.system_metadata.update( (src/nova/compute/api.py:L4334)
- **sink** (`db-write`): instance.system_metadata.update( (src/nova/compute/api.py:L4569)
- **sink** (`db-write`): _metadata.update(metadata) (src/nova/compute/api.py:L5567)
- **sink** (`db-write`): elif event.name == 'power-update': (src/nova/compute/api.py:L5999)
- **sink** (`db-write`): """Performs the actual service update operation. (src/nova/compute/api.py:L6406)
- **sink** (`db-write`): service.update(params_to_update) (src/nova/compute/api.py:L6450)
- **sink** (`db-write`): """Update the properties of an aggregate.""" (src/nova/compute/api.py:L6620)
- **sink** (`db-write`): :param aggregate: Aggregate to update (src/nova/compute/api.py:L6692)
- **sink** (`db-write`): aggregate_payload.update({'name': aggregate.name}) (src/nova/compute/api.py:L6854)

