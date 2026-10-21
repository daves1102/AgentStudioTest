# src/nova/tests/unit/objects/test_share_mapping.py

## Overview

This file implements the `test_share_mapping` module, defining 6 classs, 19 methods, 3 variables, 12 imports.

Lines: total 437, code 367, comment 18, blank 52

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_share_mapping` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_share_mapping.py:L28–L42` |
| `fake_share_mapping2` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_share_mapping.py:L44–L58` |
| `fake_share_mapping_attached` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_share_mapping.py:L60–L60` |
| `_TestShareMapping` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_share_mapping.py:L64–L346` |
| `_TestShareMapping._compare_obj` | method | (self, share_mapping, fake_share_mapping) | private | not declared | 1/6 | `src/nova/tests/unit/objects/test_share_mapping.py:L65–L70` |
| `_TestShareMapping.test_obj_make_compatible_attaching_status` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_share_mapping.py:L72–L84` |
| `_TestShareMapping.test_save` | method | (self, mock_upd) | public | not declared | 1/24 | `src/nova/tests/unit/objects/test_share_mapping.py:L89–L112` |
| `_TestShareMapping.test_get_share_host_provider` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/objects/test_share_mapping.py:L114–L127` |
| `_TestShareMapping.test_get_share_host_provider_not_defined` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/objects/test_share_mapping.py:L129–L142` |
| `_TestShareMapping.test_create` | method | (self, mock_upd) | public | not declared | 1/24 | `src/nova/tests/unit/objects/test_share_mapping.py:L147–L170` |
| `_TestShareMapping.test_activate` | method | (self, mock_upd) | public | not declared | 1/24 | `src/nova/tests/unit/objects/test_share_mapping.py:L175–L199` |
| `_TestShareMapping.test_deactivate` | method | (self, mock_upd) | public | not declared | 1/24 | `src/nova/tests/unit/objects/test_share_mapping.py:L204–L228` |
| `_TestShareMapping.test_delete` | method | (self, mock_del) | public | not declared | 1/15 | `src/nova/tests/unit/objects/test_share_mapping.py:L232–L246` |
| `_TestShareMapping.test_get_by_instance_uuid_and_share_id` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/objects/test_share_mapping.py:L248–L275` |
| `_TestShareMapping.test_set_access_according_to_protocol_nfs` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_share_mapping.py:L277–L284` |
| `_TestShareMapping.test_set_access_according_to_protocol_cephfs` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_share_mapping.py:L286–L295` |
| `_TestShareMapping.test_cephx_identity` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_share_mapping.py:L297–L310` |
| `_TestShareMapping.test_set_access_according_to_protocol_cephfs_per_instance_per_host` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/objects/test_share_mapping.py:L312–L334` |
| `_TestShareMapping.test_get_by_instance_uuid_and_share_id_not_found` | method | (self, mock_get) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_share_mapping.py:L339–L346` |
| `_TestShareMappingList` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_share_mapping.py:L349–L420` |
| `_TestShareMappingList.test_get_by_instance_uuid` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_share_mapping.py:L350–L361` |
| `_TestShareMappingList.test_get_by_host_for_reconcile` | method | (self, mock_hosts, mock_migs, mock_share_mappings) | public | not declared | 1/21 | `src/nova/tests/unit/objects/test_share_mapping.py:L366–L390` |
| `_TestShareMappingList.test_get_by_host_for_reconcile_no_candidates` | method | (self, mock_hosts, mock_migs, mock_share_mappings) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_share_mapping.py:L395–L409` |
| `_TestShareMappingList.test_get_by_share_id` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_share_mapping.py:L411–L420` |
| `TestShareMapping` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_share_mapping.py:L423–L424` |
| `TestRemoteShareMapping` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_share_mapping.py:L427–L428` |
| `TestShareMappingList` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_share_mapping.py:L431–L432` |
| `TestRemoteShareMappingList` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_share_mapping.py:L435–L437` |

## Dependencies

- `import datetime` (src/nova/tests/unit/objects/test_share_mapping.py:L12)
- `import hashlib` (src/nova/tests/unit/objects/test_share_mapping.py:L13)
- `copy`: imports `deepcopy` (src/nova/tests/unit/objects/test_share_mapping.py:L15)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/objects/test_share_mapping.py:L16)
- `nova.db.main`: imports `models` (src/nova/tests/unit/objects/test_share_mapping.py:L17)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_share_mapping.py:L18)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_share_mapping.py:L19)
- `nova.objects`: imports `fields` (src/nova/tests/unit/objects/test_share_mapping.py:L20)
- `nova.objects`: imports `share_mapping as sm` (src/nova/tests/unit/objects/test_share_mapping.py:L21)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_share_mapping.py:L22)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/objects/test_share_mapping.py:L23)
- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_share_mapping.py:L25)

