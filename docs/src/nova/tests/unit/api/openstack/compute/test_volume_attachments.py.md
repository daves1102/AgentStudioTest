# src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py

## Overview

This file implements the `test_volume_attachments` module, defining 9 classs, 4 constants, 7 fields, 5 functions, 87 methods, 20 imports, 7 side effects, 19 security surface entries.

Lines: total 1470, code 1279, comment 37, blank 154

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FAKE_UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L41–L41` |
| `FAKE_UUID_A` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L43–L43` |
| `FAKE_UUID_B` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L45–L45` |
| `FAKE_UUID_C` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L47–L47` |
| `fake_get_instance` | function | (self, context, instance_id, expected_attrs=None, cell_down_support=False) | exported | `fake_instance.fake_instance_obj( context, id=1, uuid=instance_id, project_id=context.project_id)` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L52) | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L50–L53` |
| `fake_get_volume` | function | (self, context, id) | exported | `{ 'id': id, 'status': status, 'attach_status': attach_status, 'migration_status': migration_status }` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L73) | 4/18 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L59–L76` |
| `fake_bdm_get_by_volume_and_instance` | function | (cls, ctxt, volume_id, instance_uuid) | exported | `objects.BlockDeviceMapping._from_db_object( ctxt, objects.BlockDeviceMapping(), db_bdm)` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L96) | 2/18 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L80–L97` |
| `VolumeAttachTestsV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L100–L596` |
| `VolumeAttachTestsV21.microversion` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L101–L101` |
| `VolumeAttachTestsV21._prefix` | field | — | private | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L102–L102` |
| `VolumeAttachTestsV21.setUp` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L104–L122` |
| `VolumeAttachTestsV21._build_request` | method | (self, url='') | private | `fakes.HTTPRequest.blank( self._prefix + url, version=self.microversion)` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L125) | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L124–L126` |
| `VolumeAttachTestsV21.test_show` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L128–L130` |
| `VolumeAttachTestsV21.test_show_no_instance` | method | (self, mock_mr) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L135–L140` |
| `VolumeAttachTestsV21.test_show_no_bdms` | method | (self, mock_mr) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L146–L151` |
| `VolumeAttachTestsV21.test_show_bdms_no_mountpoint` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L153–L160` |
| `VolumeAttachTestsV21.test_detach` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L162–L180` |
| `VolumeAttachTestsV21.test_detach_vol_shelved_not_supported` | method | (self, mock_get_instance) | public | not declared | 1/15 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L183–L197` |
| `VolumeAttachTestsV21.test_detach_vol_shelved_supported` | method | (self, mock_get_instance, mock_detach) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L201–L214` |
| `VolumeAttachTestsV21.test_detach_vol_not_found` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L216–L224` |
| `VolumeAttachTestsV21.test_detach_vol_root` | method | (self, mock_isroot) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L229–L235` |
| `VolumeAttachTestsV21.test_detach_volume_from_locked_server` | method | (self, mock_detach_volume) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L238–L249` |
| `VolumeAttachTestsV21.test_detach_volume_compute_down` | method | (self, mock_detach_volume) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L252–L263` |
| `VolumeAttachTestsV21.test_attach_volume` | method | (self) | public | not declared | 2/16 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L265–L280` |
| `VolumeAttachTestsV21.test_tagged_volume_attach_not_supported` | method | (self, mock_attach_volume) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L284–L288` |
| `VolumeAttachTestsV21.test_attach_vol_shelved_not_supported` | method | (self, mock_get_instance) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L291–L303` |
| `VolumeAttachTestsV21.test_attach_vol_shelved_supported` | method | (self, mock_get_instance, mock_attach) | public | not declared | 1/21 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L308–L329` |
| `VolumeAttachTestsV21.test_attach_volume_with_auto_device` | method | (self, mock_attach) | public | not declared | 2/13 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L333–L345` |
| `VolumeAttachTestsV21.test_attach_volume_to_locked_server` | method | (self, mock_attach_volume) | public | not declared | 1/17 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L350–L366` |
| `VolumeAttachTestsV21.test_attach_volume_bad_id` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L368–L381` |
| `VolumeAttachTestsV21.test_attach_volume_device_in_use` | method | (self, mock_attach) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L385–L395` |
| `VolumeAttachTestsV21.test_attach_volume_without_volumeId` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L397–L411` |
| `VolumeAttachTestsV21.test_attach_volume_with_extra_arg` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L413–L421` |
| `VolumeAttachTestsV21.test_attach_volume_with_invalid_input` | method | (self, mock_attach) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L424–L438` |
| `VolumeAttachTestsV21._test_swap` | method | (self, attachments, uuid=uuids.source_swap_vol, body=None) | private | `attachments.update(self.req, uuids.instance, uuid, body=body)` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L442) | 2/3 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L440–L442` |
| `VolumeAttachTestsV21.test_swap_volume_for_locked_server` | method | (self, mock_swap_volume) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L447–L460` |
| `VolumeAttachTestsV21.test_swap_volume` | method | (self, mock_swap_volume) | public | not declared | 2/18 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L463–L482` |
| `VolumeAttachTestsV21.test_swap_volume_with_nonexistent_uri` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L484–L486` |
| `VolumeAttachTestsV21.test_swap_volume_with_nonexistent_dest_in_body` | method | (self, mock_get) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L489–L499` |
| `VolumeAttachTestsV21.test_swap_volume_without_volumeId` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L501–L506` |
| `VolumeAttachTestsV21.test_swap_volume_with_extra_arg` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L508–L515` |
| `VolumeAttachTestsV21.test_swap_volume_for_bdm_not_found` | method | (self, mock_bdm, mock_swap_volume) | public | not declared | 2/21 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L524–L546` |
| `VolumeAttachTestsV21._test_list_with_invalid_filter` | method | (self, url) | private | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L548–L553` |
| `VolumeAttachTestsV21.test_list_with_invalid_non_int_limit` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L555–L556` |
| `VolumeAttachTestsV21.test_list_with_invalid_string_limit` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L558–L559` |
| `VolumeAttachTestsV21.test_list_duplicate_query_with_invalid_string_limit` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L561–L563` |
| `VolumeAttachTestsV21.test_list_with_invalid_non_int_offset` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L565–L566` |
| `VolumeAttachTestsV21.test_list_with_invalid_string_offset` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L568–L569` |
| `VolumeAttachTestsV21.test_list_duplicate_query_with_invalid_string_offset` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L571–L573` |
| `VolumeAttachTestsV21.test_list_duplicate_query_parameters_validation` | method | (self, mock_get) | public | not declared | 2/11 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L577–L587` |
| `VolumeAttachTestsV21.test_list_with_additional_filter` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L591–L596` |
| `VolumeAttachTestsV249` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L599–L635` |
| `VolumeAttachTestsV249.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L601–L605` |
| `VolumeAttachTestsV249.test_tagged_volume_attach_invalid_tag_comma` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L607–L612` |
| `VolumeAttachTestsV249.test_tagged_volume_attach_invalid_tag_slash` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L614–L619` |
| `VolumeAttachTestsV249.test_tagged_volume_attach_invalid_tag_too_long` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L621–L627` |
| `VolumeAttachTestsV249.test_tagged_volume_attach_valid_tag` | method | (self, _) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L631–L635` |
| `VolumeAttachTestsV260` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L638–L705` |
| `VolumeAttachTestsV260.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L641–L647` |
| `VolumeAttachTestsV260._post_attach` | method | (self, version=None) | private | `self.controller.create(req, FAKE_UUID, body=body)` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L657) | 2/9 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L649–L657` |
| `VolumeAttachTestsV260.test_attach_with_multiattach_fails_old_microversion` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L659–L672` |
| `VolumeAttachTestsV260.test_attach_with_multiattach_fails_not_supported_by_driver` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L674–L690` |
| `VolumeAttachTestsV260.test_attach_with_multiattach_fails_for_shelved_offloaded_server` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L692–L705` |
| `VolumeAttachTestsV275` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L708–L735` |
| `VolumeAttachTestsV275.microversion` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L709–L709` |
| `VolumeAttachTestsV275.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L711–L719` |
| `VolumeAttachTestsV275.test_list_with_additional_filter_old_version` | method | (self, mock_get) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L723–L729` |
| `VolumeAttachTestsV275.test_list_with_additional_filter` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L731–L735` |
| `VolumeAttachTestsV279` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L738–L895` |
| `VolumeAttachTestsV279.microversion` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L739–L739` |
| `VolumeAttachTestsV279.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L741–L751` |
| `VolumeAttachTestsV279._get_req` | method | (self, body, microversion=None) | private | `req` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L760) | 2/8 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L753–L760` |
| `VolumeAttachTestsV279.test_create_volume_attach_pre_v279` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L762–L772` |
| `VolumeAttachTestsV279.test_attach_volume_pre_v279` | method | (self, mock_attach_volume) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L775–L786` |
| `VolumeAttachTestsV279.test_attach_volume_with_delete_on_termination_default_value` | method | (self, mock_attach_volume) | public | not declared | 2/15 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L789–L807` |
| `VolumeAttachTestsV279.test_create_volume_attach_invalid_delete_on_termination_empty` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L809–L817` |
| `VolumeAttachTestsV279.test_create_volume_attach_invalid_delete_on_termination_value` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L819–L835` |
| `VolumeAttachTestsV279.test_attach_volume_v279` | method | (self, mock_attach_volume) | public | not declared | 2/15 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L838–L852` |
| `VolumeAttachTestsV279.test_show_pre_v279` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L854–L863` |
| `VolumeAttachTestsV279.test_list_pre_v279` | method | (self, mock_get_bdms) | public | not declared | 1/23 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L866–L895` |
| `VolumeAttachTestsV285` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L898–L1262` |
| `VolumeAttachTestsV285.microversion` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L899–L899` |
| `VolumeAttachTestsV285.test_swap_volume` | method | (self, mock_save_bdm, mock_get_bdm) | public | not declared | 1/15 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L904–L920` |
| `VolumeAttachTestsV285.test_swap_volume_with_extra_arg` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L922–L932` |
| `VolumeAttachTestsV285.test_update_volume` | method | (self, mock_bdm_save, mock_get_vol_and_inst, mock_swap) | public | not declared | 1/26 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L938–L964` |
| `VolumeAttachTestsV285.test_update_volume_with_bool_from_string` | method | (self, mock_bdm_save, mock_get_vol_and_inst, mock_swap) | public | not declared | 1/38 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L970–L1012` |
| `VolumeAttachTestsV285.test_update_volume_swap` | method | (self, mock_bdm_save, mock_get_vol_and_inst, mock_swap) | public | not declared | 1/25 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1018–L1045` |
| `VolumeAttachTestsV285.test_update_volume_swap_only_old_microversion` | method | (self, mock_bdm_save, mock_get_vol_and_inst, mock_swap) | public | not declared | 1/23 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1051–L1074` |
| `VolumeAttachTestsV285.test_update_volume_with_invalid_volume_id` | method | (self, mock_mr) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1080–L1088` |
| `VolumeAttachTestsV285.test_update_volume_with_changed_attachment_id` | method | (self, mock_get_vol_and_inst) | public | not declared | 1/23 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1092–L1115` |
| `VolumeAttachTestsV285.test_update_volume_with_changed_attachment_id_old_microversion` | method | (self, mock_get_vol_and_inst) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1119–L1131` |
| `VolumeAttachTestsV285.test_update_volume_with_changed_serverId` | method | (self, mock_get_vol_and_inst) | public | not declared | 1/23 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1135–L1158` |
| `VolumeAttachTestsV285.test_update_volume_with_changed_serverId_old_microversion` | method | (self, mock_get_vol_and_inst) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1162–L1174` |
| `VolumeAttachTestsV285.test_update_volume_with_changed_device` | method | (self, mock_get_vol_and_inst) | public | not declared | 1/22 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1178–L1200` |
| `VolumeAttachTestsV285.test_update_volume_with_device_name_old_microversion` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1202–L1212` |
| `VolumeAttachTestsV285.test_update_volume_with_changed_tag` | method | (self, mock_get_vol_and_inst) | public | not declared | 1/22 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1216–L1238` |
| `VolumeAttachTestsV285.test_update_volume_with_tag_old_microversion` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1240–L1250` |
| `VolumeAttachTestsV285.test_update_volume_with_delete_flag_old_microversion` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1252–L1262` |
| `VolumeAttachTestsV289` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1265–L1374` |
| `VolumeAttachTestsV289.microversion` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1266–L1266` |
| `VolumeAttachTestsV289.setUp` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1268–L1281` |
| `VolumeAttachTestsV289.test_show_pre_v289` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1283–L1289` |
| `VolumeAttachTestsV289.test_show_no_attachment_id` | method | (self, mock_get_bdm) | public | not declared | 1/17 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1292–L1308` |
| `VolumeAttachTestsV289.test_list` | method | (self, mock_get_bdms) | public | not declared | 1/58 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1311–L1374` |
| `VolumeAttachTestsV2101` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1377–L1394` |
| `VolumeAttachTestsV2101.microversion` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1378–L1378` |
| `VolumeAttachTestsV2101.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1380–L1382` |
| `VolumeAttachTestsV2101.test_atttach_volume_v2101` | method | (self, mock_attach_volume) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1385–L1394` |
| `SwapVolumeMultiattachTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1397–L1470` |
| `SwapVolumeMultiattachTestCase.test_swap_multiattach_multiple_readonly_attachments_fails` | method | (self, mock_roll_detaching, mock_begin_detaching, mock_get_instance) | public | not declared | 1/38 | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1402–L1470` |
| `SwapVolumeMultiattachTestCase.test_swap_multiattach_multiple_readonly_attachments_fails.fake_volume_get` | function | (_context, volume_id) | public | `{ 'id': volume_id, 'size': 1, 'multiattach': True, 'migration_status': 'migrating', 'attachments': { uuids.server1: { 'attachment_id': uuids.attachment_id1, 'mountpoint': '/dev/vdb' }, uuids.server2: ` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1411); `{ 'id': volume_id, 'size': 1, 'attach_status': 'detached' }` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1428) | — | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1409–L1433` |
| `SwapVolumeMultiattachTestCase.test_swap_multiattach_multiple_readonly_attachments_fails.fake_attachment_get` | function | (_context, attachment_id) | public | `{'attach_mode': 'rw'}` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1436) | — | `src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1435–L1436` |

## Dependencies

- `import datetime` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L17)
- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L18)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L20)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L21)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L22)
- `webob`: imports `exc` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L23)
- `nova.api.openstack`: imports `api_version_request` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L25)
- `nova.api.openstack`: imports `common` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L26)
- `nova.api.openstack.compute`: imports `volume_attachments` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L27)
- `nova.compute`: imports `api as compute_api` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L28)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L29)
- `nova`: imports `context` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L30)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L31)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L32)
- `nova.objects`: imports `block_device as block_device_obj` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L33)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L34)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L35)
- `nova.tests.unit`: imports `fake_block_device` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L36)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L37)
- `nova.volume`: imports `cinder` (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L38)

## Side Effects

- **network**: from nova.api.openstack.compute import volume_attachments (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L27)
- **network**: @mock.patch('nova.api.openstack.common.get_instance') (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1399)
- **global-mutation**: FAKE_UUID = 'aaaaaaaa-aaaa-aaaa-aaaa-aaaaaaaaaaaa' (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L41)
- **global-mutation**: FAKE_UUID_A = '00000000-aaaa-aaaa-aaaa-000000000000' (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L43)
- **global-mutation**: FAKE_UUID_B = 'bbbbbbbb-bbbb-bbbb-bbbb-bbbbbbbbbbbb' (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L45)
- **global-mutation**: FAKE_UUID_C = 'cccccccc-cccc-cccc-cccc-cccccccccccc' (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L47)
- **global-mutation**: FAKE_UUID_NOTEXIST = '00000000-aaaa-aaaa-aaaa-aaaaaaaaaaaa' (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L154)

## Security Surface

- **sink** (`db-write`): return attachments.update(self.req, uuids.instance, uuid, body=body) (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L442)
- **sink** (`db-write`): status_int = self.controller.update.wsgi_codes(self.req) (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L469)
- **sink** (`db-write`): self.controller.update(self.req, FAKE_UUID, (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L960)
- **sink** (`db-write`): self.controller.update(self.req, FAKE_UUID, (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L992)
- **sink** (`db-write`): self.controller.update(self.req, FAKE_UUID, (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1000)
- **sink** (`db-write`): self.controller.update(self.req, FAKE_UUID, (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1008)
- **sink** (`db-write`): self.controller.update(self.req, FAKE_UUID, (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1039)
- **sink** (`db-write`): self.controller.update(req, FAKE_UUID, (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1071)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1086)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1113)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1128)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1156)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1171)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1198)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1209)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1236)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1247)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1259)
- **sink** (`db-write`): webob.exc.HTTPBadRequest, controller.update, req, (src/nova/tests/unit/api/openstack/compute/test_volume_attachments.py:L1463)

