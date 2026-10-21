# src/nova/tests/unit/api/openstack/compute/test_access_ips.py

## Overview

This file implements the `test_access_ips` module, defining 1 class, 1 field, 2 functions, 19 methods, 2 variables, 6 imports, 1 side effect, 4 security surface entries.

Lines: total 151, code 107, comment 15, blank 29

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `v4_key` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L23–L23` |
| `v6_key` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L24–L24` |
| `AccessIPsAPIValidationTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L27–L151` |
| `AccessIPsAPIValidationTestV21.validation_error` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L28–L28` |
| `AccessIPsAPIValidationTestV21.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L30–L46` |
| `AccessIPsAPIValidationTestV21.setUp.fake_save` | function | (context, **kwargs) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L33–L34` |
| `AccessIPsAPIValidationTestV21.setUp.fake_rebuild` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L36–L37` |
| `AccessIPsAPIValidationTestV21._set_up_controller` | method | (self) | private | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L48–L49` |
| `AccessIPsAPIValidationTestV21._verify_update_access_ip` | method | (self, res_dict, params) | private | not declared | 3/4 | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L51–L54` |
| `AccessIPsAPIValidationTestV21._test_create` | method | (self, params) | private | `res_dict` (src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L70) | 1/15 | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L56–L70` |
| `AccessIPsAPIValidationTestV21._test_update` | method | (self, params) | private | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L72–L81` |
| `AccessIPsAPIValidationTestV21._test_rebuild` | method | (self, params) | private | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L83–L91` |
| `AccessIPsAPIValidationTestV21.test_create_server_with_access_ipv4` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L93–L95` |
| `AccessIPsAPIValidationTestV21.test_create_server_with_access_ip_pass_disabled` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L97–L105` |
| `AccessIPsAPIValidationTestV21.test_create_server_with_invalid_access_ipv4` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L107–L109` |
| `AccessIPsAPIValidationTestV21.test_create_server_with_access_ipv6` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L111–L113` |
| `AccessIPsAPIValidationTestV21.test_create_server_with_invalid_access_ipv6` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L115–L117` |
| `AccessIPsAPIValidationTestV21.test_update_server_with_access_ipv4` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L119–L121` |
| `AccessIPsAPIValidationTestV21.test_update_server_with_invalid_access_ipv4` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L123–L125` |
| `AccessIPsAPIValidationTestV21.test_update_server_with_access_ipv6` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L127–L129` |
| `AccessIPsAPIValidationTestV21.test_update_server_with_invalid_access_ipv6` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L131–L133` |
| `AccessIPsAPIValidationTestV21.test_rebuild_server_with_access_ipv4` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L135–L137` |
| `AccessIPsAPIValidationTestV21.test_rebuild_server_with_invalid_access_ipv4` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L139–L142` |
| `AccessIPsAPIValidationTestV21.test_rebuild_server_with_access_ipv6` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L144–L146` |
| `AccessIPsAPIValidationTestV21.test_rebuild_server_with_invalid_access_ipv6` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L148–L151` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L15)
- `nova.api.openstack.compute`: imports `servers as servers_v21` (src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L17)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L18)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L19)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L20)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L21)

## Side Effects

- **network**: from nova.api.openstack.compute import servers as servers_v21 (src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L17)

## Security Surface

- **sink** (`db-write`): body['server'].update(params) (src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L64)
- **sink** (`db-write`): body['server'].update(params) (src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L77)
- **sink** (`db-write`): res_dict = self.controller.update(req, fakes.FAKE_UUID, body=body) (src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L80)
- **sink** (`db-write`): body['rebuild'].update(params) (src/nova/tests/unit/api/openstack/compute/test_access_ips.py:L89)

