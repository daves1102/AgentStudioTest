# src/nova/tests/unit/api/openstack/compute/test_multinic.py

## Overview

This file implements the `test_multinic` module, defining 2 classs, 1 constant, 2 fields, 3 functions, 14 methods, 2 variables, 10 imports, 3 side effects.

Lines: total 171, code 120, comment 14, blank 37

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_multinic.py:L30–L30` |
| `last_add_fixed_ip` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_multinic.py:L31–L31` |
| `last_remove_fixed_ip` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_multinic.py:L32–L32` |
| `compute_api_add_fixed_ip` | function | (self, context, instance, network_id) | exported | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_multinic.py:L35–L38` |
| `compute_api_remove_fixed_ip` | function | (self, context, instance, address) | exported | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_multinic.py:L41–L44` |
| `compute_api_get` | function | (self, context, instance_id, expected_attrs=None, cell_down_support=False) | exported | `instance` (src/nova/tests/unit/api/openstack/compute/test_multinic.py:L55) | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_multinic.py:L47–L55` |
| `FixedIpTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_multinic.py:L58–L153` |
| `FixedIpTestV21.controller_class` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_multinic.py:L59–L59` |
| `FixedIpTestV21.validation_error` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_multinic.py:L60–L60` |
| `FixedIpTestV21.setUp` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/api/openstack/compute/test_multinic.py:L62–L76` |
| `FixedIpTestV21.test_add_fixed_ip` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_multinic.py:L78–L84` |
| `FixedIpTestV21._test_add_fixed_ip_bad_request` | method | (self, body) | private | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_multinic.py:L86–L90` |
| `FixedIpTestV21.test_add_fixed_ip_empty_network_id` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_multinic.py:L92–L94` |
| `FixedIpTestV21.test_add_fixed_ip_network_id_bigger_than_36` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_multinic.py:L96–L98` |
| `FixedIpTestV21.test_add_fixed_ip_no_network` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_multinic.py:L100–L106` |
| `FixedIpTestV21.test_add_fixed_ip_no_more_ips_available` | method | (self, mock_add_fixed_ip) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_multinic.py:L109–L116` |
| `FixedIpTestV21.test_remove_fixed_ip` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_multinic.py:L118–L124` |
| `FixedIpTestV21.test_remove_fixed_ip_no_address` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_multinic.py:L126–L135` |
| `FixedIpTestV21.test_remove_fixed_ip_invalid_address` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_multinic.py:L137–L142` |
| `FixedIpTestV21.test_remove_fixed_ip_not_found` | method | (self, _remove_fixed_ip) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_multinic.py:L147–L153` |
| `MultinicAPIDeprecationTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_multinic.py:L156–L171` |
| `MultinicAPIDeprecationTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_multinic.py:L158–L161` |
| `MultinicAPIDeprecationTest.test_add_fixed_ip_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_multinic.py:L163–L166` |
| `MultinicAPIDeprecationTest.test_remove_fixed_ip__not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_multinic.py:L168–L171` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_multinic.py:L16)
- `import fixtures` (src/nova/tests/unit/api/openstack/compute/test_multinic.py:L18)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_multinic.py:L19)
- `nova.api.openstack.compute`: imports `multinic as multinic_v21` (src/nova/tests/unit/api/openstack/compute/test_multinic.py:L21)
- `nova`: imports `compute` (src/nova/tests/unit/api/openstack/compute/test_multinic.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_multinic.py:L23)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_multinic.py:L24)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_multinic.py:L25)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_multinic.py:L26)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/api/openstack/compute/test_multinic.py:L27)

## Side Effects

- **network**: from nova.api.openstack.compute import multinic as multinic_v21 (src/nova/tests/unit/api/openstack/compute/test_multinic.py:L21)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/api/openstack/compute/test_multinic.py:L73)
- **global-mutation**: UUID = '70f6db34-de8d-4fbd-aafb-4065bdfa6114' (src/nova/tests/unit/api/openstack/compute/test_multinic.py:L30)

