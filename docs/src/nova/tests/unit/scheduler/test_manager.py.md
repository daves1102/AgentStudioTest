# src/nova/tests/unit/scheduler/test_manager.py

## Overview

This file implements the `test_manager` module, defining 5 classs, 1 field, 7 functions, 67 methods, 7 variables, 19 imports, 2 side effects, 2 security surface entries.

Lines: total 2311, code 1923, comment 174, blank 214

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_numa_limit` | variable | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_manager.py:L44–L45` |
| `fake_limit` | variable | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_manager.py:L46–L47` |
| `fake_limit_obj` | variable | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_manager.py:L48–L48` |
| `fake_alloc` | variable | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_manager.py:L49–L54` |
| `fake_alloc_version` | variable | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_manager.py:L55–L55` |
| `json_alloc` | variable | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_manager.py:L56–L56` |
| `fake_selection` | variable | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_manager.py:L57–L61` |
| `SchedulerManagerTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_manager.py:L64–L1808` |
| `SchedulerManagerTestCase.manager_cls` | field | — | public | not declared | — | `src/nova/tests/unit/scheduler/test_manager.py:L67–L67` |
| `SchedulerManagerTestCase.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/test_manager.py:L73–L81` |
| `SchedulerManagerTestCase.test_select_destination` | method | (self, mock_get_ac, mock_rfrs, mock_process) | public | not declared | 2/32 | `src/nova/tests/unit/scheduler/test_manager.py:L87–L121` |
| `SchedulerManagerTestCase.test_select_destination_return_objects` | method | (self, mock_get_ac, mock_rfrs, mock_process) | public | not declared | 2/39 | `src/nova/tests/unit/scheduler/test_manager.py:L127–L175` |
| `SchedulerManagerTestCase._test_select_destination` | method | (self, get_allocation_candidates_response, mock_get_ac, mock_rfrs, mock_process) | private | not declared | 1/18 | `src/nova/tests/unit/scheduler/test_manager.py:L181–L198` |
| `SchedulerManagerTestCase.test_select_destination_old_placement` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/test_manager.py:L200–L206` |
| `SchedulerManagerTestCase.test_select_destination_placement_connect_fails` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/test_manager.py:L208–L215` |
| `SchedulerManagerTestCase.test_select_destination_no_candidates` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/test_manager.py:L217–L224` |
| `SchedulerManagerTestCase.test_select_destination_is_rebuild` | method | (self, mock_get_ac, mock_rfrs, mock_process) | public | not declared | 1/15 | `src/nova/tests/unit/scheduler/test_manager.py:L230–L244` |
| `SchedulerManagerTestCase.test_select_destination_with_4_3_client` | method | (self, mock_get_ac, mock_rfrs, mock_process, cpu_pinning_requested=False) | public | not declared | 2/26 | `src/nova/tests/unit/scheduler/test_manager.py:L250–L275` |
| `SchedulerManagerTestCase.test_select_destination_with_pcpu_fallback` | method | (self, mock_get_ac, mock_rfrs, mock_process, mock_log) | public | not declared | 2/37 | `src/nova/tests/unit/scheduler/test_manager.py:L282–L332` |
| `SchedulerManagerTestCase.test_select_destination_with_pcpu_fallback_disabled` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/test_manager.py:L334–L341` |
| `SchedulerManagerTestCase.test_select_destination_with_old_client` | method | (self, from_primitives, mock_get_ac, mock_rfrs, mock_process) | public | not declared | 2/28 | `src/nova/tests/unit/scheduler/test_manager.py:L349–L376` |
| `SchedulerManagerTestCase.test_schedule_placement_bad_comms` | method | (self, mock_get_hosts, mock_get_all_states, mock_claim) | public | not declared | 1/47 | `src/nova/tests/unit/scheduler/test_manager.py:L381–L449` |
| `SchedulerManagerTestCase.test_schedule_placement_bad_comms.fake_get_sorted_hosts` | function | (_spec_obj, host_states, index) | public | `all_host_states` (src/nova/tests/unit/scheduler/test_manager.py:L422) | — | `src/nova/tests/unit/scheduler/test_manager.py:L419–L422` |
| `SchedulerManagerTestCase.test_schedule_old_conductor` | method | (self, mock_get_hosts, mock_get_all_states, mock_claim) | public | not declared | 1/47 | `src/nova/tests/unit/scheduler/test_manager.py:L454–L515` |
| `SchedulerManagerTestCase._test_schedule_successful_claim` | method | (self, mock_get_hosts, mock_get_all_states, mock_claim, num_instances=1) | private | not declared | 1/56 | `src/nova/tests/unit/scheduler/test_manager.py:L520–L582` |
| `SchedulerManagerTestCase.test_schedule_successful_claim` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/scheduler/test_manager.py:L584–L585` |
| `SchedulerManagerTestCase.test_schedule_old_reqspec_and_move_operation` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/scheduler/test_manager.py:L587–L592` |
| `SchedulerManagerTestCase.test_schedule_unsuccessful_claim` | method | (self, mock_get_hosts, mock_get_all_states, mock_claim, mock_cleanup) | public | not declared | 1/46 | `src/nova/tests/unit/scheduler/test_manager.py:L598–L651` |
| `SchedulerManagerTestCase.test_schedule_not_all_instance_clean_claimed` | method | (self, mock_get_hosts, mock_get_all_states, mock_claim, mock_cleanup) | public | not declared | 1/46 | `src/nova/tests/unit/scheduler/test_manager.py:L657–L725` |
| `SchedulerManagerTestCase.test_schedule_not_all_instance_clean_claimed.fake_get_sorted_hosts` | function | (spec_obj, hosts, num) | public | `hosts` (src/nova/tests/unit/scheduler/test_manager.py:L698); `[]` (src/nova/tests/unit/scheduler/test_manager.py:L701); `hosts` (src/nova/tests/unit/scheduler/test_manager.py:L704) | — | `src/nova/tests/unit/scheduler/test_manager.py:L693–L706` |
| `SchedulerManagerTestCase.test_selection_alloc_requests_for_alts` | method | (self, mock_get_hosts, mock_get_all_states, mock_claim) | public | not declared | 1/81 | `src/nova/tests/unit/scheduler/test_manager.py:L730–L814` |
| `SchedulerManagerTestCase.test_selection_alloc_requests_no_alts` | method | (self, mock_get_hosts, mock_get_all_states, mock_claim) | public | not declared | 1/77 | `src/nova/tests/unit/scheduler/test_manager.py:L819–L899` |
| `SchedulerManagerTestCase.test_schedule_instance_group` | method | (self, mock_get_hosts, mock_get_all_states, mock_claim) | public | not declared | 2/87 | `src/nova/tests/unit/scheduler/test_manager.py:L904–L1025` |
| `SchedulerManagerTestCase.test_schedule_instance_group.fake_get_sorted_hosts` | function | (_spec_obj, host_states, index) | public | `s` (src/nova/tests/unit/scheduler/test_manager.py:L975); `reversed(s)` (src/nova/tests/unit/scheduler/test_manager.py:L978) | — | `src/nova/tests/unit/scheduler/test_manager.py:L969–L978` |
| `SchedulerManagerTestCase.test_get_sorted_hosts` | method | (self, mock_filt, mock_weighed, mock_rand, debug) | public | not declared | 1/20 | `src/nova/tests/unit/scheduler/test_manager.py:L1031–L1069` |
| `SchedulerManagerTestCase.test_get_sorted_hosts.fake_debug` | function | (message, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/scheduler/test_manager.py:L1048–L1052` |
| `SchedulerManagerTestCase.test_get_sorted_hosts_subset_less_than_num_weighed` | method | (self, mock_filt, mock_weighed, mock_rand) | public | not declared | 1/19 | `src/nova/tests/unit/scheduler/test_manager.py:L1074–L1101` |
| `SchedulerManagerTestCase.test_get_sorted_hosts_subset_greater_than_num_weighed` | method | (self, mock_filt, mock_weighed, mock_rand) | public | not declared | 1/18 | `src/nova/tests/unit/scheduler/test_manager.py:L1106–L1135` |
| `SchedulerManagerTestCase.test_get_sorted_hosts_shuffle_top_equal` | method | (self, mock_filt, mock_weighed, mock_shuffle) | public | not declared | 1/23 | `src/nova/tests/unit/scheduler/test_manager.py:L1140–L1172` |
| `SchedulerManagerTestCase.test_cleanup_allocations` | method | (self, mock_delete_alloc) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/test_manager.py:L1177–L1190` |
| `SchedulerManagerTestCase.test_add_retry_host` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/test_manager.py:L1192–L1202` |
| `SchedulerManagerTestCase.test_post_select_populate` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/test_manager.py:L1204–L1214` |
| `SchedulerManagerTestCase.test_select_destinations_match_num_instances` | method | (self, mock_schedule) | public | not declared | 1/25 | `src/nova/tests/unit/scheduler/test_manager.py:L1217–L1247` |
| `SchedulerManagerTestCase.test_select_destinations_for_move_ops` | method | (self, mock_schedule) | public | not declared | 1/25 | `src/nova/tests/unit/scheduler/test_manager.py:L1250–L1282` |
| `SchedulerManagerTestCase.test_schedule_fewer_num_instances` | method | (self, mock_get_hosts, mock_get_all_states, mock_claim) | public | not declared | 1/39 | `src/nova/tests/unit/scheduler/test_manager.py:L1287–L1343` |
| `SchedulerManagerTestCase.test_schedule_fewer_num_instances.fake_get_sorted_hosts` | function | (spec_obj, hosts, num) | public | `list(hosts)` (src/nova/tests/unit/scheduler/test_manager.py:L1329); `[]` (src/nova/tests/unit/scheduler/test_manager.py:L1331) | — | `src/nova/tests/unit/scheduler/test_manager.py:L1325–L1333` |
| `SchedulerManagerTestCase._test_alternates_returned` | method | (self, mock_get_all_hosts, mock_sorted, mock_claim, mock_consume, num_instances=2, num_alternates=2) | private | not declared | 8/44 | `src/nova/tests/unit/scheduler/test_manager.py:L1349–L1399` |
| `SchedulerManagerTestCase.test_alternates_returned` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/test_manager.py:L1401–L1406` |
| `SchedulerManagerTestCase.test_alternates_same_cell` | method | (self, mock_get_all_hosts, mock_sorted, mock_claim, mock_consume) | public | not declared | 5/41 | `src/nova/tests/unit/scheduler/test_manager.py:L1412–L1475` |
| `SchedulerManagerTestCase.test_alternates_same_cell.fake_get_sorted_hosts` | function | (spec_obj, hosts, num) | public | `list(hosts)` (src/nova/tests/unit/scheduler/test_manager.py:L1439); `list(reversed(all_host_states))` (src/nova/tests/unit/scheduler/test_manager.py:L1441); `list(hosts)` (src/nova/tests/unit/scheduler/test_manager.py:L1443) | — | `src/nova/tests/unit/scheduler/test_manager.py:L1435–L1445` |
| `SchedulerManagerTestCase._test_not_enough_alternates` | method | (self, mock_get_all_hosts, mock_sorted, mock_claim, mock_consume, num_hosts, max_attempts) | private | not declared | 5/38 | `src/nova/tests/unit/scheduler/test_manager.py:L1481–L1526` |
| `SchedulerManagerTestCase.test_not_enough_alternates` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/test_manager.py:L1528–L1532` |
| `SchedulerManagerTestCase.test_select_destinations_notifications` | method | (self, mock_schedule, mock_notify) | public | not declared | 1/43 | `src/nova/tests/unit/scheduler/test_manager.py:L1536–L1582` |
| `SchedulerManagerTestCase.test_get_all_host_states_provider_summaries_is_none` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/test_manager.py:L1584–L1595` |
| `SchedulerManagerTestCase.test_get_all_host_states_provider_summaries_is_empty` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/test_manager.py:L1597–L1608` |
| `SchedulerManagerTestCase.test_update_aggregates` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/test_manager.py:L1610–L1615` |
| `SchedulerManagerTestCase.test_delete_aggregate` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/test_manager.py:L1617–L1622` |
| `SchedulerManagerTestCase.test_update_instance_info` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/test_manager.py:L1624–L1633` |
| `SchedulerManagerTestCase.test_delete_instance_info` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/test_manager.py:L1635–L1644` |
| `SchedulerManagerTestCase.test_sync_instance_info` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/test_manager.py:L1646–L1655` |
| `SchedulerManagerTestCase.test_reset` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/test_manager.py:L1657–L1662` |
| `SchedulerManagerTestCase.test_graceful_shutdown` | method | (self, mock_wait, mock_shutdown_executors) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/test_manager.py:L1667–L1675` |
| `SchedulerManagerTestCase.test_graceful_shutdown_no_negative_wait_time` | method | (self, mock_wait, mock_shutdown_executors) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/test_manager.py:L1680–L1684` |
| `SchedulerManagerTestCase.test_graceful_shutdown_handles_shutdown_all_executors_exception` | method | (self, mock_wait, mock_shutdown_executors) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/test_manager.py:L1689–L1694` |
| `SchedulerManagerTestCase.test_discover_hosts` | method | (self, mock_discover, mock_get_by_binary) | public | not declared | 1/17 | `src/nova/tests/unit/scheduler/test_manager.py:L1698–L1715` |
| `SchedulerManagerTestCase.test_discover_hosts_duplicate_host_mapping` | method | (self, mock_discover, mock_log_warning, mock_log_debug, mock_get_by_binary) | public | not declared | 1/23 | `src/nova/tests/unit/scheduler/test_manager.py:L1721–L1746` |
| `SchedulerManagerTestCase.test_discover_hosts_not_leader` | method | (self, mock_discover, mock_log_debug, mock_get_by_binary) | public | not declared | 1/21 | `src/nova/tests/unit/scheduler/test_manager.py:L1751–L1773` |
| `SchedulerManagerTestCase.test_init_lazy_placement_client` | method | (self, mock_rpc, mock_sg, mock_hm, mock_log, mock_report) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/test_manager.py:L1780–L1794` |
| `SchedulerManagerTestCase.test_init_lazy_placement_client_failures` | method | (self, mock_rpc, mock_sg, mock_hm, mock_report) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/test_manager.py:L1800–L1808` |
| `SchedulerManagerAllocationCandidateTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_manager.py:L1811–L2311` |
| `SchedulerManagerAllocationCandidateTestCase.ACRecorderFilter` | class | — | public | not declared | — | `src/nova/tests/unit/scheduler/test_manager.py:L1813–L1824` |
| `SchedulerManagerAllocationCandidateTestCase.ACRecorderFilter.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/test_manager.py:L1817–L1819` |
| `SchedulerManagerAllocationCandidateTestCase.ACRecorderFilter.host_passes` | method | (self, host_state, filter_properties) | public | `True` (src/nova/tests/unit/scheduler/test_manager.py:L1824) | 1/3 | `src/nova/tests/unit/scheduler/test_manager.py:L1821–L1824` |
| `SchedulerManagerAllocationCandidateTestCase.DropFirstFilter` | class | — | public | not declared | — | `src/nova/tests/unit/scheduler/test_manager.py:L1826–L1833` |
| `SchedulerManagerAllocationCandidateTestCase.DropFirstFilter.host_passes` | method | (self, host_state, filter_properties) | public | `bool(host_state.allocation_candidates)` (src/nova/tests/unit/scheduler/test_manager.py:L1833) | 1/3 | `src/nova/tests/unit/scheduler/test_manager.py:L1831–L1833` |
| `SchedulerManagerAllocationCandidateTestCase.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/scheduler/test_manager.py:L1839–L1849` |
| `SchedulerManagerAllocationCandidateTestCase.test_filters_see_allocation_candidates_for_each_host` | method | (self, mock_get_all_host_states, mock_consume, mock_selection_from_host_state) | public | not declared | 1/37 | `src/nova/tests/unit/scheduler/test_manager.py:L1860–L1905` |
| `SchedulerManagerAllocationCandidateTestCase.test_scheduler_selects_filtered_a_c_from_hosts_state` | method | (self, mock_get_all_host_states, mock_consume) | public | not declared | 1/31 | `src/nova/tests/unit/scheduler/test_manager.py:L1915–L1958` |
| `SchedulerManagerAllocationCandidateTestCase.test_consecutive_filter_sees_filtered_a_c_list` | method | (self, mock_get_all_host_states, mock_consume, mock_selection_from_host_state) | public | not declared | 1/32 | `src/nova/tests/unit/scheduler/test_manager.py:L1969–L2010` |
| `SchedulerManagerAllocationCandidateTestCase.test_filters_removes_all_a_c_host_is_not_selected` | method | (self, mock_get_all_host_states, mock_consume) | public | not declared | 1/37 | `src/nova/tests/unit/scheduler/test_manager.py:L2020–L2070` |
| `SchedulerManagerAllocationCandidateTestCase.test_consume_selected_host_sees_updated_request_spec` | method | (self, mock_get_all_host_states, mock_consume) | public | not declared | 1/36 | `src/nova/tests/unit/scheduler/test_manager.py:L2080–L2137` |
| `SchedulerManagerAllocationCandidateTestCase.test_consume_selected_host_sees_updated_request_spec.assert_request_spec_updated_with_selected_candidate` | function | (selected_host, spec_obj, instance_uuid=None) | public | not declared | — | `src/nova/tests/unit/scheduler/test_manager.py:L2115–L2123` |
| `SchedulerManagerAllocationCandidateTestCase.test_get_alternate_hosts_returns_main_selection_with_claimed_a_c` | method | (self, mock_get_all_host_states, mock_claim, mock_consume) | public | not declared | 2/52 | `src/nova/tests/unit/scheduler/test_manager.py:L2147–L2215` |
| `SchedulerManagerAllocationCandidateTestCase.test_get_alternate_hosts_returns_alts_with_filtered_a_c` | method | (self, mock_get_all_host_states, mock_claim, mock_consume) | public | not declared | 3/59 | `src/nova/tests/unit/scheduler/test_manager.py:L2225–L2311` |
| `SchedulerManagerAllocationCandidateTestCase.test_get_alternate_hosts_returns_alts_with_filtered_a_c.RPFilter` | class | — | public | not declared | — | `src/nova/tests/unit/scheduler/test_manager.py:L2235–L2248` |
| `SchedulerManagerAllocationCandidateTestCase.test_get_alternate_hosts_returns_alts_with_filtered_a_c.RPFilter.__init__` | method | (self, allowed_rp_uuids) | public | not declared | — | `src/nova/tests/unit/scheduler/test_manager.py:L2238–L2239` |
| `SchedulerManagerAllocationCandidateTestCase.test_get_alternate_hosts_returns_alts_with_filtered_a_c.RPFilter.host_passes` | method | (self, host_state, filter_properties) | public | `True` (src/nova/tests/unit/scheduler/test_manager.py:L2248) | — | `src/nova/tests/unit/scheduler/test_manager.py:L2241–L2248` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/scheduler/test_manager.py:L20)
- `keystoneauth1`: imports `exceptions as ks_exc` (src/nova/tests/unit/scheduler/test_manager.py:L22)
- `import oslo_messaging as messaging` (src/nova/tests/unit/scheduler/test_manager.py:L23)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/scheduler/test_manager.py:L24)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/scheduler/test_manager.py:L25)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/scheduler/test_manager.py:L26)
- `nova`: imports `context` (src/nova/tests/unit/scheduler/test_manager.py:L29)
- `nova`: imports `exception` (src/nova/tests/unit/scheduler/test_manager.py:L30)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/test_manager.py:L31)
- `nova.objects`: imports `service` (src/nova/tests/unit/scheduler/test_manager.py:L32)
- `nova.scheduler`: imports `filters` (src/nova/tests/unit/scheduler/test_manager.py:L33)
- `nova.scheduler`: imports `host_manager` (src/nova/tests/unit/scheduler/test_manager.py:L34)
- `nova.scheduler`: imports `manager` (src/nova/tests/unit/scheduler/test_manager.py:L35)
- `nova.scheduler`: imports `utils as scheduler_utils` (src/nova/tests/unit/scheduler/test_manager.py:L36)
- `nova.scheduler`: imports `weights` (src/nova/tests/unit/scheduler/test_manager.py:L37)
- `nova`: imports `servicegroup` (src/nova/tests/unit/scheduler/test_manager.py:L38)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/test_manager.py:L39)
- `nova.tests.unit`: imports `fake_server_actions` (src/nova/tests/unit/scheduler/test_manager.py:L40)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/test_manager.py:L41)

## Side Effects

- **network**: self, mock_schedule, mock_notify, (src/nova/tests/unit/scheduler/test_manager.py:L1537)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/scheduler/test_manager.py:L1573)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as ks_exc (src/nova/tests/unit/scheduler/test_manager.py:L22)
- **sink** (`db-write`): that we update the request spec's instance group information (src/nova/tests/unit/scheduler/test_manager.py:L909)

