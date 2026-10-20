# src/nova/api/openstack/compute/remote_consoles.py

## Overview

This file implements the `remote_consoles` module, defining 1 class, 6 methods, 1 variable, 8 imports, 1 side effect.

Lines: total 186, code 147, comment 19, blank 20

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_rdp_console_removal_reason` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/remote_consoles.py:L25–L28` |
| `RemoteConsolesController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/remote_consoles.py:L32–L186` |
| `RemoteConsolesController.__init__` | method | (self) | public | not declared | 1/7 | `src/nova/api/openstack/compute/remote_consoles.py:L33–L39` |
| `RemoteConsolesController.get_vnc_console` | method | (self, req, id, body) | public | `{'console': {'type': console_type, 'url': output['url']}}` (src/nova/api/openstack/compute/remote_consoles.py:L71) | 6/21 | `src/nova/api/openstack/compute/remote_consoles.py:L46–L71` |
| `RemoteConsolesController.get_spice_console` | method | (self, req, id, body) | public | `{'console': {'type': console_type, 'url': output['url']}}` (src/nova/api/openstack/compute/remote_consoles.py:L100) | 5/18 | `src/nova/api/openstack/compute/remote_consoles.py:L78–L100` |
| `RemoteConsolesController.get_rdp_console` | method | (self, req, id, body) | public | not declared | 1/2 | `src/nova/api/openstack/compute/remote_consoles.py:L108–L112` |
| `RemoteConsolesController.get_serial_console` | method | (self, req, id, body) | public | `{'console': {'type': console_type, 'url': output['url']}}` (src/nova/api/openstack/compute/remote_consoles.py:L143) | 5/21 | `src/nova/api/openstack/compute/remote_consoles.py:L119–L143` |
| `RemoteConsolesController.create` | method | (self, req, server_id, body) | public | `{'remote_console': {'protocol': protocol, 'type': console_type, 'url': output['url']}}` (src/nova/api/openstack/compute/remote_consoles.py:L172) | 6/29 | `src/nova/api/openstack/compute/remote_consoles.py:L153–L186` |

## Dependencies

- `import webob` (src/nova/api/openstack/compute/remote_consoles.py:L15)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/remote_consoles.py:L17)
- `nova.api.openstack.compute.schemas`: imports `remote_consoles as schema` (src/nova/api/openstack/compute/remote_consoles.py:L18)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/remote_consoles.py:L19)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/remote_consoles.py:L20)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/remote_consoles.py:L21)
- `nova`: imports `exception` (src/nova/api/openstack/compute/remote_consoles.py:L22)
- `nova.policies`: imports `remote_consoles as rc_policies` (src/nova/api/openstack/compute/remote_consoles.py:L23)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import remote_consoles as schema (src/nova/api/openstack/compute/remote_consoles.py:L18)

