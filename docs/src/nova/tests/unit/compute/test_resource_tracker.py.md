# src/nova/tests/unit/compute/test_resource_tracker.py

## Overview

This file implements the `test_resource_tracker` module, defining 24 classs, 1 constant, 13 functions, 161 methods, 1 staticmethod, 17 variables, 35 imports, 4 side effects, 12 security surface entries.

Lines: total 4920, code 3987, comment 415, blank 518

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_HOSTNAME` | variable | — | unexported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L51–L51` |
| `_NODENAME` | variable | — | unexported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L52–L52` |
| `_SERVICE_ID` | variable | — | unexported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L53–L53` |
| `_COMPUTE_ID` | variable | — | unexported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L54–L54` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L55–L55` |
| `_VIRT_DRIVER_AVAIL_RESOURCES` | variable | — | unexported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L57–L70` |
| `_COMPUTE_NODE_FIXTURES` | variable | — | unexported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L72–L112` |
| `_FLAVOR_FIXTURES` | variable | — | unexported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L114–L143` |
| `_FLAVOR_OBJ_FIXTURES` | variable | — | unexported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L146–L155` |
| `_2MB` | variable | — | unexported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L158–L158` |
| `_INSTANCE_NUMA_TOPOLOGIES` | variable | — | unexported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L160–L166` |
| `_NUMA_LIMIT_TOPOLOGIES` | variable | — | unexported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L168–L172` |
| `_NUMA_PAGE_TOPOLOGIES` | variable | — | unexported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L174–L176` |
| `_NUMA_HOST_TOPOLOGIES` | variable | — | unexported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L178–L202` |
| `_INSTANCE_FIXTURES` | variable | — | unexported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L205–L258` |
| `_MIGRATION_FIXTURES` | variable | — | unexported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L260–L317` |
| `_MIGRATION_INSTANCE_FIXTURES` | variable | — | unexported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L319–L424` |
| `_MIGRATION_CONTEXT_FIXTURES` | variable | — | unexported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L426–L452` |
| `setup_rt` | function | (hostname, virt_resources=_VIRT_DRIVER_AVAIL_RESOURCES) | exported | `(rt, query_client_mock, report_client_mock, vd)` (src/nova/tests/unit/compute/test_resource_tracker.py:L521) | 1/21 | `src/nova/tests/unit/compute/test_resource_tracker.py:L455–L521` |
| `setup_rt.fake_upt` | function | (provider_tree, nodename, allocations=None) | public | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L470–L504` |
| `compute_update_usage` | function | (resources, flavor, sign=1) | exported | `resources` (src/nova/tests/unit/compute/test_resource_tracker.py:L530) | 1/7 | `src/nova/tests/unit/compute/test_resource_tracker.py:L524–L530` |
| `BaseTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L533–L604` |
| `BaseTestCase.setUp` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/compute/test_resource_tracker.py:L535–L560` |
| `BaseTestCase._setup_rt` | method | (self, virt_resources=_VIRT_DRIVER_AVAIL_RESOURCES) | private | not declared | 1/3 | `src/nova/tests/unit/compute/test_resource_tracker.py:L562–L564` |
| `BaseTestCase._setup_ptree` | method | (self, compute) | private | `ptree` (src/nova/tests/unit/compute/test_resource_tracker.py:L586) | 1/11 | `src/nova/tests/unit/compute/test_resource_tracker.py:L566–L586` |
| `BaseTestCase._setup_subtree` | method | (self, compute, ptree) | private | `subtree` (src/nova/tests/unit/compute/test_resource_tracker.py:L604) | 1/11 | `src/nova/tests/unit/compute/test_resource_tracker.py:L588–L604` |
| `TestUpdateAvailableResources` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L607–L1304` |
| `TestUpdateAvailableResources._update_available_resources` | method | (self, **kwargs) | private | `update_mock` (src/nova/tests/unit/compute/test_resource_tracker.py:L618) | 1/5 | `src/nova/tests/unit/compute/test_resource_tracker.py:L609–L618` |
| `TestUpdateAvailableResources.test_disabled` | method | (self, get_mock, migr_mock, get_cn_mock, pci_mock, instance_pci_mock) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_resource_tracker.py:L627–L651` |
| `TestUpdateAvailableResources.test_no_instances_no_migrations_no_reserved` | method | (self, get_mock, migr_mock, get_cn_mock, pci_mock, instance_pci_mock) | public | not declared | 1/39 | `src/nova/tests/unit/compute/test_resource_tracker.py:L660–L702` |
| `TestUpdateAvailableResources.test_startup_makes_it_through` | method | (self, rdia, get_mock, migr_mock, get_cn_mock, pci_mock, instance_pci_mock) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_resource_tracker.py:L713–L730` |
| `TestUpdateAvailableResources.test_startup_new_compute` | method | (self, rdia, get_mock, migr_mock, init_cn_mock, pci_mock, instance_pci_mock) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_resource_tracker.py:L742–L761` |
| `TestUpdateAvailableResources.test_no_instances_no_migrations_reserved_disk_ram_and_cpu` | method | (self, get_mock, migr_mock, get_cn_mock, pci_mock, instance_pci_mock) | public | not declared | 1/30 | `src/nova/tests/unit/compute/test_resource_tracker.py:L770–L802` |
| `TestUpdateAvailableResources.test_some_instances_no_migrations` | method | (self, get_mock, migr_mock, get_cn_mock, pci_mock, instance_pci_mock, bfv_check_mock) | public | not declared | 1/32 | `src/nova/tests/unit/compute/test_resource_tracker.py:L812–L852` |
| `TestUpdateAvailableResources.test_no_instances_source_migration` | method | (self, get_mock, get_inst_mock, migr_mock, get_cn_mock, pci_mock, instance_pci_mock, mock_is_volume_backed_instance) | public | not declared | 1/37 | `src/nova/tests/unit/compute/test_resource_tracker.py:L864–L918` |
| `TestUpdateAvailableResources.test_no_instances_dest_migration` | method | (self, get_mock, get_inst_mock, migr_mock, get_cn_mock, pci_mock, instance_pci_mock, mock_is_volume_backed_instance) | public | not declared | 1/37 | `src/nova/tests/unit/compute/test_resource_tracker.py:L930–L981` |
| `TestUpdateAvailableResources.test_no_instances_dest_evacuation` | method | (self, get_mock, get_inst_mock, migr_mock, get_cn_mock, pci_mock, instance_pci_mock, mock_is_volume_backed_instance) | public | not declared | 1/37 | `src/nova/tests/unit/compute/test_resource_tracker.py:L993–L1041` |
| `TestUpdateAvailableResources.test_some_instances_source_and_dest_migration` | method | (self, get_mock, get_inst_mock, migr_mock, get_cn_mock, get_mig_ctxt_mock, pci_mock, instance_pci_mock, bfv_check_mock) | public | not declared | 1/44 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1054–L1114` |
| `TestUpdateAvailableResources.test_no_instances_err_migration` | method | (self, get_mock, get_inst_mock, migr_mock, get_cn_mock, pci_mock, instance_pci_mock, mock_is_volume_backed_instance) | public | not declared | 1/37 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1126–L1177` |
| `TestUpdateAvailableResources.test_populate_assigned_resources` | method | (self, mock_get_instances, mock_get_instance, mock_get_migrations, mock_get_cn) | public | not declared | 1/29 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1189–L1230` |
| `TestUpdateAvailableResources.test_check_resources_startup_success` | method | (self, mock_get_instances, mock_get_instance, mock_get_migrations, mock_get_cn) | public | not declared | 1/24 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1242–L1274` |
| `TestUpdateAvailableResources.test_check_resources_startup_fail` | method | (self, mock_get_instances, mock_get_migrations, mock_get_cn) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1283–L1304` |
| `TestInitComputeNode` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L1307–L1623` |
| `TestInitComputeNode.test_no_op_init_compute_node` | method | (self, update_mock, get_mock, service_mock, create_mock, pci_mock) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1316–L1331` |
| `TestInitComputeNode.test_compute_node_loaded` | method | (self, update_mock, get_mock, create_mock, pci_mock) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1339–L1356` |
| `TestInitComputeNode.test_compute_node_loaded.fake_get_node` | function | (_ctx, uuid) | public | `res` (src/nova/tests/unit/compute/test_resource_tracker.py:L1345) | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L1343–L1345` |
| `TestInitComputeNode.test_compute_node_rebalanced` | method | (self, update_mock, get_mock, create_mock, pci_mock) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1364–L1384` |
| `TestInitComputeNode.test_compute_node_rebalanced.fake_get_node` | function | (_ctx, uuid) | public | `cn` (src/nova/tests/unit/compute/test_resource_tracker.py:L1372) | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L1371–L1372` |
| `TestInitComputeNode.test_compute_node_created_on_empty` | method | (self, update_mock, get_mock, create_mock) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1390–L1392` |
| `TestInitComputeNode.test_compute_node_created_on_empty_rebalance` | method | (self, update_mock, get_mock, create_mock) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1398–L1402` |
| `TestInitComputeNode.test_compute_node_created_too_many` | method | (self, update_mock, get_mock, create_mock) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1408–L1411` |
| `TestInitComputeNode._test_compute_node_created` | method | (self, update_mock, get_mock, create_mock, rebalances_nodes=False) | private | not declared | 1/62 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1413–L1483` |
| `TestInitComputeNode.test_compute_node_create_fail_retry_works` | method | (self, mock_create, mock_get, mock_setup_pci) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1491–L1513` |
| `TestInitComputeNode.test_node_removed` | method | (self, update_mock, get_mock, create_mock, get_by_hypervisor_mock) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1520–L1531` |
| `TestInitComputeNode.test_undelete_node` | method | (self, mock_pci, mock_update) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1537–L1561` |
| `TestInitComputeNode.test_undelete_node_move_host` | method | (self, mock_pci, mock_update) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1567–L1592` |
| `TestInitComputeNode.test_create_failed_conflict` | method | (self, mock_create, mock_getcn) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1598–L1606` |
| `TestInitComputeNode.test_init_compute_node_updates_service_id` | method | (self) | public | not declared | 3/14 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1608–L1623` |
| `TestUpdateComputeNode` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L1627–L2259` |
| `TestUpdateComputeNode.test_existing_compute_node_updated_same_resources` | method | (self, save_mock) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1631–L1647` |
| `TestUpdateComputeNode.test_existing_compute_node_updated_diff_updated_at` | method | (self, save_mock) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1652–L1669` |
| `TestUpdateComputeNode.test_existing_compute_node_updated_new_resources` | method | (self, save_mock) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1674–L1691` |
| `TestUpdateComputeNode.test_existing_node_capabilities_as_traits` | method | (self, mock_sync_disabled, mock_has_remote_managed_device_pools) | public | not declared | 1/31 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1699–L1743` |
| `TestUpdateComputeNode.test_existing_node_update_provider_tree_implemented` | method | (self, save_mock, mock_sync_disabled) | public | not declared | 1/63 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1748–L1830` |
| `TestUpdateComputeNode.test_existing_node_update_provider_tree_implemented.fake_upt` | function | (ptree, nodename, allocations=None) | public | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L1782–L1784` |
| `TestUpdateComputeNode.test_update_retry_success` | method | (self, exc, mock_resource_change, mock_sync_disabled) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1841–L1864` |
| `TestUpdateComputeNode.test_update_retry_raises` | method | (self, mock_resource_change, mock_sync_disabled) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1870–L1895` |
| `TestUpdateComputeNode.test_update_pci_reporting` | method | (self, mock_update_provider_tree_for_pci) | public | not declared | 1/21 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1908–L1935` |
| `TestUpdateComputeNode.test_update_pci_reporting_reshape` | method | (self, mock_update_provider_tree_for_pci) | public | not declared | 1/24 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1948–L1978` |
| `TestUpdateComputeNode.test_update_pci_reporting_driver_reshape` | method | (self, pci_reshape, mock_update_provider_tree_for_pci) | public | not declared | 1/27 | `src/nova/tests/unit/compute/test_resource_tracker.py:L1992–L2027` |
| `TestUpdateComputeNode.test_update_pci_reporting_same_host_resize` | method | (self, mock_update_provider_tree_for_pci) | public | not declared | 1/43 | `src/nova/tests/unit/compute/test_resource_tracker.py:L2040–L2089` |
| `TestUpdateComputeNode.test_update_pci_reporting_allocation_in_use_error_propagated` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_resource_tracker.py:L2100–L2118` |
| `TestUpdateComputeNode.test_sync_compute_service_disabled_trait_add` | method | (self, mock_get_by_host) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_resource_tracker.py:L2122–L2131` |
| `TestUpdateComputeNode.test_sync_compute_service_disabled_trait_remove` | method | (self, mock_get_by_host) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_resource_tracker.py:L2135–L2150` |
| `TestUpdateComputeNode.test_sync_compute_service_disabled_trait_service_not_found` | method | (self, mock_log_error, mock_get_by_host) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_resource_tracker.py:L2157–L2170` |
| `TestUpdateComputeNode.test_update_compute_node_save_fails_restores_old_resources` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_resource_tracker.py:L2176–L2201` |
| `TestUpdateComputeNode.test_copy_resources_no_update_allocation_ratios` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/compute/test_resource_tracker.py:L2203–L2216` |
| `TestUpdateComputeNode.test_copy_resources_update_allocation_zero_ratios` | method | (self) | public | not declared | 3/13 | `src/nova/tests/unit/compute/test_resource_tracker.py:L2218–L2239` |
| `TestUpdateComputeNode.test_copy_resources_update_allocation_ratios_from_config` | method | (self) | public | not declared | 3/14 | `src/nova/tests/unit/compute/test_resource_tracker.py:L2241–L2259` |
| `TestInstanceClaim` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L2262–L2767` |
| `TestInstanceClaim.setUp` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_resource_tracker.py:L2264–L2285` |
| `TestInstanceClaim.assertEqualNUMAHostTopology` | method | (self, expected, got) | public | `` (src/nova/tests/unit/compute/test_resource_tracker.py:L2296) | 7/21 | `src/nova/tests/unit/compute/test_resource_tracker.py:L2287–L2308` |
| `TestInstanceClaim.test_claim_disabled` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_resource_tracker.py:L2310–L2328` |
| `TestInstanceClaim.test_update_usage_with_claim` | method | (self, migr_mock, check_bfv_mock) | public | not declared | 1/33 | `src/nova/tests/unit/compute/test_resource_tracker.py:L2332–L2368` |
| `TestInstanceClaim.test_update_usage_removed` | method | (self, migr_mock, check_bfv_mock) | public | not declared | 3/66 | `src/nova/tests/unit/compute/test_resource_tracker.py:L2372–L2444` |
| `TestInstanceClaim.test_claim` | method | (self, migr_mock, check_bfv_mock) | public | not declared | 1/33 | `src/nova/tests/unit/compute/test_resource_tracker.py:L2448–L2482` |
| `TestInstanceClaim.test_claim_with_pci` | method | (self, migr_mock, pci_stats_mock, check_bfv_mock) | public | not declared | 1/79 | `src/nova/tests/unit/compute/test_resource_tracker.py:L2488–L2576` |
| `TestInstanceClaim.test_claim_with_resources` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/compute/test_resource_tracker.py:L2580–L2602` |
| `TestInstanceClaim.test_claim_with_resources_from_free` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/compute/test_resource_tracker.py:L2606–L2630` |
| `TestInstanceClaim.test_claim_failed_with_resources` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_resource_tracker.py:L2634–L2653` |
| `TestInstanceClaim.test_claim_abort_context_manager` | method | (self, save_mock, migr_mock, check_bfv_mock) | public | not declared | 1/24 | `src/nova/tests/unit/compute/test_resource_tracker.py:L2660–L2697` |
| `TestInstanceClaim.test_claim_abort_context_manager._doit` | function | (mock_clone) | private | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L2678–L2684` |
| `TestInstanceClaim.test_claim_abort` | method | (self, save_mock, migr_mock, check_bfv_mock) | public | not declared | 1/28 | `src/nova/tests/unit/compute/test_resource_tracker.py:L2704–L2741` |
| `TestInstanceClaim.test_claim_abort._claim` | function | (mock_save, mock_clone) | private | `self.rt.instance_claim(self.ctx, self.instance, _NODENAME, self.allocations, None)` (src/nova/tests/unit/compute/test_resource_tracker.py:L2713) | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L2712–L2714` |
| `TestInstanceClaim.test_claim_abort._abort` | function | — | private | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L2730–L2731` |
| `TestInstanceClaim.test_claim_numa` | method | (self, save_mock, migr_mock, check_bfv_mock) | public | not declared | 2/20 | `src/nova/tests/unit/compute/test_resource_tracker.py:L2746–L2767` |
| `TestResize` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L2770–L3347` |
| `TestResize.test_resize_claim_same_host` | method | (self, save_mock, get_mock, migr_mock, get_cn_mock, pci_mock, instance_pci_mock, is_bfv_mock) | public | not declared | 1/71 | `src/nova/tests/unit/compute/test_resource_tracker.py:L2783–L2873` |
| `TestResize._test_instance_build_resize` | method | (self, save_mock, get_by_host_and_node_mock, get_in_progress_and_error_mock, get_by_host_and_nodename_mock, pci_get_by_compute_node_mock, pci_get_by_instance_mock, is_bfv_mock, revert=False) | private | not declared | 4/123 | `src/nova/tests/unit/compute/test_resource_tracker.py:L2890–L3038` |
| `TestResize.test_instance_build_resize_revert` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3040–L3041` |
| `TestResize.test_instance_build_resize_confirm` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3043–L3044` |
| `TestResize.test_resize_claim_dest_host_with_pci` | method | (self, save_mock, get_mock, migr_mock, get_cn_mock, pci_mock, pci_req_mock, pci_claim_mock, pci_dev_save_mock, pci_supports_mock, mock_is_volume_backed_instance) | public | not declared | 1/69 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3060–L3156` |
| `TestResize.test_drop_move_claim_on_revert` | method | (self) | public | not declared | 1/45 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3158–L3216` |
| `TestResize.test_resize_claim_two_instances` | method | (self, save_mock, get_mock, migr_mock, get_cn_mock, pci_mock, instance_pci_mock, mock_is_volume_backed_instance) | public | not declared | 1/101 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3230–L3347` |
| `TestRebuild` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L3350–L3441` |
| `TestRebuild.test_rebuild_claim` | method | (self, save_mock, get_mock, migr_mock, get_cn_mock, pci_mock, instance_pci_mock, bfv_check_mock) | public | not declared | 1/61 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3362–L3441` |
| `TestLiveMigration` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L3444–L3490` |
| `TestLiveMigration.test_live_migration_claim` | method | (self) | public | not declared | 1/42 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3446–L3490` |
| `TestUpdateUsageFromMigration` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L3493–L3516` |
| `TestUpdateUsageFromMigration.test_missing_old_flavor_outbound_resize` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3495–L3516` |
| `TestUpdateUsageFromMigrations` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L3519–L3678` |
| `TestUpdateUsageFromMigrations.test_no_migrations` | method | (self, mock_update_usage) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3522–L3527` |
| `TestUpdateUsageFromMigrations.test_instance_not_found` | method | (self, mock_get_instance, mock_update_usage) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3532–L3548` |
| `TestUpdateUsageFromMigrations.test_duplicate_migrations_filtered` | method | (self, upd_mock) | public | not declared | 1/41 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3552–L3605` |
| `TestUpdateUsageFromMigrations.test_ignore_stale_migration` | method | (self, upd_mock, save_mock) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3610–L3636` |
| `TestUpdateUsageFromMigrations.test_evacuate_and_resizing_states` | method | (self, mock_update_usage, mock_save) | public | not declared | 2/18 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3641–L3658` |
| `TestUpdateUsageFromMigrations.test_live_migrating_state` | method | (self, mock_update_usage, mock_save) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3663–L3678` |
| `TestUpdateUsageFromInstance` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L3681–L4124` |
| `TestUpdateUsageFromInstance.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3683–L3688` |
| `TestUpdateUsageFromInstance.test_get_usage_dict_return_0_root_gb_for_bfv_instance` | method | (self, mock_check_bfv) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3691–L3708` |
| `TestUpdateUsageFromInstance.test_get_usage_dict_include_swap` | method | (self, mock_check_bfv) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3711–L3718` |
| `TestUpdateUsageFromInstance.test_building` | method | (self, mock_update_usage, mock_check_bfv) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3723–L3731` |
| `TestUpdateUsageFromInstance.test_shelve_offloading` | method | (self, mock_update_usage, mock_check_bfv) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3736–L3749` |
| `TestUpdateUsageFromInstance.test_unshelving` | method | (self, mock_update_usage, mock_check_bfv) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3754–L3762` |
| `TestUpdateUsageFromInstance.test_deleted` | method | (self, mock_update_usage, mock_check_bfv) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3767–L3776` |
| `TestUpdateUsageFromInstance.test_remove_deleted_instances_allocations_deleted_instance` | method | (self, mock_inst_get) | public | not declared | 1/20 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3779–L3801` |
| `TestUpdateUsageFromInstance.test_remove_deleted_instances_allocations_deleted_hidden_instance` | method | (self, mock_inst_get) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3804–L3830` |
| `TestUpdateUsageFromInstance.test_remove_deleted_instances_allocations_building_instance` | method | (self, mock_inst_get) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3833–L3849` |
| `TestUpdateUsageFromInstance.test_remove_deleted_instances_allocations_ignores_migrations` | method | (self, mock_inst_get) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3852–L3873` |
| `TestUpdateUsageFromInstance.test_remove_deleted_instances_allocations_scheduled_instance` | method | (self, mock_inst_get) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3876–L3893` |
| `TestUpdateUsageFromInstance.test_remove_deleted_instances_allocations_move_ops` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3895–L3915` |
| `TestUpdateUsageFromInstance.test_remove_deleted_instances_allocations_known_instance` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3917–L3945` |
| `TestUpdateUsageFromInstance.test_remove_deleted_instances_allocations_unknown_instance` | method | (self, mock_inst_get, mock_log_warning) | public | not declared | 1/29 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3949–L3990` |
| `TestUpdateUsageFromInstance.test_remove_deleted_instances_allocations_state_transition_instance` | method | (self, mock_inst_get, mock_log_debug) | public | not declared | 1/30 | `src/nova/tests/unit/compute/test_resource_tracker.py:L3994–L4034` |
| `TestUpdateUsageFromInstance.test_remove_deleted_instances_allocations_retrieval_fail` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4036–L4061` |
| `TestUpdateUsageFromInstance.test_delete_allocation_for_shelve_offloaded_instance` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4063–L4073` |
| `TestUpdateUsageFromInstance.test_update_usage_from_instances_goes_negative` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4075–L4091` |
| `TestUpdateUsageFromInstance.test_update_usage_from_instances_goes_negative.test` | function | (uufi) | public | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L4085–L4086` |
| `TestUpdateUsageFromInstance.test_delete_allocation_for_evacuated_instance` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4093–L4104` |
| `TestUpdateUsageFromInstance.test_ensure_compute_id_for_instance` | method | (self, mock_save) | public | not declared | 2/14 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4107–L4124` |
| `TestInstanceInResizeState` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L4127–L4146` |
| `TestInstanceInResizeState.test_active_suspending` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4128–L4131` |
| `TestInstanceInResizeState.test_resized_suspending` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4133–L4136` |
| `TestInstanceInResizeState.test_resized_resize_migrating` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4138–L4141` |
| `TestInstanceInResizeState.test_resized_resize_finish` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4143–L4146` |
| `TestInstanceIsLiveMigrating` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L4149–L4178` |
| `TestInstanceIsLiveMigrating.test_migrating_active` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4150–L4154` |
| `TestInstanceIsLiveMigrating.test_migrating_paused` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4156–L4160` |
| `TestInstanceIsLiveMigrating.test_migrating_other` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4162–L4166` |
| `TestInstanceIsLiveMigrating.test_non_migrating_active` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4168–L4172` |
| `TestInstanceIsLiveMigrating.test_non_migrating_paused` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4174–L4178` |
| `TestSetInstanceHostAndNode` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L4181–L4212` |
| `TestSetInstanceHostAndNode.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4183–L4185` |
| `TestSetInstanceHostAndNode.test_set_instance_host_and_node` | method | (self, save_mock) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4188–L4195` |
| `TestSetInstanceHostAndNode.test_unset_instance_host_and_node` | method | (self, save_mock) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4198–L4205` |
| `TestSetInstanceHostAndNode.test_get_node_by_name` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4207–L4212` |
| `_update_compute_node` | function | (node, **kwargs) | unexported | not declared | 2/3 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4215–L4217` |
| `ComputeMonitorTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L4220–L4303` |
| `ComputeMonitorTestCase.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4221–L4226` |
| `ComputeMonitorTestCase.test_get_host_metrics_none` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4228–L4231` |
| `ComputeMonitorTestCase.test_get_host_metrics_exception` | method | (self, mock_LOG_warning) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4234–L4241` |
| `ComputeMonitorTestCase.test_get_host_metrics` | method | (self, mock_notify) | public | not declared | 3/38 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4244–L4303` |
| `ComputeMonitorTestCase.test_get_host_metrics.FakeCPUMonitor` | class | — | public | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L4247–L4264` |
| `ComputeMonitorTestCase.test_get_host_metrics.FakeCPUMonitor.__init__` | method | (self, *args) | public | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L4251–L4253` |
| `ComputeMonitorTestCase.test_get_host_metrics.FakeCPUMonitor.get_metric_names` | method | (self) | public | `set(["cpu.frequency"])` (src/nova/tests/unit/compute/test_resource_tracker.py:L4256) | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L4255–L4256` |
| `ComputeMonitorTestCase.test_get_host_metrics.FakeCPUMonitor.populate_metrics` | method | (self, monitor_list) | public | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L4258–L4264` |
| `OverCommitTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L4306–L4317` |
| `OverCommitTestCase.test_cpu_allocation_ratio_none_negative` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4307–L4309` |
| `OverCommitTestCase.test_ram_allocation_ratio_none_negative` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4311–L4313` |
| `OverCommitTestCase.test_disk_allocation_ratio_none_negative` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4315–L4317` |
| `TestPciTrackerDelegationMethods` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L4320–L4371` |
| `TestPciTrackerDelegationMethods.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4322–L4328` |
| `TestPciTrackerDelegationMethods.test_claim_pci_devices` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4330–L4341` |
| `TestPciTrackerDelegationMethods.test_unclaim_pci_devices` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4343–L4349` |
| `TestPciTrackerDelegationMethods.test_allocate_pci_devices_for_instance` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4351–L4355` |
| `TestPciTrackerDelegationMethods.test_free_pci_device_allocations_for_instance` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4357–L4363` |
| `TestPciTrackerDelegationMethods.test_free_pci_device_claims_for_instance` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4365–L4371` |
| `ResourceTrackerTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L4374–L4468` |
| `ResourceTrackerTestCase.test_init_ensure_provided_reportclient_is_used` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4376–L4380` |
| `ResourceTrackerTestCase.test_that_unfair_usage_of_compute_resource_semaphore_is_caught` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4382–L4398` |
| `ResourceTrackerTestCase.test_that_unfair_usage_of_compute_resource_semaphore_is_caught._test_explict_unfair` | function | — | private | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L4383–L4388` |
| `ResourceTrackerTestCase.test_that_unfair_usage_of_compute_resource_semaphore_is_caught._test_explict_unfair.MyResourceTracker` | class | — | public | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L4384–L4388` |
| `ResourceTrackerTestCase.test_that_unfair_usage_of_compute_resource_semaphore_is_caught._test_explict_unfair.MyResourceTracker.foo` | method | (self) | public | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L4387–L4388` |
| `ResourceTrackerTestCase.test_that_unfair_usage_of_compute_resource_semaphore_is_caught._test_implicit_unfair` | function | — | private | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L4390–L4395` |
| `ResourceTrackerTestCase.test_that_unfair_usage_of_compute_resource_semaphore_is_caught._test_implicit_unfair.MyResourceTracker` | class | — | public | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L4391–L4395` |
| `ResourceTrackerTestCase.test_that_unfair_usage_of_compute_resource_semaphore_is_caught._test_implicit_unfair.MyResourceTracker.foo` | method | (self) | public | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L4394–L4395` |
| `ResourceTrackerTestCase.test_invalidate_pci_in_placement` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4400–L4437` |
| `ResourceTrackerTestCase.test_set_service_ref` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4439–L4468` |
| `ProviderConfigTestCases` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L4471–L4710` |
| `ProviderConfigTestCases.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4472–L4475` |
| `ProviderConfigTestCases._get_provider_config` | method | (uuid=uuids.cn1) | private | `{"__source_file": "test_provider_config.yaml", "identification": { "uuid": uuid }, "inventories": { "additional": [ { orc.normalize_name(uuid): { "total": 100, "reserved": 0, "min_unit": 1, "max_unit"` (src/nova/tests/unit/compute/test_resource_tracker.py:L4479) | 1/22 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4478–L4499` |
| `ProviderConfigTestCases.test_merge_provider_configs` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4501–L4524` |
| `ProviderConfigTestCases.test_merge_provider_configs_dup_providers_exception` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4526–L4550` |
| `ProviderConfigTestCases.test_merge_provider_configs_additional_traits_exception` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4552–L4585` |
| `ProviderConfigTestCases.test_merge_provider_configs_additional_inventories_exception` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4587–L4617` |
| `ProviderConfigTestCases.test_merge_provider_configs_adds_owner_nova` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4619–L4631` |
| `ProviderConfigTestCases.test__get_providers_to_update` | method | (self) | public | not declared | 2/8 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4633–L4647` |
| `ProviderConfigTestCases.test__get_providers_to_update_roots` | method | (self) | public | not declared | 6/13 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4649–L4671` |
| `ProviderConfigTestCases.test__get_providers_to_update_not_in_tree` | method | (self, mock_log) | public | not declared | 1/28 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4674–L4710` |
| `TestCleanComputeNodeCache` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L4713–L4731` |
| `TestCleanComputeNodeCache.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4715–L4719` |
| `TestCleanComputeNodeCache.test_clean_compute_node_cache` | method | (self, mock_remove) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4722–L4731` |
| `TestReleaseLeakedMoveClaims` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L4734–L4920` |
| `TestReleaseLeakedMoveClaims.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4740–L4752` |
| `TestReleaseLeakedMoveClaims._migration` | method | (self, **kwargs) | private | `objects.Migration(context=mock.sentinel.ctx, **values)` (src/nova/tests/unit/compute/test_resource_tracker.py:L4767) | 1/14 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4754–L4767` |
| `TestReleaseLeakedMoveClaims._release` | method | (self, migrations, instance_by_uuid=None) | private | not declared | 2/5 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4769–L4773` |
| `TestReleaseLeakedMoveClaims.test_leaked_allocation_released` | method | (self, mock_save) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4776–L4798` |
| `TestReleaseLeakedMoveClaims.test_leaked_claim_released` | method | (self, mock_save) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4801–L4813` |
| `TestReleaseLeakedMoveClaims.test_migration_to_other_dest_ignored` | method | (self, mock_save) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4816–L4825` |
| `TestReleaseLeakedMoveClaims.test_migration_to_other_node_on_same_host_ignored` | method | (self, mock_save) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4828–L4835` |
| `TestReleaseLeakedMoveClaims.test_non_error_migration_ignored` | method | (self, mock_save) | public | not declared | 2/8 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4838–L4849` |
| `TestReleaseLeakedMoveClaims.test_instance_present_on_this_node_ignored` | method | (self, mock_save) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4852–L4862` |
| `TestReleaseLeakedMoveClaims.test_tracked_migration_ignored` | method | (self, mock_save) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4865–L4874` |
| `TestReleaseLeakedMoveClaims.test_no_pci_tracker_ignored` | method | (self, mock_save) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4877–L4885` |
| `TestReleaseLeakedMoveClaims.test_nothing_claimed_for_instance_ignored` | method | (self, mock_save) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4888–L4899` |
| `TestReleaseLeakedMoveClaims.test_only_leaked_migration_released` | method | (self, mock_save) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_resource_tracker.py:L4902–L4920` |
| `ProviderConfigTestCases._get_provider_config` | staticmethod | — | private | not declared | — | `src/nova/tests/unit/compute/test_resource_tracker.py:L4477–L4499` |

## Dependencies

- `import copy` (src/nova/tests/unit/compute/test_resource_tracker.py:L13)
- `import datetime` (src/nova/tests/unit/compute/test_resource_tracker.py:L14)
- `import ddt` (src/nova/tests/unit/compute/test_resource_tracker.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/compute/test_resource_tracker.py:L16)
- `keystoneauth1`: imports `exceptions as ks_exc` (src/nova/tests/unit/compute/test_resource_tracker.py:L18)
- `import os_resource_classes as orc` (src/nova/tests/unit/compute/test_resource_tracker.py:L19)
- `import os_traits` (src/nova/tests/unit/compute/test_resource_tracker.py:L20)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/compute/test_resource_tracker.py:L21)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/compute/test_resource_tracker.py:L22)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/compute/test_resource_tracker.py:L23)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/compute/test_resource_tracker.py:L24)
- `oslo_utils`: imports `units` (src/nova/tests/unit/compute/test_resource_tracker.py:L25)
- `nova.compute`: imports `claims` (src/nova/tests/unit/compute/test_resource_tracker.py:L27)
- `nova.compute.monitors`: imports `base as monitor_base` (src/nova/tests/unit/compute/test_resource_tracker.py:L28)
- `nova.compute`: imports `power_state` (src/nova/tests/unit/compute/test_resource_tracker.py:L29)
- `nova.compute`: imports `provider_tree` (src/nova/tests/unit/compute/test_resource_tracker.py:L30)
- `nova.compute`: imports `resource_tracker` (src/nova/tests/unit/compute/test_resource_tracker.py:L31)
- `nova.compute`: imports `task_states` (src/nova/tests/unit/compute/test_resource_tracker.py:L32)
- `nova.compute`: imports `utils as compute_utils` (src/nova/tests/unit/compute/test_resource_tracker.py:L33)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/compute/test_resource_tracker.py:L34)
- `nova`: imports `context` (src/nova/tests/unit/compute/test_resource_tracker.py:L35)
- `nova`: imports `exception as exc` (src/nova/tests/unit/compute/test_resource_tracker.py:L36)
- `nova`: imports `objects` (src/nova/tests/unit/compute/test_resource_tracker.py:L37)
- `nova.objects`: imports `base as obj_base` (src/nova/tests/unit/compute/test_resource_tracker.py:L38)
- `nova.objects`: imports `fields as obj_fields` (src/nova/tests/unit/compute/test_resource_tracker.py:L39)
- `nova.objects`: imports `pci_device` (src/nova/tests/unit/compute/test_resource_tracker.py:L40)
- `nova.pci`: imports `manager as pci_manager` (src/nova/tests/unit/compute/test_resource_tracker.py:L41)
- `nova.scheduler.client`: imports `report` (src/nova/tests/unit/compute/test_resource_tracker.py:L42)
- `nova`: imports `test` (src/nova/tests/unit/compute/test_resource_tracker.py:L43)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/compute/test_resource_tracker.py:L44)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/compute/test_resource_tracker.py:L45)
- `nova.tests.unit.objects`: imports `test_pci_device as fake_pci_device` (src/nova/tests/unit/compute/test_resource_tracker.py:L46)
- `nova.tests.unit`: imports `utils` (src/nova/tests/unit/compute/test_resource_tracker.py:L47)
- `nova`: imports `utils as nova_utils` (src/nova/tests/unit/compute/test_resource_tracker.py:L48)
- `nova.virt`: imports `driver` (src/nova/tests/unit/compute/test_resource_tracker.py:L49)

## Side Effects

- **network**: def test_get_host_metrics(self, mock_notify): (src/nova/tests/unit/compute/test_resource_tracker.py:L4244)
- **network**: mock_notify.assert_called_once_with( (src/nova/tests/unit/compute/test_resource_tracker.py:L4270)
- **global-mutation**: CONF = cfg.CONF (src/nova/tests/unit/compute/test_resource_tracker.py:L55)
- **global-mutation**: NOW_TS = timeutils.utcnow() (src/nova/tests/unit/compute/test_resource_tracker.py:L4249)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as ks_exc (src/nova/tests/unit/compute/test_resource_tracker.py:L18)
- **sink** (`db-write`): virt_resources.update(vcpus_used=1, (src/nova/tests/unit/compute/test_resource_tracker.py:L822)
- **sink** (`db-write`): virt_resources.update(vcpus_used=4, (src/nova/tests/unit/compute/test_resource_tracker.py:L881)
- **sink** (`db-write`): virt_resources.update(vcpus_used=2, (src/nova/tests/unit/compute/test_resource_tracker.py:L947)
- **sink** (`db-write`): virt_resources.update(vcpus_used=2, (src/nova/tests/unit/compute/test_resource_tracker.py:L1007)
- **sink** (`db-write`): virt_resources.update(vcpus_used=4, (src/nova/tests/unit/compute/test_resource_tracker.py:L1072)
- **sink** (`db-write`): virt_resources.update( (src/nova/tests/unit/compute/test_resource_tracker.py:L1142)
- **sink** (`db-write`): virt_resources.update(vcpus_used=1, (src/nova/tests/unit/compute/test_resource_tracker.py:L2794)
- **sink** (`db-write`): virt_resources.update(vcpus_used=1, (src/nova/tests/unit/compute/test_resource_tracker.py:L3376)
- **sink** (`db-write`): RT considers it an in-progress migration and tries to update tracked (src/nova/tests/unit/compute/test_resource_tracker.py:L3500)
- **sink** (`db-write`): self.assertEqual('compute.metrics.update', msg.event_type) (src/nova/tests/unit/compute/test_resource_tracker.py:L4292)
- **sink** (`db-write`): values.update(kwargs) (src/nova/tests/unit/compute/test_resource_tracker.py:L4766)

## Notes

- KB `sideEffects` entries at L4244 have targets that appear to be code fragments rather than resource paths; documented as recorded.

