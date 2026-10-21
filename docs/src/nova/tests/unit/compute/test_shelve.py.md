# src/nova/tests/unit/compute/test_shelve.py

## Overview

This file implements the `test_shelve` module, defining 2 classs, 1 constant, 14 functions, 65 methods, 20 imports, 5 side effects.

Lines: total 1734, code 1381, comment 120, blank 233

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/compute/test_shelve.py:L37–L37` |
| `_fake_resources` | function | — | unexported | `objects.ComputeNode(**resources)` (src/nova/tests/unit/compute/test_shelve.py:L51) | 1/12 | `src/nova/tests/unit/compute/test_shelve.py:L40–L51` |
| `ShelveComputeManagerTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_shelve.py:L54–L839` |
| `ShelveComputeManagerTestCase._shelve_instance` | method | (self, shelved_offload_time, mock_notify, mock_notify_instance_usage, mock_get_power_state, mock_snapshot, mock_power_off, mock_terminate, mock_get_bdms, clean_shutdown=True, guest_power_state=power_state.RUNNING, accel_uuids=None) | private | not declared | 6/67 | `src/nova/tests/unit/compute/test_shelve.py:L64–L174` |
| `ShelveComputeManagerTestCase._shelve_instance.check_save` | function | (expected_task_state=None) | public | not declared | — | `src/nova/tests/unit/compute/test_shelve.py:L89–L122` |
| `ShelveComputeManagerTestCase.test_shelve` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_shelve.py:L176–L177` |
| `ShelveComputeManagerTestCase.test_shelve_forced_shutdown` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_shelve.py:L179–L180` |
| `ShelveComputeManagerTestCase.test_shelve_and_offload` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_shelve.py:L182–L183` |
| `ShelveComputeManagerTestCase.test_shelve_paused_instance` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_shelve.py:L185–L186` |
| `ShelveComputeManagerTestCase.test_shelve_and_offload_with_accel_uuids` | method | (self, mock_del_arqs) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_shelve.py:L190–L192` |
| `ShelveComputeManagerTestCase.test_shelve_and_with_accel_uuids` | method | (self, mock_del_arqs) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_shelve.py:L196–L198` |
| `ShelveComputeManagerTestCase.test_shelve_offload` | method | (self, mock_power_off) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_shelve.py:L201–L204` |
| `ShelveComputeManagerTestCase.test_shelve_offload_forced_shutdown` | method | (self, mock_power_off) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_shelve.py:L207–L209` |
| `ShelveComputeManagerTestCase._shelve_offload` | method | (self, mock_notify, mock_notify_instance_usage, mock_get_power_state, mock_update_resource_tracker, mock_delete_alloc, mock_terminate, mock_get_bdms, mock_event, mock_unbind_ports, clean_shutdown=True) | private | `instance` (src/nova/tests/unit/compute/test_shelve.py:L284) | 1/43 | `src/nova/tests/unit/compute/test_shelve.py:L225–L284` |
| `ShelveComputeManagerTestCase._shelve_offload.stub_instance_save` | function | (inst, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_shelve.py:L237–L243` |
| `ShelveComputeManagerTestCase.test_unshelve` | method | (self, mock_setup_network, mock_get_power_state, mock_spawn, mock_prep_block_device, mock_notify_instance_usage, mock_notify_instance_action, mock_get_bdms, accel_uuids=None, instance=None) | public | not declared | 2/74 | `src/nova/tests/unit/compute/test_shelve.py:L299–L405` |
| `ShelveComputeManagerTestCase.test_unshelve.fake_delete` | function | (self2, ctxt, image_id) | public | not declared | — | `src/nova/tests/unit/compute/test_shelve.py:L327–L328` |
| `ShelveComputeManagerTestCase.test_unshelve.fake_claim` | function | (context, instance, node, allocations, limits) | public | `claims.Claim(context, instance, test_compute.NODENAME, self.rt, _fake_resources(), requests)` (src/nova/tests/unit/compute/test_shelve.py:L333) | — | `src/nova/tests/unit/compute/test_shelve.py:L330–L335` |
| `ShelveComputeManagerTestCase.test_unshelve.check_save` | function | (expected_task_state=None) | public | not declared | — | `src/nova/tests/unit/compute/test_shelve.py:L342–L354` |
| `ShelveComputeManagerTestCase.test_unshelve_with_arqs` | method | (self, mock_get_arqs) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_shelve.py:L409–L411` |
| `ShelveComputeManagerTestCase.test_unshelve_with_arqs_failes_cleanup_resources` | method | (self, mock_get_arqs, mock_cleanup_resources, mock_bdms, mock_nil) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_shelve.py:L421–L435` |
| `ShelveComputeManagerTestCase.test_unshelve_with_arqs_failes_cleanup_resources_timeout` | method | (self, mock_get_arqs, mock_cleanup_resources, mock_bdms, mock_nil) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_shelve.py:L445–L456` |
| `ShelveComputeManagerTestCase.test_unshelve_volume_backed` | method | (self, mock_image_meta, mock_notify_instance_usage, mock_prep_block_device, mock_spawn, mock_get_power_state, mock_setup_network, mock_instance_claim, mock_notify_instance_action, mock_get_bdms) | public | not declared | 1/50 | `src/nova/tests/unit/compute/test_shelve.py:L471–L546` |
| `ShelveComputeManagerTestCase.test_unshelve_volume_backed.fake_claim` | function | (context, instance, node, allocations, limits) | public | `claims.Claim(context, instance, test_compute.NODENAME, self.rt, _fake_resources(), requests)` (src/nova/tests/unit/compute/test_shelve.py:L494) | — | `src/nova/tests/unit/compute/test_shelve.py:L491–L496` |
| `ShelveComputeManagerTestCase.test_unshelve_volume_backed.check_save` | function | (expected_task_state=None) | public | not declared | — | `src/nova/tests/unit/compute/test_shelve.py:L499–L512` |
| `ShelveComputeManagerTestCase.test_unshelve_spawn_fails_cleanup_volume_connections` | method | (self, mock_terminate_volume_connections, mock_image_meta, mock_notify_instance_usage, mock_prep_block_device, mock_spawn, mock_setup_network, mock_instance_claim, mock_notify_instance_action, mock_get_bdms) | public | not declared | 1/48 | `src/nova/tests/unit/compute/test_shelve.py:L562–L629` |
| `ShelveComputeManagerTestCase.test_unshelve_spawn_fails_cleanup_volume_connections.fake_claim` | function | (context, instance, node, allocations, limits) | public | `claims.Claim(context, instance, node, self.rt, _fake_resources(), requests, limits=limits)` (src/nova/tests/unit/compute/test_shelve.py:L588) | — | `src/nova/tests/unit/compute/test_shelve.py:L584–L590` |
| `ShelveComputeManagerTestCase.test_unshelve_spawn_fails_cleanup_volume_connections.check_save` | function | (expected_task_state=None) | public | not declared | — | `src/nova/tests/unit/compute/test_shelve.py:L593–L597` |
| `ShelveComputeManagerTestCase.test_unshelve_with_resource_request` | method | (self, mock_update_pci, mock_setup_network) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_shelve.py:L634–L652` |
| `ShelveComputeManagerTestCase.test_unshelve_with_resource_request_update_raises` | method | (self, mock_update_pci) | public | not declared | 1/20 | `src/nova/tests/unit/compute/test_shelve.py:L658–L679` |
| `ShelveComputeManagerTestCase.test_unshelve_spawn_fails_cleanup_instance_image_ref` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_shelve.py:L681–L699` |
| `ShelveComputeManagerTestCase.test_shelved_poll_none_offloaded` | method | (self, mock_get_by_filters) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_shelve.py:L702–L706` |
| `ShelveComputeManagerTestCase.test_shelved_poll_none_exist` | method | (self, mock_older) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_shelve.py:L709–L715` |
| `ShelveComputeManagerTestCase.test_shelved_poll_not_timedout` | method | (self, mock_older) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_shelve.py:L718–L735` |
| `ShelveComputeManagerTestCase.test_shelved_poll_timedout` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_shelve.py:L737–L759` |
| `ShelveComputeManagerTestCase.test_shelved_poll_timedout.fake_soi` | function | (context, instance, accel_uuids, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_shelve.py:L752–L753` |
| `ShelveComputeManagerTestCase.test_shelved_poll_filters_task_state` | method | (self, mock_parse, mock_older) | public | not declared | 1/22 | `src/nova/tests/unit/compute/test_shelve.py:L763–L788` |
| `ShelveComputeManagerTestCase.test_shelved_poll_filters_task_state.fake_soi` | function | (context, instance, accel_uuids, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_shelve.py:L781–L782` |
| `ShelveComputeManagerTestCase.test_shelved_poll_with_accel_uuids` | method | (self, mock_parse, mock_older, mock_get_arq_uuids) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_shelve.py:L794–L816` |
| `ShelveComputeManagerTestCase.test_shelved_poll_with_accel_uuids.fake_soi` | function | (context, instance, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_shelve.py:L809–L810` |
| `ShelveComputeManagerTestCase.test_shelved_poll_checks_task_state_on_save` | method | (self, mock_parse, mock_older) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_shelve.py:L820–L839` |
| `ShelveComputeManagerTestCase.test_shelved_poll_checks_task_state_on_save.fake_parse_hook` | function | (timestring) | public | not declared | — | `src/nova/tests/unit/compute/test_shelve.py:L831–L833` |
| `ShelveComputeAPITestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_shelve.py:L842–L1734` |
| `ShelveComputeAPITestCase._get_vm_states` | method | (self, exclude_states=None) | private | `vm_state - exclude_states` (src/nova/tests/unit/compute/test_shelve.py:L851) | 2/9 | `src/nova/tests/unit/compute/test_shelve.py:L843–L851` |
| `ShelveComputeAPITestCase._create_host_inside_az` | method | (self, ctxt, host, az, mock_az, mock_aggregate) | private | not declared | 1/25 | `src/nova/tests/unit/compute/test_shelve.py:L856–L884` |
| `ShelveComputeAPITestCase._create_request_spec_for_initial_az` | method | (self, az) | private | `fake_spec` (src/nova/tests/unit/compute/test_shelve.py:L889) | 1/4 | `src/nova/tests/unit/compute/test_shelve.py:L886–L889` |
| `ShelveComputeAPITestCase._assert_unshelving_and_request_spec_az_and_host` | method | (self, context, instance, fake_spec, fake_zone, fake_host, mock_get_by_instance_uuid, mock_unshelve) | private | not declared | 2/17 | `src/nova/tests/unit/compute/test_shelve.py:L891–L909` |
| `ShelveComputeAPITestCase._test_shelve` | method | (self, vm_state=vm_states.ACTIVE, boot_from_volume=False, clean_shutdown=True) | private | not declared | 2/39 | `src/nova/tests/unit/compute/test_shelve.py:L911–L956` |
| `ShelveComputeAPITestCase.test_shelve` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_shelve.py:L958–L959` |
| `ShelveComputeAPITestCase.test_shelves_stopped` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_shelve.py:L961–L962` |
| `ShelveComputeAPITestCase.test_shelves_paused` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_shelve.py:L964–L965` |
| `ShelveComputeAPITestCase.test_shelves_suspended` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_shelve.py:L967–L968` |
| `ShelveComputeAPITestCase.test_shelves_boot_from_volume` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_shelve.py:L970–L971` |
| `ShelveComputeAPITestCase.test_shelve_forced_shutdown` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_shelve.py:L973–L974` |
| `ShelveComputeAPITestCase.test_shelve_boot_from_volume_forced_shutdown` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_shelve.py:L976–L978` |
| `ShelveComputeAPITestCase._test_shelve_invalid_state` | method | (self, vm_state) | private | not declared | 1/6 | `src/nova/tests/unit/compute/test_shelve.py:L980–L985` |
| `ShelveComputeAPITestCase.test_shelve_fails_invalid_states` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/compute/test_shelve.py:L987–L993` |
| `ShelveComputeAPITestCase._test_shelve_offload` | method | (self, clean_shutdown=True) | private | not declared | 1/21 | `src/nova/tests/unit/compute/test_shelve.py:L995–L1016` |
| `ShelveComputeAPITestCase.test_shelve_offload` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_shelve.py:L1018–L1019` |
| `ShelveComputeAPITestCase.test_shelve_offload_forced_shutdown` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_shelve.py:L1021–L1022` |
| `ShelveComputeAPITestCase._test_shelve_offload_invalid_state` | method | (self, vm_state) | private | not declared | 1/6 | `src/nova/tests/unit/compute/test_shelve.py:L1024–L1029` |
| `ShelveComputeAPITestCase.test_shelve_offload_fails_invalid_states` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/compute/test_shelve.py:L1031–L1034` |
| `ShelveComputeAPITestCase._get_specify_state_instance` | method | (self, vm_state) | private | `instance` (src/nova/tests/unit/compute/test_shelve.py:L1048) | 1/8 | `src/nova/tests/unit/compute/test_shelve.py:L1036–L1048` |
| `ShelveComputeAPITestCase.test_unshelve` | method | (self, get_by_instance_uuid, fake_save) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_shelve.py:L1052–L1068` |
| `ShelveComputeAPITestCase.test_specified_az_ushelve_invalid_request` | method | (self, get_by_instance_uuid, mock_save, mock_availability_zones) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_shelve.py:L1074–L1091` |
| `ShelveComputeAPITestCase.test_specified_az_unshelve_invalid_state` | method | (self, get_by_instance_uuid, mock_save, mock_availability_zones) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_shelve.py:L1097–L1110` |
| `ShelveComputeAPITestCase.test_unshelve_offloaded_with_extended_resource_request_old_compute` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_shelve.py:L1120–L1129` |
| `ShelveComputeAPITestCase.test_validate_unshelve_az_cross_az_attach_true` | method | (self, mock_get_azs, mock_get_bdms) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_shelve.py:L1134–L1148` |
| `ShelveComputeAPITestCase.test_validate_unshelve_az_cross_az_attach_false` | method | (self, mock_get_azs, mock_get_bdms, mock_get) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_shelve.py:L1153–L1178` |
| `ShelveComputeAPITestCase.test_unshelve_without_az` | method | (self, mock_get_by_instance_uuid, mock_get_all_by_host, mock_save, mock_unshelve) | public | not declared | 1/25 | `src/nova/tests/unit/compute/test_shelve.py:L1231–L1260` |
| `ShelveComputeAPITestCase.test_unshelve_without_az_to_host` | method | (self, mock_get_by_instance_uuid, mock_get_all_by_host, mock_save, mock_unshelve) | public | not declared | 1/25 | `src/nova/tests/unit/compute/test_shelve.py:L1270–L1299` |
| `ShelveComputeAPITestCase.test_unshelve_without_az_to_newaz` | method | (self, mock_get_by_instance_uuid, mock_get_all_by_host, mock_save, mock_unshelve) | public | not declared | 1/25 | `src/nova/tests/unit/compute/test_shelve.py:L1309–L1338` |
| `ShelveComputeAPITestCase.test_unshelve_without_az_to_newaz_and_host` | method | (self, mock_get_by_instance_uuid, mock_get_all_by_host, mock_save, mock_unshelve) | public | not declared | 1/27 | `src/nova/tests/unit/compute/test_shelve.py:L1349–L1380` |
| `ShelveComputeAPITestCase.test_unshelve_without_az_to_newaz_and_host_invalid` | method | (self, mock_get_by_instance_uuid, mock_get_all_by_host, mock_save, mock_unshelve) | public | not declared | 1/27 | `src/nova/tests/unit/compute/test_shelve.py:L1386–L1417` |
| `ShelveComputeAPITestCase.test_unshelve_with_az` | method | (self, mock_get_by_instance_uuid, mock_get_all_by_host, mock_save, mock_unshelve) | public | not declared | 1/25 | `src/nova/tests/unit/compute/test_shelve.py:L1427–L1456` |
| `ShelveComputeAPITestCase.test_unshelve_with_az_to_unpin_az` | method | (self, mock_get_by_instance_uuid, mock_get_all_by_host, mock_save, mock_unshelve) | public | not declared | 1/25 | `src/nova/tests/unit/compute/test_shelve.py:L1466–L1495` |
| `ShelveComputeAPITestCase.test_unshelve_with_az_to_host_in_az` | method | (self, mock_get_by_instance_uuid, mock_get_all_by_host, mock_save, mock_unshelve) | public | not declared | 1/25 | `src/nova/tests/unit/compute/test_shelve.py:L1507–L1536` |
| `ShelveComputeAPITestCase.test_unshelve_with_az_to_invalid_host` | method | (self, mock_get_by_instance_uuid, mock_get_all_by_host, mock_save, mock_unshelve) | public | not declared | 1/26 | `src/nova/tests/unit/compute/test_shelve.py:L1542–L1572` |
| `ShelveComputeAPITestCase.test_unshelve_with_az_to_host_unpin_az` | method | (self, mock_get_by_instance_uuid, mock_get_all_by_host, mock_save, mock_unshelve) | public | not declared | 1/27 | `src/nova/tests/unit/compute/test_shelve.py:L1582–L1613` |
| `ShelveComputeAPITestCase.test_unshelve_with_az_to_newaz` | method | (self, mock_get_by_instance_uuid, mock_get_all_by_host, mock_save, mock_unshelve) | public | not declared | 1/27 | `src/nova/tests/unit/compute/test_shelve.py:L1623–L1654` |
| `ShelveComputeAPITestCase.test_unshelve_with_az_to_newaz_and_host` | method | (self, mock_get_by_instance_uuid, mock_get_all_by_host, mock_save, mock_unshelve) | public | not declared | 1/27 | `src/nova/tests/unit/compute/test_shelve.py:L1666–L1697` |
| `ShelveComputeAPITestCase.test_unshelve_with_az_to_newaz_and_invalid_host` | method | (self, mock_get_by_instance_uuid, mock_get_all_by_host, mock_save, mock_unshelve) | public | not declared | 1/27 | `src/nova/tests/unit/compute/test_shelve.py:L1703–L1734` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/compute/test_shelve.py:L13)
- `oslo_utils`: imports `fixture as utils_fixture` (src/nova/tests/unit/compute/test_shelve.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/compute/test_shelve.py:L16)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/compute/test_shelve.py:L17)
- `nova.compute`: imports `api as compute_api` (src/nova/tests/unit/compute/test_shelve.py:L19)
- `nova.compute`: imports `claims` (src/nova/tests/unit/compute/test_shelve.py:L20)
- `nova.compute`: imports `instance_actions` (src/nova/tests/unit/compute/test_shelve.py:L21)
- `nova.compute`: imports `power_state` (src/nova/tests/unit/compute/test_shelve.py:L22)
- `nova.compute`: imports `task_states` (src/nova/tests/unit/compute/test_shelve.py:L23)
- `nova.compute`: imports `utils as compute_utils` (src/nova/tests/unit/compute/test_shelve.py:L24)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/compute/test_shelve.py:L25)
- `import nova.conf` (src/nova/tests/unit/compute/test_shelve.py:L26)
- `nova`: imports `context` (src/nova/tests/unit/compute/test_shelve.py:L27)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/compute/test_shelve.py:L28)
- `nova`: imports `exception` (src/nova/tests/unit/compute/test_shelve.py:L29)
- `nova.network`: imports `neutron as neutron_api` (src/nova/tests/unit/compute/test_shelve.py:L30)
- `nova`: imports `objects` (src/nova/tests/unit/compute/test_shelve.py:L31)
- `nova`: imports `test` (src/nova/tests/unit/compute/test_shelve.py:L32)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/compute/test_shelve.py:L33)
- `nova.tests.unit.compute`: imports `test_compute` (src/nova/tests/unit/compute/test_shelve.py:L34)

## Side Effects

- **network**: def _shelve_instance(self, shelved_offload_time, mock_notify, (src/nova/tests/unit/compute/test_shelve.py:L64)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_shelve.py:L135)
- **network**: def _shelve_offload(self, mock_notify, mock_notify_instance_usage, (src/nova/tests/unit/compute/test_shelve.py:L225)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_shelve.py:L249)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/compute/test_shelve.py:L37)

## Notes

- KB `sideEffects` entries at L64, L225 have targets that appear to be code fragments rather than resource paths; documented as recorded.

