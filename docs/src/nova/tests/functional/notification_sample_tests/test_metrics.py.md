# src/nova/tests/functional/notification_sample_tests/test_metrics.py

## Overview

This file implements the `test_metrics` module, defining 1 class, 1 constant, 2 methods, 3 imports, 1 side effect, 1 security surface entry.

Lines: total 41, code 19, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_metrics.py:L21–L21` |
| `TestMetricsNotificationSample` | class | — | exported | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_metrics.py:L24–L41` |
| `TestMetricsNotificationSample.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/notification_sample_tests/test_metrics.py:L27–L31` |
| `TestMetricsNotificationSample.test_metrics_update` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/notification_sample_tests/test_metrics.py:L33–L41` |

## Dependencies

- `import nova.conf` (src/nova/tests/functional/notification_sample_tests/test_metrics.py:L15)
- `nova`: imports `context` (src/nova/tests/functional/notification_sample_tests/test_metrics.py:L16)
- `nova.tests.functional.notification_sample_tests`: imports `notification_sample_base` (src/nova/tests/functional/notification_sample_tests/test_metrics.py:L17–L18)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/functional/notification_sample_tests/test_metrics.py:L21)

## Security Surface

- **sink** (`db-write`): 'metrics-update', (src/nova/tests/functional/notification_sample_tests/test_metrics.py:L39)

