# src/nova/tests/unit/scheduler/filters/test_aggregate_image_properties_isolation_filters.py

## Overview

This file implements the `test_aggregate_image_properties_isolation_filters` module, defining 1 class, 13 methods, 5 imports.

Lines: total 150, code 122, comment 11, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestAggImagePropsIsolationFilter` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/filters/test_aggregate_image_properties_isolation_filters.py:L22–L150` |
| `TestAggImagePropsIsolationFilter.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/filters/test_aggregate_image_properties_isolation_filters.py:L24–L26` |
| `TestAggImagePropsIsolationFilter.test_aggregate_image_properties_isolation_passes` | method | (self, agg_mock) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/filters/test_aggregate_image_properties_isolation_filters.py:L28–L35` |
| `TestAggImagePropsIsolationFilter.test_aggregate_image_properties_isolation_passes_comma` | method | (self, agg_mock) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/filters/test_aggregate_image_properties_isolation_filters.py:L37–L44` |
| `TestAggImagePropsIsolationFilter.test_aggregate_image_properties_isolation_props_bad_comma` | method | (self, agg_mock) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/filters/test_aggregate_image_properties_isolation_filters.py:L46–L54` |
| `TestAggImagePropsIsolationFilter.test_aggregate_image_properties_isolation_multi_props_passes` | method | (self, agg_mock) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/filters/test_aggregate_image_properties_isolation_filters.py:L56–L65` |
| `TestAggImagePropsIsolationFilter.test_aggregate_image_properties_isolation_props_with_meta_passes` | method | (self, agg_mock) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/filters/test_aggregate_image_properties_isolation_filters.py:L67–L74` |
| `TestAggImagePropsIsolationFilter.test_aggregate_image_properties_isolation_props_imgprops_passes` | method | (self, agg_mock) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/filters/test_aggregate_image_properties_isolation_filters.py:L76–L84` |
| `TestAggImagePropsIsolationFilter.test_aggregate_image_properties_isolation_props_not_match_fails` | method | (self, agg_mock) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/filters/test_aggregate_image_properties_isolation_filters.py:L86–L94` |
| `TestAggImagePropsIsolationFilter.test_aggregate_image_properties_isolation_props_not_match2_fails` | method | (self, agg_mock) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/filters/test_aggregate_image_properties_isolation_filters.py:L96–L105` |
| `TestAggImagePropsIsolationFilter.test_aggregate_image_properties_isolation_props_namespace` | method | (self, agg_mock) | public | not declared | 1/14 | `src/nova/tests/unit/scheduler/filters/test_aggregate_image_properties_isolation_filters.py:L107–L120` |
| `TestAggImagePropsIsolationFilter.test_aggregate_image_properties_iso_props_with_custom_meta` | method | (self, agg_mock) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/filters/test_aggregate_image_properties_isolation_filters.py:L122–L130` |
| `TestAggImagePropsIsolationFilter.test_aggregate_image_properties_iso_props_with_matching_meta_pass` | method | (self, agg_mock) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/filters/test_aggregate_image_properties_isolation_filters.py:L132–L140` |
| `TestAggImagePropsIsolationFilter.test_aggregate_image_properties_iso_props_with_matching_meta_fail` | method | (self, agg_mock) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/filters/test_aggregate_image_properties_isolation_filters.py:L142–L150` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/scheduler/filters/test_aggregate_image_properties_isolation_filters.py:L13)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/filters/test_aggregate_image_properties_isolation_filters.py:L15)
- `nova.scheduler.filters`: imports `aggregate_image_properties_isolation as aipi` (src/nova/tests/unit/scheduler/filters/test_aggregate_image_properties_isolation_filters.py:L16)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/filters/test_aggregate_image_properties_isolation_filters.py:L17)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/filters/test_aggregate_image_properties_isolation_filters.py:L18)

