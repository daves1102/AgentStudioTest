# src/nova/api/openstack/compute/server_shares.py

## Overview

This file implements the `server_shares` module, defining 1 class, 1 field, 3 functions, 7 methods, 17 imports, 2 side effects.

Lines: total 265, code 211, comment 18, blank 36

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_get_instance_mapping` | function | (context, server_id) | unexported | `objects.InstanceMapping.get_by_instance_uuid(context, server_id)` (src/nova/api/openstack/compute/server_shares.py:L36) | 2/5 | `src/nova/api/openstack/compute/server_shares.py:L34–L38` |
| `ServerSharesController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/server_shares.py:L42–L265` |
| `ServerSharesController._view_builder_class` | field | — | private | not declared | — | `src/nova/api/openstack/compute/server_shares.py:L43–L43` |
| `ServerSharesController.__init__` | method | (self) | public | not declared | 1/4 | `src/nova/api/openstack/compute/server_shares.py:L45–L48` |
| `ServerSharesController._get_instance_from_server_uuid` | method | (self, context, server_id) | private | `instance` (src/nova/api/openstack/compute/server_shares.py:L52) | 1/3 | `src/nova/api/openstack/compute/server_shares.py:L50–L52` |
| `ServerSharesController._check_instance_in_valid_state` | method | (self, context, server_id, action) | private | `instance` (src/nova/api/openstack/compute/server_shares.py:L72) | 6/19 | `src/nova/api/openstack/compute/server_shares.py:L54–L72` |
| `ServerSharesController.index` | method | (self, req, server_id) | public | `self._view_builder._list_view(db_shares)` (src/nova/api/openstack/compute/server_shares.py:L93) | 1/11 | `src/nova/api/openstack/compute/server_shares.py:L79–L93` |
| `ServerSharesController.create` | method | (self, req, server_id, body) | public | `view` (src/nova/api/openstack/compute/server_shares.py:L199) | 8/48 | `src/nova/api/openstack/compute/server_shares.py:L100–L199` |
| `ServerSharesController.create._try_create_share_mapping` | function | (context, share_mapping) | private | not declared | — | `src/nova/api/openstack/compute/server_shares.py:L101–L123` |
| `ServerSharesController.create._check_manila_share` | function | (manila_share_data) | private | not declared | — | `src/nova/api/openstack/compute/server_shares.py:L125–L144` |
| `ServerSharesController.show` | method | (self, req, server_id, id) | public | `view` (src/nova/api/openstack/compute/server_shares.py:L230) | 2/19 | `src/nova/api/openstack/compute/server_shares.py:L206–L230` |
| `ServerSharesController.delete` | method | (self, req, server_id, id) | public | not declared | 2/25 | `src/nova/api/openstack/compute/server_shares.py:L236–L265` |

## Dependencies

- `import webob` (src/nova/api/openstack/compute/server_shares.py:L13)
- `oslo_db`: imports `exception as db_exc` (src/nova/api/openstack/compute/server_shares.py:L15)
- `oslo_utils`: imports `uuidutils` (src/nova/api/openstack/compute/server_shares.py:L16)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/server_shares.py:L18)
- `nova.api.openstack.compute.schemas`: imports `server_shares as schema` (src/nova/api/openstack/compute/server_shares.py:L19)
- `nova.api.openstack.compute.views`: imports `server_shares` (src/nova/api/openstack/compute/server_shares.py:L20)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/server_shares.py:L21)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/server_shares.py:L22)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/server_shares.py:L23)
- `nova.compute`: imports `vm_states` (src/nova/api/openstack/compute/server_shares.py:L24)
- `nova`: imports `context as nova_context` (src/nova/api/openstack/compute/server_shares.py:L25)
- `nova`: imports `exception` (src/nova/api/openstack/compute/server_shares.py:L26)
- `nova`: imports `objects` (src/nova/api/openstack/compute/server_shares.py:L27)
- `nova.objects`: imports `fields` (src/nova/api/openstack/compute/server_shares.py:L28)
- `nova.policies`: imports `server_shares as ss_policies` (src/nova/api/openstack/compute/server_shares.py:L29)
- `nova.share`: imports `manila` (src/nova/api/openstack/compute/server_shares.py:L30)
- `nova.virt`: imports `hardware as hw` (src/nova/api/openstack/compute/server_shares.py:L31)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import server_shares as schema (src/nova/api/openstack/compute/server_shares.py:L19)
- **network**: from nova.api.openstack.compute.views import server_shares (src/nova/api/openstack/compute/server_shares.py:L20)

