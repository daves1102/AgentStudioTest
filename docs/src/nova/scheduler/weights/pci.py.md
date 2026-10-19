# src/nova/scheduler/weights/pci.py

## Overview

This file implements the `pci` module, defining 1 class, 2 constants, 2 methods, 3 imports, 2 side effects.

Lines: total 68, code 29, comment 27, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/scheduler/weights/pci.py:L28–L28` |
| `MAX_DEVS` | constant | — | exported | not declared | — | `src/nova/scheduler/weights/pci.py:L36–L36` |
| `PCIWeigher` | class | — | exported | not declared | — | `src/nova/scheduler/weights/pci.py:L39–L68` |
| `PCIWeigher.weight_multiplier` | method | (self, host_state) | public | `utils.get_weight_multiplier( host_state, 'pci_weight_multiplier', CONF.filter_scheduler.pci_weight_multiplier)` (src/nova/scheduler/weights/pci.py:L43) | 1/4 | `src/nova/scheduler/weights/pci.py:L41–L45` |
| `PCIWeigher._weigh_object` | method | (self, host_state, request_spec) | private | `weight` (src/nova/scheduler/weights/pci.py:L68) | 4/5 | `src/nova/scheduler/weights/pci.py:L47–L68` |

## Dependencies

- `import nova.conf` (src/nova/scheduler/weights/pci.py:L24)
- `nova.scheduler`: imports `utils` (src/nova/scheduler/weights/pci.py:L25)
- `nova.scheduler`: imports `weights` (src/nova/scheduler/weights/pci.py:L26)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/scheduler/weights/pci.py:L28)
- **global-mutation**: MAX_DEVS = 100 (src/nova/scheduler/weights/pci.py:L36)

