# src/nova/notifications/objects/compute_task.py

## Overview

This file implements the `compute_task` module, defining 2 classs, 2 constants, 2 fields, 1 method, 4 imports, 2 side effects.

Lines: total 54, code 30, comment 16, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ComputeTaskPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/compute_task.py:L20–L41` |
| `ComputeTaskPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/compute_task.py:L22–L22` |
| `ComputeTaskPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/compute_task.py:L24–L33` |
| `ComputeTaskPayload.__init__` | method | (self, instance_uuid, request_spec, state, reason) | public | not declared | 2/7 | `src/nova/notifications/objects/compute_task.py:L35–L41` |
| `ComputeTaskNotification` | class | — | exported | not declared | — | `src/nova/notifications/objects/compute_task.py:L48–L54` |
| `ComputeTaskNotification.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/compute_task.py:L50–L50` |
| `ComputeTaskNotification.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/compute_task.py:L52–L54` |

## Dependencies

- `nova.notifications.objects`: imports `base` (src/nova/notifications/objects/compute_task.py:L13)
- `nova.notifications.objects`: imports `request_spec as reqspec_payload` (src/nova/notifications/objects/compute_task.py:L14)
- `nova.objects`: imports `base as nova_base` (src/nova/notifications/objects/compute_task.py:L15)
- `nova.objects`: imports `fields` (src/nova/notifications/objects/compute_task.py:L16)

## Side Effects

- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/compute_task.py:L22)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/compute_task.py:L50)

