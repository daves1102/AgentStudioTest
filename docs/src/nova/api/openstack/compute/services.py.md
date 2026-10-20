# src/nova/api/openstack/compute/services.py

## Overview

This file implements the `services` module, defining 1 class, 1 constant, 19 methods, 1 property, 1 staticmethod, 18 imports, 2 side effects, 8 security surface entries.

Lines: total 504, code 347, comment 91, blank 66

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/services.py:L35–L35` |
| `ServiceController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/services.py:L39–L504` |
| `ServiceController.__init__` | method | (self) | public | not declared | 1/8 | `src/nova/api/openstack/compute/services.py:L41–L48` |
| `ServiceController.placementclient` | method | (self) | public | `report.report_client_singleton()` (src/nova/api/openstack/compute/services.py:L52) | 1/2 | `src/nova/api/openstack/compute/services.py:L51–L52` |
| `ServiceController._get_services` | method | (self, req) | private | `_services` (src/nova/api/openstack/compute/services.py:L82) | 11/21 | `src/nova/api/openstack/compute/services.py:L54–L82` |
| `ServiceController._get_service_detail` | method | (self, svc, additional_fields, req, cell_down_support=False) | private | `{'binary': svc.binary, 'host': svc.host, 'status': "UNKNOWN"}` (src/nova/api/openstack/compute/services.py:L90); `service_detail` (src/nova/api/openstack/compute/services.py:L125) | 9/29 | `src/nova/api/openstack/compute/services.py:L84–L125` |
| `ServiceController._get_services_list` | method | (self, req, additional_fields=()) | private | `[self._get_service_detail(svc, additional_fields, req, cell_down_support=cell_down_support) for svc in _services]` (src/nova/api/openstack/compute/services.py:L130) | 2/5 | `src/nova/api/openstack/compute/services.py:L127–L131` |
| `ServiceController._enable` | method | (self, body, context) | private | `self._enable_disable(body, context, "enabled", {'disabled': False, 'disabled_reason': None})` (src/nova/api/openstack/compute/services.py:L135) | 1/4 | `src/nova/api/openstack/compute/services.py:L133–L137` |
| `ServiceController._disable` | method | (self, body, context, reason=None) | private | `self._enable_disable(body, context, "disabled", {'disabled': True, 'disabled_reason': reason})` (src/nova/api/openstack/compute/services.py:L141) | 1/4 | `src/nova/api/openstack/compute/services.py:L139–L143` |
| `ServiceController._disable_log_reason` | method | (self, body, context) | private | `self._disable(body, context, reason)` (src/nova/api/openstack/compute/services.py:L153) | 2/7 | `src/nova/api/openstack/compute/services.py:L145–L153` |
| `ServiceController._enable_disable` | method | (self, body, context, status, params_to_update) | private | `ret_value` (src/nova/api/openstack/compute/services.py:L171) | 2/13 | `src/nova/api/openstack/compute/services.py:L155–L171` |
| `ServiceController._forced_down` | method | (self, body, context) | private | `ret_value` (src/nova/api/openstack/compute/services.py:L191) | 4/15 | `src/nova/api/openstack/compute/services.py:L173–L191` |
| `ServiceController._update` | method | (self, context, host, binary, payload) | private | not declared | 3/12 | `src/nova/api/openstack/compute/services.py:L193–L209` |
| `ServiceController._perform_action` | method | (self, req, id, body, actions) | private | `action(body, context)` (src/nova/api/openstack/compute/services.py:L221) | 2/8 | `src/nova/api/openstack/compute/services.py:L211–L221` |
| `ServiceController._check_for_evacuations` | method | (self, context, hostname) | private | not declared | 2/13 | `src/nova/api/openstack/compute/services.py:L223–L240` |
| `ServiceController.delete` | method | (self, req, id) | public | not declared | 13/59 | `src/nova/api/openstack/compute/services.py:L245–L339` |
| `ServiceController._assert_no_in_progress_migrations` | method | (context, service_id, compute_nodes) | private | not declared | 4/18 | `src/nova/api/openstack/compute/services.py:L342–L369` |
| `ServiceController.index` | method | (self, req) | public | `{'services': _services}` (src/nova/api/openstack/compute/services.py:L390) | 2/8 | `src/nova/api/openstack/compute/services.py:L378–L390` |
| `ServiceController.update` | method | (self, req, id, body) | public | `self._update_v253(req, id, body)` (src/nova/api/openstack/compute/services.py:L412); `self._update_v21(req, id, body)` (src/nova/api/openstack/compute/services.py:L414) | 2/5 | `src/nova/api/openstack/compute/services.py:L399–L414` |
| `ServiceController._update_v21` | method | (self, req, id, body) | private | `self._perform_action(req, id, body, actions)` (src/nova/api/openstack/compute/services.py:L425) | 2/9 | `src/nova/api/openstack/compute/services.py:L416–L425` |
| `ServiceController._update_v253` | method | (self, req, id, body) | private | `{'service': self._get_service_detail( service, additional_fields, req)}` (src/nova/api/openstack/compute/services.py:L503) | 11/40 | `src/nova/api/openstack/compute/services.py:L427–L504` |
| `ServiceController.placementclient` | property | — | public | not declared | — | `src/nova/api/openstack/compute/services.py:L50–L52` |
| `ServiceController._assert_no_in_progress_migrations` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/services.py:L341–L369` |

## Dependencies

- `keystoneauth1`: imports `exceptions as ks_exc` (src/nova/api/openstack/compute/services.py:L15)
- `oslo_log`: imports `log as logging` (src/nova/api/openstack/compute/services.py:L16)
- `oslo_utils`: imports `strutils` (src/nova/api/openstack/compute/services.py:L17)
- `oslo_utils`: imports `uuidutils` (src/nova/api/openstack/compute/services.py:L18)
- `import webob.exc` (src/nova/api/openstack/compute/services.py:L19)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/services.py:L21)
- `nova.api.openstack.compute.schemas`: imports `services as schema` (src/nova/api/openstack/compute/services.py:L22)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/services.py:L23)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/services.py:L24)
- `nova`: imports `availability_zones` (src/nova/api/openstack/compute/services.py:L25)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/services.py:L26)
- `nova`: imports `exception` (src/nova/api/openstack/compute/services.py:L27)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/services.py:L28)
- `nova`: imports `objects` (src/nova/api/openstack/compute/services.py:L29)
- `nova.policies`: imports `services as services_policies` (src/nova/api/openstack/compute/services.py:L30)
- `nova.scheduler.client`: imports `report` (src/nova/api/openstack/compute/services.py:L31)
- `nova`: imports `servicegroup` (src/nova/api/openstack/compute/services.py:L32)
- `nova`: imports `utils` (src/nova/api/openstack/compute/services.py:L33)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import services as schema (src/nova/api/openstack/compute/services.py:L22)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/openstack/compute/services.py:L35)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as ks_exc (src/nova/api/openstack/compute/services.py:L15)
- **sink** (`db-write`): """Do the actual PUT/update""" (src/nova/api/openstack/compute/services.py:L194)
- **sink** (`db-write`): @validation.schema(schema.update, '2.0', '2.10') (src/nova/api/openstack/compute/services.py:L393)
- **sink** (`db-write`): def update(self, req, id, body): (src/nova/api/openstack/compute/services.py:L399)
- **sink** (`db-write`): """Perform service update (src/nova/api/openstack/compute/services.py:L400)
- **sink** (`db-write`): perform a given update, which is defined in the body of the request. (src/nova/api/openstack/compute/services.py:L409)
- **sink** (`db-write`): context.can(services_policies.BASE_POLICY_NAME % 'update', target={}) (src/nova/api/openstack/compute/services.py:L418)
- **sink** (`db-write`): context.can(services_policies.BASE_POLICY_NAME % 'update', target={}) (src/nova/api/openstack/compute/services.py:L436)

