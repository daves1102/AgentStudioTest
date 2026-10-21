# src/nova/filters.py

## Overview

This file implements the `filters` module, defining 2 classs, 1 constant, 1 field, 4 methods, 2 imports, 1 side effect.

Lines: total 122, code 82, comment 24, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/filters.py:L24–L24` |
| `BaseFilter` | class | — | exported | not declared | — | `src/nova/filters.py:L27–L59` |
| `BaseFilter._filter_one` | method | (self, obj, spec_obj) | private | `True` (src/nova/filters.py:L34) | 1/2 | `src/nova/filters.py:L30–L34` |
| `BaseFilter.filter_all` | method | (self, filter_obj_list, spec_obj) | public | not declared | 3/4 | `src/nova/filters.py:L36–L45` |
| `BaseFilter.run_filter_once_per_request` | field | — | public | not declared | — | `src/nova/filters.py:L49–L49` |
| `BaseFilter.run_filter_for_index` | method | (self, index) | public | `False` (src/nova/filters.py:L57); `True` (src/nova/filters.py:L59) | 3/5 | `src/nova/filters.py:L51–L59` |
| `BaseFilterHandler` | class | — | exported | not declared | — | `src/nova/filters.py:L62–L122` |
| `BaseFilterHandler.get_filtered_objects` | method | (self, filters, objs, spec_obj, index=0) | public | `` (src/nova/filters.py:L88); `list_objs` (src/nova/filters.py:L122) | 7/46 | `src/nova/filters.py:L68–L122` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/filters.py:L20)
- `nova`: imports `loadables` (src/nova/filters.py:L22)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/filters.py:L24)

