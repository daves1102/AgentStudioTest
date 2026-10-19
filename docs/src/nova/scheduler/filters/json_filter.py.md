# src/nova/scheduler/filters/json_filter.py

## Overview

This file implements the `json_filter` module, defining 1 class, 1 constant, 1 field, 13 methods, 3 imports, 1 side effect.

Lines: total 149, code 107, comment 18, blank 24

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `JsonFilter` | class | — | exported | not declared | — | `src/nova/scheduler/filters/json_filter.py:L24–L149` |
| `JsonFilter.RUN_ON_REBUILD` | constant | — | public | not declared | — | `src/nova/scheduler/filters/json_filter.py:L29–L29` |
| `JsonFilter._op_compare` | method | (self, args, op) | private | `False` (src/nova/scheduler/filters/json_filter.py:L37); `not bool(bad)` (src/nova/scheduler/filters/json_filter.py:L43) | 5/9 | `src/nova/scheduler/filters/json_filter.py:L31–L43` |
| `JsonFilter._equals` | method | (self, args) | private | `self._op_compare(args, operator.eq)` (src/nova/scheduler/filters/json_filter.py:L47) | 1/2 | `src/nova/scheduler/filters/json_filter.py:L45–L47` |
| `JsonFilter._less_than` | method | (self, args) | private | `self._op_compare(args, operator.lt)` (src/nova/scheduler/filters/json_filter.py:L51) | 1/2 | `src/nova/scheduler/filters/json_filter.py:L49–L51` |
| `JsonFilter._greater_than` | method | (self, args) | private | `self._op_compare(args, operator.gt)` (src/nova/scheduler/filters/json_filter.py:L55) | 1/2 | `src/nova/scheduler/filters/json_filter.py:L53–L55` |
| `JsonFilter._in` | method | (self, args) | private | `self._op_compare(args, operator.contains)` (src/nova/scheduler/filters/json_filter.py:L59) | 1/2 | `src/nova/scheduler/filters/json_filter.py:L57–L59` |
| `JsonFilter._less_than_equal` | method | (self, args) | private | `self._op_compare(args, operator.le)` (src/nova/scheduler/filters/json_filter.py:L63) | 1/2 | `src/nova/scheduler/filters/json_filter.py:L61–L63` |
| `JsonFilter._greater_than_equal` | method | (self, args) | private | `self._op_compare(args, operator.ge)` (src/nova/scheduler/filters/json_filter.py:L67) | 1/2 | `src/nova/scheduler/filters/json_filter.py:L65–L67` |
| `JsonFilter._not` | method | (self, args) | private | `[not arg for arg in args]` (src/nova/scheduler/filters/json_filter.py:L71) | 2/2 | `src/nova/scheduler/filters/json_filter.py:L69–L71` |
| `JsonFilter._or` | method | (self, args) | private | `any(args)` (src/nova/scheduler/filters/json_filter.py:L75) | 1/2 | `src/nova/scheduler/filters/json_filter.py:L73–L75` |
| `JsonFilter._and` | method | (self, args) | private | `all(args)` (src/nova/scheduler/filters/json_filter.py:L79) | 1/2 | `src/nova/scheduler/filters/json_filter.py:L77–L79` |
| `JsonFilter.commands` | field | — | public | not declared | — | `src/nova/scheduler/filters/json_filter.py:L81–L91` |
| `JsonFilter._parse_string` | method | (self, string, host_state) | private | `None` (src/nova/scheduler/filters/json_filter.py:L100); `string` (src/nova/scheduler/filters/json_filter.py:L102); `None` (src/nova/scheduler/filters/json_filter.py:L107); `None` (src/nova/scheduler/filters/json_filter.py:L111); `obj` (src/nova/scheduler/filters/json_filter.py:L112) | 6/14 | `src/nova/scheduler/filters/json_filter.py:L93–L112` |
| `JsonFilter._process_filter` | method | (self, query, host_state) | private | `True` (src/nova/scheduler/filters/json_filter.py:L117); `result` (src/nova/scheduler/filters/json_filter.py:L129) | 6/15 | `src/nova/scheduler/filters/json_filter.py:L114–L129` |
| `JsonFilter.host_passes` | method | (self, host_state, spec_obj) | public | `True` (src/nova/scheduler/filters/json_filter.py:L137); `True` (src/nova/scheduler/filters/json_filter.py:L148); `False` (src/nova/scheduler/filters/json_filter.py:L149) | 4/10 | `src/nova/scheduler/filters/json_filter.py:L131–L149` |

## Dependencies

- `import operator` (src/nova/scheduler/filters/json_filter.py:L17)
- `oslo_serialization`: imports `jsonutils` (src/nova/scheduler/filters/json_filter.py:L19)
- `nova.scheduler`: imports `filters` (src/nova/scheduler/filters/json_filter.py:L21)

## Side Effects

- **global-mutation**: RUN_ON_REBUILD = False (src/nova/scheduler/filters/json_filter.py:L29)

