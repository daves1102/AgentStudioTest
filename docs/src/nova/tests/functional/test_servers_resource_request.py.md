# src/nova/tests/functional/test_servers_resource_request.py

## Overview

This file implements the `test_servers_resource_request` module, defining 20 classs, 1 classmethod, 12 constants, 6 fields, 7 functions, 97 methods, 26 imports, 12 side effects, 6 security surface entries.

Lines: total 3123, code 2183, comment 461, blank 479

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L44–L44` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L46–L46` |
| `ResourceRequestNeutronFixture` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L49–L127` |
| `ResourceRequestNeutronFixture.port_with_sriov_resource_request` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L50–L79` |
| `ResourceRequestNeutronFixture.port_macvtap_with_resource_request` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L80–L109` |
| `ResourceRequestNeutronFixture.__init__` | method | (self, test) | public | not declared | 1/13 | `src/nova/tests/functional/test_servers_resource_request.py:L111–L127` |
| `ExtendedResourceRequestNeutronFixture` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L130–L252` |
| `ExtendedResourceRequestNeutronFixture.create_with_existing_neutron_state` | method | (cls, existing_fixture) | public | `fixture` (src/nova/tests/functional/test_servers_resource_request.py:L140) | 1/6 | `src/nova/tests/functional/test_servers_resource_request.py:L132–L140` |
| `ExtendedResourceRequestNeutronFixture.list_extensions` | method | (self, *args, **kwargs) | public | `extensions` (src/nova/tests/functional/test_servers_resource_request.py:L158) | 1/15 | `src/nova/tests/functional/test_servers_resource_request.py:L142–L158` |
| `ExtendedResourceRequestNeutronFixture._translate_port_to_new_resource_request` | method | (self, port) | private | `` (src/nova/tests/functional/test_servers_resource_request.py:L214) | 4/17 | `src/nova/tests/functional/test_servers_resource_request.py:L160–L237` |
| `ExtendedResourceRequestNeutronFixture.show_port` | method | (self, port_id, **_params) | public | `port_dict` (src/nova/tests/functional/test_servers_resource_request.py:L244) | 1/4 | `src/nova/tests/functional/test_servers_resource_request.py:L239–L244` |
| `ExtendedResourceRequestNeutronFixture.list_ports` | method | (self, is_admin, retrieve_all=True, **_params) | public | `ports_dict` (src/nova/tests/functional/test_servers_resource_request.py:L252) | 2/5 | `src/nova/tests/functional/test_servers_resource_request.py:L246–L252` |
| `MultiGroupResourceRequestNeutronFixture` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L255–L306` |
| `MultiGroupResourceRequestNeutronFixture.port_with_resource_request` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L259–L306` |
| `PortResourceRequestBasedSchedulingTestBase` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L309–L685` |
| `PortResourceRequestBasedSchedulingTestBase.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L312–L312` |
| `PortResourceRequestBasedSchedulingTestBase.CUSTOM_VNIC_TYPE_NORMAL` | constant | — | public | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L314–L314` |
| `PortResourceRequestBasedSchedulingTestBase.CUSTOM_VNIC_TYPE_DIRECT` | constant | — | public | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L315–L315` |
| `PortResourceRequestBasedSchedulingTestBase.CUSTOM_VNIC_TYPE_MACVTAP` | constant | — | public | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L316–L316` |
| `PortResourceRequestBasedSchedulingTestBase.CUSTOM_PHYSNET1` | constant | — | public | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L317–L317` |
| `PortResourceRequestBasedSchedulingTestBase.CUSTOM_PHYSNET2` | constant | — | public | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L318–L318` |
| `PortResourceRequestBasedSchedulingTestBase.CUSTOM_PHYSNET3` | constant | — | public | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L319–L319` |
| `PortResourceRequestBasedSchedulingTestBase.PF1` | constant | — | public | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L320–L320` |
| `PortResourceRequestBasedSchedulingTestBase.PF2` | constant | — | public | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L321–L321` |
| `PortResourceRequestBasedSchedulingTestBase.PF3` | constant | — | public | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L322–L322` |
| `PortResourceRequestBasedSchedulingTestBase.setUp` | method | (self) | public | not declared | 2/26 | `src/nova/tests/functional/test_servers_resource_request.py:L324–L362` |
| `PortResourceRequestBasedSchedulingTestBase.assertComputeAllocationMatchesFlavor` | method | (self, allocations, compute_rp_uuid, flavor) | public | not declared | 1/6 | `src/nova/tests/functional/test_servers_resource_request.py:L364–L369` |
| `PortResourceRequestBasedSchedulingTestBase._create_server` | method | (self, flavor, networks, host=None) | private | `self.api.post_server({'server': server_req})` (src/nova/tests/functional/test_servers_resource_request.py:L377) | 1/7 | `src/nova/tests/functional/test_servers_resource_request.py:L371–L377` |
| `PortResourceRequestBasedSchedulingTestBase._set_provider_inventories` | method | (self, rp_uuid, inventories) | private | `self._update_inventory(rp_uuid, inventories)` (src/nova/tests/functional/test_servers_resource_request.py:L383) | 1/5 | `src/nova/tests/functional/test_servers_resource_request.py:L379–L383` |
| `PortResourceRequestBasedSchedulingTestBase._create_ovs_networking_rp_tree` | method | (self, compute_rp_uuid) | private | not declared | 1/37 | `src/nova/tests/functional/test_servers_resource_request.py:L385–L428` |
| `PortResourceRequestBasedSchedulingTestBase._create_pf_device_rp` | method | (self, device_rp_uuid, parent_rp_uuid, inventories, traits, device_rp_name=None) | private | not declared | 3/21 | `src/nova/tests/functional/test_servers_resource_request.py:L430–L458` |
| `PortResourceRequestBasedSchedulingTestBase._create_sriov_networking_rp_tree` | method | (self, hostname, compute_rp_uuid) | private | not declared | 1/43 | `src/nova/tests/functional/test_servers_resource_request.py:L460–L517` |
| `PortResourceRequestBasedSchedulingTestBase._create_networking_rp_tree` | method | (self, hostname, compute_rp_uuid) | private | not declared | 1/3 | `src/nova/tests/functional/test_servers_resource_request.py:L519–L522` |
| `PortResourceRequestBasedSchedulingTestBase.assertPortMatchesAllocation` | method | (self, port, allocations, compute_rp_uuid) | public | not declared | 3/15 | `src/nova/tests/functional/test_servers_resource_request.py:L524–L548` |
| `PortResourceRequestBasedSchedulingTestBase._create_server_with_ports` | method | (self, *ports) | private | `self._wait_for_state_change(server, 'ACTIVE')` (src/nova/tests/functional/test_servers_resource_request.py:L555) | 2/6 | `src/nova/tests/functional/test_servers_resource_request.py:L550–L555` |
| `PortResourceRequestBasedSchedulingTestBase._check_allocation` | method | (self, server, compute_rp_uuid, non_qos_port, qos_port, qos_sriov_port, flavor, migration_uuid=None, source_compute_rp_uuid=None, new_flavor=None) | private | not declared | 3/53 | `src/nova/tests/functional/test_servers_resource_request.py:L557–L625` |
| `PortResourceRequestBasedSchedulingTestBase._delete_server_and_check_allocations` | method | (self, server, qos_port, qos_sriov_port) | private | not declared | 1/10 | `src/nova/tests/functional/test_servers_resource_request.py:L627–L639` |
| `PortResourceRequestBasedSchedulingTestBase._create_server_with_ports_and_check_allocation` | method | (self, non_qos_normal_port, qos_normal_port, qos_sriov_port) | private | `server` (src/nova/tests/functional/test_servers_resource_request.py:L649) | 1/8 | `src/nova/tests/functional/test_servers_resource_request.py:L641–L649` |
| `PortResourceRequestBasedSchedulingTestBase._assert_pci_request_pf_device_name` | method | (self, server, device_name) | private | not declared | 1/9 | `src/nova/tests/functional/test_servers_resource_request.py:L651–L659` |
| `PortResourceRequestBasedSchedulingTestBase._assert_port_binding_profile_allocation` | method | (self, port, compute_rp_uuid) | private | not declared | 3/14 | `src/nova/tests/functional/test_servers_resource_request.py:L661–L679` |
| `PortResourceRequestBasedSchedulingTestBase._get_number_of_expected_allocations_for_ports` | method | (self, *ports) | private | `len( [port for port in ports if port.get('resource_request')] )` (src/nova/tests/functional/test_servers_resource_request.py:L683) | 3/4 | `src/nova/tests/functional/test_servers_resource_request.py:L681–L685` |
| `UnsupportedPortResourceRequestBasedSchedulingTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L688–L796` |
| `UnsupportedPortResourceRequestBasedSchedulingTest._add_resource_request_to_a_bound_port` | method | (self, port_id) | private | not declared | 1/5 | `src/nova/tests/functional/test_servers_resource_request.py:L692–L700` |
| `UnsupportedPortResourceRequestBasedSchedulingTest.test_interface_attach_with_resource_request_old_compute` | method | (self) | public | not declared | 1/22 | `src/nova/tests/functional/test_servers_resource_request.py:L702–L733` |
| `UnsupportedPortResourceRequestBasedSchedulingTest.test_interface_attach_with_resource_request_old_compute.fake_get_service` | function | (context, host, binary) | public | `service` (src/nova/tests/functional/test_servers_resource_request.py:L716) | — | `src/nova/tests/functional/test_servers_resource_request.py:L713–L716` |
| `UnsupportedPortResourceRequestBasedSchedulingTest.test_interface_attach_with_network_create_port_has_resource_request` | method | (self, mock_neutron_create_port) | public | not declared | 1/19 | `src/nova/tests/functional/test_servers_resource_request.py:L736–L761` |
| `UnsupportedPortResourceRequestBasedSchedulingTest.test_create_server_with_network_create_port_has_resource_request` | method | (self, mock_neutron_create_port) | public | not declared | 1/11 | `src/nova/tests/functional/test_servers_resource_request.py:L764–L779` |
| `UnsupportedPortResourceRequestBasedSchedulingTest.test_create_server_with_port_resource_request_old_microversion` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/test_servers_resource_request.py:L781–L796` |
| `NonAdminUnsupportedPortResourceRequestBasedSchedulingTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L799–L822` |
| `NonAdminUnsupportedPortResourceRequestBasedSchedulingTest.setUp` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/test_servers_resource_request.py:L802–L822` |
| `PortResourceRequestBasedSchedulingTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L825–L1499` |
| `PortResourceRequestBasedSchedulingTest.test_boot_server_with_two_ports_one_having_resource_request` | method | (self) | public | not declared | 1/28 | `src/nova/tests/functional/test_servers_resource_request.py:L831–L872` |
| `PortResourceRequestBasedSchedulingTest.test_one_ovs_one_sriov_port` | method | (self) | public | not declared | 1/25 | `src/nova/tests/functional/test_servers_resource_request.py:L874–L909` |
| `PortResourceRequestBasedSchedulingTest.test_interface_attach_with_resource_request` | method | (self) | public | not declared | 1/53 | `src/nova/tests/functional/test_servers_resource_request.py:L911–L985` |
| `PortResourceRequestBasedSchedulingTest.test_interface_attach_with_resource_request_no_candidates` | method | (self) | public | not declared | 1/24 | `src/nova/tests/functional/test_servers_resource_request.py:L987–L1016` |
| `PortResourceRequestBasedSchedulingTest.test_interface_attach_with_resource_request_pci_claim_fails` | method | (self) | public | not declared | 1/30 | `src/nova/tests/functional/test_servers_resource_request.py:L1018–L1066` |
| `PortResourceRequestBasedSchedulingTest.test_interface_attach_sriov_with_qos_pci_update_fails` | method | (self) | public | not declared | 1/28 | `src/nova/tests/functional/test_servers_resource_request.py:L1068–L1111` |
| `PortResourceRequestBasedSchedulingTest.test_interface_attach_sriov_with_qos_pci_update_fails_cleanup_fails` | method | (self) | public | not declared | 1/68 | `src/nova/tests/functional/test_servers_resource_request.py:L1113–L1214` |
| `PortResourceRequestBasedSchedulingTest.test_interface_attach_sriov_with_qos_pci_update_fails_cleanup_fails.fake_put` | function | (_self, url, **kwargs) | public | `orig_put(_self, url, **kwargs)` (src/nova/tests/functional/test_servers_resource_request.py:L1152); `conflict_rsp` (src/nova/tests/functional/test_servers_resource_request.py:L1155) | — | `src/nova/tests/functional/test_servers_resource_request.py:L1148–L1155` |
| `PortResourceRequestBasedSchedulingTest.test_interface_detach_with_port_with_bandwidth_request` | method | (self) | public | not declared | 1/32 | `src/nova/tests/functional/test_servers_resource_request.py:L1216–L1265` |
| `PortResourceRequestBasedSchedulingTest.test_delete_bound_port_in_neutron_with_resource_request` | method | (self) | public | not declared | 1/49 | `src/nova/tests/functional/test_servers_resource_request.py:L1267–L1345` |
| `PortResourceRequestBasedSchedulingTest.test_two_sriov_ports_one_with_request_two_available_pfs` | method | (self) | public | not declared | 1/34 | `src/nova/tests/functional/test_servers_resource_request.py:L1347–L1417` |
| `PortResourceRequestBasedSchedulingTest.test_one_sriov_port_no_vf_and_bandwidth_available_on_the_same_pf` | method | (self) | public | not declared | 1/20 | `src/nova/tests/functional/test_servers_resource_request.py:L1419–L1460` |
| `PortResourceRequestBasedSchedulingTest.test_sriov_macvtap_port_with_resource_request` | method | (self) | public | not declared | 1/22 | `src/nova/tests/functional/test_servers_resource_request.py:L1462–L1499` |
| `NonAdminPortResourceRequestTests` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L1502–L1526` |
| `NonAdminPortResourceRequestTests.setUp` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/test_servers_resource_request.py:L1505–L1526` |
| `ExtendedPortResourceRequestBasedSchedulingTestBase` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L1529–L1631` |
| `ExtendedPortResourceRequestBasedSchedulingTestBase._assert_port_binding_profile_allocation` | method | (self, port, compute_rp_uuid) | private | not declared | 6/28 | `src/nova/tests/functional/test_servers_resource_request.py:L1536–L1574` |
| `ExtendedPortResourceRequestBasedSchedulingTestBase._get_number_of_expected_allocations_for_ports` | method | (self, *ports) | private | `sum( len((port.get("resource_request") or {}).get("request_groups", [])) for port in ports )` (src/nova/tests/functional/test_servers_resource_request.py:L1580) | 3/5 | `src/nova/tests/functional/test_servers_resource_request.py:L1578–L1583` |
| `ExtendedPortResourceRequestBasedSchedulingTestBase._assert_port_res_req_grp_matches_allocation` | method | (self, port_id, group, allocations) | private | not declared | 2/8 | `src/nova/tests/functional/test_servers_resource_request.py:L1585–L1592` |
| `ExtendedPortResourceRequestBasedSchedulingTestBase.assertPortMatchesAllocation` | method | (self, port, allocations, compute_rp_uuid) | public | not declared | 5/21 | `src/nova/tests/functional/test_servers_resource_request.py:L1597–L1631` |
| `MultiGroupResourceRequestBasedSchedulingTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L1634–L1647` |
| `MultiGroupResourceRequestBasedSchedulingTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_servers_resource_request.py:L1644–L1647` |
| `NonAdminMultiGroupResReqTests` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L1650–L1674` |
| `NonAdminMultiGroupResReqTests.setUp` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/test_servers_resource_request.py:L1653–L1674` |
| `ServerMoveWithPortResourceRequestTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L1677–L2613` |
| `ServerMoveWithPortResourceRequestTest.setUp` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/test_servers_resource_request.py:L1680–L1702` |
| `ServerMoveWithPortResourceRequestTest._test_resize_or_migrate_server_with_qos_ports` | method | (self, new_flavor=None) | private | not declared | 2/29 | `src/nova/tests/functional/test_servers_resource_request.py:L1704–L1743` |
| `ServerMoveWithPortResourceRequestTest.test_migrate_server_with_qos_ports` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers_resource_request.py:L1745–L1746` |
| `ServerMoveWithPortResourceRequestTest.test_resize_server_with_qos_ports` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_servers_resource_request.py:L1748–L1750` |
| `ServerMoveWithPortResourceRequestTest._test_resize_or_migrate_revert_with_qos_ports` | method | (self, new_flavor=None) | private | not declared | 2/32 | `src/nova/tests/functional/test_servers_resource_request.py:L1752–L1795` |
| `ServerMoveWithPortResourceRequestTest.test_migrate_revert_with_qos_ports` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers_resource_request.py:L1797–L1798` |
| `ServerMoveWithPortResourceRequestTest.test_resize_revert_with_qos_ports` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_servers_resource_request.py:L1800–L1802` |
| `ServerMoveWithPortResourceRequestTest._test_resize_or_migrate_server_with_qos_port_reschedule_success` | method | (self, new_flavor=None) | private | not declared | 2/40 | `src/nova/tests/functional/test_servers_resource_request.py:L1804–L1875` |
| `ServerMoveWithPortResourceRequestTest._test_resize_or_migrate_server_with_qos_port_reschedule_success.fake_prep_resize` | function | (_self, *args, **kwargs) | public | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L1822–L1829` |
| `ServerMoveWithPortResourceRequestTest.test_migrate_server_with_qos_port_reschedule_success` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers_resource_request.py:L1877–L1878` |
| `ServerMoveWithPortResourceRequestTest.test_resize_server_with_qos_port_reschedule_success` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_servers_resource_request.py:L1880–L1882` |
| `ServerMoveWithPortResourceRequestTest._test_resize_or_migrate_server_with_qos_port_reschedule_failure` | method | (self, new_flavor=None) | private | not declared | 2/27 | `src/nova/tests/functional/test_servers_resource_request.py:L1884–L1921` |
| `ServerMoveWithPortResourceRequestTest.test_migrate_server_with_qos_port_reschedule_failure` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers_resource_request.py:L1923–L1924` |
| `ServerMoveWithPortResourceRequestTest.test_resize_server_with_qos_port_reschedule_failure` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_servers_resource_request.py:L1926–L1928` |
| `ServerMoveWithPortResourceRequestTest.test_migrate_server_with_qos_port_pci_update_fail_not_reschedule` | method | (self) | public | not declared | 1/36 | `src/nova/tests/functional/test_servers_resource_request.py:L1930–L1988` |
| `ServerMoveWithPortResourceRequestTest._check_allocation_during_evacuate` | method | (self, server, flavor, source_compute_rp_uuid, dest_compute_rp_uuid, non_qos_port, qos_port, qos_sriov_port) | private | not declared | 1/40 | `src/nova/tests/functional/test_servers_resource_request.py:L1990–L2057` |
| `ServerMoveWithPortResourceRequestTest._check_allocation_after_evacuation_source_recovered` | method | (self, server, flavor, dest_compute_rp_uuid, non_qos_port, qos_port, qos_sriov_port) | private | not declared | 1/30 | `src/nova/tests/functional/test_servers_resource_request.py:L2059–L2109` |
| `ServerMoveWithPortResourceRequestTest.test_evacuate_with_qos_port` | method | (self, host=None) | public | not declared | 2/24 | `src/nova/tests/functional/test_servers_resource_request.py:L2111–L2146` |
| `ServerMoveWithPortResourceRequestTest.test_evacuate_with_target_host_with_qos_port` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers_resource_request.py:L2148–L2149` |
| `ServerMoveWithPortResourceRequestTest.test_evacuate_with_qos_port_fails_recover_source_compute` | method | (self) | public | not declared | 1/28 | `src/nova/tests/functional/test_servers_resource_request.py:L2151–L2192` |
| `ServerMoveWithPortResourceRequestTest.test_evacuate_with_qos_port_pci_update_fail` | method | (self) | public | not declared | 1/29 | `src/nova/tests/functional/test_servers_resource_request.py:L2194–L2238` |
| `ServerMoveWithPortResourceRequestTest.test_live_migrate_with_qos_port` | method | (self, host=None) | public | not declared | 1/26 | `src/nova/tests/functional/test_servers_resource_request.py:L2240–L2271` |
| `ServerMoveWithPortResourceRequestTest.test_live_migrate_with_qos_port_with_target_host` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers_resource_request.py:L2273–L2274` |
| `ServerMoveWithPortResourceRequestTest.test_live_migrate_with_qos_port_reschedule_success` | method | (self) | public | not declared | 1/34 | `src/nova/tests/functional/test_servers_resource_request.py:L2276–L2328` |
| `ServerMoveWithPortResourceRequestTest.test_live_migrate_with_qos_port_reschedule_success.fake_check_can_live_migrate_destination` | function | (context, instance, src_compute_info, dst_compute_info, block_migration=False, disk_over_commit=False) | public | `orig_check( context, instance, src_compute_info, dst_compute_info, block_migration, disk_over_commit)` (src/nova/tests/functional/test_servers_resource_request.py:L2297) | — | `src/nova/tests/functional/test_servers_resource_request.py:L2290–L2299` |
| `ServerMoveWithPortResourceRequestTest.test_live_migrate_with_qos_port_reschedule_fails` | method | (self) | public | not declared | 1/30 | `src/nova/tests/functional/test_servers_resource_request.py:L2330–L2371` |
| `ServerMoveWithPortResourceRequestTest.test_live_migrate_with_qos_port_pci_update_fails` | method | (self) | public | not declared | 1/34 | `src/nova/tests/functional/test_servers_resource_request.py:L2373–L2419` |
| `ServerMoveWithPortResourceRequestTest.test_unshelve_not_offloaded_server_with_port_resource_request` | method | (self) | public | not declared | 1/23 | `src/nova/tests/functional/test_servers_resource_request.py:L2421–L2452` |
| `ServerMoveWithPortResourceRequestTest.test_unshelve_offloaded_server_with_qos_port` | method | (self) | public | not declared | 1/46 | `src/nova/tests/functional/test_servers_resource_request.py:L2454–L2512` |
| `ServerMoveWithPortResourceRequestTest.test_unshelve_offloaded_server_with_qos_port_pci_update_fails` | method | (self) | public | not declared | 1/39 | `src/nova/tests/functional/test_servers_resource_request.py:L2514–L2569` |
| `ServerMoveWithPortResourceRequestTest.test_unshelve_offloaded_server_with_qos_port_fails_due_to_neutron` | method | (self) | public | not declared | 1/34 | `src/nova/tests/functional/test_servers_resource_request.py:L2571–L2613` |
| `NonAdminServerMoveWithPortResourceRequestTests` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L2616–L2649` |
| `NonAdminServerMoveWithPortResourceRequestTests.setUp` | method | (self) | public | not declared | 1/28 | `src/nova/tests/functional/test_servers_resource_request.py:L2619–L2649` |
| `ServerMoveWithMultiGroupResourceRequestBasedSchedulingTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L2652–L2665` |
| `ServerMoveWithMultiGroupResourceRequestBasedSchedulingTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_servers_resource_request.py:L2662–L2665` |
| `NonAdminServerMoveWithMultiGroupResReqTests` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L2668–L2701` |
| `NonAdminServerMoveWithMultiGroupResReqTests.setUp` | method | (self) | public | not declared | 1/28 | `src/nova/tests/functional/test_servers_resource_request.py:L2671–L2701` |
| `LiveMigrateAbortWithPortResourceRequestTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L2704–L2760` |
| `LiveMigrateAbortWithPortResourceRequestTest.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L2707–L2707` |
| `LiveMigrateAbortWithPortResourceRequestTest.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_servers_resource_request.py:L2709–L2718` |
| `LiveMigrateAbortWithPortResourceRequestTest.test_live_migrate_with_qos_port_abort_migration` | method | (self) | public | not declared | 1/28 | `src/nova/tests/functional/test_servers_resource_request.py:L2720–L2760` |
| `PortResourceRequestReSchedulingTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L2763–L2871` |
| `PortResourceRequestReSchedulingTest.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L2772–L2772` |
| `PortResourceRequestReSchedulingTest.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_servers_resource_request.py:L2774–L2778` |
| `PortResourceRequestReSchedulingTest._create_networking_rp_tree` | method | (self, hostname, compute_rp_uuid) | private | not declared | 1/2 | `src/nova/tests/functional/test_servers_resource_request.py:L2780–L2782` |
| `PortResourceRequestReSchedulingTest.test_boot_reschedule_success` | method | (self) | public | not declared | 2/33 | `src/nova/tests/functional/test_servers_resource_request.py:L2784–L2834` |
| `PortResourceRequestReSchedulingTest.test_boot_reschedule_fill_provider_mapping_raises` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/test_servers_resource_request.py:L2836–L2871` |
| `PortResourceRequestReSchedulingTest.test_boot_reschedule_fill_provider_mapping_raises.stub_fill_provider_mapping` | function | (*args, **kwargs) | public | `original_fill(*args, **kwargs)` (src/nova/tests/functional/test_servers_resource_request.py:L2850) | — | `src/nova/tests/functional/test_servers_resource_request.py:L2848–L2852` |
| `CrossCellResizeWithQoSPort` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L2874–L2982` |
| `CrossCellResizeWithQoSPort.NUMBER_OF_CELLS` | constant | — | public | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L2875–L2875` |
| `CrossCellResizeWithQoSPort.setUp` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/test_servers_resource_request.py:L2877–L2896` |
| `CrossCellResizeWithQoSPort.test_cross_cell_migrate_server_with_qos_ports` | method | (self) | public | not declared | 1/43 | `src/nova/tests/functional/test_servers_resource_request.py:L2898–L2982` |
| `CrossCellResizeWithQoSPort.test_cross_cell_migrate_server_with_qos_ports.spy_on_create_binding` | function | (port_id, data) | public | `orig_create_binding(port_id, data)` (src/nova/tests/functional/test_servers_resource_request.py:L2940) | — | `src/nova/tests/functional/test_servers_resource_request.py:L2927–L2940` |
| `ExtendedResourceRequestOldCompute` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L2985–L3096` |
| `ExtendedResourceRequestOldCompute.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_servers_resource_request.py:L2992–L2996` |
| `ExtendedResourceRequestOldCompute.test_boot` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/test_servers_resource_request.py:L3002–L3015` |
| `ExtendedResourceRequestOldCompute._test_operation` | method | (self, op_callable) | private | not declared | 1/18 | `src/nova/tests/functional/test_servers_resource_request.py:L3021–L3042` |
| `ExtendedResourceRequestOldCompute.test_resize` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_servers_resource_request.py:L3044–L3049` |
| `ExtendedResourceRequestOldCompute.test_migrate` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_servers_resource_request.py:L3051–L3054` |
| `ExtendedResourceRequestOldCompute.test_live_migrate` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_servers_resource_request.py:L3056–L3059` |
| `ExtendedResourceRequestOldCompute.test_evacuate` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_servers_resource_request.py:L3061–L3064` |
| `ExtendedResourceRequestOldCompute.test_unshelve_after_shelve_offload` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_servers_resource_request.py:L3066–L3072` |
| `ExtendedResourceRequestOldCompute.test_unshelve_after_shelve_offload.shelve_offload_then_unshelve` | function | (server) | public | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L3067–L3069` |
| `ExtendedResourceRequestOldCompute.test_interface_attach` | method | (self, mock_get_service) | public | not declared | 1/20 | `src/nova/tests/functional/test_servers_resource_request.py:L3075–L3096` |
| `NonAdminExtendedResourceRequestOldCompute` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L3099–L3123` |
| `NonAdminExtendedResourceRequestOldCompute.setUp` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/test_servers_resource_request.py:L3103–L3123` |
| `ExtendedResourceRequestNeutronFixture.create_with_existing_neutron_state` | classmethod | — | public | not declared | — | `src/nova/tests/functional/test_servers_resource_request.py:L131–L140` |

## Dependencies

- `import copy` (src/nova/tests/functional/test_servers_resource_request.py:L15)
- `import logging` (src/nova/tests/functional/test_servers_resource_request.py:L16)
- `unittest`: imports `mock` (src/nova/tests/functional/test_servers_resource_request.py:L17)
- `keystoneauth1`: imports `adapter` (src/nova/tests/functional/test_servers_resource_request.py:L19)
- `neutronclient.common`: imports `exceptions as neutron_exception` (src/nova/tests/functional/test_servers_resource_request.py:L20)
- `import os_resource_classes as orc` (src/nova/tests/functional/test_servers_resource_request.py:L21)
- `oslo_config`: imports `cfg` (src/nova/tests/functional/test_servers_resource_request.py:L22)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/functional/test_servers_resource_request.py:L23)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/test_servers_resource_request.py:L24)
- `nova.compute`: imports `instance_actions` (src/nova/tests/functional/test_servers_resource_request.py:L26)
- `nova.compute`: imports `manager as compute_manager` (src/nova/tests/functional/test_servers_resource_request.py:L27)
- `nova`: imports `context` (src/nova/tests/functional/test_servers_resource_request.py:L28)
- `nova`: imports `exception` (src/nova/tests/functional/test_servers_resource_request.py:L29)
- `nova.network`: imports `constants` (src/nova/tests/functional/test_servers_resource_request.py:L30)
- `nova.network`: imports `neutron as neutronapi` (src/nova/tests/functional/test_servers_resource_request.py:L31)
- `nova`: imports `objects` (src/nova/tests/functional/test_servers_resource_request.py:L32)
- `nova.policies`: imports `base as base_policies` (src/nova/tests/functional/test_servers_resource_request.py:L33)
- `nova.policies`: imports `servers as servers_policies` (src/nova/tests/functional/test_servers_resource_request.py:L34)
- `nova.scheduler`: imports `utils` (src/nova/tests/functional/test_servers_resource_request.py:L35)
- `nova`: imports `test` (src/nova/tests/functional/test_servers_resource_request.py:L36)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/test_servers_resource_request.py:L37)
- `nova.tests.fixtures`: imports `NeutronFixture` (src/nova/tests/functional/test_servers_resource_request.py:L38)
- `nova.tests.functional.api`: imports `client` (src/nova/tests/functional/test_servers_resource_request.py:L39)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_servers_resource_request.py:L40)
- `nova.tests.unit`: imports `fake_requests` (src/nova/tests/functional/test_servers_resource_request.py:L41)
- `nova.virt`: imports `fake` (src/nova/tests/functional/test_servers_resource_request.py:L42)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/tests/functional/test_servers_resource_request.py:L44)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/functional/test_servers_resource_request.py:L46)
- **global-mutation**: CUSTOM_VNIC_TYPE_NORMAL = 'CUSTOM_VNIC_TYPE_NORMAL' (src/nova/tests/functional/test_servers_resource_request.py:L314)
- **global-mutation**: CUSTOM_VNIC_TYPE_DIRECT = 'CUSTOM_VNIC_TYPE_DIRECT' (src/nova/tests/functional/test_servers_resource_request.py:L315)
- **global-mutation**: CUSTOM_VNIC_TYPE_MACVTAP = 'CUSTOM_VNIC_TYPE_MACVTAP' (src/nova/tests/functional/test_servers_resource_request.py:L316)
- **global-mutation**: CUSTOM_PHYSNET1 = 'CUSTOM_PHYSNET1' (src/nova/tests/functional/test_servers_resource_request.py:L317)
- **global-mutation**: CUSTOM_PHYSNET2 = 'CUSTOM_PHYSNET2' (src/nova/tests/functional/test_servers_resource_request.py:L318)
- **global-mutation**: CUSTOM_PHYSNET3 = 'CUSTOM_PHYSNET3' (src/nova/tests/functional/test_servers_resource_request.py:L319)
- **global-mutation**: PF1 = 'pf1' (src/nova/tests/functional/test_servers_resource_request.py:L320)
- **global-mutation**: PF2 = 'pf2' (src/nova/tests/functional/test_servers_resource_request.py:L321)
- **global-mutation**: PF3 = 'pf3' (src/nova/tests/functional/test_servers_resource_request.py:L322)
- **global-mutation**: NUMBER_OF_CELLS = 2 (src/nova/tests/functional/test_servers_resource_request.py:L2875)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import adapter (src/nova/tests/functional/test_servers_resource_request.py:L19)
- **privilege** (`crypto-key`): with mock.patch('keystoneauth1.adapter.Adapter.put', new=fake_put): (src/nova/tests/functional/test_servers_resource_request.py:L1159)
- **sink** (`db-write`): "nova.exception.AllocationUpdateFailed: Failed to update " (src/nova/tests/functional/test_servers_resource_request.py:L1170)
- **sink** (`db-write`): f'Failed to update allocations for consumer {server["id"]}. ' (src/nova/tests/functional/test_servers_resource_request.py:L1204)
- **sink** (`db-write`): 'os_compute_api:os-services:update': '@', (src/nova/tests/functional/test_servers_resource_request.py:L2629)
- **sink** (`db-write`): 'os_compute_api:os-services:update': '@', (src/nova/tests/functional/test_servers_resource_request.py:L2681)

