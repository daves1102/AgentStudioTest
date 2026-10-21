# src/nova/tests/unit/scheduler/test_utils.py

## Overview

This file implements the `test_utils` module, defining 5 classs, 2 fields, 4 functions, 138 methods, 17 imports, 8 side effects.

Lines: total 2826, code 2466, comment 106, blank 254

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FakeResourceRequest` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_utils.py:L34–L44` |
| `FakeResourceRequest.__init__` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/test_utils.py:L41–L44` |
| `TestUtilsBase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_utils.py:L47–L60` |
| `TestUtilsBase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/test_utils.py:L48–L51` |
| `TestUtilsBase.assertResourceRequestsEqual` | method | (self, expected, observed) | public | not declared | 2/8 | `src/nova/tests/unit/scheduler/test_utils.py:L53–L60` |
| `TestUtils` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_utils.py:L64–L2302` |
| `TestUtils.test_build_request_spec_without_image` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/test_utils.py:L66–L74` |
| `TestUtils.test_build_request_spec_with_object` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/test_utils.py:L76–L84` |
| `TestUtils._test_resources_from_request_spec` | method | (self, expected, flavor, image=None) | private | `resources` (src/nova/tests/unit/scheduler/test_utils.py:L93) | 2/8 | `src/nova/tests/unit/scheduler/test_utils.py:L86–L93` |
| `TestUtils.test_resources_from_request_spec_flavor_only` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/scheduler/test_utils.py:L95–L110` |
| `TestUtils.test_resources_from_request_spec_flavor_req_traits` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/scheduler/test_utils.py:L112–L129` |
| `TestUtils.test_resources_from_request_spec_flavor_and_image_traits` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/scheduler/test_utils.py:L131–L164` |
| `TestUtils.test_resources_from_request_spec_flavor_forbidden_trait` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/scheduler/test_utils.py:L166–L186` |
| `TestUtils.test_resources_from_request_spec_with_no_disk` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/scheduler/test_utils.py:L188–L202` |
| `TestUtils.test_get_resources_from_request_spec_custom_resource_class` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/scheduler/test_utils.py:L204–L221` |
| `TestUtils.test_get_resources_from_request_spec_override_flavor_amounts` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/scheduler/test_utils.py:L223–L242` |
| `TestUtils.test_get_resources_from_request_spec_remove_flavor_amounts` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/scheduler/test_utils.py:L244–L260` |
| `TestUtils.test_get_resources_from_request_spec_vgpu` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/scheduler/test_utils.py:L262–L282` |
| `TestUtils.test_get_resources_from_request_spec_bad_std_resource_class` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/scheduler/test_utils.py:L284–L300` |
| `TestUtils.test_get_resources_from_request_spec_granular` | method | (self) | public | not declared | 1/67 | `src/nova/tests/unit/scheduler/test_utils.py:L302–L377` |
| `TestUtils.test_all_required_traits` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/scheduler/test_utils.py:L379–L409` |
| `TestUtils.test_resources_from_request_spec_aggregates` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/scheduler/test_utils.py:L411–L429` |
| `TestUtils.test_resources_from_request_spec_no_aggregates` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/scheduler/test_utils.py:L431–L454` |
| `TestUtils.test_resources_from_request_spec_forbidden_aggregates` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/scheduler/test_utils.py:L456–L468` |
| `TestUtils.test_resources_from_request_spec_no_forbidden_aggregates` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/scheduler/test_utils.py:L470–L497` |
| `TestUtils.test_process_extra_specs_granular_called` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/test_utils.py:L499–L509` |
| `TestUtils.test_process_extra_specs_granular_not_called` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/test_utils.py:L511–L520` |
| `TestUtils.test_process_missing_extra_specs_value` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/scheduler/test_utils.py:L522–L533` |
| `TestUtils.test_process_no_force_hosts_or_force_nodes` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/scheduler/test_utils.py:L535–L555` |
| `TestUtils.test_process_use_force_nodes` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/scheduler/test_utils.py:L557–L588` |
| `TestUtils.test_process_use_force_hosts` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/scheduler/test_utils.py:L590–L621` |
| `TestUtils.test_process_use_force_hosts_multinodes_found` | method | (self) | public | not declared | 1/33 | `src/nova/tests/unit/scheduler/test_utils.py:L623–L658` |
| `TestUtils.test_process_use_requested_destination` | method | (self) | public | not declared | 1/38 | `src/nova/tests/unit/scheduler/test_utils.py:L660–L697` |
| `TestUtils.test_resources_from_request_spec_having_requested_resources` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/scheduler/test_utils.py:L699–L739` |
| `TestUtils.test_resources_from_request_spec_requested_resources_unfilled` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/scheduler/test_utils.py:L741–L760` |
| `TestUtils.test_resources_from_request_spec_no_limit_based_on_hint` | method | (self, hints) | public | not declared | 1/25 | `src/nova/tests/unit/scheduler/test_utils.py:L769–L797` |
| `TestUtils.test_resources_from_request_spec_with_same_subtree` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/scheduler/test_utils.py:L799–L819` |
| `TestUtils.test_resources_from_flavor_no_bfv` | method | (self, mock_is_bfv) | public | not declared | 1/12 | `src/nova/tests/unit/scheduler/test_utils.py:L823–L834` |
| `TestUtils.test_resources_from_flavor_bfv` | method | (self, mock_is_bfv) | public | not declared | 1/12 | `src/nova/tests/unit/scheduler/test_utils.py:L838–L849` |
| `TestUtils.test_resources_from_flavor_with_override` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/scheduler/test_utils.py:L853–L882` |
| `TestUtils.test_resource_request_from_request_spec` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/scheduler/test_utils.py:L884–L899` |
| `TestUtils.test_resource_request_from_request_spec_with_extra_specs` | method | (self) | public | not declared | 1/88 | `src/nova/tests/unit/scheduler/test_utils.py:L901–L997` |
| `TestUtils._test_resource_request_from_rs_with_legacy_extra_specs` | method | (self) | private | `objects.RequestSpec(flavor=flavor, is_bfv=False)` (src/nova/tests/unit/scheduler/test_utils.py:L1008) | 1/9 | `src/nova/tests/unit/scheduler/test_utils.py:L999–L1008` |
| `TestUtils.test_resource_request_from_request_spec_with_legacy_extra_specs` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/scheduler/test_utils.py:L1010–L1029` |
| `TestUtils.test_resource_request_from_rs_with_legacy_extra_specs_no_translate` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/scheduler/test_utils.py:L1031–L1052` |
| `TestUtils.test_resource_request_from_request_spec_with_image_props` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/scheduler/test_utils.py:L1054–L1078` |
| `TestUtils._test_resource_request_from_rs_with_legacy_image_props` | method | (self) | private | `objects.RequestSpec(flavor=flavor, image=image, is_bfv=False)` (src/nova/tests/unit/scheduler/test_utils.py:L1090) | 1/11 | `src/nova/tests/unit/scheduler/test_utils.py:L1080–L1090` |
| `TestUtils.test_resource_request_from_request_spec_with_legacy_image_props` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/scheduler/test_utils.py:L1092–L1110` |
| `TestUtils.test_resource_request_from_rs_with_legacy_image_props_no_translate` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/scheduler/test_utils.py:L1112–L1133` |
| `TestUtils._test_resource_request_from_request_spec_with_mixed_cpus` | method | (self, extra_specs) | private | not declared | 1/20 | `src/nova/tests/unit/scheduler/test_utils.py:L1135–L1154` |
| `TestUtils.test_resource_request_from_request_spec_with_mixed_cpus_dedicated` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/test_utils.py:L1156–L1168` |
| `TestUtils.test_resource_request_from_request_spec_with_mixed_cpus_realtime` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/test_utils.py:L1170–L1181` |
| `TestUtils._test_resource_request_from_request_spec_with_mixed_cpus_iso_emu` | method | (self, extra_specs) | private | not declared | 1/20 | `src/nova/tests/unit/scheduler/test_utils.py:L1183–L1204` |
| `TestUtils.test_resource_request_from_rswith_mixed_cpus_iso_emu_realtime` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/test_utils.py:L1206–L1218` |
| `TestUtils.test_resource_request_from_rs_with_mixed_cpus_iso_emu_dedicated` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/test_utils.py:L1220–L1233` |
| `TestUtils.test_resource_request_from_request_spec_is_bfv` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/scheduler/test_utils.py:L1235–L1252` |
| `TestUtils.test_resource_request_from_request_spec_with_vpmems` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/scheduler/test_utils.py:L1254–L1272` |
| `TestUtils.test_resource_request_from_request_spec_with_pci_numa_policy` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/scheduler/test_utils.py:L1274–L1291` |
| `TestUtils.test_resource_request_from_request_spec_with_stateless_firmware` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/scheduler/test_utils.py:L1293–L1315` |
| `TestUtils.test_resource_request_from_request_spec_with_secure_boot` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/scheduler/test_utils.py:L1317–L1334` |
| `TestUtils.test_resource_request_from_request_spec_with_vtpm_version_only` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/scheduler/test_utils.py:L1336–L1361` |
| `TestUtils.test_resource_request_from_request_spec_with_vtpm_1_2` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/scheduler/test_utils.py:L1363–L1389` |
| `TestUtils.test_resource_request_from_request_spec_with_vtpm_2_0` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/scheduler/test_utils.py:L1391–L1417` |
| `TestUtils.test_resource_request_from_request_spec_with_maxphysaddr_passthrough` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/scheduler/test_utils.py:L1419–L1438` |
| `TestUtils.test_resource_request_from_request_spec_with_maxphysaddr_emulate` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/scheduler/test_utils.py:L1440–L1458` |
| `TestUtils.test_resource_request_from_request_groups` | method | (self) | public | not declared | 1/46 | `src/nova/tests/unit/scheduler/test_utils.py:L1460–L1507` |
| `TestUtils.test_resource_request_add_group_inserts_the_group` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/scheduler/test_utils.py:L1509–L1521` |
| `TestUtils.test_empty_groups_forbidden` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/test_utils.py:L1523–L1532` |
| `TestUtils.test_claim_resources_on_destination_no_source_allocations` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/scheduler/test_utils.py:L1534–L1562` |
| `TestUtils.test_claim_resources_on_destination_no_source_allocations.test` | function | (mock_claim, mock_get_allocs) | public | not declared | — | `src/nova/tests/unit/scheduler/test_utils.py:L1551–L1560` |
| `TestUtils.test_claim_resources_on_destination_claim_fails` | method | (self) | public | not declared | 1/38 | `src/nova/tests/unit/scheduler/test_utils.py:L1564–L1620` |
| `TestUtils.test_claim_resources_on_destination_claim_fails.test` | function | (mock_claim, mock_get_allocs) | public | not declared | — | `src/nova/tests/unit/scheduler/test_utils.py:L1606–L1618` |
| `TestUtils.test_claim_resources_on_destination` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/scheduler/test_utils.py:L1622–L1666` |
| `TestUtils.test_claim_resources_on_destination.test` | function | (mock_claim, mock_get_allocs) | public | not declared | — | `src/nova/tests/unit/scheduler/test_utils.py:L1656–L1664` |
| `TestUtils.test_claim_resources` | method | (self, mock_is_rebuild, mock_client) | public | not declared | 1/22 | `src/nova/tests/unit/scheduler/test_utils.py:L1670–L1698` |
| `TestUtils.test_claim_resources_for_policy_check` | method | (self, mock_is_rebuild, mock_client) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/test_utils.py:L1702–L1710` |
| `TestUtils._test_set_vm_state_and_notify` | method | (self, mock_save, mock_add, mock_notifier, mock_notify_task, request_spec, payload_request_spec) | private | not declared | 1/31 | `src/nova/tests/unit/scheduler/test_utils.py:L1716–L1748` |
| `TestUtils.test_set_vm_state_and_notify_request_spec_dict` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/test_utils.py:L1750–L1757` |
| `TestUtils.test_set_vm_state_and_notify_request_spec_object` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/test_utils.py:L1759–L1768` |
| `TestUtils.test_set_vm_state_and_notify_request_spec_none` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/test_utils.py:L1770–L1776` |
| `TestUtils.test_build_filter_properties` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/scheduler/test_utils.py:L1778–L1788` |
| `TestUtils.test_build_filter_properties_no_forced_host_no_force_node` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/scheduler/test_utils.py:L1790–L1800` |
| `TestUtils._test_populate_filter_props` | method | (self, with_retry=True, force_hosts=None, force_nodes=None, no_limits=None) | private | not declared | 22/53 | `src/nova/tests/unit/scheduler/test_utils.py:L1802–L1861` |
| `TestUtils.test_populate_filter_props` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/scheduler/test_utils.py:L1863–L1864` |
| `TestUtils.test_populate_filter_props_no_retry` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/scheduler/test_utils.py:L1866–L1867` |
| `TestUtils.test_populate_filter_props_force_hosts_no_retry` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/scheduler/test_utils.py:L1869–L1870` |
| `TestUtils.test_populate_filter_props_force_nodes_no_retry` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/scheduler/test_utils.py:L1872–L1873` |
| `TestUtils.test_populate_filter_props_multi_force_hosts_with_retry` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/test_utils.py:L1875–L1877` |
| `TestUtils.test_populate_filter_props_multi_force_nodes_with_retry` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/test_utils.py:L1879–L1881` |
| `TestUtils.test_populate_filter_props_no_limits` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/scheduler/test_utils.py:L1883–L1884` |
| `TestUtils.test_populate_retry_exception_at_max_attempts` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/test_utils.py:L1886–L1895` |
| `TestUtils._check_parse_options` | method | (self, opts, sep, converter, expected) | private | not declared | 2/4 | `src/nova/tests/unit/scheduler/test_utils.py:L1897–L1900` |
| `TestUtils.test_parse_options` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/test_utils.py:L1902–L1914` |
| `TestUtils.test_validate_filters_configured` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/test_utils.py:L1916–L1922` |
| `TestUtils.test_validate_weighers_configured` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/test_utils.py:L1924–L1933` |
| `TestUtils.test_validate_weighers_configured_all_weighers` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/test_utils.py:L1935–L1939` |
| `TestUtils._create_server_group` | method | (self, policy='anti-affinity') | private | `group` (src/nova/tests/unit/scheduler/test_utils.py:L1950) | 1/9 | `src/nova/tests/unit/scheduler/test_utils.py:L1941–L1950` |
| `TestUtils._get_group_details` | method | (self, group, policy=None) | private | not declared | 1/15 | `src/nova/tests/unit/scheduler/test_utils.py:L1952–L1967` |
| `TestUtils.test_get_group_details` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/scheduler/test_utils.py:L1969–L1973` |
| `TestUtils.test_get_group_details_with_no_instance_uuid` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/test_utils.py:L1975–L1977` |
| `TestUtils._get_group_details_with_filter_not_configured` | method | (self, policy) | private | not declared | 1/20 | `src/nova/tests/unit/scheduler/test_utils.py:L1979–L2001` |
| `TestUtils.test_get_group_details_with_filter_not_configured` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/scheduler/test_utils.py:L2003–L2007` |
| `TestUtils.test_setup_instance_group_in_request_spec` | method | (self, mock_ggd) | public | not declared | 1/12 | `src/nova/tests/unit/scheduler/test_utils.py:L2010–L2024` |
| `TestUtils.test_setup_instance_group_with_no_group` | method | (self, mock_ggd) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/test_utils.py:L2027–L2038` |
| `TestUtils.test_setup_instance_group_with_filter_not_configured` | method | (self, mock_ggd) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/test_utils.py:L2041–L2049` |
| `TestUtils.test_get_aggregates_for_routed_network` | method | (self, mock_get_segment_ids) | public | not declared | 1/17 | `src/nova/tests/unit/scheduler/test_utils.py:L2052–L2074` |
| `TestUtils.test_get_aggregates_for_routed_network.fake_get_provider_aggregates` | function | (context, segment_id) | public | `agg_info` (src/nova/tests/unit/scheduler/test_utils.py:L2060) | — | `src/nova/tests/unit/scheduler/test_utils.py:L2057–L2060` |
| `TestUtils.test_get_aggregates_for_routed_network_none` | method | (self, mock_get_segment_ids) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/test_utils.py:L2077–L2086` |
| `TestUtils.test_get_aggregates_for_routed_network_fails` | method | (self, mock_get_segment_ids) | public | not declared | 1/21 | `src/nova/tests/unit/scheduler/test_utils.py:L2089–L2113` |
| `TestUtils.test_get_aggregates_for_routed_subnet` | method | (self, mock_get_segment_ids) | public | not declared | 1/15 | `src/nova/tests/unit/scheduler/test_utils.py:L2116–L2131` |
| `TestUtils.test_get_aggregates_for_routed_subnet_none` | method | (self, mock_get_segment_ids) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/test_utils.py:L2134–L2141` |
| `TestUtils.test_get_aggregates_for_routed_subnet_fails` | method | (self, mock_get_segment_ids) | public | not declared | 1/20 | `src/nova/tests/unit/scheduler/test_utils.py:L2144–L2167` |
| `TestUtils.test_get_weight_multiplier` | method | (self) | public | not declared | 1/43 | `src/nova/tests/unit/scheduler/test_utils.py:L2169–L2217` |
| `TestUtils._set_up_and_fill_provider_mapping` | method | (self, requested_resources) | private | not declared | 2/25 | `src/nova/tests/unit/scheduler/test_utils.py:L2219–L2246` |
| `TestUtils.test_fill_provider_mapping` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/test_utils.py:L2248–L2255` |
| `TestUtils.test_fill_provider_mapping_no_op` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/scheduler/test_utils.py:L2257–L2260` |
| `TestUtils.test_fill_provider_mapping_based_on_allocation_returns_early` | method | (self, mock_map) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/test_utils.py:L2264–L2276` |
| `TestUtils.test_fill_provider_mapping_based_on_allocation` | method | (self, mock_map, mock_report_client) | public | not declared | 1/19 | `src/nova/tests/unit/scheduler/test_utils.py:L2281–L2302` |
| `TestEncryptedMemoryTranslation` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_utils.py:L2306–L2674` |
| `TestEncryptedMemoryTranslation.flavor_name` | field | — | public | not declared | — | `src/nova/tests/unit/scheduler/test_utils.py:L2307–L2307` |
| `TestEncryptedMemoryTranslation.image_name` | field | — | public | not declared | — | `src/nova/tests/unit/scheduler/test_utils.py:L2308–L2308` |
| `TestEncryptedMemoryTranslation._get_request_spec` | method | (self, extra_specs, image) | private | `reqspec` (src/nova/tests/unit/scheduler/test_utils.py:L2326) | 2/12 | `src/nova/tests/unit/scheduler/test_utils.py:L2310–L2326` |
| `TestEncryptedMemoryTranslation._get_resource_request` | method | (self, extra_specs, image) | private | `utils.ResourceRequest.from_request_spec(reqspec)` (src/nova/tests/unit/scheduler/test_utils.py:L2330) | 1/3 | `src/nova/tests/unit/scheduler/test_utils.py:L2328–L2330` |
| `TestEncryptedMemoryTranslation._get_expected_resource_request` | method | (self, mem_encryption_model) | private | `expected` (src/nova/tests/unit/scheduler/test_utils.py:L2363) | 6/31 | `src/nova/tests/unit/scheduler/test_utils.py:L2332–L2363` |
| `TestEncryptedMemoryTranslation._test_encrypted_memory_support_not_required` | method | (self, extra_specs, image=None) | private | not declared | 1/5 | `src/nova/tests/unit/scheduler/test_utils.py:L2365–L2370` |
| `TestEncryptedMemoryTranslation.test_encrypted_memory_support_empty_extra_specs` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/scheduler/test_utils.py:L2372–L2373` |
| `TestEncryptedMemoryTranslation.test_encrypted_memory_support_false_extra_spec` | method | (self, extra_spec) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/test_utils.py:L2376–L2378` |
| `TestEncryptedMemoryTranslation.test_encrypted_memory_support_empty_image_props` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/test_utils.py:L2380–L2383` |
| `TestEncryptedMemoryTranslation.test_encrypted_memory_support_false_image_prop` | method | (self, image_prop) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/test_utils.py:L2386–L2392` |
| `TestEncryptedMemoryTranslation.test_encrypted_memory_support_both_false` | method | (self, image_prop, extra_spec) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/test_utils.py:L2397–L2403` |
| `TestEncryptedMemoryTranslation._test_encrypted_memory_support_conflict` | method | (self, extra_spec, image_prop_in, image_prop_out) | private | not declared | 1/31 | `src/nova/tests/unit/scheduler/test_utils.py:L2405–L2444` |
| `TestEncryptedMemoryTranslation.test_encrypted_memory_support_conflict1` | method | (self, image_prop_in, extra_spec) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/test_utils.py:L2450–L2454` |
| `TestEncryptedMemoryTranslation.test_encrypted_memory_support_conflict2` | method | (self, image_prop_in, extra_spec) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/test_utils.py:L2460–L2464` |
| `TestEncryptedMemoryTranslation._test_encrypted_memory_support_required` | method | (self, requesters, extra_specs, mock_log, image=None, model='amd-sev') | private | not declared | 4/21 | `src/nova/tests/unit/scheduler/test_utils.py:L2467–L2489` |
| `TestEncryptedMemoryTranslation.test_encrypted_memory_support_extra_spec` | method | (self, extra_spec) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/test_utils.py:L2492–L2501` |
| `TestEncryptedMemoryTranslation.test_encrypted_memory_support_image_prop` | method | (self, image_prop) | public | not declared | 1/12 | `src/nova/tests/unit/scheduler/test_utils.py:L2504–L2515` |
| `TestEncryptedMemoryTranslation.test_encrypted_memory_support_both_required` | method | (self, image_prop, extra_spec) | public | not declared | 1/14 | `src/nova/tests/unit/scheduler/test_utils.py:L2520–L2533` |
| `TestEncryptedMemoryTranslation.test_encrypted_memory_model_extra_spec` | method | (self, model) | public | not declared | 3/18 | `src/nova/tests/unit/scheduler/test_utils.py:L2536–L2554` |
| `TestEncryptedMemoryTranslation.test_encrypted_memory_model_image_prop` | method | (self, model) | public | not declared | 3/20 | `src/nova/tests/unit/scheduler/test_utils.py:L2557–L2577` |
| `TestEncryptedMemoryTranslation.test_encrypted_memory_model_both_required` | method | (self, model) | public | not declared | 3/22 | `src/nova/tests/unit/scheduler/test_utils.py:L2580–L2602` |
| `TestEncryptedMemoryTranslation.test_encrypted_memory_model_conflict_1` | method | (self, f_model, i_model) | public | not declared | 1/20 | `src/nova/tests/unit/scheduler/test_utils.py:L2618–L2637` |
| `TestEncryptedMemoryTranslation.test_encrypted_memory_model_snp_but_stateful` | method | (self) | public | not declared | 1/33 | `src/nova/tests/unit/scheduler/test_utils.py:L2639–L2674` |
| `TestResourcesFromRequestGroupDefaultPolicy` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_utils.py:L2677–L2826` |
| `TestResourcesFromRequestGroupDefaultPolicy.setUp` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/scheduler/test_utils.py:L2685–L2706` |
| `TestResourcesFromRequestGroupDefaultPolicy.test_one_group_from_flavor_dont_warn` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/scheduler/test_utils.py:L2708–L2730` |
| `TestResourcesFromRequestGroupDefaultPolicy.test_one_group_from_port_dont_warn` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/scheduler/test_utils.py:L2732–L2753` |
| `TestResourcesFromRequestGroupDefaultPolicy.test_two_groups_from_flavor_only_warns` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/scheduler/test_utils.py:L2755–L2778` |
| `TestResourcesFromRequestGroupDefaultPolicy.test_one_group_from_flavor_one_from_port_policy_defaulted` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/scheduler/test_utils.py:L2780–L2803` |
| `TestResourcesFromRequestGroupDefaultPolicy.test_two_groups_from_ports_policy_defaulted` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/scheduler/test_utils.py:L2805–L2826` |

## Dependencies

- `import itertools` (src/nova/tests/unit/scheduler/test_utils.py:L13)
- `unittest`: imports `mock` (src/nova/tests/unit/scheduler/test_utils.py:L14)
- `import ddt` (src/nova/tests/unit/scheduler/test_utils.py:L16)
- `import os_resource_classes as orc` (src/nova/tests/unit/scheduler/test_utils.py:L17)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/scheduler/test_utils.py:L18)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/scheduler/test_utils.py:L19)
- `nova.compute`: imports `flavors` (src/nova/tests/unit/scheduler/test_utils.py:L21)
- `nova`: imports `context as nova_context` (src/nova/tests/unit/scheduler/test_utils.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/scheduler/test_utils.py:L23)
- `nova.network`: imports `neutron` (src/nova/tests/unit/scheduler/test_utils.py:L24)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/test_utils.py:L25)
- `nova.scheduler.client`: imports `report` (src/nova/tests/unit/scheduler/test_utils.py:L26)
- `nova.scheduler`: imports `utils` (src/nova/tests/unit/scheduler/test_utils.py:L27)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/test_utils.py:L28)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/scheduler/test_utils.py:L29)
- `nova.tests.unit.objects`: imports `test_flavor` (src/nova/tests/unit/scheduler/test_utils.py:L30)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/test_utils.py:L31)

## Side Effects

- **network**: def _test_set_vm_state_and_notify( (src/nova/tests/unit/scheduler/test_utils.py:L1716)
- **network**: utils.set_vm_state_and_notify( (src/nova/tests/unit/scheduler/test_utils.py:L1735)
- **network**: set_vm_state_and_notify. (src/nova/tests/unit/scheduler/test_utils.py:L1752)
- **network**: self._test_set_vm_state_and_notify( (src/nova/tests/unit/scheduler/test_utils.py:L1756)
- **network**: """Tests passing a RequestSpec object to set_vm_state_and_notify.""" (src/nova/tests/unit/scheduler/test_utils.py:L1760)
- **network**: self._test_set_vm_state_and_notify( (src/nova/tests/unit/scheduler/test_utils.py:L1766)
- **network**: """Tests passing None for the request_spec to set_vm_state_and_notify. (src/nova/tests/unit/scheduler/test_utils.py:L1771)
- **network**: self._test_set_vm_state_and_notify( (src/nova/tests/unit/scheduler/test_utils.py:L1775)

## Notes

- KB `sideEffects` entries at L1716 have targets that appear to be code fragments rather than resource paths; documented as recorded.

