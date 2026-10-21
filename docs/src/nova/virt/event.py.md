# src/nova/virt/event.py

## Overview

This file implements the `event` module, defining 3 classs, 8 constants, 10 methods, 2 imports, 8 side effects.

Lines: total 122, code 81, comment 13, blank 28

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `EVENT_LIFECYCLE_STARTED` | constant | — | exported | not declared | — | `src/nova/virt/event.py:L27–L27` |
| `EVENT_LIFECYCLE_STOPPED` | constant | — | exported | not declared | — | `src/nova/virt/event.py:L28–L28` |
| `EVENT_LIFECYCLE_PAUSED` | constant | — | exported | not declared | — | `src/nova/virt/event.py:L29–L29` |
| `EVENT_LIFECYCLE_RESUMED` | constant | — | exported | not declared | — | `src/nova/virt/event.py:L30–L30` |
| `EVENT_LIFECYCLE_SUSPENDED` | constant | — | exported | not declared | — | `src/nova/virt/event.py:L31–L31` |
| `EVENT_LIFECYCLE_POSTCOPY_STARTED` | constant | — | exported | not declared | — | `src/nova/virt/event.py:L32–L32` |
| `EVENT_LIFECYCLE_MIGRATION_COMPLETED` | constant | — | exported | not declared | — | `src/nova/virt/event.py:L33–L33` |
| `NAMES` | constant | — | exported | not declared | — | `src/nova/virt/event.py:L36–L44` |
| `Event` | class | — | exported | not declared | — | `src/nova/virt/event.py:L47–L69` |
| `Event.__init__` | method | (self, timestamp=None) | public | not declared | 2/5 | `src/nova/virt/event.py:L57–L61` |
| `Event.get_timestamp` | method | (self) | public | `self.timestamp` (src/nova/virt/event.py:L64) | 1/2 | `src/nova/virt/event.py:L63–L64` |
| `Event.__repr__` | method | (self) | public | `"<%s: %s>" % ( self.__class__.__name__, self.timestamp)` (src/nova/virt/event.py:L67) | 1/4 | `src/nova/virt/event.py:L66–L69` |
| `InstanceEvent` | class | — | exported | not declared | — | `src/nova/virt/event.py:L72–L93` |
| `InstanceEvent.__init__` | method | (self, uuid, timestamp=None) | public | not declared | 1/3 | `src/nova/virt/event.py:L81–L84` |
| `InstanceEvent.get_instance_uuid` | method | (self) | public | `self.uuid` (src/nova/virt/event.py:L87) | 1/2 | `src/nova/virt/event.py:L86–L87` |
| `InstanceEvent.__repr__` | method | (self) | public | `"<%s: %s, %s>" % ( self.__class__.__name__, self.timestamp, self.uuid)` (src/nova/virt/event.py:L90) | 1/5 | `src/nova/virt/event.py:L89–L93` |
| `LifecycleEvent` | class | — | exported | not declared | — | `src/nova/virt/event.py:L96–L122` |
| `LifecycleEvent.__init__` | method | (self, uuid, transition, timestamp=None) | public | not declared | 1/3 | `src/nova/virt/event.py:L106–L109` |
| `LifecycleEvent.get_transition` | method | (self) | public | `self.transition` (src/nova/virt/event.py:L112) | 1/2 | `src/nova/virt/event.py:L111–L112` |
| `LifecycleEvent.get_name` | method | (self) | public | `NAMES.get(self.transition, _('Unknown'))` (src/nova/virt/event.py:L115) | 1/2 | `src/nova/virt/event.py:L114–L115` |
| `LifecycleEvent.__repr__` | method | (self) | public | `"<%s: %s, %s => %s>" % ( self.__class__.__name__, self.timestamp, self.uuid, self.get_name())` (src/nova/virt/event.py:L118) | 1/6 | `src/nova/virt/event.py:L117–L122` |

## Dependencies

- `import time` (src/nova/virt/event.py:L23)
- `nova.i18n`: imports `_` (src/nova/virt/event.py:L25)

## Side Effects

- **global-mutation**: EVENT_LIFECYCLE_STARTED = 0 (src/nova/virt/event.py:L27)
- **global-mutation**: EVENT_LIFECYCLE_STOPPED = 1 (src/nova/virt/event.py:L28)
- **global-mutation**: EVENT_LIFECYCLE_PAUSED = 2 (src/nova/virt/event.py:L29)
- **global-mutation**: EVENT_LIFECYCLE_RESUMED = 3 (src/nova/virt/event.py:L30)
- **global-mutation**: EVENT_LIFECYCLE_SUSPENDED = 4 (src/nova/virt/event.py:L31)
- **global-mutation**: EVENT_LIFECYCLE_POSTCOPY_STARTED = 5 (src/nova/virt/event.py:L32)
- **global-mutation**: EVENT_LIFECYCLE_MIGRATION_COMPLETED = 6 (src/nova/virt/event.py:L33)
- **global-mutation**: NAMES = { (src/nova/virt/event.py:L36)

