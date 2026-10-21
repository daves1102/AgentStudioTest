# src/nova/tests/unit/policies/test_multinic.py

## Overview

This file implements the `test_multinic` module, defining 2 classs, 2 fields, 4 methods, 11 imports, 2 side effects.

Lines: total 96, code 65, comment 17, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `MultinicPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_multinic.py:L28–L75` |
| `MultinicPolicyTest.setUp` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/policies/test_multinic.py:L37–L57` |
| `MultinicPolicyTest.test_add_fixed_ip_policy` | method | (self, mock_add) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_multinic.py:L60–L66` |
| `MultinicPolicyTest.test_remove_fixed_ip_policy` | method | (self, mock_remove) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_multinic.py:L69–L75` |
| `MultinicNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_multinic.py:L78–L96` |
| `MultinicNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_multinic.py:L84–L84` |
| `MultinicNoLegacyPolicyTest.rules_without_deprecation` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_multinic.py:L85–L89` |
| `MultinicNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/policies/test_multinic.py:L91–L96` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_multinic.py:L13)
- `import fixtures` (src/nova/tests/unit/policies/test_multinic.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_multinic.py:L16)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/policies/test_multinic.py:L17)
- `nova.api.openstack.compute`: imports `multinic` (src/nova/tests/unit/policies/test_multinic.py:L19)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_multinic.py:L20)
- `nova.policies`: imports `base as base_policy` (src/nova/tests/unit/policies/test_multinic.py:L21)
- `nova.policies`: imports `multinic as policies` (src/nova/tests/unit/policies/test_multinic.py:L22)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_multinic.py:L23)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_multinic.py:L24)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_multinic.py:L25)

## Side Effects

- **network**: from nova.api.openstack.compute import multinic (src/nova/tests/unit/policies/test_multinic.py:L19)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_multinic.py:L42)

