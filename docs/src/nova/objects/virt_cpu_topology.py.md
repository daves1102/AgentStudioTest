# src/nova/objects/virt_cpu_topology.py

## Overview

This file implements the `virt_cpu_topology` module, defining 1 class, 1 constant, 1 field, 2 methods, 1 variable, 2 imports, 1 side effect.

Lines: total 45, code 24, comment 14, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/virt_cpu_topology.py:L16–L18` |
| `VirtCPUTopology` | class | — | exported | not declared | — | `src/nova/objects/virt_cpu_topology.py:L22–L45` |
| `VirtCPUTopology.VERSION` | constant | — | public | not declared | — | `src/nova/objects/virt_cpu_topology.py:L24–L24` |
| `VirtCPUTopology.fields` | field | — | public | not declared | — | `src/nova/objects/virt_cpu_topology.py:L26–L30` |
| `VirtCPUTopology.from_dict` | method | (cls, data) | public | `cls(sockets=data.get('sockets'), cores=data.get('cores'), threads=data.get('threads'))` (src/nova/objects/virt_cpu_topology.py:L36) | 1/4 | `src/nova/objects/virt_cpu_topology.py:L35–L38` |
| `VirtCPUTopology.to_dict` | method | (self) | public | `{ 'sockets': self.sockets, 'cores': self.cores, 'threads': self.threads }` (src/nova/objects/virt_cpu_topology.py:L41) | 1/6 | `src/nova/objects/virt_cpu_topology.py:L40–L45` |

## Dependencies

- `nova.objects`: imports `base` (src/nova/objects/virt_cpu_topology.py:L13)
- `nova.objects`: imports `fields` (src/nova/objects/virt_cpu_topology.py:L14)

## Side Effects

- **global-mutation**: VERSION = '1.0' (src/nova/objects/virt_cpu_topology.py:L24)

