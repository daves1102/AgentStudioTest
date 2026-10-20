# src/nova/api/openstack/compute/simple_tenant_usage.py

## Overview

This file implements the `simple_tenant_usage` module, defining 1 class, 1 constant, 1 field, 1 function, 10 methods, 17 imports, 3 side effects.

Lines: total 369, code 269, comment 40, blank 60

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/simple_tenant_usage.py:L36–L36` |
| `parse_strtime` | function | (dstr, fmt) | exported | `timeutils.parse_strtime(dstr, fmt)` (src/nova/api/openstack/compute/simple_tenant_usage.py:L41) | 2/5 | `src/nova/api/openstack/compute/simple_tenant_usage.py:L39–L43` |
| `SimpleTenantUsageController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/simple_tenant_usage.py:L47–L369` |
| `SimpleTenantUsageController._view_builder_class` | field | — | private | not declared | — | `src/nova/api/openstack/compute/simple_tenant_usage.py:L49–L49` |
| `SimpleTenantUsageController._hours_for` | method | (self, instance, period_start, period_stop) | private | `0` (src/nova/api/openstack/compute/simple_tenant_usage.py:L65); `0` (src/nova/api/openstack/compute/simple_tenant_usage.py:L68); `dt.total_seconds() / 3600.0` (src/nova/api/openstack/compute/simple_tenant_usage.py:L79); `0` (src/nova/api/openstack/compute/simple_tenant_usage.py:L82) | 11/23 | `src/nova/api/openstack/compute/simple_tenant_usage.py:L51–L82` |
| `SimpleTenantUsageController._get_flavor` | method | (self, context, instance, flavors_cache) | private | `instance.get_flavor()` (src/nova/api/openstack/compute/simple_tenant_usage.py:L89); `flavors_cache[flavor_type]` (src/nova/api/openstack/compute/simple_tenant_usage.py:L98); `flavor_ref` (src/nova/api/openstack/compute/simple_tenant_usage.py:L107) | 5/15 | `src/nova/api/openstack/compute/simple_tenant_usage.py:L84–L107` |
| `SimpleTenantUsageController._get_instances_all_cells` | method | (self, context, period_start, period_stop, tenant_id, limit, marker) | private | `all_instances` (src/nova/api/openstack/compute/simple_tenant_usage.py:L138) | 7/23 | `src/nova/api/openstack/compute/simple_tenant_usage.py:L109–L138` |
| `SimpleTenantUsageController._tenant_usages_for_period` | method | (self, context, period_start, period_stop, tenant_id=None, detailed=True, limit=None, marker=None) | private | `list(rval.values()), all_server_usages` (src/nova/api/openstack/compute/simple_tenant_usage.py:L222) | 10/65 | `src/nova/api/openstack/compute/simple_tenant_usage.py:L140–L222` |
| `SimpleTenantUsageController._parse_datetime` | method | (self, dtstr) | private | `value` (src/nova/api/openstack/compute/simple_tenant_usage.py:L248) | 6/20 | `src/nova/api/openstack/compute/simple_tenant_usage.py:L224–L248` |
| `SimpleTenantUsageController._parse_qs_params` | method | (self, req) | private | `(period_start, period_stop, detailed)` (src/nova/api/openstack/compute/simple_tenant_usage.py:L263) | 2/11 | `src/nova/api/openstack/compute/simple_tenant_usage.py:L250–L263` |
| `SimpleTenantUsageController.index` | method | (self, req) | public | `self._index(req, links=links)` (src/nova/api/openstack/compute/simple_tenant_usage.py:L277) | 2/5 | `src/nova/api/openstack/compute/simple_tenant_usage.py:L271–L277` |
| `SimpleTenantUsageController._index` | method | (self, req, links=False) | private | `tenant_usages` (src/nova/api/openstack/compute/simple_tenant_usage.py:L312) | 7/26 | `src/nova/api/openstack/compute/simple_tenant_usage.py:L279–L312` |
| `SimpleTenantUsageController.show` | method | (self, req, id) | public | `self._show(req, id, links=links)` (src/nova/api/openstack/compute/simple_tenant_usage.py:L326) | 2/5 | `src/nova/api/openstack/compute/simple_tenant_usage.py:L320–L326` |
| `SimpleTenantUsageController._show` | method | (self, req, id, links=False) | private | `tenant_usage` (src/nova/api/openstack/compute/simple_tenant_usage.py:L369) | 8/33 | `src/nova/api/openstack/compute/simple_tenant_usage.py:L328–L369` |

## Dependencies

- `import collections` (src/nova/api/openstack/compute/simple_tenant_usage.py:L16)
- `import datetime` (src/nova/api/openstack/compute/simple_tenant_usage.py:L17)
- `urllib`: imports `parse as urlparse` (src/nova/api/openstack/compute/simple_tenant_usage.py:L18)
- `oslo_utils`: imports `timeutils` (src/nova/api/openstack/compute/simple_tenant_usage.py:L20)
- `webob`: imports `exc` (src/nova/api/openstack/compute/simple_tenant_usage.py:L21)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/simple_tenant_usage.py:L23)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/simple_tenant_usage.py:L24)
- `nova.api.openstack.compute.schemas`: imports `simple_tenant_usage as schema` (src/nova/api/openstack/compute/simple_tenant_usage.py:L25)
- `nova.api.openstack.compute.views`: imports `usages as usages_view` (src/nova/api/openstack/compute/simple_tenant_usage.py:L26)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/simple_tenant_usage.py:L27)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/simple_tenant_usage.py:L28)
- `import nova.conf` (src/nova/api/openstack/compute/simple_tenant_usage.py:L29)
- `nova`: imports `context as nova_context` (src/nova/api/openstack/compute/simple_tenant_usage.py:L30)
- `nova`: imports `exception` (src/nova/api/openstack/compute/simple_tenant_usage.py:L31)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/simple_tenant_usage.py:L32)
- `nova`: imports `objects` (src/nova/api/openstack/compute/simple_tenant_usage.py:L33)
- `nova.policies`: imports `simple_tenant_usage as stu_policies` (src/nova/api/openstack/compute/simple_tenant_usage.py:L34)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import simple_tenant_usage as schema (src/nova/api/openstack/compute/simple_tenant_usage.py:L25)
- **network**: from nova.api.openstack.compute.views import usages as usages_view (src/nova/api/openstack/compute/simple_tenant_usage.py:L26)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/api/openstack/compute/simple_tenant_usage.py:L36)

