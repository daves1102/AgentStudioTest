# src/nova/tests/unit/policies/test_server_metadata.py

## Overview

This file implements the `test_server_metadata` module, defining 2 classs, 1 field, 8 methods, 8 imports, 2 side effects, 2 security surface entries.

Lines: total 126, code 91, comment 17, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServerMetadataPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_server_metadata.py:L25–L109` |
| `ServerMetadataPolicyTest.setUp` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/policies/test_server_metadata.py:L33–L55` |
| `ServerMetadataPolicyTest.test_index_server_Metadata_policy` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_server_metadata.py:L58–L63` |
| `ServerMetadataPolicyTest.test_show_server_Metadata_policy` | method | (self, mock_get) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_server_metadata.py:L66–L72` |
| `ServerMetadataPolicyTest.test_create_server_Metadata_policy` | method | (self, mock_quota) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_server_metadata.py:L75–L81` |
| `ServerMetadataPolicyTest.test_update_server_Metadata_policy` | method | (self, mock_quota) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_server_metadata.py:L84–L90` |
| `ServerMetadataPolicyTest.test_update_all_server_Metadata_policy` | method | (self, mock_quota) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_server_metadata.py:L93–L99` |
| `ServerMetadataPolicyTest.test_delete_server_Metadata_policy` | method | (self, mock_delete, mock_get) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_server_metadata.py:L103–L109` |
| `ServerMetadataNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_server_metadata.py:L112–L126` |
| `ServerMetadataNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_server_metadata.py:L118–L118` |
| `ServerMetadataNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_server_metadata.py:L120–L126` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_server_metadata.py:L13)
- `import fixtures` (src/nova/tests/unit/policies/test_server_metadata.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_server_metadata.py:L16)
- `nova.api.openstack.compute`: imports `server_metadata` (src/nova/tests/unit/policies/test_server_metadata.py:L18)
- `nova.policies`: imports `server_metadata as policies` (src/nova/tests/unit/policies/test_server_metadata.py:L19)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_server_metadata.py:L20)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_server_metadata.py:L21)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_server_metadata.py:L22)

## Side Effects

- **network**: from nova.api.openstack.compute import server_metadata (src/nova/tests/unit/policies/test_server_metadata.py:L18)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_server_metadata.py:L38)

## Security Surface

- **sink** (`db-write`): rule_name = policies.POLICY_ROOT % 'update' (src/nova/tests/unit/policies/test_server_metadata.py:L85)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/policies/test_server_metadata.py:L88)

