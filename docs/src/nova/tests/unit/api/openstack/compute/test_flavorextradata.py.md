# src/nova/tests/unit/api/openstack/compute/test_flavorextradata.py

## Overview

This file implements the `test_flavorextradata` module, defining 1 class, 1 field, 5 methods, 1 property, 3 imports.

Lines: total 87, code 62, comment 14, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FlavorExtraDataTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavorextradata.py:L22–L87` |
| `FlavorExtraDataTestV21.base_url` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavorextradata.py:L23–L23` |
| `FlavorExtraDataTestV21.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_flavorextradata.py:L25–L28` |
| `FlavorExtraDataTestV21.app` | method | (self) | public | `fakes.wsgi_app_v21()` (src/nova/tests/unit/api/openstack/compute/test_flavorextradata.py:L32) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavorextradata.py:L31–L32` |
| `FlavorExtraDataTestV21._verify_flavor_response` | method | (self, flavor, expected) | private | not declared | 2/3 | `src/nova/tests/unit/api/openstack/compute/test_flavorextradata.py:L34–L36` |
| `FlavorExtraDataTestV21.test_show` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/api/openstack/compute/test_flavorextradata.py:L38–L55` |
| `FlavorExtraDataTestV21.test_detail` | method | (self) | public | not declared | 4/30 | `src/nova/tests/unit/api/openstack/compute/test_flavorextradata.py:L57–L87` |
| `FlavorExtraDataTestV21.app` | property | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavorextradata.py:L30–L32` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/compute/test_flavorextradata.py:L16)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_flavorextradata.py:L18)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_flavorextradata.py:L19)

