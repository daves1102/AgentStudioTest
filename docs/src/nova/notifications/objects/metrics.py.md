# src/nova/notifications/objects/metrics.py

## Overview

This file implements the `metrics` module, defining 3 classs, 1 classmethod, 4 constants, 3 fields, 3 methods, 3 imports, 4 side effects, 1 security surface entry.

Lines: total 85, code 55, comment 16, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `MetricsNotification` | class | — | exported | not declared | — | `src/nova/notifications/objects/metrics.py:L22–L28` |
| `MetricsNotification.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/metrics.py:L24–L24` |
| `MetricsNotification.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/metrics.py:L26–L28` |
| `MetricPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/metrics.py:L32–L64` |
| `MetricPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/metrics.py:L34–L34` |
| `MetricPayload.SCHEMA` | constant | — | public | not declared | — | `src/nova/notifications/objects/metrics.py:L36–L42` |
| `MetricPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/metrics.py:L44–L50` |
| `MetricPayload.__init__` | method | (self, monitor_metric) | public | not declared | 1/3 | `src/nova/notifications/objects/metrics.py:L52–L54` |
| `MetricPayload.from_monitor_metric_list_obj` | method | (cls, monitor_metric_list) | public | `payloads` (src/nova/notifications/objects/metrics.py:L64) | 2/5 | `src/nova/notifications/objects/metrics.py:L57–L64` |
| `MetricsPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/metrics.py:L68–L85` |
| `MetricsPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/metrics.py:L70–L70` |
| `MetricsPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/metrics.py:L72–L77` |
| `MetricsPayload.__init__` | method | (self, host, host_ip, nodename, monitor_metric_list) | public | not declared | 1/7 | `src/nova/notifications/objects/metrics.py:L79–L85` |
| `MetricPayload.from_monitor_metric_list_obj` | classmethod | — | public | not declared | — | `src/nova/notifications/objects/metrics.py:L56–L64` |

## Dependencies

- `nova.notifications.objects`: imports `base` (src/nova/notifications/objects/metrics.py:L15)
- `nova.objects`: imports `base as nova_base` (src/nova/notifications/objects/metrics.py:L16)
- `nova.objects`: imports `fields` (src/nova/notifications/objects/metrics.py:L17)

## Side Effects

- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/metrics.py:L24)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/metrics.py:L34)
- **global-mutation**: SCHEMA = { (src/nova/notifications/objects/metrics.py:L36)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/metrics.py:L70)

## Security Surface

- **sink** (`db-write`): @base.notification_sample('metrics-update.json') (src/nova/notifications/objects/metrics.py:L20)

