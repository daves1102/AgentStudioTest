# src/nova/tests/unit/policies/test_server_tags.py

## Overview

This file implements the `test_server_tags` module, defining 2 classs, 1 field, 8 methods, 11 imports, 2 side effects, 2 security surface entries.

Lines: total 138, code 104, comment 16, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServerTagsPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_server_tags.py:L28–L122` |
| `ServerTagsPolicyTest.setUp` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/policies/test_server_tags.py:L36–L64` |
| `ServerTagsPolicyTest.test_index_server_tags_policy` | method | (self, mock_tag) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_server_tags.py:L67–L72` |
| `ServerTagsPolicyTest.test_show_server_tags_policy` | method | (self, mock_exists) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_server_tags.py:L75–L80` |
| `ServerTagsPolicyTest.test_update_server_tags_policy` | method | (self, mock_create, mock_tag, mock_notf) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_server_tags.py:L85–L92` |
| `ServerTagsPolicyTest.test_update_all_server_tags_policy` | method | (self, mock_set, mock_notf) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_server_tags.py:L96–L102` |
| `ServerTagsPolicyTest.test_delete_all_server_tags_policy` | method | (self, mock_destroy, mock_notf) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_server_tags.py:L106–L111` |
| `ServerTagsPolicyTest.test_delete_server_tags_policy` | method | (self, mock_destroy, mock_get, mock_notf) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_server_tags.py:L116–L122` |
| `ServerTagsNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_server_tags.py:L125–L138` |
| `ServerTagsNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_server_tags.py:L130–L130` |
| `ServerTagsNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_server_tags.py:L132–L138` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_server_tags.py:L13)
- `import fixtures` (src/nova/tests/unit/policies/test_server_tags.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_server_tags.py:L16)
- `nova.api.openstack.compute`: imports `server_tags` (src/nova/tests/unit/policies/test_server_tags.py:L18)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_server_tags.py:L19)
- `nova`: imports `context` (src/nova/tests/unit/policies/test_server_tags.py:L20)
- `nova`: imports `objects` (src/nova/tests/unit/policies/test_server_tags.py:L21)
- `nova.policies`: imports `server_tags as policies` (src/nova/tests/unit/policies/test_server_tags.py:L22)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_server_tags.py:L23)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_server_tags.py:L24)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_server_tags.py:L25)

## Side Effects

- **network**: from nova.api.openstack.compute import server_tags (src/nova/tests/unit/policies/test_server_tags.py:L18)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_server_tags.py:L41)

## Security Surface

- **sink** (`db-write`): rule_name = policies.POLICY_ROOT % 'update' (src/nova/tests/unit/policies/test_server_tags.py:L87)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/policies/test_server_tags.py:L90)

