# src/nova/virt/libvirt/cpu/core.py

## Overview

This file implements the `core` module, defining 3 constants, 8 functions, 6 imports, 11 side effects, 3 security surface entries.

Lines: total 88, code 48, comment 18, blank 22

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/cpu/core.py:L22–L22` |
| `AVAILABLE_PATH` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/cpu/core.py:L24–L24` |
| `CPU_PATH_TEMPLATE` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/cpu/core.py:L26–L26` |
| `get_available_cores` | function | — | exported | `hardware.parse_cpu_spec(cores) if cores else set()` (src/nova/virt/libvirt/cpu/core.py:L31) | 2/3 | `src/nova/virt/libvirt/cpu/core.py:L29–L31` |
| `exists` | function | (core) | exported | `core in get_available_cores()` (src/nova/virt/libvirt/cpu/core.py:L35) | 1/2 | `src/nova/virt/libvirt/cpu/core.py:L34–L35` |
| `gen_cpu_path` | function | (core) | exported | `CPU_PATH_TEMPLATE % {'core': core}` (src/nova/virt/libvirt/cpu/core.py:L42) | 2/5 | `src/nova/virt/libvirt/cpu/core.py:L38–L42` |
| `get_online` | function | (core) | exported | `online == '1'` (src/nova/virt/libvirt/cpu/core.py:L53) | 2/7 | `src/nova/virt/libvirt/cpu/core.py:L45–L53` |
| `set_online` | function | (core) | exported | `get_online(core)` (src/nova/virt/libvirt/cpu/core.py:L61) | 1/3 | `src/nova/virt/libvirt/cpu/core.py:L57–L61` |
| `set_offline` | function | (core) | exported | `False` (src/nova/virt/libvirt/cpu/core.py:L74); `not get_online(core)` (src/nova/virt/libvirt/cpu/core.py:L75) | 2/8 | `src/nova/virt/libvirt/cpu/core.py:L65–L75` |
| `get_governor` | function | (core) | exported | `filesystem.read_sys( os.path.join(gen_cpu_path(core), 'cpufreq/scaling_governor')).strip()` (src/nova/virt/libvirt/cpu/core.py:L79) | 1/3 | `src/nova/virt/libvirt/cpu/core.py:L78–L80` |
| `set_governor` | function | (core, governor) | exported | `get_governor(core)` (src/nova/virt/libvirt/cpu/core.py:L88) | 1/5 | `src/nova/virt/libvirt/cpu/core.py:L84–L88` |

## Dependencies

- `import os` (src/nova/virt/libvirt/cpu/core.py:L13)
- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/cpu/core.py:L15)
- `nova`: imports `exception` (src/nova/virt/libvirt/cpu/core.py:L17)
- `nova`: imports `filesystem` (src/nova/virt/libvirt/cpu/core.py:L18)
- `import nova.privsep` (src/nova/virt/libvirt/cpu/core.py:L19)
- `nova.virt`: imports `hardware` (src/nova/virt/libvirt/cpu/core.py:L20)

## Side Effects

- **file-io**: os.path.join(gen_cpu_path(core), 'online')).strip() (src/nova/virt/libvirt/cpu/core.py:L48)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/virt/libvirt/cpu/core.py:L56)
- **file-io**: filesystem.write_sys(os.path.join(gen_cpu_path(core), 'online'), data='1') (src/nova/virt/libvirt/cpu/core.py:L60)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/virt/libvirt/cpu/core.py:L64)
- **file-io**: filesystem.write_sys(os.path.join( (src/nova/virt/libvirt/cpu/core.py:L67)
- **file-io**: os.path.join(gen_cpu_path(core), 'cpufreq/scaling_governor')).strip() (src/nova/virt/libvirt/cpu/core.py:L80)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/virt/libvirt/cpu/core.py:L83)
- **file-io**: os.path.join(gen_cpu_path(core), 'cpufreq/scaling_governor'), (src/nova/virt/libvirt/cpu/core.py:L86)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/cpu/core.py:L22)
- **global-mutation**: AVAILABLE_PATH = '/sys/devices/system/cpu/present' (src/nova/virt/libvirt/cpu/core.py:L24)
- **global-mutation**: CPU_PATH_TEMPLATE = '/sys/devices/system/cpu/cpu%(core)s' (src/nova/virt/libvirt/cpu/core.py:L26)

## Security Surface

- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/virt/libvirt/cpu/core.py:L56)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/virt/libvirt/cpu/core.py:L64)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/virt/libvirt/cpu/core.py:L83)

