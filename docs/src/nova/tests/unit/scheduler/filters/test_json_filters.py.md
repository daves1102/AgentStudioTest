# src/nova/tests/unit/scheduler/filters/test_json_filters.py

## Overview

This file implements the `test_json_filters` module, defining 1 class, 12 methods, 5 imports.

Lines: total 272, code 218, comment 24, blank 30

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestJsonFilter` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/filters/test_json_filters.py:L21–L272` |
| `TestJsonFilter.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/filters/test_json_filters.py:L23–L28` |
| `TestJsonFilter.test_json_filter_passes` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/filters/test_json_filters.py:L30–L39` |
| `TestJsonFilter.test_json_filter_passes_with_no_query` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/filters/test_json_filters.py:L41–L50` |
| `TestJsonFilter.test_json_filter_fails_on_memory` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/filters/test_json_filters.py:L52–L61` |
| `TestJsonFilter.test_json_filter_fails_on_disk` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/scheduler/filters/test_json_filters.py:L63–L72` |
| `TestJsonFilter.test_json_filter_fails_on_service_disabled` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/scheduler/filters/test_json_filters.py:L74–L85` |
| `TestJsonFilter.test_json_filter_happy_day` | method | (self) | public | not declared | 1/61 | `src/nova/tests/unit/scheduler/filters/test_json_filters.py:L87–L160` |
| `TestJsonFilter.test_json_filter_basic_operators` | method | (self) | public | not declared | 2/45 | `src/nova/tests/unit/scheduler/filters/test_json_filters.py:L162–L215` |
| `TestJsonFilter.test_json_filter_unknown_operator_raises` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/filters/test_json_filters.py:L217–L225` |
| `TestJsonFilter.test_json_filter_empty_filters_pass` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/scheduler/filters/test_json_filters.py:L227–L240` |
| `TestJsonFilter.test_json_filter_invalid_num_arguments_fails` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/scheduler/filters/test_json_filters.py:L242–L256` |
| `TestJsonFilter.test_json_filter_unknown_variable_ignored` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/scheduler/filters/test_json_filters.py:L258–L272` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/scheduler/filters/test_json_filters.py:L13)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/filters/test_json_filters.py:L15)
- `nova.scheduler.filters`: imports `json_filter` (src/nova/tests/unit/scheduler/filters/test_json_filters.py:L16)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/filters/test_json_filters.py:L17)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/filters/test_json_filters.py:L18)

