# src/nova/notifications/objects/flavor.py

## Overview

This file implements the `flavor` module, defining 2 classs, 3 constants, 2 fields, 1 method, 3 imports, 3 side effects, 1 security surface entry.

Lines: total 86, code 53, comment 24, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FlavorNotification` | class | — | exported | not declared | — | `src/nova/notifications/objects/flavor.py:L22–L28` |
| `FlavorNotification.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/flavor.py:L24–L24` |
| `FlavorNotification.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/flavor.py:L26–L28` |
| `FlavorPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/flavor.py:L32–L86` |
| `FlavorPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/flavor.py:L39–L39` |
| `FlavorPayload.SCHEMA` | constant | — | public | not declared | — | `src/nova/notifications/objects/flavor.py:L43–L58` |
| `FlavorPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/flavor.py:L60–L75` |
| `FlavorPayload.__init__` | method | (self, flavor) | public | not declared | 2/6 | `src/nova/notifications/objects/flavor.py:L77–L86` |

## Dependencies

- `nova.notifications.objects`: imports `base` (src/nova/notifications/objects/flavor.py:L13)
- `nova.objects`: imports `base as nova_base` (src/nova/notifications/objects/flavor.py:L14)
- `nova.objects`: imports `fields` (src/nova/notifications/objects/flavor.py:L15)

## Side Effects

- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/flavor.py:L24)
- **global-mutation**: VERSION = '1.4' (src/nova/notifications/objects/flavor.py:L39)
- **global-mutation**: SCHEMA = { (src/nova/notifications/objects/flavor.py:L43)

## Security Surface

- **sink** (`db-write`): @base.notification_sample('flavor-update.json') (src/nova/notifications/objects/flavor.py:L19)

