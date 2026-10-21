# src/nova/virt/zvm/guest.py

## Overview

This file implements the `guest` module, defining 1 class, 3 constants, 3 methods, 4 imports, 3 side effects.

Lines: total 51, code 26, comment 13, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/zvm/guest.py:L22–L22` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/zvm/guest.py:L23–L23` |
| `ZVM_POWER_STATE` | constant | — | exported | not declared | — | `src/nova/virt/zvm/guest.py:L26–L29` |
| `Guest` | class | — | exported | not declared | — | `src/nova/virt/zvm/guest.py:L32–L51` |
| `Guest.__init__` | method | (self, hypervisor, instance, virtapi=None) | public | not declared | 1/5 | `src/nova/virt/zvm/guest.py:L35–L40` |
| `Guest._mapping_power_state` | method | (self, power_state) | private | `ZVM_POWER_STATE.get(power_state, compute_power_state.NOSTATE)` (src/nova/virt/zvm/guest.py:L44) | 1/2 | `src/nova/virt/zvm/guest.py:L42–L44` |
| `Guest.get_info` | method | (self) | public | `hardware.InstanceInfo(power_state)` (src/nova/virt/zvm/guest.py:L51) | 1/5 | `src/nova/virt/zvm/guest.py:L46–L51` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/virt/zvm/guest.py:L15)
- `nova.compute`: imports `power_state as compute_power_state` (src/nova/virt/zvm/guest.py:L17)
- `nova`: imports `conf` (src/nova/virt/zvm/guest.py:L18)
- `nova.virt`: imports `hardware` (src/nova/virt/zvm/guest.py:L19)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/zvm/guest.py:L22)
- **global-mutation**: CONF = conf.CONF (src/nova/virt/zvm/guest.py:L23)
- **global-mutation**: ZVM_POWER_STATE = { (src/nova/virt/zvm/guest.py:L26)

