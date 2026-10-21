# src/nova/tests/unit/policies/test_hypervisors.py

## Overview

This file implements the `test_hypervisors` module, defining 2 classs, 1 field, 8 methods, 7 imports, 1 side effect.

Lines: total 148, code 118, comment 14, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `HypervisorsPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_hypervisors.py:L23–L139` |
| `HypervisorsPolicyTest.setUp` | method | (self) | public | not declared | 1/62 | `src/nova/tests/unit/policies/test_hypervisors.py:L31–L96` |
| `HypervisorsPolicyTest.test_list_hypervisors_policy` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_hypervisors.py:L98–L102` |
| `HypervisorsPolicyTest.test_list_details_hypervisors_policy` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_hypervisors.py:L104–L108` |
| `HypervisorsPolicyTest.test_show_hypervisors_policy` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_hypervisors.py:L110–L114` |
| `HypervisorsPolicyTest.test_uptime_hypervisors_policy` | method | (self, mock_uptime) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_hypervisors.py:L117–L121` |
| `HypervisorsPolicyTest.test_search_hypervisors_policy` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_hypervisors.py:L123–L127` |
| `HypervisorsPolicyTest.test_servers_hypervisors_policy` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_hypervisors.py:L129–L133` |
| `HypervisorsPolicyTest.test_statistics_hypervisors_policy` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_hypervisors.py:L135–L139` |
| `HypervisorsNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_hypervisors.py:L142–L148` |
| `HypervisorsNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_hypervisors.py:L148–L148` |

## Dependencies

- `import datetime` (src/nova/tests/unit/policies/test_hypervisors.py:L13)
- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_hypervisors.py:L14)
- `nova.api.openstack.compute`: imports `hypervisors` (src/nova/tests/unit/policies/test_hypervisors.py:L16)
- `nova`: imports `objects` (src/nova/tests/unit/policies/test_hypervisors.py:L17)
- `nova.policies`: imports `hypervisors as hv_policies` (src/nova/tests/unit/policies/test_hypervisors.py:L18)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_hypervisors.py:L19)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_hypervisors.py:L20)

## Side Effects

- **network**: from nova.api.openstack.compute import hypervisors (src/nova/tests/unit/policies/test_hypervisors.py:L16)

