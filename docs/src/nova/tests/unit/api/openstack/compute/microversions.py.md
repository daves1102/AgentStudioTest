# src/nova/tests/unit/api/openstack/compute/microversions.py

## Overview

This file implements the `microversions` module, defining 4 classs, 1 constant, 6 methods, 4 variables, 7 imports, 3 side effects, 2 security surface entries.

Lines: total 121, code 78, comment 16, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `MicroversionsController` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/microversions.py:L27–L38` |
| `MicroversionsController.index` | method | (self, req) | public | `data` (src/nova/tests/unit/api/openstack/compute/microversions.py:L38) | 3/8 | `src/nova/tests/unit/api/openstack/compute/microversions.py:L30–L38` |
| `MicroversionsController2` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/microversions.py:L44–L54` |
| `MicroversionsController2.index` | method | (self, req) | public | `data` (src/nova/tests/unit/api/openstack/compute/microversions.py:L54) | 2/6 | `src/nova/tests/unit/api/openstack/compute/microversions.py:L49–L54` |
| `MicroversionsController3` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/microversions.py:L57–L77` |
| `MicroversionsController3.create` | method | (self, req, body) | public | `data` (src/nova/tests/unit/api/openstack/compute/microversions.py:L63) | 1/3 | `src/nova/tests/unit/api/openstack/compute/microversions.py:L61–L63` |
| `MicroversionsController3.update` | method | (self, req, id, body) | public | `data` (src/nova/tests/unit/api/openstack/compute/microversions.py:L70) | 1/3 | `src/nova/tests/unit/api/openstack/compute/microversions.py:L68–L70` |
| `MicroversionsController3._foo` | method | (self, req, id, body) | private | `data` (src/nova/tests/unit/api/openstack/compute/microversions.py:L77) | 1/3 | `src/nova/tests/unit/api/openstack/compute/microversions.py:L75–L77` |
| `MicroversionsExtendsBaseController` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/microversions.py:L80–L83` |
| `MicroversionsExtendsBaseController.show` | method | (self, req, id) | public | `{'base_param': 'base_val'}` (src/nova/tests/unit/api/openstack/compute/microversions.py:L83) | 1/2 | `src/nova/tests/unit/api/openstack/compute/microversions.py:L82–L83` |
| `mv_controller` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/microversions.py:L86–L87` |
| `mv2_controller` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/microversions.py:L90–L91` |
| `mv3_controller` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/microversions.py:L94–L95` |
| `mv5_controller` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/microversions.py:L98–L99` |
| `ROUTES` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/microversions.py:L102–L121` |

## Dependencies

- `import functools` (src/nova/tests/unit/api/openstack/compute/microversions.py:L16)
- `import webob` (src/nova/tests/unit/api/openstack/compute/microversions.py:L18)
- `nova.api.openstack`: imports `api_version_request` (src/nova/tests/unit/api/openstack/compute/microversions.py:L20)
- `nova.api.openstack.compute`: imports `routes` (src/nova/tests/unit/api/openstack/compute/microversions.py:L21)
- `nova.api.openstack`: imports `wsgi` (src/nova/tests/unit/api/openstack/compute/microversions.py:L22)
- `nova.api`: imports `validation` (src/nova/tests/unit/api/openstack/compute/microversions.py:L23)
- `nova.tests.unit.api.openstack.compute`: imports `dummy_schema` (src/nova/tests/unit/api/openstack/compute/microversions.py:L24)

## Side Effects

- **network**: from nova.api.openstack.compute import routes (src/nova/tests/unit/api/openstack/compute/microversions.py:L21)
- **network**: from nova.tests.unit.api.openstack.compute import dummy_schema (src/nova/tests/unit/api/openstack/compute/microversions.py:L24)
- **global-mutation**: ROUTES = ( (src/nova/tests/unit/api/openstack/compute/microversions.py:L102)

## Security Surface

- **sink** (`db-write`): def update(self, req, id, body): (src/nova/tests/unit/api/openstack/compute/microversions.py:L68)
- **sink** (`db-write`): 'PUT': [mv3_controller, 'update'] (src/nova/tests/unit/api/openstack/compute/microversions.py:L113)

