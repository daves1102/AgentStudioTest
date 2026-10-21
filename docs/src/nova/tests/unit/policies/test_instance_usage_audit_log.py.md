# src/nova/tests/unit/policies/test_instance_usage_audit_log.py

## Overview

This file implements the `test_instance_usage_audit_log` module, defining 2 classs, 2 fields, 3 methods, 6 imports, 1 side effect.

Lines: total 68, code 44, comment 13, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `InstanceUsageAuditLogPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_instance_usage_audit_log.py:L22–L54` |
| `InstanceUsageAuditLogPolicyTest.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/policies/test_instance_usage_audit_log.py:L31–L42` |
| `InstanceUsageAuditLogPolicyTest.test_show_policy` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_instance_usage_audit_log.py:L44–L48` |
| `InstanceUsageAuditLogPolicyTest.test_index_policy` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_instance_usage_audit_log.py:L50–L54` |
| `InstanceUsageNoLegacyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_instance_usage_audit_log.py:L57–L68` |
| `InstanceUsageNoLegacyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_instance_usage_audit_log.py:L62–L62` |
| `InstanceUsageNoLegacyTest.rules_without_deprecation` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_instance_usage_audit_log.py:L63–L68` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_instance_usage_audit_log.py:L13)
- `nova.api.openstack.compute`: imports `instance_usage_audit_log as iual` (src/nova/tests/unit/policies/test_instance_usage_audit_log.py:L15)
- `nova.policies`: imports `base as base_policy` (src/nova/tests/unit/policies/test_instance_usage_audit_log.py:L16)
- `nova.policies`: imports `instance_usage_audit_log as iual_policies` (src/nova/tests/unit/policies/test_instance_usage_audit_log.py:L17)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_instance_usage_audit_log.py:L18)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_instance_usage_audit_log.py:L19)

## Side Effects

- **network**: from nova.api.openstack.compute import instance_usage_audit_log as iual (src/nova/tests/unit/policies/test_instance_usage_audit_log.py:L15)

