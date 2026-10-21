# src/nova/virt/libvirt/event.py

## Overview

This file implements the `event` module, defining 4 classs, 2 methods, 1 import.

Lines: total 46, code 24, comment 11, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LibvirtEvent` | class | — | exported | not declared | — | `src/nova/virt/libvirt/event.py:L16–L20` |
| `DeviceEvent` | class | — | exported | not declared | — | `src/nova/virt/libvirt/event.py:L23–L38` |
| `DeviceEvent.__init__` | method | (self, uuid, dev, timestamp=None) | public | not declared | 1/6 | `src/nova/virt/libvirt/event.py:L26–L31` |
| `DeviceEvent.__repr__` | method | (self) | public | `"<%s: %s, %s => %s>" % ( self.__class__.__name__, self.timestamp, self.uuid, self.dev)` (src/nova/virt/libvirt/event.py:L34) | 1/6 | `src/nova/virt/libvirt/event.py:L33–L38` |
| `DeviceRemovedEvent` | class | — | exported | not declared | — | `src/nova/virt/libvirt/event.py:L41–L42` |
| `DeviceRemovalFailedEvent` | class | — | exported | not declared | — | `src/nova/virt/libvirt/event.py:L45–L46` |

## Dependencies

- `nova.virt`: imports `event` (src/nova/virt/libvirt/event.py:L13)

