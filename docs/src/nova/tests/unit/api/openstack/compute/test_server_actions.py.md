# src/nova/tests/unit/api/openstack/compute/test_server_actions.py

## Overview

This file implements the `test_server_actions` module, defining 1 class, 2 constants, 7 fields, 24 functions, 78 methods, 19 imports, 3 side effects, 1 security surface entry.

Lines: total 1337, code 1062, comment 35, blank 240

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L39–L39` |
| `FAKE_UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L40–L40` |
| `ServerActionsControllerTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L44–L1337` |
| `ServerActionsControllerTestV21.image_uuid` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L45–L45` |
| `ServerActionsControllerTestV21.image_base_url` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L46–L46` |
| `ServerActionsControllerTestV21.image_href` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L47–L47` |
| `ServerActionsControllerTestV21.servers` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L48–L48` |
| `ServerActionsControllerTestV21.validation_error` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L49–L49` |
| `ServerActionsControllerTestV21.request_too_large_error` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L50–L50` |
| `ServerActionsControllerTestV21.image_url` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L51–L51` |
| `ServerActionsControllerTestV21.setUp` | method | (self) | public | not declared | 1/46 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L53–L114` |
| `ServerActionsControllerTestV21._get_controller` | method | (self) | private | `self.servers.ServersController()` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L117) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L116–L117` |
| `ServerActionsControllerTestV21._test_locked_instance` | method | (self, action, method=None, body_map=None, compute_api_args_map=None) | private | not declared | 5/41 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L119–L163` |
| `ServerActionsControllerTestV21.test_actions_with_locked_instance` | method | (self) | public | not declared | 2/25 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L165–L193` |
| `ServerActionsControllerTestV21.test_reboot_hard` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L195–L197` |
| `ServerActionsControllerTestV21.test_reboot_soft` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L199–L201` |
| `ServerActionsControllerTestV21.test_reboot_incorrect_type` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L203–L207` |
| `ServerActionsControllerTestV21.test_reboot_missing_type` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L209–L213` |
| `ServerActionsControllerTestV21.test_reboot_none` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L215–L219` |
| `ServerActionsControllerTestV21.test_reboot_not_found` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L221–L228` |
| `ServerActionsControllerTestV21.test_reboot_raises_conflict_on_invalid_state` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L230–L242` |
| `ServerActionsControllerTestV21.test_reboot_raises_conflict_on_invalid_state.fake_reboot` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L233–L236` |
| `ServerActionsControllerTestV21.test_reboot_soft_with_soft_in_progress_raises_conflict` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L244–L252` |
| `ServerActionsControllerTestV21.test_reboot_hard_with_soft_in_progress_does_not_raise` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L254–L260` |
| `ServerActionsControllerTestV21.test_reboot_hard_with_hard_in_progress` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L262–L269` |
| `ServerActionsControllerTestV21.test_reboot_soft_with_hard_in_progress_raises_conflict` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L271–L280` |
| `ServerActionsControllerTestV21._test_rebuild_preserve_ephemeral` | method | (self, value=None) | private | not declared | 3/22 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L282–L306` |
| `ServerActionsControllerTestV21.test_rebuild_preserve_ephemeral_true` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L308–L309` |
| `ServerActionsControllerTestV21.test_rebuild_preserve_ephemeral_false` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L311–L312` |
| `ServerActionsControllerTestV21.test_rebuild_preserve_ephemeral_default` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L314–L315` |
| `ServerActionsControllerTestV21.test_rebuild_accepted_minimum` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L317–L340` |
| `ServerActionsControllerTestV21.test_rebuild_instance_with_image_uuid` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L342–L358` |
| `ServerActionsControllerTestV21.test_rebuild_instance_with_image_uuid.rebuild` | function | (self2, context, instance, image_href, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L345–L346` |
| `ServerActionsControllerTestV21.test_rebuild_instance_with_image_href_uses_uuid` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L360–L370` |
| `ServerActionsControllerTestV21.test_rebuild_accepted_minimum_pass_disabled` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L372–L398` |
| `ServerActionsControllerTestV21.test_rebuild__http_conflict_error` | method | (self, exc, mock_rebuild) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L404–L410` |
| `ServerActionsControllerTestV21.test_rebuild_raises_badrequest_for_not_supported_features` | method | (self, exc, mock_rebuild) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L420–L426` |
| `ServerActionsControllerTestV21.test_rebuild_raises_conflict_on_invalid_state` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L428–L440` |
| `ServerActionsControllerTestV21.test_rebuild_raises_conflict_on_invalid_state.fake_rebuild` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L431–L434` |
| `ServerActionsControllerTestV21.test_rebuild_accepted_with_metadata` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L442–L460` |
| `ServerActionsControllerTestV21.test_rebuild_accepted_with_bad_metadata` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L462–L472` |
| `ServerActionsControllerTestV21.test_rebuild_with_too_large_metadata` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L474–L486` |
| `ServerActionsControllerTestV21.test_rebuild_bad_entity` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L488–L497` |
| `ServerActionsControllerTestV21.test_rebuild_admin_pass` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L499–L516` |
| `ServerActionsControllerTestV21.test_rebuild_admin_pass_pass_disabled` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L518–L539` |
| `ServerActionsControllerTestV21.test_rebuild_server_not_found` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L541–L552` |
| `ServerActionsControllerTestV21.test_rebuild_with_bad_image` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L554–L562` |
| `ServerActionsControllerTestV21.test_rebuild_accessIP` | method | (self) | public | not declared | 2/26 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L564–L599` |
| `ServerActionsControllerTestV21.test_rebuild_accessIP.wrap_get` | function | (*args, **kwargs) | public | `data['instance']` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L583) | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L581–L583` |
| `ServerActionsControllerTestV21.test_rebuild_accessIP.fake_save` | function | (context, **kwargs) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L585–L586` |
| `ServerActionsControllerTestV21.test_rebuild_when_kernel_not_exists` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L601–L637` |
| `ServerActionsControllerTestV21.test_rebuild_when_kernel_not_exists.return_image_meta` | function | (*args, **kwargs) | public | `image_meta` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L626) | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L603–L626` |
| `ServerActionsControllerTestV21.test_rebuild_proper_kernel_ram` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L639–L691` |
| `ServerActionsControllerTestV21.test_rebuild_proper_kernel_ram.wrap_get` | function | (*args, **kwargs) | public | `inst` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L647) | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L644–L647` |
| `ServerActionsControllerTestV21.test_rebuild_proper_kernel_ram.fake_save` | function | (context, **kwargs) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L649–L653` |
| `ServerActionsControllerTestV21.test_rebuild_proper_kernel_ram.return_image_meta` | function | (*args, **kwargs) | public | `image_meta` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L678) | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L655–L678` |
| `ServerActionsControllerTestV21.test_rebuild_instance_raise_auto_disk_config_exc` | method | (self, mock_rebuild) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L694–L706` |
| `ServerActionsControllerTestV21.test_rebuild_raise_invalid_architecture_exc` | method | (self, mock_rebuild) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L709–L720` |
| `ServerActionsControllerTestV21.test_rebuild_raise_invalid_volume_exc` | method | (self, mock_rebuild) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L723–L735` |
| `ServerActionsControllerTestV21.test_resize_server` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L737–L750` |
| `ServerActionsControllerTestV21.test_resize_server.resize_mock` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L743–L744` |
| `ServerActionsControllerTestV21.test_resize_server_no_flavor` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L752–L757` |
| `ServerActionsControllerTestV21.test_resize_server_no_flavor_ref` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L759–L764` |
| `ServerActionsControllerTestV21.test_resize_server_with_extra_arg` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L766–L771` |
| `ServerActionsControllerTestV21.test_resize_server_invalid_flavor_ref` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L773–L778` |
| `ServerActionsControllerTestV21.test_resize_with_server_not_found` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L780–L787` |
| `ServerActionsControllerTestV21.test_resize_with_image_exceptions` | method | (self) | public | not declared | 4/31 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L789–L827` |
| `ServerActionsControllerTestV21.test_resize_with_image_exceptions._fake_resize` | function | (obj, context, instance, flavor_id, auto_disk_config=None) | private | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L806–L809` |
| `ServerActionsControllerTestV21.test_resize_raises_cannot_resize_disk` | method | (self, mock_resize) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L831–L835` |
| `ServerActionsControllerTestV21.test_resize_raises_flavor_not_found` | method | (self, mock_resize) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L840–L844` |
| `ServerActionsControllerTestV21.test_resize_with_too_many_instances` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L846–L856` |
| `ServerActionsControllerTestV21.test_resize_with_too_many_instances.fake_resize` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L849–L850` |
| `ServerActionsControllerTestV21.test_resize_raises_conflict_on_invalid_state` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L858–L870` |
| `ServerActionsControllerTestV21.test_resize_raises_conflict_on_invalid_state.fake_resize` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L861–L864` |
| `ServerActionsControllerTestV21.test_resize_instance_raise_auto_disk_config_exc` | method | (self, mock_resize) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L873–L881` |
| `ServerActionsControllerTestV21.test_resize_pci_alias_not_defined` | method | (self, mock_resize) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L886–L891` |
| `ServerActionsControllerTestV21.test_resize_raises_badrequest_for_accelerator` | method | (self, mock_resize) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L895–L899` |
| `ServerActionsControllerTestV21.test_resize_raises_badrequest_for_vdpaInterface` | method | (self, mock_resize) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L904–L908` |
| `ServerActionsControllerTestV21.test_confirm_resize_server` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L910–L922` |
| `ServerActionsControllerTestV21.test_confirm_resize_server.cr_mock` | function | (*args) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L915–L916` |
| `ServerActionsControllerTestV21.test_confirm_resize_migration_not_found` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L924–L936` |
| `ServerActionsControllerTestV21.test_confirm_resize_migration_not_found.confirm_resize_mock` | function | (*args) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L927–L929` |
| `ServerActionsControllerTestV21.test_confirm_resize_raises_conflict_on_invalid_state` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L938–L951` |
| `ServerActionsControllerTestV21.test_confirm_resize_raises_conflict_on_invalid_state.fake_confirm_resize` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L941–L944` |
| `ServerActionsControllerTestV21.test_revert_resize_migration_not_found` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L953–L965` |
| `ServerActionsControllerTestV21.test_revert_resize_migration_not_found.revert_resize_mock` | function | (*args) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L956–L958` |
| `ServerActionsControllerTestV21.test_revert_resize_server_not_found` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L967–L974` |
| `ServerActionsControllerTestV21.test_revert_resize_server` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L976–L988` |
| `ServerActionsControllerTestV21.test_revert_resize_server.revert_mock` | function | (*args) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L981–L982` |
| `ServerActionsControllerTestV21.test_revert_resize_raises_conflict_on_invalid_state` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L990–L1003` |
| `ServerActionsControllerTestV21.test_revert_resize_raises_conflict_on_invalid_state.fake_revert_resize` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L993–L996` |
| `ServerActionsControllerTestV21.test_create_image` | method | (self) | public | not declared | 2/15 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1005–L1021` |
| `ServerActionsControllerTestV21.test_create_image_v245` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1023–L1035` |
| `ServerActionsControllerTestV21.test_create_image_name_too_long` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1037–L1047` |
| `ServerActionsControllerTestV21._do_test_create_volume_backed_image` | method | (self, extra_properties, mock_vol_create_side_effect=None) | private | not declared | 6/77 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1049–L1154` |
| `ServerActionsControllerTestV21._do_test_create_volume_backed_image._fake_id` | function | (x) | private | `'%s-%s-%s-%s' % (x * 8, x * 4, x * 4, x * 12)` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1053) | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1052–L1053` |
| `ServerActionsControllerTestV21._do_test_create_volume_backed_image.fake_block_device_mapping_get_all_by_instance` | function | (context, inst_id, use_slave=False) | public | `[fake_block_device.FakeDbBlockDeviceDict( {'volume_id': _fake_id('a'), 'source_type': 'snapshot', 'destination_type': 'volume', 'volume_size': 1, 'device_name': 'vda', 'snapshot_id': 1, 'boot_index': ` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1069) | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1067–L1078` |
| `ServerActionsControllerTestV21.test_create_volume_backed_image_no_metadata` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1156–L1157` |
| `ServerActionsControllerTestV21.test_create_volume_backed_image_with_metadata` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1159–L1161` |
| `ServerActionsControllerTestV21.test_create_volume_backed_image_cinder_over_quota` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1163–L1168` |
| `ServerActionsControllerTestV21._test_create_volume_backed_image_with_metadata_from_volume` | method | (self, extra_metadata=None) | private | not declared | 4/55 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1170–L1248` |
| `ServerActionsControllerTestV21._test_create_volume_backed_image_with_metadata_from_volume._fake_id` | function | (x) | private | `'%s-%s-%s-%s' % (x * 8, x * 4, x * 4, x * 12)` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1174) | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1173–L1174` |
| `ServerActionsControllerTestV21._test_create_volume_backed_image_with_metadata_from_volume.fake_block_device_mapping_get_all_by_instance` | function | (context, inst_id, use_slave=False) | public | `[fake_block_device.FakeDbBlockDeviceDict( {'volume_id': _fake_id('a'), 'source_type': 'snapshot', 'destination_type': 'volume', 'volume_size': 1, 'device_name': 'vda', 'snapshot_id': 1, 'boot_index': ` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1184) | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1182–L1193` |
| `ServerActionsControllerTestV21.test_create_vol_backed_img_with_meta_from_vol_without_extra_meta` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1250–L1251` |
| `ServerActionsControllerTestV21.test_create_vol_backed_img_with_meta_from_vol_with_extra_meta` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1253–L1255` |
| `ServerActionsControllerTestV21.test_create_image_with_metadata` | method | (self) | public | not declared | 2/16 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1257–L1274` |
| `ServerActionsControllerTestV21.test_create_image_with_too_much_metadata` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1276–L1288` |
| `ServerActionsControllerTestV21.test_create_image_no_name` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1290–L1297` |
| `ServerActionsControllerTestV21.test_create_image_blank_name` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1299–L1308` |
| `ServerActionsControllerTestV21.test_create_image_bad_metadata` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1310–L1320` |
| `ServerActionsControllerTestV21.test_create_image_raises_conflict_on_invalid_state` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1322–L1337` |
| `ServerActionsControllerTestV21.test_create_image_raises_conflict_on_invalid_state.snapshot` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L1323–L1326` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L16)
- `import ddt` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L18)
- `import fixtures` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L19)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L20)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L21)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L22)
- `nova.api.openstack.compute`: imports `servers as servers_v21` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L24)
- `nova.compute`: imports `api as compute_api` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L25)
- `nova.compute`: imports `task_states` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L26)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L27)
- `import nova.conf` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L28)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L29)
- `nova.image`: imports `glance` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L30)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L31)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L32)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L33)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L34)
- `nova.tests.unit`: imports `fake_block_device` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L35)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L36)

## Side Effects

- **network**: from nova.api.openstack.compute import servers as servers_v21 (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L24)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L39)
- **global-mutation**: FAKE_UUID = fakes.FAKE_UUID (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L40)

## Security Surface

- **sink** (`db-write`): data['changes'].update(data['instance'].obj_get_changes()) (src/nova/tests/unit/api/openstack/compute/test_server_actions.py:L586)

