# src/nova/tests/unit/notifications/objects/test_notification.py

## Overview

This file implements the `test_notification` module, defining 8 classs, 6 constants, 7 fields, 1 function, 20 methods, 1 variable, 11 imports, 13 side effects, 17 security surface entries.

Lines: total 497, code 398, comment 26, blank 73

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestNotificationBase` | class | — | exported | not declared | — | `src/nova/tests/unit/notifications/objects/test_notification.py:L29–L364` |
| `TestNotificationBase.TestObject` | class | — | public | not declared | — | `src/nova/tests/unit/notifications/objects/test_notification.py:L32–L53` |
| `TestNotificationBase.TestObject.VERSION` | constant | — | public | not declared | — | `src/nova/tests/unit/notifications/objects/test_notification.py:L33–L33` |
| `TestNotificationBase.TestObject.fields` | field | — | public | not declared | — | `src/nova/tests/unit/notifications/objects/test_notification.py:L34–L39` |
| `TestNotificationBase.TestObject.obj_load_attr` | method | (self, attrname) | public | not declared | 2/7 | `src/nova/tests/unit/notifications/objects/test_notification.py:L41–L47` |
| `TestNotificationBase.TestObject.__init__` | method | (self, not_important_field) | public | not declared | 1/3 | `src/nova/tests/unit/notifications/objects/test_notification.py:L49–L53` |
| `TestNotificationBase.TestNotificationPayload` | class | — | public | not declared | — | `src/nova/tests/unit/notifications/objects/test_notification.py:L56–L77` |
| `TestNotificationBase.TestNotificationPayload.VERSION` | constant | — | public | not declared | — | `src/nova/tests/unit/notifications/objects/test_notification.py:L57–L57` |
| `TestNotificationBase.TestNotificationPayload.SCHEMA` | constant | — | public | not declared | — | `src/nova/tests/unit/notifications/objects/test_notification.py:L59–L63` |
| `TestNotificationBase.TestNotificationPayload.fields` | field | — | public | not declared | — | `src/nova/tests/unit/notifications/objects/test_notification.py:L65–L71` |
| `TestNotificationBase.TestNotificationPayload.__init__` | method | (self, extra_field, source_field) | public | not declared | 1/5 | `src/nova/tests/unit/notifications/objects/test_notification.py:L73–L77` |
| `TestNotificationBase.TestNotificationPayloadEmptySchema` | class | — | public | not declared | — | `src/nova/tests/unit/notifications/objects/test_notification.py:L80–L91` |
| `TestNotificationBase.TestNotificationPayloadEmptySchema.VERSION` | constant | — | public | not declared | — | `src/nova/tests/unit/notifications/objects/test_notification.py:L82–L82` |
| `TestNotificationBase.TestNotificationPayloadEmptySchema.fields` | field | — | public | not declared | — | `src/nova/tests/unit/notifications/objects/test_notification.py:L84–L86` |
| `TestNotificationBase.TestNotificationPayloadEmptySchema.__init__` | method | (self, extra_field) | public | not declared | 1/4 | `src/nova/tests/unit/notifications/objects/test_notification.py:L88–L91` |
| `TestNotificationBase.TestNotification` | class | — | public | not declared | — | `src/nova/tests/unit/notifications/objects/test_notification.py:L96–L100` |
| `TestNotificationBase.TestNotification.VERSION` | constant | — | public | not declared | — | `src/nova/tests/unit/notifications/objects/test_notification.py:L97–L97` |
| `TestNotificationBase.TestNotification.fields` | field | — | public | not declared | — | `src/nova/tests/unit/notifications/objects/test_notification.py:L98–L100` |
| `TestNotificationBase.TestNotificationEmptySchema` | class | — | public | not declared | — | `src/nova/tests/unit/notifications/objects/test_notification.py:L103–L107` |
| `TestNotificationBase.TestNotificationEmptySchema.VERSION` | constant | — | public | not declared | — | `src/nova/tests/unit/notifications/objects/test_notification.py:L104–L104` |
| `TestNotificationBase.TestNotificationEmptySchema.fields` | field | — | public | not declared | — | `src/nova/tests/unit/notifications/objects/test_notification.py:L105–L107` |
| `TestNotificationBase.fake_service` | field | — | public | not declared | — | `src/nova/tests/unit/notifications/objects/test_notification.py:L109–L124` |
| `TestNotificationBase.expected_payload` | field | — | public | not declared | — | `src/nova/tests/unit/notifications/objects/test_notification.py:L126–L134` |
| `TestNotificationBase.setUp` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/notifications/objects/test_notification.py:L136–L161` |
| `TestNotificationBase._verify_notification` | method | (self, mock_notifier, mock_context, expected_event_type, expected_payload) | private | not declared | 1/12 | `src/nova/tests/unit/notifications/objects/test_notification.py:L163–L174` |
| `TestNotificationBase.test_emit_notification` | method | (self, mock_notifier, mock_legacy) | public | not declared | 1/10 | `src/nova/tests/unit/notifications/objects/test_notification.py:L178–L189` |
| `TestNotificationBase.test_emit_with_host_and_binary_as_publisher` | method | (self, mock_notifier) | public | not declared | 1/18 | `src/nova/tests/unit/notifications/objects/test_notification.py:L192–L211` |
| `TestNotificationBase.test_emit_event_type_without_phase` | method | (self, mock_notifier, mock_legacy) | public | not declared | 1/18 | `src/nova/tests/unit/notifications/objects/test_notification.py:L215–L234` |
| `TestNotificationBase.test_not_possible_to_emit_if_not_populated` | method | (self, mock_notifier) | public | not declared | 1/15 | `src/nova/tests/unit/notifications/objects/test_notification.py:L237–L253` |
| `TestNotificationBase.test_lazy_load_source_field` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/notifications/objects/test_notification.py:L255–L263` |
| `TestNotificationBase.test_uninited_source_field_defaulted_to_none` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/notifications/objects/test_notification.py:L265–L274` |
| `TestNotificationBase.test_uninited_source_field_not_nullable_payload_field_fails` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/notifications/objects/test_notification.py:L276–L283` |
| `TestNotificationBase.test_empty_schema` | method | (self, mock_notifier) | public | not declared | 1/23 | `src/nova/tests/unit/notifications/objects/test_notification.py:L286–L310` |
| `TestNotificationBase.test_sample_decorator` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/notifications/objects/test_notification.py:L312–L315` |
| `TestNotificationBase.test_payload_is_not_generated_if_notifier_is_not_enabled` | method | (self, mock_notifier, mock_emit) | public | not declared | 1/18 | `src/nova/tests/unit/notifications/objects/test_notification.py:L319–L340` |
| `TestNotificationBase.test_payload_is_not_generated_if_notification_format_is_unversioned` | method | (self, mock_emit) | public | not declared | 1/18 | `src/nova/tests/unit/notifications/objects/test_notification.py:L343–L364` |
| `notification_object_data` | variable | — | exported | not declared | — | `src/nova/tests/unit/notifications/objects/test_notification.py:L367–L441` |
| `TestNotificationObjectVersions` | class | — | exported | not declared | — | `src/nova/tests/unit/notifications/objects/test_notification.py:L444–L484` |
| `TestNotificationObjectVersions.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/notifications/objects/test_notification.py:L445–L447` |
| `TestNotificationObjectVersions.test_versions` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/notifications/objects/test_notification.py:L449–L458` |
| `TestNotificationObjectVersions.test_notification_payload_version_depends_on_the_schema` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/notifications/objects/test_notification.py:L460–L484` |
| `TestNotificationObjectVersions.test_notification_payload_version_depends_on_the_schema.TestNotificationPayload` | class | — | public | not declared | — | `src/nova/tests/unit/notifications/objects/test_notification.py:L462–L474` |
| `get_extra_data` | function | (obj_class) | exported | `extra_data` (src/nova/tests/unit/notifications/objects/test_notification.py:L497) | 2/6 | `src/nova/tests/unit/notifications/objects/test_notification.py:L487–L497` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/notifications/objects/test_notification.py:L14)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/notifications/objects/test_notification.py:L16)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/notifications/objects/test_notification.py:L17)
- `oslo_versionedobjects`: imports `fixture` (src/nova/tests/unit/notifications/objects/test_notification.py:L18)
- `nova`: imports `exception` (src/nova/tests/unit/notifications/objects/test_notification.py:L20)
- `nova.notifications.objects`: imports `base as notification` (src/nova/tests/unit/notifications/objects/test_notification.py:L21)
- `nova`: imports `objects` (src/nova/tests/unit/notifications/objects/test_notification.py:L22)
- `nova.objects`: imports `base` (src/nova/tests/unit/notifications/objects/test_notification.py:L23)
- `nova.objects`: imports `fields` (src/nova/tests/unit/notifications/objects/test_notification.py:L24)
- `nova`: imports `test` (src/nova/tests/unit/notifications/objects/test_notification.py:L25)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/notifications/objects/test_notification.py:L26)

## Side Effects

- **network**: mock_notify = mock_notifier.prepare.return_value.info (src/nova/tests/unit/notifications/objects/test_notification.py:L168)
- **network**: self.assertTrue(mock_notify.called) (src/nova/tests/unit/notifications/objects/test_notification.py:L169)
- **network**: self.assertEqual(mock_notify.call_args[0][0], mock_context) (src/nova/tests/unit/notifications/objects/test_notification.py:L170)
- **network**: self.assertEqual(mock_notify.call_args[1]['event_type'], (src/nova/tests/unit/notifications/objects/test_notification.py:L171)
- **network**: actual_payload = mock_notify.call_args[1]['payload'] (src/nova/tests/unit/notifications/objects/test_notification.py:L173)
- **global-mutation**: VERSION = '1.0' (src/nova/tests/unit/notifications/objects/test_notification.py:L33)
- **global-mutation**: VERSION = '1.0' (src/nova/tests/unit/notifications/objects/test_notification.py:L57)
- **global-mutation**: SCHEMA = { (src/nova/tests/unit/notifications/objects/test_notification.py:L59)
- **global-mutation**: VERSION = '1.0' (src/nova/tests/unit/notifications/objects/test_notification.py:L82)
- **global-mutation**: VERSION = '1.0' (src/nova/tests/unit/notifications/objects/test_notification.py:L97)
- **global-mutation**: VERSION = '1.0' (src/nova/tests/unit/notifications/objects/test_notification.py:L104)
- **global-mutation**: VERSION = '1.0' (src/nova/tests/unit/notifications/objects/test_notification.py:L463)
- **global-mutation**: SCHEMA = { (src/nova/tests/unit/notifications/objects/test_notification.py:L465)

## Security Surface

- **sink** (`db-write`): @notification.notification_sample('test-update-1.json') (src/nova/tests/unit/notifications/objects/test_notification.py:L93)
- **sink** (`db-write`): @notification.notification_sample('test-update-2.json') (src/nova/tests/unit/notifications/objects/test_notification.py:L94)
- **sink** (`db-write`): action=fields.NotificationAction.UPDATE, (src/nova/tests/unit/notifications/objects/test_notification.py:L156)
- **sink** (`db-write`): expected_event_type='test_object.update.start', (src/nova/tests/unit/notifications/objects/test_notification.py:L187)
- **sink** (`db-write`): action=fields.NotificationAction.UPDATE), (src/nova/tests/unit/notifications/objects/test_notification.py:L196)
- **sink** (`db-write`): expected_event_type='test_object.update', (src/nova/tests/unit/notifications/objects/test_notification.py:L210)
- **sink** (`db-write`): action=fields.NotificationAction.UPDATE), (src/nova/tests/unit/notifications/objects/test_notification.py:L219)
- **sink** (`db-write`): expected_event_type='test_object.update', (src/nova/tests/unit/notifications/objects/test_notification.py:L232)
- **sink** (`db-write`): action=fields.NotificationAction.UPDATE), (src/nova/tests/unit/notifications/objects/test_notification.py:L245)
- **sink** (`db-write`): action=fields.NotificationAction.UPDATE), (src/nova/tests/unit/notifications/objects/test_notification.py:L292)
- **sink** (`db-write`): expected_event_type='test_object.update', (src/nova/tests/unit/notifications/objects/test_notification.py:L305)
- **sink** (`db-write`): self.assertIn('test-update-1.json', self.TestNotification.samples) (src/nova/tests/unit/notifications/objects/test_notification.py:L314)
- **sink** (`db-write`): self.assertIn('test-update-2.json', self.TestNotification.samples) (src/nova/tests/unit/notifications/objects/test_notification.py:L315)
- **sink** (`db-write`): action=fields.NotificationAction.UPDATE), (src/nova/tests/unit/notifications/objects/test_notification.py:L329)
- **sink** (`db-write`): action=fields.NotificationAction.UPDATE), (src/nova/tests/unit/notifications/objects/test_notification.py:L353)
- **sink** (`db-write`): notification_object_data.update(test_objects.object_data) (src/nova/tests/unit/notifications/objects/test_notification.py:L452)
- **sink** (`db-write`): 'sure the versions have been bumped, and then update ' (src/nova/tests/unit/notifications/objects/test_notification.py:L457)

