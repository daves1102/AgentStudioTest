# src/nova/api/openstack/compute/quota_sets.py

## Overview

This file implements the `quota_sets` module, defining 1 class, 2 constants, 1 function, 9 methods, 2 variables, 15 imports, 3 side effects, 3 security surface entries.

Lines: total 257, code 180, comment 45, blank 32

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/quota_sets.py:L34–L34` |
| `QUOTAS` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/quota_sets.py:L35–L35` |
| `FILTERED_QUOTAS_v236` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/quota_sets.py:L37–L39` |
| `FILTERED_QUOTAS_v257` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/quota_sets.py:L41–L41` |
| `QuotaSetsController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/quota_sets.py:L50–L257` |
| `QuotaSetsController._format_quota_set` | method | (self, project_id, quota_set, filtered_quotas) | private | `{'quota_set': result}` (src/nova/api/openstack/compute/quota_sets.py:L62) | 5/8 | `src/nova/api/openstack/compute/quota_sets.py:L52–L62` |
| `QuotaSetsController._validate_quota_limit` | method | (self, resource, limit, minimum, maximum) | private | not declared | 3/13 | `src/nova/api/openstack/compute/quota_sets.py:L64–L79` |
| `QuotaSetsController._validate_quota_limit.conv_inf` | function | (value) | public | `float("inf") if value == -1 else value` (src/nova/api/openstack/compute/quota_sets.py:L66) | — | `src/nova/api/openstack/compute/quota_sets.py:L65–L66` |
| `QuotaSetsController._get_quotas` | method | (self, context, id, user_id=None, usages=False) | private | `values` (src/nova/api/openstack/compute/quota_sets.py:L105); `{k: v['limit'] for k, v in values.items()}` (src/nova/api/openstack/compute/quota_sets.py:L107) | 5/13 | `src/nova/api/openstack/compute/quota_sets.py:L81–L107` |
| `QuotaSetsController._get_filtered_quotas` | method | (self, req) | private | `FILTERED_QUOTAS_v257` (src/nova/api/openstack/compute/quota_sets.py:L111); `FILTERED_QUOTAS_v236` (src/nova/api/openstack/compute/quota_sets.py:L113); `[]` (src/nova/api/openstack/compute/quota_sets.py:L115) | 3/7 | `src/nova/api/openstack/compute/quota_sets.py:L109–L115` |
| `QuotaSetsController.show` | method | (self, req, id) | public | `self._format_quota_set( id, self._get_quotas(context, id, user_id=user_id), filtered_quotas=filtered_quotas)` (src/nova/api/openstack/compute/quota_sets.py:L131) | 1/11 | `src/nova/api/openstack/compute/quota_sets.py:L123–L134` |
| `QuotaSetsController.detail` | method | (self, req, id) | public | `self._format_quota_set( id, self._get_quotas(context, id, user_id=user_id, usages=True), filtered_quotas=filtered_quotas)` (src/nova/api/openstack/compute/quota_sets.py:L149) | 1/10 | `src/nova/api/openstack/compute/quota_sets.py:L142–L152` |
| `QuotaSetsController.update` | method | (self, req, id, body) | public | `self._format_quota_set( None, self._get_quotas(context, id, user_id=user_id), filtered_quotas=filtered_quotas)` (src/nova/api/openstack/compute/quota_sets.py:L215) | 9/37 | `src/nova/api/openstack/compute/quota_sets.py:L163–L218` |
| `QuotaSetsController.defaults` | method | (self, req, id) | public | `self._format_quota_set( id, values, filtered_quotas=filtered_quotas)` (src/nova/api/openstack/compute/quota_sets.py:L233) | 1/8 | `src/nova/api/openstack/compute/quota_sets.py:L226–L234` |
| `QuotaSetsController.delete` | method | (self, req, id) | public | not declared | 3/11 | `src/nova/api/openstack/compute/quota_sets.py:L244–L257` |

## Dependencies

- `urllib`: imports `parse as urlparse` (src/nova/api/openstack/compute/quota_sets.py:L16)
- `oslo_utils`: imports `strutils` (src/nova/api/openstack/compute/quota_sets.py:L18)
- `import webob` (src/nova/api/openstack/compute/quota_sets.py:L19)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/quota_sets.py:L21)
- `nova.api.openstack.compute.schemas`: imports `quota_sets as schema` (src/nova/api/openstack/compute/quota_sets.py:L22)
- `nova.api.openstack`: imports `identity` (src/nova/api/openstack/compute/quota_sets.py:L23)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/quota_sets.py:L24)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/quota_sets.py:L25)
- `import nova.conf` (src/nova/api/openstack/compute/quota_sets.py:L26)
- `nova`: imports `exception` (src/nova/api/openstack/compute/quota_sets.py:L27)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/quota_sets.py:L28)
- `nova.limit`: imports `utils as limit_utils` (src/nova/api/openstack/compute/quota_sets.py:L29)
- `nova`: imports `objects` (src/nova/api/openstack/compute/quota_sets.py:L30)
- `nova.policies`: imports `quota_sets as qs_policies` (src/nova/api/openstack/compute/quota_sets.py:L31)
- `nova`: imports `quota` (src/nova/api/openstack/compute/quota_sets.py:L32)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import quota_sets as schema (src/nova/api/openstack/compute/quota_sets.py:L22)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/api/openstack/compute/quota_sets.py:L34)
- **global-mutation**: QUOTAS = quota.QUOTAS (src/nova/api/openstack/compute/quota_sets.py:L35)

## Security Surface

- **sink** (`db-write`): @validation.schema(schema.update, '2.0', '2.35') (src/nova/api/openstack/compute/quota_sets.py:L155)
- **sink** (`db-write`): def update(self, req, id, body): (src/nova/api/openstack/compute/quota_sets.py:L163)
- **sink** (`db-write`): context.can(qs_policies.POLICY_ROOT % 'update', {'project_id': id}) (src/nova/api/openstack/compute/quota_sets.py:L165)

