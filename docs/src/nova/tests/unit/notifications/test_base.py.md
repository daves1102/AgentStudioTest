# src/nova/tests/unit/notifications/test_base.py

## Overview

This file implements the `test_base` module, defining 2 classs, 7 methods, 9 imports, 3 security surface entries.

Lines: total 132, code 101, comment 16, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestNullSafeUtils` | class | — | exported | not declared | — | `src/nova/tests/unit/notifications/test_base.py:L28–L44` |
| `TestNullSafeUtils.test_null_safe_isotime` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/notifications/test_base.py:L29–L38` |
| `TestNullSafeUtils.test_null_safe_str` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/notifications/test_base.py:L40–L44` |
| `TestSendInstanceUpdateNotification` | class | — | exported | not declared | — | `src/nova/tests/unit/notifications/test_base.py:L47–L132` |
| `TestSendInstanceUpdateNotification.test_send_versioned_instance_update_notification_disabled` | method | (self, mock_enabled, mock_info) | public | not declared | 1/8 | `src/nova/tests/unit/notifications/test_base.py:L54–L64` |
| `TestSendInstanceUpdateNotification.test_send_legacy_instance_update_notification` | method | (self, mock_info, mock_get_notifier, mock_states) | public | not declared | 1/11 | `src/nova/tests/unit/notifications/test_base.py:L69–L85` |
| `TestSendInstanceUpdateNotification.test_info_from_instance_image_api_endpoint_not_found_no_token` | method | (self, mock_gen_image_url) | public | not declared | 1/10 | `src/nova/tests/unit/notifications/test_base.py:L89–L104` |
| `TestSendInstanceUpdateNotification.test_info_from_instance_image_api_endpoint_not_found_with_token` | method | (self, mock_gen_image_url) | public | not declared | 1/9 | `src/nova/tests/unit/notifications/test_base.py:L108–L120` |
| `TestSendInstanceUpdateNotification.test_info_from_instance_not_call_generate_image_url` | method | (self, mock_gen_image_url) | public | not declared | 1/9 | `src/nova/tests/unit/notifications/test_base.py:L123–L132` |

## Dependencies

- `import datetime` (src/nova/tests/unit/notifications/test_base.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/notifications/test_base.py:L16)
- `keystoneauth1`: imports `exceptions as ks_exc` (src/nova/tests/unit/notifications/test_base.py:L18)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/notifications/test_base.py:L19)
- `nova`: imports `context as nova_context` (src/nova/tests/unit/notifications/test_base.py:L21)
- `nova.notifications`: imports `base` (src/nova/tests/unit/notifications/test_base.py:L22)
- `nova`: imports `test` (src/nova/tests/unit/notifications/test_base.py:L23)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/notifications/test_base.py:L24)
- `nova`: imports `utils` (src/nova/tests/unit/notifications/test_base.py:L25)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as ks_exc (src/nova/tests/unit/notifications/test_base.py:L18)
- **sink** (`db-write`): instance.update notification. (src/nova/tests/unit/notifications/test_base.py:L74)
- **sink** (`db-write`): mock.sentinel.ctxt, 'compute.instance.update', mock.ANY) (src/nova/tests/unit/notifications/test_base.py:L82)

