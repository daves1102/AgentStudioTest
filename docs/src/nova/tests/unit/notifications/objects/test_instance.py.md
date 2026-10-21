# src/nova/tests/unit/notifications/objects/test_instance.py

## Overview

This file implements the `test_instance` module, defining 3 classs, 9 methods, 10 imports.

Lines: total 215, code 170, comment 17, blank 28

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestInstanceNotification` | class | — | exported | not declared | — | `src/nova/tests/unit/notifications/objects/test_instance.py:L27–L127` |
| `TestInstanceNotification.setUp` | method | (self) | public | not declared | 3/25 | `src/nova/tests/unit/notifications/objects/test_instance.py:L29–L53` |
| `TestInstanceNotification.test_send_version_instance_update_uses_flavor` | method | (self, mock_emit) | public | not declared | 2/16 | `src/nova/tests/unit/notifications/objects/test_instance.py:L57–L75` |
| `TestInstanceNotification.test_send_versioned_instance_notification_is_not_called_disabled` | method | (self, mock_notification, mock_payload, mock_notifier) | public | not declared | 1/11 | `src/nova/tests/unit/notifications/objects/test_instance.py:L82–L94` |
| `TestInstanceNotification.test_send_versioned_instance_notification_is_not_called_unversioned` | method | (self, mock_notification, mock_payload) | public | not declared | 1/11 | `src/nova/tests/unit/notifications/objects/test_instance.py:L100–L112` |
| `TestInstanceNotification.test_instance_payload_request_id_periodic_task` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/notifications/objects/test_instance.py:L114–L127` |
| `TestBlockDevicePayload` | class | — | exported | not declared | — | `src/nova/tests/unit/notifications/objects/test_instance.py:L130–L174` |
| `TestBlockDevicePayload.test_payload_contains_volume_bdms_if_requested` | method | (self, mock_get_bdms) | public | not declared | 1/31 | `src/nova/tests/unit/notifications/objects/test_instance.py:L132–L166` |
| `TestBlockDevicePayload.test_bdms_are_skipped_by_default` | method | (self, mock_get_bdms) | public | not declared | 1/5 | `src/nova/tests/unit/notifications/objects/test_instance.py:L170–L174` |
| `TestSharePayload` | class | — | exported | not declared | — | `src/nova/tests/unit/notifications/objects/test_instance.py:L177–L215` |
| `TestSharePayload.test_payload_contains_shares_if_requested` | method | (self, mock_get_shares) | public | not declared | 1/23 | `src/nova/tests/unit/notifications/objects/test_instance.py:L179–L207` |
| `TestSharePayload.test_shares_are_skipped_by_default` | method | (self, mock_get_shares) | public | not declared | 1/5 | `src/nova/tests/unit/notifications/objects/test_instance.py:L211–L215` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/notifications/objects/test_instance.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/notifications/objects/test_instance.py:L15)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/notifications/objects/test_instance.py:L16)
- `nova`: imports `context as nova_context` (src/nova/tests/unit/notifications/objects/test_instance.py:L18)
- `nova.network`: imports `model as network_model` (src/nova/tests/unit/notifications/objects/test_instance.py:L19)
- `nova.notifications`: imports `base as notification_base` (src/nova/tests/unit/notifications/objects/test_instance.py:L20)
- `nova.notifications.objects`: imports `instance as instance_notification` (src/nova/tests/unit/notifications/objects/test_instance.py:L21)
- `nova`: imports `objects` (src/nova/tests/unit/notifications/objects/test_instance.py:L22)
- `nova`: imports `test` (src/nova/tests/unit/notifications/objects/test_instance.py:L23)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/notifications/objects/test_instance.py:L24)

