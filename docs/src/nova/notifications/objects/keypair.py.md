# src/nova/notifications/objects/keypair.py

## Overview

This file implements the `keypair` module, defining 2 classs, 3 constants, 2 fields, 1 method, 3 imports, 3 side effects.

Lines: total 55, code 35, comment 13, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `KeypairPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/keypair.py:L19–L39` |
| `KeypairPayload.SCHEMA` | constant | — | public | not declared | — | `src/nova/notifications/objects/keypair.py:L20–L26` |
| `KeypairPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/keypair.py:L28–L28` |
| `KeypairPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/keypair.py:L29–L35` |
| `KeypairPayload.__init__` | method | (self, keypair, **kwargs) | public | not declared | 1/3 | `src/nova/notifications/objects/keypair.py:L37–L39` |
| `KeypairNotification` | class | — | exported | not declared | — | `src/nova/notifications/objects/keypair.py:L49–L55` |
| `KeypairNotification.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/keypair.py:L51–L51` |
| `KeypairNotification.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/keypair.py:L53–L55` |

## Dependencies

- `nova.notifications.objects`: imports `base` (src/nova/notifications/objects/keypair.py:L13)
- `nova.objects`: imports `base as nova_base` (src/nova/notifications/objects/keypair.py:L14)
- `nova.objects`: imports `fields` (src/nova/notifications/objects/keypair.py:L15)

## Side Effects

- **global-mutation**: SCHEMA = { (src/nova/notifications/objects/keypair.py:L20)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/keypair.py:L28)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/keypair.py:L51)

