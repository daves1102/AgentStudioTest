# src/nova/tests/unit/objects/test_instance_action.py

## Overview

This file implements the `test_instance_action` module, defining 6 classs, 1 constant, 25 methods, 2 variables, 12 imports, 1 side effect.

Lines: total 438, code 371, comment 23, blank 44

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NOW` | constant | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_action.py:L31–L31` |
| `fake_action` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_action.py:L32–L46` |
| `fake_event` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_action.py:L47–L61` |
| `_TestInstanceActionObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_instance_action.py:L64–L199` |
| `_TestInstanceActionObject.test_get_by_request_id` | method | (self, mock_get) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_instance_action.py:L66–L73` |
| `_TestInstanceActionObject.test_pack_action_start` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_instance_action.py:L75–L84` |
| `_TestInstanceActionObject.test_pack_action_finish` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_instance_action.py:L86–L92` |
| `_TestInstanceActionObject.test_action_start` | method | (self, mock_start) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_instance_action.py:L95–L104` |
| `_TestInstanceActionObject.test_action_start_no_result` | method | (self, mock_start) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_instance_action.py:L107–L116` |
| `_TestInstanceActionObject.test_action_finish` | method | (self, mock_finish) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_instance_action.py:L119–L129` |
| `_TestInstanceActionObject.test_action_finish_no_result` | method | (self, mock_finish) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_instance_action.py:L132–L142` |
| `_TestInstanceActionObject.test_finish` | method | (self, mock_start, mock_finish) | public | not declared | 1/27 | `src/nova/tests/unit/objects/test_instance_action.py:L146–L172` |
| `_TestInstanceActionObject.test_get_list` | method | (self, mock_get) | public | not declared | 2/10 | `src/nova/tests/unit/objects/test_instance_action.py:L175–L184` |
| `_TestInstanceActionObject.test_create_id_in_updates_error` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_instance_action.py:L186–L189` |
| `_TestInstanceActionObject.test_create` | method | (self, mock_action_start) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_instance_action.py:L192–L199` |
| `TestInstanceActionObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_action.py:L202–L204` |
| `TestRemoteInstanceActionObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_action.py:L207–L209` |
| `_TestInstanceActionEventObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_instance_action.py:L212–L428` |
| `_TestInstanceActionEventObject.test_get_by_id` | method | (self, mock_get) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_instance_action.py:L214–L220` |
| `_TestInstanceActionEventObject.test_event_start` | method | (self, mock_start) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_instance_action.py:L223–L233` |
| `_TestInstanceActionEventObject.test_event_start_no_result` | method | (self, mock_start) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_instance_action.py:L236–L246` |
| `_TestInstanceActionEventObject.test_event_finish` | method | (self, mock_finish) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_instance_action.py:L249–L261` |
| `_TestInstanceActionEventObject.test_event_finish_no_result` | method | (self, mock_finish) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_instance_action.py:L264–L275` |
| `_TestInstanceActionEventObject.test_event_finish_with_failure` | method | (self, mock_finish, mock_tb) | public | not declared | 1/19 | `src/nova/tests/unit/objects/test_instance_action.py:L279–L299` |
| `_TestInstanceActionEventObject.test_event_finish_with_failure_legacy` | method | (self, mock_finish, mock_tb) | public | not declared | 1/20 | `src/nova/tests/unit/objects/test_instance_action.py:L303–L329` |
| `_TestInstanceActionEventObject.test_event_finish_with_failure_legacy_unicode` | method | (self, mock_finish) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_instance_action.py:L332–L346` |
| `_TestInstanceActionEventObject.test_event_finish_with_failure_no_result` | method | (self, mock_finish, mock_tb) | public | not declared | 1/15 | `src/nova/tests/unit/objects/test_instance_action.py:L350–L367` |
| `_TestInstanceActionEventObject.test_get_by_action` | method | (self, mock_get) | public | not declared | 2/9 | `src/nova/tests/unit/objects/test_instance_action.py:L370–L378` |
| `_TestInstanceActionEventObject.test_event_finish_with_failure_serialized` | method | (self, mock_format, mock_pack) | public | not declared | 1/16 | `src/nova/tests/unit/objects/test_instance_action.py:L383–L398` |
| `_TestInstanceActionEventObject.test_create_id_in_updates_error` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_instance_action.py:L400–L405` |
| `_TestInstanceActionEventObject.test_create` | method | (self, mock_action_event_start) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_instance_action.py:L408–L417` |
| `_TestInstanceActionEventObject.test_obj_make_compatible` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_instance_action.py:L419–L428` |
| `TestInstanceActionEventObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_action.py:L431–L433` |
| `TestRemoteInstanceActionEventObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_instance_action.py:L436–L438` |

## Dependencies

- `import copy` (src/nova/tests/unit/objects/test_instance_action.py:L15)
- `import traceback` (src/nova/tests/unit/objects/test_instance_action.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_instance_action.py:L17)
- `oslo_utils`: imports `fixture as utils_fixture` (src/nova/tests/unit/objects/test_instance_action.py:L19)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/objects/test_instance_action.py:L20)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/objects/test_instance_action.py:L21)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/objects/test_instance_action.py:L23)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_instance_action.py:L24)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_instance_action.py:L25)
- `nova.objects`: imports `instance_action` (src/nova/tests/unit/objects/test_instance_action.py:L26)
- `nova`: imports `test` (src/nova/tests/unit/objects/test_instance_action.py:L27)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_instance_action.py:L28)

## Side Effects

- **global-mutation**: NOW = timeutils.utcnow().replace(microsecond=0) (src/nova/tests/unit/objects/test_instance_action.py:L31)

