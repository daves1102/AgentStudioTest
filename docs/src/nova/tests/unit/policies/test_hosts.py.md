# src/nova/tests/unit/policies/test_hosts.py

## Overview

This file implements the `test_hosts` module, defining 2 classs, 1 field, 7 methods, 6 imports, 1 side effect, 2 security surface entries.

Lines: total 102, code 72, comment 14, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `HostsPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_hosts.py:L22–L92` |
| `HostsPolicyTest.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_hosts.py:L30–L40` |
| `HostsPolicyTest.test_list_hosts_policy` | method | (self, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_hosts.py:L43–L47` |
| `HostsPolicyTest.test_show_host_policy` | method | (self, mock_get, mock_node, mock_map, mock_set) | public | not declared | 1/10 | `src/nova/tests/unit/policies/test_hosts.py:L53–L62` |
| `HostsPolicyTest.test_update_host_policy` | method | (self, mock_set_host_enabled) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_hosts.py:L65–L71` |
| `HostsPolicyTest.test_reboot_host_policy` | method | (self, mock_action) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_hosts.py:L74–L78` |
| `HostsPolicyTest.test_shutdown_host_policy` | method | (self, mock_action) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_hosts.py:L81–L85` |
| `HostsPolicyTest.test_startup_host_policy` | method | (self, mock_action) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_hosts.py:L88–L92` |
| `HostsNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_hosts.py:L95–L102` |
| `HostsNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_hosts.py:L102–L102` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_hosts.py:L13)
- `nova.api.openstack.compute`: imports `hosts` (src/nova/tests/unit/policies/test_hosts.py:L15)
- `nova`: imports `objects` (src/nova/tests/unit/policies/test_hosts.py:L16)
- `nova.policies`: imports `hosts as policies` (src/nova/tests/unit/policies/test_hosts.py:L17)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_hosts.py:L18)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_hosts.py:L19)

## Side Effects

- **network**: from nova.api.openstack.compute import hosts (src/nova/tests/unit/policies/test_hosts.py:L15)

## Security Surface

- **sink** (`db-write`): rule_name = policies.POLICY_NAME % 'update' (src/nova/tests/unit/policies/test_hosts.py:L67)
- **sink** (`db-write`): rule_name, self.controller.update, (src/nova/tests/unit/policies/test_hosts.py:L69)

