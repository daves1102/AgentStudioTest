# src/nova/scheduler/weights/hypervisor_version.py

## Overview

This file implements the `hypervisor_version` module, defining 1 class, 1 constant, 2 methods, 3 imports, 1 side effect, 1 security surface entry.

Lines: total 39, code 19, comment 12, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/scheduler/weights/hypervisor_version.py:L25–L25` |
| `HypervisorVersionWeigher` | class | — | exported | not declared | — | `src/nova/scheduler/weights/hypervisor_version.py:L28–L39` |
| `HypervisorVersionWeigher.weight_multiplier` | method | (self, host_state) | public | `utils.get_weight_multiplier( host_state, 'hypervisor_version_weight_multiplier', CONF.filter_scheduler.hypervisor_version_weight_multiplier)` (src/nova/scheduler/weights/hypervisor_version.py:L32) | 1/4 | `src/nova/scheduler/weights/hypervisor_version.py:L30–L34` |
| `HypervisorVersionWeigher._weigh_object` | method | (self, host_state, weight_properties) | private | `host_state.hypervisor_version or 0` (src/nova/scheduler/weights/hypervisor_version.py:L39) | 2/2 | `src/nova/scheduler/weights/hypervisor_version.py:L36–L39` |

## Dependencies

- `import nova.conf` (src/nova/scheduler/weights/hypervisor_version.py:L21)
- `nova.scheduler`: imports `utils` (src/nova/scheduler/weights/hypervisor_version.py:L22)
- `nova.scheduler`: imports `weights` (src/nova/scheduler/weights/hypervisor_version.py:L23)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/scheduler/weights/hypervisor_version.py:L25)

## Security Surface

- **sink** (`db-write`): The default is to select newer hosts.  If you prefer (src/nova/scheduler/weights/hypervisor_version.py:L16)

