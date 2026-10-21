# src/nova/tests/fixtures/notifications.py

## Overview

This file implements the `notifications` module, defining 4 classs, 1 constant, 19 methods, 2 propertys, 1 variable, 11 imports, 5 side effects.

Lines: total 245, code 172, comment 32, blank 41

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/notifications.py:L27–L27` |
| `_Sub` | class | — | unexported | not declared | — | `src/nova/tests/fixtures/notifications.py:L30–L68` |
| `_Sub.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/tests/fixtures/notifications.py:L35–L37` |
| `_Sub.received` | method | (self, notification) | public | not declared | 1/4 | `src/nova/tests/fixtures/notifications.py:L39–L42` |
| `_Sub.wait_n` | method | (self, n, event, timeout) | public | `list(self._notifications)` (src/nova/tests/fixtures/notifications.py:L68) | 3/14 | `src/nova/tests/fixtures/notifications.py:L44–L68` |
| `FakeMessage` | variable | — | exported | not declared | — | `src/nova/tests/fixtures/notifications.py:L71–L73` |
| `FakeNotifier` | class | — | exported | not declared | — | `src/nova/tests/fixtures/notifications.py:L76–L132` |
| `FakeNotifier.__init__` | method | (self, transport, publisher_id, serializer=None, parent=None, test_case_id=None) | public | not declared | 4/18 | `src/nova/tests/fixtures/notifications.py:L78–L97` |
| `FakeNotifier.prepare` | method | (self, publisher_id=None) | public | `self.__class__( self.transport, publisher_id, serializer=self._serializer, parent=self, test_case_id=self.test_case_id )` (src/nova/tests/fixtures/notifications.py:L103) | 2/8 | `src/nova/tests/fixtures/notifications.py:L99–L107` |
| `FakeNotifier._notify` | method | (self, priority, ctxt, event_type, payload) | private | not declared | 2/11 | `src/nova/tests/fixtures/notifications.py:L109–L126` |
| `FakeNotifier.is_enabled` | method | (self) | public | `True` (src/nova/tests/fixtures/notifications.py:L129) | 1/2 | `src/nova/tests/fixtures/notifications.py:L128–L129` |
| `FakeNotifier.reset` | method | (self) | public | not declared | 1/2 | `src/nova/tests/fixtures/notifications.py:L131–L132` |
| `FakeVersionedNotifier` | class | — | exported | not declared | — | `src/nova/tests/fixtures/notifications.py:L135–L201` |
| `FakeVersionedNotifier.__init__` | method | (self, transport, publisher_id, serializer=None, parent=None, test_case_id=None) | public | not declared | 3/15 | `src/nova/tests/fixtures/notifications.py:L136–L152` |
| `FakeVersionedNotifier._get_sender_test_case_id` | method | (self) | private | `current.test_case_id` (src/nova/tests/fixtures/notifications.py:L162) | 2/5 | `src/nova/tests/fixtures/notifications.py:L154–L162` |
| `FakeVersionedNotifier._notify` | method | (self, priority, ctxt, event_type, payload) | private | not declared | 3/22 | `src/nova/tests/fixtures/notifications.py:L164–L191` |
| `FakeVersionedNotifier.reset` | method | (self) | public | not declared | 1/3 | `src/nova/tests/fixtures/notifications.py:L193–L195` |
| `FakeVersionedNotifier.wait_for_versioned_notifications` | method | (self, event_type, n_events=1, timeout=10.0) | public | `self.subscriptions[event_type].wait_n( n_events, event_type, timeout)` (src/nova/tests/fixtures/notifications.py:L200) | 1/5 | `src/nova/tests/fixtures/notifications.py:L197–L201` |
| `NotificationFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/notifications.py:L204–L245` |
| `NotificationFixture.__init__` | method | (self, test) | public | not declared | 1/2 | `src/nova/tests/fixtures/notifications.py:L205–L206` |
| `NotificationFixture.setUp` | method | (self) | public | not declared | 3/18 | `src/nova/tests/fixtures/notifications.py:L208–L226` |
| `NotificationFixture.reset` | method | (self) | public | not declared | 1/3 | `src/nova/tests/fixtures/notifications.py:L228–L230` |
| `NotificationFixture.wait_for_versioned_notifications` | method | (self, event_type, n_events=1, timeout=10.0) | public | `self.fake_versioned_notifier.wait_for_versioned_notifications( event_type, n_events, timeout, )` (src/nova/tests/fixtures/notifications.py:L235) | 1/6 | `src/nova/tests/fixtures/notifications.py:L232–L237` |
| `NotificationFixture.versioned_notifications` | method | (self) | public | `self.fake_versioned_notifier.versioned_notifications` (src/nova/tests/fixtures/notifications.py:L241) | 1/2 | `src/nova/tests/fixtures/notifications.py:L240–L241` |
| `NotificationFixture.notifications` | method | (self) | public | `self.fake_notifier.notifications` (src/nova/tests/fixtures/notifications.py:L245) | 1/2 | `src/nova/tests/fixtures/notifications.py:L244–L245` |
| `NotificationFixture.versioned_notifications` | property | — | public | not declared | — | `src/nova/tests/fixtures/notifications.py:L239–L241` |
| `NotificationFixture.notifications` | property | — | public | not declared | — | `src/nova/tests/fixtures/notifications.py:L243–L245` |

## Dependencies

- `import collections` (src/nova/tests/fixtures/notifications.py:L13)
- `import functools` (src/nova/tests/fixtures/notifications.py:L14)
- `import threading` (src/nova/tests/fixtures/notifications.py:L15)
- `import fixtures` (src/nova/tests/fixtures/notifications.py:L17)
- `oslo_log`: imports `log as logging` (src/nova/tests/fixtures/notifications.py:L18)
- `import oslo_messaging` (src/nova/tests/fixtures/notifications.py:L19)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/fixtures/notifications.py:L20)
- `oslo_utils`: imports `excutils` (src/nova/tests/fixtures/notifications.py:L21)
- `oslo_utils`: imports `timeutils` (src/nova/tests/fixtures/notifications.py:L22)
- `nova`: imports `rpc` (src/nova/tests/fixtures/notifications.py:L24)
- `nova`: imports `utils` (src/nova/tests/fixtures/notifications.py:L25)

## Side Effects

- **network**: serializer or oslo_messaging.serializer.NoOpSerializer() (src/nova/tests/fixtures/notifications.py:L85)
- **network**: functools.partial(self._notify, priority.upper()), (src/nova/tests/fixtures/notifications.py:L94)
- **network**: def _notify(self, priority, ctxt, event_type, payload): (src/nova/tests/fixtures/notifications.py:L109)
- **network**: def _notify(self, priority, ctxt, event_type, payload): (src/nova/tests/fixtures/notifications.py:L164)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/fixtures/notifications.py:L27)

## Notes

- KB `sideEffects` entries at L109, L164 have targets that appear to be code fragments rather than resource paths; documented as recorded.

