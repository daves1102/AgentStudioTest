# src/nova/privsep/linux_net.py

## Overview

This file implements the `linux_net` module, defining 1 constant, 13 functions, 5 imports, 11 side effects, 9 security surface entries.

Lines: total 137, code 86, comment 16, blank 35

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/privsep/linux_net.py:L30–L30` |
| `device_exists` | function | (device) | exported | `os.path.exists('/sys/class/net/%s' % device)` (src/nova/privsep/linux_net.py:L35) | 1/2 | `src/nova/privsep/linux_net.py:L33–L35` |
| `delete_net_dev` | function | (dev) | exported | not declared | 3/8 | `src/nova/privsep/linux_net.py:L38–L46` |
| `delete_net_dev_escalated` | function | (dev) | exported | not declared | 1/3 | `src/nova/privsep/linux_net.py:L50–L52` |
| `set_device_mtu` | function | (dev, mtu) | exported | not declared | 2/4 | `src/nova/privsep/linux_net.py:L56–L59` |
| `set_device_enabled` | function | (dev) | exported | not declared | 1/2 | `src/nova/privsep/linux_net.py:L63–L64` |
| `_set_device_enabled_inner` | function | (dev) | unexported | not declared | 1/3 | `src/nova/privsep/linux_net.py:L67–L69` |
| `set_device_trust` | function | (dev, vf_num, trusted) | exported | not declared | 1/2 | `src/nova/privsep/linux_net.py:L73–L74` |
| `_set_device_trust_inner` | function | (dev, vf_num, trusted) | unexported | not declared | 2/5 | `src/nova/privsep/linux_net.py:L77–L81` |
| `set_device_macaddr` | function | (dev, mac_addr, port_state=None) | exported | not declared | 1/2 | `src/nova/privsep/linux_net.py:L85–L86` |
| `_set_device_macaddr_inner` | function | (dev, mac_addr, port_state=None) | unexported | not declared | 2/7 | `src/nova/privsep/linux_net.py:L89–L95` |
| `set_device_macaddr_and_vlan` | function | (dev, vf_num, mac_addr, vlan) | exported | not declared | 1/7 | `src/nova/privsep/linux_net.py:L99–L105` |
| `create_tap_dev` | function | (dev, mac_address=None, multiqueue=False) | exported | not declared | 6/18 | `src/nova/privsep/linux_net.py:L109–L130` |
| `add_vlan` | function | (bridge_interface, interface, vlan_num) | exported | not declared | 1/4 | `src/nova/privsep/linux_net.py:L134–L137` |

## Dependencies

- `import os` (src/nova/privsep/linux_net.py:L21)
- `oslo_concurrency`: imports `processutils` (src/nova/privsep/linux_net.py:L23)
- `oslo_log`: imports `log as logging` (src/nova/privsep/linux_net.py:L24)
- `oslo_utils`: imports `excutils` (src/nova/privsep/linux_net.py:L25)
- `import nova.privsep.linux_net` (src/nova/privsep/linux_net.py:L27)

## Side Effects

- **process-spawn**: import nova.privsep.linux_net (src/nova/privsep/linux_net.py:L27)
- **file-io**: return os.path.exists('/sys/class/net/%s' % device) (src/nova/privsep/linux_net.py:L35)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/linux_net.py:L49)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/linux_net.py:L55)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/linux_net.py:L62)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/linux_net.py:L72)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/linux_net.py:L84)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/linux_net.py:L98)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/linux_net.py:L108)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/linux_net.py:L133)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/privsep/linux_net.py:L30)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.linux_net (src/nova/privsep/linux_net.py:L27)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/linux_net.py:L49)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/linux_net.py:L55)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/linux_net.py:L62)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/linux_net.py:L72)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/linux_net.py:L84)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/linux_net.py:L98)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/linux_net.py:L108)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/linux_net.py:L133)

