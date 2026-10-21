# src/nova/tests/unit/policies/test_networks.py

## Overview

This file implements the `test_networks` module, defining 2 classs, 2 fields, 4 methods, 7 imports, 1 side effect.

Lines: total 93, code 61, comment 18, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NetworksPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_networks.py:L24–L67` |
| `NetworksPolicyTest.setUp` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/policies/test_networks.py:L33–L51` |
| `NetworksPolicyTest.test_list_networks_policy` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_networks.py:L54–L59` |
| `NetworksPolicyTest.test_show_network_policy` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_networks.py:L62–L67` |
| `NetworksNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_networks.py:L70–L93` |
| `NetworksNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_networks.py:L75–L75` |
| `NetworksNoLegacyPolicyTest.rules_without_deprecation` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_networks.py:L76–L80` |
| `NetworksNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/policies/test_networks.py:L82–L93` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_networks.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_networks.py:L15)
- `nova.api.openstack.compute`: imports `networks` (src/nova/tests/unit/policies/test_networks.py:L17)
- `nova.policies`: imports `base as base_policy` (src/nova/tests/unit/policies/test_networks.py:L18)
- `nova.policies`: imports `networks as policies` (src/nova/tests/unit/policies/test_networks.py:L19)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_networks.py:L20)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_networks.py:L21)

## Side Effects

- **network**: from nova.api.openstack.compute import networks (src/nova/tests/unit/policies/test_networks.py:L17)

