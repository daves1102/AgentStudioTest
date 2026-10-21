# src/nova/tests/unit/scheduler/filters/test_aggregate_multitenancy_isolation_filters.py

## Overview

This file implements the `test_aggregate_multitenancy_isolation_filters` module, defining 1 class, 7 methods, 5 imports.

Lines: total 92, code 64, comment 14, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestAggregateMultitenancyIsolationFilter` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/filters/test_aggregate_multitenancy_isolation_filters.py:L22–L92` |
| `TestAggregateMultitenancyIsolationFilter.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/filters/test_aggregate_multitenancy_isolation_filters.py:L24–L26` |
| `TestAggregateMultitenancyIsolationFilter.test_aggregate_multi_tenancy_isolation_with_meta_passes` | method | (self, agg_mock) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/filters/test_aggregate_multitenancy_isolation_filters.py:L28–L34` |
| `TestAggregateMultitenancyIsolationFilter.test_aggregate_multi_tenancy_isolation_with_meta_passes_comma` | method | (self, agg_mock) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/filters/test_aggregate_multitenancy_isolation_filters.py:L36–L43` |
| `TestAggregateMultitenancyIsolationFilter.test_aggregate_multi_tenancy_isolation_fails` | method | (self, agg_mock) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/filters/test_aggregate_multitenancy_isolation_filters.py:L45–L50` |
| `TestAggregateMultitenancyIsolationFilter.test_aggregate_multi_tenancy_isolation_fails_comma` | method | (self, agg_mock) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/filters/test_aggregate_multitenancy_isolation_filters.py:L52–L58` |
| `TestAggregateMultitenancyIsolationFilter.test_aggregate_multi_tenancy_isolation_no_meta_passes` | method | (self, agg_mock) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/filters/test_aggregate_multitenancy_isolation_filters.py:L60–L65` |
| `TestAggregateMultitenancyIsolationFilter.test_aggregate_multi_tenancy_isolation_with_prefix` | method | (self, agg_mock) | public | not declared | 1/20 | `src/nova/tests/unit/scheduler/filters/test_aggregate_multitenancy_isolation_filters.py:L67–L92` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/scheduler/filters/test_aggregate_multitenancy_isolation_filters.py:L13)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/filters/test_aggregate_multitenancy_isolation_filters.py:L15)
- `nova.scheduler.filters`: imports `aggregate_multitenancy_isolation as ami` (src/nova/tests/unit/scheduler/filters/test_aggregate_multitenancy_isolation_filters.py:L16)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/filters/test_aggregate_multitenancy_isolation_filters.py:L17)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/filters/test_aggregate_multitenancy_isolation_filters.py:L18)

