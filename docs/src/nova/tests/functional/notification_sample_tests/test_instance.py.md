# src/nova/tests/functional/notification_sample_tests/test_instance.py

## Overview

This file implements the `test_instance` module, defining 2 classs, 7 functions, 50 methods, 8 imports, 5 security surface entries.

Lines: total 2425, code 1934, comment 263, blank 228

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestInstanceNotificationSampleWithMultipleCompute` | class | — | exported | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L26–L362` |
| `TestInstanceNotificationSampleWithMultipleCompute.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L29–L38` |
| `TestInstanceNotificationSampleWithMultipleCompute.test_multiple_compute_actions` | method | (self) | public | not declared | 2/18 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L40–L63` |
| `TestInstanceNotificationSampleWithMultipleCompute._test_live_migration_rollback` | method | (self, server, mock_migration, mock_flags) | private | not declared | 2/49 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L69–L127` |
| `TestInstanceNotificationSampleWithMultipleCompute._test_live_migration_success` | method | (self, server) | private | not declared | 3/59 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L129–L202` |
| `TestInstanceNotificationSampleWithMultipleCompute._test_live_migration_abort` | method | (self, server) | private | not declared | 2/53 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L204–L272` |
| `TestInstanceNotificationSampleWithMultipleCompute._test_evacuate_server` | method | (self, server) | private | not declared | 1/23 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L274–L299` |
| `TestInstanceNotificationSampleWithMultipleCompute._test_live_migration_force_complete` | method | (self, server) | private | not declared | 1/35 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L301–L362` |
| `TestInstanceNotificationSample` | class | — | exported | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L365–L2425` |
| `TestInstanceNotificationSample.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L368–L376` |
| `TestInstanceNotificationSample._wait_until_swap_volume` | method | (self, server, volume_id) | private | `` (src/nova/tests/functional/notification_sample_tests/test_instance.py:L384) | 5/9 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L378–L386` |
| `TestInstanceNotificationSample.test_instance_action` | method | (self) | public | not declared | 2/32 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L388–L436` |
| `TestInstanceNotificationSample.test_create_delete_server` | method | (self) | public | not declared | 2/29 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L438–L473` |
| `TestInstanceNotificationSample.test_create_server_error` | method | (self, mock_build) | public | not declared | 1/43 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L476–L531` |
| `TestInstanceNotificationSample.test_create_server_error._build_resources` | function | (*args, **kwargs) | private | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L477–L478` |
| `TestInstanceNotificationSample.test_instance_exists_usage_audit` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L533–L538` |
| `TestInstanceNotificationSample.test_instance_exists` | method | (self) | public | not declared | 1/22 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L540–L565` |
| `TestInstanceNotificationSample.test_delete_server_while_compute_is_down` | method | (self) | public | not declared | 1/24 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L567–L595` |
| `TestInstanceNotificationSample._verify_instance_update_steps` | method | (self, steps, notifications, initial=None) | private | `replacements` (src/nova/tests/functional/notification_sample_tests/test_instance.py:L608) | 3/12 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L597–L608` |
| `TestInstanceNotificationSample.test_create_delete_server_with_instance_update` | method | (self) | public | not declared | 1/139 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L610–L790` |
| `TestInstanceNotificationSample._test_power_off_on_server` | method | (self, server) | private | not declared | 1/31 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L792–L824` |
| `TestInstanceNotificationSample._test_shelve_and_shelve_offload_server` | method | (self, server) | private | not declared | 1/40 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L826–L873` |
| `TestInstanceNotificationSample._test_unshelve_server` | method | (self, server) | private | not declared | 1/24 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L875–L905` |
| `TestInstanceNotificationSample._test_suspend_resume_server` | method | (self, server) | private | not declared | 1/34 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L907–L949` |
| `TestInstanceNotificationSample._test_pause_unpause_server` | method | (self, server) | private | not declared | 1/31 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L951–L988` |
| `TestInstanceNotificationSample._build_destination_payload` | method | (self) | private | `{ 'nova_object.version': '1.0', 'nova_object.namespace': 'nova', 'nova_object.name': 'DestinationPayload', 'nova_object.data': { 'aggregates': None, 'cell': { 'nova_object.version': '2.0', 'nova_objec` (src/nova/tests/functional/notification_sample_tests/test_instance.py:L992) | 1/20 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L990–L1009` |
| `TestInstanceNotificationSample._test_resize_and_revert_server` | method | (self, server) | private | not declared | 2/69 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L1011–L1091` |
| `TestInstanceNotificationSample.test_resize_server_error_but_reschedule_was_success` | method | (self, mock_prep_resize) | public | not declared | 1/49 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L1094–L1161` |
| `TestInstanceNotificationSample.test_resize_server_error_but_reschedule_was_success._build_resources` | function | (*args, **kwargs) | private | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L1101–L1102` |
| `TestInstanceNotificationSample.test_resize_server_error_and_reschedule_was_failed` | method | (self, mock_prep_resize) | public | not declared | 1/51 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L1164–L1242` |
| `TestInstanceNotificationSample.test_resize_server_error_and_reschedule_was_failed._build_resources` | function | (*args, **kwargs) | private | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L1174–L1175` |
| `TestInstanceNotificationSample._test_snapshot_server` | method | (self, server) | private | not declared | 1/20 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L1244–L1264` |
| `TestInstanceNotificationSample.test_rebuild_server` | method | (self) | public | not declared | 1/73 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L1266–L1356` |
| `TestInstanceNotificationSample.test_rebuild_server_with_trusted_cert` | method | (self) | public | not declared | 1/74 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L1358–L1449` |
| `TestInstanceNotificationSample.test_rebuild_server_exc` | method | (self, mock_rebuild) | public | not declared | 1/29 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L1453–L1488` |
| `TestInstanceNotificationSample.test_rebuild_server_exc._virtual_interface_create_failed` | function | (*args, **kwargs) | private | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L1454–L1456` |
| `TestInstanceNotificationSample._test_restore_server` | method | (self, server) | private | not declared | 1/21 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L1490–L1512` |
| `TestInstanceNotificationSample._test_reboot_server` | method | (self, server) | private | not declared | 1/19 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L1514–L1533` |
| `TestInstanceNotificationSample._test_reboot_server_error` | method | (self, server, mock_reboot) | private | not declared | 1/25 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L1536–L1563` |
| `TestInstanceNotificationSample._test_reboot_server_error._hard_reboot` | function | (*args, **kwargs) | private | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L1537–L1538` |
| `TestInstanceNotificationSample._detach_volume_from_server` | method | (self, server, volume_id) | private | not declared | 1/3 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L1565–L1567` |
| `TestInstanceNotificationSample._volume_swap_server` | method | (self, server, attachment_id, volume_id) | private | not declared | 1/2 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L1569–L1570` |
| `TestInstanceNotificationSample.test_volume_swap_server` | method | (self) | public | not declared | 1/25 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L1572–L1602` |
| `TestInstanceNotificationSample._do_setup_server_and_error_flag` | method | (self) | private | `server` (src/nova/tests/functional/notification_sample_tests/test_instance.py:L1611) | 1/6 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L1604–L1611` |
| `TestInstanceNotificationSample.test_volume_swap_server_with_error` | method | (self) | public | not declared | 1/44 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L1613–L1676` |
| `TestInstanceNotificationSample.test_resize_confirm_server` | method | (self) | public | not declared | 1/28 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L1678–L1707` |
| `TestInstanceNotificationSample._test_trigger_crash_dump` | method | (self, server) | private | not declared | 1/18 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L1709–L1728` |
| `TestInstanceNotificationSample._test_volume_detach_attach_server` | method | (self, server) | private | not declared | 1/32 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L1730–L1768` |
| `TestInstanceNotificationSample._test_share_attach_detach` | method | (self, server) | private | not declared | 1/147 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L1770–L1931` |
| `TestInstanceNotificationSample._test_share_attach_detach_error` | method | (self, server) | private | not declared | 3/188 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L1933–L2156` |
| `TestInstanceNotificationSample._test_rescue_unrescue_server` | method | (self, server) | private | not declared | 1/42 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L2158–L2208` |
| `TestInstanceNotificationSample._test_soft_delete_server` | method | (self, server) | private | not declared | 1/20 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L2210–L2231` |
| `TestInstanceNotificationSample._test_attach_volume_error` | method | (self, server) | private | not declared | 1/45 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L2233–L2293` |
| `TestInstanceNotificationSample._test_attach_volume_error.attach_volume` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L2234–L2236` |
| `TestInstanceNotificationSample._test_interface_attach_and_detach` | method | (self, server) | private | not declared | 1/43 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L2295–L2339` |
| `TestInstanceNotificationSample._test_interface_attach_error` | method | (self, server, mock_driver) | private | not declared | 1/29 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L2342–L2376` |
| `TestInstanceNotificationSample._test_interface_attach_error._unsuccessful_attach_interface` | function | (*args, **kwargs) | private | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L2343–L2344` |
| `TestInstanceNotificationSample._test_lock_unlock_instance` | method | (self, server) | private | not declared | 1/19 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L2378–L2400` |
| `TestInstanceNotificationSample._test_lock_unlock_instance_with_reason` | method | (self, server) | private | not declared | 1/20 | `src/nova/tests/functional/notification_sample_tests/test_instance.py:L2402–L2425` |

## Dependencies

- `import time` (src/nova/tests/functional/notification_sample_tests/test_instance.py:L13)
- `unittest`: imports `mock` (src/nova/tests/functional/notification_sample_tests/test_instance.py:L14)
- `nova`: imports `exception` (src/nova/tests/functional/notification_sample_tests/test_instance.py:L17)
- `nova.tests`: imports `fixtures` (src/nova/tests/functional/notification_sample_tests/test_instance.py:L18)
- `nova.tests.functional.api`: imports `client` (src/nova/tests/functional/notification_sample_tests/test_instance.py:L19)
- `nova.tests.functional.notification_sample_tests`: imports `notification_sample_base` (src/nova/tests/functional/notification_sample_tests/test_instance.py:L20–L21)
- `nova.volume`: imports `cinder` (src/nova/tests/functional/notification_sample_tests/test_instance.py:L22)
- `oslo_concurrency`: imports `processutils` (src/nova/tests/functional/notification_sample_tests/test_instance.py:L23)

## Security Surface

- **sink** (`db-write`): 'instance-update-tags-action', (src/nova/tests/functional/notification_sample_tests/test_instance.py:L459)
- **sink** (`db-write`): replacements.update(step) (src/nova/tests/functional/notification_sample_tests/test_instance.py:L603)
- **sink** (`db-write`): 'instance-update', (src/nova/tests/functional/notification_sample_tests/test_instance.py:L605)
- **sink** (`db-write`): instance_updates = self._wait_for_notifications('instance.update', 10) (src/nova/tests/functional/notification_sample_tests/test_instance.py:L624)
- **sink** (`db-write`): instance_updates = self._get_notifications('instance.update') (src/nova/tests/functional/notification_sample_tests/test_instance.py:L737)

