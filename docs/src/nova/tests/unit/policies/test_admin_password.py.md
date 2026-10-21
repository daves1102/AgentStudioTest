# src/nova/tests/unit/policies/test_admin_password.py

## Overview

This file implements the `test_admin_password` module, defining 2 classs, 1 field, 5 methods, 11 imports, 2 side effects.

Lines: total 106, code 74, comment 18, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `AdminPasswordPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_admin_password.py:L28–L90` |
| `AdminPasswordPolicyTest.setUp` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/policies/test_admin_password.py:L36–L59` |
| `AdminPasswordPolicyTest.test_change_paassword_policy` | method | (self, mock_password) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_admin_password.py:L62–L68` |
| `AdminPasswordPolicyTest.test_change_password_overridden_policy_failed_with_other_user` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/policies/test_admin_password.py:L70–L81` |
| `AdminPasswordPolicyTest.test_change_password_overridden_policy_pass_with_same_user` | method | (self, password_mock) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_admin_password.py:L84–L90` |
| `AdminPasswordNoLegacyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_admin_password.py:L93–L106` |
| `AdminPasswordNoLegacyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_admin_password.py:L99–L99` |
| `AdminPasswordNoLegacyTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/policies/test_admin_password.py:L101–L106` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_admin_password.py:L13)
- `import fixtures` (src/nova/tests/unit/policies/test_admin_password.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_admin_password.py:L16)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/policies/test_admin_password.py:L17)
- `nova.api.openstack.compute`: imports `admin_password` (src/nova/tests/unit/policies/test_admin_password.py:L19)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_admin_password.py:L20)
- `nova`: imports `exception` (src/nova/tests/unit/policies/test_admin_password.py:L21)
- `nova.policies`: imports `admin_password as ap_policies` (src/nova/tests/unit/policies/test_admin_password.py:L22)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_admin_password.py:L23)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_admin_password.py:L24)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_admin_password.py:L25)

## Side Effects

- **network**: from nova.api.openstack.compute import admin_password (src/nova/tests/unit/policies/test_admin_password.py:L19)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_admin_password.py:L43)

