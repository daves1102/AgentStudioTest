# src/nova/api/openstack/compute/server_topology.py

## Overview

This file implements the `server_topology` module, defining 1 class, 3 methods, 6 imports, 1 side effect.

Lines: total 82, code 53, comment 12, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServerTopologyController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/server_topology.py:L23–L82` |
| `ServerTopologyController.__init__` | method | (self, *args, **kwargs) | public | not declared | 1/3 | `src/nova/api/openstack/compute/server_topology.py:L25–L27` |
| `ServerTopologyController.index` | method | (self, req, server_id) | public | `self._get_numa_topology(context, instance, show_host_info)` (src/nova/api/openstack/compute/server_topology.py:L47) | 1/11 | `src/nova/api/openstack/compute/server_topology.py:L34–L47` |
| `ServerTopologyController._get_numa_topology` | method | (self, context, instance, show_host_info) | private | `{ 'nodes': [], 'pagesize_kb': None }` (src/nova/api/openstack/compute/server_topology.py:L52); `topo` (src/nova/api/openstack/compute/server_topology.py:L82) | 6/26 | `src/nova/api/openstack/compute/server_topology.py:L49–L82` |

## Dependencies

- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/server_topology.py:L14)
- `nova.api.openstack.compute.schemas`: imports `server_topology as schema` (src/nova/api/openstack/compute/server_topology.py:L15)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/server_topology.py:L16)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/server_topology.py:L17)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/server_topology.py:L18)
- `nova.policies`: imports `server_topology as st_policies` (src/nova/api/openstack/compute/server_topology.py:L19)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import server_topology as schema (src/nova/api/openstack/compute/server_topology.py:L15)

