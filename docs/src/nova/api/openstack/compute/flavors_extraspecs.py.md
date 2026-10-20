# src/nova/api/openstack/compute/flavors_extraspecs.py

## Overview

This file implements the `flavors_extraspecs` module, defining 1 class, 7 methods, 11 imports, 1 side effect, 3 security surface entries.

Lines: total 149, code 111, comment 23, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FlavorExtraSpecsController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/flavors_extraspecs.py:L31–L149` |
| `FlavorExtraSpecsController._get_extra_specs` | method | (self, context, flavor_id) | private | `dict(extra_specs=flavor.extra_specs)` (src/nova/api/openstack/compute/flavors_extraspecs.py:L36) | 1/3 | `src/nova/api/openstack/compute/flavors_extraspecs.py:L34–L36` |
| `FlavorExtraSpecsController._check_extra_specs_value` | method | (self, req, specs) | private | not declared | 5/13 | `src/nova/api/openstack/compute/flavors_extraspecs.py:L38–L55` |
| `FlavorExtraSpecsController.index` | method | (self, req, flavor_id) | public | `self._get_extra_specs(context, flavor_id)` (src/nova/api/openstack/compute/flavors_extraspecs.py:L66) | 1/5 | `src/nova/api/openstack/compute/flavors_extraspecs.py:L61–L66` |
| `FlavorExtraSpecsController.create` | method | (self, req, flavor_id, body) | public | `body` (src/nova/api/openstack/compute/flavors_extraspecs.py:L88) | 3/14 | `src/nova/api/openstack/compute/flavors_extraspecs.py:L74–L88` |
| `FlavorExtraSpecsController.update` | method | (self, req, flavor_id, id, body) | public | `body` (src/nova/api/openstack/compute/flavors_extraspecs.py:L109) | 4/16 | `src/nova/api/openstack/compute/flavors_extraspecs.py:L93–L109` |
| `FlavorExtraSpecsController.show` | method | (self, req, flavor_id, id) | public | `{id: flavor.extra_specs[id]}` (src/nova/api/openstack/compute/flavors_extraspecs.py:L122) | 2/12 | `src/nova/api/openstack/compute/flavors_extraspecs.py:L115–L127` |
| `FlavorExtraSpecsController.delete` | method | (self, req, flavor_id, id) | public | not declared | 3/15 | `src/nova/api/openstack/compute/flavors_extraspecs.py:L134–L149` |

## Dependencies

- `import webob` (src/nova/api/openstack/compute/flavors_extraspecs.py:L16)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/flavors_extraspecs.py:L18)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/flavors_extraspecs.py:L19)
- `nova.api.openstack.compute.schemas`: imports `flavors_extraspecs as schema` (src/nova/api/openstack/compute/flavors_extraspecs.py:L20)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/flavors_extraspecs.py:L21)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/flavors_extraspecs.py:L22)
- `nova.api.validation.extra_specs`: imports `validators` (src/nova/api/openstack/compute/flavors_extraspecs.py:L23)
- `nova`: imports `exception` (src/nova/api/openstack/compute/flavors_extraspecs.py:L24)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/flavors_extraspecs.py:L25)
- `nova.policies`: imports `flavor_extra_specs as fes_policies` (src/nova/api/openstack/compute/flavors_extraspecs.py:L26)
- `nova`: imports `utils` (src/nova/api/openstack/compute/flavors_extraspecs.py:L27)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import flavors_extraspecs as schema (src/nova/api/openstack/compute/flavors_extraspecs.py:L20)

## Security Surface

- **sink** (`db-write`): @validation.schema(schema.update) (src/nova/api/openstack/compute/flavors_extraspecs.py:L91)
- **sink** (`db-write`): def update(self, req, flavor_id, id, body): (src/nova/api/openstack/compute/flavors_extraspecs.py:L93)
- **sink** (`db-write`): context.can(fes_policies.POLICY_ROOT % 'update', target={}) (src/nova/api/openstack/compute/flavors_extraspecs.py:L95)

