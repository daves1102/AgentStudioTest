# src/nova/api/openstack/compute/admin_password.py

## Overview

This file implements the `admin_password` module, defining 1 class, 2 methods, 9 imports, 1 side effect.

Lines: total 61, code 38, comment 16, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `AdminPasswordController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/admin_password.py:L28–L61` |
| `AdminPasswordController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/admin_password.py:L30–L32` |
| `AdminPasswordController.change_password` | method | (self, req, id, body) | public | not declared | 4/19 | `src/nova/api/openstack/compute/admin_password.py:L42–L61` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/openstack/compute/admin_password.py:L15)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/admin_password.py:L17)
- `nova.api.openstack.compute.schemas`: imports `admin_password as schema` (src/nova/api/openstack/compute/admin_password.py:L18)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/admin_password.py:L19)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/admin_password.py:L20)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/admin_password.py:L21)
- `nova`: imports `exception` (src/nova/api/openstack/compute/admin_password.py:L22)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/admin_password.py:L23)
- `nova.policies`: imports `admin_password as ap_policies` (src/nova/api/openstack/compute/admin_password.py:L24)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import admin_password as schema (src/nova/api/openstack/compute/admin_password.py:L18)

