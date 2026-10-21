# src/nova/tests/unit/policies/test_simple_tenant_usage.py

## Overview

This file implements the `test_simple_tenant_usage` module, defining 2 classs, 1 field, 4 methods, 7 imports, 1 side effect.

Lines: total 80, code 51, comment 15, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SimpleTenantUsagePolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_simple_tenant_usage.py:L24–L65` |
| `SimpleTenantUsagePolicyTest.setUp` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/policies/test_simple_tenant_usage.py:L32–L51` |
| `SimpleTenantUsagePolicyTest.test_index_simple_tenant_usage_policy` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_simple_tenant_usage.py:L53–L58` |
| `SimpleTenantUsagePolicyTest.test_show_simple_tenant_usage_policy` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_simple_tenant_usage.py:L60–L65` |
| `SimpleTenantUsageNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_simple_tenant_usage.py:L68–L80` |
| `SimpleTenantUsageNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_simple_tenant_usage.py:L73–L73` |
| `SimpleTenantUsageNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/policies/test_simple_tenant_usage.py:L75–L80` |

## Dependencies

- `import datetime` (src/nova/tests/unit/policies/test_simple_tenant_usage.py:L13)
- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_simple_tenant_usage.py:L14)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/policies/test_simple_tenant_usage.py:L16)
- `nova.api.openstack.compute`: imports `simple_tenant_usage` (src/nova/tests/unit/policies/test_simple_tenant_usage.py:L18)
- `nova.policies`: imports `simple_tenant_usage as policies` (src/nova/tests/unit/policies/test_simple_tenant_usage.py:L19)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_simple_tenant_usage.py:L20)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_simple_tenant_usage.py:L21)

## Side Effects

- **network**: from nova.api.openstack.compute import simple_tenant_usage (src/nova/tests/unit/policies/test_simple_tenant_usage.py:L18)

