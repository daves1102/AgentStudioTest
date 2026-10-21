# src/nova/tests/unit/pci/test_stats.py

## Overview

This file implements the `test_stats` module, defining 5 classs, 1 constant, 85 methods, 1 staticmethod, 6 variables, 15 imports, 1 side effect.

Lines: total 1993, code 1654, comment 144, blank 195

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/pci/test_stats.py:L33–L33` |
| `fake_pci_1` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_stats.py:L34–L45` |
| `fake_pci_2` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_stats.py:L48–L51` |
| `fake_pci_3` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_stats.py:L54–L54` |
| `fake_pci_4` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_stats.py:L56–L59` |
| `pci_requests` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_stats.py:L61–L64` |
| `pci_requests_multiple` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_stats.py:L67–L70` |
| `PciDeviceStatsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_stats.py:L73–L484` |
| `PciDeviceStatsTestCase._get_fake_requests` | method | (vendor_ids=None, numa_policy=None, count=1) | private | `[objects.InstancePCIRequest(count=count, spec=[spec], numa_policy=numa_policy) for spec in specs]` (src/nova/tests/unit/pci/test_stats.py:L82) | 4/6 | `src/nova/tests/unit/pci/test_stats.py:L76–L83` |
| `PciDeviceStatsTestCase._create_fake_devs` | method | (self) | private | not declared | 2/8 | `src/nova/tests/unit/pci/test_stats.py:L85–L93` |
| `PciDeviceStatsTestCase._add_fake_devs_with_numa` | method | (self) | private | not declared | 2/7 | `src/nova/tests/unit/pci/test_stats.py:L95–L102` |
| `PciDeviceStatsTestCase.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_stats.py:L104–L110` |
| `PciDeviceStatsTestCase.test_add_device` | method | (self) | public | not declared | 3/5 | `src/nova/tests/unit/pci/test_stats.py:L112–L116` |
| `PciDeviceStatsTestCase.test_remove_device` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/pci/test_stats.py:L118–L125` |
| `PciDeviceStatsTestCase.test_remove_device_exception` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_stats.py:L127–L131` |
| `PciDeviceStatsTestCase.test_pci_stats_equivalent` | method | (self) | public | not declared | 2/8 | `src/nova/tests/unit/pci/test_stats.py:L133–L140` |
| `PciDeviceStatsTestCase.test_pci_stats_not_equivalent` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/pci/test_stats.py:L142–L148` |
| `PciDeviceStatsTestCase.test_object_create` | method | (self) | public | not declared | 3/7 | `src/nova/tests/unit/pci/test_stats.py:L150–L157` |
| `PciDeviceStatsTestCase.test_apply_requests` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_stats.py:L159–L164` |
| `PciDeviceStatsTestCase.test_apply_requests_failed` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/pci/test_stats.py:L166–L172` |
| `PciDeviceStatsTestCase.test_support_requests` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/pci/test_stats.py:L174–L177` |
| `PciDeviceStatsTestCase.test_support_requests_failed` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/pci/test_stats.py:L179–L183` |
| `PciDeviceStatsTestCase.test_support_requests_numa` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/pci/test_stats.py:L185–L194` |
| `PciDeviceStatsTestCase.test_support_requests_numa_failed` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/pci/test_stats.py:L196–L203` |
| `PciDeviceStatsTestCase.test_support_requests_no_numa_info` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/pci/test_stats.py:L205–L220` |
| `PciDeviceStatsTestCase.test_support_requests_numa_pci_numa_policy_preferred` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/pci/test_stats.py:L222–L236` |
| `PciDeviceStatsTestCase.test_support_requests_no_numa_info_pci_numa_policy_required` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/pci/test_stats.py:L238–L250` |
| `PciDeviceStatsTestCase.test_filter_pools_for_socket_affinity_no_socket` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/pci/test_stats.py:L252–L259` |
| `PciDeviceStatsTestCase.test_filter_pools_for_socket_affinity` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/pci/test_stats.py:L261–L269` |
| `PciDeviceStatsTestCase.test_consume_requests` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/pci/test_stats.py:L271–L275` |
| `PciDeviceStatsTestCase.test_consume_requests_empty` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/pci/test_stats.py:L277–L279` |
| `PciDeviceStatsTestCase.test_consume_requests_failed` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/pci/test_stats.py:L281–L286` |
| `PciDeviceStatsTestCase.test_consume_requests_numa` | method | (self) | public | not declared | 2/11 | `src/nova/tests/unit/pci/test_stats.py:L288–L298` |
| `PciDeviceStatsTestCase.test_consume_requests_numa_failed` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/pci/test_stats.py:L300–L310` |
| `PciDeviceStatsTestCase.test_consume_requests_no_numa_info` | method | (self) | public | not declared | 2/11 | `src/nova/tests/unit/pci/test_stats.py:L312–L322` |
| `PciDeviceStatsTestCase._test_consume_requests_numa_policy` | method | (self, cell_ids, policy, expected, vendor_id='v4', count=1) | private | not declared | 4/20 | `src/nova/tests/unit/pci/test_stats.py:L324–L353` |
| `PciDeviceStatsTestCase.test_consume_requests_numa_policy_required` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/pci/test_stats.py:L355–L363` |
| `PciDeviceStatsTestCase.test_consume_requests_numa_policy_required_fail` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/pci/test_stats.py:L365–L373` |
| `PciDeviceStatsTestCase.test_consume_requests_numa_policy_legacy` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/pci/test_stats.py:L375–L383` |
| `PciDeviceStatsTestCase.test_consume_requests_numa_policy_legacy_fallback` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/pci/test_stats.py:L385–L394` |
| `PciDeviceStatsTestCase.test_consume_requests_numa_policy_legacy_multiple` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/pci/test_stats.py:L396–L406` |
| `PciDeviceStatsTestCase.test_consume_requests_numa_policy_legacy_fail` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/pci/test_stats.py:L408–L417` |
| `PciDeviceStatsTestCase.test_consume_requests_numa_policy_preferred` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/pci/test_stats.py:L419–L427` |
| `PciDeviceStatsTestCase.test_consume_requests_numa_policy_preferred_fallback_a` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/pci/test_stats.py:L429–L438` |
| `PciDeviceStatsTestCase.test_consume_requests_numa_policy_preferred_fallback_b` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/pci/test_stats.py:L440–L450` |
| `PciDeviceStatsTestCase.test_consume_requests_numa_policy_preferred_multiple_a` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/pci/test_stats.py:L452–L462` |
| `PciDeviceStatsTestCase.test_consume_requests_numa_policy_preferred_multiple_b` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/pci/test_stats.py:L464–L474` |
| `PciDeviceStatsTestCase.test_device_spec_parsing` | method | (self, mock_whitelist_parse) | public | not declared | 1/7 | `src/nova/tests/unit/pci/test_stats.py:L478–L484` |
| `PciDeviceStatsWithTagsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_stats.py:L487–L933` |
| `PciDeviceStatsWithTagsTestCase.setUp` | method | (self) | public | not declared | 1/47 | `src/nova/tests/unit/pci/test_stats.py:L489–L535` |
| `PciDeviceStatsWithTagsTestCase._create_pci_devices` | method | (self) | private | not declared | 9/108 | `src/nova/tests/unit/pci/test_stats.py:L537–L662` |
| `PciDeviceStatsWithTagsTestCase._assertPoolContent` | method | (self, pool, vendor_id, product_id, count, **tags) | private | not declared | 3/7 | `src/nova/tests/unit/pci/test_stats.py:L664–L670` |
| `PciDeviceStatsWithTagsTestCase._assertPools` | method | (self) | private | not declared | 7/76 | `src/nova/tests/unit/pci/test_stats.py:L672–L762` |
| `PciDeviceStatsWithTagsTestCase.test_add_devices` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/pci/test_stats.py:L764–L766` |
| `PciDeviceStatsWithTagsTestCase.test_consume_requests` | method | (self) | public | not declared | 2/53 | `src/nova/tests/unit/pci/test_stats.py:L768–L822` |
| `PciDeviceStatsWithTagsTestCase.test_add_device_no_devspec` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/pci/test_stats.py:L824–L838` |
| `PciDeviceStatsWithTagsTestCase.test_remove_device_no_devspec` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/pci/test_stats.py:L840–L854` |
| `PciDeviceStatsWithTagsTestCase.test_remove_device` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/pci/test_stats.py:L856–L862` |
| `PciDeviceStatsWithTagsTestCase.test_update_device_splits_the_pool` | method | (self) | public | not declared | 2/27 | `src/nova/tests/unit/pci/test_stats.py:L864–L895` |
| `PciDeviceStatsWithTagsTestCase.test_only_vfs_from_the_same_parent_are_pooled` | method | (self) | public | not declared | 3/35 | `src/nova/tests/unit/pci/test_stats.py:L897–L933` |
| `PciDeviceStatsPlacementSupportTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_stats.py:L936–L1124` |
| `PciDeviceStatsPlacementSupportTestCase.test_device_spec_rc_and_traits_ignored_during_pooling` | method | (self) | public | not declared | 1/42 | `src/nova/tests/unit/pci/test_stats.py:L938–L987` |
| `PciDeviceStatsPlacementSupportTestCase.test_filter_pools_for_spec_ignores_rc_and_traits_in_spec` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/pci/test_stats.py:L989–L1010` |
| `PciDeviceStatsPlacementSupportTestCase.test_populate_pools_metadata_from_assigned_devices` | method | (self) | public | not declared | 1/36 | `src/nova/tests/unit/pci/test_stats.py:L1012–L1050` |
| `PciDeviceStatsPlacementSupportTestCase.test_populate_pools_metadata_from_assigned_devices_device_without_rp` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/pci/test_stats.py:L1052–L1081` |
| `PciDeviceStatsPlacementSupportTestCase.test_populate_pools_metadata_from_assigned_devices_multiple_rp` | method | (self) | public | not declared | 1/40 | `src/nova/tests/unit/pci/test_stats.py:L1083–L1124` |
| `PciDeviceStatsProviderMappingTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_stats.py:L1128–L1721` |
| `PciDeviceStatsProviderMappingTestCase.setUp` | method | (self) | public | not declared | 2/76 | `src/nova/tests/unit/pci/test_stats.py:L1129–L1215` |
| `PciDeviceStatsProviderMappingTestCase.test_support_request_unrestricted` | method | (self) | public | not declared | 4/26 | `src/nova/tests/unit/pci/test_stats.py:L1217–L1252` |
| `PciDeviceStatsProviderMappingTestCase.test_support_request_restricted_by_provider_mapping` | method | (self) | public | not declared | 4/34 | `src/nova/tests/unit/pci/test_stats.py:L1254–L1295` |
| `PciDeviceStatsProviderMappingTestCase.test_support_request_restricted_by_provider_mapping_does_not_fit` | method | (self) | public | not declared | 2/28 | `src/nova/tests/unit/pci/test_stats.py:L1297–L1329` |
| `PciDeviceStatsProviderMappingTestCase.test_support_request_neutron_port_based_request_ignore_mapping` | method | (self) | public | not declared | 2/26 | `src/nova/tests/unit/pci/test_stats.py:L1331–L1364` |
| `PciDeviceStatsProviderMappingTestCase.test_support_request_req_with_count_2` | method | (self) | public | not declared | 3/28 | `src/nova/tests/unit/pci/test_stats.py:L1366–L1398` |
| `PciDeviceStatsProviderMappingTestCase.test_support_requests_multiple_reqs` | method | (self) | public | not declared | 3/42 | `src/nova/tests/unit/pci/test_stats.py:L1400–L1448` |
| `PciDeviceStatsProviderMappingTestCase.test_apply_gets_requested_uuids_from_pci_req` | method | (self) | public | not declared | 3/24 | `src/nova/tests/unit/pci/test_stats.py:L1450–L1483` |
| `PciDeviceStatsProviderMappingTestCase._create_two_pools_with_two_vfs` | method | (self) | private | not declared | 4/24 | `src/nova/tests/unit/pci/test_stats.py:L1485–L1513` |
| `PciDeviceStatsProviderMappingTestCase.test_apply_asymmetric_allocation` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/pci/test_stats.py:L1515–L1550` |
| `PciDeviceStatsProviderMappingTestCase.test_consume_asymmetric_allocation` | method | (self) | public | not declared | 2/20 | `src/nova/tests/unit/pci/test_stats.py:L1552–L1578` |
| `PciDeviceStatsProviderMappingTestCase.test_consume_restricted_by_allocation` | method | (self) | public | not declared | 3/24 | `src/nova/tests/unit/pci/test_stats.py:L1580–L1612` |
| `PciDeviceStatsProviderMappingTestCase._test_split_pool_rejected` | method | (self, consume_fn, mock_warning) | private | not declared | 2/42 | `src/nova/tests/unit/pci/test_stats.py:L1615–L1664` |
| `PciDeviceStatsProviderMappingTestCase.test_consume_split_pool_rejected` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/pci/test_stats.py:L1666–L1668` |
| `PciDeviceStatsProviderMappingTestCase.test_apply_split_pool_rejected` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/pci/test_stats.py:L1670–L1672` |
| `PciDeviceStatsProviderMappingTestCase.test_assert_one_pool_per_rp_uuid` | method | (self, pools, result) | public | not declared | 1/3 | `src/nova/tests/unit/pci/test_stats.py:L1688–L1690` |
| `PciDeviceStatsProviderMappingTestCase.test_find_pool_ignores_metadata` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/pci/test_stats.py:L1692–L1721` |
| `PciDeviceVFPFStatsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_stats.py:L1724–L1993` |
| `PciDeviceVFPFStatsTestCase.setUp` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/pci/test_stats.py:L1726–L1747` |
| `PciDeviceVFPFStatsTestCase._create_pci_devices` | method | (self, vf_product_id=1515, pf_product_id=1528) | private | not declared | 6/92 | `src/nova/tests/unit/pci/test_stats.py:L1749–L1846` |
| `PciDeviceVFPFStatsTestCase.test_consume_VDPA_requests` | method | (self) | public | not declared | 3/12 | `src/nova/tests/unit/pci/test_stats.py:L1848–L1861` |
| `PciDeviceVFPFStatsTestCase.test_consume_VF_requests` | method | (self) | public | not declared | 4/12 | `src/nova/tests/unit/pci/test_stats.py:L1863–L1876` |
| `PciDeviceVFPFStatsTestCase.test_consume_PF_requests` | method | (self) | public | not declared | 4/12 | `src/nova/tests/unit/pci/test_stats.py:L1878–L1891` |
| `PciDeviceVFPFStatsTestCase.test_consume_VF_and_PF_requests` | method | (self) | public | not declared | 2/11 | `src/nova/tests/unit/pci/test_stats.py:L1893–L1903` |
| `PciDeviceVFPFStatsTestCase.test_consume_VF_and_PF_requests_failed` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/pci/test_stats.py:L1905–L1916` |
| `PciDeviceVFPFStatsTestCase.test_consume_VF_and_PF_same_product_id_failed` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/pci/test_stats.py:L1918–L1926` |
| `PciDeviceVFPFStatsTestCase.test_consume_PF_not_remote_managed` | method | (self) | public | not declared | 4/13 | `src/nova/tests/unit/pci/test_stats.py:L1928–L1943` |
| `PciDeviceVFPFStatsTestCase.test_consume_VF_requests_remote_managed` | method | (self) | public | not declared | 4/12 | `src/nova/tests/unit/pci/test_stats.py:L1945–L1958` |
| `PciDeviceVFPFStatsTestCase.test_consume_VF_requests_remote_managed_filtered` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/pci/test_stats.py:L1960–L1974` |
| `PciDeviceVFPFStatsTestCase.test_consume_VF_requests_remote_managed_mix` | method | (self) | public | not declared | 4/16 | `src/nova/tests/unit/pci/test_stats.py:L1976–L1993` |
| `PciDeviceStatsTestCase._get_fake_requests` | staticmethod | — | private | not declared | — | `src/nova/tests/unit/pci/test_stats.py:L75–L83` |

## Dependencies

- `import collections` (src/nova/tests/unit/pci/test_stats.py:L15)
- `import copy` (src/nova/tests/unit/pci/test_stats.py:L16)
- `import ddt` (src/nova/tests/unit/pci/test_stats.py:L17)
- `unittest`: imports `mock` (src/nova/tests/unit/pci/test_stats.py:L18)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/pci/test_stats.py:L20)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/pci/test_stats.py:L21)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/pci/test_stats.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/pci/test_stats.py:L24)
- `nova`: imports `objects` (src/nova/tests/unit/pci/test_stats.py:L25)
- `nova.objects`: imports `fields` (src/nova/tests/unit/pci/test_stats.py:L26)
- `nova.pci.request`: imports `PCI_REMOTE_MANAGED_TAG` (src/nova/tests/unit/pci/test_stats.py:L27)
- `nova.pci`: imports `stats` (src/nova/tests/unit/pci/test_stats.py:L28)
- `nova.pci`: imports `whitelist` (src/nova/tests/unit/pci/test_stats.py:L29)
- `nova`: imports `test` (src/nova/tests/unit/pci/test_stats.py:L30)
- `nova.tests.unit.pci`: imports `fakes` (src/nova/tests/unit/pci/test_stats.py:L31)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/tests/unit/pci/test_stats.py:L33)

