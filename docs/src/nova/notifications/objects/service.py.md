# src/nova/notifications/objects/service.py

## Overview

This file implements the `service` module, defining 2 classs, 3 constants, 2 fields, 1 method, 3 imports, 3 side effects, 1 security surface entry.

Lines: total 68, code 44, comment 17, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServiceStatusNotification` | class | — | exported | not declared | — | `src/nova/notifications/objects/service.py:L25–L31` |
| `ServiceStatusNotification.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/service.py:L27–L27` |
| `ServiceStatusNotification.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/service.py:L29–L31` |
| `ServiceStatusPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/service.py:L35–L68` |
| `ServiceStatusPayload.SCHEMA` | constant | — | public | not declared | — | `src/nova/notifications/objects/service.py:L36–L48` |
| `ServiceStatusPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/service.py:L51–L51` |
| `ServiceStatusPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/service.py:L52–L64` |
| `ServiceStatusPayload.__init__` | method | (self, service) | public | not declared | 1/3 | `src/nova/notifications/objects/service.py:L66–L68` |

## Dependencies

- `nova.notifications.objects`: imports `base` (src/nova/notifications/objects/service.py:L16)
- `nova.objects`: imports `base as nova_base` (src/nova/notifications/objects/service.py:L17)
- `nova.objects`: imports `fields` (src/nova/notifications/objects/service.py:L18)

## Side Effects

- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/service.py:L27)
- **global-mutation**: SCHEMA = { (src/nova/notifications/objects/service.py:L36)
- **global-mutation**: VERSION = '1.1' (src/nova/notifications/objects/service.py:L51)

## Security Surface

- **sink** (`db-write`): @base.notification_sample('service-update.json') (src/nova/notifications/objects/service.py:L22)

