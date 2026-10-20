# src/nova/api/openstack/compute/shelve.py

## Overview

This file implements the `shelve` module, defining 1 class, 1 constant, 4 methods, 10 imports, 2 side effects.

Lines: total 153, code 119, comment 20, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/shelve.py:L29–L29` |
| `ShelveController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/shelve.py:L33–L153` |
| `ShelveController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/shelve.py:L34–L36` |
| `ShelveController._shelve` | method | (self, req, id, body) | private | not declared | 5/22 | `src/nova/api/openstack/compute/shelve.py:L43–L66` |
| `ShelveController._shelve_offload` | method | (self, req, id, body) | private | not declared | 4/16 | `src/nova/api/openstack/compute/shelve.py:L73–L90` |
| `ShelveController._unshelve` | method | (self, req, id, body) | private | not declared | 9/44 | `src/nova/api/openstack/compute/shelve.py:L106–L153` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/api/openstack/compute/shelve.py:L17)
- `webob`: imports `exc` (src/nova/api/openstack/compute/shelve.py:L18)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/shelve.py:L20)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/shelve.py:L21)
- `nova.api.openstack.compute.schemas`: imports `shelve as schema` (src/nova/api/openstack/compute/shelve.py:L22)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/shelve.py:L23)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/shelve.py:L24)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/shelve.py:L25)
- `nova`: imports `exception` (src/nova/api/openstack/compute/shelve.py:L26)
- `nova.policies`: imports `shelve as shelve_policies` (src/nova/api/openstack/compute/shelve.py:L27)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import shelve as schema (src/nova/api/openstack/compute/shelve.py:L22)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/openstack/compute/shelve.py:L29)

