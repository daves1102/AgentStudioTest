# src/nova/tests/unit/network/test_neutron.py

## Overview

This file implements the `test_neutron` module, defining 14 classs, 2 constants, 13 functions, 433 methods, 4 staticmethods, 1 variable, 34 imports, 7 side effects, 9 security surface entries.

Lines: total 10258, code 8826, comment 375, blank 1057

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/network/test_neutron.py:L54–L54` |
| `NEUTRON_CLIENT_EXCEPTION` | constant | — | exported | not declared | — | `src/nova/tests/unit/network/test_neutron.py:L60–L60` |
| `fake_info_cache` | variable | — | exported | not declared | — | `src/nova/tests/unit/network/test_neutron.py:L62–L69` |
| `TestNeutronClient` | class | — | exported | not declared | — | `src/nova/tests/unit/network/test_neutron.py:L72–L267` |
| `TestNeutronClient.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_neutron.py:L74–L77` |
| `TestNeutronClient.test_ksa_adapter_loading_defaults` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/network/test_neutron.py:L79–L92` |
| `TestNeutronClient.test_ksa_adapter_loading` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/network/test_neutron.py:L94–L110` |
| `TestNeutronClient.test_withtoken` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/network/test_neutron.py:L112–L125` |
| `TestNeutronClient.test_withouttoken` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/network/test_neutron.py:L127–L131` |
| `TestNeutronClient.test_non_admin_with_service_token` | method | (self, mock_load) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_neutron.py:L134–L143` |
| `TestNeutronClient.test_admin_with_service_token` | method | (self, mock_load, mock_service_auth) | public | not declared | 1/10 | `src/nova/tests/unit/network/test_neutron.py:L147–L158` |
| `TestNeutronClient.test_Unauthorized_user` | method | (self, mock_list_networks) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_neutron.py:L162–L169` |
| `TestNeutronClient.test_Unauthorized_admin` | method | (self, mock_list_networks) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_neutron.py:L173–L180` |
| `TestNeutronClient.test_Forbidden` | method | (self, mock_create_port) | public | not declared | 1/9 | `src/nova/tests/unit/network/test_neutron.py:L184–L192` |
| `TestNeutronClient.test_withtoken_context_is_admin` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/network/test_neutron.py:L194–L208` |
| `TestNeutronClient.test_withouttoken_keystone_connection_error` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/network/test_neutron.py:L210–L215` |
| `TestNeutronClient.test_reuse_admin_token` | method | (self, m) | public | not declared | 1/13 | `src/nova/tests/unit/network/test_neutron.py:L219–L237` |
| `TestNeutronClient.test_reuse_admin_token.token_vals` | function | (*args, **kwargs) | public | `tokens.pop()` (src/nova/tests/unit/network/test_neutron.py:L227) | — | `src/nova/tests/unit/network/test_neutron.py:L226–L227` |
| `TestNeutronClient.test_load_auth_plugin_failed` | method | (self, mock_load_from_conf, mock_log_err) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_neutron.py:L241–L248` |
| `TestNeutronClient.test_wrapper_exception_translation` | method | (self, m) | public | not declared | 1/7 | `src/nova/tests/unit/network/test_neutron.py:L252–L258` |
| `TestNeutronClient.test_neutron_http_retries` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_neutron.py:L260–L267` |
| `TestAPIBase` | class | — | exported | not declared | — | `src/nova/tests/unit/network/test_neutron.py:L270–L812` |
| `TestAPIBase.setUp` | method | (self) | public | not declared | 1/185 | `src/nova/tests/unit/network/test_neutron.py:L272–L467` |
| `TestAPIBase._fake_instance_object` | method | (self, instance) | private | `fake_instance.fake_instance_obj(self.context, **instance)` (src/nova/tests/unit/network/test_neutron.py:L470) | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L469–L470` |
| `TestAPIBase._fake_instance_info_cache` | method | (self, nw_info, instance_uuid=None) | private | `info_cache` (src/nova/tests/unit/network/test_neutron.py:L484) | 2/13 | `src/nova/tests/unit/network/test_neutron.py:L472–L484` |
| `TestAPIBase._fake_instance_object_with_info_cache` | method | (self, instance) | private | `instance` (src/nova/tests/unit/network/test_neutron.py:L491) | 1/6 | `src/nova/tests/unit/network/test_neutron.py:L486–L491` |
| `TestAPIBase._test_allocate_for_instance_with_virtual_interface` | method | (self, net_idx=1, **kwargs) | private | `self._test_allocate_for_instance( net_idx=net_idx, requested_networks=requested_networks, **kwargs)` (src/nova/tests/unit/network/test_neutron.py:L506) | 1/10 | `src/nova/tests/unit/network/test_neutron.py:L493–L508` |
| `TestAPIBase._test_allocate_for_instance_with_virtual_interface._new_vif` | function | (*args) | private | `m` (src/nova/tests/unit/network/test_neutron.py:L500) | — | `src/nova/tests/unit/network/test_neutron.py:L497–L500` |
| `TestAPIBase._test_allocate_for_instance` | method | (self, mock_get_client, mock_get_nw, mock_populate, net_idx=1, requested_networks=None, exception=None, context=None, **kwargs) | private | `nw_info, mocked_client` (src/nova/tests/unit/network/test_neutron.py:L678); `nw_info, mocked_client` (src/nova/tests/unit/network/test_neutron.py:L686); `nw_info, mocked_client` (src/nova/tests/unit/network/test_neutron.py:L711) | 25/164 | `src/nova/tests/unit/network/test_neutron.py:L514–L711` |
| `TestAPIBase._stub_allocate_for_instance_show_port` | method | (self, nets, ports, fixed_ips, req_net_ids, ordered_networks, requested_networks, mocked_client, **kwargs) | private | `expected_show_port_calls` (src/nova/tests/unit/network/test_neutron.py:L763) | 13/49 | `src/nova/tests/unit/network/test_neutron.py:L713–L763` |
| `TestAPIBase._stub_allocate_for_instance_list_networks` | method | (self, req_net_ids, nets, mocked_client) | private | `expected_list_networks_calls` (src/nova/tests/unit/network/test_neutron.py:L778) | 2/13 | `src/nova/tests/unit/network/test_neutron.py:L765–L778` |
| `TestAPIBase._stub_allocate_for_instance_create_port` | method | (self, ordered_networks, fixed_ips, nets, mocked_client) | private | `expected_create_port_calls` (src/nova/tests/unit/network/test_neutron.py:L812) | 7/30 | `src/nova/tests/unit/network/test_neutron.py:L780–L812` |
| `TestAPI` | class | — | exported | not declared | — | `src/nova/tests/unit/network/test_neutron.py:L815–L7810` |
| `TestAPI._test_get_instance_nw_info` | method | (self, number, mock_get_client, mock_cache_update, mock_cache_get) | private | not declared | 16/63 | `src/nova/tests/unit/network/test_neutron.py:L822–L893` |
| `TestAPI._verify_nw_info` | method | (self, nw_inf, index=0) | private | not declared | 1/16 | `src/nova/tests/unit/network/test_neutron.py:L895–L911` |
| `TestAPI.test_get_instance_nw_info_1` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L913–L915` |
| `TestAPI.test_get_instance_nw_info_2` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L917–L919` |
| `TestAPI.test_get_instance_nw_info_with_nets_add_interface` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/network/test_neutron.py:L921–L939` |
| `TestAPI.test_get_instance_nw_info_remove_ports_from_neutron` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/network/test_neutron.py:L941–L958` |
| `TestAPI.test_get_instance_nw_info_ignores_neutron_ports` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/network/test_neutron.py:L960–L982` |
| `TestAPI.test_get_instance_nw_info_ignores_neutron_ports_empty_cache` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/network/test_neutron.py:L984–L995` |
| `TestAPI._test_get_instance_nw_info_helper` | method | (self, network_cache, current_neutron_ports, mock_get_client, mock_cache_update, mock_cache_get, networks=None, port_ids=None) | private | not declared | 18/112 | `src/nova/tests/unit/network/test_neutron.py:L1001–L1140` |
| `TestAPI.test_get_instance_nw_info_without_subnet` | method | (self, mock_get_client, mock_cache_update, mock_cache_get, mock_get_physnet) | public | not declared | 2/34 | `src/nova/tests/unit/network/test_neutron.py:L1148–L1186` |
| `TestAPI.test_refresh_neutron_extensions_cache` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/network/test_neutron.py:L1188–L1196` |
| `TestAPI.test_allocate_for_instance_1` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L1198–L1200` |
| `TestAPI.test_allocate_for_instance_2` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/network/test_neutron.py:L1202–L1205` |
| `TestAPI.test_allocate_for_instance_accepts_only_portid` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/network/test_neutron.py:L1207–L1222` |
| `TestAPI.test_allocate_for_instance_without_requested_networks` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/network/test_neutron.py:L1224–L1226` |
| `TestAPI.test_allocate_for_instance_with_requested_non_available_network` | method | (self) | public | not declared | 5/15 | `src/nova/tests/unit/network/test_neutron.py:L1228–L1248` |
| `TestAPI.test_allocate_for_instance_with_requested_networks` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/network/test_neutron.py:L1250–L1256` |
| `TestAPI.test_allocate_for_instance_with_no_subnet_defined` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_neutron.py:L1258–L1266` |
| `TestAPI.test_allocate_for_instance_with_invalid_network_id` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_neutron.py:L1268–L1275` |
| `TestAPI.test_allocate_for_instance_with_requested_networks_with_fixedip` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/network/test_neutron.py:L1277–L1283` |
| `TestAPI.test_allocate_for_instance_with_requested_networks_with_port` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/network/test_neutron.py:L1285–L1289` |
| `TestAPI.test_allocate_for_instance_no_networks` | method | (self, mock_get_client) | public | not declared | 1/17 | `src/nova/tests/unit/network/test_neutron.py:L1292–L1309` |
| `TestAPI.test_allocate_for_instance_ex1` | method | (self, mock_unbind, mock_create_ports, mock_populate, mock_get_client) | public | not declared | 5/60 | `src/nova/tests/unit/network/test_neutron.py:L1315–L1382` |
| `TestAPI.test_allocate_for_instance_ex2` | method | (self, mock_get_client) | public | not declared | 2/29 | `src/nova/tests/unit/network/test_neutron.py:L1385–L1419` |
| `TestAPI.test_allocate_for_instance_no_port_or_network` | method | (self, mock_get_client, mock_get_available) | public | not declared | 1/18 | `src/nova/tests/unit/network/test_neutron.py:L1423–L1442` |
| `TestAPI.test_allocate_for_instance_second_time` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/network/test_neutron.py:L1444–L1450` |
| `TestAPI.test_allocate_for_instance_port_in_use` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/network/test_neutron.py:L1452–L1459` |
| `TestAPI.test_allocate_for_instance_port_not_found` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/network/test_neutron.py:L1461–L1468` |
| `TestAPI.test_allocate_for_instance_port_invalid_tenantid` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_neutron.py:L1470–L1477` |
| `TestAPI.test_allocate_for_instance_with_externalnet_forbidden` | method | (self, mock_get_client) | public | not declared | 1/21 | `src/nova/tests/unit/network/test_neutron.py:L1480–L1505` |
| `TestAPI.test_allocate_for_instance_with_externalnet_multiple` | method | (self, mock_get_client) | public | not declared | 1/20 | `src/nova/tests/unit/network/test_neutron.py:L1508–L1532` |
| `TestAPI.test_allocate_for_instance_with_externalnet_admin_ctx` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_neutron.py:L1534–L1540` |
| `TestAPI.test_allocate_for_instance_with_external_shared_net` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/network/test_neutron.py:L1542–L1545` |
| `TestAPI._test_deallocate_for_instance` | method | (self, number, mock_get_client, mock_cache_update, requested_networks=None) | private | not declared | 10/72 | `src/nova/tests/unit/network/test_neutron.py:L1550–L1627` |
| `TestAPI.test_deallocate_for_instance_1_with_requested` | method | (self, mock_preexisting) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_neutron.py:L1630–L1638` |
| `TestAPI.test_deallocate_for_instance_2_with_requested` | method | (self, mock_preexisting) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_neutron.py:L1641–L1649` |
| `TestAPI.test_deallocate_for_instance_1` | method | (self, mock_preexisting) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_neutron.py:L1652–L1656` |
| `TestAPI.test_deallocate_for_instance_2` | method | (self, mock_preexisting) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_neutron.py:L1659–L1663` |
| `TestAPI.test_deallocate_for_instance_port_not_found` | method | (self, mock_preexisting, mock_get_client) | public | not declared | 2/27 | `src/nova/tests/unit/network/test_neutron.py:L1667–L1698` |
| `TestAPI._test_deallocate_port_for_instance` | method | (self, number, mock_get_client, mock_cache_get, mock_get_physnet) | private | not declared | 15/66 | `src/nova/tests/unit/network/test_neutron.py:L1704–L1776` |
| `TestAPI.test_deallocate_port_for_instance_1` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L1778–L1780` |
| `TestAPI.test_deallocate_port_for_instance_2` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L1782–L1784` |
| `TestAPI.test_list_ports` | method | (self, mock_get_client) | public | not declared | 1/7 | `src/nova/tests/unit/network/test_neutron.py:L1787–L1795` |
| `TestAPI.test_show_port` | method | (self, mock_get_client) | public | not declared | 1/7 | `src/nova/tests/unit/network/test_neutron.py:L1798–L1806` |
| `TestAPI.test_validate_networks` | method | (self, mock_get_client) | public | not declared | 1/16 | `src/nova/tests/unit/network/test_neutron.py:L1809–L1826` |
| `TestAPI.test_validate_networks_without_port_quota_on_network_side` | method | (self, mock_get_client) | public | not declared | 1/14 | `src/nova/tests/unit/network/test_neutron.py:L1829–L1844` |
| `TestAPI.test_validate_networks_ex_1` | method | (self, mock_get_client) | public | not declared | 1/13 | `src/nova/tests/unit/network/test_neutron.py:L1847–L1861` |
| `TestAPI.test_validate_networks_ex_2` | method | (self, mock_get_client) | public | not declared | 1/16 | `src/nova/tests/unit/network/test_neutron.py:L1864–L1881` |
| `TestAPI.test_validate_networks_duplicate_enable` | method | (self, mock_get_client) | public | not declared | 1/16 | `src/nova/tests/unit/network/test_neutron.py:L1884–L1903` |
| `TestAPI.test_allocate_for_instance_with_requested_networks_duplicates` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/network/test_neutron.py:L1905–L1911` |
| `TestAPI.test_allocate_for_instance_requested_networks_duplicates_port` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/network/test_neutron.py:L1913–L1919` |
| `TestAPI.test_allocate_for_instance_requested_networks_duplicates_combo` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_neutron.py:L1921–L1929` |
| `TestAPI.test_validate_networks_not_specified` | method | (self, mock_get_client) | public | not declared | 1/14 | `src/nova/tests/unit/network/test_neutron.py:L1932–L1946` |
| `TestAPI.test_validate_networks_port_not_found` | method | (self, mock_get_client) | public | not declared | 1/14 | `src/nova/tests/unit/network/test_neutron.py:L1949–L1966` |
| `TestAPI.test_validate_networks_port_show_raises_non404` | method | (self, mock_get_client) | public | not declared | 1/20 | `src/nova/tests/unit/network/test_neutron.py:L1969–L1991` |
| `TestAPI.test_validate_networks_port_in_use` | method | (self, mock_get_client) | public | not declared | 1/12 | `src/nova/tests/unit/network/test_neutron.py:L1994–L2006` |
| `TestAPI.test_validate_networks_port_no_subnet_id` | method | (self, mock_get_client) | public | not declared | 1/14 | `src/nova/tests/unit/network/test_neutron.py:L2009–L2024` |
| `TestAPI.test_validate_networks_no_subnet_id` | method | (self, mock_get_client) | public | not declared | 1/12 | `src/nova/tests/unit/network/test_neutron.py:L2027–L2038` |
| `TestAPI.test_validate_networks_ports_in_same_network_enable` | method | (self, mock_get_client) | public | not declared | 2/22 | `src/nova/tests/unit/network/test_neutron.py:L2041–L2067` |
| `TestAPI.test_validate_networks_ports_not_in_same_network` | method | (self, mock_get_client) | public | not declared | 2/22 | `src/nova/tests/unit/network/test_neutron.py:L2070–L2094` |
| `TestAPI.test_validate_networks_no_quota` | method | (self, mock_get_client) | public | not declared | 1/18 | `src/nova/tests/unit/network/test_neutron.py:L2097–L2118` |
| `TestAPI.test_validate_networks_with_ports_and_networks` | method | (self, mock_get_client) | public | not declared | 1/23 | `src/nova/tests/unit/network/test_neutron.py:L2121–L2147` |
| `TestAPI.test_validate_networks_one_port_and_no_networks` | method | (self, mock_get_client) | public | not declared | 1/14 | `src/nova/tests/unit/network/test_neutron.py:L2150–L2167` |
| `TestAPI.test_validate_networks_some_quota` | method | (self, mock_get_client) | public | not declared | 1/18 | `src/nova/tests/unit/network/test_neutron.py:L2170–L2192` |
| `TestAPI.test_validate_networks_unlimited_quota` | method | (self, mock_get_client) | public | not declared | 1/15 | `src/nova/tests/unit/network/test_neutron.py:L2195–L2214` |
| `TestAPI.test_validate_networks_no_quota_but_ports_supplied` | method | (self, mock_get_client) | public | not declared | 2/24 | `src/nova/tests/unit/network/test_neutron.py:L2217–L2243` |
| `TestAPI._test_get_fixed_ip_by_address_with_exception` | method | (self, mock_get_client, port_data=None, exception=None) | private | `result` (src/nova/tests/unit/network/test_neutron.py:L2267) | 3/19 | `src/nova/tests/unit/network/test_neutron.py:L2246–L2267` |
| `TestAPI.test_get_fixed_ip_by_address_fails_for_no_ports` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/network/test_neutron.py:L2269–L2271` |
| `TestAPI.test_get_fixed_ip_by_address_succeeds_for_1_port` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_neutron.py:L2273–L2276` |
| `TestAPI.test_get_fixed_ip_by_address_fails_for_more_than_1_port` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/network/test_neutron.py:L2278–L2280` |
| `TestAPI._test_get_available_networks` | method | (self, prv_nets, pub_nets, mock_get_client, req_ids=None, context=None) | private | not declared | 4/23 | `src/nova/tests/unit/network/test_neutron.py:L2283–L2307` |
| `TestAPI.test_get_available_networks_all_private` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L2309–L2310` |
| `TestAPI.test_get_available_networks_all_public` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L2312–L2313` |
| `TestAPI.test_get_available_networks_private_and_public` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L2315–L2316` |
| `TestAPI.test_get_available_networks_with_network_ids` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/network/test_neutron.py:L2318–L2323` |
| `TestAPI.test_get_available_networks_with_custom_policy` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/network/test_neutron.py:L2325–L2330` |
| `TestAPI.test_get_floating_ip_pools` | method | (self, mock_get_client) | public | not declared | 1/11 | `src/nova/tests/unit/network/test_neutron.py:L2333–L2345` |
| `TestAPI.test_get_floating_ip_by_address_not_found` | method | (self, mock_get_client) | public | not declared | 1/11 | `src/nova/tests/unit/network/test_neutron.py:L2348–L2358` |
| `TestAPI.test_get_floating_ip_by_id_not_found` | method | (self, mock_get_client) | public | not declared | 1/11 | `src/nova/tests/unit/network/test_neutron.py:L2361–L2371` |
| `TestAPI.test_get_floating_ip_raises_non404` | method | (self, mock_get_client) | public | not declared | 1/11 | `src/nova/tests/unit/network/test_neutron.py:L2374–L2384` |
| `TestAPI._test_get_floating_ip` | method | (self, fip_ext_enabled, has_port, mock_ntrn, mock_refresh) | private | not declared | 5/43 | `src/nova/tests/unit/network/test_neutron.py:L2388–L2435` |
| `TestAPI.test_get_floating_ip_with_fip_port_details_ext` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L2437–L2439` |
| `TestAPI.test_get_floating_ip_without_fip_port_details_ext` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L2441–L2443` |
| `TestAPI.test_get_floating_ip_without_port` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L2445–L2447` |
| `TestAPI.test_get_floating_ip_by_address_multiple_found` | method | (self, mock_get_client) | public | not declared | 1/12 | `src/nova/tests/unit/network/test_neutron.py:L2450–L2461` |
| `TestAPI._test_get_floating_ip_by_address` | method | (self, fip_ext_enabled, has_port, mock_ntrn, mock_refresh) | private | not declared | 5/45 | `src/nova/tests/unit/network/test_neutron.py:L2465–L2514` |
| `TestAPI.test_get_floating_ip_by_address_with_fip_port_details_ext` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L2516–L2518` |
| `TestAPI.test_get_floating_ip_by_address_without_fip_port_details_ext` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L2520–L2522` |
| `TestAPI.test_get_floating_ip_by_address_without_port` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L2524–L2526` |
| `TestAPI._test_get_instance_id_by_floating_address` | method | (self, fip_data, mock_get_client, associated=False) | private | not declared | 3/22 | `src/nova/tests/unit/network/test_neutron.py:L2529–L2552` |
| `TestAPI.test_get_instance_id_by_floating_address` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L2554–L2555` |
| `TestAPI.test_get_instance_id_by_floating_address_associated` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/network/test_neutron.py:L2557–L2559` |
| `TestAPI.test_allocate_floating_ip` | method | (self, mock_get_client) | public | not declared | 1/18 | `src/nova/tests/unit/network/test_neutron.py:L2562–L2581` |
| `TestAPI.test_allocate_floating_ip_addr_gen_fail` | method | (self, mock_get_client) | public | not declared | 1/19 | `src/nova/tests/unit/network/test_neutron.py:L2584–L2603` |
| `TestAPI.test_allocate_floating_ip_exhausted_fail` | method | (self, mock_get_client) | public | not declared | 1/19 | `src/nova/tests/unit/network/test_neutron.py:L2606–L2625` |
| `TestAPI.test_allocate_floating_ip_with_pool_id` | method | (self, mock_get_client) | public | not declared | 1/17 | `src/nova/tests/unit/network/test_neutron.py:L2628–L2646` |
| `TestAPI.test_allocate_floating_ip_with_default_pool` | method | (self, mock_get_client) | public | not declared | 1/18 | `src/nova/tests/unit/network/test_neutron.py:L2649–L2668` |
| `TestAPI.test_disassociate_and_release_floating_ip` | method | (self, mock_get_client) | public | not declared | 1/14 | `src/nova/tests/unit/network/test_neutron.py:L2671–L2686` |
| `TestAPI.test_disassociate_and_release_floating_ip_with_instance` | method | (self, mock_get_client, mock_cache_update, mock_get_nw) | public | not declared | 1/19 | `src/nova/tests/unit/network/test_neutron.py:L2693–L2713` |
| `TestAPI.test_associate_floating_ip` | method | (self, mock_get_client, mock_cache_update, mock_get_nw) | public | not declared | 1/24 | `src/nova/tests/unit/network/test_neutron.py:L2720–L2746` |
| `TestAPI.test_reassociate_floating_ip` | method | (self, mock_get, mock_get_client, mock_cache_update, mock_get_nw) | public | not declared | 1/35 | `src/nova/tests/unit/network/test_neutron.py:L2754–L2791` |
| `TestAPI.test_associate_floating_ip_not_found_fixed_ip` | method | (self, mock_get_client) | public | not declared | 1/14 | `src/nova/tests/unit/network/test_neutron.py:L2794–L2808` |
| `TestAPI.test_disassociate_floating_ip` | method | (self, mock_get_client, mock_cache_update, mock_get_nw) | public | not declared | 1/18 | `src/nova/tests/unit/network/test_neutron.py:L2815–L2834` |
| `TestAPI.test_add_fixed_ip_to_instance` | method | (self, mock_get_client, mock_cache_update, mock_get_nw) | public | not declared | 1/32 | `src/nova/tests/unit/network/test_neutron.py:L2841–L2874` |
| `TestAPI.test_remove_fixed_ip_from_instance` | method | (self, mock_get_client, mock_cache_update, mock_get_nw) | public | not declared | 1/27 | `src/nova/tests/unit/network/test_neutron.py:L2881–L2909` |
| `TestAPI.test_list_floating_ips_without_l3_support` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_neutron.py:L2911–L2920` |
| `TestAPI.test_nw_info_get_ips` | method | (self, mock_get_floating) | public | not declared | 1/14 | `src/nova/tests/unit/network/test_neutron.py:L2923–L2938` |
| `TestAPI.test_nw_info_get_subnets` | method | (self, mock_get_subnets) | public | not declared | 2/16 | `src/nova/tests/unit/network/test_neutron.py:L2941–L2958` |
| `TestAPI._test_nw_info_build_network` | method | (self, vif_type, mock_get_client, mock_get_physnet) | private | `net, iid` (src/nova/tests/unit/network/test_neutron.py:L2991) | 1/25 | `src/nova/tests/unit/network/test_neutron.py:L2963–L2991` |
| `TestAPI.test_nw_info_build_network_ovs` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/network/test_neutron.py:L2993–L2997` |
| `TestAPI.test_nw_info_build_network_dvs` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/network/test_neutron.py:L2999–L3004` |
| `TestAPI.test_nw_info_build_network_bridge` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_neutron.py:L3006–L3009` |
| `TestAPI.test_nw_info_build_network_tap` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/network/test_neutron.py:L3011–L3015` |
| `TestAPI.test_nw_info_build_network_other` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/network/test_neutron.py:L3017–L3021` |
| `TestAPI.test_nw_info_build_no_match` | method | (self, mock_get_client, mock_get_physnet) | public | not declared | 1/20 | `src/nova/tests/unit/network/test_neutron.py:L3026–L3045` |
| `TestAPI.test_nw_info_build_network_vhostuser` | method | (self, mock_get_client, mock_get_physnet) | public | not declared | 1/28 | `src/nova/tests/unit/network/test_neutron.py:L3050–L3077` |
| `TestAPI.test_nw_info_build_network_vhostuser_fp` | method | (self, mock_get_client, mock_get_physnet) | public | not declared | 1/27 | `src/nova/tests/unit/network/test_neutron.py:L3082–L3108` |
| `TestAPI._test_nw_info_build_custom_bridge` | method | (self, vif_type, mock_get_client, mock_get_physnet, extra_details=None) | private | not declared | 2/25 | `src/nova/tests/unit/network/test_neutron.py:L3113–L3137` |
| `TestAPI.test_nw_info_build_custom_ovs_bridge` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L3139–L3140` |
| `TestAPI.test_nw_info_build_custom_ovs_bridge_vhostuser` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/network/test_neutron.py:L3142–L3144` |
| `TestAPI.test_nw_info_build_custom_lb_bridge` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_neutron.py:L3146–L3149` |
| `TestAPI.test_build_network_info_model` | method | (self, mock_get_client, mock_get_floating, mock_get_subnets, mock_get_preexisting, mock_get_physnet) | public | not declared | 6/169 | `src/nova/tests/unit/network/test_neutron.py:L3160–L3350` |
| `TestAPI.test_build_network_info_model_empty` | method | (self, mock_gather_port_ids_and_networks, mock_get_preexisting_port_ids, mock_nw_info_build_network, mock_nw_info_get_ips, mock_nw_info_get_subnets, mock_get_client) | public | not declared | 1/39 | `src/nova/tests/unit/network/test_neutron.py:L3358–L3403` |
| `TestAPI.test_build_network_info_model_full_vnic_type_change` | method | (self, mock_get_client) | public | not declared | 1/45 | `src/nova/tests/unit/network/test_neutron.py:L3422–L3472` |
| `TestAPI.test_build_network_info_model_single_vnic_type_change` | method | (self, mock_get_client) | public | not declared | 1/56 | `src/nova/tests/unit/network/test_neutron.py:L3491–L3552` |
| `TestAPI.test_get_subnets_from_port` | method | (self, mock_get_client) | public | not declared | 1/25 | `src/nova/tests/unit/network/test_neutron.py:L3555–L3582` |
| `TestAPI.test_get_subnets_from_port_enabled_dhcp` | method | (self, mock_get_client) | public | not declared | 1/13 | `src/nova/tests/unit/network/test_neutron.py:L3585–L3602` |
| `TestAPI.test_get_subnets_from_port_enabled_dhcp_no_dhcp_ports` | method | (self, mock_get_client) | public | not declared | 1/14 | `src/nova/tests/unit/network/test_neutron.py:L3605–L3623` |
| `TestAPI.test_get_physnet_tunneled_info_multi_segment` | method | (self, mock_get_client) | public | not declared | 1/20 | `src/nova/tests/unit/network/test_neutron.py:L3626–L3647` |
| `TestAPI.test_get_physnet_tunneled_info_vlan_with_multi_segment_ext` | method | (self, mock_get_client) | public | not declared | 1/18 | `src/nova/tests/unit/network/test_neutron.py:L3650–L3669` |
| `TestAPI.test_get_physnet_tunneled_info_multi_segment_no_physnet` | method | (self, mock_get_client) | public | not declared | 1/18 | `src/nova/tests/unit/network/test_neutron.py:L3672–L3690` |
| `TestAPI.test_get_physnet_tunneled_info_tunneled` | method | (self, mock_get_client) | public | not declared | 1/14 | `src/nova/tests/unit/network/test_neutron.py:L3693–L3708` |
| `TestAPI.test_get_phynet_tunneled_info_non_tunneled` | method | (self, mock_get_client) | public | not declared | 1/14 | `src/nova/tests/unit/network/test_neutron.py:L3711–L3726` |
| `TestAPI.test_is_remote_managed` | method | (self) | public | not declared | 2/15 | `src/nova/tests/unit/network/test_neutron.py:L3728–L3743` |
| `TestAPI._test_get_port_vnic_info` | method | (self, mock_get_client, binding_vnic_type, expected_vnic_type, port_resource_request=None, numa_policy=None) | private | not declared | 4/32 | `src/nova/tests/unit/network/test_neutron.py:L3745–L3780` |
| `TestAPI.test_get_port_vnic_info_1` | method | (self, mock_get_client) | public | not declared | 1/3 | `src/nova/tests/unit/network/test_neutron.py:L3783–L3785` |
| `TestAPI.test_get_port_vnic_info_2` | method | (self, mock_get_client) | public | not declared | 1/3 | `src/nova/tests/unit/network/test_neutron.py:L3788–L3790` |
| `TestAPI.test_get_port_vnic_info_3` | method | (self, mock_get_client) | public | not declared | 1/3 | `src/nova/tests/unit/network/test_neutron.py:L3793–L3795` |
| `TestAPI.test_get_port_vnic_info_4` | method | (self, mock_get_client) | public | not declared | 2/6 | `src/nova/tests/unit/network/test_neutron.py:L3798–L3803` |
| `TestAPI.test_get_port_vnic_info_requested_resources` | method | (self, mock_get_client) | public | not declared | 1/14 | `src/nova/tests/unit/network/test_neutron.py:L3806–L3819` |
| `TestAPI.test_get_port_vnic_info_5` | method | (self, mock_get_client) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_neutron.py:L3822–L3825` |
| `TestAPI.test_get_port_vnic_info_6` | method | (self, mock_get_client) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_neutron.py:L3828–L3831` |
| `TestAPI.test_get_port_vnic_info_trusted` | method | (self, mock_get_client) | public | not declared | 1/23 | `src/nova/tests/unit/network/test_neutron.py:L3834–L3858` |
| `TestAPI.test_deferred_ip_port_immediate_allocation` | method | (self, mock_show) | public | not declared | 1/12 | `src/nova/tests/unit/network/test_neutron.py:L3861–L3874` |
| `TestAPI.test_deferred_ip_port_deferred_allocation` | method | (self, mock_show) | public | not declared | 1/11 | `src/nova/tests/unit/network/test_neutron.py:L3877–L3889` |
| `TestAPI.test_deferred_ip_port_none_allocation` | method | (self, mock_show) | public | not declared | 1/16 | `src/nova/tests/unit/network/test_neutron.py:L3892–L3910` |
| `TestAPI.test_get_instance_nw_info_locks_per_instance` | method | (self, mock_lock) | public | not declared | 1/7 | `src/nova/tests/unit/network/test_neutron.py:L3913–L3919` |
| `TestAPI.test_get_instance_nw_info_verify_duplicates_ignored` | method | (self, mock_log) | public | not declared | 1/32 | `src/nova/tests/unit/network/test_neutron.py:L3922–L3975` |
| `TestAPI.test_get_instance_nw_info` | method | (self, mock_update, mock_get, mock_lock) | public | not declared | 1/9 | `src/nova/tests/unit/network/test_neutron.py:L3980–L3988` |
| `TestAPI._test_validate_networks_fixed_ip_no_dup` | method | (self, nets, requested_networks, ids, list_port_values) | private | not declared | 1/16 | `src/nova/tests/unit/network/test_neutron.py:L3990–L4013` |
| `TestAPI._test_validate_networks_fixed_ip_no_dup._fake_list_ports` | function | (**search_opts) | private | `return_value` (src/nova/tests/unit/network/test_neutron.py:L3996) | — | `src/nova/tests/unit/network/test_neutron.py:L3993–L3997` |
| `TestAPI.test_validate_networks_over_limit_quota` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/network/test_neutron.py:L4015–L4057` |
| `TestAPI.test_validate_networks_over_limit_quota._fake_list_ports` | function | (**search_opts) | private | `return_value` (src/nova/tests/unit/network/test_neutron.py:L4040) | — | `src/nova/tests/unit/network/test_neutron.py:L4037–L4040` |
| `TestAPI.test_validate_networks_fixed_ip_no_dup1` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/network/test_neutron.py:L4059–L4078` |
| `TestAPI.test_validate_networks_fixed_ip_no_dup2` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/network/test_neutron.py:L4080–L4110` |
| `TestAPI.test_validate_networks_fixed_ip_dup` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/network/test_neutron.py:L4112–L4131` |
| `TestAPI.test_allocate_floating_ip_exceed_limit` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/network/test_neutron.py:L4133–L4146` |
| `TestAPI.test_allocate_floating_ip_no_ipv4_subnet` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/network/test_neutron.py:L4148–L4162` |
| `TestAPI.test_release_floating_ip` | method | (self, mock_get_ip, mock_ntrn) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_neutron.py:L4167–L4177` |
| `TestAPI.test_release_floating_ip_associated` | method | (self, mock_get_ip, mock_ntrn) | public | not declared | 1/7 | `src/nova/tests/unit/network/test_neutron.py:L4182–L4194` |
| `TestAPI.test_release_floating_ip_not_found` | method | (self, mock_get_ip, mock_ntrn) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_neutron.py:L4199–L4214` |
| `TestAPI.test_create_port_minimal_raise_no_more_ip` | method | (self, create_port_mock) | public | not declared | 1/12 | `src/nova/tests/unit/network/test_neutron.py:L4217–L4228` |
| `TestAPI.test_update_port_for_instance_mac_address_in_use` | method | (self, update_port_mock) | public | not declared | 1/13 | `src/nova/tests/unit/network/test_neutron.py:L4232–L4245` |
| `TestAPI.test_update_port_for_instance_fixed_ips_invalid` | method | (self, update_port_mock) | public | not declared | 1/13 | `src/nova/tests/unit/network/test_neutron.py:L4249–L4262` |
| `TestAPI.test_update_port_for_instance_binding_failure` | method | (self, update_port_mock) | public | not declared | 1/16 | `src/nova/tests/unit/network/test_neutron.py:L4265–L4281` |
| `TestAPI.test_create_port_minimal_raise_ip_in_use` | method | (self, create_port_mock) | public | not declared | 1/11 | `src/nova/tests/unit/network/test_neutron.py:L4285–L4296` |
| `TestAPI.test_create_port_minimal_raise_ip_already_allocated` | method | (self, create_port_mock) | public | not declared | 1/12 | `src/nova/tests/unit/network/test_neutron.py:L4300–L4312` |
| `TestAPI.test_create_port_minimal_raise_invalid_ip` | method | (self, create_port_mock) | public | not declared | 1/16 | `src/nova/tests/unit/network/test_neutron.py:L4316–L4333` |
| `TestAPI.test_create_port_minimal_raise_qos_not_supported` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/network/test_neutron.py:L4339–L4360` |
| `TestAPI.test_create_port_minimal_raise_extended_qos_not_supported` | method | (self) | public | not declared | 1/29 | `src/nova/tests/unit/network/test_neutron.py:L4366–L4395` |
| `TestAPI.test_create_port_minimal_raise_qos_not_supported_cleanup_fails` | method | (self, mock_log) | public | not declared | 1/25 | `src/nova/tests/unit/network/test_neutron.py:L4398–L4423` |
| `TestAPI.test_get_network_detail_not_found` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/network/test_neutron.py:L4425–L4436` |
| `TestAPI.test_deallocate_for_instance_uses_delete_helper` | method | (self, mock_refresh, mock_preexisting) | public | not declared | 2/22 | `src/nova/tests/unit/network/test_neutron.py:L4441–L4466` |
| `TestAPI._test_delete_ports` | method | (self, expect_raise) | private | not declared | 1/8 | `src/nova/tests/unit/network/test_neutron.py:L4468–L4475` |
| `TestAPI.test_delete_ports_raise` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/network/test_neutron.py:L4477–L4479` |
| `TestAPI.test_delete_ports_no_raise` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L4481–L4482` |
| `TestAPI.test_delete_ports_never_raise_404` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/network/test_neutron.py:L4484–L4490` |
| `TestAPI.test_deallocate_port_for_instance_fails` | method | (self, mock_preexisting) | public | not declared | 1/17 | `src/nova/tests/unit/network/test_neutron.py:L4493–L4510` |
| `TestAPI._test_show_port_exceptions` | method | (self, client_exc, expected_nova_exc, get_client_mock) | private | not declared | 1/6 | `src/nova/tests/unit/network/test_neutron.py:L4513–L4518` |
| `TestAPI.test_show_port_not_found` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/network/test_neutron.py:L4520–L4522` |
| `TestAPI.test_show_port_forbidden` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/network/test_neutron.py:L4524–L4526` |
| `TestAPI.test_show_port_unknown_exception` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/network/test_neutron.py:L4528–L4530` |
| `TestAPI.test_get_network` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/network/test_neutron.py:L4532–L4541` |
| `TestAPI.test_get_all_networks` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/network/test_neutron.py:L4543–L4554` |
| `TestAPI.test_update_instance_vnic_index` | method | (self, mock_get_client, mock_refresh_extensions) | public | not declared | 1/17 | `src/nova/tests/unit/network/test_neutron.py:L4558–L4575` |
| `TestAPI.test_update_port_bindings_for_instance_with_migration_profile` | method | (self, get_client_mock) | public | not declared | 1/25 | `src/nova/tests/unit/network/test_neutron.py:L4582–L4616` |
| `TestAPI.test_update_port_bindings_for_instance_binding_profile_none` | method | (self, get_client_mock) | public | not declared | 1/21 | `src/nova/tests/unit/network/test_neutron.py:L4623–L4650` |
| `TestAPI.test_update_port_bindings_for_instance_same_host` | method | (self, get_client_mock) | public | not declared | 1/19 | `src/nova/tests/unit/network/test_neutron.py:L4657–L4680` |
| `TestAPI.test_update_port_bindings_for_instance_with_pci` | method | (self, get_client_mock, get_pci_device_devspec_mock) | public | not declared | 1/52 | `src/nova/tests/unit/network/test_neutron.py:L4690–L4748` |
| `TestAPI.test_update_port_bindings_for_instance_with_pci_fail` | method | (self, get_client_mock, get_pci_device_devspec_mock) | public | not declared | 1/39 | `src/nova/tests/unit/network/test_neutron.py:L4752–L4795` |
| `TestAPI.test_update_port_bindings_for_instance_with_pci_no_migration` | method | (self, get_client_mock, get_pci_device_devspec_mock) | public | not declared | 1/37 | `src/nova/tests/unit/network/test_neutron.py:L4803–L4846` |
| `TestAPI.test_update_port_bindings_for_instance_with_same_host_failed_vif_type` | method | (self, get_client_mock) | public | not declared | 2/35 | `src/nova/tests/unit/network/test_neutron.py:L4853–L4891` |
| `TestAPI.test_update_port_bindings_for_instance_with_diff_host_unbound_vif_type` | method | (self, get_client_mock) | public | not declared | 1/26 | `src/nova/tests/unit/network/test_neutron.py:L4898–L4928` |
| `TestAPI.test_update_port_bindings_for_instance_with_live_migration` | method | (self, get_client_mock, get_devspec_mock, get_pci_mapping_mock) | public | not declared | 1/35 | `src/nova/tests/unit/network/test_neutron.py:L4937–L4978` |
| `TestAPI.test_update_port_bindings_for_instance_with_sriov_pf` | method | (self, get_client_mock, get_pci_device_devspec_mock) | public | not declared | 1/73 | `src/nova/tests/unit/network/test_neutron.py:L4986–L5066` |
| `TestAPI.test_update_port_bindings_for_instance_with_sriov_pf_no_migration` | method | (self, get_client_mock, get_pci_device_devspec_mock) | public | not declared | 1/65 | `src/nova/tests/unit/network/test_neutron.py:L5074–L5146` |
| `TestAPI.test_update_port_bindings_for_instance_with_resource_req` | method | (self, get_client_mock) | public | not declared | 1/22 | `src/nova/tests/unit/network/test_neutron.py:L5153–L5176` |
| `TestAPI.test_update_port_bindings_for_instance_with_extended_resource_req` | method | (self, get_client_mock) | public | not declared | 1/55 | `src/nova/tests/unit/network/test_neutron.py:L5183–L5238` |
| `TestAPI.test_update_port_bindings_for_instance_with_resource_req_unshelve` | method | (self, get_client_mock) | public | not declared | 1/20 | `src/nova/tests/unit/network/test_neutron.py:L5241–L5263` |
| `TestAPI.test_update_port_bindings_for_instance_with_resource_req_no_mapping` | method | (self, get_client_mock) | public | not declared | 1/22 | `src/nova/tests/unit/network/test_neutron.py:L5270–L5293` |
| `TestAPI.test_update_port_bindings_for_instance_with_resource_req_live_mig` | method | (self, get_client_mock) | public | not declared | 1/20 | `src/nova/tests/unit/network/test_neutron.py:L5300–L5325` |
| `TestAPI.test_get_pci_mapping_for_migration` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_neutron.py:L5327–L5335` |
| `TestAPI.test_get_pci_mapping_for_migration_reverted` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_neutron.py:L5337–L5345` |
| `TestAPI.test_get_pci_mapping_for_migration_no_migration_context` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/network/test_neutron.py:L5347–L5352` |
| `TestAPI.test_update_port_profile_for_migration_teardown_false` | method | (self, get_client_mock) | public | not declared | 1/22 | `src/nova/tests/unit/network/test_neutron.py:L5355–L5380` |
| `TestAPI.test_update_port_profile_for_migration_teardown_false_none_profile` | method | (self, get_client_mock) | public | not declared | 1/26 | `src/nova/tests/unit/network/test_neutron.py:L5383–L5413` |
| `TestAPI.test__setup_migration_port_profile_called_on_teardown_false` | method | (self, get_client_mock) | public | not declared | 1/17 | `src/nova/tests/unit/network/test_neutron.py:L5416–L5433` |
| `TestAPI.test__setup_migration_port_profile_not_called_with_host_match` | method | (self, get_client_mock) | public | not declared | 1/16 | `src/nova/tests/unit/network/test_neutron.py:L5436–L5452` |
| `TestAPI.test__setup_migration_port_profile_no_update` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/network/test_neutron.py:L5454–L5469` |
| `TestAPI.test_update_port_profile_for_migration_teardown_true_with_profile` | method | (self, get_client_mock) | public | not declared | 1/24 | `src/nova/tests/unit/network/test_neutron.py:L5472–L5499` |
| `TestAPI.test_update_port_profile_for_migration_teardown_true_with_profile_exc` | method | (self, get_client_mock) | public | not declared | 1/35 | `src/nova/tests/unit/network/test_neutron.py:L5502–L5543` |
| `TestAPI.test_update_port_profile_for_migration_teardown_true_no_profile` | method | (self, get_client_mock) | public | not declared | 1/17 | `src/nova/tests/unit/network/test_neutron.py:L5546–L5564` |
| `TestAPI.test__update_port_with_migration_profile_raise_exception` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/network/test_neutron.py:L5566–L5578` |
| `TestAPI.test_get_preexisting_port_ids` | method | (self, mock_get_nw_info) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_neutron.py:L5581–L5588` |
| `TestAPI.test_unbind_ports_get_client` | method | (self, mock_neutron, mock_show) | public | not declared | 1/9 | `src/nova/tests/unit/network/test_neutron.py:L5592–L5606` |
| `TestAPI.test_unbind_ports` | method | (self, mock_neutron, mock_show) | public | not declared | 2/17 | `src/nova/tests/unit/network/test_neutron.py:L5612–L5631` |
| `TestAPI.test_unbind_ports_no_port_ids` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_neutron.py:L5633–L5642` |
| `TestAPI.test_allocate_for_instance_unbind` | method | (self, mock_vif, mock_ntrn, mock_avail_nets, mock_ext_vals, mock_unbind, mock_log, mock_cena, mock_del_ports, mock_exeu, mock_giwn) | public | not declared | 1/31 | `src/nova/tests/unit/network/test_neutron.py:L5662–L5705` |
| `TestAPI.test_allocate_for_instance_unbind.show_port` | function | (port_id) | public | `{'port': {'network_id': 'net-1', 'id': port_id, 'mac_address': 'fakemac', 'tenant_id': 'proj-1'}}` (src/nova/tests/unit/network/test_neutron.py:L5675) | — | `src/nova/tests/unit/network/test_neutron.py:L5674–L5677` |
| `TestAPI.test_allocate_for_instance_unbind.update_port` | function | (port_id, body) | public | `{"port": {'mac_address': 'fakemac', 'id': port_id}}` (src/nova/tests/unit/network/test_neutron.py:L5685) | — | `src/nova/tests/unit/network/test_neutron.py:L5682–L5686` |
| `TestAPI.test_preexisting_deallocate_for_instance` | method | (self, mock_delete_vifs, mock_ntrn, mock_gppids, mock_unbind, mock_deletep, mock_log) | public | not declared | 1/34 | `src/nova/tests/unit/network/test_neutron.py:L5713–L5748` |
| `TestAPI.test_preexisting_deallocate_port_for_instance` | method | (self, mock_get_vif_by_uuid, mock_ntrn, mock_inst_get_nwinfo, mock_unbind, mock_netinfo, mock_del_nic_meta) | public | not declared | 1/28 | `src/nova/tests/unit/network/test_neutron.py:L5756–L5783` |
| `TestAPI.test_deallocate_port_for_instance_port_with_allocation` | method | (self, mock_get_client, mock_get_vif_by_uuid, mock_del_nic_meta, mock_netinfo) | public | not declared | 1/38 | `src/nova/tests/unit/network/test_neutron.py:L5793–L5833` |
| `TestAPI.test_deallocate_port_for_instance_port_with_extended_allocation` | method | (self, mock_get_client, mock_get_vif_by_uuid, mock_del_nic_meta, mock_netinfo) | public | not declared | 1/44 | `src/nova/tests/unit/network/test_neutron.py:L5843–L5889` |
| `TestAPI.test_deallocate_port_for_instance_port_already_deleted` | method | (self, mock_get_client, mock_get_vif_by_uuid, mock_del_nic_meta, mock_netinfo) | public | not declared | 1/25 | `src/nova/tests/unit/network/test_neutron.py:L5895–L5922` |
| `TestAPI.test_delete_nic_metadata` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/network/test_neutron.py:L5924–L5933` |
| `TestAPI.test_delete_nic_metadata_no_metadata` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/network/test_neutron.py:L5935–L5941` |
| `TestAPI.test_port_binding_failed_created_port` | method | (self, mock_ntrn, mock_avail_nets, mock_ext_vals, mock_cena) | public | not declared | 1/21 | `src/nova/tests/unit/network/test_neutron.py:L5951–L5972` |
| `TestAPI.test_port_binding_failed_with_request` | method | (self, mock_ntrn, mock_show_port) | public | not declared | 1/17 | `src/nova/tests/unit/network/test_neutron.py:L5976–L5993` |
| `TestAPI.test_port_with_resource_request_has_allocation_in_binding` | method | (self, mock_get_client, mock_update_port, mock_show_port, mock_check_external, mock_vif_create) | public | not declared | 1/39 | `src/nova/tests/unit/network/test_neutron.py:L6000–L6041` |
| `TestAPI.test_port_with_extended_resource_request_has_allocation_in_binding` | method | (self, mock_get_client, mock_update_port, mock_show_port, mock_check_external, mock_vif_create, mock_has_extended_res_req) | public | not declared | 1/52 | `src/nova/tests/unit/network/test_neutron.py:L6050–L6104` |
| `TestAPI.test_get_floating_ip_by_address_not_found_neutron_not_found` | method | (self, mock_ntrn) | public | not declared | 1/9 | `src/nova/tests/unit/network/test_neutron.py:L6107–L6115` |
| `TestAPI.test_get_floating_ip_by_address_not_found_neutron_raises_non404` | method | (self, mock_ntrn) | public | not declared | 1/9 | `src/nova/tests/unit/network/test_neutron.py:L6118–L6126` |
| `TestAPI.test_get_floating_ips_by_project_not_found` | method | (self, mock_ntrn) | public | not declared | 1/6 | `src/nova/tests/unit/network/test_neutron.py:L6129–L6134` |
| `TestAPI.test_get_floating_ips_by_project_not_found_legacy` | method | (self, mock_ntrn) | public | not declared | 1/7 | `src/nova/tests/unit/network/test_neutron.py:L6137–L6147` |
| `TestAPI.test_get_floating_ips_by_project_raises_non404` | method | (self, mock_ntrn) | public | not declared | 1/7 | `src/nova/tests/unit/network/test_neutron.py:L6150–L6156` |
| `TestAPI._test_get_floating_ips_by_project` | method | (self, fip_ext_enabled, has_ports, mock_ntrn, mock_refresh) | private | not declared | 5/53 | `src/nova/tests/unit/network/test_neutron.py:L6160–L6218` |
| `TestAPI.test_get_floating_ips_by_project_with_fip_port_details_ext` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L6220–L6222` |
| `TestAPI.test_get_floating_ips_by_project_without_fip_port_details_ext` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L6224–L6226` |
| `TestAPI.test_get_floating_ips_by_project_without_ports` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L6228–L6230` |
| `TestAPI.test_unbind_ports_keep_dns_name_no_detach` | method | (self, mock_show, mock_reset_dns) | public | not declared | 1/21 | `src/nova/tests/unit/network/test_neutron.py:L6236–L6256` |
| `TestAPI.test_unbind_ports_reset_dns_name_by_admin` | method | (self, mock_show, mock_reset_dns) | public | not declared | 1/24 | `src/nova/tests/unit/network/test_neutron.py:L6262–L6285` |
| `TestAPI.test_unbind_ports_reset_dns_name_by_non_admin` | method | (self, mock_show) | public | not declared | 1/21 | `src/nova/tests/unit/network/test_neutron.py:L6290–L6310` |
| `TestAPI.test_unbind_ports_reset_allocation_in_port_binding` | method | (self, mock_show) | public | not declared | 1/13 | `src/nova/tests/unit/network/test_neutron.py:L6315–L6327` |
| `TestAPI.test_unbind_ports_reset_binding_profile` | method | (self, mock_show) | public | not declared | 1/21 | `src/nova/tests/unit/network/test_neutron.py:L6332–L6352` |
| `TestAPI.test_update_ports_for_instance_fails_rollback_ports_and_vifs` | method | (self, mock_delete_ports, mock_unbind_ports, mock_vif_destroy, mock_vif_create, mock_update_port, mock_populate_ext_values) | public | not declared | 1/35 | `src/nova/tests/unit/network/test_neutron.py:L6366–L6408` |
| `TestAPI.test_update_ports_for_instance_fails_delete_all_created_ports` | method | (self, mock_delete_ports, mock_unbind_ports, mock_update_port, mock_populate_ext_values) | public | not declared | 1/31 | `src/nova/tests/unit/network/test_neutron.py:L6419–L6454` |
| `TestAPI.test_get_instance_id_by_floating_address_port_not_found` | method | (self, mock_show, mock_get) | public | not declared | 1/7 | `src/nova/tests/unit/network/test_neutron.py:L6460–L6466` |
| `TestAPI.test_unbind_ports_port_show_portnotfound` | method | (self, mock_log, mock_show) | public | not declared | 1/10 | `src/nova/tests/unit/network/test_neutron.py:L6471–L6480` |
| `TestAPI.test_unbind_ports_port_show_portnotfound_multiple_ports` | method | (self, mock_log, mock_show) | public | not declared | 1/46 | `src/nova/tests/unit/network/test_neutron.py:L6488–L6537` |
| `TestAPI.test_unbind_ports_port_show_unexpected_error` | method | (self, mock_log, mock_show) | public | not declared | 1/13 | `src/nova/tests/unit/network/test_neutron.py:L6544–L6556` |
| `TestAPI.test_unbind_ports_port_update_portnotfound` | method | (self, mock_log, mock_show) | public | not declared | 1/13 | `src/nova/tests/unit/network/test_neutron.py:L6562–L6574` |
| `TestAPI.test_unbind_ports_port_update_unexpected_error` | method | (self, mock_log, mock_show) | public | not declared | 1/15 | `src/nova/tests/unit/network/test_neutron.py:L6580–L6594` |
| `TestAPI.test_create_resource_requests_no_allocate` | method | (self, mock_get_client) | public | not declared | 1/12 | `src/nova/tests/unit/network/test_neutron.py:L6597–L6613` |
| `TestAPI.test_create_resource_requests_auto_allocated` | method | (self, mock_get_client, mock_get_physnet_tunneled_info, mock_has_extended_res_req) | public | not declared | 1/16 | `src/nova/tests/unit/network/test_neutron.py:L6620–L6641` |
| `TestAPI.test_create_resource_requests` | method | (self, getclient, mock_get_port_vnic_info, mock_get_physnet_tunneled_info, mock_from_port_request, mock_has_extended_res_req) | public | not declared | 7/93 | `src/nova/tests/unit/network/test_neutron.py:L6650–L6758` |
| `TestAPI.test_create_resource_requests_with_arq` | method | (self, getclient, mock_get_port_vnic_info, mock_from_port_request, mock_get_device_num, mock_get_physnet_tunneled_info, mock_get_dp_group, mock_get_rg) | public | not declared | 1/31 | `src/nova/tests/unit/network/test_neutron.py:L6769–L6801` |
| `TestAPI.test_create_resource_requests_with_arq_excption` | method | (self, getclient, mock_get_port_vnic_info, mock_get_physnet_tunneled_info) | public | not declared | 1/16 | `src/nova/tests/unit/network/test_neutron.py:L6806–L6823` |
| `TestAPI.test_create_resource_requests_arq_reject_multi_devices` | method | (self, getclient, mock_get_port_vnic_info, mock_get_device_num, mock_get_physnet_tunneled_info) | public | not declared | 1/22 | `src/nova/tests/unit/network/test_neutron.py:L6829–L6852` |
| `TestAPI.test_create_resource_request_extended` | method | (self, getclient, mock_get_port_vnic_info, mock_get_physnet_tunneled_info, mock_from_port_request, mock_req_lvl_param, mock_extened_req_lvl_param, mock_has_extended_res_req) | public | not declared | 1/73 | `src/nova/tests/unit/network/test_neutron.py:L6871–L6955` |
| `TestAPI.test_associate_floating_ip_conflict` | method | (self, mock_get_client) | public | not declared | 1/25 | `src/nova/tests/unit/network/test_neutron.py:L6958–L6985` |
| `TestAPI.test_associate_floating_ip_refresh_error_trap` | method | (self, mock_update_cache, mock_log_warning, mock_get_client) | public | not declared | 1/40 | `src/nova/tests/unit/network/test_neutron.py:L6990–L7036` |
| `TestAPI.test_update_inst_info_cache_for_disassociated_fip_other_cell` | method | (self, mock_update_cache) | public | not declared | 1/27 | `src/nova/tests/unit/network/test_neutron.py:L7039–L7072` |
| `TestAPI.test_update_inst_info_cache_for_disassociated_fip_inst_not_found` | method | (self, mock_update_cache, mock_log_info) | public | not declared | 1/29 | `src/nova/tests/unit/network/test_neutron.py:L7076–L7110` |
| `TestAPI.test_get_instance_by_uuid_using_api_db_current_cell` | method | (self, mock_get_map, mock_get_inst) | public | not declared | 1/9 | `src/nova/tests/unit/network/test_neutron.py:L7114–L7125` |
| `TestAPI.test_get_instance_by_uuid_using_api_db_other_cell` | method | (self, mock_get_map, mock_get_inst) | public | not declared | 1/19 | `src/nova/tests/unit/network/test_neutron.py:L7129–L7165` |
| `TestAPI.test_get_instance_by_uuid_using_api_db_other_cell.stub_inst_get_by_uuid` | function | (_context, instance_uuid, *args, **kwargs) | public | `instance` (src/nova/tests/unit/network/test_neutron.py:L7154) | — | `src/nova/tests/unit/network/test_neutron.py:L7146–L7154` |
| `TestAPI.test_get_instance_by_uuid_using_api_db_other_cell_never_found` | method | (self, mock_get_map, mock_get_inst) | public | not declared | 1/16 | `src/nova/tests/unit/network/test_neutron.py:L7170–L7188` |
| `TestAPI.test_get_instance_by_uuid_using_api_db_other_cell_map_not_found` | method | (self, mock_get_map, mock_get_inst) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_neutron.py:L7194–L7204` |
| `TestAPI.test_migrate_instance_start_no_binding_ext` | method | (self, get_client_mock) | public | not declared | 1/5 | `src/nova/tests/unit/network/test_neutron.py:L7208–L7215` |
| `TestAPI.test_migrate_instance_start_activate` | method | (self, get_client_mock) | public | not declared | 1/17 | `src/nova/tests/unit/network/test_neutron.py:L7218–L7241` |
| `TestAPI.test_migrate_instance_start_already_active` | method | (self, get_client_mock) | public | not declared | 1/16 | `src/nova/tests/unit/network/test_neutron.py:L7244–L7266` |
| `TestAPI.test_migrate_instance_start_no_bindings` | method | (self, get_client_mock) | public | not declared | 1/17 | `src/nova/tests/unit/network/test_neutron.py:L7269–L7294` |
| `TestAPI.test_migrate_instance_start_get_error` | method | (self, get_client_mock) | public | not declared | 1/19 | `src/nova/tests/unit/network/test_neutron.py:L7297–L7321` |
| `TestAPI.test_get_requested_resource_for_instance_no_resource_request` | method | (self, mock_get_client) | public | not declared | 1/18 | `src/nova/tests/unit/network/test_neutron.py:L7324–L7344` |
| `TestAPI.test_get_requested_resource_for_instance_no_ports` | method | (self, mock_get_client) | public | not declared | 1/14 | `src/nova/tests/unit/network/test_neutron.py:L7347–L7363` |
| `TestAPI.test_get_requested_resource_for_instance_with_multiple_ports` | method | (self, mock_get_client) | public | not declared | 1/32 | `src/nova/tests/unit/network/test_neutron.py:L7366–L7401` |
| `TestAPI.test_get_requested_resource_for_instance_with_multiple_ports_extended` | method | (self, mock_get_client) | public | not declared | 1/77 | `src/nova/tests/unit/network/test_neutron.py:L7408–L7488` |
| `TestAPI.test_get_segment_ids_for_network_no_segment_ext` | method | (self, mock_client) | public | not declared | 1/10 | `src/nova/tests/unit/network/test_neutron.py:L7491–L7500` |
| `TestAPI.test_get_segment_ids_for_network_passes` | method | (self, mock_client) | public | not declared | 1/14 | `src/nova/tests/unit/network/test_neutron.py:L7503–L7516` |
| `TestAPI.test_get_segment_ids_for_network_with_segments_none` | method | (self, mock_client) | public | not declared | 1/14 | `src/nova/tests/unit/network/test_neutron.py:L7519–L7532` |
| `TestAPI.test_get_segment_ids_for_network_with_no_segments` | method | (self, mock_client) | public | not declared | 1/14 | `src/nova/tests/unit/network/test_neutron.py:L7535–L7548` |
| `TestAPI.test_get_segment_ids_for_network_fails` | method | (self, mock_client) | public | not declared | 1/12 | `src/nova/tests/unit/network/test_neutron.py:L7551–L7562` |
| `TestAPI.test_get_segment_id_for_subnet_no_segment_ext` | method | (self, mock_client) | public | not declared | 1/10 | `src/nova/tests/unit/network/test_neutron.py:L7565–L7574` |
| `TestAPI.test_get_segment_id_for_subnet_passes` | method | (self, mock_client) | public | not declared | 1/13 | `src/nova/tests/unit/network/test_neutron.py:L7577–L7589` |
| `TestAPI.test_get_segment_id_for_subnet_with_no_segment` | method | (self, mock_client) | public | not declared | 1/12 | `src/nova/tests/unit/network/test_neutron.py:L7592–L7603` |
| `TestAPI.test_get_segment_id_for_subnet_fails` | method | (self, mock_client) | public | not declared | 1/12 | `src/nova/tests/unit/network/test_neutron.py:L7606–L7617` |
| `TestAPI.test_get_port_pci_dev` | method | (self, mock_debug) | public | not declared | 1/29 | `src/nova/tests/unit/network/test_neutron.py:L7620–L7651` |
| `TestAPI.test__has_resource_request` | method | (self, mock_has_extended_res_req) | public | not declared | 1/48 | `src/nova/tests/unit/network/test_neutron.py:L7656–L7716` |
| `TestAPI.test_get_binding_profile_allocation_no_request` | method | (self, mock_get_client) | public | not declared | 1/16 | `src/nova/tests/unit/network/test_neutron.py:L7723–L7738` |
| `TestAPI.test_get_binding_profile_allocation_legacy_request` | method | (self, mock_get_client) | public | not declared | 1/22 | `src/nova/tests/unit/network/test_neutron.py:L7745–L7766` |
| `TestAPI.test_get_binding_profile_allocation_extended_request` | method | (self, mock_get_client) | public | not declared | 1/38 | `src/nova/tests/unit/network/test_neutron.py:L7773–L7810` |
| `TestInstanceHasExtendedResourceRequest` | class | — | exported | not declared | — | `src/nova/tests/unit/network/test_neutron.py:L7813–L7890` |
| `TestInstanceHasExtendedResourceRequest.setUp` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/network/test_neutron.py:L7814–L7825` |
| `TestInstanceHasExtendedResourceRequest.test_no_extension` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_neutron.py:L7827–L7836` |
| `TestInstanceHasExtendedResourceRequest.test_no_port` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/network/test_neutron.py:L7838–L7850` |
| `TestInstanceHasExtendedResourceRequest.test_port_without_request` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/network/test_neutron.py:L7852–L7866` |
| `TestInstanceHasExtendedResourceRequest.test_port_with_request` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/network/test_neutron.py:L7868–L7890` |
| `TestAPIModuleMethods` | class | — | exported | not declared | — | `src/nova/tests/unit/network/test_neutron.py:L7893–L7971` |
| `TestAPIModuleMethods.test_gather_port_ids_and_networks_wrong_params` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/network/test_neutron.py:L7895–L7908` |
| `TestAPIModuleMethods.test_ensure_requested_network_ordering_no_preference_ids` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/network/test_neutron.py:L7910–L7916` |
| `TestAPIModuleMethods.test_ensure_requested_network_ordering_no_preference_hashes` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/network/test_neutron.py:L7918–L7926` |
| `TestAPIModuleMethods.test_ensure_requested_network_ordering_with_preference` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/network/test_neutron.py:L7928–L7936` |
| `TestAPIModuleMethods.test_update_instance_cache_with_nw_info_not_found` | method | (self, mock_save, mock_log_exc, mock_log_info) | public | not declared | 1/17 | `src/nova/tests/unit/network/test_neutron.py:L7941–L7971` |
| `TestAPIModuleMethods.test_update_instance_cache_with_nw_info_not_found.InstanceNotFound_Remote` | class | — | public | not declared | — | `src/nova/tests/unit/network/test_neutron.py:L7949–L7952` |
| `TestAPIModuleMethods.test_update_instance_cache_with_nw_info_not_found.InstanceNotFound_Remote.__init__` | method | (self, message=None, **kwargs) | public | not declared | — | `src/nova/tests/unit/network/test_neutron.py:L7951–L7952` |
| `TestAPIPortbinding` | class | — | exported | not declared | — | `src/nova/tests/unit/network/test_neutron.py:L7974–L8780` |
| `TestAPIPortbinding.test_allocate_for_instance_portbinding` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/network/test_neutron.py:L7976–L7978` |
| `TestAPIPortbinding.test_populate_neutron_extension_values_binding` | method | (self, mock_get_client) | public | not declared | 1/17 | `src/nova/tests/unit/network/test_neutron.py:L7981–L7997` |
| `TestAPIPortbinding.test_populate_neutron_extension_values_binding_sriov` | method | (self, mock_get_instance_pci_devs, mock_get_pci_device_devspec) | public | not declared | 1/31 | `src/nova/tests/unit/network/test_neutron.py:L8007–L8040` |
| `TestAPIPortbinding.test_populate_neutron_extension_values_binding_sriov_card_serial` | method | (self, mock_get_instance_pci_devs, mock_get_pci_device_devspec) | public | not declared | 1/32 | `src/nova/tests/unit/network/test_neutron.py:L8052–L8087` |
| `TestAPIPortbinding.test_populate_neutron_extension_values_binding_arq` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/network/test_neutron.py:L8089–L8103` |
| `TestAPIPortbinding.test_populate_neutron_extension_values_with_arq` | method | (self, mock_get_arq, mock_referesh_cache) | public | not declared | 1/18 | `src/nova/tests/unit/network/test_neutron.py:L8107–L8125` |
| `TestAPIPortbinding.test_populate_neutron_extension_values_binding_sriov_with_cap` | method | (self, mock_get_instance_pci_devs, mock_get_pci_device_devspec) | public | not declared | 1/34 | `src/nova/tests/unit/network/test_neutron.py:L8136–L8172` |
| `TestAPIPortbinding.test_populate_neutron_extension_values_binding_sriov_pf` | method | (self, mock_get_instance_pci_devs, mock_get_devspec) | public | not declared | 1/31 | `src/nova/tests/unit/network/test_neutron.py:L8176–L8211` |
| `TestAPIPortbinding.test__get_vf_pci_device_profile` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/network/test_neutron.py:L8222–L8245` |
| `TestAPIPortbinding.test__get_pci_device_profile_vf` | method | (self, mock_get_pci_device_devspec) | public | not declared | 1/21 | `src/nova/tests/unit/network/test_neutron.py:L8257–L8279` |
| `TestAPIPortbinding.test__get_pci_device_profile_pf` | method | (self, mock_get_pci_device_devspec) | public | not declared | 1/26 | `src/nova/tests/unit/network/test_neutron.py:L8282–L8309` |
| `TestAPIPortbinding.test_populate_neutron_extension_values_binding_sriov_fail` | method | (self, mock_get_instance_pci_devs, mock_get_pci_device_devspec) | public | not declared | 1/17 | `src/nova/tests/unit/network/test_neutron.py:L8313–L8331` |
| `TestAPIPortbinding.test_populate_neutron_binding_profile_pci_dev_not_found` | method | (self, mock_get_instance_pci_devs) | public | not declared | 1/11 | `src/nova/tests/unit/network/test_neutron.py:L8334–L8344` |
| `TestAPIPortbinding.test_pci_parse_whitelist_called_once` | method | (self, mock_get_instance_pci_devs) | public | not declared | 2/35 | `src/nova/tests/unit/network/test_neutron.py:L8361–L8399` |
| `TestAPIPortbinding._populate_pci_mac_address_fakes` | method | (self) | private | `instance, pf, vf` (src/nova/tests/unit/network/test_neutron.py:L8413) | 1/12 | `src/nova/tests/unit/network/test_neutron.py:L8401–L8413` |
| `TestAPIPortbinding.test_populate_pci_mac_address_pf` | method | (self, mock_get_mac_by_pci_address, mock_get_instance_pci_devs) | public | not declared | 1/10 | `src/nova/tests/unit/network/test_neutron.py:L8417–L8427` |
| `TestAPIPortbinding.test_populate_pci_mac_address_vf` | method | (self, mock_get_mac_by_pci_address, mock_get_instance_pci_devs) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_neutron.py:L8431–L8439` |
| `TestAPIPortbinding.test_populate_pci_mac_address_vf_fail` | method | (self, mock_get_mac_by_pci_address, mock_get_instance_pci_devs) | public | not declared | 1/11 | `src/nova/tests/unit/network/test_neutron.py:L8443–L8454` |
| `TestAPIPortbinding.test_populate_pci_mac_address_no_device` | method | (self, mock_log_error, mock_get_instance_pci_devs) | public | not declared | 1/9 | `src/nova/tests/unit/network/test_neutron.py:L8458–L8467` |
| `TestAPIPortbinding._test_update_port_binding_true` | method | (self, expected_bind_host, func_name, *args) | private | not declared | 1/20 | `src/nova/tests/unit/network/test_neutron.py:L8469–L8490` |
| `TestAPIPortbinding._test_update_port_true_exception` | method | (self, expected_bind_host, func_name, *args) | private | not declared | 1/23 | `src/nova/tests/unit/network/test_neutron.py:L8492–L8516` |
| `TestAPIPortbinding.test_migrate_instance_finish_binding_true` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/network/test_neutron.py:L8518–L8527` |
| `TestAPIPortbinding.test_migrate_instance_finish_binding_true_exception` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/network/test_neutron.py:L8529–L8538` |
| `TestAPIPortbinding.test_setup_instance_network_on_host_true` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/network/test_neutron.py:L8540–L8546` |
| `TestAPIPortbinding.test_setup_instance_network_on_host_exception` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/network/test_neutron.py:L8548–L8552` |
| `TestAPIPortbinding.test_bind_ports_to_host_no_ports` | method | (self, mock_client) | public | not declared | 1/6 | `src/nova/tests/unit/network/test_neutron.py:L8556–L8561` |
| `TestAPIPortbinding.test_bind_ports_to_host` | method | (self, mock_client) | public | not declared | 1/17 | `src/nova/tests/unit/network/test_neutron.py:L8564–L8586` |
| `TestAPIPortbinding.test_bind_ports_to_host.fake_create` | function | (port_id, data) | public | `mock.DEFAULT` (src/nova/tests/unit/network/test_neutron.py:L8568) | — | `src/nova/tests/unit/network/test_neutron.py:L8566–L8568` |
| `TestAPIPortbinding.test_bind_ports_to_host_with_vif_profile_and_vnic` | method | (self, mock_client) | public | not declared | 1/35 | `src/nova/tests/unit/network/test_neutron.py:L8589–L8635` |
| `TestAPIPortbinding.test_bind_ports_to_host_with_vif_profile_and_vnic.fake_create` | function | (port_id, data) | public | `mock.DEFAULT` (src/nova/tests/unit/network/test_neutron.py:L8593) | — | `src/nova/tests/unit/network/test_neutron.py:L8591–L8593` |
| `TestAPIPortbinding.test_bind_ports_to_host_rollback` | method | (self, mock_client) | public | not declared | 1/17 | `src/nova/tests/unit/network/test_neutron.py:L8638–L8667` |
| `TestAPIPortbinding.test_bind_ports_to_host_rollback.fake_create` | function | (port_id, host) | public | `{'binding': {'host': 'fake-host'}}` (src/nova/tests/unit/network/test_neutron.py:L8651) | — | `src/nova/tests/unit/network/test_neutron.py:L8649–L8653` |
| `TestAPIPortbinding.test_delete_port_binding` | method | (self, mock_client) | public | not declared | 3/11 | `src/nova/tests/unit/network/test_neutron.py:L8670–L8690` |
| `TestAPIPortbinding.test_delete_port_binding.fake_delete` | function | (port_id, host) | public | `` (src/nova/tests/unit/network/test_neutron.py:L8677) | — | `src/nova/tests/unit/network/test_neutron.py:L8675–L8680` |
| `TestAPIPortbinding.test_unbind_ports_clean_arq` | method | (self, mock_neutron, mock_show, mock_bind, mock_delete_arq) | public | not declared | 1/14 | `src/nova/tests/unit/network/test_neutron.py:L8699–L8713` |
| `TestAPIPortbinding.test__get_vf_pci_device_profile_without_serial_num` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/network/test_neutron.py:L8715–L8732` |
| `TestAPIPortbinding.test__get_vf_pci_device_profile_without_pf_mac_addr` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/network/test_neutron.py:L8734–L8749` |
| `TestAPIPortbinding.test__get_vf_pci_device_profile_without_vf_num` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/network/test_neutron.py:L8751–L8766` |
| `TestAPIPortbinding.test__get_vf_pci_device_profile_with_dev_capabilities` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/network/test_neutron.py:L8768–L8780` |
| `TestAllocateForInstance` | class | — | exported | not declared | — | `src/nova/tests/unit/network/test_neutron.py:L8783–L9171` |
| `TestAllocateForInstance.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/network/test_neutron.py:L8784–L8788` |
| `TestAllocateForInstance.test_allocate_for_instance_raises_invalid_input` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/network/test_neutron.py:L8790–L8795` |
| `TestAllocateForInstance.test_allocate_for_instance_minimal_args` | method | (self, mock_get_client, mock_validate_ports, mock_validate_nets, mock_clean_sg, mock_sg, mock_create_ports, mock_update_ports, mock_gni) | public | not declared | 1/21 | `src/nova/tests/unit/network/test_neutron.py:L8805–L8829` |
| `TestAllocateForInstance.test_ensure_no_port_binding_failure_raises` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/network/test_neutron.py:L8831–L8838` |
| `TestAllocateForInstance.test_ensure_no_port_binding_failure_passes_if_no_binding` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/network/test_neutron.py:L8840–L8842` |
| `TestAllocateForInstance.test_validate_requested_port_ids_no_ports` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/network/test_neutron.py:L8844–L8854` |
| `TestAllocateForInstance.test_validate_requested_port_ids_success` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/network/test_neutron.py:L8856–L8876` |
| `TestAllocateForInstance._assert_validate_requested_port_ids_raises` | method | (self, exception, extras) | private | not declared | 1/14 | `src/nova/tests/unit/network/test_neutron.py:L8878–L8892` |
| `TestAllocateForInstance.test_validate_requested_port_ids_raise_not_usable` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_neutron.py:L8894–L8897` |
| `TestAllocateForInstance.test_validate_requested_port_ids_raise_in_use` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_neutron.py:L8899–L8902` |
| `TestAllocateForInstance.test_validate_requested_port_ids_raise_dns` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_neutron.py:L8904–L8907` |
| `TestAllocateForInstance.test_validate_requested_port_ids_raise_binding` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_neutron.py:L8909–L8912` |
| `TestAllocateForInstance.test_validate_requested_network_ids_success_auto_net` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/network/test_neutron.py:L8914–L8931` |
| `TestAllocateForInstance.test_validate_requested_network_ids_success_found_net` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/network/test_neutron.py:L8933–L8945` |
| `TestAllocateForInstance.test_validate_requested_network_ids_success_no_nets` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/network/test_neutron.py:L8947–L8963` |
| `TestAllocateForInstance._assert_validate_requested_network_ids_raises` | method | (self, exception, nets, requested_networks=None) | private | not declared | 2/11 | `src/nova/tests/unit/network/test_neutron.py:L8965–L8976` |
| `TestAllocateForInstance.test_validate_requested_network_ids_raises_forbidden` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/network/test_neutron.py:L8978–L8983` |
| `TestAllocateForInstance.test_validate_requested_network_ids_raises_net_not_found` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/network/test_neutron.py:L8985–L8990` |
| `TestAllocateForInstance.test_validate_requested_network_ids_raises_too_many_nets` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_neutron.py:L8992–L8995` |
| `TestAllocateForInstance.test_create_ports_for_instance_no_security` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/network/test_neutron.py:L9001–L9015` |
| `TestAllocateForInstance.test_create_ports_for_instance_with_security_groups` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/network/test_neutron.py:L9021–L9037` |
| `TestAllocateForInstance.test_create_ports_for_instance_with_cleanup_after_pc_failure` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/network/test_neutron.py:L9043–L9072` |
| `TestAllocateForInstance.test_create_ports_for_instance_with_cleanup_after_sg_failure` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/network/test_neutron.py:L9078–L9103` |
| `TestAllocateForInstance.test_create_ports_for_instance_raises_subnets_missing` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/network/test_neutron.py:L9105–L9116` |
| `TestAllocateForInstance.test_create_ports_for_instance_raises_security_off` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/network/test_neutron.py:L9118–L9131` |
| `TestAllocateForInstance.test_update_ports_for_instance_with_portbinding` | method | (self, mock_create) | public | not declared | 1/35 | `src/nova/tests/unit/network/test_neutron.py:L9134–L9171` |
| `TestAPINeutronHostnameDNS` | class | — | exported | not declared | — | `src/nova/tests/unit/network/test_neutron.py:L9174–L9212` |
| `TestAPINeutronHostnameDNS.test_allocate_for_instance_create_port` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/network/test_neutron.py:L9176–L9180` |
| `TestAPINeutronHostnameDNS.test_allocate_for_instance_with_requested_port` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/network/test_neutron.py:L9182–L9189` |
| `TestAPINeutronHostnameDNS.test_allocate_for_instance_port_dns_name_preset_equal_hostname` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/network/test_neutron.py:L9191–L9200` |
| `TestAPINeutronHostnameDNS.test_allocate_for_instance_port_dns_name_preset_noteq_hostname` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/network/test_neutron.py:L9202–L9212` |
| `TestAPINeutronHostnameDNSPortbinding` | class | — | exported | not declared | — | `src/nova/tests/unit/network/test_neutron.py:L9215–L9263` |
| `TestAPINeutronHostnameDNSPortbinding.test_allocate_for_instance_create_port` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/network/test_neutron.py:L9217–L9221` |
| `TestAPINeutronHostnameDNSPortbinding.test_allocate_for_instance_with_requested_port` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/network/test_neutron.py:L9223–L9231` |
| `TestAPINeutronHostnameDNSPortbinding.test_allocate_for_instance_create_port_with_dns_domain` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/network/test_neutron.py:L9241–L9247` |
| `TestAPINeutronHostnameDNSPortbinding.test_allocate_for_instance_with_requested_port_with_dns_domain` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/network/test_neutron.py:L9253–L9263` |
| `TestNeutronClientForAdminScenarios` | class | — | exported | not declared | — | `src/nova/tests/unit/network/test_neutron.py:L9266–L9355` |
| `TestNeutronClientForAdminScenarios.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/network/test_neutron.py:L9268–L9279` |
| `TestNeutronClientForAdminScenarios._test_get_client_for_admin` | method | (self, req_mock, use_id=False, admin_context=False) | private | not declared | 5/44 | `src/nova/tests/unit/network/test_neutron.py:L9282–L9343` |
| `TestNeutronClientForAdminScenarios.test_get_client_for_admin` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L9345–L9346` |
| `TestNeutronClientForAdminScenarios.test_get_client_for_admin_with_id` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L9348–L9349` |
| `TestNeutronClientForAdminScenarios.test_get_client_for_admin_context` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L9351–L9352` |
| `TestNeutronClientForAdminScenarios.test_get_client_for_admin_context_with_id` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L9354–L9355` |
| `TestNeutronPortSecurity` | class | — | exported | not declared | — | `src/nova/tests/unit/network/test_neutron.py:L9358–L9794` |
| `TestNeutronPortSecurity.test__process_security_groups_without_shared` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/network/test_neutron.py:L9360–L9386` |
| `TestNeutronPortSecurity.test__process_security_groups` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/network/test_neutron.py:L9388–L9420` |
| `TestNeutronPortSecurity.test__process_security_groups_not_found` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/network/test_neutron.py:L9422–L9454` |
| `TestNeutronPortSecurity.test__process_security_groups_non_unique_match` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/network/test_neutron.py:L9456–L9488` |
| `TestNeutronPortSecurity.test__process_security_groups_unique_uuids` | method | (self) | public | not declared | 1/30 | `src/nova/tests/unit/network/test_neutron.py:L9490–L9523` |
| `TestNeutronPortSecurity.test__process_security_groups_non_unique_match_same_tenant` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/network/test_neutron.py:L9525–L9554` |
| `TestNeutronPortSecurity.test__process_security_groups_unique_uuids_same_tenant` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/network/test_neutron.py:L9556–L9583` |
| `TestNeutronPortSecurity.test_no_security_groups_requested` | method | (self, mock_vif, mock_get_client, mock_validate_requested_port_ids, mock_get_available_networks, mock_process_security_groups, mock_check_external_network_attach, mock_populate_neutron_extension_values, mock_create_port, mock_update_port_dns_name, mock_get_instance_nw_info) | public | not declared | 1/38 | `src/nova/tests/unit/network/test_neutron.py:L9595–L9636` |
| `TestNeutronPortSecurity.test_security_groups_requested` | method | (self, mock_vif, mock_get_client, mock_validate_requested_port_ids, mock_get_available_networks, mock_process_security_groups, mock_check_external_network_attach, mock_populate_neutron_extension_values, mock_create_port, mock_update_port_dns_name, mock_get_instance_nw_info) | public | not declared | 1/40 | `src/nova/tests/unit/network/test_neutron.py:L9648–L9691` |
| `TestNeutronPortSecurity.test_port_security_disabled_no_security_groups_requested` | method | (self, mock_vif, mock_get_client, mock_validate_requested_port_ids, mock_get_available_networks, mock_process_security_groups, mock_check_external_network_attach, mock_populate_neutron_extension_values, mock_create_port, mock_update_port_dns_name, mock_get_instance_nw_info) | public | not declared | 1/38 | `src/nova/tests/unit/network/test_neutron.py:L9703–L9744` |
| `TestNeutronPortSecurity.test_port_security_disabled_and_security_groups_requested` | method | (self, mock_vif, mock_get_client, mock_validate_requested_port_ids, mock_get_available_networks, mock_process_security_groups, mock_check_external_network_attach, mock_populate_neutron_extension_values, mock_create_port, mock_update_port_dns_name, mock_get_instance_nw_info) | public | not declared | 1/35 | `src/nova/tests/unit/network/test_neutron.py:L9756–L9794` |
| `TestAPIAutoAllocateNetwork` | class | — | exported | not declared | — | `src/nova/tests/unit/network/test_neutron.py:L9797–L10003` |
| `TestAPIAutoAllocateNetwork.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_neutron.py:L9800–L9803` |
| `TestAPIAutoAllocateNetwork.test__can_auto_allocate_network_validation_conflict` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_neutron.py:L9805–L9813` |
| `TestAPIAutoAllocateNetwork.test__can_auto_allocate_network` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/network/test_neutron.py:L9815–L9821` |
| `TestAPIAutoAllocateNetwork.test__ports_needed_per_instance_no_reqs_no_nets` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/network/test_neutron.py:L9823–L9830` |
| `TestAPIAutoAllocateNetwork.test__ports_needed_per_instance_empty_reqs_no_nets` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_neutron.py:L9832–L9840` |
| `TestAPIAutoAllocateNetwork.test__ports_needed_per_instance_auto_reqs_no_nets_not_ready` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/network/test_neutron.py:L9842–L9857` |
| `TestAPIAutoAllocateNetwork.test__ports_needed_per_instance_auto_reqs_no_nets_ok` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/network/test_neutron.py:L9859–L9875` |
| `TestAPIAutoAllocateNetwork.test__validate_requested_port_ids_auto_allocate` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_neutron.py:L9877–L9886` |
| `TestAPIAutoAllocateNetwork.test__auto_allocate_network_conflict` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/network/test_neutron.py:L9888–L9897` |
| `TestAPIAutoAllocateNetwork.test__auto_allocate_network_network_not_found` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/network/test_neutron.py:L9899–L9912` |
| `TestAPIAutoAllocateNetwork.test__auto_allocate_network` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/network/test_neutron.py:L9914–L9925` |
| `TestAPIAutoAllocateNetwork.test_allocate_for_instance_auto_allocate` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/network/test_neutron.py:L9927–L10003` |
| `TestAPIAutoAllocateNetwork.test_allocate_for_instance_auto_allocate.fake_get_instance_nw_info` | function | (context, instance, **kwargs) | public | `[model.VIF(id=uuids.port_id)]` (src/nova/tests/unit/network/test_neutron.py:L9953) | — | `src/nova/tests/unit/network/test_neutron.py:L9943–L9953` |
| `TestAPIAutoAllocateNetwork.test_allocate_for_instance_auto_allocate.do_test` | function | (self, mock_vif, update_port_dsn_name_mock, update_port_mock, create_port_mock, populate_ext_values_mock, check_external_net_attach_mock, auto_allocate_mock, get_client_mock) | public | not declared | — | `src/nova/tests/unit/network/test_neutron.py:L9968–L10001` |
| `TestGetInstanceNetworkInfo` | class | — | exported | not declared | — | `src/nova/tests/unit/network/test_neutron.py:L10006–L10258` |
| `TestGetInstanceNetworkInfo.setUp` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/network/test_neutron.py:L10009–L10022` |
| `TestGetInstanceNetworkInfo._get_vif_in_cache` | method | (info_cache, vif_id) | private | `vif` (src/nova/tests/unit/network/test_neutron.py:L10028) | 3/4 | `src/nova/tests/unit/network/test_neutron.py:L10025–L10028` |
| `TestGetInstanceNetworkInfo._get_fake_info_cache` | method | (vif_ids, **kwargs) | private | `objects.InstanceInfoCache(network_info=nwinfo)` (src/nova/tests/unit/network/test_neutron.py:L10035) | 2/4 | `src/nova/tests/unit/network/test_neutron.py:L10031–L10035` |
| `TestGetInstanceNetworkInfo._get_fake_port` | method | (port_id, **kwargs) | private | `{'id': port_id, 'network_id': network_id}` (src/nova/tests/unit/network/test_neutron.py:L10040) | 1/3 | `src/nova/tests/unit/network/test_neutron.py:L10038–L10040` |
| `TestGetInstanceNetworkInfo._get_fake_vif` | method | (context, **kwargs) | private | `obj_vif.VirtualInterface(context=context, **kwargs)` (src/nova/tests/unit/network/test_neutron.py:L10045) | 1/2 | `src/nova/tests/unit/network/test_neutron.py:L10043–L10045` |
| `TestGetInstanceNetworkInfo.test_get_nw_info_refresh_vif_id_add_vif` | method | (self) | public | not declared | 2/22 | `src/nova/tests/unit/network/test_neutron.py:L10047–L10075` |
| `TestGetInstanceNetworkInfo.test_get_nw_info_refresh_vif_id_update_vif` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/network/test_neutron.py:L10077–L10113` |
| `TestGetInstanceNetworkInfo.test_get_nw_info_refresh_vif_id_preserves_missing_vif` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/network/test_neutron.py:L10115–L10138` |
| `TestGetInstanceNetworkInfo.test_get_instance_nw_info_force_refresh` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/network/test_neutron.py:L10140–L10173` |
| `TestGetInstanceNetworkInfo.test__get_ordered_port_list` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/network/test_neutron.py:L10175–L10201` |
| `TestGetInstanceNetworkInfo.test__get_ordered_port_list_new_port` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/network/test_neutron.py:L10203–L10227` |
| `TestGetInstanceNetworkInfo.test__get_ordered_port_list_new_port_and_deleted_vif` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/network/test_neutron.py:L10229–L10258` |
| `TestGetInstanceNetworkInfo._get_vif_in_cache` | staticmethod | — | private | not declared | — | `src/nova/tests/unit/network/test_neutron.py:L10024–L10028` |
| `TestGetInstanceNetworkInfo._get_fake_info_cache` | staticmethod | — | private | not declared | — | `src/nova/tests/unit/network/test_neutron.py:L10030–L10035` |
| `TestGetInstanceNetworkInfo._get_fake_port` | staticmethod | — | private | not declared | — | `src/nova/tests/unit/network/test_neutron.py:L10037–L10040` |
| `TestGetInstanceNetworkInfo._get_fake_vif` | staticmethod | — | private | not declared | — | `src/nova/tests/unit/network/test_neutron.py:L10042–L10045` |

## Dependencies

- `import collections` (src/nova/tests/unit/network/test_neutron.py:L17)
- `import copy` (src/nova/tests/unit/network/test_neutron.py:L18)
- `unittest`: imports `mock` (src/nova/tests/unit/network/test_neutron.py:L19)
- `keystoneauth1.fixture`: imports `V2Token` (src/nova/tests/unit/network/test_neutron.py:L21)
- `keystoneauth1`: imports `loading as ks_loading` (src/nova/tests/unit/network/test_neutron.py:L22)
- `keystoneauth1`: imports `service_token` (src/nova/tests/unit/network/test_neutron.py:L23)
- `neutronclient.common`: imports `exceptions` (src/nova/tests/unit/network/test_neutron.py:L24)
- `neutronclient.v2_0`: imports `client` (src/nova/tests/unit/network/test_neutron.py:L25)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/network/test_neutron.py:L26)
- `oslo_config`: imports `fixture as config_fixture` (src/nova/tests/unit/network/test_neutron.py:L27)
- `oslo_policy`: imports `policy as oslo_policy` (src/nova/tests/unit/network/test_neutron.py:L28)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/network/test_neutron.py:L29)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/network/test_neutron.py:L30)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/network/test_neutron.py:L31)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/network/test_neutron.py:L32)
- `import requests_mock` (src/nova/tests/unit/network/test_neutron.py:L33)
- `nova`: imports `context` (src/nova/tests/unit/network/test_neutron.py:L35)
- `nova.db.main`: imports `api as db_api` (src/nova/tests/unit/network/test_neutron.py:L36)
- `nova`: imports `exception` (src/nova/tests/unit/network/test_neutron.py:L37)
- `nova.network`: imports `constants` (src/nova/tests/unit/network/test_neutron.py:L38)
- `nova.network`: imports `model` (src/nova/tests/unit/network/test_neutron.py:L39)
- `nova.network`: imports `neutron as neutronapi` (src/nova/tests/unit/network/test_neutron.py:L40)
- `nova`: imports `objects` (src/nova/tests/unit/network/test_neutron.py:L41)
- `nova.objects`: imports `fields as obj_fields` (src/nova/tests/unit/network/test_neutron.py:L42)
- `nova.objects`: imports `network_request as net_req_obj` (src/nova/tests/unit/network/test_neutron.py:L43)
- `nova.objects`: imports `virtual_interface as obj_vif` (src/nova/tests/unit/network/test_neutron.py:L44)
- `nova.pci`: imports `request as pci_request` (src/nova/tests/unit/network/test_neutron.py:L45)
- `nova.pci`: imports `utils as pci_utils` (src/nova/tests/unit/network/test_neutron.py:L46)
- `nova.pci`: imports `whitelist as pci_whitelist` (src/nova/tests/unit/network/test_neutron.py:L47)
- `nova`: imports `policy` (src/nova/tests/unit/network/test_neutron.py:L48)
- `nova`: imports `service_auth` (src/nova/tests/unit/network/test_neutron.py:L49)
- `nova`: imports `test` (src/nova/tests/unit/network/test_neutron.py:L50)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/network/test_neutron.py:L51)
- `neutronclient.common`: imports `exceptions as neutron_client_exc` (src/nova/tests/unit/network/test_neutron.py:L243)

## Side Effects

- **network**: self.client.list_ports.return_value = { (src/nova/tests/unit/network/test_neutron.py:L10054)
- **network**: self.client.list_ports.return_value = { (src/nova/tests/unit/network/test_neutron.py:L10085)
- **network**: self.client.list_ports.return_value = { (src/nova/tests/unit/network/test_neutron.py:L10124)
- **network**: self.client.list_ports.return_value = { (src/nova/tests/unit/network/test_neutron.py:L10147)
- **global-mutation**: CONF = cfg.CONF (src/nova/tests/unit/network/test_neutron.py:L54)
- **global-mutation**: NEUTRON_CLIENT_EXCEPTION = Exception (src/nova/tests/unit/network/test_neutron.py:L60)
- **global-mutation**: FAILED_VIF_TYPES = (model.VIF_TYPE_UNBOUND, (src/nova/tests/unit/network/test_neutron.py:L4860)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1.fixture import V2Token (src/nova/tests/unit/network/test_neutron.py:L21)
- **privilege** (`crypto-key`): from keystoneauth1 import loading as ks_loading (src/nova/tests/unit/network/test_neutron.py:L22)
- **privilege** (`crypto-key`): from keystoneauth1 import service_token (src/nova/tests/unit/network/test_neutron.py:L23)
- **sink** (`db-write`): port_req_body['port'].update(binding_port_req_body['port']) (src/nova/tests/unit/network/test_neutron.py:L1352)
- **sink** (`db-write`): fake_port['binding:vif_details'].update(extra_details) (src/nova/tests/unit/network/test_neutron.py:L3128)
- **sink** (`db-write`): "migrating_to" attribute set to the provided host so the port update (src/nova/tests/unit/network/test_neutron.py:L5456)
- **sink** (`db-write`): """Tests that an attempt to update (save) the instance info cache will (src/nova/tests/unit/network/test_neutron.py:L7944)
- **sink** (`db-write`): "fail to update port") (src/nova/tests/unit/network/test_neutron.py:L8506)
- **sink** (`db-write`): port.update(extras) (src/nova/tests/unit/network/test_neutron.py:L8888)

