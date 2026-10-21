# src/nova/tests/unit/policies/test_remote_consoles.py

## Overview

This file implements the `test_remote_consoles` module, defining 2 classs, 1 field, 3 methods, 10 imports, 2 side effects.

Lines: total 84, code 56, comment 17, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `RemoteConsolesPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_remote_consoles.py:L27–L69` |
| `RemoteConsolesPolicyTest.setUp` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/policies/test_remote_consoles.py:L35–L60` |
| `RemoteConsolesPolicyTest.test_create_console_policy` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_remote_consoles.py:L62–L69` |
| `RemoteConsolesNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_remote_consoles.py:L72–L84` |
| `RemoteConsolesNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_remote_consoles.py:L77–L77` |
| `RemoteConsolesNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/policies/test_remote_consoles.py:L79–L84` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_remote_consoles.py:L13)
- `import fixtures` (src/nova/tests/unit/policies/test_remote_consoles.py:L15)
- `nova.policies`: imports `remote_consoles as rc_policies` (src/nova/tests/unit/policies/test_remote_consoles.py:L16)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_remote_consoles.py:L17)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/policies/test_remote_consoles.py:L18)
- `nova.api.openstack.compute`: imports `remote_consoles` (src/nova/tests/unit/policies/test_remote_consoles.py:L20)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_remote_consoles.py:L21)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_remote_consoles.py:L22)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_remote_consoles.py:L23)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_remote_consoles.py:L24)

## Side Effects

- **network**: from nova.api.openstack.compute import remote_consoles (src/nova/tests/unit/policies/test_remote_consoles.py:L20)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_remote_consoles.py:L44)

