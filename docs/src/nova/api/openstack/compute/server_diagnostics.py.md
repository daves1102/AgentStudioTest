# src/nova/api/openstack/compute/server_diagnostics.py

## Overview

This file implements the `server_diagnostics` module, defining 1 class, 1 field, 2 methods, 10 imports, 2 side effects.

Lines: total 61, code 39, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServerDiagnosticsController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/server_diagnostics.py:L30–L61` |
| `ServerDiagnosticsController._view_builder_class` | field | — | private | not declared | — | `src/nova/api/openstack/compute/server_diagnostics.py:L31–L31` |
| `ServerDiagnosticsController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/server_diagnostics.py:L33–L35` |
| `ServerDiagnosticsController.index` | method | (self, req, server_id) | public | `self._view_builder.instance_diagnostics(diagnostics)` (src/nova/api/openstack/compute/server_diagnostics.py:L52); `self.compute_api.get_diagnostics(context, instance)` (src/nova/api/openstack/compute/server_diagnostics.py:L54) | 5/18 | `src/nova/api/openstack/compute/server_diagnostics.py:L42–L61` |

## Dependencies

- `import webob` (src/nova/api/openstack/compute/server_diagnostics.py:L16)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/server_diagnostics.py:L18)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/server_diagnostics.py:L19)
- `nova.api.openstack.compute.schemas`: imports `server_diagnostics as schema` (src/nova/api/openstack/compute/server_diagnostics.py:L20)
- `nova.api.openstack.compute.views`: imports `server_diagnostics` (src/nova/api/openstack/compute/server_diagnostics.py:L21)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/server_diagnostics.py:L22)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/server_diagnostics.py:L23)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/server_diagnostics.py:L24)
- `nova`: imports `exception` (src/nova/api/openstack/compute/server_diagnostics.py:L25)
- `nova.policies`: imports `server_diagnostics as sd_policies` (src/nova/api/openstack/compute/server_diagnostics.py:L26)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import server_diagnostics as schema (src/nova/api/openstack/compute/server_diagnostics.py:L20)
- **network**: from nova.api.openstack.compute.views import server_diagnostics (src/nova/api/openstack/compute/server_diagnostics.py:L21)

