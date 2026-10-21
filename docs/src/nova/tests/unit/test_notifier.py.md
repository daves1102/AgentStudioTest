# src/nova/tests/unit/test_notifier.py

## Overview

This file implements the `test_notifier` module, defining 1 class, 1 method, 3 imports, 3 side effects.

Lines: total 55, code 34, comment 14, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestNotifier` | class | — | exported | not declared | — | `src/nova/tests/unit/test_notifier.py:L22–L55` |
| `TestNotifier.test_notification_format_affects_notification_driver` | method | (self, mock_notifier, mock_noti_trans, mock_transport) | public | not declared | 2/27 | `src/nova/tests/unit/test_notifier.py:L27–L55` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/test_notifier.py:L16)
- `nova`: imports `rpc` (src/nova/tests/unit/test_notifier.py:L18)
- `nova`: imports `test` (src/nova/tests/unit/test_notifier.py:L19)

## Side Effects

- **network**: @mock.patch('oslo_messaging.get_rpc_transport') (src/nova/tests/unit/test_notifier.py:L24)
- **network**: @mock.patch('oslo_messaging.get_notification_transport') (src/nova/tests/unit/test_notifier.py:L25)
- **network**: @mock.patch('oslo_messaging.Notifier') (src/nova/tests/unit/test_notifier.py:L26)

