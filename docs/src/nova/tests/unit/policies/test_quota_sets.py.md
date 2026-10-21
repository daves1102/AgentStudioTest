# src/nova/tests/unit/policies/test_quota_sets.py

## Overview

This file implements the `test_quota_sets` module, defining 2 classs, 1 field, 7 methods, 6 imports, 1 side effect, 3 security surface entries.

Lines: total 181, code 141, comment 23, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `QuotaSetsPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_quota_sets.py:L21–L156` |
| `QuotaSetsPolicyTest.setUp` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/policies/test_quota_sets.py:L29–L61` |
| `QuotaSetsPolicyTest.test_update_quota_sets_policy` | method | (self) | public | not declared | 3/18 | `src/nova/tests/unit/policies/test_quota_sets.py:L63–L81` |
| `QuotaSetsPolicyTest.test_delete_quota_sets_policy` | method | (self) | public | not declared | 3/17 | `src/nova/tests/unit/policies/test_quota_sets.py:L83–L99` |
| `QuotaSetsPolicyTest.test_default_quota_sets_policy` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_quota_sets.py:L101–L106` |
| `QuotaSetsPolicyTest.test_detail_quota_sets_policy` | method | (self) | public | not declared | 5/21 | `src/nova/tests/unit/policies/test_quota_sets.py:L108–L130` |
| `QuotaSetsPolicyTest.test_show_quota_sets_policy` | method | (self) | public | not declared | 5/23 | `src/nova/tests/unit/policies/test_quota_sets.py:L132–L156` |
| `QuotaSetsNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_quota_sets.py:L159–L181` |
| `QuotaSetsNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_quota_sets.py:L164–L164` |
| `QuotaSetsNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/policies/test_quota_sets.py:L166–L181` |

## Dependencies

- `nova.api.openstack.compute`: imports `quota_sets` (src/nova/tests/unit/policies/test_quota_sets.py:L13)
- `nova`: imports `exception` (src/nova/tests/unit/policies/test_quota_sets.py:L14)
- `nova.policies`: imports `quota_sets as policies` (src/nova/tests/unit/policies/test_quota_sets.py:L15)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/policies/test_quota_sets.py:L16)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_quota_sets.py:L17)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_quota_sets.py:L18)

## Side Effects

- **network**: from nova.api.openstack.compute import quota_sets (src/nova/tests/unit/policies/test_quota_sets.py:L13)

## Security Surface

- **sink** (`db-write`): rule_name = policies.POLICY_ROOT % 'update' (src/nova/tests/unit/policies/test_quota_sets.py:L64)
- **sink** (`db-write`): self.controller.update(req, cxtx.project_id, body=body) (src/nova/tests/unit/policies/test_quota_sets.py:L70)
- **sink** (`db-write`): exception.PolicyNotAuthorized, self.controller.update, (src/nova/tests/unit/policies/test_quota_sets.py:L77)

