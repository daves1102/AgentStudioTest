# src/nova/scheduler/filters/type_filter.py

## Overview

This file implements the `type_filter` module, defining 1 class, 1 constant, 1 field, 1 method, 2 imports, 1 side effect.

Lines: total 41, code 16, comment 17, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `AggregateTypeAffinityFilter` | class | — | exported | not declared | — | `src/nova/scheduler/filters/type_filter.py:L21–L41` |
| `AggregateTypeAffinityFilter.run_filter_once_per_request` | field | — | public | not declared | — | `src/nova/scheduler/filters/type_filter.py:L29–L29` |
| `AggregateTypeAffinityFilter.RUN_ON_REBUILD` | constant | — | public | not declared | — | `src/nova/scheduler/filters/type_filter.py:L31–L31` |
| `AggregateTypeAffinityFilter.host_passes` | method | (self, host_state, spec_obj) | public | `True` (src/nova/scheduler/filters/type_filter.py:L40); `not aggregate_vals` (src/nova/scheduler/filters/type_filter.py:L41) | 4/7 | `src/nova/scheduler/filters/type_filter.py:L33–L41` |

## Dependencies

- `nova.scheduler`: imports `filters` (src/nova/scheduler/filters/type_filter.py:L17)
- `nova.scheduler.filters`: imports `utils` (src/nova/scheduler/filters/type_filter.py:L18)

## Side Effects

- **global-mutation**: RUN_ON_REBUILD = False (src/nova/scheduler/filters/type_filter.py:L31)

