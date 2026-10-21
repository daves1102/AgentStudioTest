# src/nova/tests/functional/test_unified_limits.py

## Overview

This file implements the `test_unified_limits` module, defining 3 classs, 1 constant, 30 methods, 12 imports, 1 side effect.

Lines: total 497, code 332, comment 102, blank 63

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/test_unified_limits.py:L28–L28` |
| `UnifiedLimitsTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_unified_limits.py:L31–L228` |
| `UnifiedLimitsTest.setUp` | method | (self) | public | not declared | 1/22 | `src/nova/tests/functional/test_unified_limits.py:L33–L56` |
| `UnifiedLimitsTest._setup_services` | method | (self) | private | not declared | 1/3 | `src/nova/tests/functional/test_unified_limits.py:L58–L62` |
| `UnifiedLimitsTest.test_servers` | method | (self) | public | not declared | 3/14 | `src/nova/tests/functional/test_unified_limits.py:L64–L84` |
| `UnifiedLimitsTest.test_vcpu` | method | (self) | public | not declared | 2/18 | `src/nova/tests/functional/test_unified_limits.py:L86–L112` |
| `UnifiedLimitsTest.test_memory_mb` | method | (self) | public | not declared | 2/18 | `src/nova/tests/functional/test_unified_limits.py:L114–L138` |
| `UnifiedLimitsTest.test_disk_gb` | method | (self) | public | not declared | 2/18 | `src/nova/tests/functional/test_unified_limits.py:L140–L164` |
| `UnifiedLimitsTest.test_no_injected_files` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_unified_limits.py:L166–L167` |
| `UnifiedLimitsTest.test_max_injected_files` | method | (self) | public | not declared | 3/11 | `src/nova/tests/functional/test_unified_limits.py:L169–L180` |
| `UnifiedLimitsTest.test_max_injected_file_content_bytes` | method | (self) | public | not declared | 2/8 | `src/nova/tests/functional/test_unified_limits.py:L182–L193` |
| `UnifiedLimitsTest.test_max_injected_file_path_bytes` | method | (self) | public | not declared | 2/8 | `src/nova/tests/functional/test_unified_limits.py:L195–L203` |
| `UnifiedLimitsTest.test_server_group_members` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/test_unified_limits.py:L205–L228` |
| `ResourceStrategyTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_unified_limits.py:L231–L437` |
| `ResourceStrategyTest.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_unified_limits.py:L233–L241` |
| `ResourceStrategyTest.test_invalid_value_in_resource_list` | method | (self) | public | not declared | 2/9 | `src/nova/tests/functional/test_unified_limits.py:L243–L253` |
| `ResourceStrategyTest.test_valid_custom_resource_classes` | method | (self) | public | not declared | 2/4 | `src/nova/tests/functional/test_unified_limits.py:L255–L258` |
| `ResourceStrategyTest.test_invalid_strategy_configuration` | method | (self, mock_log_error) | public | not declared | 1/13 | `src/nova/tests/functional/test_unified_limits.py:L261–L275` |
| `ResourceStrategyTest.test_required_limits_set` | method | (self, mock_log_debug) | public | not declared | 1/18 | `src/nova/tests/functional/test_unified_limits.py:L278–L301` |
| `ResourceStrategyTest.test_some_required_limits_not_set` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/test_unified_limits.py:L303–L320` |
| `ResourceStrategyTest.test_no_required_limits` | method | (self, mock_log_debug) | public | not declared | 1/5 | `src/nova/tests/functional/test_unified_limits.py:L323–L332` |
| `ResourceStrategyTest.test_ignored_limits_set` | method | (self, mock_log_debug) | public | not declared | 1/18 | `src/nova/tests/functional/test_unified_limits.py:L335–L358` |
| `ResourceStrategyTest.test_some_ignored_limits_not_set` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_unified_limits.py:L360–L375` |
| `ResourceStrategyTest.test_no_ignored_limits` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_unified_limits.py:L377–L385` |
| `ResourceStrategyTest.test_all_unlimited` | method | (self) | public | not declared | 2/6 | `src/nova/tests/functional/test_unified_limits.py:L387–L401` |
| `ResourceStrategyTest.test_default_unlimited_but_project_limited` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_unified_limits.py:L403–L418` |
| `ResourceStrategyTest.test_default_limited_but_project_unlimited` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_unified_limits.py:L420–L437` |
| `EndpointDiscoveryTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_unified_limits.py:L440–L497` |
| `EndpointDiscoveryTest.setUp` | method | (self) | public | not declared | 2/12 | `src/nova/tests/functional/test_unified_limits.py:L453–L469` |
| `EndpointDiscoveryTest.test_endpoint_service_type_and_name_not_set` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_unified_limits.py:L471–L476` |
| `EndpointDiscoveryTest.test_endpoint_service_type_set` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_unified_limits.py:L478–L481` |
| `EndpointDiscoveryTest.test_endpoint_service_name_set` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_unified_limits.py:L483–L486` |
| `EndpointDiscoveryTest.test_endpoint_service_type_and_name_set` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_unified_limits.py:L488–L491` |
| `EndpointDiscoveryTest.test_endpoint_region_name_set` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_unified_limits.py:L493–L497` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/functional/test_unified_limits.py:L13)
- `oslo_limit`: imports `fixture as limit_fixture` (src/nova/tests/functional/test_unified_limits.py:L15)
- `oslo_serialization`: imports `base64` (src/nova/tests/functional/test_unified_limits.py:L16)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/test_unified_limits.py:L17)
- `import nova.conf` (src/nova/tests/functional/test_unified_limits.py:L19)
- `nova`: imports `context as nova_context` (src/nova/tests/functional/test_unified_limits.py:L20)
- `nova.limit`: imports `local as local_limit` (src/nova/tests/functional/test_unified_limits.py:L21)
- `nova.objects`: imports `flavor as flavor_obj` (src/nova/tests/functional/test_unified_limits.py:L22)
- `nova.objects`: imports `instance_group as group_obj` (src/nova/tests/functional/test_unified_limits.py:L23)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/test_unified_limits.py:L24)
- `nova.tests.functional.api`: imports `client` (src/nova/tests/functional/test_unified_limits.py:L25)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_unified_limits.py:L26)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/functional/test_unified_limits.py:L28)

