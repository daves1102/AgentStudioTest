# src/nova/tests/unit/policies/test_server_password.py

## Overview

This file implements the `test_server_password` module, defining 2 classs, 2 fields, 4 methods, 9 imports, 2 side effects.

Lines: total 95, code 64, comment 17, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServerPasswordPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_server_password.py:L26–L74` |
| `ServerPasswordPolicyTest.setUp` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/policies/test_server_password.py:L34–L56` |
| `ServerPasswordPolicyTest.test_index_server_password_policy` | method | (self, mock_pass) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_server_password.py:L59–L66` |
| `ServerPasswordPolicyTest.test_clear_server_password_policy` | method | (self, mock_pass) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_server_password.py:L69–L74` |
| `ServerPasswordNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_server_password.py:L77–L95` |
| `ServerPasswordNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_server_password.py:L82–L82` |
| `ServerPasswordNoLegacyPolicyTest.rules_without_deprecation` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_server_password.py:L83–L87` |
| `ServerPasswordNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_server_password.py:L89–L95` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_server_password.py:L13)
- `import fixtures` (src/nova/tests/unit/policies/test_server_password.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_server_password.py:L16)
- `nova.api.openstack.compute`: imports `server_password` (src/nova/tests/unit/policies/test_server_password.py:L18)
- `nova.policies`: imports `base as base_policy` (src/nova/tests/unit/policies/test_server_password.py:L19)
- `nova.policies`: imports `server_password as policies` (src/nova/tests/unit/policies/test_server_password.py:L20)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_server_password.py:L21)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_server_password.py:L22)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_server_password.py:L23)

## Side Effects

- **network**: from nova.api.openstack.compute import server_password (src/nova/tests/unit/policies/test_server_password.py:L18)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_server_password.py:L39)

