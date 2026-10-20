# src/nova/notifications/objects/libvirt.py

## Overview

This file implements the `libvirt` module, defining 2 classs, 2 constants, 2 fields, 1 method, 3 imports, 2 side effects.

Lines: total 40, code 21, comment 13, blank 6

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LibvirtErrorPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/libvirt.py:L19–L30` |
| `LibvirtErrorPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/libvirt.py:L21–L21` |
| `LibvirtErrorPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/libvirt.py:L22–L25` |
| `LibvirtErrorPayload.__init__` | method | (self, ip, reason) | public | not declared | 1/4 | `src/nova/notifications/objects/libvirt.py:L27–L30` |
| `LibvirtErrorNotification` | class | — | exported | not declared | — | `src/nova/notifications/objects/libvirt.py:L35–L40` |
| `LibvirtErrorNotification.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/libvirt.py:L37–L37` |
| `LibvirtErrorNotification.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/libvirt.py:L38–L40` |

## Dependencies

- `nova.notifications.objects`: imports `base` (src/nova/notifications/objects/libvirt.py:L13)
- `nova.objects`: imports `base as nova_base` (src/nova/notifications/objects/libvirt.py:L14)
- `nova.objects`: imports `fields` (src/nova/notifications/objects/libvirt.py:L15)

## Side Effects

- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/libvirt.py:L21)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/libvirt.py:L37)

