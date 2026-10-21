# src/nova/tests/unit/policies/test_deferred_delete.py

## Overview

This file implements the `test_deferred_delete` module, defining 2 classs, 2 fields, 6 methods, 12 imports, 2 side effects.

Lines: total 118, code 84, comment 18, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `DeferredDeletePolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_deferred_delete.py:L29–L97` |
| `DeferredDeletePolicyTest.setUp` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/policies/test_deferred_delete.py:L38–L59` |
| `DeferredDeletePolicyTest.test_restore_server_policy` | method | (self, mock_restore) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_deferred_delete.py:L62–L67` |
| `DeferredDeletePolicyTest.test_force_delete_server_policy` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_deferred_delete.py:L69–L74` |
| `DeferredDeletePolicyTest.test_force_delete_server_policy_failed_with_other_user` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/policies/test_deferred_delete.py:L76–L87` |
| `DeferredDeletePolicyTest.test_force_delete_server_policy_pass_with_same_user` | method | (self, force_delete_mock) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_deferred_delete.py:L90–L97` |
| `DeferredDeleteNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_deferred_delete.py:L100–L118` |
| `DeferredDeleteNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_deferred_delete.py:L106–L106` |
| `DeferredDeleteNoLegacyPolicyTest.rules_without_deprecation` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_deferred_delete.py:L107–L111` |
| `DeferredDeleteNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/policies/test_deferred_delete.py:L113–L118` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_deferred_delete.py:L13)
- `import fixtures` (src/nova/tests/unit/policies/test_deferred_delete.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_deferred_delete.py:L16)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/policies/test_deferred_delete.py:L17)
- `nova.api.openstack.compute`: imports `deferred_delete` (src/nova/tests/unit/policies/test_deferred_delete.py:L19)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_deferred_delete.py:L20)
- `nova`: imports `exception` (src/nova/tests/unit/policies/test_deferred_delete.py:L21)
- `nova.policies`: imports `base as base_policy` (src/nova/tests/unit/policies/test_deferred_delete.py:L22)
- `nova.policies`: imports `deferred_delete as dd_policies` (src/nova/tests/unit/policies/test_deferred_delete.py:L23)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_deferred_delete.py:L24)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_deferred_delete.py:L25)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_deferred_delete.py:L26)

## Side Effects

- **network**: from nova.api.openstack.compute import deferred_delete (src/nova/tests/unit/policies/test_deferred_delete.py:L19)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_deferred_delete.py:L44)

