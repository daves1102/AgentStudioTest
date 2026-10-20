# src/nova/api/openstack/compute/admin_actions.py

## Overview

This file implements the `admin_actions` module, defining 1 class, 4 methods, 1 variable, 11 imports, 1 side effect.

Lines: total 91, code 65, comment 15, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_removal_reason` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/admin_actions.py:L28–L32` |
| `AdminActionsController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/admin_actions.py:L36–L91` |
| `AdminActionsController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/admin_actions.py:L37–L39` |
| `AdminActionsController._reset_network` | method | (self, req, id, body) | private | not declared | 1/2 | `src/nova/api/openstack/compute/admin_actions.py:L46–L48` |
| `AdminActionsController._inject_network_info` | method | (self, req, id, body) | private | not declared | 2/9 | `src/nova/api/openstack/compute/admin_actions.py:L55–L64` |
| `AdminActionsController._reset_state` | method | (self, req, id, body) | private | not declared | 1/15 | `src/nova/api/openstack/compute/admin_actions.py:L71–L91` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/openstack/compute/admin_actions.py:L15)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/admin_actions.py:L17)
- `nova.api.openstack.compute.schemas`: imports `admin_actions as schema` (src/nova/api/openstack/compute/admin_actions.py:L18)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/admin_actions.py:L19)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/admin_actions.py:L20)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/admin_actions.py:L21)
- `nova.compute`: imports `instance_actions` (src/nova/api/openstack/compute/admin_actions.py:L22)
- `nova.compute`: imports `vm_states` (src/nova/api/openstack/compute/admin_actions.py:L23)
- `nova`: imports `exception` (src/nova/api/openstack/compute/admin_actions.py:L24)
- `nova`: imports `objects` (src/nova/api/openstack/compute/admin_actions.py:L25)
- `nova.policies`: imports `admin_actions as aa_policies` (src/nova/api/openstack/compute/admin_actions.py:L26)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import admin_actions as schema (src/nova/api/openstack/compute/admin_actions.py:L18)

