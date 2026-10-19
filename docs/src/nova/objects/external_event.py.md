# src/nova/objects/external_event.py

## Overview

This file implements the `external_event` module, defining 1 class, 5 constants, 1 field, 2 methods, 1 property, 1 variable, 2 imports, 5 side effects.

Lines: total 82, code 39, comment 28, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/external_event.py:L18–L22` |
| `EVENT_NAMES` | constant | — | exported | not declared | — | `src/nova/objects/external_event.py:L24–L45` |
| `EVENT_STATUSES` | constant | — | exported | not declared | — | `src/nova/objects/external_event.py:L47–L47` |
| `POWER_ON` | constant | — | exported | not declared | — | `src/nova/objects/external_event.py:L50–L50` |
| `POWER_OFF` | constant | — | exported | not declared | — | `src/nova/objects/external_event.py:L51–L51` |
| `InstanceExternalEvent` | class | — | exported | not declared | — | `src/nova/objects/external_event.py:L55–L82` |
| `InstanceExternalEvent.VERSION` | constant | — | public | not declared | — | `src/nova/objects/external_event.py:L63–L63` |
| `InstanceExternalEvent.fields` | field | — | public | not declared | — | `src/nova/objects/external_event.py:L65–L71` |
| `InstanceExternalEvent.make_key` | method | (name, tag=None) | public | `'%s-%s' % (name, tag)` (src/nova/objects/external_event.py:L76); `name` (src/nova/objects/external_event.py:L78) | 2/5 | `src/nova/objects/external_event.py:L74–L78` |
| `InstanceExternalEvent.key` | method | (self) | public | `self.make_key(self.name, self.tag)` (src/nova/objects/external_event.py:L82) | 1/2 | `src/nova/objects/external_event.py:L81–L82` |
| `InstanceExternalEvent.key` | property | — | public | not declared | — | `src/nova/objects/external_event.py:L80–L82` |

## Dependencies

- `nova.objects`: imports `base as obj_base` (src/nova/objects/external_event.py:L15)
- `nova.objects`: imports `fields` (src/nova/objects/external_event.py:L16)

## Side Effects

- **global-mutation**: EVENT_NAMES = [ (src/nova/objects/external_event.py:L24)
- **global-mutation**: EVENT_STATUSES = ['failed', 'completed', 'in-progress'] (src/nova/objects/external_event.py:L47)
- **global-mutation**: POWER_ON = 'POWER_ON' (src/nova/objects/external_event.py:L50)
- **global-mutation**: POWER_OFF = 'POWER_OFF' (src/nova/objects/external_event.py:L51)
- **global-mutation**: VERSION = '1.5' (src/nova/objects/external_event.py:L63)

