# src/nova/virt/vmwareapi/network_util.py

## Overview

This file implements the `network_util` module, defining 2 constants, 3 functions, 5 imports, 2 side effects.

Lines: total 115, code 73, comment 25, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/network_util.py:L28–L28` |
| `VWIRE_REGEX` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/network_util.py:L35–L35` |
| `_get_name_from_dvs_name` | function | (dvs_name) | unexported | `dvs_name` (src/nova/virt/vmwareapi/network_util.py:L41); `vwire.group(4)` (src/nova/virt/vmwareapi/network_util.py:L42) | 2/5 | `src/nova/virt/vmwareapi/network_util.py:L38–L42` |
| `_get_network_obj` | function | (session, network_objects, network_name) | unexported | `network_obj` (src/nova/virt/vmwareapi/network_util.py:L89); `network_obj` (src/nova/virt/vmwareapi/network_util.py:L98) | 8/34 | `src/nova/virt/vmwareapi/network_util.py:L45–L98` |
| `get_network_with_the_name` | function | (session, network_name="vmnet0", cluster=None) | exported | `network_obj` (src/nova/virt/vmwareapi/network_util.py:L113) | 2/10 | `src/nova/virt/vmwareapi/network_util.py:L101–L115` |

## Dependencies

- `import re` (src/nova/virt/vmwareapi/network_util.py:L20)
- `oslo_log`: imports `log as logging` (src/nova/virt/vmwareapi/network_util.py:L22)
- `oslo_vmware`: imports `vim_util as vutil` (src/nova/virt/vmwareapi/network_util.py:L23)
- `nova.virt.vmwareapi`: imports `vim_util` (src/nova/virt/vmwareapi/network_util.py:L25)
- `nova.virt.vmwareapi`: imports `vm_util` (src/nova/virt/vmwareapi/network_util.py:L26)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/vmwareapi/network_util.py:L28)
- **global-mutation**: VWIRE_REGEX = re.compile(r'vxw-dvs-(\d+)-virtualwire-(\d+)-sid-(\d+)-(.*)') (src/nova/virt/vmwareapi/network_util.py:L35)

