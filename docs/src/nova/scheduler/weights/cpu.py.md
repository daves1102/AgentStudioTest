# src/nova/scheduler/weights/cpu.py

## Overview

This file implements the `cpu` module, defining 1 class, 1 constant, 1 field, 2 methods, 3 imports, 1 side effect.

Lines: total 46, code 24, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/scheduler/weights/cpu.py:L29–L29` |
| `CPUWeigher` | class | — | exported | not declared | — | `src/nova/scheduler/weights/cpu.py:L32–L46` |
| `CPUWeigher.minval` | field | — | public | not declared | — | `src/nova/scheduler/weights/cpu.py:L33–L33` |
| `CPUWeigher.weight_multiplier` | method | (self, host_state) | public | `utils.get_weight_multiplier( host_state, 'cpu_weight_multiplier', CONF.filter_scheduler.cpu_weight_multiplier)` (src/nova/scheduler/weights/cpu.py:L37) | 1/4 | `src/nova/scheduler/weights/cpu.py:L35–L39` |
| `CPUWeigher._weigh_object` | method | (self, host_state, weight_properties) | private | `vcpus_free` (src/nova/scheduler/weights/cpu.py:L46) | 1/5 | `src/nova/scheduler/weights/cpu.py:L41–L46` |

## Dependencies

- `import nova.conf` (src/nova/scheduler/weights/cpu.py:L25)
- `nova.scheduler`: imports `utils` (src/nova/scheduler/weights/cpu.py:L26)
- `nova.scheduler`: imports `weights` (src/nova/scheduler/weights/cpu.py:L27)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/scheduler/weights/cpu.py:L29)

