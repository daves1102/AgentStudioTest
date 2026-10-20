# src/nova/api/openstack/compute/flavors.py

## Overview

This file implements the `flavors` module, defining 1 class, 1 field, 8 methods, 15 imports, 2 side effects, 3 security surface entries.

Lines: total 254, code 191, comment 30, blank 33

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FlavorsController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/flavors.py:L35–L254` |
| `FlavorsController._view_builder_class` | field | — | private | not declared | — | `src/nova/api/openstack/compute/flavors.py:L38–L38` |
| `FlavorsController.delete` | method | (self, req, id) | public | not declared | 2/8 | `src/nova/api/openstack/compute/flavors.py:L46–L54` |
| `FlavorsController.create` | method | (self, req, body) | public | `self._view_builder.show( req, flavor, include_extra_specs=include_extra_specs)` (src/nova/api/openstack/compute/flavors.py:L111) | 4/32 | `src/nova/api/openstack/compute/flavors.py:L68–L112` |
| `FlavorsController.update` | method | (self, req, id, body) | public | `self._view_builder.show( req, flavor, include_extra_specs=include_extra_specs)` (src/nova/api/openstack/compute/flavors.py:L138) | 3/15 | `src/nova/api/openstack/compute/flavors.py:L121–L139` |
| `FlavorsController.index` | method | (self, req) | public | `self._view_builder.index(req, limited_flavors)` (src/nova/api/openstack/compute/flavors.py:L150) | 1/3 | `src/nova/api/openstack/compute/flavors.py:L147–L150` |
| `FlavorsController.detail` | method | (self, req) | public | `self._view_builder.detail( req, limited_flavors, include_extra_specs=include_extra_specs)` (src/nova/api/openstack/compute/flavors.py:L170) | 2/9 | `src/nova/api/openstack/compute/flavors.py:L160–L171` |
| `FlavorsController.show` | method | (self, req, id) | public | `self._view_builder.show( req, flavor, include_extra_specs=include_extra_specs)` (src/nova/api/openstack/compute/flavors.py:L194) | 3/12 | `src/nova/api/openstack/compute/flavors.py:L181–L195` |
| `FlavorsController._parse_is_public` | method | (self, is_public) | private | `True` (src/nova/api/openstack/compute/flavors.py:L202); `None` (src/nova/api/openstack/compute/flavors.py:L204); `strutils.bool_from_string(is_public, strict=True)` (src/nova/api/openstack/compute/flavors.py:L207) | 4/11 | `src/nova/api/openstack/compute/flavors.py:L197–L210` |
| `FlavorsController._get_flavors` | method | (self, req) | private | `limited_flavors` (src/nova/api/openstack/compute/flavors.py:L254) | 10/35 | `src/nova/api/openstack/compute/flavors.py:L212–L254` |

## Dependencies

- `oslo_utils`: imports `strutils` (src/nova/api/openstack/compute/flavors.py:L16)
- `import webob` (src/nova/api/openstack/compute/flavors.py:L17)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/flavors.py:L19)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/flavors.py:L20)
- `nova.api.openstack.compute.schemas`: imports `flavors as schema` (src/nova/api/openstack/compute/flavors.py:L21)
- `nova.api.openstack.compute.views`: imports `flavors as flavors_view` (src/nova/api/openstack/compute/flavors.py:L22)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/flavors.py:L23)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/flavors.py:L24)
- `nova.compute`: imports `flavors` (src/nova/api/openstack/compute/flavors.py:L25)
- `nova`: imports `exception` (src/nova/api/openstack/compute/flavors.py:L26)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/flavors.py:L27)
- `nova`: imports `objects` (src/nova/api/openstack/compute/flavors.py:L28)
- `nova.policies`: imports `flavor_extra_specs as fes_policies` (src/nova/api/openstack/compute/flavors.py:L29)
- `nova.policies`: imports `flavor_manage as fm_policies` (src/nova/api/openstack/compute/flavors.py:L30)
- `nova`: imports `utils` (src/nova/api/openstack/compute/flavors.py:L31)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import flavors as schema (src/nova/api/openstack/compute/flavors.py:L21)
- **network**: from nova.api.openstack.compute.views import flavors as flavors_view (src/nova/api/openstack/compute/flavors.py:L22)

## Security Surface

- **sink** (`db-write`): @validation.schema(schema.update, '2.55') (src/nova/api/openstack/compute/flavors.py:L116)
- **sink** (`db-write`): def update(self, req, id, body): (src/nova/api/openstack/compute/flavors.py:L121)
- **sink** (`db-write`): context.can(fm_policies.POLICY_ROOT % 'update', target={}) (src/nova/api/openstack/compute/flavors.py:L124)

