# src/nova/tests/unit/policies/test_quota_class_sets.py

## Overview

This file implements the `test_quota_class_sets` module, defining 2 classs, 1 field, 3 methods, 5 imports, 1 side effect, 3 security surface entries.

Lines: total 75, code 50, comment 14, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `QuotaClassSetsPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_quota_class_sets.py:L20–L66` |
| `QuotaClassSetsPolicyTest.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_quota_class_sets.py:L28–L40` |
| `QuotaClassSetsPolicyTest.test_update_quota_class_sets_policy` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/policies/test_quota_class_sets.py:L42–L59` |
| `QuotaClassSetsPolicyTest.test_show_quota_class_sets_policy` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_quota_class_sets.py:L61–L66` |
| `QuotaClassSetsNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_quota_class_sets.py:L69–L75` |
| `QuotaClassSetsNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_quota_class_sets.py:L75–L75` |

## Dependencies

- `nova.api.openstack.compute`: imports `quota_classes` (src/nova/tests/unit/policies/test_quota_class_sets.py:L13)
- `nova.policies`: imports `quota_class_sets as policies` (src/nova/tests/unit/policies/test_quota_class_sets.py:L14)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/policies/test_quota_class_sets.py:L15)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_quota_class_sets.py:L16)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_quota_class_sets.py:L17)

## Side Effects

- **network**: from nova.api.openstack.compute import quota_classes (src/nova/tests/unit/policies/test_quota_class_sets.py:L13)

## Security Surface

- **sink** (`db-write`): rule_name = policies.POLICY_ROOT % 'update' (src/nova/tests/unit/policies/test_quota_class_sets.py:L43)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/policies/test_quota_class_sets.py:L57)
- **sink** (`db-write`): admin will be able to get update quota class. (src/nova/tests/unit/policies/test_quota_class_sets.py:L72)

