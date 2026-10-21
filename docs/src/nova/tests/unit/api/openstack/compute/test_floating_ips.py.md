# src/nova/tests/unit/api/openstack/compute/test_floating_ips.py

## Overview

This file implements the `test_floating_ips` module, defining 3 classs, 1 field, 14 methods, 7 imports, 1 side effect.

Lines: total 149, code 108, comment 17, blank 24

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FloatingIpTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L28–L112` |
| `FloatingIpTestV21.floating_ips` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L29–L29` |
| `FloatingIpTestV21.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L31–L33` |
| `FloatingIpTestV21.test_floatingip_delete` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L35–L60` |
| `FloatingIpTestV21._test_floatingip_delete_not_found` | method | (self, ex, expect_ex=webob.exc.HTTPNotFound) | private | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L62–L68` |
| `FloatingIpTestV21.test_floatingip_delete_not_found_ip` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L70–L72` |
| `FloatingIpTestV21.test_floatingip_delete_not_found` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L74–L76` |
| `FloatingIpTestV21.test_floatingip_delete_invalid_id` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L78–L80` |
| `FloatingIpTestV21._test_floatingip_delete_error_disassociate` | method | (self, raised_exc, expected_exc) | private | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L82–L100` |
| `FloatingIpTestV21.test_floatingip_delete_error_disassociate_1` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L102–L106` |
| `FloatingIpTestV21.test_floatingip_delete_error_disassociate_2` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L108–L112` |
| `FloatingIpsDeprecationTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L115–L130` |
| `FloatingIpsDeprecationTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L117–L120` |
| `FloatingIpsDeprecationTest.test_all_apis_return_not_found` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L122–L130` |
| `FloatingIpActionDeprecationTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L133–L149` |
| `FloatingIpActionDeprecationTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L135–L138` |
| `FloatingIpActionDeprecationTest.test_add_floating_ip_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L140–L143` |
| `FloatingIpActionDeprecationTest.test_remove_floating_ip_not_found` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L145–L149` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L17)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L19)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L20)
- `nova.api.openstack.compute`: imports `floating_ips as fips_v21` (src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L23)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L24)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L25)

## Side Effects

- **network**: from nova.api.openstack.compute import floating_ips as fips_v21 (src/nova/tests/unit/api/openstack/compute/test_floating_ips.py:L22)

