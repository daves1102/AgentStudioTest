# src/nova/network/neutron.py

## Overview

This file implements the `neutron` module, defining 2 classs, 2 constants, 12 functions, 114 methods, 4 staticmethods, 30 imports, 5 side effects, 26 security surface entries.

Lines: total 3989, code 2876, comment 648, blank 465

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/network/neutron.py:L55–L55` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/network/neutron.py:L57–L57` |
| `_load_auth_plugin` | function | — | unexported | `auth_plugin` (src/nova/network/neutron.py:L65) | 3/13 | `src/nova/network/neutron.py:L60–L78` |
| `get_binding_profile` | function | (port) | exported | `port.get(constants.BINDING_PROFILE, {}) or {}` (src/nova/network/neutron.py:L91) | 2/2 | `src/nova/network/neutron.py:L81–L91` |
| `update_instance_cache_with_nw_info` | function | (impl, context, instance, nw_info=None) | exported | `` (src/nova/network/neutron.py:L98) | 7/27 | `src/nova/network/neutron.py:L94–L131` |
| `refresh_cache` | function | (f) | exported | `wrapper` (src/nova/network/neutron.py:L160) | 1/5 | `src/nova/network/neutron.py:L134–L160` |
| `refresh_cache.wrapper` | function | (self, context, *args, **kwargs) | public | `res` (src/nova/network/neutron.py:L159) | — | `src/nova/network/neutron.py:L142–L159` |
| `ClientWrapper` | class | — | exported | not declared | — | `src/nova/network/neutron.py:L164–L208` |
| `ClientWrapper.__init__` | method | (self, base_client, admin) | public | not declared | 1/3 | `src/nova/network/neutron.py:L171–L173` |
| `ClientWrapper.__getattr__` | method | (self, name) | public | `self.proxy(base_attr)` (src/nova/network/neutron.py:L181); `base_attr` (src/nova/network/neutron.py:L183) | 2/5 | `src/nova/network/neutron.py:L175–L183` |
| `ClientWrapper.proxy` | method | (self, obj) | public | `wrapper` (src/nova/network/neutron.py:L208) | 1/3 | `src/nova/network/neutron.py:L185–L208` |
| `ClientWrapper.proxy.wrapper` | function | (*args, **kwargs) | public | `ret` (src/nova/network/neutron.py:L207) | — | `src/nova/network/neutron.py:L186–L207` |
| `_get_auth_plugin` | function | (context, admin=False) | unexported | `service_auth.get_service_user_token_auth_plugin( context, user_auth=user_auth)` (src/nova/network/neutron.py:L222) | 6/8 | `src/nova/network/neutron.py:L211–L227` |
| `get_client` | function | (context, admin=False) | exported | `ClientWrapper(clientv20.Client(**client_args), admin=admin or context.is_admin)` (src/nova/network/neutron.py:L253) | 2/18 | `src/nova/network/neutron.py:L230–L254` |
| `_is_not_duplicate` | function | (item, items, items_list_name, instance) | unexported | `not present` (src/nova/network/neutron.py:L271) | 2/10 | `src/nova/network/neutron.py:L257–L271` |
| `_ensure_no_port_binding_failure` | function | (port) | unexported | not declared | 2/4 | `src/nova/network/neutron.py:L274–L277` |
| `API` | class | — | exported | not declared | — | `src/nova/network/neutron.py:L280–L3983` |
| `API.__init__` | method | (self) | public | not declared | 1/5 | `src/nova/network/neutron.py:L283–L287` |
| `API._update_port_with_migration_profile` | method | (self, instance, port_id, port_profile, admin_client) | private | `updated_port` (src/nova/network/neutron.py:L294) | 2/12 | `src/nova/network/neutron.py:L289–L300` |
| `API._clear_migration_port_profile` | method | (self, context, instance, admin_client, ports) | private | not declared | 4/12 | `src/nova/network/neutron.py:L302–L316` |
| `API._setup_migration_port_profile` | method | (self, context, instance, host, admin_client, ports) | private | not declared | 4/15 | `src/nova/network/neutron.py:L318–L341` |
| `API.setup_networks_on_host` | method | (self, context, instance, host=None, teardown=False) | public | not declared | 8/20 | `src/nova/network/neutron.py:L343–L389` |
| `API._delete_port_bindings` | method | (self, context, ports, host) | private | not declared | 5/16 | `src/nova/network/neutron.py:L391–L422` |
| `API._get_available_networks` | method | (self, context, project_id, net_ids=None, neutron=None, auto_allocate=False) | private | `nets` (src/nova/network/neutron.py:L461) | 4/20 | `src/nova/network/neutron.py:L424–L461` |
| `API._cleanup_created_port` | method | (self, port_client, port_id, instance) | private | not declared | 2/8 | `src/nova/network/neutron.py:L463–L470` |
| `API._create_port_minimal` | method | (self, context, port_client, instance, network_id, fixed_ip=None, security_group_ids=None) | private | `port` (src/nova/network/neutron.py:L533) | 10/59 | `src/nova/network/neutron.py:L472–L561` |
| `API._update_port` | method | (self, port_client, instance, port_id, port_req_body) | private | `port` (src/nova/network/neutron.py:L571) | 3/24 | `src/nova/network/neutron.py:L563–L586` |
| `API._check_external_network_attach` | method | (self, context, nets) | private | not declared | 5/7 | `src/nova/network/neutron.py:L588–L598` |
| `API.unbind_ports` | method | (self, context, ports, detach=True) | public | not declared | 1/3 | `src/nova/network/neutron.py:L600–L609` |
| `API._unbind_ports` | method | (self, context, ports, neutron, port_client=None, detach=True) | private | not declared | 17/67 | `src/nova/network/neutron.py:L611–L711` |
| `API._validate_requested_port_ids` | method | (self, context, instance, neutron, requested_networks) | private | `ports, ordered_networks` (src/nova/network/neutron.py:L789) | 10/26 | `src/nova/network/neutron.py:L713–L789` |
| `API._clean_security_groups` | method | (self, security_groups) | private | `security_groups` (src/nova/network/neutron.py:L802) | 3/6 | `src/nova/network/neutron.py:L791–L802` |
| `API._get_security_group_ids` | method | (self, security_groups, user_security_groups) | private | `security_group_ids` (src/nova/network/neutron.py:L856) | 6/23 | `src/nova/network/neutron.py:L804–L856` |
| `API._process_security_groups` | method | (self, instance, neutron, security_groups) | private | `security_group_ids` (src/nova/network/neutron.py:L912) | 4/20 | `src/nova/network/neutron.py:L858–L912` |
| `API._validate_requested_network_ids` | method | (self, context, instance, neutron, requested_networks, ordered_networks) | private | `{}` (src/nova/network/neutron.py:L973); `{net['id']: net for net in nets}` (src/nova/network/neutron.py:L998) | 15/32 | `src/nova/network/neutron.py:L914–L998` |
| `API._create_ports_for_instance` | method | (self, context, instance, ordered_networks, nets, neutron, security_group_ids) | private | `requests_and_created_ports` (src/nova/network/neutron.py:L1064) | 9/39 | `src/nova/network/neutron.py:L1000–L1064` |
| `API._has_resource_request` | method | (self, context, port, neutron) | private | `bool(resource_request.get(constants.REQUEST_GROUPS, []))` (src/nova/network/neutron.py:L1069); `bool(resource_request)` (src/nova/network/neutron.py:L1071) | 3/6 | `src/nova/network/neutron.py:L1066–L1071` |
| `API.instance_has_extended_resource_request` | method | (self, instance_uuid) | public | `False` (src/nova/network/neutron.py:L1082); `True` (src/nova/network/neutron.py:L1094); `False` (src/nova/network/neutron.py:L1095) | 5/13 | `src/nova/network/neutron.py:L1073–L1095` |
| `API.get_binding_profile_allocation` | method | (self, context, port_id, resource_provider_mapping) | public | `self._get_binding_profile_allocation( context, port, neutron, resource_provider_mapping)` (src/nova/network/neutron.py:L1122); `None` (src/nova/network/neutron.py:L1125) | 2/14 | `src/nova/network/neutron.py:L1097–L1125` |
| `API._get_binding_profile_allocation` | method | (self, context, port, neutron, resource_provider_mapping) | private | `allocation` (src/nova/network/neutron.py:L1163) | 3/17 | `src/nova/network/neutron.py:L1127–L1163` |
| `API.allocate_for_instance` | method | (self, context, instance, requested_networks, security_groups=None, bind_host_id=None, resource_provider_mapping=None, network_arqs=None) | public | `network_model.NetworkInfo([])` (src/nova/network/neutron.py:L1219); `network_model.NetworkInfo([vif for vif in nw_info if vif['id'] in created_port_ids + preexisting_port_ids])` (src/nova/network/neutron.py:L1280) | 7/46 | `src/nova/network/neutron.py:L1165–L1282` |
| `API._update_ports_for_instance` | method | (self, context, instance, neutron, admin_client, requests_and_created_ports, nets, bind_host_id, requested_ports_dict, network_arqs) | private | `(nets_in_requested_order, ports_in_requested_order, preexisting_port_ids, created_port_ids)` (src/nova/network/neutron.py:L1404) | 14/65 | `src/nova/network/neutron.py:L1284–L1405` |
| `API._refresh_neutron_extensions_cache` | method | (self, client) | private | not declared | 4/8 | `src/nova/network/neutron.py:L1407–L1415` |
| `API._has_extension` | method | (self, extension, context=None, client=None) | private | `extension in self.extensions` (src/nova/network/neutron.py:L1429) | 2/5 | `src/nova/network/neutron.py:L1417–L1429` |
| `API.has_multi_provider_extension` | method | (self, context=None, client=None) | public | `self._has_extension(constants.MULTI_PROVIDER, context, client)` (src/nova/network/neutron.py:L1437) | 1/2 | `src/nova/network/neutron.py:L1431–L1437` |
| `API.has_dns_extension` | method | (self, context=None, client=None) | public | `self._has_extension(constants.DNS_INTEGRATION, context, client)` (src/nova/network/neutron.py:L1445) | 1/2 | `src/nova/network/neutron.py:L1439–L1445` |
| `API.has_sg_shared_filter_extension` | method | (self, context=None, client=None) | public | `self._has_extension(constants.SG_SHARED_FILTER, context, client)` (src/nova/network/neutron.py:L1453) | 1/2 | `src/nova/network/neutron.py:L1447–L1453` |
| `API.has_extended_resource_request_extension` | method | (self, context=None, client=None) | public | `self._has_extension( constants.RESOURCE_REQUEST_GROUPS, context, client, )` (src/nova/network/neutron.py:L1462) | 1/6 | `src/nova/network/neutron.py:L1459–L1464` |
| `API.has_vnic_index_extension` | method | (self, context=None, client=None) | public | `self._has_extension(constants.VNIC_INDEX, context, client)` (src/nova/network/neutron.py:L1471) | 1/2 | `src/nova/network/neutron.py:L1466–L1471` |
| `API.has_fip_port_details_extension` | method | (self, context=None, client=None) | public | `self._has_extension(constants.FIP_PORT_DETAILS, context, client)` (src/nova/network/neutron.py:L1478) | 1/2 | `src/nova/network/neutron.py:L1473–L1478` |
| `API.has_substr_port_filtering_extension` | method | (self, context=None, client=None) | public | `self._has_extension( constants.SUBSTR_PORT_FILTERING, context, client )` (src/nova/network/neutron.py:L1486) | 1/4 | `src/nova/network/neutron.py:L1480–L1488` |
| `API.has_segment_extension` | method | (self, context=None, client=None) | public | `self._has_extension( constants.SEGMENT, context, client, )` (src/nova/network/neutron.py:L1495) | 1/4 | `src/nova/network/neutron.py:L1490–L1497` |
| `API.has_port_binding_extension` | method | (self, context=None, client=None) | public | `self._has_extension( constants.PORT_BINDING_EXTENDED, context, client )` (src/nova/network/neutron.py:L1508) | 1/4 | `src/nova/network/neutron.py:L1499–L1510` |
| `API.bind_ports_to_host` | method | (self, context, instance, host, vnic_types=None, port_profiles=None) | public | `{}` (src/nova/network/neutron.py:L1557); `bindings_by_port_id` (src/nova/network/neutron.py:L1598) | 11/36 | `src/nova/network/neutron.py:L1512–L1598` |
| `API.delete_port_binding` | method | (self, context, port_id, host) | public | not declared | 3/11 | `src/nova/network/neutron.py:L1600–L1623` |
| `API._get_vf_pci_device_profile` | method | (self, pci_dev) | private | `vf_profile` (src/nova/network/neutron.py:L1651) | 5/15 | `src/nova/network/neutron.py:L1625–L1651` |
| `API._get_pci_device_profile` | method | (self, pci_dev) | private | `dev_profile` (src/nova/network/neutron.py:L1679) | 5/20 | `src/nova/network/neutron.py:L1653–L1682` |
| `API._populate_neutron_binding_profile` | method | (self, instance, pci_request_id, port_req_body, port_arq) | private | not declared | 4/21 | `src/nova/network/neutron.py:L1684–L1716` |
| `API._populate_pci_mac_address` | method | (instance, pci_request_id, port_req_body) | private | `` (src/nova/network/neutron.py:L1736) | 5/20 | `src/nova/network/neutron.py:L1719–L1747` |
| `API._populate_neutron_extension_values` | method | (self, context, instance, pci_request_id, port_req_body, network=None, neutron=None, bind_host_id=None, port_arq=None) | private | not declared | 4/15 | `src/nova/network/neutron.py:L1749–L1777` |
| `API._update_port_dns_name` | method | (self, context, instance, network, port_id, neutron) | private | not declared | 4/14 | `src/nova/network/neutron.py:L1779–L1804` |
| `API._reset_port_dns_name` | method | (self, network, port_id, client) | private | not declared | 4/8 | `src/nova/network/neutron.py:L1806–L1822` |
| `API._delete_ports` | method | (self, neutron, instance, ports, raise_if_fail=False) | private | not declared | 6/15 | `src/nova/network/neutron.py:L1824–L1838` |
| `API.deallocate_for_instance` | method | (self, context, instance, **kwargs) | public | not declared | 5/19 | `src/nova/network/neutron.py:L1840–L1875` |
| `API.deallocate_port_for_instance` | method | (self, context, instance, port_id) | public | `self.get_instance_nw_info(context, instance), port_allocation` (src/nova/network/neutron.py:L1967) | 15/56 | `src/nova/network/neutron.py:L1877–L1967` |
| `API._delete_nic_metadata` | method | (self, instance, vif) | private | `` (src/nova/network/neutron.py:L1972) | 5/9 | `src/nova/network/neutron.py:L1969–L1979` |
| `API.list_ports` | method | (self, context, **search_opts) | public | `get_client(context).list_ports(**search_opts)` (src/nova/network/neutron.py:L1983) | 1/2 | `src/nova/network/neutron.py:L1981–L1983` |
| `API.show_port` | method | (self, context, port_id) | public | `dict(port=self._show_port(context, port_id))` (src/nova/network/neutron.py:L1997) | 1/2 | `src/nova/network/neutron.py:L1985–L1997` |
| `API._show_port` | method | (self, context, port_id, neutron_client=None, fields=None) | private | `result.get('port')` (src/nova/network/neutron.py:L2016) | 6/17 | `src/nova/network/neutron.py:L1999–L2024` |
| `API.get_instance_nw_info` | method | (self, context, instance, **kwargs) | public | `result` (src/nova/network/neutron.py:L2032) | 1/6 | `src/nova/network/neutron.py:L2026–L2032` |
| `API._get_instance_nw_info` | method | (self, context, instance, networks=None, port_ids=None, admin_client=None, preexisting_port_ids=None, refresh_vif_id=None, force_refresh=False, **kwargs) | private | `network_model.NetworkInfo.hydrate(nw_info)` (src/nova/network/neutron.py:L2060) | 3/21 | `src/nova/network/neutron.py:L2034–L2060` |
| `API._gather_port_ids_and_networks` | method | (self, context, instance, networks=None, port_ids=None, neutron=None) | private | `networks, port_ids` (src/nova/network/neutron.py:L2117) | 14/34 | `src/nova/network/neutron.py:L2062–L2117` |
| `API.add_fixed_ip_to_instance` | method | (self, context, instance, network_id) | public | `self._get_instance_nw_info(context, instance)` (src/nova/network/neutron.py:L2143) | 5/30 | `src/nova/network/neutron.py:L2120–L2152` |
| `API.remove_fixed_ip_from_instance` | method | (self, context, instance, address) | public | `self._get_instance_nw_info(context, instance)` (src/nova/network/neutron.py:L2178) | 5/25 | `src/nova/network/neutron.py:L2155–L2181` |
| `API._get_physnet_tunneled_info` | method | (self, context, neutron, net_id) | private | `physnet_name, False` (src/nova/network/neutron.py:L2211); `(net.get('provider:physical_network'), net.get('provider:network_type') in constants.L3_NETWORK_TYPES)` (src/nova/network/neutron.py:L2223) | 5/18 | `src/nova/network/neutron.py:L2183–L2224` |
| `API._get_trusted_mode_from_port` | method | (port) | private | `strutils.bool_from_string(value)` (src/nova/network/neutron.py:L2237) | 2/4 | `src/nova/network/neutron.py:L2227–L2237` |
| `API._is_remote_managed` | method | (vnic_type) | private | `vnic_type == network_model.VNIC_TYPE_REMOTE_MANAGED` (src/nova/network/neutron.py:L2247) | 1/2 | `src/nova/network/neutron.py:L2240–L2247` |
| `API.is_remote_managed_port` | method | (self, context, port_id) | public | `self._is_remote_managed( port.get('binding:vnic_type', network_model.VNIC_TYPE_NORMAL) )` (src/nova/network/neutron.py:L2256) | 1/5 | `src/nova/network/neutron.py:L2249–L2258` |
| `API._get_port_vnic_info` | method | (self, context, neutron, port_id) | private | `(vnic_type, trusted, network_id, resource_request, numa_policy, device_profile)` (src/nova/network/neutron.py:L2295) | 2/17 | `src/nova/network/neutron.py:L2262–L2296` |
| `API.support_create_with_resource_request` | method | (self, context) | public | `not (self.has_extended_resource_request_extension(context))` (src/nova/network/neutron.py:L2305) | 1/2 | `src/nova/network/neutron.py:L2298–L2305` |
| `API.create_resource_requests` | method | (self, context, requested_networks, pci_requests=None, affinity_policy=None) | public | `None, [], None` (src/nova/network/neutron.py:L2329); `( objects.NetworkMetadata(physnets=physnets, tunneled=tunneled), resource_requests, request_level_params )` (src/nova/network/neutron.py:L2463) | 19/96 | `src/nova/network/neutron.py:L2307–L2467` |
| `API._can_auto_allocate_network` | method | (self, context, neutron) | private | `True` (src/nova/network/neutron.py:L2483); `False` (src/nova/network/neutron.py:L2487) | 2/11 | `src/nova/network/neutron.py:L2469–L2487` |
| `API._auto_allocate_network` | method | (self, instance, neutron) | private | `network` (src/nova/network/neutron.py:L2520) | 3/19 | `src/nova/network/neutron.py:L2489–L2520` |
| `API._ports_needed_per_instance` | method | (self, context, neutron, requested_networks) | private | `ports_needed_per_instance` (src/nova/network/neutron.py:L2629) | 28/72 | `src/nova/network/neutron.py:L2522–L2629` |
| `API.get_requested_resource_for_instance` | method | (self, context, instance_uuid) | public | `resource_requests, request_level_params` (src/nova/network/neutron.py:L2678) | 1/6 | `src/nova/network/neutron.py:L2631–L2678` |
| `API.validate_networks` | method | (self, context, requested_networks, num_instances) | public | `num_instances` (src/nova/network/neutron.py:L2700); `num_instances` (src/nova/network/neutron.py:L2714); `free_ports // ports_needed_per_instance` (src/nova/network/neutron.py:L2716); `num_instances` (src/nova/network/neutron.py:L2717) | 5/24 | `src/nova/network/neutron.py:L2680–L2717` |
| `API._get_instance_uuids_by_ip` | method | (self, context, address) | private | `[{'instance_uuid': port['device_id']} for port in ports if port['device_id']]` (src/nova/network/neutron.py:L2728) | 3/6 | `src/nova/network/neutron.py:L2719–L2729` |
| `API._get_port_id_by_fixed_address` | method | (self, client, instance, address) | private | `port_id` (src/nova/network/neutron.py:L2747) | 5/16 | `src/nova/network/neutron.py:L2731–L2747` |
| `API.associate_floating_ip` | method | (self, context, instance, floating_address, fixed_address, affect_auto_assigned=False) | public | not declared | 4/21 | `src/nova/network/neutron.py:L2750–L2783` |
| `API._update_inst_info_cache_for_disassociated_fip` | method | (self, context, instance, client, fip) | private | not declared | 2/21 | `src/nova/network/neutron.py:L2785–L2819` |
| `API._get_instance_by_uuid_using_api_db` | method | (context, instance_uuid) | private | `objects.Instance.get_by_uuid(context, instance_uuid)` (src/nova/network/neutron.py:L2837); `` (src/nova/network/neutron.py:L2847); `objects.Instance.get_by_uuid(cctxt, instance_uuid)` (src/nova/network/neutron.py:L2854); `` (src/nova/network/neutron.py:L2857) | 4/15 | `src/nova/network/neutron.py:L2822–L2857` |
| `API.get_all` | method | (self, context) | public | `client.list_networks().get('networks')` (src/nova/network/neutron.py:L2862) | 1/3 | `src/nova/network/neutron.py:L2859–L2862` |
| `API.get` | method | (self, context, network_uuid) | public | `client.show_network(network_uuid).get('network') or {}` (src/nova/network/neutron.py:L2868) | 3/6 | `src/nova/network/neutron.py:L2864–L2870` |
| `API.get_fixed_ip_by_address` | method | (self, context, address) | public | `uuid_maps[0]` (src/nova/network/neutron.py:L2876) | 3/9 | `src/nova/network/neutron.py:L2872–L2881` |
| `API.get_floating_ip` | method | (self, context, id) | public | `fip` (src/nova/network/neutron.py:L2916) | 6/23 | `src/nova/network/neutron.py:L2883–L2916` |
| `API.get_floating_ip_by_address` | method | (self, context, address) | public | `fip` (src/nova/network/neutron.py:L2944) | 4/17 | `src/nova/network/neutron.py:L2918–L2944` |
| `API.get_floating_ip_pools` | method | (self, context) | public | `data['networks']` (src/nova/network/neutron.py:L2950) | 1/4 | `src/nova/network/neutron.py:L2946–L2950` |
| `API.get_floating_ips_by_project` | method | (self, context) | public | `fips` (src/nova/network/neutron.py:L2957); `fips` (src/nova/network/neutron.py:L2985) | 10/24 | `src/nova/network/neutron.py:L2952–L2985` |
| `API.get_instance_id_by_floating_address` | method | (self, context, address) | public | `None` (src/nova/network/neutron.py:L2992); `None` (src/nova/network/neutron.py:L3005); `port['device_id']` (src/nova/network/neutron.py:L3007) | 3/12 | `src/nova/network/neutron.py:L2987–L3007` |
| `API.get_vifs_by_instance` | method | (self, context, instance) | public | `objects.VirtualInterfaceList.get_by_instance_uuid(context, instance.uuid)` (src/nova/network/neutron.py:L3010) | 1/3 | `src/nova/network/neutron.py:L3009–L3011` |
| `API._get_floating_ip_pool_id_by_name_or_id` | method | (self, client, name_or_id) | private | `nets[0]['id']` (src/nova/network/neutron.py:L3023) | 4/16 | `src/nova/network/neutron.py:L3013–L3029` |
| `API.allocate_floating_ip` | method | (self, context, pool=None) | public | `fip['floatingip']['floating_ip_address']` (src/nova/network/neutron.py:L3048) | 5/15 | `src/nova/network/neutron.py:L3031–L3048` |
| `API._safe_get_floating_ips` | method | (self, client, **kwargs) | private | `client.list_floatingips(**kwargs)['floatingips']` (src/nova/network/neutron.py:L3053); `[]` (src/nova/network/neutron.py:L3057); `[]` (src/nova/network/neutron.py:L3062) | 5/12 | `src/nova/network/neutron.py:L3050–L3066` |
| `API._get_floating_ip_by_address` | method | (self, client, address) | private | `fips[0]` (src/nova/network/neutron.py:L3077) | 4/9 | `src/nova/network/neutron.py:L3068–L3077` |
| `API._get_floating_ips_by_fixed_and_port` | method | (self, client, fixed_ip, port) | private | `self._safe_get_floating_ips(client, fixed_ip_address=fixed_ip, port_id=port)` (src/nova/network/neutron.py:L3081) | 1/3 | `src/nova/network/neutron.py:L3079–L3082` |
| `API.release_floating_ip` | method | (self, context, address, affect_auto_assigned=False) | public | not declared | 1/3 | `src/nova/network/neutron.py:L3084–L3097` |
| `API.disassociate_and_release_floating_ip` | method | (self, context, instance, floating_ip) | public | not declared | 2/11 | `src/nova/network/neutron.py:L3099–L3120` |
| `API.disassociate_and_release_floating_ip._release_floating_ip_and_refresh_cache` | function | (self, context, instance, floating_ip) | private | not declared | — | `src/nova/network/neutron.py:L3108–L3112` |
| `API._release_floating_ip` | method | (self, context, address, raise_if_associated=True) | private | not declared | 4/12 | `src/nova/network/neutron.py:L3122–L3134` |
| `API.disassociate_floating_ip` | method | (self, context, instance, address, affect_auto_assigned=False) | public | not declared | 1/5 | `src/nova/network/neutron.py:L3137–L3147` |
| `API.migrate_instance_start` | method | (self, context, instance, migration) | public | `` (src/nova/network/neutron.py:L3178); `` (src/nova/network/neutron.py:L3205) | 8/43 | `src/nova/network/neutron.py:L3149–L3246` |
| `API.migrate_instance_finish` | method | (self, context, instance, migration, provider_mappings) | public | not declared | 1/5 | `src/nova/network/neutron.py:L3248–L3262` |
| `API._nw_info_get_ips` | method | (self, client, port) | private | `network_IPs` (src/nova/network/neutron.py:L3275) | 3/12 | `src/nova/network/neutron.py:L3264–L3275` |
| `API._nw_info_get_subnets` | method | (self, context, port, network_IPs, client=None) | private | `subnets` (src/nova/network/neutron.py:L3282) | 4/6 | `src/nova/network/neutron.py:L3277–L3282` |
| `API._nw_info_build_network` | method | (self, context, port, networks, subnets) | private | `network, ovs_interfaceid` (src/nova/network/neutron.py:L3356) | 13/62 | `src/nova/network/neutron.py:L3284–L3356` |
| `API._get_preexisting_port_ids` | method | (self, instance) | private | `[vif['id'] for vif in net_info if vif.get('preserve_on_delete')]` (src/nova/network/neutron.py:L3367) | 4/7 | `src/nova/network/neutron.py:L3358–L3368` |
| `API._build_vif_model` | method | (self, context, client, current_neutron_port, networks, preexisting_port_ids) | private | `network_model.VIF( id=current_neutron_port['id'], address=current_neutron_port['mac_address'], network=network, vnic_type=current_neutron_port.get('binding:vnic_type', network_model.VNIC_TYPE_NORMAL),` (src/nova/network/neutron.py:L3408) | 3/33 | `src/nova/network/neutron.py:L3370–L3422` |
| `API._log_error_if_vnic_type_changed` | method | (self, port_id, old_vnic_type, new_vnic_type, instance) | private | not declared | 3/18 | `src/nova/network/neutron.py:L3424–L3441` |
| `API._build_network_info_model` | method | (self, context, instance, networks=None, port_ids=None, admin_client=None, preexisting_port_ids=None, refresh_vif_id=None, force_refresh=False) | private | `nw_info` (src/nova/network/neutron.py:L3549); `nw_info` (src/nova/network/neutron.py:L3597) | 20/97 | `src/nova/network/neutron.py:L3443–L3597` |
| `API._get_ordered_port_list` | method | (self, context, instance, current_neutron_ports) | private | `port_order_list` (src/nova/network/neutron.py:L3634) | 5/16 | `src/nova/network/neutron.py:L3599–L3634` |
| `API._get_subnets_from_port` | method | (self, context, port, client=None) | private | `[]` (src/nova/network/neutron.py:L3646); `subnets` (src/nova/network/neutron.py:L3698) | 12/43 | `src/nova/network/neutron.py:L3636–L3698` |
| `API.setup_instance_network_on_host` | method | (self, context, instance, host, migration=None, provider_mappings=None) | public | not declared | 1/5 | `src/nova/network/neutron.py:L3700–L3714` |
| `API.cleanup_instance_network_on_host` | method | (self, context, instance, host) | public | `` (src/nova/network/neutron.py:L3733) | 2/12 | `src/nova/network/neutron.py:L3716–L3741` |
| `API._get_pci_mapping_for_migration` | method | (self, instance, migration) | private | `{}` (src/nova/network/neutron.py:L3745); `instance.migration_context.get_pci_mapping_for_migration(revert)` (src/nova/network/neutron.py:L3749) | 3/5 | `src/nova/network/neutron.py:L3743–L3749` |
| `API._get_port_pci_dev` | method | (self, instance, port) | private | `None` (src/nova/network/neutron.py:L3768); `None` (src/nova/network/neutron.py:L3777); `device` (src/nova/network/neutron.py:L3778) | 5/18 | `src/nova/network/neutron.py:L3751–L3778` |
| `API._update_port_binding_for_instance` | method | (self, context, instance, host, migration=None, provider_mappings=None) | private | not declared | 17/82 | `src/nova/network/neutron.py:L3780–L3904` |
| `API.update_instance_vnic_index` | method | (self, context, instance, vif, index) | public | not declared | 3/11 | `src/nova/network/neutron.py:L3906–L3927` |
| `API.get_segment_ids_for_network` | method | (self, context, network_id) | public | `[]` (src/nova/network/neutron.py:L3945); `[subnet['segment_id'] for subnet in subnets if subnet.get('segment_id') is not None]` (src/nova/network/neutron.py:L3957) | 5/16 | `src/nova/network/neutron.py:L3929–L3958` |
| `API.get_segment_id_for_subnet` | method | (self, context, subnet_id) | public | `None` (src/nova/network/neutron.py:L3976); `subnet.get('segment_id')` (src/nova/network/neutron.py:L3983) | 3/14 | `src/nova/network/neutron.py:L3960–L3983` |
| `_ensure_requested_network_ordering` | function | (accessor, unordered, preferred) | unexported | not declared | 2/3 | `src/nova/network/neutron.py:L3986–L3989` |
| `API._populate_pci_mac_address` | staticmethod | — | private | not declared | — | `src/nova/network/neutron.py:L1718–L1747` |
| `API._get_trusted_mode_from_port` | staticmethod | — | private | not declared | — | `src/nova/network/neutron.py:L2226–L2237` |
| `API._is_remote_managed` | staticmethod | — | private | not declared | — | `src/nova/network/neutron.py:L2239–L2247` |
| `API._get_instance_by_uuid_using_api_db` | staticmethod | — | private | not declared | — | `src/nova/network/neutron.py:L2821–L2857` |

## Dependencies

- `import copy` (src/nova/network/neutron.py:L21)
- `import functools` (src/nova/network/neutron.py:L22)
- `import inspect` (src/nova/network/neutron.py:L23)
- `import time` (src/nova/network/neutron.py:L24)
- `import typing as ty` (src/nova/network/neutron.py:L25)
- `collections`: imports `defaultdict` (src/nova/network/neutron.py:L27)
- `neutronclient.common`: imports `exceptions as neutron_client_exc` (src/nova/network/neutron.py:L29)
- `neutronclient.v2_0`: imports `client as clientv20` (src/nova/network/neutron.py:L30)
- `oslo_concurrency`: imports `lockutils` (src/nova/network/neutron.py:L31)
- `oslo_log`: imports `log as logging` (src/nova/network/neutron.py:L32)
- `oslo_utils`: imports `excutils` (src/nova/network/neutron.py:L33)
- `oslo_utils`: imports `strutils` (src/nova/network/neutron.py:L34)
- `oslo_utils`: imports `uuidutils` (src/nova/network/neutron.py:L35)
- `nova.accelerator`: imports `cyborg` (src/nova/network/neutron.py:L37)
- `nova.compute`: imports `utils as compute_utils` (src/nova/network/neutron.py:L38)
- `import nova.conf` (src/nova/network/neutron.py:L39)
- `nova`: imports `context as nova_context` (src/nova/network/neutron.py:L40)
- `nova`: imports `exception` (src/nova/network/neutron.py:L41)
- `nova.i18n`: imports `_` (src/nova/network/neutron.py:L42)
- `nova.network`: imports `constants` (src/nova/network/neutron.py:L43)
- `nova.network`: imports `model as network_model` (src/nova/network/neutron.py:L44)
- `nova`: imports `objects` (src/nova/network/neutron.py:L45)
- `nova.objects`: imports `fields as obj_fields` (src/nova/network/neutron.py:L46)
- `nova.pci`: imports `request as pci_request` (src/nova/network/neutron.py:L47)
- `nova.pci`: imports `utils as pci_utils` (src/nova/network/neutron.py:L48)
- `nova.pci`: imports `whitelist as pci_whitelist` (src/nova/network/neutron.py:L49)
- `nova.policies`: imports `servers as servers_policies` (src/nova/network/neutron.py:L50)
- `nova`: imports `profiler` (src/nova/network/neutron.py:L51)
- `nova`: imports `service_auth` (src/nova/network/neutron.py:L52)
- `nova`: imports `utils` (src/nova/network/neutron.py:L53)

## Side Effects

- **network**: 'https://docs.openstack.org/neutron/latest/install/') (src/nova/network/neutron.py:L76)
- **network**: return service_auth.get_service_user_token_auth_plugin( (src/nova/network/neutron.py:L222)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/network/neutron.py:L55)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/network/neutron.py:L57)
- **global-mutation**: FAILED_VIF_TYPES = (network_model.VIF_TYPE_UNBOUND, (src/nova/network/neutron.py:L3790)

## Security Surface

- **sink** (`db-write`): LOG.debug('Instance is deleted, no further info cache update', (src/nova/network/neutron.py:L96)
- **sink** (`db-write`): """Decorator to update the instance_info_cache (src/nova/network/neutron.py:L135)
- **privilege** (`crypto-key`): return service_auth.get_service_user_token_auth_plugin( (src/nova/network/neutron.py:L222)
- **sink** (`db-write`): LOG.error("Unable to update binding profile " (src/nova/network/neutron.py:L297)
- **sink** (`db-write`): one network, we update ordered_networks so we will connect the (src/nova/network/neutron.py:L926)
- **sink** (`db-write`): that will be used to create and update ports (src/nova/network/neutron.py:L935)
- **sink** (`db-write`): """Update ports from network_requests. (src/nova/network/neutron.py:L1287)
- **privilege** (`crypto-key`): :param client: keystoneauth1.adapter.Adapter (src/nova/network/neutron.py:L1421)
- **sink** (`db-write`): vf_profile.update({'capabilities': pci_net_caps}) (src/nova/network/neutron.py:L1649)
- **sink** (`db-write`): dev_profile.update( (src/nova/network/neutron.py:L1665)
- **sink** (`db-write`): profile.update(self._get_pci_device_profile(pci_dev)) (src/nova/network/neutron.py:L1709)
- **sink** (`db-write`): profile.update(cyborg.get_arq_pci_device_profile(port_arq)) (src/nova/network/neutron.py:L1715)
- **sink** (`db-write`): """Update an instance port dns_name attribute with instance.hostname. (src/nova/network/neutron.py:L1781)
- **sink** (`db-write`): an additional update request. Only a very small fraction of ports will (src/nova/network/neutron.py:L1790)
- **sink** (`db-write`): require this additional update request. (src/nova/network/neutron.py:L1791)
- **sink** (`db-write`): msg = ("Unable to update port %(portid)s on subnet " (src/nova/network/neutron.py:L2145)
- **sink** (`db-write`): msg = ("Unable to update port %(portid)s with" (src/nova/network/neutron.py:L2174)
- **sink** (`db-write`): """Update the network info cache when a floating IP is re-assigned. (src/nova/network/neutron.py:L2787)
- **sink** (`db-write`): search_opts.update({'id': name_or_id}) (src/nova/network/neutron.py:L3016)
- **sink** (`db-write`): search_opts.update({'name': name_or_id}) (src/nova/network/neutron.py:L3018)
- **sink** (`db-write`): binding_profile.update( (src/nova/network/neutron.py:L3834)
- **sink** (`db-write`): binding_profile.update( (src/nova/network/neutron.py:L3848)
- **sink** (`db-write`): LOG.exception("Unable to update binding details " (src/nova/network/neutron.py:L3902)
- **sink** (`db-write`): """Update instance vnic index. (src/nova/network/neutron.py:L3907)
- **sink** (`db-write`): When the 'VNIC index' extension is supported this method will update (src/nova/network/neutron.py:L3909)
- **sink** (`db-write`): LOG.exception('Unable to update instance VNIC index ' (src/nova/network/neutron.py:L3925)

