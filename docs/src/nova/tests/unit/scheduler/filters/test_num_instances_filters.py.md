# src/nova/tests/unit/scheduler/filters/test_num_instances_filters.py

## Overview

This file implements the `test_num_instances_filters` module, defining 1 class, 4 methods, 5 imports.

Lines: total 62, code 41, comment 13, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestNumInstancesFilter` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/filters/test_num_instances_filters.py:L21–L62` |
| `TestNumInstancesFilter.test_filter_num_instances_passes` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/filters/test_num_instances_filters.py:L23–L29` |
| `TestNumInstancesFilter.test_filter_num_instances_fails` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/filters/test_num_instances_filters.py:L31–L37` |
| `TestNumInstancesFilter.test_filter_aggregate_num_instances_value` | method | (self, agg_mock) | public | not declared | 1/11 | `src/nova/tests/unit/scheduler/filters/test_num_instances_filters.py:L40–L52` |
| `TestNumInstancesFilter.test_filter_aggregate_num_instances_value_error` | method | (self, agg_mock) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/filters/test_num_instances_filters.py:L55–L62` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/scheduler/filters/test_num_instances_filters.py:L13)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/filters/test_num_instances_filters.py:L15)
- `nova.scheduler.filters`: imports `num_instances_filter` (src/nova/tests/unit/scheduler/filters/test_num_instances_filters.py:L16)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/filters/test_num_instances_filters.py:L17)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/filters/test_num_instances_filters.py:L18)

