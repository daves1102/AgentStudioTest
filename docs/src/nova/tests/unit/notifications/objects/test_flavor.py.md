# src/nova/tests/unit/notifications/objects/test_flavor.py

## Overview

This file implements the `test_flavor` module, defining 1 class, 1 constant, 7 methods, 8 imports, 1 side effect, 4 security surface entries.

Lines: total 147, code 115, comment 14, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `PROJECTS_SENTINEL` | constant | — | exported | not declared | — | `src/nova/tests/unit/notifications/objects/test_flavor.py:L24–L24` |
| `TestFlavorNotification` | class | — | exported | not declared | — | `src/nova/tests/unit/notifications/objects/test_flavor.py:L27–L147` |
| `TestFlavorNotification.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/notifications/objects/test_flavor.py:L28–L30` |
| `TestFlavorNotification._verify_notification` | method | (self, flavor_obj, flavor, action, mock_notification, project_id=None, expected_projects=PROJECTS_SENTINEL) | private | not declared | 9/36 | `src/nova/tests/unit/notifications/objects/test_flavor.py:L33–L72` |
| `TestFlavorNotification.test_flavor_create_with_notification` | method | (self, mock_create) | public | not declared | 1/9 | `src/nova/tests/unit/notifications/objects/test_flavor.py:L75–L83` |
| `TestFlavorNotification.test_flavor_update_with_notification` | method | (self, mock_delete) | public | not declared | 1/14 | `src/nova/tests/unit/notifications/objects/test_flavor.py:L86–L101` |
| `TestFlavorNotification.test_flavor_access_with_notification` | method | (self, mock_remove_access, mock_add_access) | public | not declared | 1/12 | `src/nova/tests/unit/notifications/objects/test_flavor.py:L105–L116` |
| `TestFlavorNotification.test_flavor_destroy_with_notification` | method | (self, mock_destroy) | public | not declared | 1/11 | `src/nova/tests/unit/notifications/objects/test_flavor.py:L119–L131` |
| `TestFlavorNotification.test_flavor_destroy_with_notification_and_projects` | method | (self, mock_destroy) | public | not declared | 1/12 | `src/nova/tests/unit/notifications/objects/test_flavor.py:L134–L147` |

## Dependencies

- `import copy` (src/nova/tests/unit/notifications/objects/test_flavor.py:L13)
- `unittest`: imports `mock` (src/nova/tests/unit/notifications/objects/test_flavor.py:L14)
- `nova`: imports `context` (src/nova/tests/unit/notifications/objects/test_flavor.py:L17)
- `nova.notifications.objects`: imports `flavor as flavor_notification` (src/nova/tests/unit/notifications/objects/test_flavor.py:L18)
- `nova`: imports `objects` (src/nova/tests/unit/notifications/objects/test_flavor.py:L19)
- `nova.objects`: imports `fields` (src/nova/tests/unit/notifications/objects/test_flavor.py:L20)
- `nova`: imports `test` (src/nova/tests/unit/notifications/objects/test_flavor.py:L21)
- `nova.tests.unit.objects.test_flavor`: imports `fake_flavor` (src/nova/tests/unit/notifications/objects/test_flavor.py:L22)

## Side Effects

- **global-mutation**: PROJECTS_SENTINEL = object() (src/nova/tests/unit/notifications/objects/test_flavor.py:L24)

## Security Surface

- **sink** (`db-write`): action = "UPDATE" (src/nova/tests/unit/notifications/objects/test_flavor.py:L42)
- **sink** (`db-write`): action = "UPDATE" (src/nova/tests/unit/notifications/objects/test_flavor.py:L45)
- **sink** (`db-write`): self._verify_notification(flavor_obj, flavor, "UPDATE") (src/nova/tests/unit/notifications/objects/test_flavor.py:L96)
- **sink** (`db-write`): self._verify_notification(flavor_obj, flavor, "UPDATE") (src/nova/tests/unit/notifications/objects/test_flavor.py:L101)

