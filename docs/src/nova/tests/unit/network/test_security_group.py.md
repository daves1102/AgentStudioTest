# src/nova/tests/unit/network/test_security_group.py

## Overview

This file implements the `test_security_group` module, defining 2 classs, 25 methods, 10 imports.

Lines: total 434, code 366, comment 16, blank 52

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestNeutronDriver` | class | — | exported | not declared | — | `src/nova/tests/unit/network/test_security_group.py:L30–L424` |
| `TestNeutronDriver.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/network/test_security_group.py:L31–L39` |
| `TestNeutronDriver.test_list_with_project` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_security_group.py:L41–L50` |
| `TestNeutronDriver.test_list_with_all_tenants_and_admin_context` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/network/test_security_group.py:L52–L66` |
| `TestNeutronDriver.test_list_without_all_tenants_and_admin_context` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/network/test_security_group.py:L68–L79` |
| `TestNeutronDriver.test_list_with_all_tenants_not_admin` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/network/test_security_group.py:L81–L93` |
| `TestNeutronDriver.test_create_security_group_with_bad_request` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/network/test_security_group.py:L95–L107` |
| `TestNeutronDriver.test_create_security_group_exceed_quota` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/network/test_security_group.py:L109–L120` |
| `TestNeutronDriver.test_create_security_group_rules_exceed_quota` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/network/test_security_group.py:L122–L138` |
| `TestNeutronDriver.test_create_security_group_rules_bad_request` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/network/test_security_group.py:L140–L157` |
| `TestNeutronDriver.test_list_security_group_with_no_port_range_and_not_tcp_udp_icmp` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/network/test_security_group.py:L159–L191` |
| `TestNeutronDriver.test_instances_security_group_bindings` | method | (self, detailed=False) | public | not declared | 4/41 | `src/nova/tests/unit/network/test_security_group.py:L193–L235` |
| `TestNeutronDriver.test_instances_security_group_bindings_detailed` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_security_group.py:L237–L238` |
| `TestNeutronDriver.test_instances_security_group_bindings_port_not_found` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/network/test_security_group.py:L240–L250` |
| `TestNeutronDriver._test_instances_security_group_bindings_scale` | method | (self, num_servers) | private | not declared | 3/39 | `src/nova/tests/unit/network/test_security_group.py:L252–L293` |
| `TestNeutronDriver.test_instances_security_group_bindings_less_than_max` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_security_group.py:L295–L296` |
| `TestNeutronDriver.test_instances_security_group_bindings_max` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_security_group.py:L298–L299` |
| `TestNeutronDriver.test_instances_security_group_bindings_more_then_max` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_security_group.py:L301–L302` |
| `TestNeutronDriver.test_instances_security_group_bindings_with_hidden_sg` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/network/test_security_group.py:L304–L327` |
| `TestNeutronDriver.test_instance_empty_security_groups` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/network/test_security_group.py:L329–L339` |
| `TestNeutronDriver.test_add_to_instance` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/network/test_security_group.py:L341–L356` |
| `TestNeutronDriver.test_add_to_instance_with_bad_request` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/network/test_security_group.py:L358–L376` |
| `TestNeutronDriver.test_add_to_instance_with_conflicting_sg` | method | (self) | public | not declared | 1/30 | `src/nova/tests/unit/network/test_security_group.py:L378–L408` |
| `TestNeutronDriver.test_add_to_instance_duplicate_sg_name` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/network/test_security_group.py:L410–L416` |
| `TestNeutronDriver.test_remove_from_instance_duplicate_sg_name` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/network/test_security_group.py:L418–L424` |
| `TestNeutronDriverWithoutMock` | class | — | exported | not declared | — | `src/nova/tests/unit/network/test_security_group.py:L427–L434` |
| `TestNeutronDriverWithoutMock.test_populate_security_groups` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/network/test_security_group.py:L429–L434` |

## Dependencies

- `neutronclient.common`: imports `exceptions as n_exc` (src/nova/tests/unit/network/test_security_group.py:L16)
- `neutronclient.neutron`: imports `v2_0 as neutronv20` (src/nova/tests/unit/network/test_security_group.py:L17)
- `neutronclient.v2_0`: imports `client` (src/nova/tests/unit/network/test_security_group.py:L18)
- `unittest`: imports `mock` (src/nova/tests/unit/network/test_security_group.py:L19)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/network/test_security_group.py:L21)
- `nova`: imports `context` (src/nova/tests/unit/network/test_security_group.py:L23)
- `nova`: imports `exception` (src/nova/tests/unit/network/test_security_group.py:L24)
- `nova.network`: imports `security_group_api as sg_api` (src/nova/tests/unit/network/test_security_group.py:L25)
- `nova`: imports `objects` (src/nova/tests/unit/network/test_security_group.py:L26)
- `nova`: imports `test` (src/nova/tests/unit/network/test_security_group.py:L27)

