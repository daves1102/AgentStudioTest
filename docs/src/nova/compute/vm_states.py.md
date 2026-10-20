# src/nova/compute/vm_states.py

## Overview

This file implements the `vm_states` module, defining 16 constants, 1 function, 2 imports, 17 side effects.

Lines: total 88, code 34, comment 29, blank 25

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ACTIVE` | constant | — | exported | not declared | — | `src/nova/compute/vm_states.py:L35–L35` |
| `BUILDING` | constant | — | exported | not declared | — | `src/nova/compute/vm_states.py:L38–L38` |
| `PAUSED` | constant | — | exported | not declared | — | `src/nova/compute/vm_states.py:L40–L40` |
| `SUSPENDED` | constant | — | exported | not declared | — | `src/nova/compute/vm_states.py:L43–L43` |
| `STOPPED` | constant | — | exported | not declared | — | `src/nova/compute/vm_states.py:L46–L46` |
| `RESCUED` | constant | — | exported | not declared | — | `src/nova/compute/vm_states.py:L49–L49` |
| `RESIZED` | constant | — | exported | not declared | — | `src/nova/compute/vm_states.py:L53–L53` |
| `SOFT_DELETED` | constant | — | exported | not declared | — | `src/nova/compute/vm_states.py:L56–L56` |
| `DELETED` | constant | — | exported | not declared | — | `src/nova/compute/vm_states.py:L59–L59` |
| `ERROR` | constant | — | exported | not declared | — | `src/nova/compute/vm_states.py:L61–L61` |
| `SHELVED` | constant | — | exported | not declared | — | `src/nova/compute/vm_states.py:L64–L64` |
| `SHELVED_OFFLOADED` | constant | — | exported | not declared | — | `src/nova/compute/vm_states.py:L67–L67` |
| `ALLOW_SOFT_REBOOT` | constant | — | exported | not declared | — | `src/nova/compute/vm_states.py:L70–L70` |
| `ALLOW_HARD_REBOOT` | constant | — | exported | not declared | — | `src/nova/compute/vm_states.py:L73–L73` |
| `ALLOW_TRIGGER_CRASH_DUMP` | constant | — | exported | not declared | — | `src/nova/compute/vm_states.py:L76–L76` |
| `ALLOW_TARGET_STATES` | constant | — | exported | not declared | — | `src/nova/compute/vm_states.py:L79–L79` |
| `allow_resource_removal` | function | (vm_state, task_state=None) | exported | `( vm_state == DELETED or vm_state == SHELVED_OFFLOADED and task_state != task_states.SPAWNING )` (src/nova/compute/vm_states.py:L85) | 3/5 | `src/nova/compute/vm_states.py:L82–L88` |

## Dependencies

- `nova.compute`: imports `task_states` (src/nova/compute/vm_states.py:L30)
- `nova.objects`: imports `fields` (src/nova/compute/vm_states.py:L31)

## Side Effects

- **network**: See http://wiki.openstack.org/VMState (src/nova/compute/vm_states.py:L27)
- **global-mutation**: ACTIVE = fields.InstanceState.ACTIVE (src/nova/compute/vm_states.py:L35)
- **global-mutation**: BUILDING = fields.InstanceState.BUILDING (src/nova/compute/vm_states.py:L38)
- **global-mutation**: PAUSED = fields.InstanceState.PAUSED (src/nova/compute/vm_states.py:L40)
- **global-mutation**: SUSPENDED = fields.InstanceState.SUSPENDED (src/nova/compute/vm_states.py:L43)
- **global-mutation**: STOPPED = fields.InstanceState.STOPPED (src/nova/compute/vm_states.py:L46)
- **global-mutation**: RESCUED = fields.InstanceState.RESCUED (src/nova/compute/vm_states.py:L49)
- **global-mutation**: RESIZED = fields.InstanceState.RESIZED (src/nova/compute/vm_states.py:L53)
- **global-mutation**: SOFT_DELETED = fields.InstanceState.SOFT_DELETED (src/nova/compute/vm_states.py:L56)
- **global-mutation**: DELETED = fields.InstanceState.DELETED (src/nova/compute/vm_states.py:L59)
- **global-mutation**: ERROR = fields.InstanceState.ERROR (src/nova/compute/vm_states.py:L61)
- **global-mutation**: SHELVED = fields.InstanceState.SHELVED (src/nova/compute/vm_states.py:L64)
- **global-mutation**: SHELVED_OFFLOADED = fields.InstanceState.SHELVED_OFFLOADED (src/nova/compute/vm_states.py:L67)
- **global-mutation**: ALLOW_SOFT_REBOOT = [ACTIVE] (src/nova/compute/vm_states.py:L70)
- **global-mutation**: ALLOW_HARD_REBOOT = ALLOW_SOFT_REBOOT + [STOPPED, PAUSED, SUSPENDED, ERROR] (src/nova/compute/vm_states.py:L73)
- **global-mutation**: ALLOW_TRIGGER_CRASH_DUMP = [ACTIVE, PAUSED, RESCUED, RESIZED, ERROR] (src/nova/compute/vm_states.py:L76)
- **global-mutation**: ALLOW_TARGET_STATES = [STOPPED] (src/nova/compute/vm_states.py:L79)

