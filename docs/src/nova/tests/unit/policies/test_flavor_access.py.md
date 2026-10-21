# src/nova/tests/unit/policies/test_flavor_access.py

## Overview

This file implements the `test_flavor_access` module, defining 2 classs, 2 fields, 5 methods, 9 imports, 3 side effects.

Lines: total 107, code 75, comment 15, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FlavorAccessPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_flavor_access.py:L26–L84` |
| `FlavorAccessPolicyTest.setUp` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/policies/test_flavor_access.py:L35–L60` |
| `FlavorAccessPolicyTest.test_list_flavor_access_policy` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_flavor_access.py:L62–L66` |
| `FlavorAccessPolicyTest.test_add_tenant_access_policy` | method | (self, mock_add) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_flavor_access.py:L69–L75` |
| `FlavorAccessPolicyTest.test_remove_tenant_access_policy` | method | (self, mock_remove) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_flavor_access.py:L78–L84` |
| `FlavorAccessNoLegacyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_flavor_access.py:L87–L107` |
| `FlavorAccessNoLegacyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_flavor_access.py:L92–L92` |
| `FlavorAccessNoLegacyTest.rules_without_deprecation` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_flavor_access.py:L93–L99` |
| `FlavorAccessNoLegacyTest.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_flavor_access.py:L101–L107` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_flavor_access.py:L13)
- `import fixtures` (src/nova/tests/unit/policies/test_flavor_access.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_flavor_access.py:L16)
- `nova.api.openstack.compute`: imports `flavor_access` (src/nova/tests/unit/policies/test_flavor_access.py:L18)
- `nova.policies`: imports `base as base_policy` (src/nova/tests/unit/policies/test_flavor_access.py:L19)
- `nova.policies`: imports `flavor_access as fa_policy` (src/nova/tests/unit/policies/test_flavor_access.py:L20)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_flavor_access.py:L21)
- `nova.tests.unit`: imports `fake_flavor` (src/nova/tests/unit/policies/test_flavor_access.py:L22)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_flavor_access.py:L23)

## Side Effects

- **network**: from nova.api.openstack.compute import flavor_access (src/nova/tests/unit/policies/test_flavor_access.py:L18)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_flavor')).mock (src/nova/tests/unit/policies/test_flavor_access.py:L41)
- **network**: self.stub_out('nova.api.openstack.identity.verify_project_id', (src/nova/tests/unit/policies/test_flavor_access.py:L48)

