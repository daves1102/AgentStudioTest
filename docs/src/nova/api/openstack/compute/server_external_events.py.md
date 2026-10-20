# src/nova/api/openstack/compute/server_external_events.py

## Overview

This file implements the `server_external_events` module, defining 1 class, 2 constants, 4 methods, 1 staticmethod, 8 imports, 3 side effects, 2 security surface entries.

Lines: total 161, code 116, comment 21, blank 24

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/server_external_events.py:L26–L26` |
| `TAG_REQUIRED` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/server_external_events.py:L29–L30` |
| `ServerExternalEventsController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/server_external_events.py:L34–L161` |
| `ServerExternalEventsController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/server_external_events.py:L36–L38` |
| `ServerExternalEventsController._is_event_tag_present_when_required` | method | (event) | private | `False` (src/nova/api/openstack/compute/server_external_events.py:L43); `True` (src/nova/api/openstack/compute/server_external_events.py:L44) | 3/4 | `src/nova/api/openstack/compute/server_external_events.py:L41–L44` |
| `ServerExternalEventsController._get_instances_all_cells` | method | (self, context, instance_uuids, instance_mappings) | private | `instances` (src/nova/api/openstack/compute/server_external_events.py:L66) | 5/19 | `src/nova/api/openstack/compute/server_external_events.py:L46–L66` |
| `ServerExternalEventsController.create` | method | (self, req, body) | public | `robj` (src/nova/api/openstack/compute/server_external_events.py:L161) | 7/63 | `src/nova/api/openstack/compute/server_external_events.py:L80–L161` |
| `ServerExternalEventsController._is_event_tag_present_when_required` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/server_external_events.py:L40–L44` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/api/openstack/compute/server_external_events.py:L15)
- `nova.api.openstack.compute.schemas`: imports `server_external_events as schema` (src/nova/api/openstack/compute/server_external_events.py:L17)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/server_external_events.py:L18)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/server_external_events.py:L19)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/server_external_events.py:L20)
- `nova`: imports `context as nova_context` (src/nova/api/openstack/compute/server_external_events.py:L21)
- `nova`: imports `objects` (src/nova/api/openstack/compute/server_external_events.py:L22)
- `nova.policies`: imports `server_external_events as see_policies` (src/nova/api/openstack/compute/server_external_events.py:L23)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import server_external_events as schema (src/nova/api/openstack/compute/server_external_events.py:L17)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/openstack/compute/server_external_events.py:L26)
- **global-mutation**: TAG_REQUIRED = ('volume-extended', 'power-update', (src/nova/api/openstack/compute/server_external_events.py:L29)

## Security Surface

- **sink** (`db-write`): TAG_REQUIRED = ('volume-extended', 'power-update', (src/nova/api/openstack/compute/server_external_events.py:L29)
- **sink** (`db-write`): instances.update( (src/nova/api/openstack/compute/server_external_events.py:L60)

