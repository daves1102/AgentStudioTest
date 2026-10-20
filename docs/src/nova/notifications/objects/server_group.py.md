# src/nova/notifications/objects/server_group.py

## Overview

This file implements the `server_group` module, defining 2 classs, 3 constants, 2 fields, 1 method, 4 imports, 3 side effects.

Lines: total 69, code 43, comment 18, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServerGroupPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/server_group.py:L21–L56` |
| `ServerGroupPayload.SCHEMA` | constant | — | public | not declared | — | `src/nova/notifications/objects/server_group.py:L22–L32` |
| `ServerGroupPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/server_group.py:L35–L35` |
| `ServerGroupPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/server_group.py:L36–L48` |
| `ServerGroupPayload.__init__` | method | (self, group) | public | not declared | 1/5 | `src/nova/notifications/objects/server_group.py:L50–L56` |
| `ServerGroupNotification` | class | — | exported | not declared | — | `src/nova/notifications/objects/server_group.py:L63–L69` |
| `ServerGroupNotification.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/server_group.py:L65–L65` |
| `ServerGroupNotification.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/server_group.py:L67–L69` |

## Dependencies

- `import copy` (src/nova/notifications/objects/server_group.py:L13)
- `nova.notifications.objects`: imports `base` (src/nova/notifications/objects/server_group.py:L15)
- `nova.objects`: imports `base as nova_base` (src/nova/notifications/objects/server_group.py:L16)
- `nova.objects`: imports `fields` (src/nova/notifications/objects/server_group.py:L17)

## Side Effects

- **global-mutation**: SCHEMA = { (src/nova/notifications/objects/server_group.py:L22)
- **global-mutation**: VERSION = '1.1' (src/nova/notifications/objects/server_group.py:L35)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/server_group.py:L65)

