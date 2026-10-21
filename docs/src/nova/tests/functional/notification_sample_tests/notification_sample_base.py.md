# src/nova/tests/functional/notification_sample_tests/notification_sample_base.py

## Overview

This file implements the `notification_sample_base` module, defining 1 class, 4 constants, 11 methods, 12 imports, 9 side effects, 4 security surface entries.

Lines: total 301, code 218, comment 32, blank 51

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L30–L30` |
| `NotificationSampleTestBase` | class | — | exported | not declared | — | `src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L33–L301` |
| `NotificationSampleTestBase.ANY` | constant | — | public | not declared | — | `src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L52–L52` |
| `NotificationSampleTestBase.REQUIRES_LOCKING` | constant | — | public | not declared | — | `src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L54–L54` |
| `NotificationSampleTestBase.MAX_MICROVERSION` | constant | — | public | not declared | — | `src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L61–L61` |
| `NotificationSampleTestBase.setUp` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L63–L87` |
| `NotificationSampleTestBase._get_notification_sample` | method | (self, sample) | private | `sample_dir + '/' + sample + '.json'` (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L94) | 1/6 | `src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L89–L94` |
| `NotificationSampleTestBase._apply_replacements` | method | (self, replacements, sample_obj, notification) | private | not declared | 5/13 | `src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L96–L108` |
| `NotificationSampleTestBase._verify_notification` | method | (self, sample_file_name, replacements=None, actual=None) | private | not declared | 3/20 | `src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L110–L153` |
| `NotificationSampleTestBase._pop_and_verify_dest_select_notification` | method | (self, server_id, replacements=None) | private | not declared | 3/16 | `src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L155–L170` |
| `NotificationSampleTestBase._boot_a_server` | method | (self, expected_status='ACTIVE', extra_params=None, scheduler_hints=None, additional_extra_specs=None) | private | `found_server` (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L250) | 8/57 | `src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L172–L250` |
| `NotificationSampleTestBase._get_notifications` | method | (self, event_type) | private | `[notification for notification in self.notifier.versioned_notifications if notification['event_type'] == event_type]` (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L253) | 3/4 | `src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L252–L255` |
| `NotificationSampleTestBase._wait_for_notification` | method | (self, event_type, timeout=10.0) | private | not declared | 1/3 | `src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L257–L262` |
| `NotificationSampleTestBase._wait_for_notifications` | method | (self, event_type, expected_count, timeout=10.0) | private | `notifications` (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L275) | 2/11 | `src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L264–L275` |
| `NotificationSampleTestBase._attach_volume_to_server` | method | (self, server, volume_id) | private | not declared | 1/4 | `src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L277–L280` |
| `NotificationSampleTestBase._wait_and_get_migrations` | method | (self, server, max_retries=20) | private | `migrations` (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L298) | 5/11 | `src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L282–L301` |

## Dependencies

- `import os` (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L15)
- `import time` (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L16)
- `oslo_config`: imports `cfg` (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L18)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L19)
- `oslo_utils`: imports `fixture as utils_fixture` (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L20)
- `nova`: imports `test` (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L22)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L23)
- `nova.tests.functional`: imports `fixtures as func_fixtures` (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L24)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L25)
- `nova.tests`: imports `json_ref` (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L26)
- `nova.tests.unit.api.openstack.compute`: imports `test_services` (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L27)
- `nova.tests.unit`: imports `fake_crypto` (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L28)

## Side Effects

- **network**: from nova.tests.unit.api.openstack.compute import test_services (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L27)
- **file-io**: sample_dir = os.path.dirname(os.path.abspath(__file__)) (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L90)
- **file-io**: sample_dir = os.path.normpath(os.path.join( (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L91)
- **file-io**: with open(sample_file) as sample: (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L137)
- **file-io**: sample_base_dir = os.path.dirname(sample_file) (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L141)
- **global-mutation**: CONF = cfg.CONF (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L30)
- **global-mutation**: ANY = object() (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L52)
- **global-mutation**: REQUIRES_LOCKING = True (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L54)
- **global-mutation**: MAX_MICROVERSION = 'latest' (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L61)

## Security Surface

- **sink** (`db-write`): :param replacements: A dict of key value pairs that is used to update (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L116)
- **sink** (`db-write`): extra_specs['extra_specs'].update(additional_extra_specs) (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L189)
- **sink** (`db-write`): server.update(extra_params) (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L224)
- **sink** (`db-write`): post.update({"os:scheduler_hints": scheduler_hints}) (src/nova/tests/functional/notification_sample_tests/notification_sample_base.py:L228)

