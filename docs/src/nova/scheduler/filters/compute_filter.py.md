# src/nova/scheduler/filters/compute_filter.py

## Overview

This file implements the `compute_filter` module, defining 1 class, 2 constants, 1 field, 2 methods, 3 imports, 2 side effects.

Lines: total 48, code 24, comment 15, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/scheduler/filters/compute_filter.py:L21–L21` |
| `ComputeFilter` | class | — | exported | not declared | — | `src/nova/scheduler/filters/compute_filter.py:L24–L48` |
| `ComputeFilter.RUN_ON_REBUILD` | constant | — | public | not declared | — | `src/nova/scheduler/filters/compute_filter.py:L27–L27` |
| `ComputeFilter.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/scheduler/filters/compute_filter.py:L29–L30` |
| `ComputeFilter.run_filter_once_per_request` | field | — | public | not declared | — | `src/nova/scheduler/filters/compute_filter.py:L33–L33` |
| `ComputeFilter.host_passes` | method | (self, host_state, spec_obj) | public | `False` (src/nova/scheduler/filters/compute_filter.py:L42); `False` (src/nova/scheduler/filters/compute_filter.py:L47); `True` (src/nova/scheduler/filters/compute_filter.py:L48) | 3/13 | `src/nova/scheduler/filters/compute_filter.py:L35–L48` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/scheduler/filters/compute_filter.py:L16)
- `nova.scheduler`: imports `filters` (src/nova/scheduler/filters/compute_filter.py:L18)
- `nova`: imports `servicegroup` (src/nova/scheduler/filters/compute_filter.py:L19)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/scheduler/filters/compute_filter.py:L21)
- **global-mutation**: RUN_ON_REBUILD = False (src/nova/scheduler/filters/compute_filter.py:L27)

