# src/nova/tests/unit/objects/test_instance_group.py

## Overview

This file implements the `test_instance_group` module, defining 6 classs, 2 functions, 21 methods, 6 variables, 10 imports, 10 side effects, 1 security surface entry.

Lines: total 414, code 346, comment 21, blank 47

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_TS_NOW` | variable | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_instance_group.py:L29–L29` |
| `_TS_NOW` | variable | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_instance_group.py:L32–L32` |
| `_DB_UUID` | variable | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_instance_group.py:L33–L33` |
| `_INST_GROUP_POLICY_DB` | variable | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_instance_group.py:L34–L37` |
| `_INST_GROUP_DB` | variable | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_instance_group.py:L38–L50` |
| `_INST_GROUP_OBJ_VALS` | variable | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_instance_group.py:L51–L56` |
| `_TestInstanceGroupObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_instance_group.py:L59–L361` |
| `_TestInstanceGroupObject.test_get_by_uuid` | method | (self, mock_api_get) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_instance_group.py:L63–L74` |
| `_TestInstanceGroupObject.test_rules_helper` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_instance_group.py:L76–L82` |
| `_TestInstanceGroupObject.test_get_by_instance_uuid` | method | (self, mock_api_get) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_instance_group.py:L86–L90` |
| `_TestInstanceGroupObject.test_refresh` | method | (self, mock_db_get) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_instance_group.py:L93–L102` |
| `_TestInstanceGroupObject.test_save` | method | (self, mock_members_add, mock_db_get, mock_notify) | public | not declared | 1/19 | `src/nova/tests/unit/objects/test_instance_group.py:L107–L125` |
| `_TestInstanceGroupObject.test_save_without_hosts` | method | (self, mock_db_get, mock_notify) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_instance_group.py:L129–L140` |
| `_TestInstanceGroupObject.test_set_policies_failure` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_instance_group.py:L142–L146` |
| `_TestInstanceGroupObject.test_save_policies` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_instance_group.py:L148–L152` |
| `_TestInstanceGroupObject.test_create` | method | (self, mock_db_create, mock_notify, mock_notify_action) | public | not declared | 1/41 | `src/nova/tests/unit/objects/test_instance_group.py:L158–L211` |
| `_TestInstanceGroupObject.test_create._group_matcher` | function | (group) | private | `(group.uuid == _DB_UUID and group.name == _INST_GROUP_DB['name'] and group.user_id == _INST_GROUP_DB['user_id'] and group.project_id == _INST_GROUP_DB['project_id'] and group.created_at == _TS_NOW and` (src/nova/tests/unit/objects/test_instance_group.py:L196) | — | `src/nova/tests/unit/objects/test_instance_group.py:L194–L204` |
| `_TestInstanceGroupObject.test_destroy` | method | (self, mock_db_delete, mock_notify, mock_notify_action) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_instance_group.py:L216–L229` |
| `_TestInstanceGroupObject.test_add_members` | method | (self, mock_members_add_db, mock_notify, mock_notify_add_member) | public | not declared | 1/18 | `src/nova/tests/unit/objects/test_instance_group.py:L234–L251` |
| `_TestInstanceGroupObject.test_count_members_by_user` | method | (self, mock_get_db, mock_il_get) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_instance_group.py:L256–L266` |
| `_TestInstanceGroupObject.test_get_hosts` | method | (self, mock_get_db, mock_il_get) | public | not declared | 1/26 | `src/nova/tests/unit/objects/test_instance_group.py:L271–L298` |
| `_TestInstanceGroupObject.test_obj_make_compatible` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_instance_group.py:L300–L306` |
| `_TestInstanceGroupObject.test_obj_make_compatible_pre_1_11` | method | (self) | public | not declared | 3/16 | `src/nova/tests/unit/objects/test_instance_group.py:L308–L325` |
| `_TestInstanceGroupObject.test_load_hosts` | method | (self, mock_get_by_filt) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_instance_group.py:L328–L337` |
| `_TestInstanceGroupObject.test_load_anything_else_but_hosts` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_instance_group.py:L339–L341` |
| `_TestInstanceGroupObject.test_get_by_name` | method | (self, mock_api_get) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_instance_group.py:L344–L353` |
| `_TestInstanceGroupObject.test_get_by_hint` | method | (self, mock_name, mock_uuid) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_instance_group.py:L357–L361` |
| `TestInstanceGroupObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_group.py:L364–L366` |
| `TestRemoteInstanceGroupObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_group.py:L369–L371` |
| `_mock_db_list_get` | function | (*args, **kwargs) | unexported | `result` (src/nova/tests/unit/objects/test_instance_group.py:L386) | 2/13 | `src/nova/tests/unit/objects/test_instance_group.py:L374–L386` |
| `_TestInstanceGroupListObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_instance_group.py:L389–L404` |
| `_TestInstanceGroupListObject.test_list_all` | method | (self, mock_api_get) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_instance_group.py:L392–L396` |
| `_TestInstanceGroupListObject.test_list_by_project_id` | method | (self, mock_api_get) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_instance_group.py:L399–L404` |
| `TestInstanceGroupListObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_group.py:L407–L409` |
| `TestRemoteInstanceGroupListObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_group.py:L412–L414` |

## Dependencies

- `import copy` (src/nova/tests/unit/objects/test_instance_group.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_instance_group.py:L16)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/objects/test_instance_group.py:L18)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/objects/test_instance_group.py:L19)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/objects/test_instance_group.py:L20)
- `oslo_versionedobjects`: imports `exception as ovo_exc` (src/nova/tests/unit/objects/test_instance_group.py:L21)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_instance_group.py:L23)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_instance_group.py:L24)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_instance_group.py:L25)
- `nova.tests.unit`: imports `utils as test_utils` (src/nova/tests/unit/objects/test_instance_group.py:L26)

## Side Effects

- **network**: def test_save(self, mock_members_add, mock_db_get, mock_notify): (src/nova/tests/unit/objects/test_instance_group.py:L107)
- **network**: mock_notify.assert_called_once_with(self.context, "update", (src/nova/tests/unit/objects/test_instance_group.py:L122)
- **network**: def test_save_without_hosts(self, mock_db_get, mock_notify): (src/nova/tests/unit/objects/test_instance_group.py:L129)
- **network**: self.assertFalse(mock_notify.called) (src/nova/tests/unit/objects/test_instance_group.py:L140)
- **network**: def test_create(self, mock_db_create, mock_notify, mock_notify_action): (src/nova/tests/unit/objects/test_instance_group.py:L158)
- **network**: mock_notify.assert_called_once_with( (src/nova/tests/unit/objects/test_instance_group.py:L182)
- **network**: def test_destroy(self, mock_db_delete, mock_notify, mock_notify_action): (src/nova/tests/unit/objects/test_instance_group.py:L216)
- **network**: mock_notify.assert_called_once_with(self.context, "delete", (src/nova/tests/unit/objects/test_instance_group.py:L228)
- **network**: def test_add_members(self, mock_members_add_db, mock_notify, (src/nova/tests/unit/objects/test_instance_group.py:L234)
- **network**: mock_notify.assert_called_once_with( (src/nova/tests/unit/objects/test_instance_group.py:L247)

## Security Surface

- **sink** (`db-write`): mock_notify.assert_called_once_with(self.context, "update", (src/nova/tests/unit/objects/test_instance_group.py:L122)

## Notes

- KB `sideEffects` entries at L107, L129, L158, L216, L234 have targets that appear to be code fragments rather than resource paths; documented as recorded.

