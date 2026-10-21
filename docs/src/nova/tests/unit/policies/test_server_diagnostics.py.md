# src/nova/tests/unit/policies/test_server_diagnostics.py

## Overview

This file implements the `test_server_diagnostics` module, defining 3 classs, 1 field, 3 methods, 10 imports, 2 side effects.

Lines: total 109, code 75, comment 17, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServerDiagnosticsPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_server_diagnostics.py:L26–L77` |
| `ServerDiagnosticsPolicyTest.setUp` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/policies/test_server_diagnostics.py:L35–L71` |
| `ServerDiagnosticsPolicyTest.test_server_diagnostics_policy` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_server_diagnostics.py:L73–L77` |
| `ServerDiagnosticsNoLegacyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_server_diagnostics.py:L80–L85` |
| `ServerDiagnosticsNoLegacyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_server_diagnostics.py:L85–L85` |
| `ServerDiagnosticsOverridePolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_server_diagnostics.py:L88–L109` |
| `ServerDiagnosticsOverridePolicyTest.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/policies/test_server_diagnostics.py:L96–L109` |

## Dependencies

- `import fixtures` (src/nova/tests/unit/policies/test_server_diagnostics.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_server_diagnostics.py:L14)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/policies/test_server_diagnostics.py:L15)
- `nova.api.openstack.compute`: imports `server_diagnostics` (src/nova/tests/unit/policies/test_server_diagnostics.py:L17)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_server_diagnostics.py:L18)
- `nova`: imports `objects` (src/nova/tests/unit/policies/test_server_diagnostics.py:L19)
- `nova.policies`: imports `server_diagnostics as policies` (src/nova/tests/unit/policies/test_server_diagnostics.py:L20)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_server_diagnostics.py:L21)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_server_diagnostics.py:L22)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_server_diagnostics.py:L23)

## Side Effects

- **network**: from nova.api.openstack.compute import server_diagnostics (src/nova/tests/unit/policies/test_server_diagnostics.py:L17)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_server_diagnostics.py:L41)

