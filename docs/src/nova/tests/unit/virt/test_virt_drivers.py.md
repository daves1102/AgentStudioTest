# src/nova/tests/unit/virt/test_virt_drivers.py

## Overview

This file implements the `test_virt_drivers` module, defining 6 classs, 3 constants, 1 field, 7 functions, 95 methods, 31 imports, 4 side effects, 1 security surface entry.

Lines: total 981, code 766, comment 63, blank 152

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/test_virt_drivers.py:L49–L49` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/test_virt_drivers.py:L50–L50` |
| `catch_notimplementederror` | function | (f) | exported | `wrapped_func` (src/nova/tests/unit/virt/test_virt_drivers.py:L71) | 1/4 | `src/nova/tests/unit/virt/test_virt_drivers.py:L53–L71` |
| `catch_notimplementederror.wrapped_func` | function | (self, *args, **kwargs) | public | `f(self, *args, **kwargs)` (src/nova/tests/unit/virt/test_virt_drivers.py:L63) | — | `src/nova/tests/unit/virt/test_virt_drivers.py:L61–L69` |
| `_FakeDriverBackendTestCase` | class | — | unexported | not declared | — | `src/nova/tests/unit/virt/test_virt_drivers.py:L74–L150` |
| `_FakeDriverBackendTestCase._setup_fakelibvirt` | method | (self) | private | not declared | 2/37 | `src/nova/tests/unit/virt/test_virt_drivers.py:L75–L133` |
| `_FakeDriverBackendTestCase._setup_fakelibvirt.fake_wait` | function | — | public | not declared | — | `src/nova/tests/unit/virt/test_virt_drivers.py:L106–L107` |
| `_FakeDriverBackendTestCase._setup_fakelibvirt.fake_detach_device_with_retry` | function | (_self, get_device_conf_func, device, live, *args, **kwargs) | public | `fake_wait` (src/nova/tests/unit/virt/test_virt_drivers.py:L116) | — | `src/nova/tests/unit/virt/test_virt_drivers.py:L109–L116` |
| `_FakeDriverBackendTestCase._teardown_fakelibvirt` | method | (self) | private | not declared | 2/3 | `src/nova/tests/unit/virt/test_virt_drivers.py:L135–L138` |
| `_FakeDriverBackendTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_virt_drivers.py:L140–L146` |
| `_FakeDriverBackendTestCase.tearDown` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_virt_drivers.py:L148–L150` |
| `VirtDriverLoaderTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_virt_drivers.py:L153–L182` |
| `VirtDriverLoaderTestCase.new_drivers` | field | — | public | not declared | — | `src/nova/tests/unit/virt/test_virt_drivers.py:L160–L163` |
| `VirtDriverLoaderTestCase.test_load_new_drivers` | method | (self) | public | not declared | 3/9 | `src/nova/tests/unit/virt/test_virt_drivers.py:L165–L176` |
| `VirtDriverLoaderTestCase.test_fail_to_load_new_drivers` | method | (self, mock_exit) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_virt_drivers.py:L179–L182` |
| `_VirtDriverTestCase` | class | — | unexported | not declared | — | `src/nova/tests/unit/virt/test_virt_drivers.py:L185–L795` |
| `_VirtDriverTestCase.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/test_virt_drivers.py:L186–L201` |
| `_VirtDriverTestCase._get_running_instance` | method | (self, obj=True) | private | `instance_ref, network_info` (src/nova/tests/unit/virt/test_virt_drivers.py:L211) | 1/9 | `src/nova/tests/unit/virt/test_virt_drivers.py:L203–L211` |
| `_VirtDriverTestCase.test_init_host` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/test_virt_drivers.py:L214–L215` |
| `_VirtDriverTestCase.test_list_instances` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/test_virt_drivers.py:L218–L219` |
| `_VirtDriverTestCase.test_list_instance_uuids` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/test_virt_drivers.py:L222–L223` |
| `_VirtDriverTestCase.test_spawn` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_virt_drivers.py:L226–L232` |
| `_VirtDriverTestCase.test_snapshot_not_running` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_virt_drivers.py:L235–L241` |
| `_VirtDriverTestCase.test_snapshot_running` | method | (self) | public | not declared | 4/10 | `src/nova/tests/unit/virt/test_virt_drivers.py:L244–L256` |
| `_VirtDriverTestCase.test_reboot` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_virt_drivers.py:L259–L263` |
| `_VirtDriverTestCase.test_get_host_ip_addr` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_virt_drivers.py:L266–L273` |
| `_VirtDriverTestCase.test_set_admin_password` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_virt_drivers.py:L276–L278` |
| `_VirtDriverTestCase.test_resume_state_on_host_boot` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_virt_drivers.py:L281–L285` |
| `_VirtDriverTestCase.test_rescue` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_virt_drivers.py:L288–L293` |
| `_VirtDriverTestCase.test_unrescue_unrescued_instance` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_virt_drivers.py:L296–L298` |
| `_VirtDriverTestCase.test_unrescue_rescued_instance` | method | (self, mock_unlink) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_virt_drivers.py:L302–L308` |
| `_VirtDriverTestCase.test_poll_rebooting_instances` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_virt_drivers.py:L311–L313` |
| `_VirtDriverTestCase.test_migrate_disk_and_power_off` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_virt_drivers.py:L316–L321` |
| `_VirtDriverTestCase.test_power_off` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_virt_drivers.py:L324–L326` |
| `_VirtDriverTestCase.test_power_on_running` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_virt_drivers.py:L329–L332` |
| `_VirtDriverTestCase.test_power_on_powered_off` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_virt_drivers.py:L335–L338` |
| `_VirtDriverTestCase.test_trigger_crash_dump` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_virt_drivers.py:L341–L343` |
| `_VirtDriverTestCase.test_soft_delete` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_virt_drivers.py:L346–L348` |
| `_VirtDriverTestCase.test_restore_running` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_virt_drivers.py:L351–L353` |
| `_VirtDriverTestCase.test_restore_soft_deleted` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_virt_drivers.py:L356–L359` |
| `_VirtDriverTestCase.test_pause` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_virt_drivers.py:L362–L364` |
| `_VirtDriverTestCase.test_unpause_unpaused_instance` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_virt_drivers.py:L367–L369` |
| `_VirtDriverTestCase.test_unpause_paused_instance` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_virt_drivers.py:L372–L375` |
| `_VirtDriverTestCase.test_suspend` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_virt_drivers.py:L378–L380` |
| `_VirtDriverTestCase.test_resume_unsuspended_instance` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_virt_drivers.py:L383–L385` |
| `_VirtDriverTestCase.test_resume_suspended_instance` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_virt_drivers.py:L388–L391` |
| `_VirtDriverTestCase.test_destroy_instance_nonexistent` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_virt_drivers.py:L394–L397` |
| `_VirtDriverTestCase.test_destroy_instance` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_virt_drivers.py:L400–L406` |
| `_VirtDriverTestCase.test_get_volume_connector` | method | (self) | public | `result` (src/nova/tests/unit/virt/test_virt_drivers.py:L414) | 1/6 | `src/nova/tests/unit/virt/test_virt_drivers.py:L409–L414` |
| `_VirtDriverTestCase.test_get_volume_connector_storage_ip` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/test_virt_drivers.py:L417–L425` |
| `_VirtDriverTestCase.test_attach_detach_volume` | method | (self, _) | public | not declared | 1/15 | `src/nova/tests/unit/virt/test_virt_drivers.py:L430–L444` |
| `_VirtDriverTestCase.test_swap_volume` | method | (self, _) | public | not declared | 1/14 | `src/nova/tests/unit/virt/test_virt_drivers.py:L449–L462` |
| `_VirtDriverTestCase.test_attach_detach_different_power_states` | method | (self, _) | public | not declared | 1/41 | `src/nova/tests/unit/virt/test_virt_drivers.py:L467–L508` |
| `_VirtDriverTestCase.test_get_info` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_virt_drivers.py:L511–L514` |
| `_VirtDriverTestCase.test_get_info_for_unknown_instance` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_virt_drivers.py:L517–L521` |
| `_VirtDriverTestCase.test_get_diagnostics` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_virt_drivers.py:L524–L526` |
| `_VirtDriverTestCase.test_get_instance_diagnostics` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_virt_drivers.py:L529–L532` |
| `_VirtDriverTestCase.test_block_stats` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_virt_drivers.py:L535–L538` |
| `_VirtDriverTestCase.test_get_console_output` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_virt_drivers.py:L541–L545` |
| `_VirtDriverTestCase.test_get_vnc_console` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_virt_drivers.py:L548–L551` |
| `_VirtDriverTestCase.test_get_spice_console` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_virt_drivers.py:L554–L558` |
| `_VirtDriverTestCase.test_get_serial_console` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_virt_drivers.py:L561–L566` |
| `_VirtDriverTestCase.test_get_mks_console` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_virt_drivers.py:L569–L573` |
| `_VirtDriverTestCase.test_live_migration` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/test_virt_drivers.py:L579–L589` |
| `_VirtDriverTestCase.test_live_migration_force_complete` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_virt_drivers.py:L592–L595` |
| `_VirtDriverTestCase.test_live_migration_abort` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_virt_drivers.py:L598–L600` |
| `_VirtDriverTestCase._check_available_resource_fields` | method | (self, host_status) | private | not declared | 2/8 | `src/nova/tests/unit/virt/test_virt_drivers.py:L603–L610` |
| `_VirtDriverTestCase.test_get_available_resource` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_virt_drivers.py:L613–L618` |
| `_VirtDriverTestCase.test_get_available_nodes` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/test_virt_drivers.py:L621–L622` |
| `_VirtDriverTestCase._check_host_cpu_status_fields` | method | (self, host_cpu_status) | private | not declared | 1/6 | `src/nova/tests/unit/virt/test_virt_drivers.py:L625–L630` |
| `_VirtDriverTestCase.test_get_host_cpu_stats` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_virt_drivers.py:L633–L635` |
| `_VirtDriverTestCase.test_set_host_enabled` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/test_virt_drivers.py:L638–L639` |
| `_VirtDriverTestCase.test_get_host_uptime` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/test_virt_drivers.py:L642–L643` |
| `_VirtDriverTestCase.test_host_power_action_reboot` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/test_virt_drivers.py:L646–L647` |
| `_VirtDriverTestCase.test_host_power_action_shutdown` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/test_virt_drivers.py:L650–L651` |
| `_VirtDriverTestCase.test_host_power_action_startup` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/test_virt_drivers.py:L654–L655` |
| `_VirtDriverTestCase.test_events` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/virt/test_virt_drivers.py:L657–L688` |
| `_VirtDriverTestCase.test_events.handler` | function | (event) | public | not declared | — | `src/nova/tests/unit/virt/test_virt_drivers.py:L660–L661` |
| `_VirtDriverTestCase.test_event_bad_object` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/test_virt_drivers.py:L690–L705` |
| `_VirtDriverTestCase.test_event_bad_object.handler` | function | (event) | public | not declared | — | `src/nova/tests/unit/virt/test_virt_drivers.py:L694–L695` |
| `_VirtDriverTestCase.test_event_bad_callback` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_virt_drivers.py:L707–L721` |
| `_VirtDriverTestCase.test_event_bad_callback.handler` | function | (event) | public | not declared | — | `src/nova/tests/unit/virt/test_virt_drivers.py:L712–L713` |
| `_VirtDriverTestCase.test_emit_unicode_event` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/test_virt_drivers.py:L723–L733` |
| `_VirtDriverTestCase.test_get_instance_disk_info` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_virt_drivers.py:L736–L740` |
| `_VirtDriverTestCase.test_get_device_name_for_instance` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_virt_drivers.py:L743–L746` |
| `_VirtDriverTestCase.test_network_binding_host_id` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_virt_drivers.py:L748–L754` |
| `_VirtDriverTestCase.test_get_allocation_ratio` | method | (self) | public | not declared | 1/35 | `src/nova/tests/unit/virt/test_virt_drivers.py:L756–L795` |
| `AbstractDriverTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_virt_drivers.py:L798–L812` |
| `AbstractDriverTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_virt_drivers.py:L799–L801` |
| `AbstractDriverTestCase.test_live_migration` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_virt_drivers.py:L803–L805` |
| `AbstractDriverTestCase.test_post_claim_migrate_data` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_virt_drivers.py:L807–L812` |
| `FakeConnectionTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_virt_drivers.py:L815–L832` |
| `FakeConnectionTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_virt_drivers.py:L816–L819` |
| `FakeConnectionTestCase._check_available_resource_fields` | method | (self, host_status) | private | not declared | 3/10 | `src/nova/tests/unit/virt/test_virt_drivers.py:L821–L832` |
| `LibvirtConnTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_virt_drivers.py:L835–L981` |
| `LibvirtConnTestCase.REQUIRES_LOCKING` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/test_virt_drivers.py:L837–L837` |
| `LibvirtConnTestCase.setUp` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/test_virt_drivers.py:L839–L857` |
| `LibvirtConnTestCase.test_init_host_image_type_rbd_force_raw_images_true` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/test_virt_drivers.py:L859–L862` |
| `LibvirtConnTestCase.test_init_host_image_type_non_rbd` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_virt_drivers.py:L864–L866` |
| `LibvirtConnTestCase.test_init_host_raise_invalid_configuration` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_virt_drivers.py:L868–L872` |
| `LibvirtConnTestCase.test_unrescue_unrescued_instance` | method | (self, mock_load_file, mock_unlink) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_virt_drivers.py:L876–L885` |
| `LibvirtConnTestCase.test_force_hard_reboot` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_virt_drivers.py:L887–L889` |
| `LibvirtConnTestCase.test_migrate_disk_and_power_off` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/test_virt_drivers.py:L891–L894` |
| `LibvirtConnTestCase.test_internal_set_host_enabled` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/test_virt_drivers.py:L896–L906` |
| `LibvirtConnTestCase.test_set_host_enabled_when_auto_disabled` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/test_virt_drivers.py:L908–L918` |
| `LibvirtConnTestCase.test_set_host_enabled_when_manually_disabled` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/test_virt_drivers.py:L920–L930` |
| `LibvirtConnTestCase.test_set_host_enabled_dont_override_manually_disabled` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/test_virt_drivers.py:L932–L942` |
| `LibvirtConnTestCase.test_unplug_vifs_with_destroy_vifs_false` | method | (self, unplug_vifs_mock) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_virt_drivers.py:L946–L950` |
| `LibvirtConnTestCase.test_unplug_vifs_with_destroy_vifs_true` | method | (self, unplug_vifs_mock) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_virt_drivers.py:L954–L960` |
| `LibvirtConnTestCase.test_get_device_name_for_instance` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/test_virt_drivers.py:L962–L963` |
| `LibvirtConnTestCase.test_set_admin_password` | method | (self, ver, mock_image) | public | not declared | 1/6 | `src/nova/tests/unit/virt/test_virt_drivers.py:L968–L973` |
| `LibvirtConnTestCase.test_get_volume_connector` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/virt/test_virt_drivers.py:L975–L981` |

## Dependencies

- `collections`: imports `deque` (src/nova/tests/unit/virt/test_virt_drivers.py:L15)
- `import functools` (src/nova/tests/unit/virt/test_virt_drivers.py:L16)
- `import sys` (src/nova/tests/unit/virt/test_virt_drivers.py:L17)
- `import traceback` (src/nova/tests/unit/virt/test_virt_drivers.py:L18)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/test_virt_drivers.py:L19)
- `import fixtures` (src/nova/tests/unit/virt/test_virt_drivers.py:L21)
- `import netaddr` (src/nova/tests/unit/virt/test_virt_drivers.py:L22)
- `import os_resource_classes as orc` (src/nova/tests/unit/virt/test_virt_drivers.py:L23)
- `import os_vif` (src/nova/tests/unit/virt/test_virt_drivers.py:L24)
- `oslo_concurrency`: imports `processutils` (src/nova/tests/unit/virt/test_virt_drivers.py:L25)
- `oslo_log`: imports `log as logging` (src/nova/tests/unit/virt/test_virt_drivers.py:L26)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/virt/test_virt_drivers.py:L27)
- `oslo_utils`: imports `importutils` (src/nova/tests/unit/virt/test_virt_drivers.py:L28)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/virt/test_virt_drivers.py:L29)
- `nova.compute`: imports `manager` (src/nova/tests/unit/virt/test_virt_drivers.py:L31)
- `nova`: imports `conf` (src/nova/tests/unit/virt/test_virt_drivers.py:L32)
- `nova.console`: imports `type as ctype` (src/nova/tests/unit/virt/test_virt_drivers.py:L33)
- `nova`: imports `context` (src/nova/tests/unit/virt/test_virt_drivers.py:L34)
- `nova`: imports `exception` (src/nova/tests/unit/virt/test_virt_drivers.py:L35)
- `nova`: imports `objects` (src/nova/tests/unit/virt/test_virt_drivers.py:L36)
- `nova`: imports `test` (src/nova/tests/unit/virt/test_virt_drivers.py:L37)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/virt/test_virt_drivers.py:L38)
- `nova.tests.fixtures`: imports `libvirt as fakelibvirt` (src/nova/tests/unit/virt/test_virt_drivers.py:L39)
- `nova.tests.unit`: imports `fake_block_device` (src/nova/tests/unit/virt/test_virt_drivers.py:L40)
- `nova.tests.unit`: imports `utils as test_utils` (src/nova/tests/unit/virt/test_virt_drivers.py:L41)
- `nova.virt`: imports `block_device as driver_block_device` (src/nova/tests/unit/virt/test_virt_drivers.py:L42)
- `nova.virt`: imports `event as virtevent` (src/nova/tests/unit/virt/test_virt_drivers.py:L43)
- `nova.virt`: imports `fake` (src/nova/tests/unit/virt/test_virt_drivers.py:L44)
- `nova.virt`: imports `hardware` (src/nova/tests/unit/virt/test_virt_drivers.py:L45)
- `nova.virt`: imports `libvirt` (src/nova/tests/unit/virt/test_virt_drivers.py:L46)
- `nova.virt.libvirt`: imports `imagebackend` (src/nova/tests/unit/virt/test_virt_drivers.py:L47)

## Side Effects

- **process-spawn**: self.stub_out('nova.privsep.path.chown', lambda *a, **k: None) (src/nova/tests/unit/virt/test_virt_drivers.py:L857)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/unit/virt/test_virt_drivers.py:L49)
- **global-mutation**: CONF = conf.CONF (src/nova/tests/unit/virt/test_virt_drivers.py:L50)
- **global-mutation**: REQUIRES_LOCKING = True (src/nova/tests/unit/virt/test_virt_drivers.py:L837)

## Security Surface

- **privilege** (`privsep-entrypoint`): self.stub_out('nova.privsep.path.chown', lambda *a, **k: None) (src/nova/tests/unit/virt/test_virt_drivers.py:L857)

