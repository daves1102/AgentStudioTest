# src/nova/scheduler/weights/num_instances.py

## Overview

This file implements the `num_instances` module, defining 1 class, 1 constant, 2 methods, 3 imports, 1 side effect, 1 security surface entry.

Lines: total 41, code 22, comment 11, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/scheduler/weights/num_instances.py:L26–L26` |
| `NumInstancesWeigher` | class | — | exported | not declared | — | `src/nova/scheduler/weights/num_instances.py:L29–L41` |
| `NumInstancesWeigher.weight_multiplier` | method | (self, host_state) | public | `utils.get_weight_multiplier( host_state, 'num_instances_weight_multiplier', CONF.filter_scheduler.num_instances_weight_multiplier)` (src/nova/scheduler/weights/num_instances.py:L33) | 1/4 | `src/nova/scheduler/weights/num_instances.py:L31–L35` |
| `NumInstancesWeigher._weigh_object` | method | (self, host_state, weight_properties) | private | `host_state.num_instances` (src/nova/scheduler/weights/num_instances.py:L41) | 1/2 | `src/nova/scheduler/weights/num_instances.py:L37–L41` |

## Dependencies

- `import nova.conf` (src/nova/scheduler/weights/num_instances.py:L22)
- `nova.scheduler`: imports `utils` (src/nova/scheduler/weights/num_instances.py:L23)
- `nova.scheduler`: imports `weights` (src/nova/scheduler/weights/num_instances.py:L24)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/scheduler/weights/num_instances.py:L26)

## Security Surface

- **sink** (`db-write`): The default is to select hosts with less instances for a spreading strategy. (src/nova/scheduler/weights/num_instances.py:L16)

