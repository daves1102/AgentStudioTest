# src/nova/tests/unit/scheduler/test_host_manager.py

## Overview

This file implements the `test_host_manager` module, defining 5 classs, 3 functions, 72 methods, 21 imports, 8 security surface entries.

Lines: total 1711, code 1436, comment 84, blank 191

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FakeFilterClass1` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_host_manager.py:L44–L46` |
| `FakeFilterClass1.host_passes` | method | (self, host_state, filter_properties) | public | not declared | 1/2 | `src/nova/tests/unit/scheduler/test_host_manager.py:L45–L46` |
| `FakeFilterClass2` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_host_manager.py:L49–L51` |
| `FakeFilterClass2.host_passes` | method | (self, host_state, filter_properties) | public | not declared | 1/2 | `src/nova/tests/unit/scheduler/test_host_manager.py:L50–L51` |
| `HostManagerTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_host_manager.py:L54–L1252` |
| `HostManagerTestCase.setUp` | method | (self, mock_init_agg, mock_init_inst) | public | not declared | 3/14 | `src/nova/tests/unit/scheduler/test_host_manager.py:L59–L73` |
| `HostManagerTestCase.test_load_filters` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/test_host_manager.py:L75–L77` |
| `HostManagerTestCase.test_refresh_cells_caches` | method | (self) | public | not declared | 1/33 | `src/nova/tests/unit/scheduler/test_host_manager.py:L79–L119` |
| `HostManagerTestCase.test_refresh_cells_caches_except_cell0` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/scheduler/test_host_manager.py:L121–L135` |
| `HostManagerTestCase.test_get_cell_mapping_for_host` | method | (self, mock_get_by_host) | public | not declared | 1/24 | `src/nova/tests/unit/scheduler/test_host_manager.py:L140–L175` |
| `HostManagerTestCase.test_init_instance_info_batches` | method | (self, mock_get_all, mock_get_by_filters) | public | not declared | 2/9 | `src/nova/tests/unit/scheduler/test_host_manager.py:L179–L187` |
| `HostManagerTestCase.test_init_instance_info` | method | (self, mock_get_all, mock_get_by_filters) | public | not declared | 1/20 | `src/nova/tests/unit/scheduler/test_host_manager.py:L191–L210` |
| `HostManagerTestCase.test_init_instance_info_compute_nodes` | method | (self, mock_get_all, mock_get_by_filters) | public | not declared | 1/23 | `src/nova/tests/unit/scheduler/test_host_manager.py:L214–L237` |
| `HostManagerTestCase.test_enabled_filters` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/test_host_manager.py:L239–L242` |
| `HostManagerTestCase.test_init_aggregates_no_aggs` | method | (self, agg_get_all, mock_init_info) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/test_host_manager.py:L246–L250` |
| `HostManagerTestCase.test_init_aggregates_one_agg_no_hosts` | method | (self, agg_get_all, mock_init_info) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/test_host_manager.py:L254–L260` |
| `HostManagerTestCase.test_init_aggregates_one_agg_with_hosts` | method | (self, agg_get_all, mock_init_info) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/test_host_manager.py:L264–L271` |
| `HostManagerTestCase.test_update_aggregates` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/test_host_manager.py:L273–L278` |
| `HostManagerTestCase.test_update_aggregates_remove_hosts` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/scheduler/test_host_manager.py:L280–L291` |
| `HostManagerTestCase.test_delete_aggregate` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/test_host_manager.py:L293–L301` |
| `HostManagerTestCase.test_choose_host_filters_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/test_host_manager.py:L303–L306` |
| `HostManagerTestCase.test_choose_host_filters` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/test_host_manager.py:L308–L313` |
| `HostManagerTestCase._mock_get_filtered_hosts` | method | (self, info) | private | not declared | 1/6 | `src/nova/tests/unit/scheduler/test_host_manager.py:L315–L325` |
| `HostManagerTestCase._mock_get_filtered_hosts.fake_filter_one` | function | (_self, obj, filter_props) | public | `True` (src/nova/tests/unit/scheduler/test_host_manager.py:L322) | — | `src/nova/tests/unit/scheduler/test_host_manager.py:L319–L322` |
| `HostManagerTestCase._verify_result` | method | (self, info, result, filters=True) | private | not declared | 3/6 | `src/nova/tests/unit/scheduler/test_host_manager.py:L327–L332` |
| `HostManagerTestCase.test_get_filtered_hosts` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/scheduler/test_host_manager.py:L334–L347` |
| `HostManagerTestCase.test_get_filtered_hosts_with_requested_destination` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/scheduler/test_host_manager.py:L349–L364` |
| `HostManagerTestCase.test_get_filtered_hosts_with_wrong_requested_destination` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/scheduler/test_host_manager.py:L366–L381` |
| `HostManagerTestCase.test_get_filtered_hosts_with_ignore` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/scheduler/test_host_manager.py:L383–L398` |
| `HostManagerTestCase.test_get_filtered_hosts_with_ignore_case_insensitive` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/scheduler/test_host_manager.py:L400–L414` |
| `HostManagerTestCase.test_get_filtered_hosts_with_force_hosts` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/scheduler/test_host_manager.py:L416–L430` |
| `HostManagerTestCase.test_get_filtered_hosts_with_force_case_insensitive` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/scheduler/test_host_manager.py:L432–L448` |
| `HostManagerTestCase.test_get_filtered_hosts_with_no_matching_force_hosts` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/scheduler/test_host_manager.py:L450–L467` |
| `HostManagerTestCase.test_get_filtered_hosts_with_ignore_and_force_hosts` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/scheduler/test_host_manager.py:L469–L484` |
| `HostManagerTestCase.test_get_filtered_hosts_with_force_host_and_many_nodes` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/scheduler/test_host_manager.py:L486–L501` |
| `HostManagerTestCase.test_get_filtered_hosts_with_force_nodes` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/scheduler/test_host_manager.py:L503–L517` |
| `HostManagerTestCase.test_get_filtered_hosts_with_force_hosts_and_nodes` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/scheduler/test_host_manager.py:L519–L534` |
| `HostManagerTestCase.test_get_filtered_hosts_with_force_hosts_and_wrong_nodes` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/scheduler/test_host_manager.py:L536–L550` |
| `HostManagerTestCase.test_get_filtered_hosts_with_ignore_hosts_and_force_nodes` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/scheduler/test_host_manager.py:L552–L566` |
| `HostManagerTestCase.test_get_filtered_hosts_with_ignore_hosts_and_force_same_nodes` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/scheduler/test_host_manager.py:L568–L582` |
| `HostManagerTestCase.test_get_host_states` | method | (self, mock_get_by_host, mock_get_all, mock_get_by_binary, mock_log) | public | not declared | 4/49 | `src/nova/tests/unit/scheduler/test_host_manager.py:L588–L646` |
| `HostManagerTestCase.test_get_host_states_with_no_aggs` | method | (self, svc_get_by_binary, cn_get_all, update_from_cn, mock_get_by_host) | public | not declared | 3/23 | `src/nova/tests/unit/scheduler/test_host_manager.py:L652–L677` |
| `HostManagerTestCase.test_get_host_states_with_matching_aggs` | method | (self, svc_get_by_binary, cn_get_all, update_from_cn, mock_get_by_host) | public | not declared | 3/27 | `src/nova/tests/unit/scheduler/test_host_manager.py:L683–L712` |
| `HostManagerTestCase.test_get_host_states_with_not_matching_aggs` | method | (self, svc_get_by_binary, cn_get_all, update_from_cn, mock_get_by_host) | public | not declared | 3/29 | `src/nova/tests/unit/scheduler/test_host_manager.py:L718–L749` |
| `HostManagerTestCase.test_get_host_states_corrupt_aggregates_info` | method | (self, svc_get_by_binary, cn_get_all, update_from_cn, mock_get_by_host) | public | not declared | 2/30 | `src/nova/tests/unit/scheduler/test_host_manager.py:L756–L797` |
| `HostManagerTestCase.test_host_state_update` | method | (self, mock_get_by_host) | public | not declared | 1/15 | `src/nova/tests/unit/scheduler/test_host_manager.py:L800–L814` |
| `HostManagerTestCase.test_host_state_not_updated` | method | (self, mock_get_by_host) | public | not declared | 1/18 | `src/nova/tests/unit/scheduler/test_host_manager.py:L817–L834` |
| `HostManagerTestCase.test_recreate_instance_info` | method | (self, mock_get_by_host) | public | not declared | 1/19 | `src/nova/tests/unit/scheduler/test_host_manager.py:L837–L855` |
| `HostManagerTestCase.test_update_instance_info` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/scheduler/test_host_manager.py:L857–L882` |
| `HostManagerTestCase.test_update_instance_info_unknown_host` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/scheduler/test_host_manager.py:L884–L910` |
| `HostManagerTestCase.test_update_instance_info_unknown_host_mapping_not_found` | method | (self, get_by_host) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/test_host_manager.py:L914–L927` |
| `HostManagerTestCase.test_delete_instance_info` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/scheduler/test_host_manager.py:L929–L947` |
| `HostManagerTestCase.test_delete_instance_info_unknown_host` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/scheduler/test_host_manager.py:L949–L971` |
| `HostManagerTestCase.test_sync_instance_info` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/scheduler/test_host_manager.py:L973–L993` |
| `HostManagerTestCase.test_sync_instance_info_fail` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/scheduler/test_host_manager.py:L995–L1016` |
| `HostManagerTestCase.test_get_computes_for_cells` | method | (self, mock_sl, mock_cn, mock_cm) | public | not declared | 3/26 | `src/nova/tests/unit/scheduler/test_host_manager.py:L1021–L1046` |
| `HostManagerTestCase.test_get_computes_for_cells_uuid` | method | (self, mock_sl, mock_cn, mock_cm) | public | not declared | 3/26 | `src/nova/tests/unit/scheduler/test_host_manager.py:L1051–L1076` |
| `HostManagerTestCase.test_get_computes_for_cells_limit_to_cell` | method | (self, mock_sl, mock_cn, mock_cm, mock_target) | public | not declared | 5/35 | `src/nova/tests/unit/scheduler/test_host_manager.py:L1082–L1124` |
| `HostManagerTestCase.test_get_computes_for_cells_limit_to_cell.fake_set_target` | function | (context, cell) | public | not declared | — | `src/nova/tests/unit/scheduler/test_host_manager.py:L1102–L1103` |
| `HostManagerTestCase.test_get_computes_for_cells_failures` | method | (self, mock_sg) | public | not declared | 1/13 | `src/nova/tests/unit/scheduler/test_host_manager.py:L1127–L1140` |
| `HostManagerTestCase.test_get_compute_nodes_by_host_or_node` | method | (self, mock_get_all, mock_get_host_node, mock_get_node, mock_get_hm) | public | not declared | 1/51 | `src/nova/tests/unit/scheduler/test_host_manager.py:L1146–L1217` |
| `HostManagerTestCase.test_get_compute_nodes_by_host_or_node._varify_result` | function | (expected, result) | private | not declared | — | `src/nova/tests/unit/scheduler/test_host_manager.py:L1148–L1152` |
| `HostManagerTestCase.test_get_compute_nodes_by_host_or_node_empty_list` | method | (self, mock_get_all, mock_get_hm) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/test_host_manager.py:L1221–L1234` |
| `HostManagerTestCase.test_get_compute_nodes_by_host_or_node_filter_errors` | method | (self, mock_sgc) | public | not declared | 2/10 | `src/nova/tests/unit/scheduler/test_host_manager.py:L1240–L1252` |
| `HostManagerChangedNodesTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_host_manager.py:L1255–L1409` |
| `HostManagerChangedNodesTestCase.setUp` | method | (self, mock_init_agg, mock_init_inst) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/test_host_manager.py:L1260–L1262` |
| `HostManagerChangedNodesTestCase.test_get_host_states` | method | (self, mock_get_by_host, mock_get_all, mock_get_by_binary) | public | not declared | 3/14 | `src/nova/tests/unit/scheduler/test_host_manager.py:L1267–L1283` |
| `HostManagerChangedNodesTestCase.test_get_host_states_after_delete_one` | method | (self, mock_get_by_host, mock_get_all, mock_get_by_binary) | public | not declared | 8/29 | `src/nova/tests/unit/scheduler/test_host_manager.py:L1288–L1322` |
| `HostManagerChangedNodesTestCase.test_get_host_states_after_delete_all` | method | (self, mock_get_by_host, mock_get_all, mock_get_by_binary) | public | not declared | 5/25 | `src/nova/tests/unit/scheduler/test_host_manager.py:L1327–L1356` |
| `HostManagerChangedNodesTestCase.test_get_host_states_by_uuids` | method | (self, mock_get_by_host, mock_get_all, mock_get_by_binary) | public | not declared | 1/15 | `src/nova/tests/unit/scheduler/test_host_manager.py:L1361–L1386` |
| `HostManagerChangedNodesTestCase.test_get_host_states_by_uuids_allow_cross_cell_move` | method | (self, mock_get_host_states, mock_get_computes) | public | not declared | 1/14 | `src/nova/tests/unit/scheduler/test_host_manager.py:L1393–L1409` |
| `HostStateTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_host_manager.py:L1412–L1711` |
| `HostStateTestCase.test_stat_consumption_from_compute_node` | method | (self, sync_mock) | public | not declared | 1/39 | `src/nova/tests/unit/scheduler/test_host_manager.py:L1420–L1462` |
| `HostStateTestCase.test_stat_consumption_from_compute_node_non_pci` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/scheduler/test_host_manager.py:L1464–L1496` |
| `HostStateTestCase.test_stat_consumption_from_compute_node_rescue_unshelving` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/scheduler/test_host_manager.py:L1498–L1535` |
| `HostStateTestCase.test_stat_consumption_from_instance` | method | (self, numa_fit_mock, instance_init_mock, numa_usage_mock, sync_mock) | public | not declared | 1/49 | `src/nova/tests/unit/scheduler/test_host_manager.py:L1542–L1594` |
| `HostStateTestCase.test_stat_consumption_from_instance_pci` | method | (self) | public | not declared | 2/34 | `src/nova/tests/unit/scheduler/test_host_manager.py:L1596–L1632` |
| `HostStateTestCase.test_stat_consumption_from_instance_with_pci_exception` | method | (self) | public | not declared | 2/25 | `src/nova/tests/unit/scheduler/test_host_manager.py:L1634–L1658` |
| `HostStateTestCase.test_resources_consumption_from_compute_node` | method | (self) | public | not declared | 1/39 | `src/nova/tests/unit/scheduler/test_host_manager.py:L1660–L1699` |
| `HostStateTestCase.test_stat_consumption_from_compute_node_not_ready` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/test_host_manager.py:L1701–L1711` |

## Dependencies

- `import collections` (src/nova/tests/unit/scheduler/test_host_manager.py:L19)
- `import contextlib` (src/nova/tests/unit/scheduler/test_host_manager.py:L20)
- `import datetime` (src/nova/tests/unit/scheduler/test_host_manager.py:L21)
- `unittest`: imports `mock` (src/nova/tests/unit/scheduler/test_host_manager.py:L22)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/scheduler/test_host_manager.py:L24)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/scheduler/test_host_manager.py:L25)
- `oslo_utils`: imports `versionutils` (src/nova/tests/unit/scheduler/test_host_manager.py:L26)
- `import nova` (src/nova/tests/unit/scheduler/test_host_manager.py:L28)
- `nova.compute`: imports `task_states` (src/nova/tests/unit/scheduler/test_host_manager.py:L29)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/scheduler/test_host_manager.py:L30)
- `nova`: imports `context as nova_context` (src/nova/tests/unit/scheduler/test_host_manager.py:L31)
- `nova`: imports `exception` (src/nova/tests/unit/scheduler/test_host_manager.py:L32)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/test_host_manager.py:L33)
- `nova.objects`: imports `base as obj_base` (src/nova/tests/unit/scheduler/test_host_manager.py:L34)
- `nova.pci`: imports `stats as pci_stats` (src/nova/tests/unit/scheduler/test_host_manager.py:L35)
- `nova.scheduler`: imports `filters` (src/nova/tests/unit/scheduler/test_host_manager.py:L36)
- `nova.scheduler`: imports `host_manager` (src/nova/tests/unit/scheduler/test_host_manager.py:L37)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/test_host_manager.py:L38)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/scheduler/test_host_manager.py:L39)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/scheduler/test_host_manager.py:L40)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/test_host_manager.py:L41)

## Security Surface

- **sink** (`db-write`): host_state.update( (src/nova/tests/unit/scheduler/test_host_manager.py:L810)
- **sink** (`db-write`): host_state.update( (src/nova/tests/unit/scheduler/test_host_manager.py:L827)
- **sink** (`db-write`): update = objects.InstanceList(objects=[inst3, inst4]) (src/nova/tests/unit/scheduler/test_host_manager.py:L877)
- **sink** (`db-write`): update) (src/nova/tests/unit/scheduler/test_host_manager.py:L879)
- **sink** (`db-write`): host.update(compute=compute) (src/nova/tests/unit/scheduler/test_host_manager.py:L1450)
- **sink** (`db-write`): host.update(compute=compute) (src/nova/tests/unit/scheduler/test_host_manager.py:L1494)
- **sink** (`db-write`): host.update(compute=compute) (src/nova/tests/unit/scheduler/test_host_manager.py:L1528)
- **sink** (`db-write`): host.update(compute=compute) (src/nova/tests/unit/scheduler/test_host_manager.py:L1689)

