# src/nova/api/openstack/compute/quota_classes.py

## Overview

This file implements the `quota_classes` module, defining 1 class, 2 constants, 1 field, 5 methods, 2 variables, 12 imports, 3 side effects, 3 security surface entries.

Lines: total 152, code 100, comment 27, blank 25

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `QUOTAS` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/quota_classes.py:L31–L31` |
| `EXTENDED_QUOTAS` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/quota_classes.py:L35–L35` |
| `FILTERED_QUOTAS_v250` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/quota_classes.py:L39–L40` |
| `FILTERED_QUOTAS_v257` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/quota_classes.py:L43–L43` |
| `QuotaClassSetsController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/quota_classes.py:L49–L152` |
| `QuotaClassSetsController.supported_quotas` | field | — | public | not declared | — | `src/nova/api/openstack/compute/quota_classes.py:L51–L51` |
| `QuotaClassSetsController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/quota_classes.py:L53–L55` |
| `QuotaClassSetsController._format_quota_set` | method | (self, quota_class, quota_set, filtered_quotas=None, exclude_server_groups=False) | private | `dict(quota_class_set=result)` (src/nova/api/openstack/compute/quota_classes.py:L79) | 9/17 | `src/nova/api/openstack/compute/quota_classes.py:L57–L79` |
| `QuotaClassSetsController._get_filtered_quotas` | method | (self, req) | private | `FILTERED_QUOTAS_v257` (src/nova/api/openstack/compute/quota_classes.py:L83); `FILTERED_QUOTAS_v250` (src/nova/api/openstack/compute/quota_classes.py:L85); `[]` (src/nova/api/openstack/compute/quota_classes.py:L87) | 3/7 | `src/nova/api/openstack/compute/quota_classes.py:L81–L87` |
| `QuotaClassSetsController.show` | method | (self, req, id) | public | `self._format_quota_set( id, values, filtered_quotas, exclude_server_groups )` (src/nova/api/openstack/compute/quota_classes.py:L105) | 2/11 | `src/nova/api/openstack/compute/quota_classes.py:L95–L107` |
| `QuotaClassSetsController.update` | method | (self, req, id, body) | public | `self._format_quota_set(None, values, filtered_quotas, exclude_server_groups)` (src/nova/api/openstack/compute/quota_classes.py:L151) | 6/26 | `src/nova/api/openstack/compute/quota_classes.py:L116–L152` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/quota_classes.py:L16)
- `import webob` (src/nova/api/openstack/compute/quota_classes.py:L17)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/quota_classes.py:L19)
- `nova.api.openstack.compute.schemas`: imports `quota_classes as schema` (src/nova/api/openstack/compute/quota_classes.py:L20)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/quota_classes.py:L21)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/quota_classes.py:L22)
- `nova`: imports `exception` (src/nova/api/openstack/compute/quota_classes.py:L23)
- `nova.limit`: imports `utils as limit_utils` (src/nova/api/openstack/compute/quota_classes.py:L24)
- `nova`: imports `objects` (src/nova/api/openstack/compute/quota_classes.py:L25)
- `nova.policies`: imports `quota_class_sets as qcs_policies` (src/nova/api/openstack/compute/quota_classes.py:L26)
- `nova`: imports `quota` (src/nova/api/openstack/compute/quota_classes.py:L27)
- `nova`: imports `utils` (src/nova/api/openstack/compute/quota_classes.py:L28)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import quota_classes as schema (src/nova/api/openstack/compute/quota_classes.py:L20)
- **global-mutation**: QUOTAS = quota.QUOTAS (src/nova/api/openstack/compute/quota_classes.py:L31)
- **global-mutation**: EXTENDED_QUOTAS = ['server_groups', 'server_group_members'] (src/nova/api/openstack/compute/quota_classes.py:L35)

## Security Surface

- **sink** (`db-write`): @validation.schema(schema.update, '2.1', '2.49') (src/nova/api/openstack/compute/quota_classes.py:L110)
- **sink** (`db-write`): def update(self, req, id, body): (src/nova/api/openstack/compute/quota_classes.py:L116)
- **sink** (`db-write`): context.can(qcs_policies.POLICY_ROOT % 'update', target={}) (src/nova/api/openstack/compute/quota_classes.py:L124)

