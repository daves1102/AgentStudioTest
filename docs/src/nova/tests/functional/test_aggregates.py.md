# src/nova/tests/functional/test_aggregates.py

## Overview

This file implements the `test_aggregates` module, defining 13 classs, 2 constants, 3 fields, 1 function, 66 methods, 3 staticmethods, 9 imports, 2 side effects, 3 security surface entries.

Lines: total 1110, code 771, comment 154, blank 185

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/test_aggregates.py:L24–L24` |
| `AggregatesTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_aggregates.py:L27–L52` |
| `AggregatesTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/test_aggregates.py:L28–L28` |
| `AggregatesTest._add_hosts_to_aggregate` | method | (self) | private | `len(compute_services)` (src/nova/tests/functional/test_aggregates.py:L40) | 4/9 | `src/nova/tests/functional/test_aggregates.py:L30–L40` |
| `AggregatesTest.test_add_hosts` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_aggregates.py:L42–L44` |
| `AggregatesTest.test_add_unmapped_host` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_aggregates.py:L46–L52` |
| `AggregatesV281Test` | class | — | exported | not declared | — | `src/nova/tests/functional/test_aggregates.py:L55–L148` |
| `AggregatesV281Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_aggregates.py:L56–L56` |
| `AggregatesV281Test.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_aggregates.py:L58–L60` |
| `AggregatesV281Test.test_cache_images_on_aggregate` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_aggregates.py:L62–L75` |
| `AggregatesV281Test.test_cache_images_on_aggregate_missing_image` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_aggregates.py:L77–L86` |
| `AggregatesV281Test.test_cache_images_on_missing_aggregate` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_aggregates.py:L88–L94` |
| `AggregatesV281Test.test_cache_images_with_duplicates` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_aggregates.py:L96–L105` |
| `AggregatesV281Test.test_cache_images_with_no_images` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_aggregates.py:L107–L112` |
| `AggregatesV281Test.test_cache_images_with_additional_in_image` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_aggregates.py:L114–L122` |
| `AggregatesV281Test.test_cache_images_with_missing_image_id` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_aggregates.py:L124–L131` |
| `AggregatesV281Test.test_cache_images_with_missing_cache` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_aggregates.py:L133–L138` |
| `AggregatesV281Test.test_cache_images_with_additional_in_cache` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_aggregates.py:L140–L148` |
| `AggregateRequestFiltersTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_aggregates.py:L151–L290` |
| `AggregateRequestFiltersTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_aggregates.py:L153–L153` |
| `AggregateRequestFiltersTest.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_aggregates.py:L154–L154` |
| `AggregateRequestFiltersTest.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_aggregates.py:L156–L175` |
| `AggregateRequestFiltersTest._create_aggregate` | method | (self, name) | private | not declared | 1/3 | `src/nova/tests/functional/test_aggregates.py:L177–L179` |
| `AggregateRequestFiltersTest._get_provider_uuid_by_host` | method | (self, host) | private | `resp['hypervisors'][0]['id']` (src/nova/tests/functional/test_aggregates.py:L187) | 1/4 | `src/nova/tests/functional/test_aggregates.py:L181–L187` |
| `AggregateRequestFiltersTest._add_host_to_aggregate` | method | (self, agg, host) | private | not declared | 1/3 | `src/nova/tests/functional/test_aggregates.py:L189–L196` |
| `AggregateRequestFiltersTest._remove_host_from_aggregate` | method | (self, agg, host) | private | not declared | 1/3 | `src/nova/tests/functional/test_aggregates.py:L198–L205` |
| `AggregateRequestFiltersTest._boot_server` | method | (self, az=None, host=None, flavor_id=None, image_id=None, end_status='ACTIVE') | private | `server` (src/nova/tests/functional/test_aggregates.py:L220) | 3/12 | `src/nova/tests/functional/test_aggregates.py:L207–L220` |
| `AggregateRequestFiltersTest._get_instance_host` | method | (self, server) | private | `srv['OS-EXT-SRV-ATTR:host']` (src/nova/tests/functional/test_aggregates.py:L224) | 1/3 | `src/nova/tests/functional/test_aggregates.py:L222–L224` |
| `AggregateRequestFiltersTest._set_az_aggregate` | method | (self, agg, az) | private | not declared | 1/10 | `src/nova/tests/functional/test_aggregates.py:L226–L240` |
| `AggregateRequestFiltersTest._set_metadata` | method | (self, agg, metadata) | private | not declared | 1/8 | `src/nova/tests/functional/test_aggregates.py:L242–L256` |
| `AggregateRequestFiltersTest._grant_tenant_aggregate` | method | (self, agg, tenants) | private | not declared | 2/11 | `src/nova/tests/functional/test_aggregates.py:L258–L273` |
| `AggregateRequestFiltersTest._set_traits_on_aggregate` | method | (self, agg, traits) | private | not declared | 2/11 | `src/nova/tests/functional/test_aggregates.py:L275–L290` |
| `AggregatePostTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_aggregates.py:L293–L351` |
| `AggregatePostTest.test_set_az_for_aggregate_no_instances` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_aggregates.py:L295–L301` |
| `AggregatePostTest.test_rename_to_same_az` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_aggregates.py:L303–L308` |
| `AggregatePostTest.test_fail_set_az` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/test_aggregates.py:L310–L338` |
| `AggregatePostTest.test_cannot_delete_az` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_aggregates.py:L340–L351` |
| `AggregateHostMoveTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/test_aggregates.py:L354–L470` |
| `AggregateHostMoveTestCase.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_aggregates.py:L356–L367` |
| `AggregateHostMoveTestCase.test_add_host_with_instances_default_az_doesnt_change` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_aggregates.py:L369–L375` |
| `AggregateHostMoveTestCase.test_add_host_with_instances_custom_az_doesnt_change` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_aggregates.py:L377–L384` |
| `AggregateHostMoveTestCase.test_cannot_add_host_with_instances_default_az_then_custom_az` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/test_aggregates.py:L386–L406` |
| `AggregateHostMoveTestCase.test_add_host_with_instances_custom_az_then_default` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_aggregates.py:L408–L415` |
| `AggregateHostMoveTestCase.test_remove_host_with_instances_default_az_doesnt_change` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_aggregates.py:L417–L427` |
| `AggregateHostMoveTestCase.test_remove_host_with_instances_custom_az_doesnt_change` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_aggregates.py:L429–L436` |
| `AggregateHostMoveTestCase.test_cannot_remove_host_with_instances_custom_az_to_default` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/test_aggregates.py:L438–L458` |
| `AggregateHostMoveTestCase.test_moving_host_around_az_without_instances` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_aggregates.py:L460–L470` |
| `AggregatePutTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_aggregates.py:L475–L489` |
| `AggregatePutTest._set_az_aggregate` | method | (self, agg, az) | private | not declared | 1/8 | `src/nova/tests/functional/test_aggregates.py:L477–L489` |
| `TenantAggregateFilterTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_aggregates.py:L492–L562` |
| `TenantAggregateFilterTest.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_aggregates.py:L493–L500` |
| `TenantAggregateFilterTest.test_tenant_id_required_fails_if_no_aggregate` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_aggregates.py:L502–L505` |
| `TenantAggregateFilterTest.test_tenant_id_not_required_succeeds_if_no_aggregate` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_aggregates.py:L507–L512` |
| `TenantAggregateFilterTest.test_filter_honors_tenant_id` | method | (self) | public | not declared | 2/16 | `src/nova/tests/functional/test_aggregates.py:L514–L538` |
| `TenantAggregateFilterTest.test_filter_with_empty_aggregate` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_aggregates.py:L540–L546` |
| `TenantAggregateFilterTest.test_filter_with_multiple_aggregates_for_tenant` | method | (self) | public | not declared | 2/9 | `src/nova/tests/functional/test_aggregates.py:L548–L562` |
| `IsolateAggregateFilterTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_aggregates.py:L565–L787` |
| `IsolateAggregateFilterTest.setUp` | method | (self) | public | not declared | 1/24 | `src/nova/tests/functional/test_aggregates.py:L566–L599` |
| `IsolateAggregateFilterTest.test_filter_with_no_valid_host` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/test_aggregates.py:L601–L625` |
| `IsolateAggregateFilterTest.test_filter_without_trait` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_aggregates.py:L627–L643` |
| `IsolateAggregateFilterTest.test_filter_with_trait_on_flavor` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/test_aggregates.py:L645–L666` |
| `IsolateAggregateFilterTest.test_filter_with_common_trait_on_aggregates` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/test_aggregates.py:L668–L689` |
| `IsolateAggregateFilterTest.test_filter_with_traits_on_image_and_flavor` | method | (self) | public | not declared | 1/21 | `src/nova/tests/functional/test_aggregates.py:L691–L722` |
| `IsolateAggregateFilterTest.test_filter_with_traits_image_flavor_subset_of_aggregates` | method | (self) | public | not declared | 1/21 | `src/nova/tests/functional/test_aggregates.py:L724–L754` |
| `IsolateAggregateFilterTest.test_filter_with_traits_image_flavor_disjoint_of_aggregates` | method | (self) | public | not declared | 1/21 | `src/nova/tests/functional/test_aggregates.py:L756–L787` |
| `IsolateAggregateFilterTestWithConcernFilters` | class | — | exported | not declared | — | `src/nova/tests/functional/test_aggregates.py:L790–L803` |
| `IsolateAggregateFilterTestWithConcernFilters.setUp` | method | (self) | public | not declared | 3/8 | `src/nova/tests/functional/test_aggregates.py:L791–L803` |
| `IsolateAggregateFilterTestWOConcernFilters` | class | — | exported | not declared | — | `src/nova/tests/functional/test_aggregates.py:L806–L819` |
| `IsolateAggregateFilterTestWOConcernFilters.setUp` | method | (self) | public | not declared | 3/8 | `src/nova/tests/functional/test_aggregates.py:L807–L819` |
| `TestAggregateFiltersTogether` | class | — | exported | not declared | — | `src/nova/tests/functional/test_aggregates.py:L822–L920` |
| `TestAggregateFiltersTogether.setUp` | method | (self) | public | not declared | 3/24 | `src/nova/tests/functional/test_aggregates.py:L823–L861` |
| `TestAggregateFiltersTogether.test_tenant_with_az_match` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_aggregates.py:L863–L873` |
| `TestAggregateFiltersTogether.test_tenant_with_az_mismatch` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_aggregates.py:L875–L885` |
| `TestAggregateFiltersTogether.test_tenant_with_az_and_traits_match` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_aggregates.py:L887–L901` |
| `TestAggregateFiltersTogether.test_tenant_with_az_and_traits_mismatch` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/test_aggregates.py:L903–L920` |
| `TestAggregateMultiTenancyIsolationFilter` | class | — | exported | not declared | — | `src/nova/tests/functional/test_aggregates.py:L923–L998` |
| `TestAggregateMultiTenancyIsolationFilter.setUp` | method | (self) | public | not declared | 2/17 | `src/nova/tests/functional/test_aggregates.py:L926–L947` |
| `TestAggregateMultiTenancyIsolationFilter.test_aggregate_multitenancy_isolation_filter` | method | (self) | public | not declared | 1/25 | `src/nova/tests/functional/test_aggregates.py:L949–L998` |
| `TestAggregateMultiTenancyIsolationFilter.test_aggregate_multitenancy_isolation_filter.spy_get_filtered_hosts` | function | (*args, **kwargs) | public | `self.filtered_hosts` (src/nova/tests/functional/test_aggregates.py:L976) | — | `src/nova/tests/functional/test_aggregates.py:L974–L976` |
| `AggregateMultiTenancyIsolationColdMigrateTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_aggregates.py:L1001–L1110` |
| `AggregateMultiTenancyIsolationColdMigrateTest._create_aggregate` | method | (admin_api, name) | private | `admin_api.api_post( '/os-aggregates', {'aggregate': {'name': name}}).body['aggregate']` (src/nova/tests/functional/test_aggregates.py:L1006) | 1/3 | `src/nova/tests/functional/test_aggregates.py:L1005–L1007` |
| `AggregateMultiTenancyIsolationColdMigrateTest._add_host_to_aggregate` | method | (admin_api, aggregate, host) | private | not declared | 1/8 | `src/nova/tests/functional/test_aggregates.py:L1010–L1017` |
| `AggregateMultiTenancyIsolationColdMigrateTest._isolate_aggregate` | method | (admin_api, aggregate, tenant_id) | private | not declared | 1/10 | `src/nova/tests/functional/test_aggregates.py:L1020–L1029` |
| `AggregateMultiTenancyIsolationColdMigrateTest.setUp` | method | (self) | public | not declared | 4/34 | `src/nova/tests/functional/test_aggregates.py:L1031–L1090` |
| `AggregateMultiTenancyIsolationColdMigrateTest.test_cold_migrate_server` | method | (self) | public | not declared | 2/11 | `src/nova/tests/functional/test_aggregates.py:L1092–L1110` |
| `AggregateMultiTenancyIsolationColdMigrateTest._create_aggregate` | staticmethod | — | private | not declared | — | `src/nova/tests/functional/test_aggregates.py:L1004–L1007` |
| `AggregateMultiTenancyIsolationColdMigrateTest._add_host_to_aggregate` | staticmethod | — | private | not declared | — | `src/nova/tests/functional/test_aggregates.py:L1009–L1017` |
| `AggregateMultiTenancyIsolationColdMigrateTest._isolate_aggregate` | staticmethod | — | private | not declared | — | `src/nova/tests/functional/test_aggregates.py:L1019–L1029` |

## Dependencies

- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/test_aggregates.py:L13)
- `import nova.conf` (src/nova/tests/functional/test_aggregates.py:L15)
- `nova`: imports `test` (src/nova/tests/functional/test_aggregates.py:L16)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/test_aggregates.py:L17)
- `nova.tests.functional.api`: imports `client` (src/nova/tests/functional/test_aggregates.py:L18)
- `nova.tests.functional`: imports `fixtures as func_fixtures` (src/nova/tests/functional/test_aggregates.py:L19)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_aggregates.py:L20)
- `nova.tests.unit`: imports `utils as test_utils` (src/nova/tests/functional/test_aggregates.py:L21)
- `nova`: imports `utils` (src/nova/tests/functional/test_aggregates.py:L22)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/functional/test_aggregates.py:L24)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/test_aggregates.py:L28)

## Security Surface

- **sink** (`db-write`): update, or remove if value=None (note "availability_zone" cannot be (src/nova/tests/functional/test_aggregates.py:L247)
- **sink** (`db-write`): """Should be possible to update AZ for an empty aggregate. (src/nova/tests/functional/test_aggregates.py:L296)
- **sink** (`db-write`): """Check it is not possible to update a non-empty aggregate. (src/nova/tests/functional/test_aggregates.py:L311)

