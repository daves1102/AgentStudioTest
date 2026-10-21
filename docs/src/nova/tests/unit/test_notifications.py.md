# src/nova/tests/unit/test_notifications.py

## Overview

This file implements the `test_notifications` module, defining 2 classs, 1 constant, 2 functions, 32 methods, 17 imports, 2 side effects, 5 security surface entries.

Lines: total 536, code 406, comment 34, blank 96

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/test_notifications.py:L39–L39` |
| `NotificationsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_notifications.py:L42–L500` |
| `NotificationsTestCase.setUp` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/test_notifications.py:L44–L66` |
| `NotificationsTestCase._wrapped_create` | method | (self, params=None) | private | `inst` (src/nova/tests/unit/test_notifications.py:L88) | 2/21 | `src/nova/tests/unit/test_notifications.py:L68–L88` |
| `NotificationsTestCase.test_notif_disabled` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/test_notifications.py:L90–L109` |
| `NotificationsTestCase.test_task_notif` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/test_notifications.py:L111–L142` |
| `NotificationsTestCase.test_send_no_notif` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_notifications.py:L144–L157` |
| `NotificationsTestCase.test_send_on_vm_change` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/test_notifications.py:L159–L177` |
| `NotificationsTestCase.test_send_on_task_change` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_notifications.py:L179–L191` |
| `NotificationsTestCase.test_no_update_with_states` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_notifications.py:L193–L199` |
| `NotificationsTestCase.test_vm_update_with_states` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_notifications.py:L201–L209` |
| `NotificationsTestCase._verify_notification` | method | (self, expected_state=vm_states.ACTIVE, expected_new_task_state=task_states.SPAWNING) | private | not declared | 2/52 | `src/nova/tests/unit/test_notifications.py:L211–L265` |
| `NotificationsTestCase.test_task_update_with_states` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_notifications.py:L267–L277` |
| `NotificationsTestCase.test_update_no_service_name` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_notifications.py:L279–L292` |
| `NotificationsTestCase.test_update_with_service_name` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_notifications.py:L294–L306` |
| `NotificationsTestCase.test_update_with_host_name` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_notifications.py:L308–L320` |
| `NotificationsTestCase.test_payload_has_fixed_ip_labels` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_notifications.py:L322–L326` |
| `NotificationsTestCase.test_payload_has_vif_mac_address` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_notifications.py:L328–L333` |
| `NotificationsTestCase.test_payload_has_cell_name_empty` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_notifications.py:L335–L340` |
| `NotificationsTestCase.test_payload_has_cell_name` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_notifications.py:L342–L347` |
| `NotificationsTestCase.test_payload_has_progress_empty` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_notifications.py:L349–L354` |
| `NotificationsTestCase.test_payload_has_progress` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_notifications.py:L356–L361` |
| `NotificationsTestCase.test_payload_has_flavor_attributes` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/test_notifications.py:L363–L379` |
| `NotificationsTestCase.test_payload_has_timestamp_fields` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_notifications.py:L381–L393` |
| `NotificationsTestCase.test_send_access_ip_update` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_notifications.py:L395–L404` |
| `NotificationsTestCase.test_send_name_update` | method | (self) | public | not declared | 2/14 | `src/nova/tests/unit/test_notifications.py:L406–L422` |
| `NotificationsTestCase.test_send_versioned_tags_update` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_notifications.py:L424–L432` |
| `NotificationsTestCase.test_send_versioned_action_initiator_update` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/test_notifications.py:L434–L447` |
| `NotificationsTestCase.test_send_no_state_change` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_notifications.py:L449–L458` |
| `NotificationsTestCase.test_send_no_state_change.sending_no_state_change` | function | (context, instance, **kwargs) | public | not declared | — | `src/nova/tests/unit/test_notifications.py:L452–L453` |
| `NotificationsTestCase.test_fail_sending_update` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_notifications.py:L460–L468` |
| `NotificationsTestCase.test_fail_sending_update.fail_sending` | function | (context, instance, **kwargs) | public | not declared | — | `src/nova/tests/unit/test_notifications.py:L461–L462` |
| `NotificationsTestCase.test_fail_sending_update_instance_not_found` | method | (self, mock_log_exception) | public | not declared | 1/9 | `src/nova/tests/unit/test_notifications.py:L471–L481` |
| `NotificationsTestCase.test_fail_send_update_with_states_inst_not_found` | method | (self, mock_log_exception) | public | not declared | 1/12 | `src/nova/tests/unit/test_notifications.py:L484–L497` |
| `NotificationsTestCase._decorated_function` | method | (self, arg1, arg2) | private | not declared | 1/2 | `src/nova/tests/unit/test_notifications.py:L499–L500` |
| `NotificationsFormatTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_notifications.py:L503–L536` |
| `NotificationsFormatTestCase.test_state_computation` | method | (self) | public | not declared | 1/29 | `src/nova/tests/unit/test_notifications.py:L505–L536` |

## Dependencies

- `import copy` (src/nova/tests/unit/test_notifications.py:L18)
- `import datetime` (src/nova/tests/unit/test_notifications.py:L19)
- `unittest`: imports `mock` (src/nova/tests/unit/test_notifications.py:L20)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/test_notifications.py:L22)
- `oslo_context`: imports `fixture as o_fixture` (src/nova/tests/unit/test_notifications.py:L23)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/test_notifications.py:L24)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/test_notifications.py:L25)
- `nova.compute`: imports `task_states` (src/nova/tests/unit/test_notifications.py:L27)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/test_notifications.py:L28)
- `nova`: imports `context` (src/nova/tests/unit/test_notifications.py:L29)
- `nova`: imports `exception` (src/nova/tests/unit/test_notifications.py:L30)
- `nova.notifications`: imports `base as notifications` (src/nova/tests/unit/test_notifications.py:L31)
- `nova`: imports `objects` (src/nova/tests/unit/test_notifications.py:L32)
- `nova.objects`: imports `base as obj_base` (src/nova/tests/unit/test_notifications.py:L33)
- `nova`: imports `test` (src/nova/tests/unit/test_notifications.py:L34)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/test_notifications.py:L35)
- `nova.tests.unit`: imports `fake_network` (src/nova/tests/unit/test_notifications.py:L36)

## Side Effects

- **network**: raise Exception('failed to notify') (src/nova/tests/unit/test_notifications.py:L462)
- **global-mutation**: CONF = cfg.CONF (src/nova/tests/unit/test_notifications.py:L39)

## Security Surface

- **sink** (`db-write`): inst.update(params) (src/nova/tests/unit/test_notifications.py:L86)
- **sink** (`db-write`): 'instance.update', (src/nova/tests/unit/test_notifications.py:L141)
- **sink** (`db-write`): 'instance.update', (src/nova/tests/unit/test_notifications.py:L176)
- **sink** (`db-write`): 'instance.update', (src/nova/tests/unit/test_notifications.py:L190)
- **sink** (`db-write`): 'instance.update', (src/nova/tests/unit/test_notifications.py:L216)

