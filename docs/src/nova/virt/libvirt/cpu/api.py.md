# src/nova/virt/libvirt/cpu/api.py

## Overview

This file implements the `api` module, defining 2 classs, 2 constants, 1 field, 17 methods, 2 propertys, 8 imports, 2 side effects.

Lines: total 201, code 151, comment 20, blank 30

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/cpu/api.py:L24–L24` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/cpu/api.py:L26–L26` |
| `Core` | class | — | exported | not declared | — | `src/nova/virt/libvirt/cpu/api.py:L30–L74` |
| `Core.ident` | field | — | public | not declared | — | `src/nova/virt/libvirt/cpu/api.py:L39–L39` |
| `Core.online` | method | (self) | public | `core.get_online(self.ident)` (src/nova/virt/libvirt/cpu/api.py:L43) | 1/2 | `src/nova/virt/libvirt/cpu/api.py:L42–L43` |
| `Core.online` | method | (self, state) | public | not declared | 2/5 | `src/nova/virt/libvirt/cpu/api.py:L46–L50` |
| `Core.__hash__` | method | (self) | public | `hash(self.ident)` (src/nova/virt/libvirt/cpu/api.py:L53) | 1/2 | `src/nova/virt/libvirt/cpu/api.py:L52–L53` |
| `Core.__eq__` | method | (self, other) | public | `self.ident == other.ident` (src/nova/virt/libvirt/cpu/api.py:L56) | 1/2 | `src/nova/virt/libvirt/cpu/api.py:L55–L56` |
| `Core.__str__` | method | (self) | public | `str(self.ident)` (src/nova/virt/libvirt/cpu/api.py:L59) | 1/2 | `src/nova/virt/libvirt/cpu/api.py:L58–L59` |
| `Core.governor` | method | (self) | public | `core.get_governor(self.ident)` (src/nova/virt/libvirt/cpu/api.py:L64); `None` (src/nova/virt/libvirt/cpu/api.py:L68) | 2/5 | `src/nova/virt/libvirt/cpu/api.py:L62–L68` |
| `Core.set_high_governor` | method | (self) | public | not declared | 1/2 | `src/nova/virt/libvirt/cpu/api.py:L70–L71` |
| `Core.set_low_governor` | method | (self) | public | not declared | 1/2 | `src/nova/virt/libvirt/cpu/api.py:L73–L74` |
| `API` | class | — | exported | not declared | — | `src/nova/virt/libvirt/cpu/api.py:L77–L201` |
| `API.core` | method | (self, i) | public | `Core(i)` (src/nova/virt/libvirt/cpu/api.py:L91) | 1/2 | `src/nova/virt/libvirt/cpu/api.py:L79–L91` |
| `API.power_up` | method | (self, cpus) | public | `` (src/nova/virt/libvirt/cpu/api.py:L95) | 6/14 | `src/nova/virt/libvirt/cpu/api.py:L93–L106` |
| `API.power_up_for_instance` | method | (self, instance) | public | `` (src/nova/virt/libvirt/cpu/api.py:L110) | 2/6 | `src/nova/virt/libvirt/cpu/api.py:L108–L113` |
| `API.power_up_for_migration` | method | (self, dst_numa_info) | public | not declared | 4/9 | `src/nova/virt/libvirt/cpu/api.py:L115–L123` |
| `API._power_down` | method | (self, cpus) | private | `` (src/nova/virt/libvirt/cpu/api.py:L127) | 6/14 | `src/nova/virt/libvirt/cpu/api.py:L125–L138` |
| `API.power_down_for_migration` | method | (self, dst_numa_info) | public | not declared | 4/9 | `src/nova/virt/libvirt/cpu/api.py:L140–L148` |
| `API.power_down_for_instance` | method | (self, instance) | public | `` (src/nova/virt/libvirt/cpu/api.py:L152) | 2/6 | `src/nova/virt/libvirt/cpu/api.py:L150–L155` |
| `API.power_down_all_dedicated_cpus` | method | (self) | public | `` (src/nova/virt/libvirt/cpu/api.py:L159) | 5/11 | `src/nova/virt/libvirt/cpu/api.py:L157–L168` |
| `API.validate_all_dedicated_cpus` | method | (self) | public | `` (src/nova/virt/libvirt/cpu/api.py:L172) | 13/27 | `src/nova/virt/libvirt/cpu/api.py:L170–L201` |
| `Core.online` | property | — | public | not declared | — | `src/nova/virt/libvirt/cpu/api.py:L41–L43` |
| `Core.governor` | property | — | public | not declared | — | `src/nova/virt/libvirt/cpu/api.py:L61–L68` |

## Dependencies

- `dataclasses`: imports `dataclass` (src/nova/virt/libvirt/cpu/api.py:L13)
- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/cpu/api.py:L15)
- `import nova.conf` (src/nova/virt/libvirt/cpu/api.py:L17)
- `nova`: imports `exception` (src/nova/virt/libvirt/cpu/api.py:L18)
- `nova.i18n`: imports `_` (src/nova/virt/libvirt/cpu/api.py:L19)
- `nova`: imports `objects` (src/nova/virt/libvirt/cpu/api.py:L20)
- `nova.virt`: imports `hardware` (src/nova/virt/libvirt/cpu/api.py:L21)
- `nova.virt.libvirt.cpu`: imports `core` (src/nova/virt/libvirt/cpu/api.py:L22)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/cpu/api.py:L24)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/libvirt/cpu/api.py:L26)

