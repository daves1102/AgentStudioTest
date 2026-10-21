# src/nova/tests/unit/policies/test_admin_actions.py

## Overview

This file implements the `test_admin_actions` module, defining 2 classs, 1 field, 3 methods, 9 imports, 1 side effect.

Lines: total 79, code 52, comment 14, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `AdminActionsPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_admin_actions.py:L26–L70` |
| `AdminActionsPolicyTest.setUp` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/policies/test_admin_actions.py:L35–L52` |
| `AdminActionsPolicyTest.test_reset_state_policy` | method | (self, mock_save) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_admin_actions.py:L55–L60` |
| `AdminActionsPolicyTest.test_inject_network_info_policy` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/policies/test_admin_actions.py:L62–L70` |
| `AdminActionsNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_admin_actions.py:L73–L79` |
| `AdminActionsNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_admin_actions.py:L79–L79` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_admin_actions.py:L13)
- `import fixtures` (src/nova/tests/unit/policies/test_admin_actions.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_admin_actions.py:L16)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/policies/test_admin_actions.py:L17)
- `nova.api.openstack.compute`: imports `admin_actions` (src/nova/tests/unit/policies/test_admin_actions.py:L19)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_admin_actions.py:L20)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_admin_actions.py:L21)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_admin_actions.py:L22)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_admin_actions.py:L23)

## Side Effects

- **network**: from nova.api.openstack.compute import admin_actions (src/nova/tests/unit/policies/test_admin_actions.py:L19)

