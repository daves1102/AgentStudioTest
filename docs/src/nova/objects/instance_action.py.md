# src/nova/objects/instance_action.py

## Overview

This file implements the `instance_action` module, defining 4 classs, 4 constants, 4 fields, 21 methods, 1 variable, 7 imports, 4 side effects.

Lines: total 300, code 220, comment 47, blank 33

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/instance_action.py:L24–L29` |
| `InstanceAction` | class | — | exported | not declared | — | `src/nova/objects/instance_action.py:L34–L123` |
| `InstanceAction.VERSION` | constant | — | public | not declared | — | `src/nova/objects/instance_action.py:L39–L39` |
| `InstanceAction.fields` | field | — | public | not declared | — | `src/nova/objects/instance_action.py:L41–L51` |
| `InstanceAction._from_db_object` | method | (context, action, db_action) | private | `action` (src/nova/objects/instance_action.py:L59) | 2/6 | `src/nova/objects/instance_action.py:L54–L59` |
| `InstanceAction.pack_action_start` | method | (context, instance_uuid, action_name) | public | `values` (src/nova/objects/instance_action.py:L70) | 1/9 | `src/nova/objects/instance_action.py:L62–L70` |
| `InstanceAction.pack_action_finish` | method | (context, instance_uuid) | public | `values` (src/nova/objects/instance_action.py:L79) | 1/7 | `src/nova/objects/instance_action.py:L73–L79` |
| `InstanceAction.get_by_request_id` | method | (cls, context, instance_uuid, request_id) | public | `cls._from_db_object(context, cls(), db_action)` (src/nova/objects/instance_action.py:L87) | 2/5 | `src/nova/objects/instance_action.py:L83–L87` |
| `InstanceAction.action_start` | method | (cls, context, instance_uuid, action_name, want_result=True) | public | `cls._from_db_object(context, cls(), db_action)` (src/nova/objects/instance_action.py:L96) | 2/6 | `src/nova/objects/instance_action.py:L91–L96` |
| `InstanceAction.action_finish` | method | (cls, context, instance_uuid, want_result=True) | public | `cls._from_db_object(context, cls(), db_action)` (src/nova/objects/instance_action.py:L104) | 2/5 | `src/nova/objects/instance_action.py:L100–L104` |
| `InstanceAction.finish` | method | (self) | public | not declared | 1/4 | `src/nova/objects/instance_action.py:L107–L110` |
| `InstanceAction.create` | method | (self) | public | not declared | 2/7 | `src/nova/objects/instance_action.py:L117–L123` |
| `InstanceActionList` | class | — | exported | not declared | — | `src/nova/objects/instance_action.py:L127–L141` |
| `InstanceActionList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/instance_action.py:L130–L130` |
| `InstanceActionList.fields` | field | — | public | not declared | — | `src/nova/objects/instance_action.py:L131–L133` |
| `InstanceActionList.get_by_instance_uuid` | method | (cls, context, instance_uuid, limit=None, marker=None, filters=None) | public | `base.obj_make_list(context, cls(), db_actions)` (src/nova/objects/instance_action.py:L141) | 1/5 | `src/nova/objects/instance_action.py:L137–L141` |
| `InstanceActionEvent` | class | — | exported | not declared | — | `src/nova/objects/instance_action.py:L146–L284` |
| `InstanceActionEvent.VERSION` | constant | — | public | not declared | — | `src/nova/objects/instance_action.py:L153–L153` |
| `InstanceActionEvent.fields` | field | — | public | not declared | — | `src/nova/objects/instance_action.py:L154–L164` |
| `InstanceActionEvent.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 5/6 | `src/nova/objects/instance_action.py:L166–L171` |
| `InstanceActionEvent._from_db_object` | method | (context, event, db_event) | private | `event` (src/nova/objects/instance_action.py:L179) | 2/6 | `src/nova/objects/instance_action.py:L174–L179` |
| `InstanceActionEvent.pack_action_event_start` | method | (context, instance_uuid, event_name, host=None) | public | `values` (src/nova/objects/instance_action.py:L189) | 1/8 | `src/nova/objects/instance_action.py:L182–L189` |
| `InstanceActionEvent.pack_action_event_finish` | method | (context, instance_uuid, event_name, exc_val=None, exc_tb=None) | public | `values` (src/nova/objects/instance_action.py:L214) | 4/16 | `src/nova/objects/instance_action.py:L192–L214` |
| `InstanceActionEvent.get_by_id` | method | (cls, context, action_id, event_id) | public | `cls._from_db_object(context, cls(), db_event)` (src/nova/objects/instance_action.py:L220) | 1/3 | `src/nova/objects/instance_action.py:L218–L220` |
| `InstanceActionEvent.event_start` | method | (cls, context, instance_uuid, event_name, want_result=True, host=None) | public | `cls._from_db_object(context, cls(), db_event)` (src/nova/objects/instance_action.py:L230) | 2/7 | `src/nova/objects/instance_action.py:L224–L230` |
| `InstanceActionEvent.event_finish_with_failure` | method | (cls, context, instance_uuid, event_name, exc_val=None, exc_tb=None, want_result=None) | public | `cls._from_db_object(context, cls(), db_event)` (src/nova/objects/instance_action.py:L242) | 2/8 | `src/nova/objects/instance_action.py:L235–L242` |
| `InstanceActionEvent.event_finish` | method | (cls, context, instance_uuid, event_name, want_result=True) | public | `cls.event_finish_with_failure(context, instance_uuid, event_name, exc_val=None, exc_tb=None, want_result=want_result)` (src/nova/objects/instance_action.py:L248) | 1/6 | `src/nova/objects/instance_action.py:L246–L251` |
| `InstanceActionEvent.finish_with_failure` | method | (self, exc_val, exc_tb) | public | not declared | 1/7 | `src/nova/objects/instance_action.py:L254–L260` |
| `InstanceActionEvent.finish` | method | (self) | public | not declared | 1/2 | `src/nova/objects/instance_action.py:L263–L264` |
| `InstanceActionEvent.create` | method | (self, instance_uuid, request_id) | public | not declared | 2/9 | `src/nova/objects/instance_action.py:L271–L284` |
| `InstanceActionEventList` | class | — | exported | not declared | — | `src/nova/objects/instance_action.py:L288–L300` |
| `InstanceActionEventList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/instance_action.py:L291–L291` |
| `InstanceActionEventList.fields` | field | — | public | not declared | — | `src/nova/objects/instance_action.py:L292–L294` |
| `InstanceActionEventList.get_by_action` | method | (cls, context, action_id) | public | `base.obj_make_list(context, cls(context), db_events)` (src/nova/objects/instance_action.py:L300) | 1/3 | `src/nova/objects/instance_action.py:L298–L300` |

## Dependencies

- `oslo_utils`: imports `timeutils` (src/nova/objects/instance_action.py:L15)
- `oslo_utils`: imports `versionutils` (src/nova/objects/instance_action.py:L16)
- `nova.compute`: imports `utils as compute_utils` (src/nova/objects/instance_action.py:L18)
- `nova.db.main`: imports `api as db` (src/nova/objects/instance_action.py:L19)
- `nova`: imports `exception` (src/nova/objects/instance_action.py:L20)
- `nova.objects`: imports `base` (src/nova/objects/instance_action.py:L21)
- `nova.objects`: imports `fields` (src/nova/objects/instance_action.py:L22)

## Side Effects

- **global-mutation**: VERSION = '1.2' (src/nova/objects/instance_action.py:L39)
- **global-mutation**: VERSION = '1.1' (src/nova/objects/instance_action.py:L130)
- **global-mutation**: VERSION = '1.4' (src/nova/objects/instance_action.py:L153)
- **global-mutation**: VERSION = '1.1' (src/nova/objects/instance_action.py:L291)

