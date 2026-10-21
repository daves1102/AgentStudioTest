# src/nova/tests/unit/policies/test_rescue.py

## Overview

This file implements the `test_rescue` module, defining 2 classs, 2 fields, 6 methods, 12 imports, 2 side effects.

Lines: total 120, code 87, comment 18, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `RescueServerPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_rescue.py:L29–L100` |
| `RescueServerPolicyTest.setUp` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/policies/test_rescue.py:L37–L60` |
| `RescueServerPolicyTest.test_rescue_server_policy` | method | (self, mock_rescue) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_rescue.py:L63–L69` |
| `RescueServerPolicyTest.test_unrescue_server_policy` | method | (self, mock_unrescue) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_rescue.py:L72–L78` |
| `RescueServerPolicyTest.test_rescue_server_policy_failed_with_other_user` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/policies/test_rescue.py:L80–L91` |
| `RescueServerPolicyTest.test_rescue_server_overridden_policy_pass_with_same_user` | method | (self, mock_rescue) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_rescue.py:L94–L100` |
| `RescueServerNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_rescue.py:L103–L120` |
| `RescueServerNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_rescue.py:L108–L108` |
| `RescueServerNoLegacyPolicyTest.rules_without_deprecation` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_rescue.py:L109–L113` |
| `RescueServerNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/policies/test_rescue.py:L115–L120` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_rescue.py:L13)
- `import fixtures` (src/nova/tests/unit/policies/test_rescue.py:L15)
- `nova.policies`: imports `base as base_policy` (src/nova/tests/unit/policies/test_rescue.py:L16)
- `nova.policies`: imports `rescue as rs_policies` (src/nova/tests/unit/policies/test_rescue.py:L17)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_rescue.py:L18)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/policies/test_rescue.py:L19)
- `nova.api.openstack.compute`: imports `rescue` (src/nova/tests/unit/policies/test_rescue.py:L21)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_rescue.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/policies/test_rescue.py:L23)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_rescue.py:L24)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_rescue.py:L25)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_rescue.py:L26)

## Side Effects

- **network**: from nova.api.openstack.compute import rescue (src/nova/tests/unit/policies/test_rescue.py:L21)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_rescue.py:L43)

