# src/nova/tests/unit/objects/test_security_group.py

## Overview

This file implements the `test_security_group` module, defining 6 classs, 12 methods, 2 variables, 7 imports.

Lines: total 199, code 153, comment 17, blank 29

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_secgroup` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_security_group.py:L26–L36` |
| `_TestSecurityGroupObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_security_group.py:L39–L133` |
| `_TestSecurityGroupObject._fix_deleted` | method | (self, db_secgroup) | private | `dict(db_secgroup.items(), deleted=False)` (src/nova/tests/unit/objects/test_security_group.py:L42) | 1/2 | `src/nova/tests/unit/objects/test_security_group.py:L40–L42` |
| `_TestSecurityGroupObject.test_get` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_security_group.py:L46–L51` |
| `_TestSecurityGroupObject.test_get_by_name` | method | (self, mock_get) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_security_group.py:L55–L64` |
| `_TestSecurityGroupObject.test_in_use` | method | (self, mock_inuse) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_security_group.py:L68–L72` |
| `_TestSecurityGroupObject.test_save` | method | (self, mock_update) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_security_group.py:L75–L87` |
| `_TestSecurityGroupObject.test_save_no_changes` | method | (self, mock_update) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_security_group.py:L90–L95` |
| `_TestSecurityGroupObject.test_refresh` | method | (self, mock_get) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_security_group.py:L98–L108` |
| `_TestSecurityGroupObject.test_with_uuid` | method | (self, mock_db_update) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_security_group.py:L111–L127` |
| `_TestSecurityGroupObject.test_identifier` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_security_group.py:L129–L133` |
| `TestSecurityGroupObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_security_group.py:L136–L138` |
| `TestSecurityGroupObjectRemote` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_security_group.py:L141–L143` |
| `fake_secgroups` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_security_group.py:L146–L149` |
| `_TestSecurityGroupListObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_security_group.py:L152–L189` |
| `_TestSecurityGroupListObject.test_get_all` | method | (self, mock_get) | public | not declared | 2/9 | `src/nova/tests/unit/objects/test_security_group.py:L155–L163` |
| `_TestSecurityGroupListObject.test_get_by_project` | method | (self, mock_get) | public | not declared | 2/9 | `src/nova/tests/unit/objects/test_security_group.py:L167–L175` |
| `_TestSecurityGroupListObject.test_get_by_instance` | method | (self, mock_get) | public | not declared | 2/11 | `src/nova/tests/unit/objects/test_security_group.py:L179–L189` |
| `TestSecurityGroupListObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_security_group.py:L192–L194` |
| `TestSecurityGroupListObjectRemote` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_security_group.py:L197–L199` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_security_group.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/objects/test_security_group.py:L17)
- `oslo_versionedobjects`: imports `fixture as ovo_fixture` (src/nova/tests/unit/objects/test_security_group.py:L18)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/objects/test_security_group.py:L20)
- `nova.objects`: imports `instance` (src/nova/tests/unit/objects/test_security_group.py:L21)
- `nova.objects`: imports `security_group` (src/nova/tests/unit/objects/test_security_group.py:L22)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_security_group.py:L23)

