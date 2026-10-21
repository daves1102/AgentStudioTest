# src/nova/tests/unit/policies/test_tenant_networks.py

## Overview

This file implements the `test_tenant_networks` module, defining 2 classs, 2 fields, 4 methods, 7 imports, 1 side effect.

Lines: total 91, code 60, comment 18, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TenantNetworksPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_tenant_networks.py:L24–L66` |
| `TenantNetworksPolicyTest.setUp` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/policies/test_tenant_networks.py:L33–L51` |
| `TenantNetworksPolicyTest.test_list_tenant_networks_policy` | method | (self, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_tenant_networks.py:L54–L58` |
| `TenantNetworksPolicyTest.test_show_tenant_network_policy` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_tenant_networks.py:L61–L66` |
| `TenantNetworksNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_tenant_networks.py:L69–L91` |
| `TenantNetworksNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_tenant_networks.py:L73–L73` |
| `TenantNetworksNoLegacyPolicyTest.rules_without_deprecation` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_tenant_networks.py:L74–L78` |
| `TenantNetworksNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/policies/test_tenant_networks.py:L80–L91` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_tenant_networks.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_tenant_networks.py:L15)
- `nova.api.openstack.compute`: imports `tenant_networks` (src/nova/tests/unit/policies/test_tenant_networks.py:L17)
- `nova.policies`: imports `base as base_policy` (src/nova/tests/unit/policies/test_tenant_networks.py:L18)
- `nova.policies`: imports `tenant_networks as policies` (src/nova/tests/unit/policies/test_tenant_networks.py:L19)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_tenant_networks.py:L20)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_tenant_networks.py:L21)

## Side Effects

- **network**: from nova.api.openstack.compute import tenant_networks (src/nova/tests/unit/policies/test_tenant_networks.py:L17)

