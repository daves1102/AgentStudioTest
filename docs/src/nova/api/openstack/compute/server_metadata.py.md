# src/nova/api/openstack/compute/server_metadata.py

## Overview

This file implements the `server_metadata` module, defining 1 class, 9 methods, 9 imports, 1 side effect, 4 security surface entries.

Lines: total 168, code 128, comment 19, blank 21

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServerMetadataController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/server_metadata.py:L30–L168` |
| `ServerMetadataController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/server_metadata.py:L33–L35` |
| `ServerMetadataController._get_metadata` | method | (self, context, server) | private | `meta_dict` (src/nova/api/openstack/compute/server_metadata.py:L49) | 3/10 | `src/nova/api/openstack/compute/server_metadata.py:L37–L49` |
| `ServerMetadataController.index` | method | (self, req, server_id) | public | `{'metadata': self._get_metadata(context, server)}` (src/nova/api/openstack/compute/server_metadata.py:L61) | 1/6 | `src/nova/api/openstack/compute/server_metadata.py:L55–L61` |
| `ServerMetadataController.create` | method | (self, req, server_id, body) | public | `{'metadata': new_metadata}` (src/nova/api/openstack/compute/server_metadata.py:L79) | 1/11 | `src/nova/api/openstack/compute/server_metadata.py:L68–L79` |
| `ServerMetadataController.update` | method | (self, req, server_id, id, body) | public | `{'meta': meta_item}` (src/nova/api/openstack/compute/server_metadata.py:L99) | 2/14 | `src/nova/api/openstack/compute/server_metadata.py:L84–L99` |
| `ServerMetadataController.update_all` | method | (self, req, server_id, body) | public | `{'metadata': new_metadata}` (src/nova/api/openstack/compute/server_metadata.py:L115) | 1/11 | `src/nova/api/openstack/compute/server_metadata.py:L104–L115` |
| `ServerMetadataController._update_instance_metadata` | method | (self, context, server, metadata, delete) | private | `self.compute_api.update_instance_metadata( context, server, metadata, delete)` (src/nova/api/openstack/compute/server_metadata.py:L119) | 4/11 | `src/nova/api/openstack/compute/server_metadata.py:L117–L127` |
| `ServerMetadataController.show` | method | (self, req, server_id, id) | public | `{'meta': {id: data[id]}}` (src/nova/api/openstack/compute/server_metadata.py:L142) | 2/11 | `src/nova/api/openstack/compute/server_metadata.py:L133–L145` |
| `ServerMetadataController.delete` | method | (self, req, server_id, id) | public | not declared | 4/16 | `src/nova/api/openstack/compute/server_metadata.py:L150–L168` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/openstack/compute/server_metadata.py:L17)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/server_metadata.py:L19)
- `nova.api.openstack.compute.schemas`: imports `server_metadata as schema` (src/nova/api/openstack/compute/server_metadata.py:L20)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/server_metadata.py:L21)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/server_metadata.py:L22)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/server_metadata.py:L23)
- `nova`: imports `exception` (src/nova/api/openstack/compute/server_metadata.py:L24)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/server_metadata.py:L25)
- `nova.policies`: imports `server_metadata as sm_policies` (src/nova/api/openstack/compute/server_metadata.py:L26)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import server_metadata as schema (src/nova/api/openstack/compute/server_metadata.py:L20)

## Security Surface

- **sink** (`db-write`): @validation.schema(schema.update) (src/nova/api/openstack/compute/server_metadata.py:L82)
- **sink** (`db-write`): def update(self, req, server_id, id, body): (src/nova/api/openstack/compute/server_metadata.py:L84)
- **sink** (`db-write`): context.can(sm_policies.POLICY_ROOT % 'update', (src/nova/api/openstack/compute/server_metadata.py:L87)
- **sink** (`db-write`): state_error, 'update metadata', server.uuid) (src/nova/api/openstack/compute/server_metadata.py:L127)

