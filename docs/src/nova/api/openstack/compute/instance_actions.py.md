# src/nova/api/openstack/compute/instance_actions.py

## Overview

This file implements the `instance_actions` module, defining 1 class, 3 constants, 1 field, 6 methods, 1 staticmethod, 13 imports, 5 side effects, 1 security surface entry.

Lines: total 215, code 154, comment 35, blank 26

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ACTION_KEYS` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/instance_actions.py:L34–L35` |
| `ACTION_KEYS_V258` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/instance_actions.py:L36–L37` |
| `EVENT_KEYS` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/instance_actions.py:L38–L38` |
| `InstanceActionsController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/instance_actions.py:L42–L215` |
| `InstanceActionsController._view_builder_class` | field | — | private | not declared | — | `src/nova/api/openstack/compute/instance_actions.py:L43–L43` |
| `InstanceActionsController.__init__` | method | (self) | public | not declared | 1/4 | `src/nova/api/openstack/compute/instance_actions.py:L45–L48` |
| `InstanceActionsController._format_action` | method | (self, action_raw, action_keys) | private | `action` (src/nova/api/openstack/compute/instance_actions.py:L54) | 2/5 | `src/nova/api/openstack/compute/instance_actions.py:L50–L54` |
| `InstanceActionsController._format_event` | method | (event_raw, project_id, show_traceback=False, show_host=False, show_hostid=False, show_details=False) | private | `event` (src/nova/api/openstack/compute/instance_actions.py:L73) | 7/15 | `src/nova/api/openstack/compute/instance_actions.py:L57–L73` |
| `InstanceActionsController._get_instance` | method | (self, req, context, server_id) | private | `common.get_instance(self.compute_api, context, server_id)` (src/nova/api/openstack/compute/instance_actions.py:L77); `common.get_instance(self.compute_api, context, server_id)` (src/nova/api/openstack/compute/instance_actions.py:L80) | 2/5 | `src/nova/api/openstack/compute/instance_actions.py:L75–L80` |
| `InstanceActionsController.index` | method | (self, req, server_id) | public | `actions_dict` (src/nova/api/openstack/compute/instance_actions.py:L139) | 12/43 | `src/nova/api/openstack/compute/instance_actions.py:L89–L139` |
| `InstanceActionsController.show` | method | (self, req, server_id, id) | public | `{'instanceAction': action}` (src/nova/api/openstack/compute/instance_actions.py:L215) | 9/42 | `src/nova/api/openstack/compute/instance_actions.py:L149–L215` |
| `InstanceActionsController._format_event` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/instance_actions.py:L56–L73` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/openstack/compute/instance_actions.py:L16)
- `oslo_utils`: imports `timeutils` (src/nova/api/openstack/compute/instance_actions.py:L18)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/instance_actions.py:L20)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/instance_actions.py:L21)
- `nova.api.openstack.compute.schemas`: imports `instance_actions as schema` (src/nova/api/openstack/compute/instance_actions.py:L22)
- `nova.api.openstack.compute.views`: imports `instance_actions as instance_actions_view` (src/nova/api/openstack/compute/instance_actions.py:L23–L24)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/instance_actions.py:L25)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/instance_actions.py:L26)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/instance_actions.py:L27)
- `nova`: imports `exception` (src/nova/api/openstack/compute/instance_actions.py:L28)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/instance_actions.py:L29)
- `nova.policies`: imports `instance_actions as ia_policies` (src/nova/api/openstack/compute/instance_actions.py:L30)
- `nova`: imports `utils` (src/nova/api/openstack/compute/instance_actions.py:L31)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import instance_actions as schema (src/nova/api/openstack/compute/instance_actions.py:L22)
- **network**: from nova.api.openstack.compute.views \ (src/nova/api/openstack/compute/instance_actions.py:L23)
- **global-mutation**: ACTION_KEYS = ['action', 'instance_uuid', 'request_id', 'user_id', (src/nova/api/openstack/compute/instance_actions.py:L34)
- **global-mutation**: ACTION_KEYS_V258 = ['action', 'instance_uuid', 'request_id', 'user_id', (src/nova/api/openstack/compute/instance_actions.py:L36)
- **global-mutation**: EVENT_KEYS = ['event', 'start_time', 'finish_time', 'result', 'traceback'] (src/nova/api/openstack/compute/instance_actions.py:L38)

## Security Surface

- **sink** (`db-write`): search_opts.update(req.GET) (src/nova/api/openstack/compute/instance_actions.py:L98)

