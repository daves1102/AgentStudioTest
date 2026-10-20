# src/nova/api/openstack/compute/aggregates.py

## Overview

This file implements the `aggregates` module, defining 1 class, 1 constant, 1 function, 12 methods, 15 imports, 3 side effects, 3 security surface entries.

Lines: total 325, code 246, comment 33, blank 46

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/aggregates.py:L36–L36` |
| `_get_context` | function | (req) | unexported | `req.environ['nova.context']` (src/nova/api/openstack/compute/aggregates.py:L40) | 1/2 | `src/nova/api/openstack/compute/aggregates.py:L39–L40` |
| `AggregateController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/aggregates.py:L44–L325` |
| `AggregateController.__init__` | method | (self) | public | not declared | 1/4 | `src/nova/api/openstack/compute/aggregates.py:L47–L50` |
| `AggregateController.index` | method | (self, req) | public | `{'aggregates': [self._marshall_aggregate(req, a)['aggregate'] for a in aggregates]}` (src/nova/api/openstack/compute/aggregates.py:L62) | 2/6 | `src/nova/api/openstack/compute/aggregates.py:L57–L63` |
| `AggregateController.create` | method | (self, req, body) | public | `agg` (src/nova/api/openstack/compute/aggregates.py:L101) | 5/21 | `src/nova/api/openstack/compute/aggregates.py:L72–L101` |
| `AggregateController.show` | method | (self, req, id) | public | `self._marshall_aggregate(req, aggregate)` (src/nova/api/openstack/compute/aggregates.py:L122) | 3/12 | `src/nova/api/openstack/compute/aggregates.py:L108–L122` |
| `AggregateController.update` | method | (self, req, id, body) | public | `self._marshall_aggregate(req, aggregate)` (src/nova/api/openstack/compute/aggregates.py:L151) | 6/19 | `src/nova/api/openstack/compute/aggregates.py:L129–L151` |
| `AggregateController.delete` | method | (self, req, id) | public | not declared | 4/13 | `src/nova/api/openstack/compute/aggregates.py:L158–L173` |
| `AggregateController._add_host` | method | (self, req, id, body) | private | `self._marshall_aggregate(req, aggregate)` (src/nova/api/openstack/compute/aggregates.py:L204) | 4/18 | `src/nova/api/openstack/compute/aggregates.py:L183–L204` |
| `AggregateController._remove_host` | method | (self, req, id, body) | private | `self._marshall_aggregate(req, aggregate)` (src/nova/api/openstack/compute/aggregates.py:L241) | 4/24 | `src/nova/api/openstack/compute/aggregates.py:L214–L241` |
| `AggregateController._set_metadata` | method | (self, req, id, body) | private | `self._marshall_aggregate(req, aggregate)` (src/nova/api/openstack/compute/aggregates.py:L268) | 4/17 | `src/nova/api/openstack/compute/aggregates.py:L248–L268` |
| `AggregateController._marshall_aggregate` | method | (self, req, aggregate) | private | `{"aggregate": _aggregate}` (src/nova/api/openstack/compute/aggregates.py:L277) | 3/7 | `src/nova/api/openstack/compute/aggregates.py:L270–L277` |
| `AggregateController._build_aggregate_items` | method | (self, req, aggregate) | private | not declared | 6/8 | `src/nova/api/openstack/compute/aggregates.py:L279–L291` |
| `AggregateController.images` | method | (self, req, id, body) | public | not declared | 6/21 | `src/nova/api/openstack/compute/aggregates.py:L299–L325` |

## Dependencies

- `import datetime` (src/nova/api/openstack/compute/aggregates.py:L18)
- `oslo_log`: imports `log as logging` (src/nova/api/openstack/compute/aggregates.py:L20)
- `webob`: imports `exc` (src/nova/api/openstack/compute/aggregates.py:L21)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/aggregates.py:L23)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/aggregates.py:L24)
- `nova.api.openstack.compute.schemas`: imports `aggregate_images` (src/nova/api/openstack/compute/aggregates.py:L25)
- `nova.api.openstack.compute.schemas`: imports `aggregates as schema` (src/nova/api/openstack/compute/aggregates.py:L26)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/aggregates.py:L27)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/aggregates.py:L28)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/aggregates.py:L29)
- `nova.conductor`: imports `api as conductor` (src/nova/api/openstack/compute/aggregates.py:L30)
- `nova`: imports `exception` (src/nova/api/openstack/compute/aggregates.py:L31)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/aggregates.py:L32)
- `nova.policies`: imports `aggregates as aggr_policies` (src/nova/api/openstack/compute/aggregates.py:L33)
- `nova`: imports `utils` (src/nova/api/openstack/compute/aggregates.py:L34)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import aggregate_images (src/nova/api/openstack/compute/aggregates.py:L25)
- **network**: from nova.api.openstack.compute.schemas import aggregates as schema (src/nova/api/openstack/compute/aggregates.py:L26)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/openstack/compute/aggregates.py:L36)

## Security Surface

- **sink** (`db-write`): @validation.schema(schema.update, '2.1') (src/nova/api/openstack/compute/aggregates.py:L126)
- **sink** (`db-write`): def update(self, req, id, body): (src/nova/api/openstack/compute/aggregates.py:L129)
- **sink** (`db-write`): context.can(aggr_policies.POLICY_ROOT % 'update', target={}) (src/nova/api/openstack/compute/aggregates.py:L132)

