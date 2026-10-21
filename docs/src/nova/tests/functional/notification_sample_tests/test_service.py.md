# src/nova/tests/functional/notification_sample_tests/test_service.py

## Overview

This file implements the `test_service` module, defining 4 classs, 2 constants, 1 function, 13 methods, 6 imports, 3 side effects, 8 security surface entries.

Lines: total 169, code 118, comment 25, blank 26

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestServiceNotificationBase` | class | — | exported | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_service.py:L25–L36` |
| `TestServiceNotificationBase._verify_notification` | method | (self, sample_file_name, replacements=None, actual=None) | private | not declared | 2/6 | `src/nova/tests/functional/notification_sample_tests/test_service.py:L28–L36` |
| `TestServiceUpdateNotificationSamplev2_52` | class | — | exported | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_service.py:L39–L97` |
| `TestServiceUpdateNotificationSamplev2_52.MAX_MICROVERSION` | constant | — | public | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_service.py:L43–L43` |
| `TestServiceUpdateNotificationSamplev2_52.setUp` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/notification_sample_tests/test_service.py:L45–L61` |
| `TestServiceUpdateNotificationSamplev2_52.test_service_enable` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/notification_sample_tests/test_service.py:L63–L68` |
| `TestServiceUpdateNotificationSamplev2_52.test_service_disabled` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/notification_sample_tests/test_service.py:L70–L76` |
| `TestServiceUpdateNotificationSamplev2_52.test_service_disabled_log_reason` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/notification_sample_tests/test_service.py:L78–L86` |
| `TestServiceUpdateNotificationSamplev2_52.test_service_force_down` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/notification_sample_tests/test_service.py:L88–L97` |
| `TestServiceUpdateNotificationSampleLatest` | class | — | exported | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_service.py:L100–L146` |
| `TestServiceUpdateNotificationSampleLatest.MAX_MICROVERSION` | constant | — | public | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_service.py:L104–L104` |
| `TestServiceUpdateNotificationSampleLatest.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/notification_sample_tests/test_service.py:L106–L115` |
| `TestServiceUpdateNotificationSampleLatest.setUp.db_service_get_by_uuid` | function | (ctxt, service_uuid) | public | `svc` (src/nova/tests/functional/notification_sample_tests/test_service.py:L112) | — | `src/nova/tests/functional/notification_sample_tests/test_service.py:L109–L113` |
| `TestServiceUpdateNotificationSampleLatest.test_service_enable` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/notification_sample_tests/test_service.py:L117–L121` |
| `TestServiceUpdateNotificationSampleLatest.test_service_disabled` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/notification_sample_tests/test_service.py:L123–L128` |
| `TestServiceUpdateNotificationSampleLatest.test_service_disabled_log_reason` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/notification_sample_tests/test_service.py:L130–L137` |
| `TestServiceUpdateNotificationSampleLatest.test_service_force_down` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/notification_sample_tests/test_service.py:L139–L146` |
| `TestServiceNotificationSample` | class | — | exported | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_service.py:L149–L169` |
| `TestServiceNotificationSample.test_service_create` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/notification_sample_tests/test_service.py:L151–L157` |
| `TestServiceNotificationSample.test_service_destroy` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/notification_sample_tests/test_service.py:L159–L169` |

## Dependencies

- `oslo_utils`: imports `fixture as utils_fixture` (src/nova/tests/functional/notification_sample_tests/test_service.py:L15)
- `nova`: imports `exception` (src/nova/tests/functional/notification_sample_tests/test_service.py:L17)
- `nova.objects`: imports `service` (src/nova/tests/functional/notification_sample_tests/test_service.py:L18)
- `nova.tests`: imports `fixtures` (src/nova/tests/functional/notification_sample_tests/test_service.py:L19)
- `nova.tests.functional.notification_sample_tests`: imports `notification_sample_base` (src/nova/tests/functional/notification_sample_tests/test_service.py:L20–L21)
- `nova.tests.unit.api.openstack.compute`: imports `test_services` (src/nova/tests/functional/notification_sample_tests/test_service.py:L22)

## Side Effects

- **network**: from nova.tests.unit.api.openstack.compute import test_services (src/nova/tests/functional/notification_sample_tests/test_service.py:L22)
- **global-mutation**: MAX_MICROVERSION = '2.52' (src/nova/tests/functional/notification_sample_tests/test_service.py:L43)
- **global-mutation**: MAX_MICROVERSION = 'latest' (src/nova/tests/functional/notification_sample_tests/test_service.py:L104)

## Security Surface

- **sink** (`db-write`): self._verify_notification('service-update', (src/nova/tests/functional/notification_sample_tests/test_service.py:L67)
- **sink** (`db-write`): self._verify_notification('service-update', (src/nova/tests/functional/notification_sample_tests/test_service.py:L74)
- **sink** (`db-write`): self._verify_notification('service-update', (src/nova/tests/functional/notification_sample_tests/test_service.py:L83)
- **sink** (`db-write`): self._verify_notification('service-update', (src/nova/tests/functional/notification_sample_tests/test_service.py:L93)
- **sink** (`db-write`): self._verify_notification('service-update', (src/nova/tests/functional/notification_sample_tests/test_service.py:L120)
- **sink** (`db-write`): self._verify_notification('service-update', (src/nova/tests/functional/notification_sample_tests/test_service.py:L126)
- **sink** (`db-write`): self._verify_notification('service-update', (src/nova/tests/functional/notification_sample_tests/test_service.py:L134)
- **sink** (`db-write`): self._verify_notification('service-update', (src/nova/tests/functional/notification_sample_tests/test_service.py:L142)

