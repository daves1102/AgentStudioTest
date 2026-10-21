# src/nova/tests/unit/notifications/objects/test_service.py

## Overview

This file implements the `test_service` module, defining 1 class, 6 methods, 9 imports, 2 security surface entries.

Lines: total 102, code 73, comment 14, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestServiceStatusNotification` | class | — | exported | not declared | — | `src/nova/tests/unit/notifications/objects/test_service.py:L29–L102` |
| `TestServiceStatusNotification.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/notifications/objects/test_service.py:L30–L32` |
| `TestServiceStatusNotification._verify_notification` | method | (self, service_obj, action, mock_notification) | private | not declared | 6/23 | `src/nova/tests/unit/notifications/objects/test_service.py:L35–L61` |
| `TestServiceStatusNotification.test_service_update_with_notification` | method | (self, mock_db_service_update) | public | not declared | 2/9 | `src/nova/tests/unit/notifications/objects/test_service.py:L64–L72` |
| `TestServiceStatusNotification.test_service_update_without_notification` | method | (self, mock_db_service_update, mock_notification) | public | not declared | 2/10 | `src/nova/tests/unit/notifications/objects/test_service.py:L76–L86` |
| `TestServiceStatusNotification.test_service_create_with_notification` | method | (self, mock_db_service_create) | public | not declared | 1/6 | `src/nova/tests/unit/notifications/objects/test_service.py:L89–L94` |
| `TestServiceStatusNotification.test_service_destroy_with_notification` | method | (self, mock_db_service_destroy) | public | not declared | 1/6 | `src/nova/tests/unit/notifications/objects/test_service.py:L97–L102` |

## Dependencies

- `import copy` (src/nova/tests/unit/notifications/objects/test_service.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/notifications/objects/test_service.py:L17)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/notifications/objects/test_service.py:L19)
- `nova`: imports `context` (src/nova/tests/unit/notifications/objects/test_service.py:L21)
- `nova.notifications.objects`: imports `service as service_notification` (src/nova/tests/unit/notifications/objects/test_service.py:L22)
- `nova`: imports `objects` (src/nova/tests/unit/notifications/objects/test_service.py:L23)
- `nova.objects`: imports `fields` (src/nova/tests/unit/notifications/objects/test_service.py:L24)
- `nova`: imports `test` (src/nova/tests/unit/notifications/objects/test_service.py:L25)
- `nova.tests.unit.objects.test_service`: imports `fake_service` (src/nova/tests/unit/notifications/objects/test_service.py:L26)

## Security Surface

- **sink** (`db-write`): elif action == fields.NotificationAction.UPDATE: (src/nova/tests/unit/notifications/objects/test_service.py:L38)
- **sink** (`db-write`): fields.NotificationAction.UPDATE) (src/nova/tests/unit/notifications/objects/test_service.py:L72)

