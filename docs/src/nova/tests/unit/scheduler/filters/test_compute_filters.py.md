# src/nova/tests/unit/scheduler/filters/test_compute_filters.py

## Overview

This file implements the `test_compute_filters` module, defining 1 class, 3 methods, 5 imports.

Lines: total 54, code 36, comment 11, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestComputeFilter` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/filters/test_compute_filters.py:L22–L54` |
| `TestComputeFilter.test_compute_filter_manual_disable` | method | (self, service_up_mock) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/filters/test_compute_filters.py:L24–L32` |
| `TestComputeFilter.test_compute_filter_sgapi_passes` | method | (self, service_up_mock) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/filters/test_compute_filters.py:L34–L43` |
| `TestComputeFilter.test_compute_filter_sgapi_fails` | method | (self, service_up_mock) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/filters/test_compute_filters.py:L45–L54` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/scheduler/filters/test_compute_filters.py:L13)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/filters/test_compute_filters.py:L15)
- `nova.scheduler.filters`: imports `compute_filter` (src/nova/tests/unit/scheduler/filters/test_compute_filters.py:L16)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/filters/test_compute_filters.py:L17)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/filters/test_compute_filters.py:L18)

