# src/nova/tests/unit/policies/test_server_ips.py

## Overview

This file implements the `test_server_ips` module, defining 2 classs, 1 field, 4 methods, 9 imports, 3 side effects.

Lines: total 89, code 62, comment 15, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServerIpsPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_server_ips.py:L25–L74` |
| `ServerIpsPolicyTest.setUp` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/policies/test_server_ips.py:L33–L59` |
| `ServerIpsPolicyTest.test_index_ips_policy` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_server_ips.py:L61–L66` |
| `ServerIpsPolicyTest.test_show_ips_policy` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_server_ips.py:L68–L74` |
| `ServerIpsNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_server_ips.py:L77–L89` |
| `ServerIpsNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_server_ips.py:L82–L82` |
| `ServerIpsNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/policies/test_server_ips.py:L84–L89` |

## Dependencies

- `import fixtures` (src/nova/tests/unit/policies/test_server_ips.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_server_ips.py:L14)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/policies/test_server_ips.py:L15)
- `nova.api.openstack.compute`: imports `ips` (src/nova/tests/unit/policies/test_server_ips.py:L17)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_server_ips.py:L18)
- `nova.policies`: imports `ips as ips_policies` (src/nova/tests/unit/policies/test_server_ips.py:L19)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_server_ips.py:L20)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_server_ips.py:L21)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_server_ips.py:L22)

## Side Effects

- **network**: from nova.api.openstack.compute import ips (src/nova/tests/unit/policies/test_server_ips.py:L17)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_server_ips.py:L38)
- **network**: fixtures.MockPatch('nova.api.openstack.common' (src/nova/tests/unit/policies/test_server_ips.py:L47)

