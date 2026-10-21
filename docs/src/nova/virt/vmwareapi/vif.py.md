# src/nova/virt/vmwareapi/vif.py

## Overview

This file implements the `vif` module, defining 2 constants, 5 functions, 10 imports, 2 side effects.

Lines: total 130, code 90, comment 25, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/vif.py:L30–L30` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/vif.py:L31–L31` |
| `_check_ovs_supported_version` | function | (session) | unexported | not declared | 2/9 | `src/nova/virt/vmwareapi/vif.py:L34–L43` |
| `get_network_ref` | function | (session, cluster, vif) | exported | `network_ref` (src/nova/virt/vmwareapi/vif.py:L101) | 11/45 | `src/nova/virt/vmwareapi/vif.py:L46–L101` |
| `get_vif_dict` | function | (session, cluster, vif_model, vif) | exported | `{'network_name': name, 'mac_address': mac, 'network_ref': ref, 'iface_id': vif['id'], 'vif_model': vif_model}` (src/nova/virt/vmwareapi/vif.py:L108) | 2/9 | `src/nova/virt/vmwareapi/vif.py:L104–L112` |
| `get_vif_info` | function | (session, cluster, vif_model, network_info) | exported | `vif_infos` (src/nova/virt/vmwareapi/vif.py:L118); `vif_infos` (src/nova/virt/vmwareapi/vif.py:L121) | 3/7 | `src/nova/virt/vmwareapi/vif.py:L115–L121` |
| `get_network_device` | function | (hardware_devices, mac_address) | exported | `device` (src/nova/virt/vmwareapi/vif.py:L130) | 5/6 | `src/nova/virt/vmwareapi/vif.py:L124–L130` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/virt/vmwareapi/vif.py:L18)
- `oslo_utils`: imports `versionutils` (src/nova/virt/vmwareapi/vif.py:L19)
- `oslo_vmware`: imports `vim_util` (src/nova/virt/vmwareapi/vif.py:L20)
- `import nova.conf` (src/nova/virt/vmwareapi/vif.py:L22)
- `nova`: imports `exception` (src/nova/virt/vmwareapi/vif.py:L23)
- `nova.i18n`: imports `_` (src/nova/virt/vmwareapi/vif.py:L24)
- `nova.network`: imports `model` (src/nova/virt/vmwareapi/vif.py:L25)
- `nova.virt.vmwareapi`: imports `constants` (src/nova/virt/vmwareapi/vif.py:L26)
- `nova.virt.vmwareapi`: imports `network_util` (src/nova/virt/vmwareapi/vif.py:L27)
- `nova.virt.vmwareapi`: imports `vm_util` (src/nova/virt/vmwareapi/vif.py:L28)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/vmwareapi/vif.py:L30)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/vmwareapi/vif.py:L31)

