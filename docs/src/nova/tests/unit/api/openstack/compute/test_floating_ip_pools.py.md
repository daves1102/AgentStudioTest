# src/nova/tests/unit/api/openstack/compute/test_floating_ip_pools.py

## Overview

This file implements the `test_floating_ip_pools` module, defining 2 classs, 1 field, 1 function, 5 methods, 6 imports, 1 side effect.

Lines: total 74, code 45, comment 14, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_get_floating_ip_pools` | function | (*args, **kwargs) | exported | `[ {'name': 'nova'}, {'name': 'other'}, ]` (src/nova/tests/unit/api/openstack/compute/test_floating_ip_pools.py:L27) | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_floating_ip_pools.py:L26–L30` |
| `FloatingIpPoolTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_floating_ip_pools.py:L33–L62` |
| `FloatingIpPoolTestV21.floating_ip_pools` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_floating_ip_pools.py:L34–L34` |
| `FloatingIpPoolTestV21.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_floating_ip_pools.py:L36–L41` |
| `FloatingIpPoolTestV21.test_translate_floating_ip_pools_view` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_floating_ip_pools.py:L43–L50` |
| `FloatingIpPoolTestV21.test_floating_ips_pools_list` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/api/openstack/compute/test_floating_ip_pools.py:L52–L62` |
| `FloatingIpPoolDeprecationTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_floating_ip_pools.py:L65–L74` |
| `FloatingIpPoolDeprecationTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_floating_ip_pools.py:L67–L70` |
| `FloatingIpPoolDeprecationTest.test_not_found_for_fip_pool_api` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_floating_ip_pools.py:L72–L74` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_floating_ip_pools.py:L16)
- `nova.api.openstack.compute`: imports `floating_ip_pools as fipp_v21` (src/nova/tests/unit/api/openstack/compute/test_floating_ip_pools.py:L18–L19)
- `nova`: imports `context` (src/nova/tests/unit/api/openstack/compute/test_floating_ip_pools.py:L20)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_floating_ip_pools.py:L21)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_floating_ip_pools.py:L22)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_floating_ip_pools.py:L23)

## Side Effects

- **network**: from nova.api.openstack.compute import floating_ip_pools \ (src/nova/tests/unit/api/openstack/compute/test_floating_ip_pools.py:L18)

