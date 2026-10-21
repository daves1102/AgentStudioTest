# src/nova/tests/unit/policies/test_attach_interfaces.py

## Overview

This file implements the `test_attach_interfaces` module, defining 3 classs, 2 fields, 8 methods, 13 imports, 2 side effects.

Lines: total 205, code 152, comment 32, blank 21

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `AttachInterfacesPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_attach_interfaces.py:L30–L128` |
| `AttachInterfacesPolicyTest.setUp` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/policies/test_attach_interfaces.py:L38–L62` |
| `AttachInterfacesPolicyTest.test_index_interfaces_policy` | method | (self, mock_port, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_attach_interfaces.py:L66–L70` |
| `AttachInterfacesPolicyTest.test_show_interface_policy` | method | (self, mock_port, mock_get) | public | not declared | 1/22 | `src/nova/tests/unit/policies/test_attach_interfaces.py:L74–L95` |
| `AttachInterfacesPolicyTest.test_attach_interface` | method | (self, mock_interface, mock_port, mock_get) | public | not declared | 1/21 | `src/nova/tests/unit/policies/test_attach_interfaces.py:L100–L120` |
| `AttachInterfacesPolicyTest.test_delete_interface` | method | (self, mock_detach, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_attach_interfaces.py:L124–L128` |
| `AttachInterfacesNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_attach_interfaces.py:L131–L153` |
| `AttachInterfacesNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_attach_interfaces.py:L136–L136` |
| `AttachInterfacesNoLegacyPolicyTest.rules_without_deprecation` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_attach_interfaces.py:L137–L145` |
| `AttachInterfacesNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_attach_interfaces.py:L147–L153` |
| `AttachInterfacesDeprecatedPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_attach_interfaces.py:L156–L205` |
| `AttachInterfacesDeprecatedPolicyTest.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/policies/test_attach_interfaces.py:L165–L183` |
| `AttachInterfacesDeprecatedPolicyTest.test_deprecated_policy_overridden_rule_is_checked` | method | (self, mock_port, mock_get) | public | not declared | 1/10 | `src/nova/tests/unit/policies/test_attach_interfaces.py:L187–L205` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_attach_interfaces.py:L13)
- `import fixtures` (src/nova/tests/unit/policies/test_attach_interfaces.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_attach_interfaces.py:L16)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/policies/test_attach_interfaces.py:L17)
- `nova.api.openstack.compute`: imports `attach_interfaces` (src/nova/tests/unit/policies/test_attach_interfaces.py:L19)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_attach_interfaces.py:L20)
- `nova`: imports `exception` (src/nova/tests/unit/policies/test_attach_interfaces.py:L21)
- `nova.policies`: imports `attach_interfaces as ai_policies` (src/nova/tests/unit/policies/test_attach_interfaces.py:L22)
- `nova.policies`: imports `base as base_policy` (src/nova/tests/unit/policies/test_attach_interfaces.py:L23)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/policies/test_attach_interfaces.py:L24)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_attach_interfaces.py:L25)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_attach_interfaces.py:L26)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_attach_interfaces.py:L27)

## Side Effects

- **network**: from nova.api.openstack.compute import attach_interfaces (src/nova/tests/unit/policies/test_attach_interfaces.py:L19)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_attach_interfaces.py:L43)

