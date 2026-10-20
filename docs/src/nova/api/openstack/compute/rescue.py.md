# src/nova/api/openstack/compute/rescue.py

## Overview

This file implements the `rescue` module, defining 1 class, 1 constant, 3 methods, 11 imports, 2 side effects.

Lines: total 105, code 78, comment 16, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/rescue.py:L30–L30` |
| `RescueController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/rescue.py:L34–L105` |
| `RescueController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/rescue.py:L35–L37` |
| `RescueController._rescue` | method | (self, req, id, body) | private | `{'adminPass': password}` (src/nova/api/openstack/compute/rescue.py:L83); `{}` (src/nova/api/openstack/compute/rescue.py:L85) | 8/36 | `src/nova/api/openstack/compute/rescue.py:L46–L85` |
| `RescueController._unrescue` | method | (self, req, id, body) | private | not declared | 3/13 | `src/nova/api/openstack/compute/rescue.py:L92–L105` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/openstack/compute/rescue.py:L17)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/rescue.py:L19)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/rescue.py:L20)
- `nova.api.openstack.compute.schemas`: imports `rescue as schema` (src/nova/api/openstack/compute/rescue.py:L21)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/rescue.py:L22)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/rescue.py:L23)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/rescue.py:L24)
- `import nova.conf` (src/nova/api/openstack/compute/rescue.py:L25)
- `nova`: imports `exception` (src/nova/api/openstack/compute/rescue.py:L26)
- `nova.policies`: imports `rescue as rescue_policies` (src/nova/api/openstack/compute/rescue.py:L27)
- `nova`: imports `utils` (src/nova/api/openstack/compute/rescue.py:L28)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import rescue as schema (src/nova/api/openstack/compute/rescue.py:L21)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/api/openstack/compute/rescue.py:L30)

