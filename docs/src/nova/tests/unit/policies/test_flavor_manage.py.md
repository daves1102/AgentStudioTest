# src/nova/tests/unit/policies/test_flavor_manage.py

## Overview

This file implements the `test_flavor_manage` module, defining 2 classs, 1 field, 1 function, 4 methods, 7 imports, 1 side effect, 2 security surface entries.

Lines: total 104, code 78, comment 13, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FlavorManagePolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_flavor_manage.py:L24–L96` |
| `FlavorManagePolicyTest.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_flavor_manage.py:L32–L40` |
| `FlavorManagePolicyTest.test_create_flavor_policy` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/policies/test_flavor_manage.py:L42–L67` |
| `FlavorManagePolicyTest.test_create_flavor_policy.fake_create` | function | (newflavor) | public | not declared | — | `src/nova/tests/unit/policies/test_flavor_manage.py:L45–L55` |
| `FlavorManagePolicyTest.test_update_flavor_policy` | method | (self, mock_save, mock_get) | public | not declared | 1/19 | `src/nova/tests/unit/policies/test_flavor_manage.py:L71–L89` |
| `FlavorManagePolicyTest.test_delete_flavor_policy` | method | (self, mock_delete) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_flavor_manage.py:L92–L96` |
| `FlavorManageNoLegacyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_flavor_manage.py:L99–L104` |
| `FlavorManageNoLegacyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_flavor_manage.py:L104–L104` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_flavor_manage.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_flavor_manage.py:L15)
- `nova.api.openstack.compute`: imports `flavors` (src/nova/tests/unit/policies/test_flavor_manage.py:L17)
- `nova`: imports `objects` (src/nova/tests/unit/policies/test_flavor_manage.py:L18)
- `nova.policies`: imports `flavor_manage as fm_policies` (src/nova/tests/unit/policies/test_flavor_manage.py:L19)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_flavor_manage.py:L20)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_flavor_manage.py:L21)

## Side Effects

- **network**: from nova.api.openstack.compute import flavors (src/nova/tests/unit/policies/test_flavor_manage.py:L17)

## Security Surface

- **sink** (`db-write`): rule_name = fm_policies.POLICY_ROOT % 'update' (src/nova/tests/unit/policies/test_flavor_manage.py:L72)
- **sink** (`db-write`): rule_name, self.controller.update, (src/nova/tests/unit/policies/test_flavor_manage.py:L87)

