# src/nova/tests/functional/notification_sample_tests/test_flavor.py

## Overview

This file implements the `test_flavor` module, defining 2 classs, 2 constants, 4 methods, 1 import, 2 side effects, 2 security surface entries.

Lines: total 132, code 97, comment 19, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestFlavorNotificationSample` | class | — | exported | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_flavor.py:L17–L88` |
| `TestFlavorNotificationSample.MAX_MICROVERSION` | constant | — | public | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_flavor.py:L20–L20` |
| `TestFlavorNotificationSample.test_flavor_create` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/notification_sample_tests/test_flavor.py:L22–L34` |
| `TestFlavorNotificationSample.test_flavor_destroy` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/notification_sample_tests/test_flavor.py:L36–L52` |
| `TestFlavorNotificationSample.test_flavor_update` | method | (self) | public | not declared | 1/31 | `src/nova/tests/functional/notification_sample_tests/test_flavor.py:L54–L88` |
| `TestFlavorNotificationSamplev2_55` | class | — | exported | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_flavor.py:L91–L132` |
| `TestFlavorNotificationSamplev2_55.MAX_MICROVERSION` | constant | — | public | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_flavor.py:L95–L95` |
| `TestFlavorNotificationSamplev2_55.test_flavor_update_with_description` | method | (self) | public | not declared | 1/28 | `src/nova/tests/functional/notification_sample_tests/test_flavor.py:L97–L132` |

## Dependencies

- `nova.tests.functional.notification_sample_tests`: imports `notification_sample_base` (src/nova/tests/functional/notification_sample_tests/test_flavor.py:L13–L14)

## Side Effects

- **global-mutation**: MAX_MICROVERSION = '2.1' (src/nova/tests/functional/notification_sample_tests/test_flavor.py:L20)
- **global-mutation**: MAX_MICROVERSION = '2.55' (src/nova/tests/functional/notification_sample_tests/test_flavor.py:L95)

## Security Surface

- **sink** (`db-write`): 'flavor-update', actual=self.notifier.versioned_notifications[2]) (src/nova/tests/functional/notification_sample_tests/test_flavor.py:L88)
- **sink** (`db-write`): 'flavor-update', (src/nova/tests/functional/notification_sample_tests/test_flavor.py:L128)

