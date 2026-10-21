# src/nova/tests/unit/policies/test_console_output.py

## Overview

This file implements the `test_console_output` module, defining 2 classs, 1 field, 3 methods, 9 imports, 2 side effects.

Lines: total 78, code 50, comment 15, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ConsoleOutputPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_console_output.py:L26–L62` |
| `ConsoleOutputPolicyTest.setUp` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/policies/test_console_output.py:L35–L53` |
| `ConsoleOutputPolicyTest.test_console_output_policy` | method | (self, mock_console) | public | not declared | 2/7 | `src/nova/tests/unit/policies/test_console_output.py:L56–L62` |
| `ConsoleOutputNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_console_output.py:L65–L78` |
| `ConsoleOutputNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_console_output.py:L71–L71` |
| `ConsoleOutputNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/policies/test_console_output.py:L73–L78` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_console_output.py:L13)
- `import fixtures` (src/nova/tests/unit/policies/test_console_output.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_console_output.py:L16)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/policies/test_console_output.py:L17)
- `nova.api.openstack.compute`: imports `console_output` (src/nova/tests/unit/policies/test_console_output.py:L19)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_console_output.py:L20)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_console_output.py:L21)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_console_output.py:L22)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_console_output.py:L23)

## Side Effects

- **network**: from nova.api.openstack.compute import console_output (src/nova/tests/unit/policies/test_console_output.py:L19)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_console_output.py:L40)

