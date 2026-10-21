# src/nova/tests/unit/policies/test_server_groups.py

## Overview

This file implements the `test_server_groups` module, defining 2 classs, 1 constant, 1 field, 7 methods, 10 imports, 2 side effects.

Lines: total 191, code 141, comment 27, blank 23

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/policies/test_server_groups.py:L26–L26` |
| `ServerGroupPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_server_groups.py:L29–L152` |
| `ServerGroupPolicyTest.setUp` | method | (self) | public | not declared | 1/41 | `src/nova/tests/unit/policies/test_server_groups.py:L37–L90` |
| `ServerGroupPolicyTest.test_index_server_groups_policy` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_server_groups.py:L93–L98` |
| `ServerGroupPolicyTest.test_index_all_project_server_groups_policy` | method | (self, mock_get, mock_get_all) | public | not declared | 5/22 | `src/nova/tests/unit/policies/test_server_groups.py:L102–L126` |
| `ServerGroupPolicyTest.test_show_server_groups_policy` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_server_groups.py:L128–L134` |
| `ServerGroupPolicyTest.test_create_server_groups_policy` | method | (self, mock_quota) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_server_groups.py:L137–L144` |
| `ServerGroupPolicyTest.test_delete_server_groups_policy` | method | (self, mock_destroy) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_server_groups.py:L147–L152` |
| `ServerGroupNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_server_groups.py:L155–L191` |
| `ServerGroupNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_server_groups.py:L160–L160` |
| `ServerGroupNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/policies/test_server_groups.py:L162–L191` |

## Dependencies

- `import functools` (src/nova/tests/unit/policies/test_server_groups.py:L12)
- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_server_groups.py:L14)
- `import fixtures` (src/nova/tests/unit/policies/test_server_groups.py:L16)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_server_groups.py:L17)
- `nova.api.openstack.compute`: imports `server_groups` (src/nova/tests/unit/policies/test_server_groups.py:L19)
- `import nova.conf` (src/nova/tests/unit/policies/test_server_groups.py:L20)
- `nova`: imports `objects` (src/nova/tests/unit/policies/test_server_groups.py:L21)
- `nova.policies`: imports `server_groups as policies` (src/nova/tests/unit/policies/test_server_groups.py:L22)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_server_groups.py:L23)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_server_groups.py:L24)

## Side Effects

- **network**: from nova.api.openstack.compute import server_groups (src/nova/tests/unit/policies/test_server_groups.py:L19)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/policies/test_server_groups.py:L26)

