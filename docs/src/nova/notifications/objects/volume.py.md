# src/nova/notifications/objects/volume.py

## Overview

This file implements the `volume` module, defining 2 classs, 3 constants, 2 fields, 1 method, 3 imports, 3 side effects.

Lines: total 64, code 40, comment 15, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `VolumeUsageNotification` | class | — | exported | not declared | — | `src/nova/notifications/objects/volume.py:L22–L28` |
| `VolumeUsageNotification.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/volume.py:L24–L24` |
| `VolumeUsageNotification.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/volume.py:L26–L28` |
| `VolumeUsagePayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/volume.py:L32–L64` |
| `VolumeUsagePayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/volume.py:L34–L34` |
| `VolumeUsagePayload.SCHEMA` | constant | — | public | not declared | — | `src/nova/notifications/objects/volume.py:L36–L47` |
| `VolumeUsagePayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/volume.py:L49–L60` |
| `VolumeUsagePayload.__init__` | method | (self, vol_usage) | public | not declared | 1/3 | `src/nova/notifications/objects/volume.py:L62–L64` |

## Dependencies

- `nova.notifications.objects`: imports `base` (src/nova/notifications/objects/volume.py:L15)
- `nova.objects`: imports `base as nova_base` (src/nova/notifications/objects/volume.py:L16)
- `nova.objects`: imports `fields` (src/nova/notifications/objects/volume.py:L17)

## Side Effects

- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/volume.py:L24)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/volume.py:L34)
- **global-mutation**: SCHEMA = { (src/nova/notifications/objects/volume.py:L36)

