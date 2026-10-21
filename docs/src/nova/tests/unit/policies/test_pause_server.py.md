# src/nova/tests/unit/policies/test_pause_server.py

## Overview

This file implements the `test_pause_server` module, defining 2 classs, 1 field, 6 methods, 11 imports, 2 side effects.

Lines: total 114, code 81, comment 18, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `PauseServerPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_pause_server.py:L28–L98` |
| `PauseServerPolicyTest.setUp` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/policies/test_pause_server.py:L36–L58` |
| `PauseServerPolicyTest.test_pause_server_policy` | method | (self, mock_pause) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_pause_server.py:L61–L67` |
| `PauseServerPolicyTest.test_unpause_server_policy` | method | (self, mock_unpause) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_pause_server.py:L70–L76` |
| `PauseServerPolicyTest.test_pause_server_policy_failed_with_other_user` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/policies/test_pause_server.py:L78–L89` |
| `PauseServerPolicyTest.test_pause_server_overridden_policy_pass_with_same_user` | method | (self, mock_pause) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_pause_server.py:L92–L98` |
| `PauseServerNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_pause_server.py:L101–L114` |
| `PauseServerNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_pause_server.py:L107–L107` |
| `PauseServerNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/policies/test_pause_server.py:L109–L114` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_pause_server.py:L13)
- `import fixtures` (src/nova/tests/unit/policies/test_pause_server.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_pause_server.py:L16)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/policies/test_pause_server.py:L17)
- `nova.api.openstack.compute`: imports `pause_server` (src/nova/tests/unit/policies/test_pause_server.py:L19)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_pause_server.py:L20)
- `nova`: imports `exception` (src/nova/tests/unit/policies/test_pause_server.py:L21)
- `nova.policies`: imports `pause_server as ps_policies` (src/nova/tests/unit/policies/test_pause_server.py:L22)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_pause_server.py:L23)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_pause_server.py:L24)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_pause_server.py:L25)

## Side Effects

- **network**: from nova.api.openstack.compute import pause_server (src/nova/tests/unit/policies/test_pause_server.py:L19)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_pause_server.py:L42)

