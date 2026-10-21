# src/nova/tests/unit/policies/test_suspend_server.py

## Overview

This file implements the `test_suspend_server` module, defining 2 classs, 1 field, 6 methods, 10 imports, 2 side effects.

Lines: total 112, code 78, comment 18, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SuspendServerPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_suspend_server.py:L27–L96` |
| `SuspendServerPolicyTest.setUp` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/policies/test_suspend_server.py:L35–L56` |
| `SuspendServerPolicyTest.test_suspend_server_policy` | method | (self, mock_suspend) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_suspend_server.py:L59–L65` |
| `SuspendServerPolicyTest.test_resume_server_policy` | method | (self, mock_resume) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_suspend_server.py:L68–L74` |
| `SuspendServerPolicyTest.test_suspend_server_policy_failed_with_other_user` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/policies/test_suspend_server.py:L76–L87` |
| `SuspendServerPolicyTest.test_suspend_server_overridden_policy_pass_with_same_user` | method | (self, mock_suspend) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_suspend_server.py:L90–L96` |
| `SuspendServerNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_suspend_server.py:L99–L112` |
| `SuspendServerNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_suspend_server.py:L105–L105` |
| `SuspendServerNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/policies/test_suspend_server.py:L107–L112` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_suspend_server.py:L13)
- `import fixtures` (src/nova/tests/unit/policies/test_suspend_server.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_suspend_server.py:L16)
- `nova.api.openstack.compute`: imports `suspend_server` (src/nova/tests/unit/policies/test_suspend_server.py:L18)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_suspend_server.py:L19)
- `nova`: imports `exception` (src/nova/tests/unit/policies/test_suspend_server.py:L20)
- `nova.policies`: imports `suspend_server as policies` (src/nova/tests/unit/policies/test_suspend_server.py:L21)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_suspend_server.py:L22)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_suspend_server.py:L23)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_suspend_server.py:L24)

## Side Effects

- **network**: from nova.api.openstack.compute import suspend_server (src/nova/tests/unit/policies/test_suspend_server.py:L18)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_suspend_server.py:L41)

