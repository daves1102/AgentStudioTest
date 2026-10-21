# src/nova/tests/unit/scheduler/client/test_report.py

## Overview

This file implements the `test_report` module, defining 14 classs, 1 constant, 1 field, 3 functions, 165 methods, 19 imports, 240 side effects, 8 security surface entries.

Lines: total 4796, code 4040, comment 277, blank 479

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/scheduler/client/test_report.py:L36–L36` |
| `SafeConnectedTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/client/test_report.py:L39–L158` |
| `SafeConnectedTestCase.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/client/test_report.py:L42–L53` |
| `SafeConnectedTestCase.test_missing_endpoint` | method | (self, req) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/client/test_report.py:L56–L68` |
| `SafeConnectedTestCase.test_missing_endpoint_create_client` | method | (self, req, create_client) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/client/test_report.py:L73–L83` |
| `SafeConnectedTestCase.test_missing_auth` | method | (self, req) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/client/test_report.py:L86–L99` |
| `SafeConnectedTestCase.test_unauthorized` | method | (self, req) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/client/test_report.py:L102–L115` |
| `SafeConnectedTestCase.test_connect_fail` | method | (self, req) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/client/test_report.py:L118–L132` |
| `SafeConnectedTestCase.test_warning_limit` | method | (self, mock_log) | public | not declared | 2/8 | `src/nova/tests/unit/scheduler/client/test_report.py:L135–L143` |
| `SafeConnectedTestCase.test_failed_discovery` | method | (self, req) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/client/test_report.py:L146–L158` |
| `TestSingleton` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/client/test_report.py:L162–L212` |
| `TestSingleton.test_singleton` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/client/test_report.py:L163–L175` |
| `TestSingleton.test_errors` | method | (self, exc) | public | not declared | 1/2 | `src/nova/tests/unit/scheduler/client/test_report.py:L185–L186` |
| `TestSingleton._test_error` | method | (self, exc, mock_log) | private | not declared | 1/5 | `src/nova/tests/unit/scheduler/client/test_report.py:L189–L193` |
| `TestSingleton.test_error_then_success` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/client/test_report.py:L195–L212` |
| `TestConstructor` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/client/test_report.py:L215–L241` |
| `TestConstructor.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/client/test_report.py:L216–L220` |
| `TestConstructor.test_constructor` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/client/test_report.py:L222–L230` |
| `TestConstructor.test_constructor_admin_interface` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/client/test_report.py:L232–L241` |
| `SchedulerReportClientTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/client/test_report.py:L244–L319` |
| `SchedulerReportClientTestCase.setUp` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/scheduler/client/test_report.py:L246–L262` |
| `SchedulerReportClientTestCase._init_provider_tree` | method | (self, generation_override=None, resources_override=None) | private | not declared | 3/38 | `src/nova/tests/unit/scheduler/client/test_report.py:L264–L301` |
| `SchedulerReportClientTestCase._validate_provider` | method | (self, name_or_uuid, **kwargs) | private | not declared | 3/9 | `src/nova/tests/unit/scheduler/client/test_report.py:L303–L319` |
| `TestPutAllocations` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/client/test_report.py:L322–L1593` |
| `TestPutAllocations.test_put_allocations` | method | (self, mock_put) | public | not declared | 1/21 | `src/nova/tests/unit/scheduler/client/test_report.py:L324–L344` |
| `TestPutAllocations.test_put_allocations_fail` | method | (self, mock_put, mock_warn) | public | not declared | 1/23 | `src/nova/tests/unit/scheduler/client/test_report.py:L348–L371` |
| `TestPutAllocations.test_put_allocations_fail_connection_error` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/client/test_report.py:L373–L377` |
| `TestPutAllocations.test_put_allocations_fail_due_to_consumer_generation_conflict` | method | (self, mock_put) | public | not declared | 1/25 | `src/nova/tests/unit/scheduler/client/test_report.py:L380–L406` |
| `TestPutAllocations.test_put_allocations_retries_conflict` | method | (self, mock_put) | public | not declared | 1/27 | `src/nova/tests/unit/scheduler/client/test_report.py:L410–L439` |
| `TestPutAllocations.test_put_allocations_retry_gives_up` | method | (self, mock_put) | public | not declared | 1/25 | `src/nova/tests/unit/scheduler/client/test_report.py:L443–L470` |
| `TestPutAllocations.test_claim_resources_success` | method | (self) | public | not declared | 2/34 | `src/nova/tests/unit/scheduler/client/test_report.py:L472–L508` |
| `TestPutAllocations.test_claim_resources_older_alloc_req` | method | (self) | public | not declared | 2/35 | `src/nova/tests/unit/scheduler/client/test_report.py:L510–L551` |
| `TestPutAllocations.test_claim_resources_success_resize_to_same_host_no_shared` | method | (self) | public | not declared | 1/52 | `src/nova/tests/unit/scheduler/client/test_report.py:L553–L622` |
| `TestPutAllocations.test_claim_resources_success_resize_to_same_host_with_shared` | method | (self) | public | not declared | 1/60 | `src/nova/tests/unit/scheduler/client/test_report.py:L624–L702` |
| `TestPutAllocations.test_claim_resources_success_evacuate_no_shared` | method | (self) | public | not declared | 1/67 | `src/nova/tests/unit/scheduler/client/test_report.py:L704–L789` |
| `TestPutAllocations.test_claim_resources_success_evacuate_with_shared` | method | (self) | public | not declared | 1/80 | `src/nova/tests/unit/scheduler/client/test_report.py:L791–L888` |
| `TestPutAllocations.test_claim_resources_success_force_evacuate_no_shared` | method | (self) | public | not declared | 1/68 | `src/nova/tests/unit/scheduler/client/test_report.py:L890–L978` |
| `TestPutAllocations.test_claim_resources_success_force_evacuate_with_shared` | method | (self) | public | not declared | 1/81 | `src/nova/tests/unit/scheduler/client/test_report.py:L980–L1081` |
| `TestPutAllocations.test_claim_resources_fail_due_to_rp_generation_retry_success` | method | (self) | public | not declared | 2/48 | `src/nova/tests/unit/scheduler/client/test_report.py:L1084–L1136` |
| `TestPutAllocations.test_claim_resources_failure` | method | (self, mock_log) | public | not declared | 2/43 | `src/nova/tests/unit/scheduler/client/test_report.py:L1139–L1185` |
| `TestPutAllocations.test_claim_resources_consumer_generation_failure` | method | (self) | public | not declared | 2/41 | `src/nova/tests/unit/scheduler/client/test_report.py:L1187–L1230` |
| `TestPutAllocations.test_remove_provider_from_inst_alloc_no_shared` | method | (self) | public | not declared | 1/61 | `src/nova/tests/unit/scheduler/client/test_report.py:L1232–L1304` |
| `TestPutAllocations.test_remove_provider_from_inst_alloc_with_shared` | method | (self) | public | not declared | 1/73 | `src/nova/tests/unit/scheduler/client/test_report.py:L1306–L1391` |
| `TestPutAllocations.test_remove_provider_from_inst_alloc_no_source` | method | (self) | public | not declared | 1/38 | `src/nova/tests/unit/scheduler/client/test_report.py:L1393–L1440` |
| `TestPutAllocations.test_remove_provider_from_inst_alloc_fail_get_allocs` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/client/test_report.py:L1442–L1452` |
| `TestPutAllocations.test_remove_provider_from_inst_alloc_consumer_gen_conflict` | method | (self) | public | not declared | 1/39 | `src/nova/tests/unit/scheduler/client/test_report.py:L1454–L1495` |
| `TestPutAllocations.test_remove_provider_tree_from_inst_alloc_nested` | method | (self) | public | not declared | 1/88 | `src/nova/tests/unit/scheduler/client/test_report.py:L1497–L1593` |
| `TestMoveAllocations` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/client/test_report.py:L1596–L1810` |
| `TestMoveAllocations.setUp` | method | (self) | public | not declared | 1/53 | `src/nova/tests/unit/scheduler/client/test_report.py:L1598–L1654` |
| `TestMoveAllocations.test_url_microversion` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/client/test_report.py:L1656–L1664` |
| `TestMoveAllocations.test_move_to_empty_target` | method | (self) | public | not declared | 1/33 | `src/nova/tests/unit/scheduler/client/test_report.py:L1666–L1701` |
| `TestMoveAllocations.test_move_from_empty_source` | method | (self, mock_info) | public | not declared | 1/12 | `src/nova/tests/unit/scheduler/client/test_report.py:L1704–L1721` |
| `TestMoveAllocations.test_move_to_non_empty_target` | method | (self) | public | not declared | 1/35 | `src/nova/tests/unit/scheduler/client/test_report.py:L1723–L1760` |
| `TestMoveAllocations.test_409_concurrent_provider_update` | method | (self, mock_sleep) | public | not declared | 1/16 | `src/nova/tests/unit/scheduler/client/test_report.py:L1763–L1783` |
| `TestMoveAllocations.test_not_409_failure` | method | (self, mock_log) | public | not declared | 1/12 | `src/nova/tests/unit/scheduler/client/test_report.py:L1786–L1799` |
| `TestMoveAllocations.test_409_concurrent_consumer_update` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/client/test_report.py:L1801–L1810` |
| `TestProviderOperations` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/client/test_report.py:L1813–L2842` |
| `TestProviderOperations.test_ensure_resource_provider_get` | method | (self, get_rpt_mock, get_shr_mock, get_trait_mock, get_agg_mock, get_inv_mock, create_rp_mock) | public | not declared | 1/33 | `src/nova/tests/unit/scheduler/client/test_report.py:L1826–L1885` |
| `TestProviderOperations.test_ensure_resource_provider_get.assert_cache_contents` | function | — | public | not declared | — | `src/nova/tests/unit/scheduler/client/test_report.py:L1844–L1860` |
| `TestProviderOperations.test_ensure_resource_provider_create_fail` | method | (self, get_rpt_mock, refresh_mock, create_rp_mock) | public | not declared | 1/21 | `src/nova/tests/unit/scheduler/client/test_report.py:L1893–L1918` |
| `TestProviderOperations.test_ensure_resource_provider_create_no_placement` | method | (self, get_rpt_mock, refresh_mock, create_rp_mock) | public | not declared | 1/19 | `src/nova/tests/unit/scheduler/client/test_report.py:L1926–L1950` |
| `TestProviderOperations.test_ensure_resource_provider_create` | method | (self, get_rpt_mock, refresh_inv_mock, refresh_assoc_mock, create_rp_mock) | public | not declared | 1/32 | `src/nova/tests/unit/scheduler/client/test_report.py:L1960–L1999` |
| `TestProviderOperations.test_ensure_resource_provider_tree` | method | (self, get_rpt_mock, create_rp_mock, refresh_mock) | public | not declared | 2/36 | `src/nova/tests/unit/scheduler/client/test_report.py:L2007–L2075` |
| `TestProviderOperations.test_ensure_resource_provider_tree._create_resource_provider` | function | (context, uuid, name, parent_provider_uuid=None) | private | `{ 'uuid': uuid, 'name': name, 'generation': 0, 'parent_provider_uuid': parent_provider_uuid }` (src/nova/tests/unit/scheduler/client/test_report.py:L2013) | — | `src/nova/tests/unit/scheduler/client/test_report.py:L2010–L2018` |
| `TestProviderOperations.test_ensure_resource_provider_tree.mocked_refresh` | function | (context, rp_uuid, **kwargs) | public | not declared | — | `src/nova/tests/unit/scheduler/client/test_report.py:L2023–L2024` |
| `TestProviderOperations.test_ensure_resource_provider_refresh_fetch` | method | (self, mock_ref_assoc, mock_gpit) | public | not declared | 3/14 | `src/nova/tests/unit/scheduler/client/test_report.py:L2081–L2097` |
| `TestProviderOperations.test_ensure_resource_provider_refresh_create` | method | (self, mock_refresh, mock_create, mock_gpit) | public | not declared | 1/15 | `src/nova/tests/unit/scheduler/client/test_report.py:L2105–L2120` |
| `TestProviderOperations.test_get_allocation_candidates` | method | (self) | public | not declared | 1/67 | `src/nova/tests/unit/scheduler/client/test_report.py:L2122–L2192` |
| `TestProviderOperations.test_get_ac_no_trait_bogus_group_policy_custom_limit` | method | (self) | public | not declared | 1/39 | `src/nova/tests/unit/scheduler/client/test_report.py:L2194–L2235` |
| `TestProviderOperations.test_get_allocation_candidates_not_found` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/scheduler/client/test_report.py:L2237–L2266` |
| `TestProviderOperations.test_get_resource_provider_found` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/scheduler/client/test_report.py:L2268–L2294` |
| `TestProviderOperations.test_get_resource_provider_not_found` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/client/test_report.py:L2296–L2309` |
| `TestProviderOperations.test_get_resource_provider_error` | method | (self, logging_mock) | public | not declared | 1/16 | `src/nova/tests/unit/scheduler/client/test_report.py:L2312–L2335` |
| `TestProviderOperations.test_get_sharing_providers` | method | (self) | public | not declared | 1/66 | `src/nova/tests/unit/scheduler/client/test_report.py:L2337–L2406` |
| `TestProviderOperations.test_get_sharing_providers_emptylist` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/client/test_report.py:L2408–L2411` |
| `TestProviderOperations.test_get_sharing_providers_error` | method | (self, logging_mock) | public | not declared | 1/17 | `src/nova/tests/unit/scheduler/client/test_report.py:L2414–L2436` |
| `TestProviderOperations.test_get_providers_in_tree` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/scheduler/client/test_report.py:L2438–L2467` |
| `TestProviderOperations.test_get_providers_in_tree_error` | method | (self, logging_mock) | public | not declared | 1/16 | `src/nova/tests/unit/scheduler/client/test_report.py:L2470–L2491` |
| `TestProviderOperations.test_get_providers_in_tree_ksa_exc` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/client/test_report.py:L2493–L2497` |
| `TestProviderOperations.test_create_resource_provider` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/scheduler/client/test_report.py:L2499–L2520` |
| `TestProviderOperations.test_create_resource_provider_with_parent` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/scheduler/client/test_report.py:L2522–L2550` |
| `TestProviderOperations.test_create_resource_provider_concurrent_create` | method | (self, get_rp_mock, logging_mock) | public | not declared | 1/22 | `src/nova/tests/unit/scheduler/client/test_report.py:L2555–L2585` |
| `TestProviderOperations.test_create_resource_provider_name_conflict` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/client/test_report.py:L2587–L2597` |
| `TestProviderOperations.test_create_resource_provider_error` | method | (self, logging_mock) | public | not declared | 1/19 | `src/nova/tests/unit/scheduler/client/test_report.py:L2600–L2626` |
| `TestProviderOperations.test_put_empty` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/client/test_report.py:L2628–L2635` |
| `TestProviderOperations.test_delete_provider` | method | (self) | public | not declared | 2/15 | `src/nova/tests/unit/scheduler/client/test_report.py:L2637–L2656` |
| `TestProviderOperations.test_delete_provider_fail` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/scheduler/client/test_report.py:L2658–L2671` |
| `TestProviderOperations.test_set_aggregates_for_provider` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/scheduler/client/test_report.py:L2673–L2696` |
| `TestProviderOperations.test_set_aggregates_for_provider_bad_args` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/client/test_report.py:L2698–L2703` |
| `TestProviderOperations.test_set_aggregates_for_provider_fail` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/client/test_report.py:L2705–L2715` |
| `TestProviderOperations.test_set_aggregates_for_provider_conflict` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/client/test_report.py:L2717–L2728` |
| `TestProviderOperations.test_set_aggregates_for_provider_short_circuit` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/client/test_report.py:L2730–L2735` |
| `TestProviderOperations.test_set_aggregates_for_provider_no_short_circuit` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/scheduler/client/test_report.py:L2737–L2758` |
| `TestProviderOperations.test_get_resource_provider_name_from_cache` | method | (self, mock_placement_get) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/client/test_report.py:L2762–L2770` |
| `TestProviderOperations.test_get_resource_provider_name_from_placement` | method | (self, mock_placement_get) | public | not declared | 1/11 | `src/nova/tests/unit/scheduler/client/test_report.py:L2774–L2786` |
| `TestProviderOperations.test_get_resource_provider_name_rp_not_found_in_placement` | method | (self, mock_placement_get) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/client/test_report.py:L2790–L2800` |
| `TestProviderOperations.test_get_resource_provider_name_placement_unavailable` | method | (self, mock_placement_get) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/client/test_report.py:L2804–L2812` |
| `TestProviderOperations.test_invalidate_full` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/client/test_report.py:L2814–L2827` |
| `TestProviderOperations.test_invalidate_cache_only` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/client/test_report.py:L2829–L2842` |
| `TestAggregates` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/client/test_report.py:L2845–L2890` |
| `TestAggregates.test_get_provider_aggregates_found` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/scheduler/client/test_report.py:L2846–L2864` |
| `TestAggregates.test_get_provider_aggregates_error` | method | (self, log_mock) | public | not declared | 2/19 | `src/nova/tests/unit/scheduler/client/test_report.py:L2867–L2890` |
| `TestTraits` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/client/test_report.py:L2893–L3139` |
| `TestTraits.trait_api_kwargs` | field | — | public | not declared | — | `src/nova/tests/unit/scheduler/client/test_report.py:L2894–L2894` |
| `TestTraits.test_get_provider_traits_found` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/scheduler/client/test_report.py:L2896–L2915` |
| `TestTraits.test_get_provider_traits_error` | method | (self, log_mock) | public | not declared | 2/20 | `src/nova/tests/unit/scheduler/client/test_report.py:L2918–L2942` |
| `TestTraits.test_get_provider_traits_placement_comm_error` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/client/test_report.py:L2944–L2954` |
| `TestTraits.test_ensure_traits` | method | (self) | public | not declared | 2/30 | `src/nova/tests/unit/scheduler/client/test_report.py:L2956–L2997` |
| `TestTraits.test_ensure_traits_fail_retrieval` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/client/test_report.py:L2999–L3010` |
| `TestTraits.test_ensure_traits_fail_creation` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/scheduler/client/test_report.py:L3012–L3029` |
| `TestTraits.test_set_traits_for_provider` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/scheduler/client/test_report.py:L3031–L3067` |
| `TestTraits.test_set_traits_for_provider_with_generation` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/scheduler/client/test_report.py:L3069–L3106` |
| `TestTraits.test_set_traits_for_provider_fail` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/scheduler/client/test_report.py:L3108–L3139` |
| `TestAssociations` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/client/test_report.py:L3142–L3311` |
| `TestAssociations.setUp` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/scheduler/client/test_report.py:L3143–L3173` |
| `TestAssociations.assert_getters_were_called` | method | (self, uuid, sharing=True) | public | not declared | 2/19 | `src/nova/tests/unit/scheduler/client/test_report.py:L3175–L3193` |
| `TestAssociations.assert_getters_not_called` | method | (self, timer_entry=None) | public | not declared | 2/9 | `src/nova/tests/unit/scheduler/client/test_report.py:L3195–L3203` |
| `TestAssociations.reset_getter_mocks` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/client/test_report.py:L3205–L3209` |
| `TestAssociations.test_refresh_associations_no_last` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/client/test_report.py:L3211–L3217` |
| `TestAssociations.test_refresh_associations_no_refresh_sharing` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/client/test_report.py:L3219–L3226` |
| `TestAssociations.test_refresh_associations_not_stale` | method | (self, mock_stale) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/client/test_report.py:L3230–L3237` |
| `TestAssociations.test_refresh_associations_time` | method | (self, log_mock, mock_time) | public | not declared | 1/25 | `src/nova/tests/unit/scheduler/client/test_report.py:L3241–L3275` |
| `TestAssociations.test_refresh_associations_disabled` | method | (self, mock_time) | public | not declared | 1/20 | `src/nova/tests/unit/scheduler/client/test_report.py:L3278–L3311` |
| `TestAllocations` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/client/test_report.py:L3314–L4302` |
| `TestAllocations.test_remove_allocations_for_evacuated_instances` | method | (self, mock_get_migrations, mock_rm_pr_tree) | public | not declared | 2/19 | `src/nova/tests/unit/scheduler/client/test_report.py:L3319–L3338` |
| `TestAllocations.test_delete_resource_provider_cascade` | method | (self, mock_by_host, mock_del_alloc, mock_evacuate, mock_delete, mock_get_rpt) | public | not declared | 1/22 | `src/nova/tests/unit/scheduler/client/test_report.py:L3349–L3370` |
| `TestAllocations.test_delete_resource_provider_no_cascade` | method | (self, mock_by_host, mock_del_alloc, mock_evacuate, mock_delete, mock_get_rpt) | public | not declared | 1/21 | `src/nova/tests/unit/scheduler/client/test_report.py:L3381–L3401` |
| `TestAllocations.test_delete_resource_provider_log_calls` | method | (self, mock_log, mock_delete, get_rpt_mock) | public | not declared | 1/25 | `src/nova/tests/unit/scheduler/client/test_report.py:L3408–L3439` |
| `TestAllocations.test_delete_resource_providers_by_order` | method | (self, mock_log, mock_delete, mock_get_rpt) | public | not declared | 1/41 | `src/nova/tests/unit/scheduler/client/test_report.py:L3446–L3491` |
| `TestAllocations.test_delete_resource_provider_placement_exception` | method | (self, mock_get_rpt) | public | not declared | 1/13 | `src/nova/tests/unit/scheduler/client/test_report.py:L3497–L3512` |
| `TestAllocations.test_get_allocations_for_resource_provider` | method | (self, mock_get) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/client/test_report.py:L3515–L3524` |
| `TestAllocations.test_get_allocations_for_resource_provider_fail` | method | (self, mock_get) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/client/test_report.py:L3527–L3534` |
| `TestAllocations.test_get_allocs_for_consumer` | method | (self, mock_get) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/client/test_report.py:L3537–L3544` |
| `TestAllocations.test_get_allocs_for_consumer_fail` | method | (self, mock_get) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/client/test_report.py:L3547–L3554` |
| `TestAllocations.test_get_allocs_for_consumer_safe_connect_fail` | method | (self, mock_get) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/client/test_report.py:L3557–L3564` |
| `TestAllocations._test_remove_res_from_alloc` | method | (self, current_allocations, resources_to_remove, updated_allocations) | private | not declared | 1/19 | `src/nova/tests/unit/scheduler/client/test_report.py:L3566–L3587` |
| `TestAllocations.test_remove_res_from_alloc` | method | (self) | public | not declared | 1/58 | `src/nova/tests/unit/scheduler/client/test_report.py:L3589–L3648` |
| `TestAllocations.test_remove_res_from_alloc_remove_rc_when_value_dropped_to_zero` | method | (self) | public | not declared | 1/38 | `src/nova/tests/unit/scheduler/client/test_report.py:L3650–L3690` |
| `TestAllocations.test_remove_res_from_alloc_remove_rp_when_all_rc_removed` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/scheduler/client/test_report.py:L3692–L3723` |
| `TestAllocations.test_remove_res_from_alloc_failed_to_get_alloc` | method | (self, mock_get) | public | not declared | 1/15 | `src/nova/tests/unit/scheduler/client/test_report.py:L3726–L3741` |
| `TestAllocations.test_remove_res_from_alloc_empty_alloc` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/scheduler/client/test_report.py:L3743–L3762` |
| `TestAllocations.test_remove_res_from_alloc_no_resource_to_remove` | method | (self, mock_get, mock_put) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/client/test_report.py:L3766–L3772` |
| `TestAllocations.test_remove_res_from_alloc_missing_rc` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/scheduler/client/test_report.py:L3774–L3799` |
| `TestAllocations.test_remove_res_from_alloc_missing_rp` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/scheduler/client/test_report.py:L3801–L3828` |
| `TestAllocations.test_remove_res_from_alloc_not_enough_resource_to_remove` | method | (self) | public | not declared | 1/30 | `src/nova/tests/unit/scheduler/client/test_report.py:L3830–L3860` |
| `TestAllocations.test_remove_res_from_alloc_retry_succeed` | method | (self, mock_get, mock_put) | public | not declared | 1/71 | `src/nova/tests/unit/scheduler/client/test_report.py:L3865–L3939` |
| `TestAllocations.test_remove_res_from_alloc_run_out_of_retries` | method | (self, mock_get, mock_put) | public | not declared | 1/52 | `src/nova/tests/unit/scheduler/client/test_report.py:L3944–L4004` |
| `TestAllocations._test_add_res_to_alloc` | method | (self, current_allocations, resources_to_add, updated_allocations) | private | not declared | 1/17 | `src/nova/tests/unit/scheduler/client/test_report.py:L4006–L4025` |
| `TestAllocations.test_add_res_to_alloc_empty_addition` | method | (self, mock_get, mock_put) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/client/test_report.py:L4029–L4034` |
| `TestAllocations.test_add_res_to_alloc` | method | (self) | public | not declared | 1/48 | `src/nova/tests/unit/scheduler/client/test_report.py:L4036–L4084` |
| `TestAllocations.test_add_res_to_alloc_failed_to_get_alloc` | method | (self, mock_get) | public | not declared | 1/14 | `src/nova/tests/unit/scheduler/client/test_report.py:L4087–L4101` |
| `TestAllocations.test_add_res_to_alloc_failed_to_put_alloc_non_conflict` | method | (self, mock_get, mock_put) | public | not declared | 1/38 | `src/nova/tests/unit/scheduler/client/test_report.py:L4105–L4144` |
| `TestAllocations.test_add_res_to_alloc_retry_succeed` | method | (self, mock_get, mock_put) | public | not declared | 1/79 | `src/nova/tests/unit/scheduler/client/test_report.py:L4149–L4231` |
| `TestAllocations.test_add_res_to_alloc_run_out_of_retries` | method | (self, mock_get, mock_put) | public | not declared | 1/58 | `src/nova/tests/unit/scheduler/client/test_report.py:L4236–L4302` |
| `TestResourceClass` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/client/test_report.py:L4305–L4336` |
| `TestResourceClass.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/client/test_report.py:L4306–L4311` |
| `TestResourceClass.test_ensure_resource_classes` | method | (self) | public | not declared | 2/8 | `src/nova/tests/unit/scheduler/client/test_report.py:L4313–L4320` |
| `TestResourceClass.test_ensure_resource_classes_none` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/scheduler/client/test_report.py:L4322–L4325` |
| `TestResourceClass.test_ensure_resource_classes_put_fail` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/client/test_report.py:L4327–L4336` |
| `TestAggregateAddRemoveHost` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/client/test_report.py:L4339–L4669` |
| `TestAggregateAddRemoveHost.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/client/test_report.py:L4346–L4353` |
| `TestAggregateAddRemoveHost.test_get_provider_by_name_success` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/scheduler/client/test_report.py:L4355–L4370` |
| `TestAggregateAddRemoveHost.test_get_provider_by_name_multiple_results` | method | (self, mock_log) | public | not declared | 1/15 | `src/nova/tests/unit/scheduler/client/test_report.py:L4373–L4391` |
| `TestAggregateAddRemoveHost.test_get_provider_by_name_500` | method | (self, mock_log) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/client/test_report.py:L4394–L4402` |
| `TestAggregateAddRemoveHost.test_get_provider_by_name_404` | method | (self, mock_log) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/client/test_report.py:L4405–L4413` |
| `TestAggregateAddRemoveHost.test_aggregate_add_host_success_no_existing` | method | (self, mock_get_by_name, mock_get_aggs, mock_set_aggs) | public | not declared | 1/14 | `src/nova/tests/unit/scheduler/client/test_report.py:L4421–L4434` |
| `TestAggregateAddRemoveHost.test_aggregate_add_host_rp_uuid` | method | (self, mock_get_aggs, mock_set_aggs) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/client/test_report.py:L4442–L4449` |
| `TestAggregateAddRemoveHost.test_aggregate_add_host_success_already_existing` | method | (self, mock_get_by_name, mock_get_aggs, mock_set_aggs) | public | not declared | 1/22 | `src/nova/tests/unit/scheduler/client/test_report.py:L4457–L4478` |
| `TestAggregateAddRemoveHost.test_aggregate_add_host_no_placement` | method | (self, mock_get_by_name) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/client/test_report.py:L4483–L4493` |
| `TestAggregateAddRemoveHost.test_aggregate_add_host_retry_success` | method | (self, mock_get_by_name, mock_get_aggs, mock_set_aggs) | public | not declared | 3/21 | `src/nova/tests/unit/scheduler/client/test_report.py:L4501–L4521` |
| `TestAggregateAddRemoveHost.test_aggregate_add_host_retry_raises` | method | (self, mock_get_by_name, mock_get_aggs, mock_set_aggs) | public | not declared | 4/19 | `src/nova/tests/unit/scheduler/client/test_report.py:L4529–L4547` |
| `TestAggregateAddRemoveHost.test_aggregate_add_host_no_host_name_or_rp_uuid` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/client/test_report.py:L4549–L4552` |
| `TestAggregateAddRemoveHost.test_aggregate_remove_host_no_placement` | method | (self, mock_get_by_name) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/client/test_report.py:L4557–L4566` |
| `TestAggregateAddRemoveHost.test_aggregate_remove_host_success_already_existing` | method | (self, mock_get_by_name, mock_get_aggs, mock_set_aggs) | public | not declared | 1/13 | `src/nova/tests/unit/scheduler/client/test_report.py:L4574–L4586` |
| `TestAggregateAddRemoveHost.test_aggregate_remove_host_success_no_existing` | method | (self, mock_get_by_name, mock_get_aggs, mock_set_aggs) | public | not declared | 1/22 | `src/nova/tests/unit/scheduler/client/test_report.py:L4594–L4615` |
| `TestAggregateAddRemoveHost.test_aggregate_remove_host_retry_success` | method | (self, mock_get_by_name, mock_get_aggs, mock_set_aggs) | public | not declared | 3/21 | `src/nova/tests/unit/scheduler/client/test_report.py:L4623–L4643` |
| `TestAggregateAddRemoveHost.test_aggregate_remove_host_retry_raises` | method | (self, mock_get_by_name, mock_get_aggs, mock_set_aggs) | public | not declared | 4/19 | `src/nova/tests/unit/scheduler/client/test_report.py:L4651–L4669` |
| `TestUsages` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/client/test_report.py:L4672–L4796` |
| `TestUsages.test_get_usages_counts_for_quota_fail` | method | (self, mock_get) | public | not declared | 1/26 | `src/nova/tests/unit/scheduler/client/test_report.py:L4674–L4701` |
| `TestUsages.test_get_usages_counts_for_quota_retries` | method | (self, mock_get) | public | not declared | 1/31 | `src/nova/tests/unit/scheduler/client/test_report.py:L4704–L4740` |
| `TestUsages.test_get_usages_counts_default_zero` | method | (self, mock_get) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/client/test_report.py:L4743–L4755` |
| `TestUsages.test_get_usages_count_with_pcpu` | method | (self, mock_get) | public | not declared | 1/11 | `src/nova/tests/unit/scheduler/client/test_report.py:L4758–L4768` |
| `TestUsages.test_get_usages_counts_for_limits` | method | (self, mock_get) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/client/test_report.py:L4771–L4782` |
| `TestUsages.test_get_usages_counts_for_limits_fails` | method | (self, mock_get) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/client/test_report.py:L4785–L4796` |

## Dependencies

- `import copy` (src/nova/tests/unit/scheduler/client/test_report.py:L13)
- `import ddt` (src/nova/tests/unit/scheduler/client/test_report.py:L14)
- `import time` (src/nova/tests/unit/scheduler/client/test_report.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/scheduler/client/test_report.py:L16)
- `urllib`: imports `parse` (src/nova/tests/unit/scheduler/client/test_report.py:L17)
- `import fixtures` (src/nova/tests/unit/scheduler/client/test_report.py:L19)
- `keystoneauth1`: imports `exceptions as ks_exc` (src/nova/tests/unit/scheduler/client/test_report.py:L20)
- `import os_resource_classes as orc` (src/nova/tests/unit/scheduler/client/test_report.py:L21)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/scheduler/client/test_report.py:L22)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/scheduler/client/test_report.py:L23)
- `import nova.conf` (src/nova/tests/unit/scheduler/client/test_report.py:L25)
- `nova`: imports `context` (src/nova/tests/unit/scheduler/client/test_report.py:L26)
- `nova`: imports `exception` (src/nova/tests/unit/scheduler/client/test_report.py:L27)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/client/test_report.py:L28)
- `nova.scheduler.client`: imports `report` (src/nova/tests/unit/scheduler/client/test_report.py:L29)
- `nova.scheduler`: imports `utils as scheduler_utils` (src/nova/tests/unit/scheduler/client/test_report.py:L30)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/client/test_report.py:L31)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/scheduler/client/test_report.py:L32)
- `nova.tests.unit`: imports `fake_requests` (src/nova/tests/unit/scheduler/client/test_report.py:L33)

## Side Effects

- **network**: self.client._get_resource_provider(self.context, "fake") (src/nova/tests/unit/scheduler/client/test_report.py:L62)
- **network**: self.client._get_resource_provider(self.context, "fake") (src/nova/tests/unit/scheduler/client/test_report.py:L67)
- **network**: self.client._get_resource_provider(self.context, "fake") (src/nova/tests/unit/scheduler/client/test_report.py:L79)
- **network**: self.client._get_resource_provider(self.context, "fake") (src/nova/tests/unit/scheduler/client/test_report.py:L93)
- **network**: self.client._get_resource_provider(self.context, "fake") (src/nova/tests/unit/scheduler/client/test_report.py:L98)
- **network**: self.client._get_resource_provider(self.context, "fake") (src/nova/tests/unit/scheduler/client/test_report.py:L109)
- **network**: self.client._get_resource_provider(self.context, "fake") (src/nova/tests/unit/scheduler/client/test_report.py:L114)
- **network**: self.client._get_resource_provider(self.context, "fake") (src/nova/tests/unit/scheduler/client/test_report.py:L126)
- **network**: self.client._get_resource_provider(self.context, "fake") (src/nova/tests/unit/scheduler/client/test_report.py:L131)
- **network**: self.assertEqual(0, self.client._warn_count) (src/nova/tests/unit/scheduler/client/test_report.py:L137)
- **network**: self.client._get_resource_provider(self.context, "fake") (src/nova/tests/unit/scheduler/client/test_report.py:L152)
- **network**: self.client._get_resource_provider(self.context, "fake") (src/nova/tests/unit/scheduler/client/test_report.py:L157)
- **network**: rp_uuid = self.client._provider_tree.new_root( (src/nova/tests/unit/scheduler/client/test_report.py:L296)
- **network**: self.client._provider_tree.update_inventory(rp_uuid, resources) (src/nova/tests/unit/scheduler/client/test_report.py:L301)
- **network**: found = self.client._provider_tree.data(name_or_uuid) (src/nova/tests/unit/scheduler/client/test_report.py:L311)
- **network**: resp = self.client.put_allocations( (src/nova/tests/unit/scheduler/client/test_report.py:L339)
- **network**: resp = self.client.put_allocations( (src/nova/tests/unit/scheduler/client/test_report.py:L363)
- **network**: exception.PlacementAPIConnectFailure, self.client.put_allocations, (src/nova/tests/unit/scheduler/client/test_report.py:L376)
- **network**: self.client.put_allocations, (src/nova/tests/unit/scheduler/client/test_report.py:L401)
- **network**: resp = self.client.put_allocations( (src/nova/tests/unit/scheduler/client/test_report.py:L434)
- **network**: resp = self.client.put_allocations( (src/nova/tests/unit/scheduler/client/test_report.py:L465)
- **network**: res = self.client.claim_resources(self.context, consumer_uuid, (src/nova/tests/unit/scheduler/client/test_report.py:L494)
- **network**: res = self.client.claim_resources(self.context, consumer_uuid, (src/nova/tests/unit/scheduler/client/test_report.py:L535)
- **network**: res = self.client.claim_resources(self.context, consumer_uuid, (src/nova/tests/unit/scheduler/client/test_report.py:L594)
- **network**: res = self.client.claim_resources(self.context, consumer_uuid, (src/nova/tests/unit/scheduler/client/test_report.py:L670)
- **network**: res = self.client.claim_resources(self.context, consumer_uuid, (src/nova/tests/unit/scheduler/client/test_report.py:L753)
- **network**: res = self.client.claim_resources(self.context, consumer_uuid, (src/nova/tests/unit/scheduler/client/test_report.py:L848)
- **network**: res = self.client.claim_resources(self.context, consumer_uuid, (src/nova/tests/unit/scheduler/client/test_report.py:L942)
- **network**: res = self.client.claim_resources(self.context, consumer_uuid, (src/nova/tests/unit/scheduler/client/test_report.py:L1041)
- **network**: res = self.client.claim_resources(self.context, consumer_uuid, (src/nova/tests/unit/scheduler/client/test_report.py:L1114)
- **network**: res = self.client.claim_resources(self.context, consumer_uuid, (src/nova/tests/unit/scheduler/client/test_report.py:L1167)
- **network**: self.client.claim_resources, self.context, (src/nova/tests/unit/scheduler/client/test_report.py:L1216)
- **network**: res = self.client.remove_provider_tree_from_instance_allocation( (src/nova/tests/unit/scheduler/client/test_report.py:L1277)
- **network**: res = self.client.remove_provider_tree_from_instance_allocation( (src/nova/tests/unit/scheduler/client/test_report.py:L1358)
- **network**: res = self.client.remove_provider_tree_from_instance_allocation( (src/nova/tests/unit/scheduler/client/test_report.py:L1434)
- **network**: self.client.remove_provider_tree_from_instance_allocation, (src/nova/tests/unit/scheduler/client/test_report.py:L1448)
- **network**: res = self.client.remove_provider_tree_from_instance_allocation( (src/nova/tests/unit/scheduler/client/test_report.py:L1492)
- **network**: res = self.client.remove_provider_tree_from_instance_allocation( (src/nova/tests/unit/scheduler/client/test_report.py:L1550)
- **network**: resp = self.client.move_allocations( (src/nova/tests/unit/scheduler/client/test_report.py:L1657)
- **network**: resp = self.client.move_allocations( (src/nova/tests/unit/scheduler/client/test_report.py:L1694)
- **network**: resp = self.client.move_allocations( (src/nova/tests/unit/scheduler/client/test_report.py:L1714)
- **network**: resp = self.client.move_allocations( (src/nova/tests/unit/scheduler/client/test_report.py:L1750)
- **network**: resp = self.client.move_allocations( (src/nova/tests/unit/scheduler/client/test_report.py:L1778)
- **network**: resp = self.client.move_allocations( (src/nova/tests/unit/scheduler/client/test_report.py:L1791)
- **network**: self.client.move_allocations, self.context, (src/nova/tests/unit/scheduler/client/test_report.py:L1809)
- **network**: self.client._provider_tree.exists(uuids.compute_node)) (src/nova/tests/unit/scheduler/client/test_report.py:L1846)
- **network**: self.client._provider_tree.in_aggregates(uuids.compute_node, (src/nova/tests/unit/scheduler/client/test_report.py:L1848)
- **network**: self.client._provider_tree.in_aggregates(uuids.compute_node, (src/nova/tests/unit/scheduler/client/test_report.py:L1851)
- **network**: self.client._provider_tree.has_traits(uuids.compute_node, (src/nova/tests/unit/scheduler/client/test_report.py:L1854)
- **network**: self.client._provider_tree.has_traits(uuids.compute_node, (src/nova/tests/unit/scheduler/client/test_report.py:L1857)
- **network**: data = self.client._provider_tree.data(uuids.compute_node) (src/nova/tests/unit/scheduler/client/test_report.py:L1859)
- **network**: self.client._ensure_resource_provider(self.context, uuids.compute_node) (src/nova/tests/unit/scheduler/client/test_report.py:L1862)
- **network**: self.client._ensure_resource_provider(self.context, uuids.compute_node) (src/nova/tests/unit/scheduler/client/test_report.py:L1878)
- **network**: self.client._ensure_resource_provider, self.context, (src/nova/tests/unit/scheduler/client/test_report.py:L1904)
- **network**: self.assertFalse(self.client._provider_tree.exists(uuids.compute_node)) (src/nova/tests/unit/scheduler/client/test_report.py:L1911)
- **network**: self.client._provider_tree.in_aggregates, uuids.compute_node, []) (src/nova/tests/unit/scheduler/client/test_report.py:L1915)
- **network**: self.client._provider_tree.has_traits, uuids.compute_node, []) (src/nova/tests/unit/scheduler/client/test_report.py:L1918)
- **network**: self.client._ensure_resource_provider, self.context, (src/nova/tests/unit/scheduler/client/test_report.py:L1936)
- **network**: self.assertFalse(self.client._provider_tree.exists(uuids.compute_node)) (src/nova/tests/unit/scheduler/client/test_report.py:L1943)
- **network**: self.client._provider_tree.in_aggregates, uuids.compute_node, []) (src/nova/tests/unit/scheduler/client/test_report.py:L1947)
- **network**: self.client._provider_tree.has_traits, uuids.compute_node, []) (src/nova/tests/unit/scheduler/client/test_report.py:L1950)
- **network**: self.client._ensure_resource_provider(self.context, (src/nova/tests/unit/scheduler/client/test_report.py:L1975)
- **network**: self.assertTrue(self.client._provider_tree.exists(uuids.compute_node)) (src/nova/tests/unit/scheduler/client/test_report.py:L1991)
- **network**: self.client._ensure_resource_provider( (src/nova/tests/unit/scheduler/client/test_report.py:L1996)
- **network**: self.client._association_refresh_time[rp_uuid] = time.time() (src/nova/tests/unit/scheduler/client/test_report.py:L2024)
- **network**: root = self.client._ensure_resource_provider(self.context, uuids.root) (src/nova/tests/unit/scheduler/client/test_report.py:L2031)
- **network**: child1 = self.client._ensure_resource_provider( (src/nova/tests/unit/scheduler/client/test_report.py:L2035)
- **network**: self.client._ensure_resource_provider(self.context, (src/nova/tests/unit/scheduler/client/test_report.py:L2043)
- **network**: grandchild = self.client._ensure_resource_provider( (src/nova/tests/unit/scheduler/client/test_report.py:L2047)
- **network**: child2 = self.client._ensure_resource_provider( (src/nova/tests/unit/scheduler/client/test_report.py:L2054)
- **network**: set(self.client._provider_tree.get_provider_uuids())) (src/nova/tests/unit/scheduler/client/test_report.py:L2064)
- **network**: self.client._ensure_resource_provider(self.context, rp_uuid) (src/nova/tests/unit/scheduler/client/test_report.py:L2072)
- **network**: self.client._ensure_resource_provider(self.context, (src/nova/tests/unit/scheduler/client/test_report.py:L2090)
- **network**: set(self.client._provider_tree.get_provider_uuids())) (src/nova/tests/unit/scheduler/client/test_report.py:L2097)
- **network**: self.client._ensure_resource_provider(self.context, (src/nova/tests/unit/scheduler/client/test_report.py:L2112)
- **network**: self.client._provider_tree.get_provider_uuids()) (src/nova/tests/unit/scheduler/client/test_report.py:L2120)
- **network**: self.client.get_allocation_candidates(self.context, resources)) (src/nova/tests/unit/scheduler/client/test_report.py:L2179)
- **network**: self.client.get_allocation_candidates(self.context, resources)) (src/nova/tests/unit/scheduler/client/test_report.py:L2222)
- **network**: res = self.client.get_allocation_candidates(self.context, resources) (src/nova/tests/unit/scheduler/client/test_report.py:L2256)
- **network**: result = self.client._get_resource_provider(self.context, uuid) (src/nova/tests/unit/scheduler/client/test_report.py:L2282)
- **network**: result = self.client._get_resource_provider(self.context, uuid) (src/nova/tests/unit/scheduler/client/test_report.py:L2303)
- **network**: self.client._get_resource_provider, self.context, uuid) (src/nova/tests/unit/scheduler/client/test_report.py:L2324)
- **network**: result = self.client._get_sharing_providers( (src/nova/tests/unit/scheduler/client/test_report.py:L2383)
- **network**: [], self.client._get_sharing_providers(self.context, [])) (src/nova/tests/unit/scheduler/client/test_report.py:L2410)
- **network**: self.client._get_sharing_providers, (src/nova/tests/unit/scheduler/client/test_report.py:L2424)
- **network**: result = self.client.get_providers_in_tree(self.context, root) (src/nova/tests/unit/scheduler/client/test_report.py:L2461)
- **network**: self.client.get_providers_in_tree, self.context, (src/nova/tests/unit/scheduler/client/test_report.py:L2480)
- **network**: self.client.get_providers_in_tree, self.context, uuids.whatever) (src/nova/tests/unit/scheduler/client/test_report.py:L2497)
- **network**: self.client._create_resource_provider(self.context, uuid, name)) (src/nova/tests/unit/scheduler/client/test_report.py:L2510)
- **network**: self.client._create_resource_provider( (src/nova/tests/unit/scheduler/client/test_report.py:L2534)
- **network**: result = self.client._create_resource_provider(self.context, uuid, (src/nova/tests/unit/scheduler/client/test_report.py:L2570)
- **network**: self.client._create_resource_provider, self.context, (src/nova/tests/unit/scheduler/client/test_report.py:L2596)
- **network**: self.client._create_resource_provider, self.context, uuid, name) (src/nova/tests/unit/scheduler/client/test_report.py:L2611)
- **network**: self.client.put(url, []) (src/nova/tests/unit/scheduler/client/test_report.py:L2633)
- **network**: self.client._provider_tree.new_root('compute', uuids.root, (src/nova/tests/unit/scheduler/client/test_report.py:L2644)
- **network**: self.client._association_refresh_time[uuids.root] = 1234 (src/nova/tests/unit/scheduler/client/test_report.py:L2646)
- **network**: self.client._delete_provider(uuids.root, global_request_id='gri') (src/nova/tests/unit/scheduler/client/test_report.py:L2648)
- **network**: self.assertFalse(self.client._provider_tree.exists(uuids.root)) (src/nova/tests/unit/scheduler/client/test_report.py:L2653)
- **network**: self.assertNotIn(uuids.root, self.client._association_refresh_time) (src/nova/tests/unit/scheduler/client/test_report.py:L2654)
- **network**: self.assertRaises(exc, self.client._delete_provider, uuids.root) (src/nova/tests/unit/scheduler/client/test_report.py:L2666)
- **network**: self.client._provider_tree.new_root('rp', uuids.rp, generation=0) (src/nova/tests/unit/scheduler/client/test_report.py:L2681)
- **network**: self.client._provider_tree.data(uuids.rp).aggregates) (src/nova/tests/unit/scheduler/client/test_report.py:L2683)
- **network**: self.client.set_aggregates_for_provider(self.context, uuids.rp, aggs) (src/nova/tests/unit/scheduler/client/test_report.py:L2685)
- **network**: ptree_data = self.client._provider_tree.data(uuids.rp) (src/nova/tests/unit/scheduler/client/test_report.py:L2694)
- **network**: self.assertRaises(ValueError, self.client.set_aggregates_for_provider, (src/nova/tests/unit/scheduler/client/test_report.py:L2699)
- **network**: self.assertRaises(ValueError, self.client.set_aggregates_for_provider, (src/nova/tests/unit/scheduler/client/test_report.py:L2701)
- **network**: self.client._provider_tree.new_root('rp', uuids.rp, generation=0) (src/nova/tests/unit/scheduler/client/test_report.py:L2708)
- **network**: self.client.set_aggregates_for_provider, (src/nova/tests/unit/scheduler/client/test_report.py:L2711)
- **network**: self.client._provider_tree.data(uuids.rp).aggregates) (src/nova/tests/unit/scheduler/client/test_report.py:L2715)
- **network**: self.client._provider_tree.new_root('rp', uuids.rp, generation=0) (src/nova/tests/unit/scheduler/client/test_report.py:L2719)
- **network**: self.client.set_aggregates_for_provider, (src/nova/tests/unit/scheduler/client/test_report.py:L2723)
- **network**: self.client._provider_tree.get_provider_uuids()) (src/nova/tests/unit/scheduler/client/test_report.py:L2727)
- **network**: self.assertNotIn(uuids.rp, self.client._association_refresh_time) (src/nova/tests/unit/scheduler/client/test_report.py:L2728)
- **network**: self.client._provider_tree.new_root('rp', uuids.rp, generation=7) (src/nova/tests/unit/scheduler/client/test_report.py:L2733)
- **network**: self.client.set_aggregates_for_provider(self.context, uuids.rp, []) (src/nova/tests/unit/scheduler/client/test_report.py:L2734)
- **network**: self.client._provider_tree.new_root('rp', uuids.rp, generation=2) (src/nova/tests/unit/scheduler/client/test_report.py:L2742)
- **network**: self.client.set_aggregates_for_provider(self.context, uuids.rp, [], (src/nova/tests/unit/scheduler/client/test_report.py:L2747)
- **network**: ptree_data = self.client._provider_tree.data(uuids.rp) (src/nova/tests/unit/scheduler/client/test_report.py:L2756)
- **network**: self.client._provider_tree.new_root( (src/nova/tests/unit/scheduler/client/test_report.py:L2764)
- **network**: actual_name = self.client.get_resource_provider_name( (src/nova/tests/unit/scheduler/client/test_report.py:L2767)
- **network**: actual_name = self.client.get_resource_provider_name( (src/nova/tests/unit/scheduler/client/test_report.py:L2782)
- **network**: self.client.get_resource_provider_name, (src/nova/tests/unit/scheduler/client/test_report.py:L2797)
- **network**: self.client.get_resource_provider_name, (src/nova/tests/unit/scheduler/client/test_report.py:L2811)
- **network**: self.client._association_refresh_time[rp_uuid] = time.time() (src/nova/tests/unit/scheduler/client/test_report.py:L2817)
- **network**: self.assertFalse(self.client._associations_stale(rp_uuid)) (src/nova/tests/unit/scheduler/client/test_report.py:L2820)
- **network**: self.assertTrue(self.client._provider_tree.exists(rp_uuid)) (src/nova/tests/unit/scheduler/client/test_report.py:L2821)
- **network**: self.client.invalidate_resource_provider(rp_uuid) (src/nova/tests/unit/scheduler/client/test_report.py:L2825)
- **network**: self.assertTrue(self.client._associations_stale(rp_uuid)) (src/nova/tests/unit/scheduler/client/test_report.py:L2826)
- **network**: self.assertFalse(self.client._provider_tree.exists(rp_uuid)) (src/nova/tests/unit/scheduler/client/test_report.py:L2827)
- **network**: self.client._association_refresh_time[rp_uuid] = time.time() (src/nova/tests/unit/scheduler/client/test_report.py:L2832)
- **network**: self.assertFalse(self.client._associations_stale(rp_uuid)) (src/nova/tests/unit/scheduler/client/test_report.py:L2835)
- **network**: self.assertTrue(self.client._provider_tree.exists(rp_uuid)) (src/nova/tests/unit/scheduler/client/test_report.py:L2836)
- **network**: self.client.invalidate_resource_provider(rp_uuid, cacheonly=True) (src/nova/tests/unit/scheduler/client/test_report.py:L2840)
- **network**: self.assertTrue(self.client._associations_stale(rp_uuid)) (src/nova/tests/unit/scheduler/client/test_report.py:L2841)
- **network**: self.assertTrue(self.client._provider_tree.exists(rp_uuid)) (src/nova/tests/unit/scheduler/client/test_report.py:L2842)
- **network**: result, gen = self.client._get_provider_aggregates(self.context, uuid) (src/nova/tests/unit/scheduler/client/test_report.py:L2857)
- **network**: self.client._get_provider_aggregates, self.context, uuid) (src/nova/tests/unit/scheduler/client/test_report.py:L2880)
- **network**: result, gen = self.client.get_provider_traits(self.context, uuid) (src/nova/tests/unit/scheduler/client/test_report.py:L2907)
- **network**: self.client.get_provider_traits, self.context, uuid) (src/nova/tests/unit/scheduler/client/test_report.py:L2931)
- **network**: self.client.get_provider_traits, self.context, uuid) (src/nova/tests/unit/scheduler/client/test_report.py:L2949)
- **network**: self.client._ensure_traits(self.context, all_traits) (src/nova/tests/unit/scheduler/client/test_report.py:L2969)
- **network**: self.client._ensure_traits(self.context, standard_traits) (src/nova/tests/unit/scheduler/client/test_report.py:L2984)
- **network**: self.client._ensure_traits(self.context, None) (src/nova/tests/unit/scheduler/client/test_report.py:L2994)
- **network**: self.client._ensure_traits(self.context, []) (src/nova/tests/unit/scheduler/client/test_report.py:L2995)
- **network**: self.client._ensure_traits, (src/nova/tests/unit/scheduler/client/test_report.py:L3003)
- **network**: self.client._ensure_traits, (src/nova/tests/unit/scheduler/client/test_report.py:L3019)
- **network**: self.client._provider_tree.new_root('rp', uuids.rp, generation=0) (src/nova/tests/unit/scheduler/client/test_report.py:L3040)
- **network**: self.client.set_traits_for_provider(self.context, uuids.rp, traits) (src/nova/tests/unit/scheduler/client/test_report.py:L3049)
- **network**: self.client._provider_tree.have_traits_changed(uuids.rp, traits)) (src/nova/tests/unit/scheduler/client/test_report.py:L3064)
- **network**: 1, self.client._provider_tree.data(uuids.rp).generation) (src/nova/tests/unit/scheduler/client/test_report.py:L3067)
- **network**: self.client._provider_tree.new_root('rp', uuids.rp, generation=0) (src/nova/tests/unit/scheduler/client/test_report.py:L3078)
- **network**: self.client.set_traits_for_provider( (src/nova/tests/unit/scheduler/client/test_report.py:L3087)
- **network**: self.client._provider_tree.have_traits_changed(uuids.rp, traits)) (src/nova/tests/unit/scheduler/client/test_report.py:L3103)
- **network**: 2, self.client._provider_tree.data(uuids.rp).generation) (src/nova/tests/unit/scheduler/client/test_report.py:L3106)
- **network**: self.client._provider_tree.new_root('rp', uuids.rp, generation=0) (src/nova/tests/unit/scheduler/client/test_report.py:L3114)
- **network**: self.client.set_traits_for_provider, (src/nova/tests/unit/scheduler/client/test_report.py:L3120)
- **network**: self.client.set_traits_for_provider, (src/nova/tests/unit/scheduler/client/test_report.py:L3131)
- **network**: self.client.set_traits_for_provider, (src/nova/tests/unit/scheduler/client/test_report.py:L3138)
- **network**: self.assertIn(uuid, self.client._association_refresh_time) (src/nova/tests/unit/scheduler/client/test_report.py:L3182)
- **network**: self.client._provider_tree.has_inventory_changed(uuid, self.inv)) (src/nova/tests/unit/scheduler/client/test_report.py:L3184)
- **network**: self.client._provider_tree.in_aggregates(uuid, [uuids.agg1])) (src/nova/tests/unit/scheduler/client/test_report.py:L3186)
- **network**: self.client._provider_tree.in_aggregates(uuid, [uuids.agg2])) (src/nova/tests/unit/scheduler/client/test_report.py:L3188)
- **network**: self.client._provider_tree.has_traits(uuid, ['CUSTOM_GOLD'])) (src/nova/tests/unit/scheduler/client/test_report.py:L3190)
- **network**: self.client._provider_tree.has_traits(uuid, ['CUSTOM_SILVER'])) (src/nova/tests/unit/scheduler/client/test_report.py:L3192)
- **network**: self.assertEqual(43, self.client._provider_tree.data(uuid).generation) (src/nova/tests/unit/scheduler/client/test_report.py:L3193)
- **network**: self.assertFalse(self.client._association_refresh_time) (src/nova/tests/unit/scheduler/client/test_report.py:L3201)
- **network**: self.assertIn(timer_entry, self.client._association_refresh_time) (src/nova/tests/unit/scheduler/client/test_report.py:L3203)
- **network**: self.client._provider_tree.new_root('compute', uuid, generation=1) (src/nova/tests/unit/scheduler/client/test_report.py:L3215)
- **network**: self.client._refresh_associations(self.context, uuid) (src/nova/tests/unit/scheduler/client/test_report.py:L3216)
- **network**: self.client._provider_tree.new_root('compute', uuid, generation=1) (src/nova/tests/unit/scheduler/client/test_report.py:L3223)
- **network**: self.client._refresh_associations(self.context, uuid, (src/nova/tests/unit/scheduler/client/test_report.py:L3224)
- **network**: self.client._refresh_associations(self.context, uuid) (src/nova/tests/unit/scheduler/client/test_report.py:L3236)
- **network**: self.client._provider_tree.new_root('compute', uuid, generation=1) (src/nova/tests/unit/scheduler/client/test_report.py:L3245)
- **network**: self.client._refresh_associations(self.context, uuid) (src/nova/tests/unit/scheduler/client/test_report.py:L3249)
- **network**: self.client._refresh_associations(self.context, uuid) (src/nova/tests/unit/scheduler/client/test_report.py:L3268)
- **network**: self.client._refresh_associations(self.context, uuid) (src/nova/tests/unit/scheduler/client/test_report.py:L3274)
- **network**: self.client._provider_tree.new_root('compute', uuid, generation=1) (src/nova/tests/unit/scheduler/client/test_report.py:L3283)
- **network**: self.client._refresh_associations(self.context, uuid) (src/nova/tests/unit/scheduler/client/test_report.py:L3287)
- **network**: self.client._refresh_associations(self.context, uuid) (src/nova/tests/unit/scheduler/client/test_report.py:L3295)
- **network**: self.client._refresh_associations(self.context, uuid) (src/nova/tests/unit/scheduler/client/test_report.py:L3302)
- **network**: del self.client._association_refresh_time[uuid] (src/nova/tests/unit/scheduler/client/test_report.py:L3309)
- **network**: self.client._refresh_associations(self.context, uuid) (src/nova/tests/unit/scheduler/client/test_report.py:L3310)
- **network**: self.client._remove_allocations_for_evacuated_instances(self.context, (src/nova/tests/unit/scheduler/client/test_report.py:L3327)
- **network**: self.client.delete_resource_provider(self.context, cn, cascade=True) (src/nova/tests/unit/scheduler/client/test_report.py:L3362)
- **network**: self.assertFalse(self.client._provider_tree.exists(uuids.cn)) (src/nova/tests/unit/scheduler/client/test_report.py:L3370)
- **network**: self.client._association_refresh_time[uuids.cn] = mock.Mock() (src/nova/tests/unit/scheduler/client/test_report.py:L3383)
- **network**: self.client.delete_resource_provider(self.context, cn) (src/nova/tests/unit/scheduler/client/test_report.py:L3395)
- **network**: self.assertNotIn(uuids.cn, self.client._association_refresh_time) (src/nova/tests/unit/scheduler/client/test_report.py:L3401)
- **network**: self.client.delete_resource_provider(self.context, cn) (src/nova/tests/unit/scheduler/client/test_report.py:L3420)
- **network**: self.client.delete_resource_provider(self.context, cn) (src/nova/tests/unit/scheduler/client/test_report.py:L3428)
- **network**: self.client.delete_resource_provider(self.context, cn) (src/nova/tests/unit/scheduler/client/test_report.py:L3436)
- **network**: self.client.delete_resource_provider(self.context, cn) (src/nova/tests/unit/scheduler/client/test_report.py:L3474)
- **network**: self.client.delete_resource_provider, self.context, cn) (src/nova/tests/unit/scheduler/client/test_report.py:L3512)
- **network**: ret = self.client.get_allocations_for_resource_provider( (src/nova/tests/unit/scheduler/client/test_report.py:L3519)
- **network**: self.client.get_allocations_for_resource_provider, (src/nova/tests/unit/scheduler/client/test_report.py:L3530)
- **network**: ret = self.client.get_allocs_for_consumer(self.context, 'consumer') (src/nova/tests/unit/scheduler/client/test_report.py:L3540)
- **network**: self.client.get_allocs_for_consumer, (src/nova/tests/unit/scheduler/client/test_report.py:L3550)
- **network**: self.client.get_allocs_for_consumer, (src/nova/tests/unit/scheduler/client/test_report.py:L3560)
- **network**: self.client.remove_resources_from_instance_allocation( (src/nova/tests/unit/scheduler/client/test_report.py:L3579)
- **network**: self.client.remove_resources_from_instance_allocation, (src/nova/tests/unit/scheduler/client/test_report.py:L3740)
- **network**: self.client.remove_resources_from_instance_allocation( (src/nova/tests/unit/scheduler/client/test_report.py:L3768)
- **network**: self.client.remove_resources_from_instance_allocation( (src/nova/tests/unit/scheduler/client/test_report.py:L3914)
- **network**: self.client.remove_resources_from_instance_allocation, (src/nova/tests/unit/scheduler/client/test_report.py:L3988)
- **network**: self.client.add_resources_to_instance_allocation( (src/nova/tests/unit/scheduler/client/test_report.py:L4017)
- **network**: self.client.add_resources_to_instance_allocation( (src/nova/tests/unit/scheduler/client/test_report.py:L4030)
- **network**: self.client.add_resources_to_instance_allocation, (src/nova/tests/unit/scheduler/client/test_report.py:L4100)
- **network**: self.client.add_resources_to_instance_allocation, (src/nova/tests/unit/scheduler/client/test_report.py:L4143)
- **network**: self.client.add_resources_to_instance_allocation( (src/nova/tests/unit/scheduler/client/test_report.py:L4204)
- **network**: self.client.add_resources_to_instance_allocation, (src/nova/tests/unit/scheduler/client/test_report.py:L4286)
- **network**: self.client._ensure_resource_classes(self.context, rcs) (src/nova/tests/unit/scheduler/client/test_report.py:L4315)
- **network**: self.client._ensure_resource_classes(self.context, empty) (src/nova/tests/unit/scheduler/client/test_report.py:L4324)
- **network**: self.client._ensure_resource_classes, self.context, rcs) (src/nova/tests/unit/scheduler/client/test_report.py:L4332)
- **network**: res = self.client.get_provider_by_name(self.context, name) (src/nova/tests/unit/scheduler/client/test_report.py:L4365)
- **network**: self.client.get_provider_by_name, self.context, name) (src/nova/tests/unit/scheduler/client/test_report.py:L4390)
- **network**: self.client.get_provider_by_name, self.context, name) (src/nova/tests/unit/scheduler/client/test_report.py:L4401)
- **network**: self.client.get_provider_by_name, self.context, name) (src/nova/tests/unit/scheduler/client/test_report.py:L4412)
- **network**: self.client.aggregate_add_host(self.context, agg_uuid, host_name=name) (src/nova/tests/unit/scheduler/client/test_report.py:L4431)
- **network**: self.client.aggregate_add_host( (src/nova/tests/unit/scheduler/client/test_report.py:L4445)
- **network**: self.client.aggregate_add_host(self.context, agg1_uuid, host_name=name) (src/nova/tests/unit/scheduler/client/test_report.py:L4469)
- **network**: self.client.aggregate_add_host(self.context, agg2_uuid, host_name=name) (src/nova/tests/unit/scheduler/client/test_report.py:L4475)
- **network**: self.client.aggregate_add_host, self.context, agg_uuid, (src/nova/tests/unit/scheduler/client/test_report.py:L4491)
- **network**: self.client.aggregate_add_host(self.context, uuids.agg1, (src/nova/tests/unit/scheduler/client/test_report.py:L4517)
- **network**: self.client.aggregate_add_host, self.context, uuids.agg1, (src/nova/tests/unit/scheduler/client/test_report.py:L4543)
- **network**: self.client.aggregate_add_host, self.context, uuids.agg1) (src/nova/tests/unit/scheduler/client/test_report.py:L4552)
- **network**: self.client.aggregate_remove_host, self.context, agg_uuid, name) (src/nova/tests/unit/scheduler/client/test_report.py:L4565)
- **network**: self.client.aggregate_remove_host(self.context, agg_uuid, name) (src/nova/tests/unit/scheduler/client/test_report.py:L4584)
- **network**: self.client.aggregate_remove_host(self.context, agg2_uuid, name) (src/nova/tests/unit/scheduler/client/test_report.py:L4606)
- **network**: self.client.aggregate_remove_host(self.context, agg2_uuid, name) (src/nova/tests/unit/scheduler/client/test_report.py:L4612)
- **network**: self.client.aggregate_remove_host(self.context, uuids.agg1, 'cn1') (src/nova/tests/unit/scheduler/client/test_report.py:L4640)
- **network**: self.client.aggregate_remove_host, self.context, uuids.agg1, 'cn1') (src/nova/tests/unit/scheduler/client/test_report.py:L4666)
- **network**: self.client.get_usages_counts_for_quota, (src/nova/tests/unit/scheduler/client/test_report.py:L4678)
- **network**: self.client.get_usages_counts_for_quota, (src/nova/tests/unit/scheduler/client/test_report.py:L4692)
- **network**: counts = self.client.get_usages_counts_for_quota(self.context, (src/nova/tests/unit/scheduler/client/test_report.py:L4713)
- **network**: counts = self.client.get_usages_counts_for_quota( (src/nova/tests/unit/scheduler/client/test_report.py:L4729)
- **network**: self.client.get_usages_counts_for_quota, (src/nova/tests/unit/scheduler/client/test_report.py:L4739)
- **network**: counts = self.client.get_usages_counts_for_quota( (src/nova/tests/unit/scheduler/client/test_report.py:L4749)
- **network**: counts = self.client.get_usages_counts_for_quota( (src/nova/tests/unit/scheduler/client/test_report.py:L4763)
- **network**: counts = self.client.get_usages_counts_for_limits( (src/nova/tests/unit/scheduler/client/test_report.py:L4777)
- **network**: self.client.get_usages_counts_for_limits, (src/nova/tests/unit/scheduler/client/test_report.py:L4790)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/scheduler/client/test_report.py:L36)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as ks_exc (src/nova/tests/unit/scheduler/client/test_report.py:L20)
- **privilege** (`crypto-key`): 'keystoneauth1.loading.load_auth_from_conf_options', (src/nova/tests/unit/scheduler/client/test_report.py:L50)
- **privilege** (`crypto-key`): @mock.patch('keystoneauth1.session.Session.request') (src/nova/tests/unit/scheduler/client/test_report.py:L55)
- **privilege** (`crypto-key`): @mock.patch('keystoneauth1.session.Session.request') (src/nova/tests/unit/scheduler/client/test_report.py:L72)
- **privilege** (`crypto-key`): @mock.patch('keystoneauth1.session.Session.request') (src/nova/tests/unit/scheduler/client/test_report.py:L85)
- **privilege** (`crypto-key`): @mock.patch('keystoneauth1.session.Session.request') (src/nova/tests/unit/scheduler/client/test_report.py:L101)
- **privilege** (`crypto-key`): @mock.patch('keystoneauth1.session.Session.request') (src/nova/tests/unit/scheduler/client/test_report.py:L117)
- **privilege** (`crypto-key`): @mock.patch('keystoneauth1.session.Session.request') (src/nova/tests/unit/scheduler/client/test_report.py:L145)

