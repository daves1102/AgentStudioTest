# src/nova/tests/unit/policies/test_shelve.py

## Overview

This file implements the `test_shelve` module, defining 2 classs, 1 field, 7 methods, 10 imports, 2 side effects.

Lines: total 127, code 89, comment 22, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ShelveServerPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_shelve.py:L27–L111` |
| `ShelveServerPolicyTest.setUp` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/policies/test_shelve.py:L35–L62` |
| `ShelveServerPolicyTest.test_shelve_server_policy` | method | (self, mock_shelve) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_shelve.py:L65–L71` |
| `ShelveServerPolicyTest.test_unshelve_server_policy` | method | (self, mock_unshelve) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_shelve.py:L74–L80` |
| `ShelveServerPolicyTest.test_shelve_offload_server_policy` | method | (self, mock_offload) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_shelve.py:L83–L89` |
| `ShelveServerPolicyTest.test_shelve_server_policy_failed_with_other_user` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/policies/test_shelve.py:L91–L102` |
| `ShelveServerPolicyTest.test_shelve_server_overridden_policy_pass_with_same_user` | method | (self, mock_shelve) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_shelve.py:L105–L111` |
| `ShelveServerNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_shelve.py:L114–L127` |
| `ShelveServerNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_shelve.py:L119–L119` |
| `ShelveServerNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/policies/test_shelve.py:L121–L127` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_shelve.py:L13)
- `import fixtures` (src/nova/tests/unit/policies/test_shelve.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_shelve.py:L16)
- `nova.api.openstack.compute`: imports `shelve` (src/nova/tests/unit/policies/test_shelve.py:L18)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_shelve.py:L19)
- `nova`: imports `exception` (src/nova/tests/unit/policies/test_shelve.py:L20)
- `nova.policies`: imports `shelve as policies` (src/nova/tests/unit/policies/test_shelve.py:L21)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_shelve.py:L22)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_shelve.py:L23)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_shelve.py:L24)

## Side Effects

- **network**: from nova.api.openstack.compute import shelve (src/nova/tests/unit/policies/test_shelve.py:L18)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_shelve.py:L41)

