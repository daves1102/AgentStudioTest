# src/nova/scheduler/weights/disk.py

## Overview

This file implements the `disk` module, defining 1 class, 1 constant, 1 field, 2 methods, 3 imports, 1 side effect.

Lines: total 42, code 21, comment 14, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/scheduler/weights/disk.py:L28–L28` |
| `DiskWeigher` | class | — | exported | not declared | — | `src/nova/scheduler/weights/disk.py:L31–L42` |
| `DiskWeigher.minval` | field | — | public | not declared | — | `src/nova/scheduler/weights/disk.py:L32–L32` |
| `DiskWeigher.weight_multiplier` | method | (self, host_state) | public | `utils.get_weight_multiplier( host_state, 'disk_weight_multiplier', CONF.filter_scheduler.disk_weight_multiplier)` (src/nova/scheduler/weights/disk.py:L36) | 1/4 | `src/nova/scheduler/weights/disk.py:L34–L38` |
| `DiskWeigher._weigh_object` | method | (self, host_state, weight_properties) | private | `host_state.free_disk_mb` (src/nova/scheduler/weights/disk.py:L42) | 1/2 | `src/nova/scheduler/weights/disk.py:L40–L42` |

## Dependencies

- `import nova.conf` (src/nova/scheduler/weights/disk.py:L24)
- `nova.scheduler`: imports `utils` (src/nova/scheduler/weights/disk.py:L25)
- `nova.scheduler`: imports `weights` (src/nova/scheduler/weights/disk.py:L26)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/scheduler/weights/disk.py:L28)

