# src/nova/tests/unit/compute/test_host_api.py

## Overview

This file implements the `test_host_api` module, defining 2 classs, 6 functions, 32 methods, 14 imports, 1 side effect, 1 security surface entry.

Lines: total 694, code 589, comment 46, blank 59

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ComputeHostAPITestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_host_api.py:L35–L579` |
| `ComputeHostAPITestCase.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_host_api.py:L36–L45` |
| `ComputeHostAPITestCase._compare_obj` | method | (self, obj, db_obj) | private | not declared | 1/3 | `src/nova/tests/unit/compute/test_host_api.py:L47–L49` |
| `ComputeHostAPITestCase._compare_objs` | method | (self, obj_list, db_obj_list) | private | not declared | 2/5 | `src/nova/tests/unit/compute/test_host_api.py:L51–L55` |
| `ComputeHostAPITestCase.test_set_host_enabled` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_host_api.py:L57–L81` |
| `ComputeHostAPITestCase.test_set_host_enabled._do_test` | function | (mock_assert_host_exists, mock_set_host_enabled) | private | not declared | — | `src/nova/tests/unit/compute/test_host_api.py:L63–L79` |
| `ComputeHostAPITestCase.test_host_name_from_assert_hosts_exists` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_host_api.py:L83–L93` |
| `ComputeHostAPITestCase.test_host_name_from_assert_hosts_exists._do_test` | function | (mock_assert_host_exists, mock_set_host_enabled) | private | not declared | — | `src/nova/tests/unit/compute/test_host_api.py:L88–L91` |
| `ComputeHostAPITestCase.test_get_host_uptime` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_host_api.py:L95–L104` |
| `ComputeHostAPITestCase.test_get_host_uptime._do_test` | function | (mock_assert_host_exists, mock_get_host_uptime) | private | not declared | — | `src/nova/tests/unit/compute/test_host_api.py:L100–L102` |
| `ComputeHostAPITestCase.test_get_host_uptime_service_down` | method | (self, mock_get_service_get_by_compute_host) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_host_api.py:L107–L119` |
| `ComputeHostAPITestCase.test_host_power_action` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_host_api.py:L121–L145` |
| `ComputeHostAPITestCase.test_host_power_action._do_test` | function | (mock_assert_host_exists, mock_host_power_action) | private | not declared | — | `src/nova/tests/unit/compute/test_host_api.py:L127–L143` |
| `ComputeHostAPITestCase.test_set_host_maintenance` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_host_api.py:L147–L171` |
| `ComputeHostAPITestCase.test_set_host_maintenance._do_test` | function | (mock_assert_host_exists, mock_host_maintenance_mode) | private | not declared | — | `src/nova/tests/unit/compute/test_host_api.py:L153–L169` |
| `ComputeHostAPITestCase.test_service_get_all_cells` | method | (self) | public | not declared | 4/10 | `src/nova/tests/unit/compute/test_host_api.py:L173–L182` |
| `ComputeHostAPITestCase.test_service_get_all_cells_with_failures` | method | (self, mock_sg) | public | not declared | 2/10 | `src/nova/tests/unit/compute/test_host_api.py:L185–L195` |
| `ComputeHostAPITestCase.test_service_get_all_cell0_computes` | method | (self, mock_sg) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_host_api.py:L198–L209` |
| `ComputeHostAPITestCase.test_service_get_all_cells_with_minimal_constructs` | method | (self, mock_sg, mock_get_hm, mock_cm_list) | public | not declared | 2/30 | `src/nova/tests/unit/compute/test_host_api.py:L214–L245` |
| `ComputeHostAPITestCase.test_service_get_all_no_zones` | method | (self, mock_service_get_all) | public | not declared | 1/21 | `src/nova/tests/unit/compute/test_host_api.py:L248–L274` |
| `ComputeHostAPITestCase.test_service_get_all` | method | (self, mock_service_get_all) | public | not declared | 2/35 | `src/nova/tests/unit/compute/test_host_api.py:L277–L320` |
| `ComputeHostAPITestCase.test_service_get_by_compute_host` | method | (self, mock_service_get_by_compute_host) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_host_api.py:L325–L330` |
| `ComputeHostAPITestCase.test_service_update_by_host_and_binary` | method | (self, mock_service_update, mock_service_get_by_host_and_binary) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_host_api.py:L334–L354` |
| `ComputeHostAPITestCase.test_service_update_no_update_provider_status` | method | (self, mock_ucps) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_host_api.py:L358–L369` |
| `ComputeHostAPITestCase.test_update_compute_provider_status_service_too_old` | method | (self, mock_she) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_host_api.py:L373–L386` |
| `ComputeHostAPITestCase.test_update_compute_provider_status_service_rpc_error` | method | (self, mock_she) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_host_api.py:L390–L406` |
| `ComputeHostAPITestCase.test_instance_get_all_by_host` | method | (self, mock_get) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_host_api.py:L410–L413` |
| `ComputeHostAPITestCase.test_task_log_get_all` | method | (self, mock_task_log_get_all) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_host_api.py:L417–L422` |
| `ComputeHostAPITestCase.test_service_get_by_id_using_uuid` | method | (self, service_get_by_uuid, cell_mappings_get_all) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_host_api.py:L443–L470` |
| `ComputeHostAPITestCase.test_service_get_by_id_using_uuid._fake_set_target_cell` | function | (ctxt, cell_mapping) | private | not declared | — | `src/nova/tests/unit/compute/test_host_api.py:L452–L458` |
| `ComputeHostAPITestCase.test_service_delete_compute_in_aggregate` | method | (self, mock_hm, mock_get_cn, mock_add_host, mock_remove_host) | public | not declared | 1/26 | `src/nova/tests/unit/compute/test_host_api.py:L478–L504` |
| `ComputeHostAPITestCase.test_compute_node_statistics` | method | (self, mock_cns) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_host_api.py:L507–L518` |
| `ComputeHostAPITestCase.test_compute_node_get_using_uuid` | method | (self, compute_get_by_uuid, cell_mappings_get_all) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_host_api.py:L538–L547` |
| `ComputeHostAPITestCase.test_compute_node_get_not_found` | method | (self, compute_get_by_uuid, cell_mappings_get_all) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_host_api.py:L566–L579` |
| `ComputeAggregateAPITestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_host_api.py:L582–L694` |
| `ComputeAggregateAPITestCase.setUp` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_host_api.py:L583–L599` |
| `ComputeAggregateAPITestCase.test_aggregate_add_host_placement_missing_provider` | method | (self, mock_log, mock_pc_add_host, mock_get_all_by_host) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_host_api.py:L605–L622` |
| `ComputeAggregateAPITestCase.test_aggregate_add_host_bad_placement` | method | (self, mock_pc_add_host, mock_get_all_by_host) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_host_api.py:L627–L642` |
| `ComputeAggregateAPITestCase.test_aggregate_remove_host_bad_placement` | method | (self, mock_pc_remove_host, mock_agg_obj_delete_host, mock_get_all_by_host) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_host_api.py:L648–L667` |
| `ComputeAggregateAPITestCase.test_aggregate_remove_host_placement_missing_provider` | method | (self, mock_log, mock_pc_remove_host, mock_agg_obj_delete_host, mock_get_all_by_host) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_host_api.py:L674–L694` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/compute/test_host_api.py:L17)
- `import fixtures` (src/nova/tests/unit/compute/test_host_api.py:L19)
- `import oslo_messaging as messaging` (src/nova/tests/unit/compute/test_host_api.py:L20)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/compute/test_host_api.py:L21)
- `nova.api.openstack.compute`: imports `services` (src/nova/tests/unit/compute/test_host_api.py:L23)
- `nova.compute`: imports `api as compute` (src/nova/tests/unit/compute/test_host_api.py:L24)
- `nova`: imports `context` (src/nova/tests/unit/compute/test_host_api.py:L25)
- `nova`: imports `exception` (src/nova/tests/unit/compute/test_host_api.py:L26)
- `nova`: imports `objects` (src/nova/tests/unit/compute/test_host_api.py:L27)
- `nova`: imports `test` (src/nova/tests/unit/compute/test_host_api.py:L28)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/compute/test_host_api.py:L29)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/compute/test_host_api.py:L30)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/compute/test_host_api.py:L31)
- `nova.tests.unit.objects`: imports `test_service` (src/nova/tests/unit/compute/test_host_api.py:L32)

## Side Effects

- **network**: from nova.api.openstack.compute import services (src/nova/tests/unit/compute/test_host_api.py:L23)

## Security Surface

- **sink** (`db-write`): exp_service.update(availability_zone='nova', **service) (src/nova/tests/unit/compute/test_host_api.py:L285)

