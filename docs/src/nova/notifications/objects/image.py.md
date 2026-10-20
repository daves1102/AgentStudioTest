# src/nova/notifications/objects/image.py

## Overview

This file implements the `image` module, defining 2 classs, 4 constants, 2 fields, 2 methods, 4 imports, 4 side effects, 1 security surface entry.

Lines: total 161, code 71, comment 77, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ImageMetaPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/image.py:L22–L103` |
| `ImageMetaPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/image.py:L24–L24` |
| `ImageMetaPayload.SCHEMA` | constant | — | public | not declared | — | `src/nova/notifications/objects/image.py:L26–L44` |
| `ImageMetaPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/image.py:L78–L97` |
| `ImageMetaPayload.__init__` | method | (self, image_meta) | public | not declared | 1/5 | `src/nova/notifications/objects/image.py:L99–L103` |
| `ImageMetaPropsPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/image.py:L107–L161` |
| `ImageMetaPropsPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/image.py:L141–L141` |
| `ImageMetaPropsPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/image.py:L149–L151` |
| `ImageMetaPropsPayload.SCHEMA` | constant | — | public | not declared | — | `src/nova/notifications/objects/image.py:L153–L154` |
| `ImageMetaPropsPayload.__init__` | method | (self, image_meta_props) | public | not declared | 1/3 | `src/nova/notifications/objects/image.py:L156–L161` |

## Dependencies

- `nova.notifications.objects`: imports `base` (src/nova/notifications/objects/image.py:L15)
- `nova.objects`: imports `base as nova_base` (src/nova/notifications/objects/image.py:L16)
- `nova.objects`: imports `fields` (src/nova/notifications/objects/image.py:L17)
- `nova.objects`: imports `image_meta` (src/nova/notifications/objects/image.py:L18)

## Side Effects

- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/image.py:L24)
- **global-mutation**: SCHEMA = { (src/nova/notifications/objects/image.py:L26)
- **global-mutation**: VERSION = '1.20' (src/nova/notifications/objects/image.py:L141)
- **global-mutation**: SCHEMA = { (src/nova/notifications/objects/image.py:L153)

## Security Surface

- **sink** (`db-write`): * When you make a versioned update to ImageMetaProps, you must *also* bump (src/nova/notifications/objects/image.py:L112)

