# src/nova/tests/unit/scheduler/test_filters.py

## Overview

This file implements the `test_filters` module, defining 7 classs, 3 functions, 12 methods, 7 imports, 2 side effects.

Lines: total 235, code 165, comment 32, blank 38

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `Filter1` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_filters.py:L29–L31` |
| `Filter2` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_filters.py:L34–L36` |
| `FiltersTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/test_filters.py:L39–L235` |
| `FiltersTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/test_filters.py:L41–L45` |
| `FiltersTestCase.test_filter_all` | method | (self, mock_filter_one) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/test_filters.py:L48–L56` |
| `FiltersTestCase.test_filter_all_recursive_yields` | method | (self, mock_filter_one) | public | not declared | 4/17 | `src/nova/tests/unit/scheduler/test_filters.py:L59–L90` |
| `FiltersTestCase.test_get_filtered_objects` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/scheduler/test_filters.py:L92–L120` |
| `FiltersTestCase.test_get_filtered_objects._fake_base_loader_init` | function | (*args, **kwargs) | private | not declared | — | `src/nova/tests/unit/scheduler/test_filters.py:L98–L99` |
| `FiltersTestCase.test_get_filtered_objects_for_index` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/scheduler/test_filters.py:L122–L150` |
| `FiltersTestCase.test_get_filtered_objects_for_index._fake_base_loader_init` | function | (*args, **kwargs) | private | not declared | — | `src/nova/tests/unit/scheduler/test_filters.py:L130–L131` |
| `FiltersTestCase.test_get_filtered_objects_none_response` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/scheduler/test_filters.py:L152–L175` |
| `FiltersTestCase.test_get_filtered_objects_none_response._fake_base_loader_init` | function | (*args, **kwargs) | private | not declared | — | `src/nova/tests/unit/scheduler/test_filters.py:L156–L157` |
| `FiltersTestCase.test_get_filtered_objects_info_log_none_returned` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/scheduler/test_filters.py:L177–L205` |
| `FiltersTestCase.test_get_filtered_objects_info_log_none_returned.FilterA` | class | — | public | not declared | — | `src/nova/tests/unit/scheduler/test_filters.py:L180–L183` |
| `FiltersTestCase.test_get_filtered_objects_info_log_none_returned.FilterA.filter_all` | method | (self, list_objs, spec_obj) | public | `list_objs[1:]` (src/nova/tests/unit/scheduler/test_filters.py:L183) | — | `src/nova/tests/unit/scheduler/test_filters.py:L181–L183` |
| `FiltersTestCase.test_get_filtered_objects_info_log_none_returned.FilterB` | class | — | public | not declared | — | `src/nova/tests/unit/scheduler/test_filters.py:L185–L188` |
| `FiltersTestCase.test_get_filtered_objects_info_log_none_returned.FilterB.filter_all` | method | (self, list_objs, spec_obj) | public | `[]` (src/nova/tests/unit/scheduler/test_filters.py:L188) | — | `src/nova/tests/unit/scheduler/test_filters.py:L186–L188` |
| `FiltersTestCase.test_get_filtered_objects_debug_log_none_returned` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/scheduler/test_filters.py:L207–L235` |
| `FiltersTestCase.test_get_filtered_objects_debug_log_none_returned.FilterA` | class | — | public | not declared | — | `src/nova/tests/unit/scheduler/test_filters.py:L210–L213` |
| `FiltersTestCase.test_get_filtered_objects_debug_log_none_returned.FilterA.filter_all` | method | (self, list_objs, spec_obj) | public | `list_objs[1:]` (src/nova/tests/unit/scheduler/test_filters.py:L213) | — | `src/nova/tests/unit/scheduler/test_filters.py:L211–L213` |
| `FiltersTestCase.test_get_filtered_objects_debug_log_none_returned.FilterB` | class | — | public | not declared | — | `src/nova/tests/unit/scheduler/test_filters.py:L215–L218` |
| `FiltersTestCase.test_get_filtered_objects_debug_log_none_returned.FilterB.filter_all` | method | (self, list_objs, spec_obj) | public | `[]` (src/nova/tests/unit/scheduler/test_filters.py:L218) | — | `src/nova/tests/unit/scheduler/test_filters.py:L216–L218` |

## Dependencies

- `import inspect` (src/nova/tests/unit/scheduler/test_filters.py:L18)
- `unittest`: imports `mock` (src/nova/tests/unit/scheduler/test_filters.py:L19)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/scheduler/test_filters.py:L21)
- `nova`: imports `filters` (src/nova/tests/unit/scheduler/test_filters.py:L23)
- `nova`: imports `loadables` (src/nova/tests/unit/scheduler/test_filters.py:L24)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/test_filters.py:L25)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/test_filters.py:L26)

## Side Effects

- **global-mutation**: LOG = filters.LOG (src/nova/tests/unit/scheduler/test_filters.py:L178)
- **global-mutation**: LOG = filters.LOG (src/nova/tests/unit/scheduler/test_filters.py:L208)

