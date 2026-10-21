# src/nova/tests/unit/scheduler/filters/test_type_filters.py

## Overview

This file implements the `test_type_filters` module, defining 1 class, 4 methods, 5 imports.

Lines: total 109, code 63, comment 26, blank 20

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestTypeFilter` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/filters/test_type_filters.py:L21–L109` |
| `TestTypeFilter.test_aggregate_type_filter_no_metadata` | method | (self, agg_mock) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/filters/test_type_filters.py:L24–L36` |
| `TestTypeFilter.test_aggregate_type_filter_single_instance_type` | method | (self, agg_mock) | public | not declared | 1/12 | `src/nova/tests/unit/scheduler/filters/test_type_filters.py:L39–L58` |
| `TestTypeFilter.test_aggregate_type_filter_multi_aggregate` | method | (self, agg_mock) | public | not declared | 1/16 | `src/nova/tests/unit/scheduler/filters/test_type_filters.py:L61–L84` |
| `TestTypeFilter.test_aggregate_type_filter_multi_instance_type` | method | (self, agg_mock) | public | not declared | 1/16 | `src/nova/tests/unit/scheduler/filters/test_type_filters.py:L87–L109` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/scheduler/filters/test_type_filters.py:L13)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/filters/test_type_filters.py:L15)
- `nova.scheduler.filters`: imports `type_filter` (src/nova/tests/unit/scheduler/filters/test_type_filters.py:L16)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/filters/test_type_filters.py:L17)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/filters/test_type_filters.py:L18)

