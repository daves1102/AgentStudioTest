# src/nova/virt/vmwareapi/host.py

## Overview

This file implements the `host` module, defining 1 class, 2 constants, 1 function, 4 methods, 12 imports, 2 side effects, 2 security surface entries.

Lines: total 120, code 89, comment 16, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/host.py:L34–L34` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/host.py:L35–L35` |
| `_get_ds_capacity_and_freespace` | function | (session, cluster=None, datastore_regex=None) | unexported | `ds.capacity, ds.freespace` (src/nova/virt/vmwareapi/host.py:L43); `0, 0` (src/nova/virt/vmwareapi/host.py:L45) | 2/8 | `src/nova/virt/vmwareapi/host.py:L38–L45` |
| `VCState` | class | — | exported | not declared | — | `src/nova/virt/vmwareapi/host.py:L48–L120` |
| `VCState.__init__` | method | (self, session, host_name, cluster, datastore_regex) | public | not declared | 1/13 | `src/nova/virt/vmwareapi/host.py:L51–L63` |
| `VCState.get_host_stats` | method | (self, refresh=False) | public | `self._stats` (src/nova/virt/vmwareapi/host.py:L71) | 3/4 | `src/nova/virt/vmwareapi/host.py:L65–L71` |
| `VCState.update_status` | method | (self) | public | `data` (src/nova/virt/vmwareapi/host.py:L89); `data` (src/nova/virt/vmwareapi/host.py:L111) | 3/33 | `src/nova/virt/vmwareapi/host.py:L73–L111` |
| `VCState._set_host_enabled` | method | (self, enabled) | private | not declared | 1/7 | `src/nova/virt/vmwareapi/host.py:L113–L120` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/virt/vmwareapi/host.py:L20)
- `oslo_utils`: imports `units` (src/nova/virt/vmwareapi/host.py:L21)
- `oslo_utils`: imports `versionutils` (src/nova/virt/vmwareapi/host.py:L22)
- `oslo_vmware`: imports `exceptions as vexc` (src/nova/virt/vmwareapi/host.py:L23)
- `import nova.conf` (src/nova/virt/vmwareapi/host.py:L25)
- `nova`: imports `context` (src/nova/virt/vmwareapi/host.py:L26)
- `nova`: imports `exception` (src/nova/virt/vmwareapi/host.py:L27)
- `nova`: imports `objects` (src/nova/virt/vmwareapi/host.py:L28)
- `nova.objects`: imports `fields as obj_fields` (src/nova/virt/vmwareapi/host.py:L29)
- `nova.virt.vmwareapi`: imports `ds_util` (src/nova/virt/vmwareapi/host.py:L30)
- `nova.virt.vmwareapi`: imports `vim_util` (src/nova/virt/vmwareapi/host.py:L31)
- `nova.virt.vmwareapi`: imports `vm_util` (src/nova/virt/vmwareapi/host.py:L32)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/vmwareapi/host.py:L34)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/vmwareapi/host.py:L35)

## Security Surface

- **sink** (`db-write`): True, run the update first. (src/nova/virt/vmwareapi/host.py:L67)
- **sink** (`db-write`): """Update the current state of the cluster.""" (src/nova/virt/vmwareapi/host.py:L74)

