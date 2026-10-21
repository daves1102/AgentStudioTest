# src/nova/tests/unit/policies/test_floating_ips.py

## Overview

This file implements the `test_floating_ips` module, defining 2 classs, 2 fields, 8 methods, 13 imports, 2 side effects.

Lines: total 205, code 164, comment 25, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FloatingIPPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_floating_ips.py:L30–L162` |
| `FloatingIPPolicyTest.setUp` | method | (self) | public | not declared | 1/38 | `src/nova/tests/unit/policies/test_floating_ips.py:L39–L86` |
| `FloatingIPPolicyTest.test_show_floating_ip_policy` | method | (self, mock_get) | public | not declared | 1/12 | `src/nova/tests/unit/policies/test_floating_ips.py:L89–L100` |
| `FloatingIPPolicyTest.test_index_floating_ip_policy` | method | (self, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_floating_ips.py:L103–L107` |
| `FloatingIPPolicyTest.test_create_floating_ip_policy` | method | (self, mock_create, mock_get) | public | not declared | 1/12 | `src/nova/tests/unit/policies/test_floating_ips.py:L111–L122` |
| `FloatingIPPolicyTest.test_delete_floating_ip_policy` | method | (self, mock_delete, mock_get, mock_instance) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_floating_ips.py:L128–L133` |
| `FloatingIPPolicyTest.test_add_floating_ip_policy` | method | (self, mock_add, mock_net) | public | not declared | 1/12 | `src/nova/tests/unit/policies/test_floating_ips.py:L137–L148` |
| `FloatingIPPolicyTest.test_remove_floating_ip_policy` | method | (self, mock_remove, mock_get, mock_instance) | public | not declared | 1/10 | `src/nova/tests/unit/policies/test_floating_ips.py:L153–L162` |
| `FloatingIPNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_floating_ips.py:L165–L205` |
| `FloatingIPNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_floating_ips.py:L168–L168` |
| `FloatingIPNoLegacyPolicyTest.rules_without_deprecation` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_floating_ips.py:L169–L181` |
| `FloatingIPNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/policies/test_floating_ips.py:L183–L205` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_floating_ips.py:L13)
- `import fixtures` (src/nova/tests/unit/policies/test_floating_ips.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_floating_ips.py:L16)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/policies/test_floating_ips.py:L17)
- `nova.api.openstack.compute`: imports `floating_ips` (src/nova/tests/unit/policies/test_floating_ips.py:L19)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_floating_ips.py:L20)
- `nova.network`: imports `model as network_model` (src/nova/tests/unit/policies/test_floating_ips.py:L21)
- `nova.policies`: imports `base as base_policy` (src/nova/tests/unit/policies/test_floating_ips.py:L22)
- `nova.policies`: imports `floating_ips as fip_policies` (src/nova/tests/unit/policies/test_floating_ips.py:L23)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_floating_ips.py:L24)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_floating_ips.py:L25)
- `nova.tests.unit`: imports `fake_network_cache_model` (src/nova/tests/unit/policies/test_floating_ips.py:L26)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_floating_ips.py:L27)

## Side Effects

- **network**: from nova.api.openstack.compute import floating_ips (src/nova/tests/unit/policies/test_floating_ips.py:L19)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_floating_ips.py:L45)

