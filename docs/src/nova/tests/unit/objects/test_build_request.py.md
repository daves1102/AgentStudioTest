# src/nova/tests/unit/objects/test_build_request.py

## Overview

This file implements the `test_build_request` module, defining 6 classs, 1 function, 14 methods, 11 imports.

Lines: total 229, code 162, comment 24, blank 43

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_TestBuildRequestObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_build_request.py:L28–L192` |
| `_TestBuildRequestObject.test_get_by_instance_uuid` | method | (self, get_by_uuid) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_build_request.py:L32–L43` |
| `_TestBuildRequestObject.test_get_by_instance_uuid_instance_none` | method | (self, get_by_uuid) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_build_request.py:L47–L54` |
| `_TestBuildRequestObject.test_get_by_instance_uuid_instance_version_too_new` | method | (self, get_by_uuid) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_build_request.py:L58–L68` |
| `_TestBuildRequestObject.test_get_by_instance_uuid_do_not_override_locked_by` | method | (self, get_by_uuid) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_build_request.py:L72–L84` |
| `_TestBuildRequestObject.test_create` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_build_request.py:L86–L101` |
| `_TestBuildRequestObject.test_create._test_create_args` | function | (self2, context, changes) | private | `fake_req` (src/nova/tests/unit/objects/test_build_request.py:L96) | — | `src/nova/tests/unit/objects/test_build_request.py:L90–L96` |
| `_TestBuildRequestObject.test_create_id_set` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_build_request.py:L103–L107` |
| `_TestBuildRequestObject.test_create_uuid_set` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_build_request.py:L109–L112` |
| `_TestBuildRequestObject.test_destroy` | method | (self, destroy_in_db) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_build_request.py:L115–L121` |
| `_TestBuildRequestObject.test_save` | method | (self, save_in_db) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_build_request.py:L124–L137` |
| `_TestBuildRequestObject.test_get_new_instance_show_changed_fields` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/objects/test_build_request.py:L139–L154` |
| `_TestBuildRequestObject.test_from_db_object_set_deleted_hidden` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_build_request.py:L156–L166` |
| `_TestBuildRequestObject.test_obj_make_compatible_pre_1_3` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_build_request.py:L168–L176` |
| `_TestBuildRequestObject.test_create_with_tags_set` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_build_request.py:L178–L192` |
| `TestBuildRequestObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_build_request.py:L195–L197` |
| `TestRemoteBuildRequestObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_build_request.py:L200–L202` |
| `_TestBuildRequestListObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_build_request.py:L205–L219` |
| `_TestBuildRequestListObject.test_get_all` | method | (self, get_all) | public | not declared | 3/11 | `src/nova/tests/unit/objects/test_build_request.py:L207–L219` |
| `TestBuildRequestListObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_build_request.py:L222–L224` |
| `TestRemoteBuildRequestListObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_build_request.py:L227–L229` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_build_request.py:L13)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/objects/test_build_request.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/objects/test_build_request.py:L16)
- `oslo_versionedobjects`: imports `base as o_vo_base` (src/nova/tests/unit/objects/test_build_request.py:L17)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_build_request.py:L19)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_build_request.py:L20)
- `nova.objects`: imports `base` (src/nova/tests/unit/objects/test_build_request.py:L21)
- `nova.objects`: imports `build_request` (src/nova/tests/unit/objects/test_build_request.py:L22)
- `nova.tests.unit`: imports `fake_build_request` (src/nova/tests/unit/objects/test_build_request.py:L23)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/objects/test_build_request.py:L24)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_build_request.py:L25)

