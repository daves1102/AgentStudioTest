# src/nova/tests/unit/policies/test_lock_server.py

## Overview

This file implements the `test_lock_server` module, defining 3 classs, 1 constant, 1 field, 9 methods, 13 imports, 3 side effects.

Lines: total 168, code 119, comment 26, blank 23

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/policies/test_lock_server.py:L29–L29` |
| `LockServerPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_lock_server.py:L32–L125` |
| `LockServerPolicyTest.setUp` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/policies/test_lock_server.py:L40–L70` |
| `LockServerPolicyTest.test_lock_server_policy` | method | (self, mock_lock) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_lock_server.py:L73–L79` |
| `LockServerPolicyTest.test_unlock_server_policy` | method | (self, mock_unlock) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_lock_server.py:L82–L88` |
| `LockServerPolicyTest.test_unlock_override_server_policy` | method | (self, mock_expected, mock_unlock) | public | not declared | 1/12 | `src/nova/tests/unit/policies/test_lock_server.py:L92–L103` |
| `LockServerPolicyTest.test_lock_server_policy_failed_with_other_user` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/policies/test_lock_server.py:L105–L116` |
| `LockServerPolicyTest.test_lock_server_overridden_policy_pass_with_same_user` | method | (self, mock_lock) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_lock_server.py:L119–L125` |
| `LockServerNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_lock_server.py:L128–L141` |
| `LockServerNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_lock_server.py:L134–L134` |
| `LockServerNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/policies/test_lock_server.py:L136–L141` |
| `LockServerOverridePolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_lock_server.py:L144–L168` |
| `LockServerOverridePolicyTest.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_lock_server.py:L151–L158` |
| `LockServerOverridePolicyTest.test_unlock_override_server_policy` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_lock_server.py:L160–L168` |

## Dependencies

- `import functools` (src/nova/tests/unit/policies/test_lock_server.py:L13)
- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_lock_server.py:L14)
- `import fixtures` (src/nova/tests/unit/policies/test_lock_server.py:L16)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_lock_server.py:L17)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/policies/test_lock_server.py:L18)
- `nova.api.openstack.compute`: imports `lock_server` (src/nova/tests/unit/policies/test_lock_server.py:L20)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_lock_server.py:L21)
- `import nova.conf` (src/nova/tests/unit/policies/test_lock_server.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/policies/test_lock_server.py:L23)
- `nova.policies`: imports `lock_server as ls_policies` (src/nova/tests/unit/policies/test_lock_server.py:L24)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_lock_server.py:L25)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_lock_server.py:L26)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_lock_server.py:L27)

## Side Effects

- **network**: from nova.api.openstack.compute import lock_server (src/nova/tests/unit/policies/test_lock_server.py:L20)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_lock_server.py:L46)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/policies/test_lock_server.py:L29)

