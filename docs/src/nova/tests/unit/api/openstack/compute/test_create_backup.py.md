# src/nova/tests/unit/api/openstack/compute/test_create_backup.py

## Overview

This file implements the `test_create_backup` module, defining 2 classs, 3 fields, 22 methods, 13 imports, 2 side effects.

Lines: total 423, code 351, comment 23, blank 49

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CreateBackupTestsV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L33–L392` |
| `CreateBackupTestsV21.create_backup` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L35–L35` |
| `CreateBackupTestsV21.controller_name` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L36–L36` |
| `CreateBackupTestsV21.validation_error` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L37–L37` |
| `CreateBackupTestsV21.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L39–L42` |
| `CreateBackupTestsV21.test_create_backup_with_metadata` | method | (self, mock_backup, mock_check_image) | public | not declared | 1/23 | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L46–L73` |
| `CreateBackupTestsV21.test_create_backup_no_name` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L75–L85` |
| `CreateBackupTestsV21.test_create_backup_name_with_leading_trailing_spaces` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L87–L97` |
| `CreateBackupTestsV21.test_create_backup_name_with_leading_trailing_spaces_compat_mode` | method | (self, mock_backup, mock_check_image) | public | not declared | 1/21 | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L101–L123` |
| `CreateBackupTestsV21.test_create_backup_no_rotation` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L125–L135` |
| `CreateBackupTestsV21.test_create_backup_negative_rotation` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L137–L150` |
| `CreateBackupTestsV21.test_create_backup_negative_rotation_with_string_number` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L152–L162` |
| `CreateBackupTestsV21.test_create_backup_rotation_with_empty_string` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L164–L174` |
| `CreateBackupTestsV21.test_create_backup_no_backup_type` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L176–L186` |
| `CreateBackupTestsV21.test_create_backup_non_dict_metadata` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L188–L199` |
| `CreateBackupTestsV21.test_create_backup_bad_entity` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L201–L205` |
| `CreateBackupTestsV21.test_create_backup_rotation_is_zero` | method | (self, mock_backup, mock_check_image) | public | not declared | 1/22 | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L209–L234` |
| `CreateBackupTestsV21.test_create_backup_rotation_is_positive` | method | (self, mock_backup, mock_check_image) | public | not declared | 1/22 | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L238–L264` |
| `CreateBackupTestsV21.test_create_backup_rotation_is_string_number` | method | (self, mock_backup, mock_check_image) | public | not declared | 1/22 | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L268–L292` |
| `CreateBackupTestsV21.test_create_backup_v2_45` | method | (self, mock_backup, mock_check_image) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L297–L313` |
| `CreateBackupTestsV21.test_create_backup_raises_conflict_on_invalid_state` | method | (self, mock_backup, mock_check_image) | public | not declared | 1/20 | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L317–L337` |
| `CreateBackupTestsV21.test_create_backup_with_non_existed_instance` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L339–L352` |
| `CreateBackupTestsV21.test_create_backup_with_invalid_create_backup` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L354–L364` |
| `CreateBackupTestsV21.test_backup_volume_backed_instance` | method | (self, mock_is_volume_backed, mock_check_image) | public | not declared | 1/22 | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L369–L392` |
| `CreateBackupTestsV239` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L395–L423` |
| `CreateBackupTestsV239.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L397–L400` |
| `CreateBackupTestsV239.test_create_backup_no_quota_checks` | method | (self, mock_get_instance, mock_check_quotas) | public | not declared | 1/16 | `src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L404–L423` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L16)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L18)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L19)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L20)
- `nova.api.openstack`: imports `common` (src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L22)
- `nova.api.openstack.compute`: imports `create_backup` (src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L23)
- `nova.compute`: imports `api` (src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L24)
- `nova.compute`: imports `utils as compute_utils` (src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L25)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L26)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L27)
- `nova.tests.unit.api.openstack.compute`: imports `admin_only_action_common` (src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L28)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L29)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L30)

## Side Effects

- **network**: from nova.api.openstack.compute import create_backup (src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L23)
- **network**: from nova.tests.unit.api.openstack.compute import admin_only_action_common (src/nova/tests/unit/api/openstack/compute/test_create_backup.py:L28)

