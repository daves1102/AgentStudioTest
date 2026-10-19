# src/nova/scheduler/weights/compute.py

## Overview

This file implements the `compute` module, defining 1 class, 1 constant, 2 methods, 3 imports, 1 side effect.

Lines: total 36, code 18, comment 12, blank 6

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/scheduler/weights/compute.py:L22–L22` |
| `BuildFailureWeigher` | class | — | exported | not declared | — | `src/nova/scheduler/weights/compute.py:L25–L36` |
| `BuildFailureWeigher.weight_multiplier` | method | (self, host_state) | public | `-1 * utils.get_weight_multiplier( host_state, 'build_failure_weight_multiplier', CONF.filter_scheduler.build_failure_weight_multiplier)` (src/nova/scheduler/weights/compute.py:L28) | 1/4 | `src/nova/scheduler/weights/compute.py:L26–L30` |
| `BuildFailureWeigher._weigh_object` | method | (self, host_state, weight_properties) | private | `host_state.failed_builds` (src/nova/scheduler/weights/compute.py:L36) | 1/2 | `src/nova/scheduler/weights/compute.py:L32–L36` |

## Dependencies

- `import nova.conf` (src/nova/scheduler/weights/compute.py:L18)
- `nova.scheduler`: imports `utils` (src/nova/scheduler/weights/compute.py:L19)
- `nova.scheduler`: imports `weights` (src/nova/scheduler/weights/compute.py:L20)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/scheduler/weights/compute.py:L22)

