# src/nova/api/openstack/compute/multinic.py

## Overview

This file implements the `multinic` module, defining 1 class, 3 methods, 8 imports, 1 side effect.

Lines: total 74, code 49, comment 14, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `MultinicController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/multinic.py:L30–L74` |
| `MultinicController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/multinic.py:L33–L35` |
| `MultinicController._add_fixed_ip` | method | (self, req, id, body) | private | not declared | 2/10 | `src/nova/api/openstack/compute/multinic.py:L43–L54` |
| `MultinicController._remove_fixed_ip` | method | (self, req, id, body) | private | not declared | 2/10 | `src/nova/api/openstack/compute/multinic.py:L62–L74` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/openstack/compute/multinic.py:L18)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/multinic.py:L20)
- `nova.api.openstack.compute.schemas`: imports `multinic as schema` (src/nova/api/openstack/compute/multinic.py:L21)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/multinic.py:L22)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/multinic.py:L23)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/multinic.py:L24)
- `nova`: imports `exception` (src/nova/api/openstack/compute/multinic.py:L25)
- `nova.policies`: imports `multinic as multinic_policies` (src/nova/api/openstack/compute/multinic.py:L26)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import multinic as schema (src/nova/api/openstack/compute/multinic.py:L21)

