# src/nova/scheduler/weights/io_ops.py

## Overview

This file implements the `io_ops` module, defining 1 class, 1 constant, 1 field, 2 methods, 3 imports, 1 side effect.

Lines: total 44, code 23, comment 14, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/scheduler/weights/io_ops.py:L28–L28` |
| `IoOpsWeigher` | class | — | exported | not declared | — | `src/nova/scheduler/weights/io_ops.py:L31–L44` |
| `IoOpsWeigher.minval` | field | — | public | not declared | — | `src/nova/scheduler/weights/io_ops.py:L32–L32` |
| `IoOpsWeigher.weight_multiplier` | method | (self, host_state) | public | `utils.get_weight_multiplier( host_state, 'io_ops_weight_multiplier', CONF.filter_scheduler.io_ops_weight_multiplier)` (src/nova/scheduler/weights/io_ops.py:L36) | 1/4 | `src/nova/scheduler/weights/io_ops.py:L34–L38` |
| `IoOpsWeigher._weigh_object` | method | (self, host_state, weight_properties) | private | `host_state.num_io_ops` (src/nova/scheduler/weights/io_ops.py:L44) | 1/2 | `src/nova/scheduler/weights/io_ops.py:L40–L44` |

## Dependencies

- `import nova.conf` (src/nova/scheduler/weights/io_ops.py:L24)
- `nova.scheduler`: imports `utils` (src/nova/scheduler/weights/io_ops.py:L25)
- `nova.scheduler`: imports `weights` (src/nova/scheduler/weights/io_ops.py:L26)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/scheduler/weights/io_ops.py:L28)

