# src/nova/api/openstack/compute/limits.py

## Overview

This file implements the `limits` module, defining 1 class, 1 constant, 2 methods, 2 variables, 7 imports, 3 side effects.

Lines: total 76, code 47, comment 17, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `QUOTAS` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/limits.py:L25–L25` |
| `FILTERED_LIMITS_v236` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/limits.py:L30–L32` |
| `FILTERED_LIMITS_v257` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/limits.py:L34–L34` |
| `LimitsController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/limits.py:L39–L76` |
| `LimitsController.index` | method | (self, req) | public | `self._index(req, filtered_limits=filtered_limits, max_image_meta=max_image_meta)` (src/nova/api/openstack/compute/limits.py:L61) | 4/11 | `src/nova/api/openstack/compute/limits.py:L50–L62` |
| `LimitsController._index` | method | (self, req, filtered_limits=None, max_image_meta=True) | private | `builder.build(req, quotas, filtered_limits=filtered_limits, max_image_meta=max_image_meta)` (src/nova/api/openstack/compute/limits.py:L75) | 2/11 | `src/nova/api/openstack/compute/limits.py:L64–L76` |

## Dependencies

- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/limits.py:L16)
- `nova.api.openstack.compute.schemas`: imports `limits as schema` (src/nova/api/openstack/compute/limits.py:L17)
- `nova.api.openstack.compute.views`: imports `limits as limits_views` (src/nova/api/openstack/compute/limits.py:L18)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/limits.py:L19)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/limits.py:L20)
- `nova.policies`: imports `limits as limits_policies` (src/nova/api/openstack/compute/limits.py:L21)
- `nova`: imports `quota` (src/nova/api/openstack/compute/limits.py:L22)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import limits as schema (src/nova/api/openstack/compute/limits.py:L17)
- **network**: from nova.api.openstack.compute.views import limits as limits_views (src/nova/api/openstack/compute/limits.py:L18)
- **global-mutation**: QUOTAS = quota.QUOTAS (src/nova/api/openstack/compute/limits.py:L25)

