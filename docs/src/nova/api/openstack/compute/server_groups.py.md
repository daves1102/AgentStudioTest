# src/nova/api/openstack/compute/server_groups.py

## Overview

This file implements the `server_groups` module, defining 1 class, 2 constants, 2 functions, 5 methods, 18 imports, 3 side effects.

Lines: total 283, code 205, comment 51, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/server_groups.py:L39–L39` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/server_groups.py:L41–L41` |
| `_get_not_deleted` | function | (context, uuids) | unexported | `found_inst_uuids` (src/nova/api/openstack/compute/server_groups.py:L75) | 6/23 | `src/nova/api/openstack/compute/server_groups.py:L44–L75` |
| `_should_enable_custom_max_server_rules` | function | (context, rules) | unexported | `False` (src/nova/api/openstack/compute/server_groups.py:L83); `True` (src/nova/api/openstack/compute/server_groups.py:L84) | 4/7 | `src/nova/api/openstack/compute/server_groups.py:L78–L84` |
| `ServerGroupController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/server_groups.py:L88–L283` |
| `ServerGroupController._format_server_group` | method | (self, context, group, req, not_deleted_inst_uuids=None) | private | `server_group` (src/nova/api/openstack/compute/server_groups.py:L131) | 6/22 | `src/nova/api/openstack/compute/server_groups.py:L91–L131` |
| `ServerGroupController.show` | method | (self, req, id) | public | `{'server_group': self._format_server_group(context, sg, req)}` (src/nova/api/openstack/compute/server_groups.py:L149) | 2/9 | `src/nova/api/openstack/compute/server_groups.py:L140–L149` |
| `ServerGroupController.delete` | method | (self, req, id) | public | not declared | 3/12 | `src/nova/api/openstack/compute/server_groups.py:L154–L166` |
| `ServerGroupController.index` | method | (self, req) | public | `{'server_groups': result}` (src/nova/api/openstack/compute/server_groups.py:L206) | 6/19 | `src/nova/api/openstack/compute/server_groups.py:L175–L206` |
| `ServerGroupController.create` | method | (self, req, body) | public | `{'server_group': self._format_server_group(context, sg, req)}` (src/nova/api/openstack/compute/server_groups.py:L283) | 11/54 | `src/nova/api/openstack/compute/server_groups.py:L216–L283` |

## Dependencies

- `import collections` (src/nova/api/openstack/compute/server_groups.py:L18)
- `import itertools` (src/nova/api/openstack/compute/server_groups.py:L19)
- `oslo_log`: imports `log as logging` (src/nova/api/openstack/compute/server_groups.py:L21)
- `import webob` (src/nova/api/openstack/compute/server_groups.py:L22)
- `webob`: imports `exc` (src/nova/api/openstack/compute/server_groups.py:L23)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/server_groups.py:L25)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/server_groups.py:L26)
- `nova.api.openstack.compute.schemas`: imports `server_groups as schema` (src/nova/api/openstack/compute/server_groups.py:L27)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/server_groups.py:L28)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/server_groups.py:L29)
- `import nova.conf` (src/nova/api/openstack/compute/server_groups.py:L30)
- `nova`: imports `context as nova_context` (src/nova/api/openstack/compute/server_groups.py:L31)
- `import nova.exception` (src/nova/api/openstack/compute/server_groups.py:L32)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/server_groups.py:L33)
- `nova.limit`: imports `local as local_limit` (src/nova/api/openstack/compute/server_groups.py:L34)
- `nova`: imports `objects` (src/nova/api/openstack/compute/server_groups.py:L35)
- `nova.objects`: imports `service` (src/nova/api/openstack/compute/server_groups.py:L36)
- `nova.policies`: imports `server_groups as sg_policies` (src/nova/api/openstack/compute/server_groups.py:L37)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import server_groups as schema (src/nova/api/openstack/compute/server_groups.py:L27)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/openstack/compute/server_groups.py:L39)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/api/openstack/compute/server_groups.py:L41)

