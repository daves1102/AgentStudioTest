# src/nova/tests/unit/api/openstack/compute/test_extended_ips.py

## Overview

This file implements the `test_extended_ips` module, defining 1 class, 5 constants, 2 fields, 2 functions, 8 methods, 1 variable, 4 imports, 5 side effects.

Lines: total 147, code 113, comment 14, blank 20

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `UUID1` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L22–L22` |
| `UUID2` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L23–L23` |
| `UUID3` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L24–L24` |
| `NW_CACHE` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L25–L72` |
| `ALL_IPS` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L73–L73` |
| `sanitized` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L77–L77` |
| `fake_compute_get` | function | (*args, **kwargs) | exported | `inst` (src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L87) | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L85–L87` |
| `fake_compute_get_all` | function | (*args, **kwargs) | exported | `objects.InstanceList(objects=inst_list)` (src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L95) | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L90–L95` |
| `ExtendedIpsTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L98–L147` |
| `ExtendedIpsTestV21.content_type` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L99–L99` |
| `ExtendedIpsTestV21.prefix` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L100–L100` |
| `ExtendedIpsTestV21.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L102–L107` |
| `ExtendedIpsTestV21._make_request` | method | (self, url) | private | `res` (src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L113) | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L109–L113` |
| `ExtendedIpsTestV21._get_server` | method | (self, body) | private | `jsonutils.loads(body).get('server')` (src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L116) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L115–L116` |
| `ExtendedIpsTestV21._get_servers` | method | (self, body) | private | `jsonutils.loads(body).get('servers')` (src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L119) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L118–L119` |
| `ExtendedIpsTestV21._get_ips` | method | (self, server) | private | not declared | 3/4 | `src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L121–L124` |
| `ExtendedIpsTestV21.assertServerStates` | method | (self, server) | public | not declared | 2/6 | `src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L126–L132` |
| `ExtendedIpsTestV21.test_show` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L134–L139` |
| `ExtendedIpsTestV21.test_detail` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L141–L147` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L16)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L18)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L19)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L20)

## Side Effects

- **global-mutation**: UUID1 = '00000000-0000-0000-0000-000000000001' (src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L22)
- **global-mutation**: UUID2 = '00000000-0000-0000-0000-000000000002' (src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L23)
- **global-mutation**: UUID3 = '00000000-0000-0000-0000-000000000003' (src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L24)
- **global-mutation**: NW_CACHE = [ (src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L25)
- **global-mutation**: ALL_IPS = [] (src/nova/tests/unit/api/openstack/compute/test_extended_ips.py:L73)

