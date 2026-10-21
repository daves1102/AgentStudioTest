# src/nova/tests/unit/scheduler/filters/test_io_ops_filters.py

## Overview

This file implements the `test_io_ops_filters` module, defining 1 class, 4 methods, 5 imports.

Lines: total 62, code 42, comment 11, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestIoOpsFilter` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/filters/test_io_ops_filters.py:L22–L62` |
| `TestIoOpsFilter.test_filter_num_iops_passes` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/filters/test_io_ops_filters.py:L24–L30` |
| `TestIoOpsFilter.test_filter_num_iops_fails` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/scheduler/filters/test_io_ops_filters.py:L32–L38` |
| `TestIoOpsFilter.test_aggregate_filter_num_iops_value` | method | (self, agg_mock) | public | not declared | 1/11 | `src/nova/tests/unit/scheduler/filters/test_io_ops_filters.py:L41–L51` |
| `TestIoOpsFilter.test_aggregate_filter_num_iops_value_error` | method | (self, agg_mock) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/filters/test_io_ops_filters.py:L54–L62` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/scheduler/filters/test_io_ops_filters.py:L14)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/filters/test_io_ops_filters.py:L16)
- `nova.scheduler.filters`: imports `io_ops_filter` (src/nova/tests/unit/scheduler/filters/test_io_ops_filters.py:L17)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/filters/test_io_ops_filters.py:L18)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/filters/test_io_ops_filters.py:L19)

