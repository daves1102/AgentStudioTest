# src/nova/scheduler/weights/ram.py

## Overview

This file implements the `ram` module, defining 1 class, 1 constant, 1 field, 2 methods, 3 imports, 1 side effect.

Lines: total 42, code 21, comment 14, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/scheduler/weights/ram.py:L28–L28` |
| `RAMWeigher` | class | — | exported | not declared | — | `src/nova/scheduler/weights/ram.py:L31–L42` |
| `RAMWeigher.minval` | field | — | public | not declared | — | `src/nova/scheduler/weights/ram.py:L32–L32` |
| `RAMWeigher.weight_multiplier` | method | (self, host_state) | public | `utils.get_weight_multiplier( host_state, 'ram_weight_multiplier', CONF.filter_scheduler.ram_weight_multiplier)` (src/nova/scheduler/weights/ram.py:L36) | 1/4 | `src/nova/scheduler/weights/ram.py:L34–L38` |
| `RAMWeigher._weigh_object` | method | (self, host_state, weight_properties) | private | `host_state.free_ram_mb` (src/nova/scheduler/weights/ram.py:L42) | 1/2 | `src/nova/scheduler/weights/ram.py:L40–L42` |

## Dependencies

- `import nova.conf` (src/nova/scheduler/weights/ram.py:L24)
- `nova.scheduler`: imports `utils` (src/nova/scheduler/weights/ram.py:L25)
- `nova.scheduler`: imports `weights` (src/nova/scheduler/weights/ram.py:L26)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/scheduler/weights/ram.py:L28)

