# src/nova/api/openstack/compute/server_tags.py

## Overview

This file implements the `server_tags` module, defining 1 class, 1 field, 2 functions, 8 methods, 16 imports, 2 side effects, 5 security surface entries.

Lines: total 232, code 182, comment 12, blank 38

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_get_tags_names` | function | (tags) | unexported | `[t.tag for t in tags]` (src/nova/api/openstack/compute/server_tags.py:L33) | 2/2 | `src/nova/api/openstack/compute/server_tags.py:L32–L33` |
| `_get_instance_mapping` | function | (context, server_id) | unexported | `objects.InstanceMapping.get_by_instance_uuid(context, server_id)` (src/nova/api/openstack/compute/server_tags.py:L38) | 2/6 | `src/nova/api/openstack/compute/server_tags.py:L36–L41` |
| `ServerTagsController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/server_tags.py:L45–L232` |
| `ServerTagsController._view_builder_class` | field | — | private | not declared | — | `src/nova/api/openstack/compute/server_tags.py:L46–L46` |
| `ServerTagsController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/server_tags.py:L48–L50` |
| `ServerTagsController._check_instance_in_valid_state` | method | (self, context, server_id, action) | private | `instance` (src/nova/api/openstack/compute/server_tags.py:L62) | 2/11 | `src/nova/api/openstack/compute/server_tags.py:L52–L62` |
| `ServerTagsController.show` | method | (self, req, server_id, id) | public | not declared | 3/14 | `src/nova/api/openstack/compute/server_tags.py:L69–L84` |
| `ServerTagsController.index` | method | (self, req, server_id) | public | `{'tags': _get_tags_names(tags)}` (src/nova/api/openstack/compute/server_tags.py:L102) | 2/11 | `src/nova/api/openstack/compute/server_tags.py:L90–L102` |
| `ServerTagsController.update` | method | (self, req, server_id, id, body) | public | `webob.Response(status_int=204)` (src/nova/api/openstack/compute/server_tags.py:L139); `response` (src/nova/api/openstack/compute/server_tags.py:L156) | 6/40 | `src/nova/api/openstack/compute/server_tags.py:L108–L156` |
| `ServerTagsController.update_all` | method | (self, req, server_id, body) | public | `{'tags': _get_tags_names(tags)}` (src/nova/api/openstack/compute/server_tags.py:L182) | 2/17 | `src/nova/api/openstack/compute/server_tags.py:L162–L182` |
| `ServerTagsController.delete` | method | (self, req, server_id, id) | public | not declared | 2/18 | `src/nova/api/openstack/compute/server_tags.py:L188–L208` |
| `ServerTagsController.delete_all` | method | (self, req, server_id) | public | not declared | 2/16 | `src/nova/api/openstack/compute/server_tags.py:L214–L232` |

## Dependencies

- `import jsonschema` (src/nova/api/openstack/compute/server_tags.py:L13)
- `import webob` (src/nova/api/openstack/compute/server_tags.py:L14)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/server_tags.py:L16)
- `nova.api.openstack.compute.schemas`: imports `server_tags as schema` (src/nova/api/openstack/compute/server_tags.py:L17)
- `nova.api.openstack.compute.views`: imports `server_tags` (src/nova/api/openstack/compute/server_tags.py:L18)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/server_tags.py:L19)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/server_tags.py:L20)
- `nova.api.validation`: imports `parameter_types` (src/nova/api/openstack/compute/server_tags.py:L21)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/server_tags.py:L22)
- `nova.compute`: imports `vm_states` (src/nova/api/openstack/compute/server_tags.py:L23)
- `nova`: imports `context as nova_context` (src/nova/api/openstack/compute/server_tags.py:L24)
- `nova`: imports `exception` (src/nova/api/openstack/compute/server_tags.py:L25)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/server_tags.py:L26)
- `nova.notifications`: imports `base as notifications_base` (src/nova/api/openstack/compute/server_tags.py:L27)
- `nova`: imports `objects` (src/nova/api/openstack/compute/server_tags.py:L28)
- `nova.policies`: imports `server_tags as st_policies` (src/nova/api/openstack/compute/server_tags.py:L29)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import server_tags as schema (src/nova/api/openstack/compute/server_tags.py:L17)
- **network**: from nova.api.openstack.compute.views import server_tags (src/nova/api/openstack/compute/server_tags.py:L18)

## Security Surface

- **sink** (`db-write`): @validation.schema(schema.update) (src/nova/api/openstack/compute/server_tags.py:L106)
- **sink** (`db-write`): def update(self, req, server_id, id, body): (src/nova/api/openstack/compute/server_tags.py:L108)
- **sink** (`db-write`): context.can(st_policies.POLICY_ROOT % 'update', (src/nova/api/openstack/compute/server_tags.py:L111)
- **sink** (`db-write`): cctxt, server_id, 'update tag') (src/nova/api/openstack/compute/server_tags.py:L116)
- **sink** (`db-write`): cctxt, server_id, 'update tags') (src/nova/api/openstack/compute/server_tags.py:L170)

