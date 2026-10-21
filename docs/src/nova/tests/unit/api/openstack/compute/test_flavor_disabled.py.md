# src/nova/tests/unit/api/openstack/compute/test_flavor_disabled.py

## Overview

This file implements the `test_flavor_disabled` module, defining 1 class, 3 fields, 7 methods, 3 imports.

Lines: total 62, code 36, comment 13, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FlavorDisabledTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_disabled.py:L21–L62` |
| `FlavorDisabledTestV21.base_url` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_disabled.py:L22–L22` |
| `FlavorDisabledTestV21.content_type` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_disabled.py:L23–L23` |
| `FlavorDisabledTestV21.prefix` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_disabled.py:L24–L24` |
| `FlavorDisabledTestV21.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_flavor_disabled.py:L26–L30` |
| `FlavorDisabledTestV21._make_request` | method | (self, url) | private | `res` (src/nova/tests/unit/api/openstack/compute/test_flavor_disabled.py:L36) | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_flavor_disabled.py:L32–L36` |
| `FlavorDisabledTestV21._get_flavor` | method | (self, body) | private | `jsonutils.loads(body).get('flavor')` (src/nova/tests/unit/api/openstack/compute/test_flavor_disabled.py:L39) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavor_disabled.py:L38–L39` |
| `FlavorDisabledTestV21._get_flavors` | method | (self, body) | private | `jsonutils.loads(body).get('flavors')` (src/nova/tests/unit/api/openstack/compute/test_flavor_disabled.py:L42) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavor_disabled.py:L41–L42` |
| `FlavorDisabledTestV21.assertFlavorDisabled` | method | (self, flavor, disabled) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavor_disabled.py:L44–L45` |
| `FlavorDisabledTestV21.test_show` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_flavor_disabled.py:L47–L53` |
| `FlavorDisabledTestV21.test_detail` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_flavor_disabled.py:L55–L62` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/compute/test_flavor_disabled.py:L15)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_flavor_disabled.py:L17)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_flavor_disabled.py:L18)

