# src/nova/tests/functional/notification_sample_tests/test_server_group.py

## Overview

This file implements the `test_server_group` module, defining 1 class, 3 methods, 2 imports, 1 security surface entry.

Lines: total 73, code 46, comment 18, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestServerGroupNotificationSample` | class | — | exported | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_server_group.py:L17–L73` |
| `TestServerGroupNotificationSample.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/notification_sample_tests/test_server_group.py:L20–L23` |
| `TestServerGroupNotificationSample.test_server_group_create_delete` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/notification_sample_tests/test_server_group.py:L25–L46` |
| `TestServerGroupNotificationSample.test_server_group_add_member` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/notification_sample_tests/test_server_group.py:L48–L73` |

## Dependencies

- `nova.tests`: imports `fixtures` (src/nova/tests/functional/notification_sample_tests/test_server_group.py:L12)
- `nova.tests.functional.notification_sample_tests`: imports `notification_sample_base` (src/nova/tests/functional/notification_sample_tests/test_server_group.py:L13–L14)

## Security Surface

- **sink** (`db-write`): self._wait_for_notification('instance.update') (src/nova/tests/functional/notification_sample_tests/test_server_group.py:L60)

