# src/nova/tests/functional/api_sample_tests/test_services.py

## Overview

This file implements the `test_services` module, defining 4 classs, 2 constants, 9 fields, 8 functions, 16 methods, 7 imports, 3 side effects.

Lines: total 255, code 200, comment 19, blank 36

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServicesJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_services.py:L26–L88` |
| `ServicesJsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_services.py:L27–L27` |
| `ServicesJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_services.py:L28–L28` |
| `ServicesJsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_services.py:L29–L29` |
| `ServicesJsonTest.setUp` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/api_sample_tests/test_services.py:L31–L46` |
| `ServicesJsonTest.test_services_list` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_services.py:L48–L56` |
| `ServicesJsonTest.test_service_enable` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_services.py:L58–L64` |
| `ServicesJsonTest.test_service_disable` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_services.py:L66–L72` |
| `ServicesJsonTest.test_service_disable_log_reason` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_services.py:L74–L82` |
| `ServicesJsonTest.test_service_delete` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_services.py:L84–L88` |
| `ServicesV211JsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_services.py:L91–L116` |
| `ServicesV211JsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_services.py:L92–L92` |
| `ServicesV211JsonTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_services.py:L95–L95` |
| `ServicesV211JsonTest.test_services_list` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/api_sample_tests/test_services.py:L97–L106` |
| `ServicesV211JsonTest.test_force_down` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_services.py:L108–L116` |
| `ServicesV253JsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_services.py:L119–L212` |
| `ServicesV253JsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_services.py:L120–L120` |
| `ServicesV253JsonTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_services.py:L121–L121` |
| `ServicesV253JsonTest.setUp` | method | (self) | public | not declared | 1/25 | `src/nova/tests/functional/api_sample_tests/test_services.py:L123–L173` |
| `ServicesV253JsonTest.setUp.db_service_get_by_uuid` | function | (ctxt, service_uuid) | public | `svc` (src/nova/tests/functional/api_sample_tests/test_services.py:L129) | — | `src/nova/tests/functional/api_sample_tests/test_services.py:L126–L130` |
| `ServicesV253JsonTest.setUp.fake_cn_get_all_by_host` | function | (context, host) | public | `[cn]` (src/nova/tests/functional/api_sample_tests/test_services.py:L136) | — | `src/nova/tests/functional/api_sample_tests/test_services.py:L132–L136` |
| `ServicesV253JsonTest.setUp.fake_hm_get_by_host` | function | (context, host) | public | `hm` (src/nova/tests/functional/api_sample_tests/test_services.py:L141) | — | `src/nova/tests/functional/api_sample_tests/test_services.py:L138–L141` |
| `ServicesV253JsonTest.setUp.fake_hm_destroy` | function | (context, host) | public | `1` (src/nova/tests/functional/api_sample_tests/test_services.py:L144) | — | `src/nova/tests/functional/api_sample_tests/test_services.py:L143–L144` |
| `ServicesV253JsonTest.setUp.fake_get_providers_in_tree` | function | (self, context, compute_node_id) | public | `[{ 'uuid': compute_node_id, 'name': 'test', 'generation': 1, 'parent_provider_uuid': None }]` (src/nova/tests/functional/api_sample_tests/test_services.py:L147) | — | `src/nova/tests/functional/api_sample_tests/test_services.py:L146–L152` |
| `ServicesV253JsonTest.setUp.fake_get_provider_uuids_in_tree` | function | (context, compute_node_id) | public | `[compute_node_id]` (src/nova/tests/functional/api_sample_tests/test_services.py:L155) | — | `src/nova/tests/functional/api_sample_tests/test_services.py:L154–L155` |
| `ServicesV253JsonTest.test_service_enable` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_services.py:L175–L180` |
| `ServicesV253JsonTest.test_service_disable` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_services.py:L182–L187` |
| `ServicesV253JsonTest.test_service_disable_log_reason` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_services.py:L189–L196` |
| `ServicesV253JsonTest.test_service_delete` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_services.py:L198–L203` |
| `ServicesV253JsonTest.test_force_down` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_services.py:L205–L212` |
| `ServicesV269JsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_services.py:L215–L255` |
| `ServicesV269JsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_services.py:L216–L216` |
| `ServicesV269JsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_services.py:L217–L217` |
| `ServicesV269JsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_services.py:L218–L218` |
| `ServicesV269JsonTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_services.py:L219–L219` |
| `ServicesV269JsonTest.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_services.py:L221–L248` |
| `ServicesV269JsonTest.setUp._fake_cell_list` | function | (*args, **kwargs) | private | `[{'id': 1, 'updated_at': None, 'created_at': None, 'uuid': utils_fixture.uuidsentinel.cell1, 'name': 'onlycell', 'transport_url': 'fake://nowhere/', 'database_connection': 'sqlite:///', 'disabled': Fa` (src/nova/tests/functional/api_sample_tests/test_services.py:L225) | — | `src/nova/tests/functional/api_sample_tests/test_services.py:L224–L232` |
| `ServicesV269JsonTest.setUp.fake_hostmappinglist_get` | function | (*args, **kwargs) | public | `[{'id': 1, 'updated_at': None, 'created_at': None, 'host': 'host1', 'cell_mapping': cm}, {'id': 2, 'updated_at': None, 'created_at': None, 'host': 'host2', 'cell_mapping': cm}]` (src/nova/tests/functional/api_sample_tests/test_services.py:L236) | — | `src/nova/tests/functional/api_sample_tests/test_services.py:L234–L245` |
| `ServicesV269JsonTest.test_get_services_from_down_cells` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_services.py:L250–L255` |

## Dependencies

- `oslo_utils`: imports `fixture as utils_fixture` (src/nova/tests/functional/api_sample_tests/test_services.py:L16)
- `nova`: imports `exception` (src/nova/tests/functional/api_sample_tests/test_services.py:L18)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/api_sample_tests/test_services.py:L19)
- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/api_sample_tests/test_services.py:L20)
- `nova.tests.unit.api.openstack.compute`: imports `test_services` (src/nova/tests/functional/api_sample_tests/test_services.py:L21)
- `nova.tests.unit.objects`: imports `test_compute_node` (src/nova/tests/functional/api_sample_tests/test_services.py:L22)
- `nova.tests.unit.objects`: imports `test_host_mapping` (src/nova/tests/functional/api_sample_tests/test_services.py:L23)

## Side Effects

- **network**: from nova.tests.unit.api.openstack.compute import test_services (src/nova/tests/functional/api_sample_tests/test_services.py:L21)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_services.py:L27)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_services.py:L216)

