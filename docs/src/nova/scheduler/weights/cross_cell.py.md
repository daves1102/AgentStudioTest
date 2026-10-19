# src/nova/scheduler/weights/cross_cell.py

## Overview

This file implements the `cross_cell` module, defining 1 class, 1 constant, 2 methods, 3 imports, 1 side effect, 1 security surface entry.

Lines: total 63, code 37, comment 19, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/scheduler/weights/cross_cell.py:L23–L23` |
| `CrossCellWeigher` | class | — | exported | not declared | — | `src/nova/scheduler/weights/cross_cell.py:L26–L63` |
| `CrossCellWeigher.weight_multiplier` | method | (self, host_state) | public | `utils.get_weight_multiplier( host_state, 'cross_cell_move_weight_multiplier', CONF.filter_scheduler.cross_cell_move_weight_multiplier)` (src/nova/scheduler/weights/cross_cell.py:L30) | 1/4 | `src/nova/scheduler/weights/cross_cell.py:L28–L32` |
| `CrossCellWeigher._weigh_object` | method | (self, host_state, weight_properties) | private | `1` (src/nova/scheduler/weights/cross_cell.py:L59); `-1` (src/nova/scheduler/weights/cross_cell.py:L61); `0` (src/nova/scheduler/weights/cross_cell.py:L63) | 7/11 | `src/nova/scheduler/weights/cross_cell.py:L34–L63` |

## Dependencies

- `nova`: imports `conf` (src/nova/scheduler/weights/cross_cell.py:L19)
- `nova.scheduler`: imports `utils` (src/nova/scheduler/weights/cross_cell.py:L20)
- `nova.scheduler`: imports `weights` (src/nova/scheduler/weights/cross_cell.py:L21)

## Side Effects

- **global-mutation**: CONF = conf.CONF (src/nova/scheduler/weights/cross_cell.py:L23)

## Security Surface

- **sink** (`db-write`): cells are preferred when moving an instance. In other words, select a host (src/nova/scheduler/weights/cross_cell.py:L15)

