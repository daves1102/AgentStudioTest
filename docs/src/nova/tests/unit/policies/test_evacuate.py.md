# src/nova/tests/unit/policies/test_evacuate.py

## Overview

This file implements the `test_evacuate` module, defining 2 classs, 1 field, 1 function, 4 methods, 10 imports, 1 side effect.

Lines: total 115, code 84, comment 15, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_service_get_by_compute_host` | function | (self, context, host) | exported | `{'host_name': host, 'service': 'compute', 'zone': 'nova' }` (src/nova/tests/unit/policies/test_evacuate.py:L28) | 1/5 | `src/nova/tests/unit/policies/test_evacuate.py:L27–L31` |
| `EvacuatePolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_evacuate.py:L34–L106` |
| `EvacuatePolicyTest.setUp` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/policies/test_evacuate.py:L43–L64` |
| `EvacuatePolicyTest.test_evacuate_policy` | method | (self, mock_evacuate) | public | not declared | 1/10 | `src/nova/tests/unit/policies/test_evacuate.py:L67–L76` |
| `EvacuatePolicyTest.test_evacuate_policy_failed_with_other_user` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/policies/test_evacuate.py:L78–L92` |
| `EvacuatePolicyTest.test_evacuate_policy_pass_with_same_user` | method | (self, evacuate_mock) | public | not declared | 1/12 | `src/nova/tests/unit/policies/test_evacuate.py:L95–L106` |
| `EvacuateNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_evacuate.py:L109–L115` |
| `EvacuateNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_evacuate.py:L115–L115` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_evacuate.py:L13)
- `import fixtures` (src/nova/tests/unit/policies/test_evacuate.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_evacuate.py:L16)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/policies/test_evacuate.py:L17)
- `nova.api.openstack.compute`: imports `evacuate` (src/nova/tests/unit/policies/test_evacuate.py:L19)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_evacuate.py:L20)
- `nova`: imports `exception` (src/nova/tests/unit/policies/test_evacuate.py:L21)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_evacuate.py:L22)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_evacuate.py:L23)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_evacuate.py:L24)

## Side Effects

- **network**: from nova.api.openstack.compute import evacuate (src/nova/tests/unit/policies/test_evacuate.py:L19)

