# src/nova/scheduler/filters/\_\_init\_\_.py

## Overview

This file implements the `__init__` module, defining 3 classs, 2 constants, 1 function, 4 methods, 3 imports, 2 side effects.

Lines: total 108, code 62, comment 28, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/scheduler/filters/__init__.py:L23–L23` |
| `BaseHostFilter` | class | — | exported | not declared | — | `src/nova/scheduler/filters/__init__.py:L26–L57` |
| `BaseHostFilter.RUN_ON_REBUILD` | constant | — | public | not declared | — | `src/nova/scheduler/filters/__init__.py:L38–L38` |
| `BaseHostFilter._filter_one` | method | (self, obj, spec) | private | `True` (src/nova/scheduler/filters/__init__.py:L46); `self.host_passes(obj, spec)` (src/nova/scheduler/filters/__init__.py:L51) | 3/6 | `src/nova/scheduler/filters/__init__.py:L40–L51` |
| `BaseHostFilter.host_passes` | method | (self, host_state, filter_properties) | public | not declared | 1/2 | `src/nova/scheduler/filters/__init__.py:L53–L57` |
| `CandidateFilterMixin` | class | — | exported | not declared | — | `src/nova/scheduler/filters/__init__.py:L60–L94` |
| `CandidateFilterMixin.filter_candidates` | method | (self, host_state, filter_func) | public | `good_candidates` (src/nova/scheduler/filters/__init__.py:L94) | 3/20 | `src/nova/scheduler/filters/__init__.py:L65–L94` |
| `HostFilterHandler` | class | — | exported | not declared | — | `src/nova/scheduler/filters/__init__.py:L97–L99` |
| `HostFilterHandler.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/scheduler/filters/__init__.py:L98–L99` |
| `all_filters` | function | — | exported | `HostFilterHandler().get_all_classes()` (src/nova/scheduler/filters/__init__.py:L108) | 1/2 | `src/nova/scheduler/filters/__init__.py:L102–L108` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/scheduler/filters/__init__.py:L19)
- `nova`: imports `filters` (src/nova/scheduler/filters/__init__.py:L21)
- `nova.scheduler`: imports `utils` (src/nova/scheduler/filters/__init__.py:L43)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/scheduler/filters/__init__.py:L23)
- **global-mutation**: RUN_ON_REBUILD = False (src/nova/scheduler/filters/__init__.py:L38)

