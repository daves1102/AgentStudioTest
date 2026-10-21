# src/nova/tests/unit/scheduler/filters/test_aggregate_instance_extra_specs_filters.py

## Overview

This file implements the `test_aggregate_instance_extra_specs_filters` module, defining 1 class, 8 methods, 5 imports.

Lines: total 92, code 61, comment 17, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestAggregateInstanceExtraSpecsFilter` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/filters/test_aggregate_instance_extra_specs_filters.py:L22–L92` |
| `TestAggregateInstanceExtraSpecsFilter.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/filters/test_aggregate_instance_extra_specs_filters.py:L24–L26` |
| `TestAggregateInstanceExtraSpecsFilter.test_aggregate_filter_passes_no_extra_specs` | method | (self, agg_mock) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/filters/test_aggregate_instance_extra_specs_filters.py:L28–L36` |
| `TestAggregateInstanceExtraSpecsFilter.test_aggregate_filter_passes_empty_extra_specs` | method | (self, agg_mock) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/filters/test_aggregate_instance_extra_specs_filters.py:L38–L46` |
| `TestAggregateInstanceExtraSpecsFilter._do_test_aggregate_filter_extra_specs` | method | (self, especs, passes) | private | not declared | 2/8 | `src/nova/tests/unit/scheduler/filters/test_aggregate_instance_extra_specs_filters.py:L48–L55` |
| `TestAggregateInstanceExtraSpecsFilter.test_aggregate_filter_passes_extra_specs_simple` | method | (self, agg_mock) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/filters/test_aggregate_instance_extra_specs_filters.py:L57–L65` |
| `TestAggregateInstanceExtraSpecsFilter.test_aggregate_filter_passes_extra_specs_simple_comma` | method | (self, agg_mock) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/filters/test_aggregate_instance_extra_specs_filters.py:L67–L75` |
| `TestAggregateInstanceExtraSpecsFilter.test_aggregate_filter_passes_with_key_same_as_scope` | method | (self, agg_mock) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/filters/test_aggregate_instance_extra_specs_filters.py:L77–L84` |
| `TestAggregateInstanceExtraSpecsFilter.test_aggregate_filter_fails_extra_specs_simple` | method | (self, agg_mock) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/filters/test_aggregate_instance_extra_specs_filters.py:L86–L92` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/scheduler/filters/test_aggregate_instance_extra_specs_filters.py:L13)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/filters/test_aggregate_instance_extra_specs_filters.py:L15)
- `nova.scheduler.filters`: imports `aggregate_instance_extra_specs as agg_specs` (src/nova/tests/unit/scheduler/filters/test_aggregate_instance_extra_specs_filters.py:L16)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/filters/test_aggregate_instance_extra_specs_filters.py:L17)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/filters/test_aggregate_instance_extra_specs_filters.py:L18)

