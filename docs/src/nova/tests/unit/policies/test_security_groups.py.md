# src/nova/tests/unit/policies/test_security_groups.py

## Overview

This file implements the `test_security_groups` module, defining 4 classs, 4 fields, 14 methods, 11 imports, 2 side effects, 3 security surface entries.

Lines: total 319, code 257, comment 28, blank 34

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServerSecurityGroupsPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_security_groups.py:L28–L96` |
| `ServerSecurityGroupsPolicyTest.setUp` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/policies/test_security_groups.py:L36–L68` |
| `ServerSecurityGroupsPolicyTest.test_get_security_groups_policy` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_security_groups.py:L71–L76` |
| `ServerSecurityGroupsPolicyTest.test_add_security_groups_policy` | method | (self, mock_add) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_security_groups.py:L79–L86` |
| `ServerSecurityGroupsPolicyTest.test_remove_security_groups_policy` | method | (self, mock_remove) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_security_groups.py:L89–L96` |
| `ServerSecurityGroupsNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_security_groups.py:L99–L122` |
| `ServerSecurityGroupsNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_security_groups.py:L106–L106` |
| `ServerSecurityGroupsNoLegacyPolicyTest.rules_without_deprecation` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_security_groups.py:L107–L113` |
| `ServerSecurityGroupsNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_security_groups.py:L115–L122` |
| `SecurityGroupsPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_security_groups.py:L125–L277` |
| `SecurityGroupsPolicyTest.setUp` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/policies/test_security_groups.py:L133–L165` |
| `SecurityGroupsPolicyTest.test_list_security_groups_policy` | method | (self, mock_get) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_security_groups.py:L168–L175` |
| `SecurityGroupsPolicyTest.test_show_security_groups_policy` | method | (self, mock_get) | public | not declared | 1/13 | `src/nova/tests/unit/policies/test_security_groups.py:L178–L191` |
| `SecurityGroupsPolicyTest.test_update_security_groups_policy` | method | (self, mock_update, mock_get) | public | not declared | 1/16 | `src/nova/tests/unit/policies/test_security_groups.py:L195–L211` |
| `SecurityGroupsPolicyTest.test_create_security_groups_policy` | method | (self, mock_create) | public | not declared | 1/16 | `src/nova/tests/unit/policies/test_security_groups.py:L214–L230` |
| `SecurityGroupsPolicyTest.test_delete_security_groups_policy` | method | (self, mock_destroy, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_security_groups.py:L234–L239` |
| `SecurityGroupsPolicyTest.test_create_security_group_rules_policy` | method | (self, mock_create, mock_get) | public | not declared | 1/23 | `src/nova/tests/unit/policies/test_security_groups.py:L243–L266` |
| `SecurityGroupsPolicyTest.test_delete_security_group_rules_policy` | method | (self, mock_remove, mock_get, mock_rules) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_security_groups.py:L271–L277` |
| `SecurityGroupsNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_security_groups.py:L280–L319` |
| `SecurityGroupsNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_security_groups.py:L284–L284` |
| `SecurityGroupsNoLegacyPolicyTest.rules_without_deprecation` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_security_groups.py:L285–L299` |
| `SecurityGroupsNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/policies/test_security_groups.py:L301–L319` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_security_groups.py:L13)
- `import fixtures` (src/nova/tests/unit/policies/test_security_groups.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_security_groups.py:L16)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/policies/test_security_groups.py:L17)
- `nova.api.openstack.compute`: imports `security_groups` (src/nova/tests/unit/policies/test_security_groups.py:L19)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_security_groups.py:L20)
- `nova.policies`: imports `base as base_policy` (src/nova/tests/unit/policies/test_security_groups.py:L21)
- `nova.policies`: imports `security_groups as policies` (src/nova/tests/unit/policies/test_security_groups.py:L22)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_security_groups.py:L23)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_security_groups.py:L24)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_security_groups.py:L25)

## Side Effects

- **network**: from nova.api.openstack.compute import security_groups (src/nova/tests/unit/policies/test_security_groups.py:L19)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_security_groups.py:L43)

## Security Surface

- **sink** (`db-write`): rule_name = policies.POLICY_NAME % 'update' (src/nova/tests/unit/policies/test_security_groups.py:L204)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/policies/test_security_groups.py:L210)
- **sink** (`db-write`): policies.POLICY_NAME % 'update': (src/nova/tests/unit/policies/test_security_groups.py:L292)

