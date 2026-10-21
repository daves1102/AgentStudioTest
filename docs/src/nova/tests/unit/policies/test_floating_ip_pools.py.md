# src/nova/tests/unit/policies/test_floating_ip_pools.py

## Overview

This file implements the `test_floating_ip_pools` module, defining 2 classs, 1 field, 2 methods, 4 imports, 1 side effect.

Lines: total 50, code 28, comment 12, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FloatingIPPoolsPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_floating_ip_pools.py:L20–L44` |
| `FloatingIPPoolsPolicyTest.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_floating_ip_pools.py:L29–L36` |
| `FloatingIPPoolsPolicyTest.test_floating_ip_pools_policy` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_floating_ip_pools.py:L39–L44` |
| `FloatingIPPoolsNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_floating_ip_pools.py:L47–L50` |
| `FloatingIPPoolsNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_floating_ip_pools.py:L50–L50` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_floating_ip_pools.py:L13)
- `nova.api.openstack.compute`: imports `floating_ip_pools` (src/nova/tests/unit/policies/test_floating_ip_pools.py:L15)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_floating_ip_pools.py:L16)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_floating_ip_pools.py:L17)

## Side Effects

- **network**: from nova.api.openstack.compute import floating_ip_pools (src/nova/tests/unit/policies/test_floating_ip_pools.py:L15)

