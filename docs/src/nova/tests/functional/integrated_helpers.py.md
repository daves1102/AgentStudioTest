# src/nova/tests/functional/integrated_helpers.py

## Overview

This file implements the `integrated_helpers` module, defining 6 classs, 8 constants, 5 fields, 4 functions, 101 methods, 1 property, 26 imports, 8 side effects, 8 security surface entries.

Lines: total 1544, code 1128, comment 165, blank 251

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/integrated_helpers.py:L49–L49` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/functional/integrated_helpers.py:L50–L50` |
| `generate_random_alphanumeric` | function | (length) | exported | `''.join(random.choice(string.ascii_uppercase + string.digits) for _x in range(length))` (src/nova/tests/functional/integrated_helpers.py:L55) | 2/3 | `src/nova/tests/functional/integrated_helpers.py:L53–L56` |
| `generate_random_numeric` | function | (length) | exported | `''.join(random.choice(string.digits) for _x in range(length))` (src/nova/tests/functional/integrated_helpers.py:L61) | 2/3 | `src/nova/tests/functional/integrated_helpers.py:L59–L62` |
| `generate_new_element` | function | (items, prefix, numeric=False) | exported | `candidate` (src/nova/tests/functional/integrated_helpers.py:L73) | 4/9 | `src/nova/tests/functional/integrated_helpers.py:L65–L74` |
| `StubComputeRPCAPI` | class | — | exported | not declared | — | `src/nova/tests/functional/integrated_helpers.py:L77–L94` |
| `StubComputeRPCAPI.__init__` | method | (self, version) | public | not declared | 1/2 | `src/nova/tests/functional/integrated_helpers.py:L83–L84` |
| `StubComputeRPCAPI.router` | method | (self) | public | `rpc.ClientRouter(default_client)` (src/nova/tests/functional/integrated_helpers.py:L94) | 1/8 | `src/nova/tests/functional/integrated_helpers.py:L87–L94` |
| `NOT_SPECIFIED` | constant | — | exported | not declared | — | `src/nova/tests/functional/integrated_helpers.py:L100–L100` |
| `InstanceHelperMixin` | class | — | exported | not declared | — | `src/nova/tests/functional/integrated_helpers.py:L103–L834` |
| `InstanceHelperMixin._wait_for_service_parameter` | method | (self, service_hostname, service_binary, expected_params, max_retries=10, api=None) | private | not declared | 6/19 | `src/nova/tests/functional/integrated_helpers.py:L105–L124` |
| `InstanceHelperMixin._wait_for_server_parameter` | method | (self, server, expected_params, max_retries=10, api=None, wait_for_fault_key=True) | private | `server` (src/nova/tests/functional/integrated_helpers.py:L160) | 10/23 | `src/nova/tests/functional/integrated_helpers.py:L126–L160` |
| `InstanceHelperMixin._wait_for_state_change` | method | (self, server, expected_status, max_retries=10, wait_for_fault_key=True) | private | `self._wait_for_server_parameter( server, {'status': expected_status}, max_retries, wait_for_fault_key=wait_for_fault_key)` (src/nova/tests/functional/integrated_helpers.py:L166) | 1/7 | `src/nova/tests/functional/integrated_helpers.py:L162–L168` |
| `InstanceHelperMixin._wait_until_deleted` | method | (self, server) | private | `` (src/nova/tests/functional/integrated_helpers.py:L182) | 5/12 | `src/nova/tests/functional/integrated_helpers.py:L170–L182` |
| `InstanceHelperMixin._wait_for_action_fail_completion` | method | (self, server, expected_action, event_name) | private | `self._wait_for_instance_action_event( server, expected_action, event_name, event_result='error')` (src/nova/tests/functional/integrated_helpers.py:L190) | 1/4 | `src/nova/tests/functional/integrated_helpers.py:L184–L191` |
| `InstanceHelperMixin._wait_for_instance_action_event` | method | (self, server, action_name, event_name, event_result) | private | `event` (src/nova/tests/functional/integrated_helpers.py:L218) | 8/23 | `src/nova/tests/functional/integrated_helpers.py:L193–L226` |
| `InstanceHelperMixin._wait_for_volume_attach` | method | (self, server_id, volume_id) | private | `` (src/nova/tests/functional/integrated_helpers.py:L233) | 3/13 | `src/nova/tests/functional/integrated_helpers.py:L228–L241` |
| `InstanceHelperMixin._wait_for_volume_detach` | method | (self, server_id, volume_id) | private | `` (src/nova/tests/functional/integrated_helpers.py:L252) | 3/13 | `src/nova/tests/functional/integrated_helpers.py:L243–L257` |
| `InstanceHelperMixin._assert_resize_migrate_action_fail` | method | (self, server, action, error_in_tb) | private | `event` (src/nova/tests/functional/integrated_helpers.py:L271) | 1/5 | `src/nova/tests/functional/integrated_helpers.py:L259–L271` |
| `InstanceHelperMixin._assert_build_request_success` | method | (self, server_request) | private | `server['id']` (src/nova/tests/functional/integrated_helpers.py:L276) | 1/4 | `src/nova/tests/functional/integrated_helpers.py:L273–L276` |
| `InstanceHelperMixin._assert_build_request_schedule_failure` | method | (self, server_request) | private | not declared | 1/3 | `src/nova/tests/functional/integrated_helpers.py:L278–L280` |
| `InstanceHelperMixin._assert_bad_build_request_error` | method | (self, server_request) | private | not declared | 1/5 | `src/nova/tests/functional/integrated_helpers.py:L282–L286` |
| `InstanceHelperMixin._assert_build_request_error` | method | (self, server_request) | private | not declared | 1/5 | `src/nova/tests/functional/integrated_helpers.py:L288–L292` |
| `InstanceHelperMixin._wait_for_migration_status` | method | (self, server, expected_statuses) | private | `migration` (src/nova/tests/functional/integrated_helpers.py:L310) | 6/17 | `src/nova/tests/functional/integrated_helpers.py:L294–L317` |
| `InstanceHelperMixin._wait_for_log` | method | (self, log_line_regex) | private | `` (src/nova/tests/functional/integrated_helpers.py:L322) | 3/6 | `src/nova/tests/functional/integrated_helpers.py:L319–L325` |
| `InstanceHelperMixin._wait_for_assert` | method | (self, assert_func, max_retries=10, sleep=0.5) | private | `assert_func()` (src/nova/tests/functional/integrated_helpers.py:L334) | 3/9 | `src/nova/tests/functional/integrated_helpers.py:L327–L340` |
| `InstanceHelperMixin._create_aggregate` | method | (self, name, availability_zone=None) | private | `api.post_aggregate(body)['id']` (src/nova/tests/functional/integrated_helpers.py:L356) | 1/8 | `src/nova/tests/functional/integrated_helpers.py:L342–L356` |
| `InstanceHelperMixin._build_flavor` | method | (self, id=None, name=None, memory_mb=2048, vcpu=2, disk=10, ephemeral=10, swap=0, rxtx_factor=None, is_public=True) | private | `body` (src/nova/tests/functional/integrated_helpers.py:L394) | 4/21 | `src/nova/tests/functional/integrated_helpers.py:L358–L394` |
| `InstanceHelperMixin._create_flavor` | method | (self, id=None, name=None, memory_mb=2048, vcpu=2, disk=10, ephemeral=10, swap=0, rxtx_factor=None, is_public=True, extra_spec=None) | private | `flavor['id']` (src/nova/tests/functional/integrated_helpers.py:L421) | 2/11 | `src/nova/tests/functional/integrated_helpers.py:L396–L421` |
| `InstanceHelperMixin._delete_flavor` | method | (self, flavor_id) | private | not declared | 1/2 | `src/nova/tests/functional/integrated_helpers.py:L423–L424` |
| `InstanceHelperMixin._create_image` | method | (self, metadata) | private | `self.glance.create(None, image)` (src/nova/tests/functional/integrated_helpers.py:L450) | 1/25 | `src/nova/tests/functional/integrated_helpers.py:L426–L450` |
| `InstanceHelperMixin._build_server` | method | (self, name=None, image_uuid=None, flavor_id=None, networks=None, az=None, host=None) | private | `server` (src/nova/tests/functional/integrated_helpers.py:L498) | 8/22 | `src/nova/tests/functional/integrated_helpers.py:L452–L498` |
| `InstanceHelperMixin._create_server` | method | (self, name=None, image_uuid=None, flavor_id=None, networks=None, az=None, host=None, expected_state='ACTIVE', api=None) | private | `self._wait_for_state_change(server, expected_state)` (src/nova/tests/functional/integrated_helpers.py:L536) | 7/14 | `src/nova/tests/functional/integrated_helpers.py:L500–L536` |
| `InstanceHelperMixin._delete_server` | method | (self, server) | private | not declared | 1/3 | `src/nova/tests/functional/integrated_helpers.py:L538–L541` |
| `InstanceHelperMixin._reboot_server` | method | (self, server, hard=False, expected_state='ACTIVE', api=None) | private | `self._wait_for_state_change(server, expected_state)` (src/nova/tests/functional/integrated_helpers.py:L553) | 4/10 | `src/nova/tests/functional/integrated_helpers.py:L543–L553` |
| `InstanceHelperMixin._show_server` | method | (self, server) | private | `self.api.get_server(server['id'])` (src/nova/tests/functional/integrated_helpers.py:L559); `server` (src/nova/tests/functional/integrated_helpers.py:L561) | 2/5 | `src/nova/tests/functional/integrated_helpers.py:L555–L561` |
| `InstanceHelperMixin._attach_interface` | method | (self, server, port_uuid) | private | `attachment` (src/nova/tests/functional/integrated_helpers.py:L573) | 1/10 | `src/nova/tests/functional/integrated_helpers.py:L563–L573` |
| `InstanceHelperMixin._detach_interface` | method | (self, server, port_uuid) | private | not declared | 1/4 | `src/nova/tests/functional/integrated_helpers.py:L575–L579` |
| `InstanceHelperMixin._get_share` | method | (self, server, share_id, admin=False) | private | `(self.admin_api.get_server_share(server['id'], share_id))` (src/nova/tests/functional/integrated_helpers.py:L583); `(self.api.get_server_share(server['id'], share_id))` (src/nova/tests/functional/integrated_helpers.py:L584) | 2/4 | `src/nova/tests/functional/integrated_helpers.py:L581–L584` |
| `InstanceHelperMixin._attach_share` | method | (self, server, share_id, tag=None) | private | not declared | 2/9 | `src/nova/tests/functional/integrated_helpers.py:L586–L594` |
| `InstanceHelperMixin._attach_share_with_error` | method | (self, server, share_id) | private | not declared | 1/6 | `src/nova/tests/functional/integrated_helpers.py:L596–L601` |
| `InstanceHelperMixin._detach_share` | method | (self, server, share_id) | private | not declared | 1/4 | `src/nova/tests/functional/integrated_helpers.py:L603–L606` |
| `InstanceHelperMixin._detach_share_with_error` | method | (self, server, share_id) | private | not declared | 1/5 | `src/nova/tests/functional/integrated_helpers.py:L608–L612` |
| `InstanceHelperMixin._attach_volume` | method | (self, server, volume_id) | private | not declared | 1/8 | `src/nova/tests/functional/integrated_helpers.py:L614–L622` |
| `InstanceHelperMixin._rebuild_server` | method | (self, server, image_uuid, expected_state='ACTIVE') | private | `self._wait_for_state_change(server, expected_state)` (src/nova/tests/functional/integrated_helpers.py:L630) | 1/6 | `src/nova/tests/functional/integrated_helpers.py:L624–L630` |
| `InstanceHelperMixin._migrate_server` | method | (self, server, host=None, expected_state='VERIFY_RESIZE', api=None) | private | `self._wait_for_state_change(server, expected_state)` (src/nova/tests/functional/integrated_helpers.py:L638) | 3/6 | `src/nova/tests/functional/integrated_helpers.py:L632–L638` |
| `InstanceHelperMixin._resize_server` | method | (self, server, flavor_id) | private | `self._wait_for_state_change(server, 'VERIFY_RESIZE')` (src/nova/tests/functional/integrated_helpers.py:L644) | 1/5 | `src/nova/tests/functional/integrated_helpers.py:L640–L644` |
| `InstanceHelperMixin._confirm_resize` | method | (self, server, *, cross_cell=False) | private | `server` (src/nova/tests/functional/integrated_helpers.py:L654) | 2/9 | `src/nova/tests/functional/integrated_helpers.py:L646–L654` |
| `InstanceHelperMixin._revert_resize` | method | (self, server) | private | `server` (src/nova/tests/functional/integrated_helpers.py:L668) | 1/7 | `src/nova/tests/functional/integrated_helpers.py:L656–L668` |
| `InstanceHelperMixin._live_migrate` | method | (self, server, migration_expected_state='completed', server_expected_state='ACTIVE', api=None, host=None, wait_for_fault_key=True) | private | `self._wait_for_state_change( server, server_expected_state, wait_for_fault_key=wait_for_fault_key)` (src/nova/tests/functional/integrated_helpers.py:L680) | 2/13 | `src/nova/tests/functional/integrated_helpers.py:L670–L682` |
| `InstanceHelperMixin._live_migrate_server` | field | — | private | not declared | — | `src/nova/tests/functional/integrated_helpers.py:L684–L684` |
| `InstanceHelperMixin._suspend_server` | method | (self, server, expected_state='SUSPENDED') | private | `self._wait_for_state_change(server, expected_state)` (src/nova/tests/functional/integrated_helpers.py:L690) | 1/4 | `src/nova/tests/functional/integrated_helpers.py:L686–L690` |
| `InstanceHelperMixin._resume_server` | method | (self, server, expected_state='ACTIVE') | private | `self._wait_for_state_change(server, expected_state)` (src/nova/tests/functional/integrated_helpers.py:L696) | 1/4 | `src/nova/tests/functional/integrated_helpers.py:L692–L696` |
| `InstanceHelperMixin._shelve_server` | method | (self, server, expected_state='SHELVED_OFFLOADED') | private | `self._wait_for_state_change(server, expected_state)` (src/nova/tests/functional/integrated_helpers.py:L701) | 1/3 | `src/nova/tests/functional/integrated_helpers.py:L698–L701` |
| `InstanceHelperMixin._shelve_offload_server` | method | (self, server) | private | not declared | 1/6 | `src/nova/tests/functional/integrated_helpers.py:L703–L709` |
| `InstanceHelperMixin._unshelve_server` | method | (self, server, expected_state='ACTIVE') | private | `self._wait_for_state_change(server, expected_state)` (src/nova/tests/functional/integrated_helpers.py:L714) | 1/3 | `src/nova/tests/functional/integrated_helpers.py:L711–L714` |
| `InstanceHelperMixin._evacuate_server` | method | (self, server, extra_post_args=None, expected_host=None, expected_state='SHUTOFF', expected_task_state=NOT_SPECIFIED, expected_migration_status='done') | private | `self._wait_for_server_parameter(server, expected_result)` (src/nova/tests/functional/integrated_helpers.py:L741) | 4/16 | `src/nova/tests/functional/integrated_helpers.py:L716–L741` |
| `InstanceHelperMixin._start_server` | method | (self, server) | private | `self._wait_for_state_change(server, 'ACTIVE')` (src/nova/tests/functional/integrated_helpers.py:L745) | 1/3 | `src/nova/tests/functional/integrated_helpers.py:L743–L745` |
| `InstanceHelperMixin._stop_server` | method | (self, server, wait_for_stop=True) | private | `self._wait_for_state_change(server, 'SHUTOFF')` (src/nova/tests/functional/integrated_helpers.py:L750); `server` (src/nova/tests/functional/integrated_helpers.py:L751) | 2/5 | `src/nova/tests/functional/integrated_helpers.py:L747–L751` |
| `InstanceHelperMixin._snapshot_server` | method | (self, server, snapshot_name) | private | not declared | 1/5 | `src/nova/tests/functional/integrated_helpers.py:L753–L758` |
| `InstanceHelperMixin._attach_volumes` | method | (self, server, vol_ids) | private | `self._show_server(server)` (src/nova/tests/functional/integrated_helpers.py:L775) | 3/7 | `src/nova/tests/functional/integrated_helpers.py:L760–L775` |
| `InstanceHelperMixin._create_vol_attachments_by_cinder` | method | (self, volume_id, server, new_attachments=1) | private | not declared | 2/5 | `src/nova/tests/functional/integrated_helpers.py:L777–L784` |
| `InstanceHelperMixin._create_server_boot_from_volume` | method | (self, image_args=None, flavor_id=None, networks=None) | private | `self._wait_for_state_change(server, 'ACTIVE')` (src/nova/tests/functional/integrated_helpers.py:L825) | 2/33 | `src/nova/tests/functional/integrated_helpers.py:L786–L825` |
| `InstanceHelperMixin._rescue_server` | method | (self, server) | private | `self._wait_for_state_change(server, 'RESCUE')` (src/nova/tests/functional/integrated_helpers.py:L830) | 1/4 | `src/nova/tests/functional/integrated_helpers.py:L827–L830` |
| `InstanceHelperMixin._unrescue_server` | method | (self, server) | private | `self._wait_for_state_change(server, 'ACTIVE')` (src/nova/tests/functional/integrated_helpers.py:L834) | 1/3 | `src/nova/tests/functional/integrated_helpers.py:L832–L834` |
| `PlacementHelperMixin` | class | — | exported | not declared | — | `src/nova/tests/functional/integrated_helpers.py:L837–L1105` |
| `PlacementHelperMixin._get_all_resource_classes` | method | (self) | private | `[d['name'] for d in resp]` (src/nova/tests/functional/integrated_helpers.py:L844) | 2/5 | `src/nova/tests/functional/integrated_helpers.py:L840–L844` |
| `PlacementHelperMixin._create_resource_class` | method | (self, resource_class) | private | `self.placement.post( '/resource_classes', {"name": resource_class}, version='1.6')` (src/nova/tests/functional/integrated_helpers.py:L847) | 1/3 | `src/nova/tests/functional/integrated_helpers.py:L846–L848` |
| `PlacementHelperMixin._get_all_providers` | method | (self) | private | `self.placement.get( '/resource_providers', version='1.14' ).body['resource_providers']` (src/nova/tests/functional/integrated_helpers.py:L851) | 1/4 | `src/nova/tests/functional/integrated_helpers.py:L850–L853` |
| `PlacementHelperMixin._get_all_rps_in_a_tree` | method | (self, in_tree_rp_uuid) | private | `rps` (src/nova/tests/functional/integrated_helpers.py:L860) | 1/6 | `src/nova/tests/functional/integrated_helpers.py:L855–L860` |
| `PlacementHelperMixin._get_all_rp_uuids_in_a_tree` | method | (self, in_tree_rp_uuid) | private | `[ rp['uuid'] for rp in self._get_all_rps_in_a_tree(in_tree_rp_uuid)]` (src/nova/tests/functional/integrated_helpers.py:L863) | 2/3 | `src/nova/tests/functional/integrated_helpers.py:L862–L864` |
| `PlacementHelperMixin._post_resource_provider` | method | (self, rp_name) | private | `self.placement.post( '/resource_providers', version='1.20', body={'name': rp_name} ).body` (src/nova/tests/functional/integrated_helpers.py:L867) | 1/4 | `src/nova/tests/functional/integrated_helpers.py:L866–L869` |
| `PlacementHelperMixin._get_resource_provider_by_uuid` | method | (self, rp_uuid) | private | `self.placement.get( '/resource_providers/%s' % rp_uuid, version='1.15', ).body` (src/nova/tests/functional/integrated_helpers.py:L872) | 1/4 | `src/nova/tests/functional/integrated_helpers.py:L871–L874` |
| `PlacementHelperMixin._get_provider_uuid_by_name` | method | (self, name) | private | `self.placement.get( '/resource_providers?name=%s' % name, ).body['resource_providers'][0]['uuid']` (src/nova/tests/functional/integrated_helpers.py:L877) | 1/4 | `src/nova/tests/functional/integrated_helpers.py:L876–L879` |
| `PlacementHelperMixin._get_provider_usages` | method | (self, provider_uuid) | private | `self.placement.get( '/resource_providers/%s/usages' % provider_uuid ).body['usages']` (src/nova/tests/functional/integrated_helpers.py:L882) | 1/4 | `src/nova/tests/functional/integrated_helpers.py:L881–L884` |
| `PlacementHelperMixin._get_allocations_by_provider_uuid` | method | (self, rp_uuid) | private | `self.placement.get( '/resource_providers/%s/allocations' % rp_uuid ).body['allocations']` (src/nova/tests/functional/integrated_helpers.py:L888) | 1/4 | `src/nova/tests/functional/integrated_helpers.py:L887–L890` |
| `PlacementHelperMixin._get_provider_traits` | method | (self, rp_uuid) | private | `self.placement.get( '/resource_providers/%s/traits' % rp_uuid, version='1.6' ).body['traits']` (src/nova/tests/functional/integrated_helpers.py:L898) | 1/4 | `src/nova/tests/functional/integrated_helpers.py:L892–L900` |
| `PlacementHelperMixin._INFRA_TRAITS` | field | — | private | not declared | — | `src/nova/tests/functional/integrated_helpers.py:L904–L907` |
| `PlacementHelperMixin._set_provider_traits` | method | (self, rp_uuid, traits) | private | `self.placement.put( '/resource_providers/%s/traits' % rp_uuid, { 'resource_provider_generation': provider['generation'], 'traits': all_traits }, version='1.6', )` (src/nova/tests/functional/integrated_helpers.py:L933) | 1/15 | `src/nova/tests/functional/integrated_helpers.py:L909–L940` |
| `PlacementHelperMixin._get_provider_inventory` | method | (self, rp_uuid) | private | `self.placement.get( '/resource_providers/%s/inventories' % rp_uuid ).body['inventories']` (src/nova/tests/functional/integrated_helpers.py:L943) | 1/4 | `src/nova/tests/functional/integrated_helpers.py:L942–L945` |
| `PlacementHelperMixin._set_inventory` | method | (self, rp_uuid, inv_body) | private | `self.placement.post( '/resource_providers/%s/inventories' % rp_uuid, version='1.15', body=inv_body ).body` (src/nova/tests/functional/integrated_helpers.py:L955) | 1/5 | `src/nova/tests/functional/integrated_helpers.py:L948–L958` |
| `PlacementHelperMixin._update_inventory` | method | (self, rp_uuid, inv_body) | private | `self.placement.put( '/resource_providers/%s/inventories' % rp_uuid, body=inv_body, ).body` (src/nova/tests/functional/integrated_helpers.py:L968) | 1/4 | `src/nova/tests/functional/integrated_helpers.py:L961–L970` |
| `PlacementHelperMixin._get_provider_aggregates` | method | (self, rp_uuid) | private | `self.placement.get( '/resource_providers/%s/aggregates' % rp_uuid, version='1.1' ).body['aggregates']` (src/nova/tests/functional/integrated_helpers.py:L973) | 1/4 | `src/nova/tests/functional/integrated_helpers.py:L972–L975` |
| `PlacementHelperMixin._set_aggregate` | method | (self, rp_uuid, agg_id) | private | `self.placement.put( '/resource_providers/%s/aggregates' % rp_uuid, body={ 'aggregates': [agg_id], 'resource_provider_generation': provider['generation'], }, version='1.19', ).body` (src/nova/tests/functional/integrated_helpers.py:L982) | 1/12 | `src/nova/tests/functional/integrated_helpers.py:L978–L989` |
| `PlacementHelperMixin._get_all_traits` | method | (self) | private | `self.placement.get('/traits', version='1.6').body['traits']` (src/nova/tests/functional/integrated_helpers.py:L992) | 1/2 | `src/nova/tests/functional/integrated_helpers.py:L991–L992` |
| `PlacementHelperMixin._create_trait` | method | (self, trait) | private | `self.placement.put('/traits/%s' % trait, {}, version='1.6')` (src/nova/tests/functional/integrated_helpers.py:L995) | 1/2 | `src/nova/tests/functional/integrated_helpers.py:L994–L995` |
| `PlacementHelperMixin._delete_trait` | method | (self, trait) | private | `self.placement.delete('/traits/%s' % trait, version='1.6')` (src/nova/tests/functional/integrated_helpers.py:L998) | 1/2 | `src/nova/tests/functional/integrated_helpers.py:L997–L998` |
| `PlacementHelperMixin.assertRequestMatchesUsage` | method | (self, requested_resources, root_rp_uuid) | public | not declared | 6/24 | `src/nova/tests/functional/integrated_helpers.py:L1000–L1035` |
| `PlacementHelperMixin.assertFlavorMatchesUsage` | method | (self, root_rp_uuid, *flavors) | public | not declared | 3/7 | `src/nova/tests/functional/integrated_helpers.py:L1037–L1043` |
| `PlacementHelperMixin._resources_from_flavor` | method | (self, flavor) | private | `resources` (src/nova/tests/functional/integrated_helpers.py:L1053) | 3/9 | `src/nova/tests/functional/integrated_helpers.py:L1045–L1053` |
| `PlacementHelperMixin.assertFlavorMatchesAllocation` | method | (self, flavor, consumer_uuid, root_rp_uuid) | public | not declared | 3/17 | `src/nova/tests/functional/integrated_helpers.py:L1055–L1076` |
| `PlacementHelperMixin.get_migration_uuid_for_instance` | method | (self, instance_uuid) | public | `migrations[0].uuid` (src/nova/tests/functional/integrated_helpers.py:L1091) | 1/10 | `src/nova/tests/functional/integrated_helpers.py:L1078–L1091` |
| `PlacementHelperMixin._reserve_placement_resource` | method | (self, rp_name, rc_name, reserved) | private | `result` (src/nova/tests/functional/integrated_helpers.py:L1105) | 1/13 | `src/nova/tests/functional/integrated_helpers.py:L1093–L1105` |
| `PlacementInstanceHelperMixin` | class | — | exported | not declared | — | `src/nova/tests/functional/integrated_helpers.py:L1108–L1407` |
| `PlacementInstanceHelperMixin._get_allocations_by_server_uuid` | method | (self, server_uuid) | private | `self.placement.get( '/allocations/%s' % server_uuid ).body['allocations']` (src/nova/tests/functional/integrated_helpers.py:L1113) | 1/4 | `src/nova/tests/functional/integrated_helpers.py:L1112–L1115` |
| `PlacementInstanceHelperMixin._delete_server_allocations` | method | (self, server_uuid) | private | not declared | 1/2 | `src/nova/tests/functional/integrated_helpers.py:L1117–L1118` |
| `PlacementInstanceHelperMixin._wait_for_server_allocations` | method | (self, consumer_id, max_retries=20) | private | `alloc` (src/nova/tests/functional/integrated_helpers.py:L1131) | 4/12 | `src/nova/tests/functional/integrated_helpers.py:L1120–L1131` |
| `PlacementInstanceHelperMixin._get_provider_uuid_by_host` | method | (self, host) | private | `self.admin_api.api_get( 'os-hypervisors?hypervisor_hostname_pattern=%s' % host ).body['hypervisors'][0]['id']` (src/nova/tests/functional/integrated_helpers.py:L1136) | 1/4 | `src/nova/tests/functional/integrated_helpers.py:L1133–L1138` |
| `PlacementInstanceHelperMixin._boot_and_check_allocations` | method | (self, flavor, source_hostname, networks='none') | private | `server` (src/nova/tests/functional/integrated_helpers.py:L1210) | 7/32 | `src/nova/tests/functional/integrated_helpers.py:L1141–L1210` |
| `PlacementInstanceHelperMixin._delete_and_check_allocations` | method | (self, server) | private | `migration_uuid` (src/nova/tests/functional/integrated_helpers.py:L1264) | 5/23 | `src/nova/tests/functional/integrated_helpers.py:L1213–L1264` |
| `PlacementInstanceHelperMixin._move_and_check_allocations` | method | (self, server, request, old_flavor, new_flavor, source_rp_uuid, dest_rp_uuid) | private | not declared | 3/17 | `src/nova/tests/functional/integrated_helpers.py:L1266–L1304` |
| `PlacementInstanceHelperMixin._move_and_check_allocations._check_allocation` | function | — | private | not declared | — | `src/nova/tests/functional/integrated_helpers.py:L1278–L1291` |
| `PlacementInstanceHelperMixin._migrate_and_check_allocations` | method | (self, server, flavor, source_rp_uuid, dest_rp_uuid) | private | not declared | 1/7 | `src/nova/tests/functional/integrated_helpers.py:L1307–L1313` |
| `PlacementInstanceHelperMixin._resize_and_check_allocations` | method | (self, server, old_flavor, new_flavor, source_rp_uuid, dest_rp_uuid) | private | not declared | 1/12 | `src/nova/tests/functional/integrated_helpers.py:L1316–L1327` |
| `PlacementInstanceHelperMixin._resize_to_same_host_and_check_allocations` | method | (self, server, old_flavor, new_flavor, rp_uuid) | private | not declared | 1/17 | `src/nova/tests/functional/integrated_helpers.py:L1331–L1366` |
| `PlacementInstanceHelperMixin._check_allocation_during_evacuate` | method | (self, flavor, server_uuid, source_root_rp_uuid, dest_root_rp_uuid) | private | not declared | 1/7 | `src/nova/tests/functional/integrated_helpers.py:L1368–L1374` |
| `PlacementInstanceHelperMixin.assert_hypervisor_usage` | method | (self, compute_node_uuid, flavor, volume_backed) | public | not declared | 2/18 | `src/nova/tests/functional/integrated_helpers.py:L1376–L1407` |
| `_IntegratedTestBase` | class | — | unexported | not declared | — | `src/nova/tests/functional/integrated_helpers.py:L1410–L1504` |
| `_IntegratedTestBase.REQUIRES_LOCKING` | constant | — | public | not declared | — | `src/nova/tests/functional/integrated_helpers.py:L1413–L1413` |
| `_IntegratedTestBase.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/integrated_helpers.py:L1416–L1416` |
| `_IntegratedTestBase.api_major_version` | field | — | public | not declared | — | `src/nova/tests/functional/integrated_helpers.py:L1420–L1420` |
| `_IntegratedTestBase.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/integrated_helpers.py:L1425–L1425` |
| `_IntegratedTestBase.USE_PROJECT_ID` | constant | — | public | not declared | — | `src/nova/tests/functional/integrated_helpers.py:L1429–L1429` |
| `_IntegratedTestBase.STUB_KEYSTONE` | constant | — | public | not declared | — | `src/nova/tests/functional/integrated_helpers.py:L1434–L1434` |
| `_IntegratedTestBase.CAST_AS_CALL` | constant | — | public | not declared | — | `src/nova/tests/functional/integrated_helpers.py:L1438–L1438` |
| `_IntegratedTestBase.setUp` | method | (self) | public | not declared | 2/14 | `src/nova/tests/functional/integrated_helpers.py:L1440–L1457` |
| `_IntegratedTestBase._setup_compute_service` | method | (self) | private | `self._start_compute('compute')` (src/nova/tests/functional/integrated_helpers.py:L1460) | 1/2 | `src/nova/tests/functional/integrated_helpers.py:L1459–L1460` |
| `_IntegratedTestBase._setup_scheduler_service` | method | (self) | private | `self.start_service('scheduler')` (src/nova/tests/functional/integrated_helpers.py:L1463) | 1/2 | `src/nova/tests/functional/integrated_helpers.py:L1462–L1463` |
| `_IntegratedTestBase._setup_conductor_service` | method | (self) | private | `self.start_service('conductor')` (src/nova/tests/functional/integrated_helpers.py:L1466) | 1/2 | `src/nova/tests/functional/integrated_helpers.py:L1465–L1466` |
| `_IntegratedTestBase._stop_computes` | method | (self) | private | not declared | 2/3 | `src/nova/tests/functional/integrated_helpers.py:L1468–L1470` |
| `_IntegratedTestBase._setup_services` | method | (self) | private | not declared | 5/23 | `src/nova/tests/functional/integrated_helpers.py:L1472–L1504` |
| `ProviderUsageBaseTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/integrated_helpers.py:L1509–L1544` |
| `ProviderUsageBaseTestCase.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/integrated_helpers.py:L1520–L1520` |
| `ProviderUsageBaseTestCase.setUp` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/integrated_helpers.py:L1522–L1544` |
| `StubComputeRPCAPI.router` | property | — | public | not declared | — | `src/nova/tests/functional/integrated_helpers.py:L86–L94` |

## Dependencies

- `import collections` (src/nova/tests/functional/integrated_helpers.py:L20)
- `import datetime` (src/nova/tests/functional/integrated_helpers.py:L21)
- `import random` (src/nova/tests/functional/integrated_helpers.py:L22)
- `import re` (src/nova/tests/functional/integrated_helpers.py:L23)
- `import string` (src/nova/tests/functional/integrated_helpers.py:L24)
- `import time` (src/nova/tests/functional/integrated_helpers.py:L25)
- `import os_traits` (src/nova/tests/functional/integrated_helpers.py:L27)
- `oslo_concurrency`: imports `lockutils` (src/nova/tests/functional/integrated_helpers.py:L28)
- `oslo_log`: imports `log as logging` (src/nova/tests/functional/integrated_helpers.py:L29)
- `import oslo_messaging as messaging` (src/nova/tests/functional/integrated_helpers.py:L30)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/integrated_helpers.py:L31)
- `nova.compute`: imports `instance_actions` (src/nova/tests/functional/integrated_helpers.py:L33)
- `nova.compute`: imports `rpcapi as compute_rpcapi` (src/nova/tests/functional/integrated_helpers.py:L34)
- `nova.compute`: imports `utils as compute_utils` (src/nova/tests/functional/integrated_helpers.py:L35)
- `import nova.conf` (src/nova/tests/functional/integrated_helpers.py:L36)
- `nova`: imports `context` (src/nova/tests/functional/integrated_helpers.py:L37)
- `nova.db.main`: imports `api as db` (src/nova/tests/functional/integrated_helpers.py:L38)
- `import nova.image.glance` (src/nova/tests/functional/integrated_helpers.py:L39)
- `nova`: imports `objects` (src/nova/tests/functional/integrated_helpers.py:L40)
- `nova.objects`: imports `base as objects_base` (src/nova/tests/functional/integrated_helpers.py:L41)
- `nova`: imports `rpc` (src/nova/tests/functional/integrated_helpers.py:L42)
- `nova`: imports `test` (src/nova/tests/functional/integrated_helpers.py:L43)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/integrated_helpers.py:L44)
- `nova.tests.functional.api`: imports `client as api_client` (src/nova/tests/functional/integrated_helpers.py:L45)
- `nova.tests.functional`: imports `fixtures as func_fixtures` (src/nova/tests/functional/integrated_helpers.py:L46)
- `nova`: imports `utils` (src/nova/tests/functional/integrated_helpers.py:L47)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/functional/integrated_helpers.py:L49)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/functional/integrated_helpers.py:L50)
- **global-mutation**: NOT_SPECIFIED = object() (src/nova/tests/functional/integrated_helpers.py:L100)
- **global-mutation**: REQUIRES_LOCKING = True (src/nova/tests/functional/integrated_helpers.py:L1413)
- **global-mutation**: ADMIN_API = False (src/nova/tests/functional/integrated_helpers.py:L1416)
- **global-mutation**: USE_PROJECT_ID = False (src/nova/tests/functional/integrated_helpers.py:L1429)
- **global-mutation**: STUB_KEYSTONE = True (src/nova/tests/functional/integrated_helpers.py:L1434)
- **global-mutation**: CAST_AS_CALL = True (src/nova/tests/functional/integrated_helpers.py:L1438)

## Security Surface

- **sink** (`db-write`): image['properties'].update(metadata) (src/nova/tests/functional/integrated_helpers.py:L449)
- **sink** (`db-write`): post['evacuate'].update(extra_post_args) (src/nova/tests/functional/integrated_helpers.py:L725)
- **sink** (`db-write`): image.update(image_args) (src/nova/tests/functional/integrated_helpers.py:L806)
- **sink** (`db-write`): :param rp_uuid: UUID of the resource provider to update (src/nova/tests/functional/integrated_helpers.py:L895)
- **sink** (`db-write`): :param rp_uuid: UUID of the resource provider to update. (src/nova/tests/functional/integrated_helpers.py:L922)
- **sink** (`db-write`): :param rp_uuid: UUID of the resource provider to update (src/nova/tests/functional/integrated_helpers.py:L951)
- **sink** (`db-write`): """This will update the inventory for a given resource provider. (src/nova/tests/functional/integrated_helpers.py:L962)
- **sink** (`db-write`): :param rp_uuid: UUID of the resource provider to update (src/nova/tests/functional/integrated_helpers.py:L964)

