# src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py

## Overview

This file implements the `test_extended_ips_mac` module, defining 1 class, 5 constants, 2 fields, 2 functions, 8 methods, 2 variables, 4 imports, 5 side effects.

Lines: total 152, code 118, comment 14, blank 20

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `UUID1` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L22–L22` |
| `UUID2` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L23–L23` |
| `UUID3` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L24–L24` |
| `NW_CACHE` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L25–L72` |
| `ALL_IPS` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L73–L73` |
| `sanitized` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L77–L77` |
| `sanitized` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L83–L83` |
| `fake_compute_get` | function | (*args, **kwargs) | exported | `inst` (src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L92) | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L90–L92` |
| `fake_compute_get_all` | function | (*args, **kwargs) | exported | `objects.InstanceList(objects=inst_list)` (src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L100) | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L95–L100` |
| `ExtendedIpsMacTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L103–L152` |
| `ExtendedIpsMacTestV21.content_type` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L104–L104` |
| `ExtendedIpsMacTestV21.prefix` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L105–L105` |
| `ExtendedIpsMacTestV21.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L107–L112` |
| `ExtendedIpsMacTestV21._make_request` | method | (self, url) | private | `res` (src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L118) | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L114–L118` |
| `ExtendedIpsMacTestV21._get_server` | method | (self, body) | private | `jsonutils.loads(body).get('server')` (src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L121) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L120–L121` |
| `ExtendedIpsMacTestV21._get_servers` | method | (self, body) | private | `jsonutils.loads(body).get('servers')` (src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L124) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L123–L124` |
| `ExtendedIpsMacTestV21._get_ips` | method | (self, server) | private | not declared | 3/4 | `src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L126–L129` |
| `ExtendedIpsMacTestV21.assertServerStates` | method | (self, server) | public | not declared | 2/6 | `src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L131–L137` |
| `ExtendedIpsMacTestV21.test_show` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L139–L144` |
| `ExtendedIpsMacTestV21.test_detail` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L146–L152` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L16)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L18)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L19)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L20)

## Side Effects

- **global-mutation**: UUID1 = '00000000-0000-0000-0000-000000000001' (src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L22)
- **global-mutation**: UUID2 = '00000000-0000-0000-0000-000000000002' (src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L23)
- **global-mutation**: UUID3 = '00000000-0000-0000-0000-000000000003' (src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L24)
- **global-mutation**: NW_CACHE = [ (src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L25)
- **global-mutation**: ALL_IPS = [] (src/nova/tests/unit/api/openstack/compute/test_extended_ips_mac.py:L73)

