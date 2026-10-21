# src/nova/tests/functional/notification_sample_tests/test_volume.py

## Overview

This file implements the `test_volume` module, defining 1 class, 4 methods, 3 imports.

Lines: total 64, code 37, comment 16, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestVolumeUsageNotificationSample` | class | — | exported | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_volume.py:L21–L64` |
| `TestVolumeUsageNotificationSample.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/notification_sample_tests/test_volume.py:L24–L30` |
| `TestVolumeUsageNotificationSample._setup_server_with_volume_attached` | method | (self) | private | `server` (src/nova/tests/functional/notification_sample_tests/test_volume.py:L38) | 1/6 | `src/nova/tests/functional/notification_sample_tests/test_volume.py:L32–L38` |
| `TestVolumeUsageNotificationSample.test_volume_usage_with_detaching_volume` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/notification_sample_tests/test_volume.py:L40–L53` |
| `TestVolumeUsageNotificationSample.test_instance_poll_volume_usage` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/notification_sample_tests/test_volume.py:L55–L64` |

## Dependencies

- `nova`: imports `context` (src/nova/tests/functional/notification_sample_tests/test_volume.py:L15)
- `nova.tests`: imports `fixtures` (src/nova/tests/functional/notification_sample_tests/test_volume.py:L16)
- `nova.tests.functional.notification_sample_tests`: imports `notification_sample_base` (src/nova/tests/functional/notification_sample_tests/test_volume.py:L17–L18)

