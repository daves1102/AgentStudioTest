# src/nova/tests/unit/policies/test_create_backup.py

## Overview

This file implements the `test_create_backup` module, defining 2 classs, 1 field, 3 methods, 9 imports, 2 side effects.

Lines: total 85, code 55, comment 17, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CreateBackupPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_create_backup.py:L26–L70` |
| `CreateBackupPolicyTest.setUp` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/policies/test_create_backup.py:L35–L55` |
| `CreateBackupPolicyTest.test_create_backup_policy` | method | (self, mock_backup) | public | not declared | 1/13 | `src/nova/tests/unit/policies/test_create_backup.py:L58–L70` |
| `CreateBackupNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_create_backup.py:L73–L85` |
| `CreateBackupNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_create_backup.py:L78–L78` |
| `CreateBackupNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/policies/test_create_backup.py:L80–L85` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_create_backup.py:L13)
- `import fixtures` (src/nova/tests/unit/policies/test_create_backup.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_create_backup.py:L16)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/policies/test_create_backup.py:L17)
- `nova.api.openstack.compute`: imports `create_backup` (src/nova/tests/unit/policies/test_create_backup.py:L19)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_create_backup.py:L20)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_create_backup.py:L21)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_create_backup.py:L22)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_create_backup.py:L23)

## Side Effects

- **network**: from nova.api.openstack.compute import create_backup (src/nova/tests/unit/policies/test_create_backup.py:L19)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_create_backup.py:L40)

