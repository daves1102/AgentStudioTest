# src/nova/compute/power_state.py

## Overview

This file implements the `power_state` module, defining 7 constants, 1 import, 7 side effects.

Lines: total 46, code 18, comment 24, blank 4

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NOSTATE` | constant | — | exported | not declared | — | `src/nova/compute/power_state.py:L32–L32` |
| `RUNNING` | constant | — | exported | not declared | — | `src/nova/compute/power_state.py:L33–L33` |
| `PAUSED` | constant | — | exported | not declared | — | `src/nova/compute/power_state.py:L34–L34` |
| `SHUTDOWN` | constant | — | exported | not declared | — | `src/nova/compute/power_state.py:L36–L36` |
| `CRASHED` | constant | — | exported | not declared | — | `src/nova/compute/power_state.py:L37–L37` |
| `SUSPENDED` | constant | — | exported | not declared | — | `src/nova/compute/power_state.py:L38–L39` |
| `STATE_MAP` | constant | — | exported | not declared | — | `src/nova/compute/power_state.py:L44–L46` |

## Dependencies

- `nova.objects`: imports `fields` (src/nova/compute/power_state.py:L27)

## Side Effects

- **global-mutation**: NOSTATE = fields.InstancePowerState.index(fields.InstancePowerState.NOSTATE) (src/nova/compute/power_state.py:L32)
- **global-mutation**: RUNNING = fields.InstancePowerState.index(fields.InstancePowerState.RUNNING) (src/nova/compute/power_state.py:L33)
- **global-mutation**: PAUSED = fields.InstancePowerState.index(fields.InstancePowerState.PAUSED) (src/nova/compute/power_state.py:L34)
- **global-mutation**: SHUTDOWN = fields.InstancePowerState.index(fields.InstancePowerState.SHUTDOWN) (src/nova/compute/power_state.py:L36)
- **global-mutation**: CRASHED = fields.InstancePowerState.index(fields.InstancePowerState.CRASHED) (src/nova/compute/power_state.py:L37)
- **global-mutation**: SUSPENDED = fields.InstancePowerState.index( (src/nova/compute/power_state.py:L38)
- **global-mutation**: STATE_MAP = {fields.InstancePowerState.index(state): state (src/nova/compute/power_state.py:L44)

