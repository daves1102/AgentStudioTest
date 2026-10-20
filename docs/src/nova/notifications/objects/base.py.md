# src/nova/notifications/objects/base.py

## Overview

This file implements the `base` module, defining 5 classs, 1 classmethod, 7 constants, 3 fields, 2 functions, 9 methods, 7 imports, 9 side effects.

Lines: total 250, code 120, comment 97, blank 33

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/notifications/objects/base.py:L23–L23` |
| `NotificationObject` | class | — | exported | not declared | — | `src/nova/notifications/objects/base.py:L27–L38` |
| `NotificationObject.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/base.py:L30–L30` |
| `NotificationObject.__init__` | method | (self, **kwargs) | public | not declared | 1/3 | `src/nova/notifications/objects/base.py:L32–L38` |
| `EventType` | class | — | exported | not declared | — | `src/nova/notifications/objects/base.py:L42–L97` |
| `EventType.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/base.py:L78–L78` |
| `EventType.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/base.py:L80–L84` |
| `EventType.__init__` | method | (self, object, action, phase=None) | public | not declared | 1/5 | `src/nova/notifications/objects/base.py:L86–L90` |
| `EventType.to_notification_event_type_field` | method | (self) | public | `s` (src/nova/notifications/objects/base.py:L97) | 2/5 | `src/nova/notifications/objects/base.py:L92–L97` |
| `NotificationPayloadBase` | class | — | exported | not declared | — | `src/nova/notifications/objects/base.py:L101–L166` |
| `NotificationPayloadBase.SCHEMA` | constant | — | public | not declared | — | `src/nova/notifications/objects/base.py:L121–L121` |
| `NotificationPayloadBase.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/base.py:L123–L123` |
| `NotificationPayloadBase.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/notifications/objects/base.py:L125–L127` |
| `NotificationPayloadBase.populate_schema` | method | (self, set_none=True, **kwargs) | public | not declared | 5/17 | `src/nova/notifications/objects/base.py:L130–L166` |
| `NotificationPublisher` | class | — | exported | not declared | — | `src/nova/notifications/objects/base.py:L170–L194` |
| `NotificationPublisher.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/base.py:L177–L177` |
| `NotificationPublisher.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/base.py:L181–L184` |
| `NotificationPublisher.__init__` | method | (self, host, source) | public | not declared | 1/4 | `src/nova/notifications/objects/base.py:L186–L189` |
| `NotificationPublisher.from_service_obj` | method | (cls, service) | public | `cls(host=service.host, source=source)` (src/nova/notifications/objects/base.py:L194) | 1/3 | `src/nova/notifications/objects/base.py:L192–L194` |
| `NotificationBase` | class | — | exported | not declared | — | `src/nova/notifications/objects/base.py:L198–L233` |
| `NotificationBase.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/base.py:L204–L204` |
| `NotificationBase.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/base.py:L206–L210` |
| `NotificationBase._emit` | method | (self, context, event_type, publisher_id, payload) | private | not declared | 1/4 | `src/nova/notifications/objects/base.py:L212–L215` |
| `NotificationBase.emit` | method | (self, context) | public | not declared | 1/10 | `src/nova/notifications/objects/base.py:L218–L233` |
| `notification_sample` | function | (sample) | exported | `wrap` (src/nova/notifications/objects/base.py:L250) | 1/3 | `src/nova/notifications/objects/base.py:L236–L250` |
| `notification_sample.wrap` | function | (cls) | public | `cls` (src/nova/notifications/objects/base.py:L249) | — | `src/nova/notifications/objects/base.py:L244–L249` |
| `NotificationPublisher.from_service_obj` | classmethod | — | public | not declared | — | `src/nova/notifications/objects/base.py:L191–L194` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/notifications/objects/base.py:L14)
- `oslo_utils`: imports `excutils` (src/nova/notifications/objects/base.py:L15)
- `oslo_versionedobjects`: imports `exception as ovo_exception` (src/nova/notifications/objects/base.py:L16)
- `nova`: imports `exception` (src/nova/notifications/objects/base.py:L18)
- `nova.objects`: imports `base` (src/nova/notifications/objects/base.py:L19)
- `nova.objects`: imports `fields` (src/nova/notifications/objects/base.py:L20)
- `nova`: imports `rpc` (src/nova/notifications/objects/base.py:L21)

## Side Effects

- **network**: notify = getattr(notifier, self.priority) (src/nova/notifications/objects/base.py:L214)
- **network**: notify(context, event_type=event_type, payload=payload) (src/nova/notifications/objects/base.py:L215)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/notifications/objects/base.py:L23)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/base.py:L30)
- **global-mutation**: VERSION = '1.22' (src/nova/notifications/objects/base.py:L78)
- **global-mutation**: SCHEMA = {} (src/nova/notifications/objects/base.py:L121)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/base.py:L123)
- **global-mutation**: VERSION = '2.2' (src/nova/notifications/objects/base.py:L177)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/base.py:L204)

