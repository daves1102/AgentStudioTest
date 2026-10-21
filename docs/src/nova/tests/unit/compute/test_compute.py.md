# src/nova/tests/unit/compute/test_compute.py

## Overview

This file implements the `test_compute` module, defining 17 classs, 6 constants, 172 functions, 559 methods, 1 staticmethod, 75 imports, 118 side effects, 14 security surface entries.

Lines: total 14744, code 12149, comment 645, blank 1950

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L100–L100` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L101–L101` |
| `FAKE_IMAGE_REF` | constant | — | exported | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L104–L104` |
| `NODENAME` | constant | — | exported | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L106–L106` |
| `NODENAME2` | constant | — | exported | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L107–L107` |
| `COMPUTE_ID` | constant | — | exported | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L108–L108` |
| `fake_not_implemented` | function | (*args, **kwargs) | exported | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L111–L112` |
| `get_primitive_instance_by_uuid` | function | (context, instance_uuid) | exported | `jsonutils.to_primitive(instance)` (src/nova/tests/unit/compute/test_compute.py:L120) | 1/3 | `src/nova/tests/unit/compute/test_compute.py:L115–L120` |
| `unify_instance` | function | (instance) | exported | `newdict` (src/nova/tests/unit/compute/test_compute.py:L141) | 5/11 | `src/nova/tests/unit/compute/test_compute.py:L123–L141` |
| `FakeComputeTaskAPI` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L144–L149` |
| `FakeComputeTaskAPI.resize_instance` | method | (self, ctxt, instance, scheduler_hint, flavor, reservations=None, clean_shutdown=True, request_spec=None, host_list=None) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_compute.py:L146–L149` |
| `BaseTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L152–L373` |
| `BaseTestCase.setUp` | method | (self) | public | not declared | 1/58 | `src/nova/tests/unit/compute/test_compute.py:L154–L285` |
| `BaseTestCase.setUp.fake_get_compute_nodes_in_db` | function | (self, context, *args, **kwargs) | public | `[objects.ComputeNode._from_db_object( context, objects.ComputeNode(), cn) for cn in fake_compute_nodes]` (src/nova/tests/unit/compute/test_compute.py:L220) | — | `src/nova/tests/unit/compute/test_compute.py:L188–L222` |
| `BaseTestCase.setUp.fake_compute_node_delete` | function | (context, compute_node_id, constraint=None) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L224–L226` |
| `BaseTestCase.setUp.fake_show` | function | (meh, context, id, **kwargs) | public | `{'id': id, 'name': 'fake_name', 'status': 'active', 'properties': {'kernel_id': uuids.kernel_id, 'ramdisk_id': uuids.ramdisk_id, 'something_else': 'meow'}}` (src/nova/tests/unit/compute/test_compute.py:L246) | — | `src/nova/tests/unit/compute/test_compute.py:L244–L253` |
| `BaseTestCase.setUp.fake_get_nw_info` | function | (cls, ctxt, instance, *args, **kwargs) | public | `network_model.NetworkInfo()` (src/nova/tests/unit/compute/test_compute.py:L262) | — | `src/nova/tests/unit/compute/test_compute.py:L261–L262` |
| `BaseTestCase.tearDown` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/compute/test_compute.py:L287–L292` |
| `BaseTestCase._fake_instance` | method | (self, updates) | private | `fake_instance.fake_instance_obj(None, **updates)` (src/nova/tests/unit/compute/test_compute.py:L295) | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L294–L295` |
| `BaseTestCase._create_fake_instance_obj` | method | (self, params=None, type_name='m1.tiny', services=False, ctxt=None) | private | `inst` (src/nova/tests/unit/compute/test_compute.py:L367) | 6/66 | `src/nova/tests/unit/compute/test_compute.py:L297–L367` |
| `BaseTestCase._init_aggregate_with_host` | method | (self, aggr, aggr_name, zone, host) | private | `aggr` (src/nova/tests/unit/compute/test_compute.py:L373) | 2/5 | `src/nova/tests/unit/compute/test_compute.py:L369–L373` |
| `ComputeVolumeTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L376–L1663` |
| `ComputeVolumeTestCase.setUp` | method | (self) | public | not declared | 1/37 | `src/nova/tests/unit/compute/test_compute.py:L378–L418` |
| `ComputeVolumeTestCase.setUp.store_cinfo` | function | (context, *args, **kwargs) | public | `self.fake_volume` (src/nova/tests/unit/compute/test_compute.py:L413) | — | `src/nova/tests/unit/compute/test_compute.py:L411–L413` |
| `ComputeVolumeTestCase.test_attach_volume_serial` | method | (self, mock_event) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L421–L431` |
| `ComputeVolumeTestCase.test_attach_volume_raises` | method | (self, mock_notify, mock_elevate, mock_event) | public | not declared | 1/32 | `src/nova/tests/unit/compute/test_compute.py:L436–L471` |
| `ComputeVolumeTestCase.test_attach_volume_raises.fake_attach` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L444–L445` |
| `ComputeVolumeTestCase.test_attach_volume_raises_new_flow` | method | (self, mock_notify, mock_elevate) | public | not declared | 1/30 | `src/nova/tests/unit/compute/test_compute.py:L475–L508` |
| `ComputeVolumeTestCase.test_attach_volume_raises_new_flow.fake_attach` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L484–L485` |
| `ComputeVolumeTestCase.test_attach_volume_ignore_VolumeAttachmentNotFound` | method | (self, mock_notify, mock_elevate, mock_event, mock_debug_log) | public | not declared | 1/38 | `src/nova/tests/unit/compute/test_compute.py:L514–L561` |
| `ComputeVolumeTestCase.test_attach_volume_ignore_VolumeAttachmentNotFound.fake_attach` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L530–L531` |
| `ComputeVolumeTestCase.test_detach_volume_api_raises` | method | (self, mock_event) | public | not declared | 1/25 | `src/nova/tests/unit/compute/test_compute.py:L564–L589` |
| `ComputeVolumeTestCase.test_detach_volume_bdm_destroyed` | method | (self, mock_event) | public | not declared | 1/20 | `src/nova/tests/unit/compute/test_compute.py:L592–L614` |
| `ComputeVolumeTestCase.test_await_block_device_created_too_slow` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L616–L629` |
| `ComputeVolumeTestCase.test_await_block_device_created_too_slow.never_get` | function | (self, context, vol_id) | public | `{ 'status': 'creating', 'id': 'blah', }` (src/nova/tests/unit/compute/test_compute.py:L621) | — | `src/nova/tests/unit/compute/test_compute.py:L620–L624` |
| `ComputeVolumeTestCase.test_await_block_device_created_failed` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_compute.py:L631–L640` |
| `ComputeVolumeTestCase.test_await_block_device_created_slow` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L642–L661` |
| `ComputeVolumeTestCase.test_await_block_device_created_slow.slow_get` | function | (cls, context, vol_id) | public | `{ 'status': 'creating', 'id': 'blah', }` (src/nova/tests/unit/compute/test_compute.py:L650); `{ 'status': 'available', 'id': 'blah', }` (src/nova/tests/unit/compute/test_compute.py:L654) | — | `src/nova/tests/unit/compute/test_compute.py:L647–L657` |
| `ComputeVolumeTestCase.test_await_block_device_created_retries_zero` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L663–L676` |
| `ComputeVolumeTestCase.test_await_block_device_created_retries_zero.volume_get` | function | (self, context, vol_id) | public | `{ 'status': 'available', 'id': 'blah', }` (src/nova/tests/unit/compute/test_compute.py:L669) | — | `src/nova/tests/unit/compute/test_compute.py:L668–L672` |
| `ComputeVolumeTestCase.test_boot_volume_serial` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/compute/test_compute.py:L678–L702` |
| `ComputeVolumeTestCase.test_boot_volume_metadata` | method | (self, metadata=True) | public | not declared | 3/44 | `src/nova/tests/unit/compute/test_compute.py:L704–L765` |
| `ComputeVolumeTestCase.test_boot_volume_metadata.volume_api_get` | function | (*args, **kwargs) | public | `{ 'size': 1, 'volume_image_metadata': {'vol_test_key': 'vol_test_value', 'min_ram': u'128', 'min_disk': u'256', 'size': u'536870912' }, }` (src/nova/tests/unit/compute/test_compute.py:L707); `{}` (src/nova/tests/unit/compute/test_compute.py:L716) | — | `src/nova/tests/unit/compute/test_compute.py:L705–L716` |
| `ComputeVolumeTestCase.test_boot_volume_no_metadata` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L767–L768` |
| `ComputeVolumeTestCase.test_boot_image_metadata` | method | (self, metadata=True) | public | not declared | 2/19 | `src/nova/tests/unit/compute/test_compute.py:L770–L798` |
| `ComputeVolumeTestCase.test_boot_image_metadata.image_api_get` | function | (*args, **kwargs) | public | `{ 'properties': {'img_test_key': 'img_test_value'} }` (src/nova/tests/unit/compute/test_compute.py:L773); `{}` (src/nova/tests/unit/compute/test_compute.py:L777) | — | `src/nova/tests/unit/compute/test_compute.py:L771–L777` |
| `ComputeVolumeTestCase.test_boot_image_no_metadata` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L800–L801` |
| `ComputeVolumeTestCase.test_get_host_volume_bdms` | method | (self, mock_get_by_inst, mock_get_by_host) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_compute.py:L806–L824` |
| `ComputeVolumeTestCase.test_poll_volume_usage_disabled` | method | (self, mock_get, mock_last) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_compute.py:L828–L836` |
| `ComputeVolumeTestCase.test_poll_volume_usage_returns_no_vols` | method | (self, mock_get_usage, mock_get_bdms) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_compute.py:L840–L849` |
| `ComputeVolumeTestCase.test_poll_volume_usage_with_data` | method | (self, mock_get_usage, mock_get_bdms, mock_notify) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_compute.py:L854–L872` |
| `ComputeVolumeTestCase.test_detach_volume_usage` | method | (self, mock_exists, mock_get_all, mock_get_bdms, mock_stats, mock_get, mock_notify, mock_elevate, mock_notify_usage) | public | not declared | 1/92 | `src/nova/tests/unit/compute/test_compute.py:L883–L990` |
| `ComputeVolumeTestCase.test_detach_volume_usage.fake_get_volume_encryption_metadata` | function | (self, context, volume_id) | public | `{}` (src/nova/tests/unit/compute/test_compute.py:L916) | — | `src/nova/tests/unit/compute/test_compute.py:L915–L916` |
| `ComputeVolumeTestCase.test_prepare_image_mapping` | method | (self) | public | not declared | 2/45 | `src/nova/tests/unit/compute/test_compute.py:L992–L1041` |
| `ComputeVolumeTestCase.test_validate_bdm` | method | (self) | public | not declared | 1/167 | `src/nova/tests/unit/compute/test_compute.py:L1043–L1234` |
| `ComputeVolumeTestCase.test_validate_bdm.fake_get` | function | (self, context, res_id) | public | `{'id': res_id, 'size': 4, 'multiattach': False}` (src/nova/tests/unit/compute/test_compute.py:L1045) | — | `src/nova/tests/unit/compute/test_compute.py:L1044–L1045` |
| `ComputeVolumeTestCase.test_validate_bdm.fake_attachment_create` | function | (_self, ctxt, vol_id, *args, **kwargs) | public | `{'id': getattr(uuids, vol_id)}` (src/nova/tests/unit/compute/test_compute.py:L1049) | — | `src/nova/tests/unit/compute/test_compute.py:L1047–L1049` |
| `ComputeVolumeTestCase.test_validate_bdm_with_more_than_one_default` | method | (self) | public | not declared | 1/33 | `src/nova/tests/unit/compute/test_compute.py:L1236–L1268` |
| `ComputeVolumeTestCase.test_validate_bdm_media_service_invalid_volume` | method | (self, mock_att_create) | public | not declared | 3/36 | `src/nova/tests/unit/compute/test_compute.py:L1272–L1314` |
| `ComputeVolumeTestCase.test_validate_bdm_media_service_valid` | method | (self, mock_att_create, mock_check_av_zone) | public | not declared | 1/28 | `src/nova/tests/unit/compute/test_compute.py:L1319–L1347` |
| `ComputeVolumeTestCase.test_volume_snapshot_create` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L1349–L1358` |
| `ComputeVolumeTestCase.test_volume_snapshot_create_instance_not_running` | method | (self, mock_debug) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_compute.py:L1361–L1369` |
| `ComputeVolumeTestCase.test_volume_snapshot_delete` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L1371–L1380` |
| `ComputeVolumeTestCase.test_volume_snapshot_delete_instance_not_running` | method | (self, mock_debug) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_compute.py:L1383–L1391` |
| `ComputeVolumeTestCase.test_prep_block_device_over_quota_failure` | method | (self, mock_create) | public | not declared | 1/20 | `src/nova/tests/unit/compute/test_compute.py:L1395–L1414` |
| `ComputeVolumeTestCase.test_prep_block_device_with_blanks` | method | (self, attach_block_devices, convert_swap, convert_local_images, convert_ephemerals, convert_volumes, convert_snapshots, convert_images, convert_blanks, get_swap) | public | not declared | 3/66 | `src/nova/tests/unit/compute/test_compute.py:L1425–L1498` |
| `ComputeVolumeTestCase.test_prep_block_device_with_blanks.fake_attach_block_devices` | function | (bdm, *args, **kwargs) | public | `bdm` (src/nova/tests/unit/compute/test_compute.py:L1457) | — | `src/nova/tests/unit/compute/test_compute.py:L1456–L1457` |
| `ComputeVolumeTestCase._test__delete_dangling_bdms` | method | (self, instance, nova_bdms, cinder_attachments, valid=False) | private | `mock_destroy, mock_attachment_delete` (src/nova/tests/unit/compute/test_compute.py:L1522) | 2/20 | `src/nova/tests/unit/compute/test_compute.py:L1500–L1522` |
| `ComputeVolumeTestCase._test_delete_dangling_bdms_cinder_error` | method | (self) | private | not declared | 1/23 | `src/nova/tests/unit/compute/test_compute.py:L1524–L1547` |
| `ComputeVolumeTestCase.test_delete_dangling_bdms_cinder_not_found` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L1552–L1553` |
| `ComputeVolumeTestCase.test_delete_dangling_bdms_cinder_client_error` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L1558–L1559` |
| `ComputeVolumeTestCase.test_dangling_bdms_nothing_to_delete` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_compute.py:L1561–L1568` |
| `ComputeVolumeTestCase.test_dangling_bdms_delete_from_bdm` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/compute/test_compute.py:L1570–L1606` |
| `ComputeVolumeTestCase.test_dangling_bdms_delete_from_multi_bdm` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/compute/test_compute.py:L1608–L1636` |
| `ComputeVolumeTestCase.test_dangling_bdms_delete_cinder_attachments` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/compute/test_compute.py:L1638–L1663` |
| `ComputeTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L1666–L9027` |
| `ComputeTestCase.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L1669–L1683` |
| `ComputeTestCase.fake_share_info` | method | (self) | public | `share_info` (src/nova/tests/unit/compute/test_compute.py:L1702) | 1/17 | `src/nova/tests/unit/compute/test_compute.py:L1685–L1702` |
| `ComputeTestCase.test_wrap_instance_fault` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L1704–L1722` |
| `ComputeTestCase.test_wrap_instance_fault.did_it_add_fault` | function | (*args) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L1709–L1710` |
| `ComputeTestCase.test_wrap_instance_fault.failure` | function | (self2, context, instance) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L1716–L1717` |
| `ComputeTestCase.test_wrap_instance_fault_instance_in_args` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L1724–L1742` |
| `ComputeTestCase.test_wrap_instance_fault_instance_in_args.did_it_add_fault` | function | (*args) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L1729–L1730` |
| `ComputeTestCase.test_wrap_instance_fault_instance_in_args.failure` | function | (self2, context, instance) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L1736–L1737` |
| `ComputeTestCase.test_wrap_instance_fault_no_instance` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L1744–L1762` |
| `ComputeTestCase.test_wrap_instance_fault_no_instance.did_it_add_fault` | function | (*args) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L1749–L1750` |
| `ComputeTestCase.test_wrap_instance_fault_no_instance.failure` | function | (self2, context, instance) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L1756–L1757` |
| `ComputeTestCase.test_create_instance_with_img_ref_associates_config_drive` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/compute/test_compute.py:L1764–L1779` |
| `ComputeTestCase.test_create_instance_associates_config_drive` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/compute/test_compute.py:L1781–L1796` |
| `ComputeTestCase.test_create_instance_unlimited_memory` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L1798–L1809` |
| `ComputeTestCase.test_create_instance_unlimited_disk` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_compute.py:L1811–L1819` |
| `ComputeTestCase.test_create_multiple_instances_then_starve` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/compute/test_compute.py:L1821–L1853` |
| `ComputeTestCase.test_create_instance_with_oversubscribed_ram` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_compute.py:L1855–L1880` |
| `ComputeTestCase.test_create_instance_with_oversubscribed_ram_fail` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_compute.py:L1882–L1906` |
| `ComputeTestCase.test_create_instance_with_oversubscribed_disk` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_compute.py:L1908–L1932` |
| `ComputeTestCase.test_create_instance_without_node_param` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_compute.py:L1934–L1942` |
| `ComputeTestCase.test_create_instance_no_image` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_compute.py:L1944–L1951` |
| `ComputeTestCase.test_default_access_ip` | method | (self) | public | not declared | 2/27 | `src/nova/tests/unit/compute/test_compute.py:L1955–L1996` |
| `ComputeTestCase.test_default_access_ip._instance_update` | function | (self, ctxt, instance_uuid, **kwargs) | private | `orig_update(ctxt, instance_uuid, **kwargs)` (src/nova/tests/unit/compute/test_compute.py:L1982) | — | `src/nova/tests/unit/compute/test_compute.py:L1978–L1982` |
| `ComputeTestCase.test_no_default_access_ip` | method | (self) | public | not declared | 2/11 | `src/nova/tests/unit/compute/test_compute.py:L1998–L2010` |
| `ComputeTestCase.test_fail_to_schedule_persists` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_compute.py:L2012–L2020` |
| `ComputeTestCase.test_run_instance_setup_block_device_mapping_fail` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_compute.py:L2022–L2045` |
| `ComputeTestCase.test_run_instance_setup_block_device_mapping_fail.fake` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L2028–L2029` |
| `ComputeTestCase.test_setup_block_device_over_quota_fail` | method | (self, mock_prep_block_dev) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_compute.py:L2049–L2069` |
| `ComputeTestCase.test_run_instance_spawn_fail` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_compute.py:L2071–L2092` |
| `ComputeTestCase.test_run_instance_spawn_fail.fake` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L2077–L2078` |
| `ComputeTestCase.test_run_instance_dealloc_network_instance_not_found` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_compute.py:L2094–L2115` |
| `ComputeTestCase.test_run_instance_dealloc_network_instance_not_found.fake` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L2102–L2103` |
| `ComputeTestCase.test_run_instance_bails_on_missing_instance` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L2117–L2126` |
| `ComputeTestCase.test_run_instance_bails_on_deleting_instance` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L2128–L2140` |
| `ComputeTestCase.test_can_terminate_on_error_state` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L2142–L2152` |
| `ComputeTestCase.test_run_terminate` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_compute.py:L2154–L2176` |
| `ComputeTestCase.test_run_terminate_with_vol_attached` | method | (self) | public | not declared | 1/35 | `src/nova/tests/unit/compute/test_compute.py:L2178–L2251` |
| `ComputeTestCase.test_run_terminate_with_vol_attached.fake_check_availability_zone` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L2191–L2192` |
| `ComputeTestCase.test_run_terminate_with_vol_attached.fake_attachment_create` | function | (*args, **kwargs) | public | `{'id': uuids.attachment_id}` (src/nova/tests/unit/compute/test_compute.py:L2195) | — | `src/nova/tests/unit/compute/test_compute.py:L2194–L2195` |
| `ComputeTestCase.test_run_terminate_with_vol_attached.fake_volume_get` | function | (self, context, volume_id) | public | `{'id': volume_id, 'attach_status': 'attached', 'attachments': {instance.uuid: { 'attachment_id': uuids.attachment_id } }, 'multiattach': False }` (src/nova/tests/unit/compute/test_compute.py:L2198) | — | `src/nova/tests/unit/compute/test_compute.py:L2197–L2205` |
| `ComputeTestCase.test_run_terminate_with_vol_attached.fake_terminate_connection` | function | (self, context, volume_id, connector) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L2207–L2208` |
| `ComputeTestCase.test_run_terminate_with_vol_attached.fake_detach` | function | (self, context, volume_id, instance_uuid) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L2210–L2211` |
| `ComputeTestCase.test_run_terminate_with_vol_attached.fake_rpc_attach_volume` | function | (self, context, instance, volume, device, disk_bus, device_type, **kwargs) | public | `bdm` (src/nova/tests/unit/compute/test_compute.py:L2226) | — | `src/nova/tests/unit/compute/test_compute.py:L2215–L2226` |
| `ComputeTestCase.test_run_terminate_no_image` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L2253–L2266` |
| `ComputeTestCase.test_terminate_no_network` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L2268–L2283` |
| `ComputeTestCase.test_run_terminate_timestamps` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/compute/test_compute.py:L2285–L2307` |
| `ComputeTestCase.test_run_terminate_deallocate_net_failure_sets_error_state` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_compute.py:L2309–L2330` |
| `ComputeTestCase.test_run_terminate_deallocate_net_failure_sets_error_state._fake_deallocate_network` | function | (*args, **kwargs) | private | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L2319–L2320` |
| `ComputeTestCase.test_stop` | method | (self, mock_notify) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_compute.py:L2333–L2352` |
| `ComputeTestCase.test_start` | method | (self, mock_notify) | public | not declared | 1/22 | `src/nova/tests/unit/compute/test_compute.py:L2355–L2377` |
| `ComputeTestCase.test_start_shelved_instance` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/compute/test_compute.py:L2379–L2418` |
| `ComputeTestCase.test_start_shelved_instance.fake_delete` | function | (self_, ctxt, image_id) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L2383–L2384` |
| `ComputeTestCase.test_stop_start_no_image` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_compute.py:L2420–L2437` |
| `ComputeTestCase.test_rescue` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_compute.py:L2439–L2469` |
| `ComputeTestCase.test_rescue.fake_rescue` | function | (self, context, instance_ref, network_info, image_meta, rescue_password, block_device_info, share_info) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L2445–L2447` |
| `ComputeTestCase.test_rescue.fake_unrescue` | function | (self, context, instance_ref) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L2451–L2452` |
| `ComputeTestCase.test_rescue_notifications` | method | (self, mock_context, mock_notify) | public | not declared | 3/42 | `src/nova/tests/unit/compute/test_compute.py:L2474–L2523` |
| `ComputeTestCase.test_rescue_notifications.fake_rescue` | function | (self, context, instance_ref, network_info, image_meta, rescue_password, block_device_info, share_info) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L2476–L2478` |
| `ComputeTestCase.test_unrescue_notifications` | method | (self, mock_context, mock_notify) | public | not declared | 3/38 | `src/nova/tests/unit/compute/test_compute.py:L2527–L2572` |
| `ComputeTestCase.test_unrescue_notifications.fake_unrescue` | function | (self, context, instance_ref) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L2529–L2530` |
| `ComputeTestCase.test_rescue_handle_err` | method | (self, mock_get, mock_rescue, mock_power_off, mock_get_block_info, mock_get_share_info) | public | not declared | 1/22 | `src/nova/tests/unit/compute/test_compute.py:L2580–L2607` |
| `ComputeTestCase.test_rescue_with_image_specified` | method | (self, mock_rescue, mock_power_off, mock_image_get, mock_get_block_info, mock_get_share_info, mock_drv_mount) | public | not declared | 1/25 | `src/nova/tests/unit/compute/test_compute.py:L2616–L2645` |
| `ComputeTestCase.test_rescue_with_image_specified_and_share` | method | (self, mock_rescue, mock_power_off, mock_image_get, mock_get_block_info, mock_get_share_info, mock_grant, mock_drv_mount, mock_manila_deny) | public | not declared | 1/30 | `src/nova/tests/unit/compute/test_compute.py:L2656–L2691` |
| `ComputeTestCase.test_rescue_with_image_specified_and_mount_error` | method | (self, mock_rescue, mock_power_off, mock_image_get, mock_get_block_info, mock_get_share_info, mock_drv_mount, mock_db_fault, mock_manila_deny) | public | not declared | 1/31 | `src/nova/tests/unit/compute/test_compute.py:L2702–L2738` |
| `ComputeTestCase.test_rescue_with_base_image_when_image_not_specified` | method | (self, mock_rescue, mock_power_off, mock_image_get, mock_get_block_info, mock_get_share_info) | public | not declared | 1/29 | `src/nova/tests/unit/compute/test_compute.py:L2746–L2781` |
| `ComputeTestCase.test_power_on` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_compute.py:L2783–L2807` |
| `ComputeTestCase.test_power_on.fake_driver_power_on` | function | (self, context, instance, network_info, block_device_info, accel_device_info=None, share_info=None) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L2788–L2791` |
| `ComputeTestCase.test_power_on_with_share` | method | (self, mock_share, mock_grant, mock_mount, mock_activate, mock_power_on, mock_nw_info, mock_blockdev) | public | not declared | 1/21 | `src/nova/tests/unit/compute/test_compute.py:L2817–L2839` |
| `ComputeTestCase.test_power_on_with_no_share` | method | (self, mock_shares, mock_mount, mock_activate, mock_power_on, mock_nw_info, mock_blockdev) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_compute.py:L2848–L2868` |
| `ComputeTestCase.test_power_on_with_accels` | method | (self, mock_get_arqs, mock_power_on, mock_nw_info, mock_blockdev, mock_shares) | public | not declared | 1/20 | `src/nova/tests/unit/compute/test_compute.py:L2876–L2896` |
| `ComputeTestCase.test_power_off` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_compute.py:L2898–L2922` |
| `ComputeTestCase.test_power_off.fake_driver_power_off` | function | (self, instance, shutdown_timeout, shutdown_attempts) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L2903–L2905` |
| `ComputeTestCase.test_power_off_with_share` | method | (self, mock_share, mock_umount, mock_deactivate, mock_power_off, mock_nw_info, mock_blockdev) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_compute.py:L2931–L2950` |
| `ComputeTestCase.test_power_off_with_no_share` | method | (self, mock_share, mock_umount, mock_deactivate, mock_power_off, mock_nw_info, mock_blockdev) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_compute.py:L2959–L2976` |
| `ComputeTestCase.test_pause` | method | (self, mock_context, mock_notify) | public | not declared | 1/40 | `src/nova/tests/unit/compute/test_compute.py:L2980–L3020` |
| `ComputeTestCase.test_suspend` | method | (self, mock_context, mock_notify, mock_get_share_info, mock_resume) | public | not declared | 1/31 | `src/nova/tests/unit/compute/test_compute.py:L3026–L3062` |
| `ComputeTestCase.test_suspend_with_share` | method | (self, mock_context, mock_notify, mock_get_share_info, mock_resume, mock_deny_share) | public | not declared | 1/31 | `src/nova/tests/unit/compute/test_compute.py:L3069–L3107` |
| `ComputeTestCase.test_suspend_error` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_compute.py:L3109–L3123` |
| `ComputeTestCase.test_suspend_not_implemented` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_compute.py:L3125–L3140` |
| `ComputeTestCase.test_suspend_rescued` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_compute.py:L3142–L3160` |
| `ComputeTestCase.test_resume_notifications` | method | (self, mock_context, mock_notify, mock_get_bdms) | public | not declared | 1/28 | `src/nova/tests/unit/compute/test_compute.py:L3165–L3193` |
| `ComputeTestCase.test_resume_no_old_state` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L3195–L3209` |
| `ComputeTestCase.test_resume_error` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_compute.py:L3211–L3229` |
| `ComputeTestCase.test_rebuild` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_compute.py:L3231–L3248` |
| `ComputeTestCase.test_rebuild_driver` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/compute/test_compute.py:L3250–L3280` |
| `ComputeTestCase.test_rebuild_driver.fake` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L3254–L3261` |
| `ComputeTestCase.test_rebuild_driver_with_volumes` | method | (self, mock_detach) | public | not declared | 1/33 | `src/nova/tests/unit/compute/test_compute.py:L3283–L3333` |
| `ComputeTestCase.test_rebuild_driver_with_volumes.fake` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L3300–L3314` |
| `ComputeTestCase.test_rebuild_no_image` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_compute.py:L3335–L3352` |
| `ComputeTestCase.test_rebuild_launched_at_time` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/compute/test_compute.py:L3354–L3376` |
| `ComputeTestCase.test_rebuild_with_injected_files` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/compute/test_compute.py:L3378–L3407` |
| `ComputeTestCase.test_rebuild_with_injected_files._spawn` | function | (cls, context, instance, image_meta, injected_files, admin_password, allocations, network_info, block_device_info) | private | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L3388–L3391` |
| `ComputeTestCase._test_reboot` | method | (self, soft, mock_notify_action, mock_get_power, mock_get_orig, mock_update, mock_notify_usage, mock_get_blk, mock_get_bdms, mock_shares, mock_del_stale_bdms, test_delete=False, test_unrescue=False, fail_reboot=False, fail_running=False) | private | not declared | 20/160 | `src/nova/tests/unit/compute/test_compute.py:L3421–L3619` |
| `ComputeTestCase._test_reboot._fake_elevated` | function | (self) | private | `econtext` (src/nova/tests/unit/compute/test_compute.py:L3491) | — | `src/nova/tests/unit/compute/test_compute.py:L3490–L3491` |
| `ComputeTestCase._test_reboot.fake_reboot` | function | (self, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L3532–L3541` |
| `ComputeTestCase.test_reboot_soft` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L3621–L3622` |
| `ComputeTestCase.test_reboot_soft_and_delete` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L3624–L3625` |
| `ComputeTestCase.test_reboot_soft_and_rescued` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L3627–L3628` |
| `ComputeTestCase.test_reboot_soft_and_delete_and_rescued` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L3630–L3631` |
| `ComputeTestCase.test_reboot_hard` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L3633–L3634` |
| `ComputeTestCase.test_reboot_hard_and_delete` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L3636–L3637` |
| `ComputeTestCase.test_reboot_hard_and_rescued` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L3639–L3640` |
| `ComputeTestCase.test_reboot_hard_and_delete_and_rescued` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L3642–L3643` |
| `ComputeTestCase._test_reboot_with_accels` | method | (self, mock_notify_action, mock_get_power, mock_get_orig, mock_update, mock_notify_usage, mock_get_blk, mock_get_bdms, mock_inst_save, mock_reboot, mock_shares, mock_del_stale_bdms, extra_specs=None, accel_info=None) | private | `instance['uuid']` (src/nova/tests/unit/compute/test_compute.py:L3684) | 3/21 | `src/nova/tests/unit/compute/test_compute.py:L3659–L3684` |
| `ComputeTestCase.test_reboot_with_accels_ok` | method | (self, mock_get_arqs) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L3687–L3696` |
| `ComputeTestCase.test_reboot_with_accels_no_dp` | method | (self, mock_get_arqs) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_compute.py:L3699–L3701` |
| `ComputeTestCase.test_soft_reboot_with_share_info` | method | (self, mock_shares, mock_notify_action, mock_get_power, mock_get_orig, mock_update, mock_notify_usage, mock_get_blk, mock_get_bdms, mock_inst_save, mock_reboot, mock_mount_all) | public | `instance['uuid']` (src/nova/tests/unit/compute/test_compute.py:L3749) | 1/29 | `src/nova/tests/unit/compute/test_compute.py:L3716–L3749` |
| `ComputeTestCase.test_hard_reboot_with_share_info` | method | (self, mock_shares, mock_notify_action, mock_get_power, mock_get_orig, mock_update, mock_notify_usage, mock_get_blk, mock_get_bdms, mock_inst_save, mock_reboot, mock_mount_all) | public | `instance['uuid']` (src/nova/tests/unit/compute/test_compute.py:L3797) | 1/29 | `src/nova/tests/unit/compute/test_compute.py:L3764–L3797` |
| `ComputeTestCase.test_hard_reboot_with_share_info_error` | method | (self, mock_shares, mock_notify_action, mock_get_power, mock_get_orig, mock_update, mock_notify_usage, mock_get_blk, mock_get_bdms, mock_inst_save, mock_reboot, mock_mount_all) | public | `instance['uuid']` (src/nova/tests/unit/compute/test_compute.py:L3847) | 1/31 | `src/nova/tests/unit/compute/test_compute.py:L3812–L3847` |
| `ComputeTestCase.test_reboot_fail` | method | (self, mock_to_primitive) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L3850–L3851` |
| `ComputeTestCase.test_reboot_fail_running` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L3853–L3854` |
| `ComputeTestCase.test_reboot_hard_pausing` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_compute.py:L3856–L3866` |
| `ComputeTestCase.test_get_instance_block_device_info_source_image` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/compute/test_compute.py:L3868–L3900` |
| `ComputeTestCase.test_get_instance_block_device_info_passed_bdms` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/compute/test_compute.py:L3902–L3929` |
| `ComputeTestCase.test_get_instance_block_device_info_swap_and_ephemerals` | method | (self) | public | not declared | 1/96 | `src/nova/tests/unit/compute/test_compute.py:L3931–L4031` |
| `ComputeTestCase.test_inject_network_info` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L4033–L4048` |
| `ComputeTestCase.test_inject_network_info.fake_driver_inject_network` | function | (self, instance, network_info) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L4037–L4038` |
| `ComputeTestCase._get_snapshotting_instance` | method | (self) | private | `instance` (src/nova/tests/unit/compute/test_compute.py:L4057) | 1/7 | `src/nova/tests/unit/compute/test_compute.py:L4050–L4057` |
| `ComputeTestCase.test_snapshot` | method | (self, mock_notify_snapshot) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_compute.py:L4060–L4073` |
| `ComputeTestCase.test_snapshot_no_image` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_compute.py:L4075–L4080` |
| `ComputeTestCase._test_snapshot_fails` | method | (self, raise_during_cleanup, method, expected_state=True) | private | not declared | 2/33 | `src/nova/tests/unit/compute/test_compute.py:L4082–L4123` |
| `ComputeTestCase._test_snapshot_fails.fake_snapshot` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L4084–L4085` |
| `ComputeTestCase._test_snapshot_fails.fake_delete` | function | (self_, context, image_id) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L4089–L4092` |
| `ComputeTestCase.test_backup_fails` | method | (self, mock_rotate) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L4126–L4127` |
| `ComputeTestCase.test_backup_fails_cleanup_ignores_exception` | method | (self, mock_rotate) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L4130–L4131` |
| `ComputeTestCase.test_backup_fails_rotate_backup` | method | (self, mock_snap, mock_rotate) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_compute.py:L4136–L4138` |
| `ComputeTestCase.test_snapshot_fails` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L4140–L4141` |
| `ComputeTestCase.test_snapshot_fails_cleanup_ignores_exception` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L4143–L4144` |
| `ComputeTestCase._test_snapshot_deletes_image_on_failure` | method | (self, status, exc, image_not_exist=False) | private | not declared | 1/13 | `src/nova/tests/unit/compute/test_compute.py:L4146–L4176` |
| `ComputeTestCase._test_snapshot_deletes_image_on_failure.fake_show` | function | (self_, context, image_id, **kwargs) | public | `image` (src/nova/tests/unit/compute/test_compute.py:L4156) | — | `src/nova/tests/unit/compute/test_compute.py:L4150–L4156` |
| `ComputeTestCase._test_snapshot_deletes_image_on_failure.fake_delete` | function | (self_, context, image_id) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L4160–L4162` |
| `ComputeTestCase._test_snapshot_deletes_image_on_failure.fake_snapshot` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L4166–L4167` |
| `ComputeTestCase.test_snapshot_fails_with_glance_error` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_compute.py:L4178–L4182` |
| `ComputeTestCase.test_snapshot_fails_with_task_state_error` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L4184–L4194` |
| `ComputeTestCase.test_snapshot_fails_with_instance_not_found` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L4196–L4203` |
| `ComputeTestCase.test_snapshot_fails_with_instance_not_found_and_image_not_found` | method | (self, mock_warning) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_compute.py:L4206–L4212` |
| `ComputeTestCase.test_snapshot_fails_with_instance_not_running` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L4214–L4221` |
| `ComputeTestCase.test_snapshot_handles_cases_when_instance_is_deleted` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_compute.py:L4223–L4228` |
| `ComputeTestCase.test_snapshot_handles_cases_when_instance_is_not_found` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_compute.py:L4230–L4235` |
| `ComputeTestCase._assert_state` | method | (self, state_dict) | private | not declared | 4/11 | `src/nova/tests/unit/compute/test_compute.py:L4237–L4249` |
| `ComputeTestCase.test_rotate_backups` | method | (self, mock_delete, mock_get_all_images) | public | not declared | 1/40 | `src/nova/tests/unit/compute/test_compute.py:L4253–L4295` |
| `ComputeTestCase.test_rotate_backups_with_image_delete_failed` | method | (self, mock_get_all_images) | public | not declared | 1/56 | `src/nova/tests/unit/compute/test_compute.py:L4298–L4363` |
| `ComputeTestCase.test_rotate_backups_with_image_delete_failed._check_image_id` | function | (context, image_id) | private | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L4349–L4355` |
| `ComputeTestCase.test_console_output` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L4365–L4374` |
| `ComputeTestCase.test_console_output_bytes` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_compute.py:L4376–L4387` |
| `ComputeTestCase.test_console_output_tail` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L4389–L4398` |
| `ComputeTestCase.test_console_output_not_implemented` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_compute.py:L4400–L4421` |
| `ComputeTestCase.test_console_output_not_implemented.fake_not_implemented` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L4401–L4402` |
| `ComputeTestCase.test_console_output_instance_not_found` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_compute.py:L4423–L4444` |
| `ComputeTestCase.test_console_output_instance_not_found.fake_not_found` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L4424–L4425` |
| `ComputeTestCase.test_novnc_vnc_console` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_compute.py:L4446–L4466` |
| `ComputeTestCase.test_validate_console_port_vnc` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L4468–L4481` |
| `ComputeTestCase.test_validate_console_port_vnc.fake_driver_get_console` | function | (*args, **kwargs) | public | `ctype.ConsoleVNC(host="fake_host", port=5900)` (src/nova/tests/unit/compute/test_compute.py:L4474) | — | `src/nova/tests/unit/compute/test_compute.py:L4473–L4474` |
| `ComputeTestCase.test_validate_console_port_spice` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L4483–L4496` |
| `ComputeTestCase.test_validate_console_port_spice.fake_driver_get_console` | function | (*args, **kwargs) | public | `ctype.ConsoleSpice(host="fake_host", port=5900, tlsPort=88)` (src/nova/tests/unit/compute/test_compute.py:L4489) | — | `src/nova/tests/unit/compute/test_compute.py:L4488–L4489` |
| `ComputeTestCase.test_validate_console_port_serial` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_compute.py:L4498–L4510` |
| `ComputeTestCase.test_validate_console_port_serial.fake_driver_get_console` | function | (*args, **kwargs) | public | `ctype.ConsoleSerial(host="fake_host", port=5900)` (src/nova/tests/unit/compute/test_compute.py:L4503) | — | `src/nova/tests/unit/compute/test_compute.py:L4502–L4503` |
| `ComputeTestCase.test_validate_console_port_mks` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L4512–L4521` |
| `ComputeTestCase.test_validate_console_port_wrong_port` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L4523–L4536` |
| `ComputeTestCase.test_validate_console_port_wrong_port.fake_driver_get_console` | function | (*args, **kwargs) | public | `ctype.ConsoleSpice(host="fake_host", port=5900, tlsPort=88)` (src/nova/tests/unit/compute/test_compute.py:L4529) | — | `src/nova/tests/unit/compute/test_compute.py:L4528–L4529` |
| `ComputeTestCase.test_invalid_vnc_console_type` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_compute.py:L4538–L4557` |
| `ComputeTestCase.test_missing_vnc_console_type` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_compute.py:L4559–L4578` |
| `ComputeTestCase.test_get_vnc_console_not_implemented` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_compute.py:L4580–L4598` |
| `ComputeTestCase.test_spicehtml5_spice_console` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_compute.py:L4600–L4620` |
| `ComputeTestCase.test_invalid_spice_console_type` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_compute.py:L4622–L4641` |
| `ComputeTestCase.test_get_spice_console_not_implemented` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_compute.py:L4643–L4662` |
| `ComputeTestCase.test_missing_spice_console_type` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_compute.py:L4664–L4683` |
| `ComputeTestCase.test_vnc_console_instance_not_ready` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_compute.py:L4685–L4701` |
| `ComputeTestCase.test_vnc_console_instance_not_ready.fake_driver_get_console` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L4691–L4692` |
| `ComputeTestCase.test_spice_console_instance_not_ready` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_compute.py:L4703–L4719` |
| `ComputeTestCase.test_spice_console_instance_not_ready.fake_driver_get_console` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L4709–L4710` |
| `ComputeTestCase.test_vnc_console_disabled` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L4721–L4730` |
| `ComputeTestCase.test_spice_console_disabled` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L4732–L4741` |
| `ComputeTestCase.test_diagnostics` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/compute/test_compute.py:L4743–L4769` |
| `ComputeTestCase.test_instance_diagnostics` | method | (self) | public | not declared | 1/33 | `src/nova/tests/unit/compute/test_compute.py:L4771–L4806` |
| `ComputeTestCase.test_add_fixed_ip_usage_notification` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_compute.py:L4808–L4824` |
| `ComputeTestCase.test_add_fixed_ip_usage_notification.dummy` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L4809–L4810` |
| `ComputeTestCase.test_remove_fixed_ip_usage_notification` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_compute.py:L4826–L4842` |
| `ComputeTestCase.test_remove_fixed_ip_usage_notification.dummy` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L4827–L4828` |
| `ComputeTestCase.test_run_instance_usage_notification` | method | (self, request_spec=None) | public | not declared | 3/41 | `src/nova/tests/unit/compute/test_compute.py:L4844–L4886` |
| `ComputeTestCase.test_run_instance_image_usage_notification` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_compute.py:L4888–L4892` |
| `ComputeTestCase.test_run_instance_usage_notification_volume_meta` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_compute.py:L4894–L4899` |
| `ComputeTestCase.test_run_instance_end_notification_on_abort` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_compute.py:L4901–L4924` |
| `ComputeTestCase.test_run_instance_end_notification_on_abort.build_inst_abort` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L4906–L4908` |
| `ComputeTestCase.test_run_instance_error_notification_on_reschedule` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_compute.py:L4926–L4950` |
| `ComputeTestCase.test_run_instance_error_notification_on_reschedule.build_inst_fail` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L4931–L4933` |
| `ComputeTestCase.test_run_instance_error_notification_on_failure` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_compute.py:L4952–L4978` |
| `ComputeTestCase.test_run_instance_error_notification_on_failure.build_inst_fail` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L4956–L4957` |
| `ComputeTestCase.test_terminate_usage_notification` | method | (self) | public | not declared | 1/39 | `src/nova/tests/unit/compute/test_compute.py:L4980–L5023` |
| `ComputeTestCase.test_instance_set_to_error_on_uncaught_exception` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L5025–L5042` |
| `ComputeTestCase.test_instance_set_to_error_on_uncaught_exception._do_test` | function | (mock_deallocate, mock_allocate) | private | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L5033–L5040` |
| `ComputeTestCase.test_delete_instance_keeps_net_on_power_off_fail` | method | (self, mock_destroy) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L5045–L5057` |
| `ComputeTestCase.test_delete_instance_loses_net_on_other_fail` | method | (self, mock_destroy, mock_deallocate) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_compute.py:L5061–L5075` |
| `ComputeTestCase.test_delete_instance_changes_power_state` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_compute.py:L5077–L5081` |
| `ComputeTestCase.test_instance_termination_exception_sets_error` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L5083–L5100` |
| `ComputeTestCase.test_instance_termination_exception_sets_error.fake_delete_instance` | function | (self, context, instance, bdms) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L5089–L5090` |
| `ComputeTestCase.test_network_is_deallocated_on_spawn_failure` | method | (self, mock_prep) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_compute.py:L5103–L5112` |
| `ComputeTestCase._test_state_revert` | method | (self, instance, operation, pre_task_state, kwargs=None, vm_state=None) | private | not declared | 3/25 | `src/nova/tests/unit/compute/test_compute.py:L5114–L5150` |
| `ComputeTestCase._test_state_revert._get_an_exception` | function | (*args, **kwargs) | private | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L5127–L5128` |
| `ComputeTestCase.test_state_revert` | method | (self) | public | not declared | 3/76 | `src/nova/tests/unit/compute/test_compute.py:L5152–L5233` |
| `ComputeTestCase.test_state_revert.fake_migration_save` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L5228–L5229` |
| `ComputeTestCase.test_quotas_successful_delete` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_compute.py:L5235–L5238` |
| `ComputeTestCase.test_quotas_failed_delete` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_compute.py:L5240–L5252` |
| `ComputeTestCase.test_quotas_failed_delete.fake_shutdown_instance` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L5243–L5244` |
| `ComputeTestCase.test_quotas_successful_soft_delete` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_compute.py:L5254–L5257` |
| `ComputeTestCase.test_quotas_failed_soft_delete` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_compute.py:L5259–L5271` |
| `ComputeTestCase.test_quotas_failed_soft_delete.fake_soft_delete` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L5263–L5264` |
| `ComputeTestCase.test_quotas_destroy_of_soft_deleted_instance` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_compute.py:L5273–L5278` |
| `ComputeTestCase._test_finish_resize` | method | (self, power_on, resize_instance=True) | private | not declared | 4/119 | `src/nova/tests/unit/compute/test_compute.py:L5280–L5446` |
| `ComputeTestCase._test_finish_resize._mig_save` | function | — | private | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L5361–L5367` |
| `ComputeTestCase._test_finish_resize._instance_save0` | function | (expected_task_state=None) | private | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L5369–L5376` |
| `ComputeTestCase._test_finish_resize._instance_save1` | function | (expected_task_state=None) | private | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L5378–L5384` |
| `ComputeTestCase.test_finish_resize_from_active` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L5448–L5449` |
| `ComputeTestCase.test_finish_resize_from_stopped` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L5451–L5452` |
| `ComputeTestCase.test_finish_resize_without_resize_instance` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L5454–L5455` |
| `ComputeTestCase.test_finish_resize_with_volumes` | method | (self) | public | not declared | 4/105 | `src/nova/tests/unit/compute/test_compute.py:L5457–L5618` |
| `ComputeTestCase.test_finish_resize_with_volumes.fake_volume_get` | function | (self, context, volume_id, microversion=None) | public | `volume` (src/nova/tests/unit/compute/test_compute.py:L5481) | — | `src/nova/tests/unit/compute/test_compute.py:L5480–L5481` |
| `ComputeTestCase.test_finish_resize_with_volumes.fake_volume_check_availability_zone` | function | (self, context, volume_id, instance) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L5484–L5486` |
| `ComputeTestCase.test_finish_resize_with_volumes.fake_get_volume_encryption_metadata` | function | (self, context, volume_id) | public | `{}` (src/nova/tests/unit/compute/test_compute.py:L5491) | — | `src/nova/tests/unit/compute/test_compute.py:L5490–L5491` |
| `ComputeTestCase.test_finish_resize_with_volumes.fake_init_conn` | function | (self, context, volume_id, session) | public | `connection_info` (src/nova/tests/unit/compute/test_compute.py:L5507) | — | `src/nova/tests/unit/compute/test_compute.py:L5506–L5507` |
| `ComputeTestCase.test_finish_resize_with_volumes.fake_attach` | function | (self, context, volume_id, instance_uuid, device_name, mode='rw') | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L5511–L5514` |
| `ComputeTestCase.test_finish_resize_with_volumes.fake_get_volume_connector` | function | (*args, **kwargs) | public | `{}` (src/nova/tests/unit/compute/test_compute.py:L5519) | — | `src/nova/tests/unit/compute/test_compute.py:L5518–L5519` |
| `ComputeTestCase.test_finish_resize_with_volumes.fake_attach_volume` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L5523–L5524` |
| `ComputeTestCase.test_finish_resize_with_volumes.fake_terminate_connection` | function | (self, context, volume, connector) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L5553–L5554` |
| `ComputeTestCase.test_finish_resize_with_volumes.fake` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L5580–L5581` |
| `ComputeTestCase.test_finish_resize_with_volumes.fake_init_conn_with_data` | function | (self, context, volume, session) | public | `connection_info` (src/nova/tests/unit/compute/test_compute.py:L5594) | — | `src/nova/tests/unit/compute/test_compute.py:L5592–L5594` |
| `ComputeTestCase.test_finish_resize_with_volumes.fake_detach` | function | (self, context, volume_uuid) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L5612–L5614` |
| `ComputeTestCase.test_finish_resize_handles_error` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/compute/test_compute.py:L5620–L5664` |
| `ComputeTestCase.test_finish_resize_handles_error.throw_up` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L5623–L5624` |
| `ComputeTestCase.test_set_instance_info` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L5666–L5678` |
| `ComputeTestCase.test_rebuild_instance_notification` | method | (self) | public | not declared | 1/61 | `src/nova/tests/unit/compute/test_compute.py:L5680–L5747` |
| `ComputeTestCase.test_finish_resize_instance_notification` | method | (self) | public | not declared | 1/54 | `src/nova/tests/unit/compute/test_compute.py:L5749–L5808` |
| `ComputeTestCase.test_resize_instance_notification` | method | (self, mock_notify) | public | not declared | 1/51 | `src/nova/tests/unit/compute/test_compute.py:L5811–L5866` |
| `ComputeTestCase.test_prep_resize_instance_migration_error_on_none_host` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_compute.py:L5868–L5886` |
| `ComputeTestCase.test_resize_instance_driver_error` | method | (self) | public | not declared | 1/30 | `src/nova/tests/unit/compute/test_compute.py:L5888–L5927` |
| `ComputeTestCase.test_resize_instance_driver_error.throw_up` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L5891–L5892` |
| `ComputeTestCase.test_resize_instance_driver_rollback` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/compute/test_compute.py:L5929–L5969` |
| `ComputeTestCase.test_resize_instance_driver_rollback.throw_up` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L5932–L5933` |
| `ComputeTestCase._test_resize_instance` | method | (self, clean_shutdown=True) | private | not declared | 1/53 | `src/nova/tests/unit/compute/test_compute.py:L5971–L6031` |
| `ComputeTestCase.test_resize_instance` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L6033–L6034` |
| `ComputeTestCase.test_resize_instance_forced_shutdown` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L6036–L6037` |
| `ComputeTestCase._test_confirm_resize` | method | (self, mock_notify, mock_get_by_instance_uuid, power_on, numa_topology=None) | private | not declared | 2/112 | `src/nova/tests/unit/compute/test_compute.py:L6041–L6189` |
| `ComputeTestCase._test_confirm_resize.fake` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L6044–L6045` |
| `ComputeTestCase._test_confirm_resize.fake_confirm_migration_driver` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L6047–L6049` |
| `ComputeTestCase.test_confirm_resize_from_active` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L6191–L6192` |
| `ComputeTestCase.test_confirm_resize_from_stopped` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L6194–L6195` |
| `ComputeTestCase.test_confirm_resize_with_migration_context` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_compute.py:L6197–L6200` |
| `ComputeTestCase.test_confirm_resize_with_numa_topology_and_cpu_pinning` | method | (self, mock_remove_allocs) | public | not declared | 2/81 | `src/nova/tests/unit/compute/test_compute.py:L6204–L6303` |
| `ComputeTestCase._test_resize_with_pci` | method | (self, method, expected_pci_addr) | private | not declared | 2/54 | `src/nova/tests/unit/compute/test_compute.py:L6305–L6366` |
| `ComputeTestCase.test_confirm_resize_with_pci` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_compute.py:L6368–L6370` |
| `ComputeTestCase.test_revert_resize_with_pci` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_compute.py:L6372–L6377` |
| `ComputeTestCase._test_finish_revert_resize` | method | (self, mock_notify, power_on, remove_old_vm_state=False, numa_topology=None) | private | not declared | 4/101 | `src/nova/tests/unit/compute/test_compute.py:L6380–L6528` |
| `ComputeTestCase._test_finish_revert_resize.fake` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L6391–L6392` |
| `ComputeTestCase._test_finish_revert_resize.fake_finish_revert_migration_driver` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L6394–L6397` |
| `ComputeTestCase.test_finish_revert_resize_from_active` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L6530–L6531` |
| `ComputeTestCase.test_finish_revert_resize_from_stopped` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L6533–L6534` |
| `ComputeTestCase.test_finish_revert_resize_from_stopped_remove_old_vm_state` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_compute.py:L6536–L6541` |
| `ComputeTestCase.test_finish_revert_resize_migration_context` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_compute.py:L6543–L6547` |
| `ComputeTestCase.test_finish_revert_resize_validate_source_compute` | method | (self, mock_cn) | public | not declared | 1/50 | `src/nova/tests/unit/compute/test_compute.py:L6554–L6614` |
| `ComputeTestCase.test_finish_revert_resize_validate_source_compute.fake` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L6555–L6556` |
| `ComputeTestCase.test_get_by_flavor_id` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_compute.py:L6616–L6618` |
| `ComputeTestCase.test_resize_instance_handles_migration_error` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/compute/test_compute.py:L6620–L6657` |
| `ComputeTestCase.test_resize_instance_handles_migration_error.raise_migration_failure` | function | (*args) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L6622–L6623` |
| `ComputeTestCase.test_pre_live_migration_works_correctly` | method | (self, mock_get_bdms, mock_notify, mock_pre) | public | not declared | 1/46 | `src/nova/tests/unit/compute/test_compute.py:L6663–L6718` |
| `ComputeTestCase.test_pre_live_migration_works_correctly.stupid` | function | (*args, **kwargs) | public | `fake_network.fake_get_instance_nw_info(self)` (src/nova/tests/unit/compute/test_compute.py:L6668) | — | `src/nova/tests/unit/compute/test_compute.py:L6667–L6668` |
| `ComputeTestCase.test_live_migration_exception_rolls_back` | method | (self, mock_save, mock_rollback, mock_remove, mock_get_bdms, mock_get_node, mock_pre, mock_get_disk, mock_attachment_delete) | public | not declared | 2/54 | `src/nova/tests/unit/compute/test_compute.py:L6730–L6852` |
| `ComputeTestCase.test_live_migration_exception_rolls_back.gen_fake_bdms` | function | (obj, instance) | public | `bdms` (src/nova/tests/unit/compute/test_compute.py:L6781) | — | `src/nova/tests/unit/compute/test_compute.py:L6755–L6781` |
| `ComputeTestCase.test_live_migration_exception_rolls_back.do_it` | function | (mock_client, mock_setup) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L6796–L6811` |
| `ComputeTestCase.test_live_migration_works_correctly` | method | (self, mock_save, mock_event, mock_clear, mock_post, mock_pre) | public | not declared | 1/39 | `src/nova/tests/unit/compute/test_compute.py:L6861–L6907` |
| `ComputeTestCase.test_live_migration_handles_errors_correctly` | method | (self, mock_save, mock_event, mock_clear, mock_post, mock_pre) | public | not declared | 1/23 | `src/nova/tests/unit/compute/test_compute.py:L6916–L6952` |
| `ComputeTestCase.test_post_live_migration_no_shared_storage_working_correctly` | method | (self, mock_clear, mock_post) | public | not declared | 1/40 | `src/nova/tests/unit/compute/test_compute.py:L6958–L7012` |
| `ComputeTestCase.test_post_live_migration_no_shared_storage_working_correctly.fakecleanup` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L6969–L6970` |
| `ComputeTestCase.test_post_live_migration_working_correctly` | method | (self, mock_notify) | public | not declared | 1/69 | `src/nova/tests/unit/compute/test_compute.py:L7015–L7091` |
| `ComputeTestCase.test_post_live_migration_exc_on_dest_fails` | method | (self) | public | not declared | 1/52 | `src/nova/tests/unit/compute/test_compute.py:L7093–L7154` |
| `ComputeTestCase.test_rollback_live_migration` | method | (self, mock_bdms, mock_get_node, migration_status=None) | public | not declared | 2/25 | `src/nova/tests/unit/compute/test_compute.py:L7159–L7215` |
| `ComputeTestCase.test_rollback_live_migration._test` | function | (mock_drop_claim, mock_nw_api, mock_lmcf, mock_ra, mock_mig_save, mock_notify, mock_get_pci) | private | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L7182–L7210` |
| `ComputeTestCase.test_rollback_live_migration_set_migration_status` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L7217–L7218` |
| `ComputeTestCase.test_rollback_live_migration_network_teardown_fails` | method | (self, mock_bdms, mock_get_node) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_compute.py:L7225–L7279` |
| `ComputeTestCase.test_rollback_live_migration_network_teardown_fails._test` | function | (mock_nw_setup, _mock_lmcf, mock_ra, mock_mig_save, mock_inst_save, _mock_notify_action, mock_notify_usage, mock_get_pci) | private | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L7247–L7277` |
| `ComputeTestCase.test_rollback_live_migration_at_destination_correctly` | method | (self, mock_rollback, mock_notify) | public | not declared | 1/33 | `src/nova/tests/unit/compute/test_compute.py:L7284–L7319` |
| `ComputeTestCase.test_rollback_live_migration_at_destination_network_fails` | method | (self, mock_rollback) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_compute.py:L7323–L7338` |
| `ComputeTestCase.test_run_kill_vm` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_compute.py:L7340–L7361` |
| `ComputeTestCase._fill_fault` | method | (self, values) | private | `extra` (src/nova/tests/unit/compute/test_compute.py:L7371) | 2/9 | `src/nova/tests/unit/compute/test_compute.py:L7363–L7371` |
| `ComputeTestCase.test_add_instance_fault` | method | (self) | public | not declared | 2/15 | `src/nova/tests/unit/compute/test_compute.py:L7373–L7403` |
| `ComputeTestCase.test_add_instance_fault.fake_db_fault_create` | function | (ctxt, values) | public | `self._fill_fault(expected)` (src/nova/tests/unit/compute/test_compute.py:L7389) | — | `src/nova/tests/unit/compute/test_compute.py:L7377–L7389` |
| `ComputeTestCase.test_add_instance_fault_with_remote_error` | method | (self) | public | not declared | 2/15 | `src/nova/tests/unit/compute/test_compute.py:L7405–L7436` |
| `ComputeTestCase.test_add_instance_fault_with_remote_error.fake_db_fault_create` | function | (ctxt, values) | public | `self._fill_fault(expected)` (src/nova/tests/unit/compute/test_compute.py:L7423) | — | `src/nova/tests/unit/compute/test_compute.py:L7410–L7423` |
| `ComputeTestCase.test_add_instance_fault_user_error` | method | (self) | public | not declared | 2/14 | `src/nova/tests/unit/compute/test_compute.py:L7438–L7466` |
| `ComputeTestCase.test_add_instance_fault_user_error.fake_db_fault_create` | function | (ctxt, values) | public | `self._fill_fault(expected)` (src/nova/tests/unit/compute/test_compute.py:L7452) | — | `src/nova/tests/unit/compute/test_compute.py:L7442–L7452` |
| `ComputeTestCase.test_add_instance_fault_no_exc_info` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_compute.py:L7468–L7488` |
| `ComputeTestCase.test_add_instance_fault_no_exc_info.fake_db_fault_create` | function | (ctxt, values) | public | `self._fill_fault(expected)` (src/nova/tests/unit/compute/test_compute.py:L7480) | — | `src/nova/tests/unit/compute/test_compute.py:L7471–L7480` |
| `ComputeTestCase.test_add_instance_fault_long_message` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_compute.py:L7490–L7514` |
| `ComputeTestCase.test_add_instance_fault_long_message.fake_db_fault_create` | function | (ctxt, values) | public | `self._fill_fault(expected)` (src/nova/tests/unit/compute/test_compute.py:L7504) | — | `src/nova/tests/unit/compute/test_compute.py:L7495–L7504` |
| `ComputeTestCase.test_add_instance_fault_with_message` | method | (self) | public | not declared | 2/16 | `src/nova/tests/unit/compute/test_compute.py:L7516–L7546` |
| `ComputeTestCase.test_add_instance_fault_with_message.fake_db_fault_create` | function | (ctxt, values) | public | `self._fill_fault(expected)` (src/nova/tests/unit/compute/test_compute.py:L7531) | — | `src/nova/tests/unit/compute/test_compute.py:L7520–L7531` |
| `ComputeTestCase._test_cleanup_running` | method | (self, action) | private | `admin_context, instance1, instance2` (src/nova/tests/unit/compute/test_compute.py:L7563) | 1/13 | `src/nova/tests/unit/compute/test_compute.py:L7548–L7563` |
| `ComputeTestCase.test_cleanup_running_deleted_instances_reap` | method | (self, mock_get_uuid, mock_shutdown, mock_cleanup, mock_get_inst) | public | not declared | 1/20 | `src/nova/tests/unit/compute/test_compute.py:L7570–L7593` |
| `ComputeTestCase.test_cleanup_running_deleted_instances_shutdown` | method | (self, mock_power, mock_get) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L7598–L7610` |
| `ComputeTestCase.test_cleanup_running_deleted_instances_shutdown_error` | method | (self, mock_power, mock_get) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_compute.py:L7615–L7629` |
| `ComputeTestCase.test_running_deleted_instances` | method | (self, mock_is_older, mock_get) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_compute.py:L7634–L7651` |
| `ComputeTestCase.test_require_nw_info_update_host_match` | method | (self, mock_list_ports) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_compute.py:L7654–L7668` |
| `ComputeTestCase.test_require_nw_info_update_host_mismatch` | method | (self, mock_list_ports) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L7671–L7681` |
| `ComputeTestCase.test_require_nw_info_update_failed_vif_types` | method | (self, mock_list_ports) | public | not declared | 2/16 | `src/nova/tests/unit/compute/test_compute.py:L7684–L7701` |
| `ComputeTestCase.test_require_nw_info_update_for_baremetal` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_compute.py:L7703–L7714` |
| `ComputeTestCase._heal_instance_info_cache` | method | (self, _get_instance_nw_info_raise=False, _get_instance_nw_info_raise_cache=False, _require_nw_info_update=False, _task_state_not_none=False) | private | not declared | 12/89 | `src/nova/tests/unit/compute/test_compute.py:L7716–L7871` |
| `ComputeTestCase._heal_instance_info_cache.fake_instance_get_all_by_host` | function | (context, host, columns_to_join, use_slave=False) | public | `instances[:]` (src/nova/tests/unit/compute/test_compute.py:L7744) | — | `src/nova/tests/unit/compute/test_compute.py:L7740–L7744` |
| `ComputeTestCase._heal_instance_info_cache.fake_instance_get_by_uuid` | function | (context, instance_uuid, columns_to_join, use_slave=False) | public | `instance_map[instance_uuid]` (src/nova/tests/unit/compute/test_compute.py:L7754) | — | `src/nova/tests/unit/compute/test_compute.py:L7746–L7754` |
| `ComputeTestCase._heal_instance_info_cache.fake_require_nw_info_update` | function | (cls, context, instance) | public | `_require_nw_info_update` (src/nova/tests/unit/compute/test_compute.py:L7761) | — | `src/nova/tests/unit/compute/test_compute.py:L7756–L7761` |
| `ComputeTestCase._heal_instance_info_cache.fake_setup_instance_network_on_host` | function | (cls, context, instance, host) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L7763–L7768` |
| `ComputeTestCase._heal_instance_info_cache.fake_get_instance_nw_info` | function | (cls, context, instance, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L7771–L7784` |
| `ComputeTestCase.test_heal_instance_info_cache` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L7873–L7874` |
| `ComputeTestCase.test_heal_instance_info_cache_with_instance_exception` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L7876–L7877` |
| `ComputeTestCase.test_heal_instance_info_cache_with_info_cache_exception` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L7879–L7880` |
| `ComputeTestCase.test_heal_instance_info_cache_with_port_update` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L7882–L7883` |
| `ComputeTestCase.test_heal_instance_info_cache_with_port_update_instance_not_steady` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_compute.py:L7885–L7888` |
| `ComputeTestCase.test_poll_rescued_instances` | method | (self, unrescue, get) | public | not declared | 2/26 | `src/nova/tests/unit/compute/test_compute.py:L7892–L7930` |
| `ComputeTestCase.test_poll_rescued_instances.fake_instance_get_all_by_filters` | function | (context, filters, expected_attrs=None, use_slave=False) | public | `instances` (src/nova/tests/unit/compute/test_compute.py:L7915) | — | `src/nova/tests/unit/compute/test_compute.py:L7911–L7915` |
| `ComputeTestCase.test_poll_rescued_instances.fake_unrescue` | function | (context, instance) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L7919–L7920` |
| `ComputeTestCase.test_poll_rebooting_instances` | method | (self, get) | public | not declared | 1/29 | `src/nova/tests/unit/compute/test_compute.py:L7933–L7963` |
| `ComputeTestCase.test_poll_unconfirmed_resizes` | method | (self) | public | not declared | 3/64 | `src/nova/tests/unit/compute/test_compute.py:L7965–L8070` |
| `ComputeTestCase.test_poll_unconfirmed_resizes.fake_instance_get_by_uuid` | function | (context, instance_uuid, columns_to_join=None, use_slave=False) | public | `instance` (src/nova/tests/unit/compute/test_compute.py:L8024) | — | `src/nova/tests/unit/compute/test_compute.py:L8014–L8024` |
| `ComputeTestCase.test_poll_unconfirmed_resizes.fake_migration_get_unconfirmed_by_dest_compute` | function | (context, resize_confirm_window, dest_compute, use_slave=False) | public | `migrations` (src/nova/tests/unit/compute/test_compute.py:L8029) | — | `src/nova/tests/unit/compute/test_compute.py:L8026–L8029` |
| `ComputeTestCase.test_poll_unconfirmed_resizes.fake_migration_update` | function | (context, mid, updates) | public | `migration` (src/nova/tests/unit/compute/test_compute.py:L8035) | — | `src/nova/tests/unit/compute/test_compute.py:L8031–L8035` |
| `ComputeTestCase.test_poll_unconfirmed_resizes.fake_confirm_resize` | function | (cls, context, instance, migration=None) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L8037–L8046` |
| `ComputeTestCase.test_poll_unconfirmed_resizes.fetch_instance_migration_status` | function | (instance_uuid) | public | `migration['status']` (src/nova/tests/unit/compute/test_compute.py:L8061) | — | `src/nova/tests/unit/compute/test_compute.py:L8058–L8061` |
| `ComputeTestCase.test_instance_build_timeout_mixed_instances` | method | (self) | public | not declared | 3/42 | `src/nova/tests/unit/compute/test_compute.py:L8072–L8123` |
| `ComputeTestCase.test_instance_update_host_check` | method | (self, mock_save) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_compute.py:L8126–L8131` |
| `ComputeTestCase.test_destroy_evacuated_instance_on_shared_storage` | method | (self, mock_save, mock_get_filter, mock_destroy, mock_is_inst, mock_get_blk, mock_get_inst, mock_remove_allocs) | public | not declared | 1/50 | `src/nova/tests/unit/compute/test_compute.py:L8144–L8201` |
| `ComputeTestCase.test_destroy_evacuated_instance_with_disks` | method | (self, mock_save, mock_get_filter, mock_destroy, mock_check_clean, mock_check, mock_check_local, mock_get_blk, mock_get_drv, mock_remove_allocs) | public | not declared | 1/50 | `src/nova/tests/unit/compute/test_compute.py:L8218–L8275` |
| `ComputeTestCase.test_destroy_evacuated_instance_not_implemented` | method | (self, mock_save, mock_get_filter, mock_destroy, mock_check_clean, mock_check, mock_check_local, mock_get_blk, mock_get_inst, mock_remove_allocs) | public | not declared | 1/40 | `src/nova/tests/unit/compute/test_compute.py:L8291–L8338` |
| `ComputeTestCase.test_complete_partial_deletion` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/compute/test_compute.py:L8340–L8375` |
| `ComputeTestCase.test_complete_partial_deletion.fake_destroy` | function | (self) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L8353–L8354` |
| `ComputeTestCase.test_terminate_instance_updates_tracker` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L8377–L8389` |
| `ComputeTestCase.test_init_deleted_instance_updates_tracker` | method | (self, noop1, noop2, noop3) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_compute.py:L8398–L8415` |
| `ComputeTestCase.test_init_instance_for_partial_deletion` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_compute.py:L8417–L8437` |
| `ComputeTestCase.test_init_instance_for_partial_deletion.fake_partial_deletion` | function | (self, context, instance) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L8425–L8426` |
| `ComputeTestCase.test_partial_deletion_raise_exception` | method | (self, mock_complete) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L8441–L8452` |
| `ComputeTestCase.test_add_remove_fixed_ip_updates_instance_updated_at` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_compute.py:L8454–L8476` |
| `ComputeTestCase.test_add_remove_fixed_ip_updates_instance_updated_at._noop` | function | (*args, **kwargs) | private | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L8455–L8456` |
| `ComputeTestCase.test_no_pending_deletes_for_soft_deleted_instances` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L8478–L8489` |
| `ComputeTestCase.test_reclaim_queued_deletes` | method | (self, mock_delete, mock_bdms) | public | not declared | 1/22 | `src/nova/tests/unit/compute/test_compute.py:L8493–L8528` |
| `ComputeTestCase.test_reclaim_queued_deletes_continue_on_error` | method | (self, mock_delete_inst, mock_get_uuid, mock_delete_old, mock_get_filter) | public | not declared | 1/29 | `src/nova/tests/unit/compute/test_compute.py:L8534–L8567` |
| `ComputeTestCase.test_sync_power_states` | method | (self, mock_sync, mock_get) | public | not declared | 1/20 | `src/nova/tests/unit/compute/test_compute.py:L8572–L8595` |
| `ComputeTestCase._test_lifecycle_event` | method | (self, lifecycle_event, vm_power_state, mock_sync, mock_get, is_actual_state=True) | private | not declared | 4/14 | `src/nova/tests/unit/compute/test_compute.py:L8600–L8616` |
| `ComputeTestCase.test_lifecycle_events` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_compute.py:L8618–L8630` |
| `ComputeTestCase.test_lifecycle_event_non_existent_instance` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_compute.py:L8632–L8637` |
| `ComputeTestCase.test_confirm_resize_roll_back_quota_instance_not_found` | method | (self, mock_get_by_id) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L8640–L8652` |
| `ComputeTestCase.test_confirm_resize_roll_back_quota_status_confirmed` | method | (self, mock_get_by_id) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L8655–L8666` |
| `ComputeTestCase.test_confirm_resize_roll_back_quota_status_dummy` | method | (self, mock_get_by_id) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L8669–L8680` |
| `ComputeTestCase.test_allow_confirm_resize_on_instance_in_deleting_task_state` | method | (self, mock_pci_mapping) | public | not declared | 1/31 | `src/nova/tests/unit/compute/test_compute.py:L8684–L8721` |
| `ComputeTestCase.test_allow_confirm_resize_on_instance_in_deleting_task_state.fake_setup_networks_on_host` | function | (self, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L8695–L8696` |
| `ComputeTestCase._get_instance_and_bdm_for_dev_defaults_tests` | method | (self) | private | `instance, block_device_mapping` (src/nova/tests/unit/compute/test_compute.py:L8736) | 1/13 | `src/nova/tests/unit/compute/test_compute.py:L8723–L8736` |
| `ComputeTestCase.test_default_block_device_names_empty_instance_root_dev` | method | (self, mock_def, mock_save) | public | not declared | 2/8 | `src/nova/tests/unit/compute/test_compute.py:L8741–L8750` |
| `ComputeTestCase.test_default_block_device_names_empty_root_device` | method | (self, mock_def, mock_save) | public | not declared | 2/8 | `src/nova/tests/unit/compute/test_compute.py:L8755–L8764` |
| `ComputeTestCase.test_default_block_device_names_no_root_device` | method | (self, mock_default_name, mock_default_dev, mock_blk_save, mock_inst_save) | public | not declared | 2/12 | `src/nova/tests/unit/compute/test_compute.py:L8772–L8785` |
| `ComputeTestCase.test_default_block_device_names_with_blank_volumes` | method | (self) | public | not declared | 2/59 | `src/nova/tests/unit/compute/test_compute.py:L8787–L8846` |
| `ComputeTestCase.test_reserve_block_device_name` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/compute/test_compute.py:L8848–L8877` |
| `ComputeTestCase.test_reserve_block_device_name_with_iso_instance` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/compute/test_compute.py:L8879–L8905` |
| `ComputeTestCase.test_quiesce` | method | (self, mock_snapshot_get) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_compute.py:L8908–L8923` |
| `ComputeTestCase.test_instance_fault_message_no_rescheduled_details_without_retry` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L8925–L8940` |
| `ComputeTestCase.test_delete_while_booting_instance_not_in_cell_db_cellsv2` | method | (self, br_get_by_instance, legacy_notify, minimum_server_version, im_get_by_instance, target_cell, instance_destroy, notify) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_compute.py:L8949–L8968` |
| `ComputeTestCase.test_delete_while_booting_instance_not_scheduled_cellv1` | method | (self, br_get_by_instance, legacy_notify, im_get_by_instance, instance_destroy, notify, api_del_cleanup) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_compute.py:L8976–L8998` |
| `ComputeTestCase.test_delete_while_booting_instance_not_scheduled_cellv2` | method | (self, br_get_by_instance, legacy_notify, im_get_by_instance, target_cell, instance_destroy, notify) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_compute.py:L9006–L9027` |
| `ComputeAPITestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L9031–L12679` |
| `ComputeAPITestCase.setUp` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/compute/test_compute.py:L9032–L9085` |
| `ComputeAPITestCase.setUp.fake_show` | function | (obj, context, image_id, **kwargs) | public | `self.fake_image` (src/nova/tests/unit/compute/test_compute.py:L9047) | — | `src/nova/tests/unit/compute/test_compute.py:L9045–L9049` |
| `ComputeAPITestCase.setUp.fake_lookup` | function | (self, context, instance) | public | `None, instance` (src/nova/tests/unit/compute/test_compute.py:L9054) | — | `src/nova/tests/unit/compute/test_compute.py:L9053–L9054` |
| `ComputeAPITestCase.setUp.fake_validate_networks` | function | (context, requested_networks, num_instances) | public | `num_instances` (src/nova/tests/unit/compute/test_compute.py:L9075) | — | `src/nova/tests/unit/compute/test_compute.py:L9074–L9075` |
| `ComputeAPITestCase._run_instance` | method | (self, params=None) | private | `instance, instance_uuid` (src/nova/tests/unit/compute/test_compute.py:L9095) | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L9087–L9095` |
| `ComputeAPITestCase.test_create_with_too_little_ram` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L9097–L9113` |
| `ComputeAPITestCase.test_create_with_too_little_disk` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L9115–L9131` |
| `ComputeAPITestCase.test_create_with_too_large_image` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L9133–L9150` |
| `ComputeAPITestCase.test_create_just_enough_ram_and_disk` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L9152–L9165` |
| `ComputeAPITestCase.test_create_with_no_ram_and_disk_reqs` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_compute.py:L9167–L9177` |
| `ComputeAPITestCase.test_create_with_deleted_image` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L9179–L9192` |
| `ComputeAPITestCase.test_create_with_numa_topology` | method | (self, numa_constraints_mock) | public | not declared | 1/20 | `src/nova/tests/unit/compute/test_compute.py:L9195–L9216` |
| `ComputeAPITestCase.test_create_instance_defaults_display_name` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/compute/test_compute.py:L9218–L9225` |
| `ComputeAPITestCase.test_create_instance_sets_system_metadata` | method | (self) | public | not declared | 2/13 | `src/nova/tests/unit/compute/test_compute.py:L9227–L9242` |
| `ComputeAPITestCase.test_create_saves_flavor` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L9244–L9256` |
| `ComputeAPITestCase.test_create_instance_associates_security_groups` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_compute.py:L9258–L9276` |
| `ComputeAPITestCase.test_create_instance_with_invalid_security_group_raises` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_compute.py:L9278–L9294` |
| `ComputeAPITestCase.test_create_instance_associates_requested_networks` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_compute.py:L9300–L9323` |
| `ComputeAPITestCase.test_create_with_malformed_user_data` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_compute.py:L9325–L9333` |
| `ComputeAPITestCase.test_create_with_base64_user_data` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_compute.py:L9335–L9344` |
| `ComputeAPITestCase.test_populate_instance_for_create` | method | (self, num_instances=1) | public | not declared | 1/25 | `src/nova/tests/unit/compute/test_compute.py:L9346–L9370` |
| `ComputeAPITestCase.test_populate_instance_for_create_encrypted` | method | (self, num_instances=1) | public | not declared | 1/24 | `src/nova/tests/unit/compute/test_compute.py:L9372–L9395` |
| `ComputeAPITestCase.test_default_hostname_generator` | method | (self) | public | not declared | 3/16 | `src/nova/tests/unit/compute/test_compute.py:L9397–L9419` |
| `ComputeAPITestCase.test_default_hostname_generator._fake_populate` | function | (self, context, base_options, *args, **kwargs) | private | `orig_populate(context, base_options, *args, **kwargs)` (src/nova/tests/unit/compute/test_compute.py:L9404) | — | `src/nova/tests/unit/compute/test_compute.py:L9402–L9404` |
| `ComputeAPITestCase.test_instance_create_adds_to_instance_group` | method | (self, get_group_mock) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_compute.py:L9422–L9438` |
| `ComputeAPITestCase.test_create_instance_group_members_over_quota_during_recheck` | method | (self, get_group_mock, check_deltas_mock) | public | not declared | 1/23 | `src/nova/tests/unit/compute/test_compute.py:L9442–L9475` |
| `ComputeAPITestCase.test_create_instance_group_members_no_quota_recheck` | method | (self, get_group_mock, check_deltas_mock) | public | not declared | 1/29 | `src/nova/tests/unit/compute/test_compute.py:L9479–L9514` |
| `ComputeAPITestCase.test_instance_create_with_group_uuid_fails_group_not_exist` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L9516–L9526` |
| `ComputeAPITestCase._test_rebuild` | method | (self, mock_reqspec, vm_state=None) | private | not declared | 3/43 | `src/nova/tests/unit/compute/test_compute.py:L9529–L9586` |
| `ComputeAPITestCase._test_rebuild.fake_rpc_rebuild` | function | (context, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L9553–L9556` |
| `ComputeAPITestCase.test_rebuild` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L9588–L9589` |
| `ComputeAPITestCase.test_rebuild_in_error_state` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L9591–L9592` |
| `ComputeAPITestCase.test_rebuild_in_error_not_launched` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_compute.py:L9594–L9611` |
| `ComputeAPITestCase.test_rebuild_no_image` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L9613–L9625` |
| `ComputeAPITestCase.test_rebuild_with_deleted_image` | method | (self, mock_reqspec) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_compute.py:L9628–L9643` |
| `ComputeAPITestCase.test_rebuild_with_too_little_ram` | method | (self, mock_reqspec) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_compute.py:L9646–L9664` |
| `ComputeAPITestCase.test_rebuild_with_too_little_disk` | method | (self, mock_reqspec) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_compute.py:L9667–L9694` |
| `ComputeAPITestCase.test_rebuild_with_too_little_disk.fake_extract_flavor` | function | (_inst, prefix='') | public | `f` (src/nova/tests/unit/compute/test_compute.py:L9676) | — | `src/nova/tests/unit/compute/test_compute.py:L9671–L9678` |
| `ComputeAPITestCase.test_rebuild_with_just_enough_ram_and_disk` | method | (self, mock_reqspec) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L9697–L9718` |
| `ComputeAPITestCase.test_rebuild_with_just_enough_ram_and_disk.fake_extract_flavor` | function | (_inst, prefix='') | public | `f` (src/nova/tests/unit/compute/test_compute.py:L9706) | — | `src/nova/tests/unit/compute/test_compute.py:L9701–L9708` |
| `ComputeAPITestCase.test_rebuild_with_no_ram_and_disk_reqs` | method | (self, mock_reqspec) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_compute.py:L9721–L9739` |
| `ComputeAPITestCase.test_rebuild_with_no_ram_and_disk_reqs.fake_extract_flavor` | function | (_inst, prefix='') | public | `f` (src/nova/tests/unit/compute/test_compute.py:L9730) | — | `src/nova/tests/unit/compute/test_compute.py:L9725–L9732` |
| `ComputeAPITestCase.test_rebuild_with_too_large_image` | method | (self, mock_reqspec) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_compute.py:L9742–L9768` |
| `ComputeAPITestCase.test_rebuild_with_too_large_image.fake_extract_flavor` | function | (_inst, prefix='') | public | `f` (src/nova/tests/unit/compute/test_compute.py:L9751) | — | `src/nova/tests/unit/compute/test_compute.py:L9746–L9753` |
| `ComputeAPITestCase.test_hostname_create` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_compute.py:L9770–L9777` |
| `ComputeAPITestCase._fake_rescue_block_devices` | method | (self, instance, status="in-use") | private | `fake_bdms, volume` (src/nova/tests/unit/compute/test_compute.py:L9791) | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L9779–L9791` |
| `ComputeAPITestCase.test_rescue_volume_backed_no_image` | method | (self, mock_get_vol, mock_get_bdms) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_compute.py:L9795–L9811` |
| `ComputeAPITestCase.test_rescue_volume_backed_placeholder_image` | method | (self, mock_get_vol, mock_get_bdms) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_compute.py:L9815–L9834` |
| `ComputeAPITestCase.test_get` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_compute.py:L9836–L9840` |
| `ComputeAPITestCase.test_get_with_admin_context` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_compute.py:L9842–L9847` |
| `ComputeAPITestCase.test_get_all_by_name_regexp` | method | (self) | public | not declared | 5/32 | `src/nova/tests/unit/compute/test_compute.py:L9849–L9886` |
| `ComputeAPITestCase.test_get_all_by_multiple_options_at_once` | method | (self) | public | not declared | 1/35 | `src/nova/tests/unit/compute/test_compute.py:L9888–L9954` |
| `ComputeAPITestCase.test_get_all_by_multiple_options_at_once.fake_network_info` | function | (ip) | public | `jsonutils.dumps(info)` (src/nova/tests/unit/compute/test_compute.py:L9909) | — | `src/nova/tests/unit/compute/test_compute.py:L9892–L9909` |
| `ComputeAPITestCase.test_get_all_by_image` | method | (self) | public | not declared | 2/24 | `src/nova/tests/unit/compute/test_compute.py:L9956–L9986` |
| `ComputeAPITestCase.test_get_all_by_flavor` | method | (self) | public | not declared | 3/23 | `src/nova/tests/unit/compute/test_compute.py:L9988–L10016` |
| `ComputeAPITestCase.test_get_all_by_state` | method | (self) | public | not declared | 2/28 | `src/nova/tests/unit/compute/test_compute.py:L10018–L10052` |
| `ComputeAPITestCase.test_instance_metadata` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/compute/test_compute.py:L10054–L10095` |
| `ComputeAPITestCase.test_disallow_metadata_changes_during_building` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_compute.py:L10097–L10107` |
| `ComputeAPITestCase._parse_db_block_device_mapping` | method | (bdm_ref) | private | `bdm` (src/nova/tests/unit/compute/test_compute.py:L10119) | 3/9 | `src/nova/tests/unit/compute/test_compute.py:L10110–L10119` |
| `ComputeAPITestCase._test_check_and_transform_bdm` | method | (self, bdms, expected_bdms, image_bdms=None, base_options=None, legacy_bdms=False, legacy_image_bdms=False) | private | not declared | 6/17 | `src/nova/tests/unit/compute/test_compute.py:L10121–L10137` |
| `ComputeAPITestCase.test_check_and_transform_legacy_bdm_no_image_bdms` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_compute.py:L10139–L10150` |
| `ComputeAPITestCase.test_check_and_transform_legacy_bdm_legacy_image_bdms` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/compute/test_compute.py:L10152–L10171` |
| `ComputeAPITestCase.test_check_and_transform_legacy_bdm_image_bdms` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_compute.py:L10173–L10190` |
| `ComputeAPITestCase.test_check_and_transform_bdm_no_image_bdms` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L10192–L10199` |
| `ComputeAPITestCase.test_check_and_transform_bdm_image_bdms` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_compute.py:L10201–L10213` |
| `ComputeAPITestCase.test_check_and_transform_bdm_image_bdms_w_overrides` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_compute.py:L10215–L10229` |
| `ComputeAPITestCase.test_check_and_transform_bdm_image_bdms_w_overrides_complex` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/compute/test_compute.py:L10231–L10258` |
| `ComputeAPITestCase.test_check_and_transform_bdm_legacy_image_bdms` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_compute.py:L10260–L10275` |
| `ComputeAPITestCase.test_check_and_transform_image` | method | (self) | public | not declared | 1/52 | `src/nova/tests/unit/compute/test_compute.py:L10277–L10345` |
| `ComputeAPITestCase.test_volume_size` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/compute/test_compute.py:L10347–L10375` |
| `ComputeAPITestCase.test_reservation_id_one_instance` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_compute.py:L10377–L10385` |
| `ComputeAPITestCase.test_reservation_ids_two_instances` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/compute/test_compute.py:L10387–L10399` |
| `ComputeAPITestCase.test_single_instance_display_name` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L10401–L10413` |
| `ComputeAPITestCase.test_multi_instance_display_name` | method | (self) | public | not declared | 2/11 | `src/nova/tests/unit/compute/test_compute.py:L10415–L10428` |
| `ComputeAPITestCase.test_instance_create_with_extended_res_req_old_compute` | method | (self, mock_create_res_req, mock_has_extended_res_req, mock_get_min_svc_version) | public | not declared | 1/20 | `src/nova/tests/unit/compute/test_compute.py:L10438–L10458` |
| `ComputeAPITestCase.test_instance_architecture` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_compute.py:L10460–L10463` |
| `ComputeAPITestCase.test_instance_unknown_architecture` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L10465–L10474` |
| `ComputeAPITestCase.test_instance_name_template` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_compute.py:L10476–L10494` |
| `ComputeAPITestCase.test_add_remove_fixed_ip` | method | (self, mock_update_queued_for_delete) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L10497–L10506` |
| `ComputeAPITestCase.test_attach_volume_invalid` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L10508–L10518` |
| `ComputeAPITestCase.test_add_missing_dev_names_assign_dev_name` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_compute.py:L10520–L10538` |
| `ComputeAPITestCase.test_add_missing_dev_names_skip_bdms_with_dev_name` | method | (self, mock_get_dev_name) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_compute.py:L10542–L10558` |
| `ComputeAPITestCase.test_no_attach_volume_in_rescue_state` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_compute.py:L10560–L10579` |
| `ComputeAPITestCase.test_no_attach_volume_in_rescue_state.fake` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L10561–L10562` |
| `ComputeAPITestCase.test_no_attach_volume_in_rescue_state.fake_volume_get` | function | (self, context, volume_id) | public | `{'id': volume_id}` (src/nova/tests/unit/compute/test_compute.py:L10565) | — | `src/nova/tests/unit/compute/test_compute.py:L10564–L10565` |
| `ComputeAPITestCase.test_no_attach_volume_in_suspended_state` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L10581–L10590` |
| `ComputeAPITestCase.test_no_detach_volume_in_rescue_state` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L10592–L10603` |
| `ComputeAPITestCase.test_no_rescue_in_volume_state_attaching` | method | (self, mock_get_vol, mock_get_bdms) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L10607–L10619` |
| `ComputeAPITestCase.test_vnc_console` | method | (self, mock_get) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_compute.py:L10622–L10644` |
| `ComputeAPITestCase.test_get_vnc_console_no_host` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_compute.py:L10646–L10651` |
| `ComputeAPITestCase.test_spice_console` | method | (self, mock_spice) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_compute.py:L10654–L10676` |
| `ComputeAPITestCase.test_get_spice_console_no_host` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_compute.py:L10678–L10683` |
| `ComputeAPITestCase.test_get_console_invalid_task_state` | method | (self, console_type, task_state) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_compute.py:L10694–L10700` |
| `ComputeAPITestCase.test_serial_console` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_compute.py:L10702–L10722` |
| `ComputeAPITestCase.test_get_serial_console_no_host` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_compute.py:L10724–L10730` |
| `ComputeAPITestCase.test_mks_console` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_compute.py:L10732–L10750` |
| `ComputeAPITestCase.test_get_mks_console_no_host` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_compute.py:L10752–L10758` |
| `ComputeAPITestCase.test_console_output` | method | (self, mock_console) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_compute.py:L10761–L10775` |
| `ComputeAPITestCase.test_console_output_no_host` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_compute.py:L10777–L10782` |
| `ComputeAPITestCase.test_attach_interface` | method | (self) | public | `nwinfo, port_id` (src/nova/tests/unit/compute/test_compute.py:L10841) | 1/56 | `src/nova/tests/unit/compute/test_compute.py:L10784–L10841` |
| `ComputeAPITestCase.test_attach_interface_with_qos` | method | (self, mock_notify) | public | not declared | 1/60 | `src/nova/tests/unit/compute/test_compute.py:L10844–L10917` |
| `ComputeAPITestCase.test_attach_sriov_interface` | method | (self, mock_notify) | public | `nwinfo, port_id` (src/nova/tests/unit/compute/test_compute.py:L10989) | 1/54 | `src/nova/tests/unit/compute/test_compute.py:L10920–L10989` |
| `ComputeAPITestCase.test_attach_sriov_interface.create_resource_req` | function | (context, requested_networks, pci_requests=None, affinity_policy=None) | public | `None, [], mock.sentinel.req_lvl_params` (src/nova/tests/unit/compute/test_compute.py:L10954) | — | `src/nova/tests/unit/compute/test_compute.py:L10949–L10954` |
| `ComputeAPITestCase.test_attach_sriov_interface_with_qos` | method | (self, mock_notify) | public | not declared | 1/63 | `src/nova/tests/unit/compute/test_compute.py:L10992–L11085` |
| `ComputeAPITestCase.test_attach_sriov_interface_with_qos.create_resource_req` | function | (context, requested_networks, pci_requests=None, affinity_policy=None) | public | `None, request_groups, mock.sentinel.req_lvl_params` (src/nova/tests/unit/compute/test_compute.py:L11030) | — | `src/nova/tests/unit/compute/test_compute.py:L11025–L11030` |
| `ComputeAPITestCase.test_interface_tagged_attach` | method | (self, mock_notify) | public | `nwinfo, port_id` (src/nova/tests/unit/compute/test_compute.py:L11137) | 1/48 | `src/nova/tests/unit/compute/test_compute.py:L11088–L11137` |
| `ComputeAPITestCase.test_tagged_attach_interface_raises` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_compute.py:L11139–L11150` |
| `ComputeAPITestCase.test_attach_interface_failed` | method | (self) | public | not declared | 1/61 | `src/nova/tests/unit/compute/test_compute.py:L11152–L11215` |
| `ComputeAPITestCase.test_attach_sriov_interface_failed_in_driver` | method | (self) | public | not declared | 1/69 | `src/nova/tests/unit/compute/test_compute.py:L11217–L11299` |
| `ComputeAPITestCase.test_attach_sriov_interface_failed_in_driver.create_resource_req` | function | (context, requested_networks, pci_requests=None, affinity_policy=None) | public | `None, [], mock.sentinel.req_lvl_params` (src/nova/tests/unit/compute/test_compute.py:L11262) | — | `src/nova/tests/unit/compute/test_compute.py:L11258–L11262` |
| `ComputeAPITestCase.test_attach_sriov_interface_pci_claim_fails` | method | (self) | public | not declared | 1/61 | `src/nova/tests/unit/compute/test_compute.py:L11301–L11374` |
| `ComputeAPITestCase.test_attach_sriov_interface_pci_claim_fails.create_resource_req` | function | (context, requested_networks, pci_requests=None, affinity_policy=None) | public | `None, request_groups, mock.sentinel.req_lvl_params` (src/nova/tests/unit/compute/test_compute.py:L11342) | — | `src/nova/tests/unit/compute/test_compute.py:L11338–L11342` |
| `ComputeAPITestCase.test__allocate_port_resource_for_instance` | method | (self) | public | not declared | 1/65 | `src/nova/tests/unit/compute/test_compute.py:L11376–L11443` |
| `ComputeAPITestCase.test__allocate_port_resource_for_instance_no_candidate` | method | (self) | public | not declared | 1/42 | `src/nova/tests/unit/compute/test_compute.py:L11445–L11489` |
| `ComputeAPITestCase.test__allocate_port_resource_for_instance_fails_to_extend_alloc` | method | (self) | public | not declared | 1/62 | `src/nova/tests/unit/compute/test_compute.py:L11491–L11556` |
| `ComputeAPITestCase.test__allocate_port_resource_for_instance_fails_to_update_pci` | method | (self) | public | not declared | 1/70 | `src/nova/tests/unit/compute/test_compute.py:L11558–L11630` |
| `ComputeAPITestCase.test_detach_interface` | method | (self) | public | not declared | 1/56 | `src/nova/tests/unit/compute/test_compute.py:L11632–L11690` |
| `ComputeAPITestCase.test_detach_interface_failed` | method | (self, mock_log) | public | not declared | 1/24 | `src/nova/tests/unit/compute/test_compute.py:L11693–L11717` |
| `ComputeAPITestCase.test_detach_interface_deallocate_port_for_instance_failed` | method | (self, warn_mock) | public | not declared | 1/27 | `src/nova/tests/unit/compute/test_compute.py:L11720–L11752` |
| `ComputeAPITestCase.test_detach_sriov_interface_pci_device_not_found` | method | (self, mock_warning) | public | not declared | 1/35 | `src/nova/tests/unit/compute/test_compute.py:L11755–L11792` |
| `ComputeAPITestCase.test_attach_volume_new_flow` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/compute/test_compute.py:L11794–L11817` |
| `ComputeAPITestCase.test_attach_volume_no_device_new_flow` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/compute/test_compute.py:L11819–L11842` |
| `ComputeAPITestCase.test_attach_volume_shelved_offloaded` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/compute/test_compute.py:L11844–L11877` |
| `ComputeAPITestCase.test_attach_volume_shelved_offloaded_new_flow` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/compute/test_compute.py:L11879–L11909` |
| `ComputeAPITestCase.test_attach_volume_shelved_offloaded_new_flow.fake_check_attach_and_reserve` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L11890–L11891` |
| `ComputeAPITestCase.test_detach_volume` | method | (self, mock_record) | public | not declared | 1/16 | `src/nova/tests/unit/compute/test_compute.py:L11914–L11937` |
| `ComputeAPITestCase.test_detach_volume.fake_begin_detaching` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L11921–L11922` |
| `ComputeAPITestCase.test_detach_volume.fake_rpc_detach_volume` | function | (self, context, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L11924–L11925` |
| `ComputeAPITestCase.test_detach_volume_shelved_offloaded` | method | (self, mock_block_dev, mock_local_cleanup, mock_begin_detaching, mock_event, mock_record) | public | not declared | 1/23 | `src/nova/tests/unit/compute/test_compute.py:L11944–L11967` |
| `ComputeAPITestCase.test_detach_volume_shelved_offloaded_new_flow` | method | (self, mock_block_dev, mock_local_cleanup, mock_begin_detaching) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_compute.py:L11972–L11987` |
| `ComputeAPITestCase.test_detach_invalid_volume` | method | (self, mock_begin_detaching) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_compute.py:L11993–L12000` |
| `ComputeAPITestCase.test_detach_suspended_instance_fails` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L12002–L12014` |
| `ComputeAPITestCase.test_detach_volume_libvirt_is_down` | method | (self, mock_get_vol, mock_get) | public | not declared | 1/23 | `src/nova/tests/unit/compute/test_compute.py:L12019–L12053` |
| `ComputeAPITestCase.test_detach_volume_libvirt_is_down.fake_libvirt_driver_instance_exists` | function | (self, _instance) | public | `False` (src/nova/tests/unit/compute/test_compute.py:L12031) | — | `src/nova/tests/unit/compute/test_compute.py:L12029–L12031` |
| `ComputeAPITestCase.test_detach_volume_libvirt_is_down.fake_libvirt_driver_detach_volume_fails` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L12033–L12035` |
| `ComputeAPITestCase.test_detach_volume_libvirt_is_down.fake_roll_detaching` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L12037–L12038` |
| `ComputeAPITestCase.test_detach_volume_not_found` | method | (self) | public | not declared | 1/30 | `src/nova/tests/unit/compute/test_compute.py:L12055–L12092` |
| `ComputeAPITestCase.test_detach_volume_not_found.fake_volume_get` | function | (self, context, volume_id, microversion=None) | public | `{'id': volume_id}` (src/nova/tests/unit/compute/test_compute.py:L12069) | — | `src/nova/tests/unit/compute/test_compute.py:L12068–L12069` |
| `ComputeAPITestCase.test_shutdown_with_legacy_volume_detach` | method | (self, mock_get_connector, mock_info, mock_terminate, mock_detach, mock_elevated) | public | not declared | 1/32 | `src/nova/tests/unit/compute/test_compute.py:L12100–L12139` |
| `ComputeAPITestCase.test_shutdown_with_attachment_delete` | method | (self, mock_get_connector, mock_info, mock_attach_delete, mock_elevated) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_compute.py:L12146–L12169` |
| `ComputeAPITestCase.test_shutdown_with_attachment_not_found` | method | (self, mock_get_connector, mock_info, mock_attach_delete, mock_debug_log) | public | not declared | 1/20 | `src/nova/tests/unit/compute/test_compute.py:L12176–L12206` |
| `ComputeAPITestCase.test_terminate_with_volumes` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/compute/test_compute.py:L12208–L12243` |
| `ComputeAPITestCase.test_terminate_with_volumes.fake_volume_get` | function | (self, context, volume_id) | public | `{'id': volume_id}` (src/nova/tests/unit/compute/test_compute.py:L12223) | — | `src/nova/tests/unit/compute/test_compute.py:L12222–L12223` |
| `ComputeAPITestCase.test_terminate_with_volumes.fake_detach` | function | (self, context, volume_id_param, instance_uuid) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L12229–L12230` |
| `ComputeAPITestCase.test_terminate_with_volumes.fake_terminate_connection` | function | (self, context, volume_id, connector) | public | `{}` (src/nova/tests/unit/compute/test_compute.py:L12234) | — | `src/nova/tests/unit/compute/test_compute.py:L12233–L12234` |
| `ComputeAPITestCase.test_terminate_deletes_all_bdms` | method | (self) | public | not declared | 2/36 | `src/nova/tests/unit/compute/test_compute.py:L12245–L12286` |
| `ComputeAPITestCase.test_terminate_deletes_all_bdms.fake_volume_get` | function | (self, context, volume_id) | public | `{'id': volume_id}` (src/nova/tests/unit/compute/test_compute.py:L12274) | — | `src/nova/tests/unit/compute/test_compute.py:L12273–L12274` |
| `ComputeAPITestCase.test_inject_network_info` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_compute.py:L12288–L12293` |
| `ComputeAPITestCase.test_lock` | method | (self, mock_event, mock_record, mock_elevate, mock_notify) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_compute.py:L12299–L12313` |
| `ComputeAPITestCase.test_lock_with_reason` | method | (self, mock_event, mock_record, mock_elevate, mock_notify) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_compute.py:L12319–L12336` |
| `ComputeAPITestCase.test_unlock` | method | (self, mock_event, mock_record, mock_elevate, mock_notify) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_compute.py:L12342–L12356` |
| `ComputeAPITestCase.test_unlock_with_reason` | method | (self, mock_event, mock_record, mock_elevate, mock_notify) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_compute.py:L12362–L12380` |
| `ComputeAPITestCase.test_get_diagnostics` | method | (self, mock_get) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_compute.py:L12383–L12388` |
| `ComputeAPITestCase.test_get_instance_diagnostics` | method | (self, mock_get) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_compute.py:L12391–L12396` |
| `ComputeAPITestCase._test_live_migrate` | method | (self, force=None) | private | not declared | 2/18 | `src/nova/tests/unit/compute/test_compute.py:L12398–L12442` |
| `ComputeAPITestCase._test_live_migrate.do_test` | function | (record_action_start, get_by_instance_uuid, get_all_by_host, live_migrate_instance) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L12408–L12432` |
| `ComputeAPITestCase.test_live_migrate` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L12444–L12445` |
| `ComputeAPITestCase.test_live_migrate_with_not_forced_host` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L12447–L12448` |
| `ComputeAPITestCase.test_live_migrate_with_forced_host` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L12450–L12451` |
| `ComputeAPITestCase.test_fail_live_migrate_with_non_existing_destination` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L12453–L12463` |
| `ComputeAPITestCase._test_evacuate` | method | (self, mock_notify, force=None, target_state=None) | private | not declared | 2/32 | `src/nova/tests/unit/compute/test_compute.py:L12466–L12543` |
| `ComputeAPITestCase._test_evacuate.fake_rebuild_instance` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L12474–L12478` |
| `ComputeAPITestCase._test_evacuate.do_test` | function | (service_is_up, get_by_instance_uuid, get_all_by_host, get_service) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L12485–L12522` |
| `ComputeAPITestCase.test_evacuate` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L12545–L12546` |
| `ComputeAPITestCase.test_evacuate_with_not_forced_host` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L12548–L12549` |
| `ComputeAPITestCase.test_evacuate_with_forced_host` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L12551–L12552` |
| `ComputeAPITestCase.test_evacuate_with_target_state` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L12554–L12555` |
| `ComputeAPITestCase.test_fail_evacuate_with_non_existing_destination` | method | (self, _service_is_up) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_compute.py:L12559–L12566` |
| `ComputeAPITestCase.test_fail_evacuate_from_non_existing_host` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/compute/test_compute.py:L12568–L12592` |
| `ComputeAPITestCase.test_fail_evacuate_from_running_host` | method | (self, mock_service) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L12595–L12608` |
| `ComputeAPITestCase.test_fail_evacuate_from_running_host.fake_service_is_up` | function | (*args, **kwargs) | public | `True` (src/nova/tests/unit/compute/test_compute.py:L12600) | — | `src/nova/tests/unit/compute/test_compute.py:L12599–L12600` |
| `ComputeAPITestCase.test_fail_evacuate_instance_in_wrong_state` | method | (self) | public | not declared | 3/11 | `src/nova/tests/unit/compute/test_compute.py:L12610–L12621` |
| `ComputeAPITestCase.test_evacuate_with_extended_resource_request_old_compute` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_compute.py:L12631–L12636` |
| `ComputeAPITestCase.test_get_migrations` | method | (self, mock_migration) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_compute.py:L12639–L12657` |
| `ComputeAPITestCase.test_get_migrations.fake_migrations` | function | (context, filters) | public | `objects.MigrationList( objects=[objects.Migration(**migration)])` (src/nova/tests/unit/compute/test_compute.py:L12645) | — | `src/nova/tests/unit/compute/test_compute.py:L12643–L12646` |
| `ComputeAPITestCase.test_get_migrations_in_progress_by_instance` | method | (self, mock_get) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_compute.py:L12660–L12668` |
| `ComputeAPITestCase.test_get_migration_by_id_and_instance` | method | (self, mock_get) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_compute.py:L12671–L12679` |
| `ComputeAPIIpFilterTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L12682–L12804` |
| `ComputeAPIIpFilterTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_compute.py:L12685–L12687` |
| `ComputeAPIIpFilterTestCase._get_ip_filtering_instances` | method | (self) | private | `objects.InstanceList(objects=[inst1, inst2])` (src/nova/tests/unit/compute/test_compute.py:L12733) | 1/43 | `src/nova/tests/unit/compute/test_compute.py:L12689–L12733` |
| `ComputeAPIIpFilterTestCase.test_ip_filtering_no_matches` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_compute.py:L12735–L12738` |
| `ComputeAPIIpFilterTestCase.test_ip_filtering_one_match` | method | (self) | public | not declared | 3/5 | `src/nova/tests/unit/compute/test_compute.py:L12740–L12744` |
| `ComputeAPIIpFilterTestCase.test_ip_filtering_one_match_limit` | method | (self) | public | not declared | 3/7 | `src/nova/tests/unit/compute/test_compute.py:L12746–L12752` |
| `ComputeAPIIpFilterTestCase.test_ip_filtering_two_matches` | method | (self) | public | not declared | 3/5 | `src/nova/tests/unit/compute/test_compute.py:L12754–L12758` |
| `ComputeAPIIpFilterTestCase.test_ip_filtering_two_matches_limit` | method | (self) | public | not declared | 4/11 | `src/nova/tests/unit/compute/test_compute.py:L12760–L12771` |
| `ComputeAPIIpFilterTestCase.test_ip_filtering_no_limit_to_db` | method | (self, mock_has_port_filter_ext, _mock_cell_map_get, mock_buildreq_get) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L12778–L12789` |
| `ComputeAPIIpFilterTestCase.test_ip_filtering_pass_limit_to_db` | method | (self, _mock_cell_map_get, mock_buildreq_get) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L12794–L12804` |
| `fake_rpc_method` | function | (self, context, method, **kwargs) | exported | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L12807–L12808` |
| `_create_service_entries` | function | (ctxt, values=[['avail_zone1', ['fake_host1', 'fake_host2']], ['avail_zone2', ['fake_host3']]], skip_host_mapping_creation_for_hosts=None) | unexported | `values` (src/nova/tests/unit/compute/test_compute.py:L12834) | 5/23 | `src/nova/tests/unit/compute/test_compute.py:L12811–L12834` |
| `ComputeAPIAggrTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L12837–L13638` |
| `ComputeAPIAggrTestCase.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_compute.py:L12842–L12847` |
| `ComputeAPIAggrTestCase.test_aggregate_no_zone` | method | (self, mock_notify) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L12850–L12863` |
| `ComputeAPIAggrTestCase.test_check_az_for_aggregate` | method | (self, mock_add_host, mock_get_all_by_host) | public | not declared | 1/22 | `src/nova/tests/unit/compute/test_compute.py:L12868–L12890` |
| `ComputeAPIAggrTestCase.test_update_aggregate` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_compute.py:L12892–L12906` |
| `ComputeAPIAggrTestCase.test_update_aggregate_no_az` | method | (self, mock_add_host, mock_get_all_by_host) | public | not declared | 1/22 | `src/nova/tests/unit/compute/test_compute.py:L12911–L12935` |
| `ComputeAPIAggrTestCase.test_update_aggregate_az_change` | method | (self, mock_add_host, mock_get_all_by_host) | public | not declared | 1/23 | `src/nova/tests/unit/compute/test_compute.py:L12940–L12965` |
| `ComputeAPIAggrTestCase.test_update_aggregate_az_fails` | method | (self, mock_add_host, mock_get_all_by_host) | public | not declared | 1/38 | `src/nova/tests/unit/compute/test_compute.py:L12970–L13010` |
| `ComputeAPIAggrTestCase.test_update_aggregate_az_fails_with_nova_az` | method | (self, mock_add_host, mock_get_all_by_host) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_compute.py:L13015–L13034` |
| `ComputeAPIAggrTestCase.test_update_aggregate_metadata` | method | (self, mock_notify) | public | not declared | 1/41 | `src/nova/tests/unit/compute/test_compute.py:L13037–L13078` |
| `ComputeAPIAggrTestCase.test_update_aggregate_metadata_no_az` | method | (self, mock_notify, mock_add_host, mock_get_all_by_host) | public | not declared | 1/31 | `src/nova/tests/unit/compute/test_compute.py:L13084–L13117` |
| `ComputeAPIAggrTestCase.test_update_aggregate_metadata_az_change` | method | (self, mock_add_host, mock_get_all_by_host) | public | not declared | 1/23 | `src/nova/tests/unit/compute/test_compute.py:L13122–L13147` |
| `ComputeAPIAggrTestCase.test_update_aggregate_az_do_not_replace_existing_metadata` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_compute.py:L13149–L13163` |
| `ComputeAPIAggrTestCase.test_update_aggregate_metadata_az_fails` | method | (self, mock_add_host, mock_get_all_by_host) | public | not declared | 1/34 | `src/nova/tests/unit/compute/test_compute.py:L13168–L13203` |
| `ComputeAPIAggrTestCase.test_delete_aggregate` | method | (self, mock_notify) | public | not declared | 1/35 | `src/nova/tests/unit/compute/test_compute.py:L13206–L13249` |
| `ComputeAPIAggrTestCase.test_delete_aggregate.AggregateIdMatcher` | class | — | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L13236–L13243` |
| `ComputeAPIAggrTestCase.test_delete_aggregate.AggregateIdMatcher.__init__` | method | (self, aggr) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L13237–L13238` |
| `ComputeAPIAggrTestCase.test_delete_aggregate.AggregateIdMatcher.__eq__` | method | (self, other_aggr) | public | `False` (src/nova/tests/unit/compute/test_compute.py:L13242); `self.aggr.id == other_aggr.id` (src/nova/tests/unit/compute/test_compute.py:L13243) | — | `src/nova/tests/unit/compute/test_compute.py:L13240–L13243` |
| `ComputeAPIAggrTestCase.test_delete_non_empty_aggregate` | method | (self, mock_add_host, mock_remove_host, mock_get_all_by_host) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_compute.py:L13256–L13271` |
| `ComputeAPIAggrTestCase.test_add_host_to_aggregate` | method | (self, mock_az, mock_notify, mock_add_host, mock_get_all_by_host) | public | not declared | 1/30 | `src/nova/tests/unit/compute/test_compute.py:L13279–L13311` |
| `ComputeAPIAggrTestCase.test_add_host_to_aggr_with_no_az` | method | (self, mock_add_host, mock_get_all_by_host) | public | not declared | 1/20 | `src/nova/tests/unit/compute/test_compute.py:L13316–L13335` |
| `ComputeAPIAggrTestCase.test_add_host_to_multi_az` | method | (self, mock_add_host, mock_get_all_by_host) | public | not declared | 1/20 | `src/nova/tests/unit/compute/test_compute.py:L13340–L13360` |
| `ComputeAPIAggrTestCase.test_add_host_to_multi_az_with_nova_agg` | method | (self, mock_add_host, mock_get_all_by_host) | public | not declared | 1/21 | `src/nova/tests/unit/compute/test_compute.py:L13365–L13387` |
| `ComputeAPIAggrTestCase.test_add_host_to_aggregate_multiple` | method | (self, mock_add_host, mock_get_all_by_host) | public | not declared | 2/15 | `src/nova/tests/unit/compute/test_compute.py:L13392–L13407` |
| `ComputeAPIAggrTestCase.test_add_host_to_aggregate_raise_not_found` | method | (self, mock_add_host) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L13411–L13422` |
| `ComputeAPIAggrTestCase.test_add_host_to_aggregate_raise_not_found_case` | method | (self, mock_add_host, mock_get_service) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_compute.py:L13427–L13445` |
| `ComputeAPIAggrTestCase.test_add_host_to_aggregate_raise_not_found_case.return_anyway` | function | (context, host_name) | public | `objects.Service(host=host_name.upper())` (src/nova/tests/unit/compute/test_compute.py:L13433) | — | `src/nova/tests/unit/compute/test_compute.py:L13432–L13433` |
| `ComputeAPIAggrTestCase.test_add_host_to_aggregate_raise_cn_not_found` | method | (self, mock_st, mock_hm, mock_add_host) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_compute.py:L13451–L13460` |
| `ComputeAPIAggrTestCase.test_remove_host_from_aggregate_active` | method | (self, mock_az, mock_notify, mock_add_host, mock_remove_host, mock_get_all_by_host) | public | not declared | 2/41 | `src/nova/tests/unit/compute/test_compute.py:L13470–L13513` |
| `ComputeAPIAggrTestCase.test_remove_host_from_aggregate_raise_not_found` | method | (self, mock_remove_host) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_compute.py:L13517–L13526` |
| `ComputeAPIAggrTestCase.test_remove_host_from_aggregate_no_host_mapping_service_exists` | method | (self, mock_az, mock_notify, mock_add_host, mock_rm_host, mock_get_service, mock_get_all_by_host) | public | not declared | 1/20 | `src/nova/tests/unit/compute/test_compute.py:L13537–L13561` |
| `ComputeAPIAggrTestCase.test_remove_host_from_aggregate_raise_cn_not_found` | method | (self, mock_st, mock_hm, mock_remove_host) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L13567–L13578` |
| `ComputeAPIAggrTestCase.test_aggregate_list` | method | (self) | public | not declared | 1/29 | `src/nova/tests/unit/compute/test_compute.py:L13580–L13608` |
| `ComputeAPIAggrTestCase.test_aggregate_list_with_hosts` | method | (self, mock_add_host, mock_get_all_by_host) | public | not declared | 2/17 | `src/nova/tests/unit/compute/test_compute.py:L13613–L13629` |
| `ComputeAPIAggrTestCase.test_placement_client_init` | method | (self, mock_report_client) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_compute.py:L13632–L13638` |
| `ComputeAPIAggrCallsSchedulerTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L13641–L13754` |
| `ComputeAPIAggrCallsSchedulerTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_compute.py:L13647–L13650` |
| `ComputeAPIAggrCallsSchedulerTestCase.test_create_aggregate` | method | (self, update_aggregates) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_compute.py:L13654–L13657` |
| `ComputeAPIAggrCallsSchedulerTestCase.test_update_aggregate` | method | (self, update_aggregates) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_compute.py:L13661–L13667` |
| `ComputeAPIAggrCallsSchedulerTestCase.test_update_aggregate_metadata` | method | (self, update_aggregates) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L13671–L13678` |
| `ComputeAPIAggrCallsSchedulerTestCase.test_delete_aggregate` | method | (self, delete_aggregate) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_compute.py:L13682–L13690` |
| `ComputeAPIAggrCallsSchedulerTestCase.test_add_host_to_aggregate` | method | (self, update_aggregates, mock_notify, mock_add_host, mock_get_all_by_host) | public | not declared | 1/24 | `src/nova/tests/unit/compute/test_compute.py:L13698–L13721` |
| `ComputeAPIAggrCallsSchedulerTestCase.test_remove_host_from_aggregate` | method | (self, update_aggregates, mock_notify, mock_remove_host, mock_get_all_by_host) | public | not declared | 1/26 | `src/nova/tests/unit/compute/test_compute.py:L13729–L13754` |
| `DisabledInstanceTypesTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L13757–L13828` |
| `DisabledInstanceTypesTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_compute.py:L13770–L13773` |
| `DisabledInstanceTypesTestCase.test_can_build_instance_from_visible_flavor` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_compute.py:L13775–L13779` |
| `DisabledInstanceTypesTestCase.test_cannot_build_instance_from_disabled_flavor` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_compute.py:L13781–L13784` |
| `DisabledInstanceTypesTestCase.test_can_resize_to_visible_flavor` | method | (self, mock_reqspec, mock_validate) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L13790–L13808` |
| `DisabledInstanceTypesTestCase.test_can_resize_to_visible_flavor.fake_get_flavor_by_flavor_id` | function | (ctxt, flavor_id, read_deleted="yes") | public | `flavor` (src/nova/tests/unit/compute/test_compute.py:L13802) | — | `src/nova/tests/unit/compute/test_compute.py:L13796–L13802` |
| `DisabledInstanceTypesTestCase.test_cannot_resize_to_disabled_flavor` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L13812–L13828` |
| `DisabledInstanceTypesTestCase.test_cannot_resize_to_disabled_flavor.fake_get_flavor_by_flavor_id` | function | (ctxt, flavor_id, read_deleted="yes") | public | `flavor` (src/nova/tests/unit/compute/test_compute.py:L13822) | — | `src/nova/tests/unit/compute/test_compute.py:L13816–L13822` |
| `InnerTestingException` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L13831–L13832` |
| `ComputeRescheduleResizeOrReraiseTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L13835–L13970` |
| `ComputeRescheduleResizeOrReraiseTestCase.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_compute.py:L13840–L13846` |
| `ComputeRescheduleResizeOrReraiseTestCase.test_reschedule_resize_or_reraise_called` | method | (self, mock_res, mock_prep) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_compute.py:L13852–L13868` |
| `ComputeRescheduleResizeOrReraiseTestCase.test_reschedule_resize_or_reraise_no_filter_properties` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/compute/test_compute.py:L13870–L13887` |
| `ComputeRescheduleResizeOrReraiseTestCase.test_reschedule_resize_or_reraise_no_retry_info` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/compute/test_compute.py:L13889–L13906` |
| `ComputeRescheduleResizeOrReraiseTestCase.test_reschedule_fails_with_exception` | method | (self, mock_log, mock_notify, mock_resize, mock_update) | public | not declared | 2/21 | `src/nova/tests/unit/compute/test_compute.py:L13913–L13941` |
| `ComputeRescheduleResizeOrReraiseTestCase.test_reschedule_passes` | method | (self, mock_log, mock_notify, mock_resize, mock_update) | public | not declared | 2/20 | `src/nova/tests/unit/compute/test_compute.py:L13947–L13970` |
| `ComputeInactiveImageTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L13973–L13995` |
| `ComputeInactiveImageTestCase.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_compute.py:L13974–L13986` |
| `ComputeInactiveImageTestCase.setUp.fake_show` | function | (meh, context, id, **kwargs) | public | `{'id': id, 'name': 'fake_name', 'status': 'deleted', 'min_ram': 0, 'min_disk': 0, 'properties': {'kernel_id': uuids.kernel_id, 'ramdisk_id': uuids.ramdisk_id, 'something_else': 'meow'}}` (src/nova/tests/unit/compute/test_compute.py:L13978) | — | `src/nova/tests/unit/compute/test_compute.py:L13977–L13982` |
| `ComputeInactiveImageTestCase.test_create_instance_with_deleted_image` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_compute.py:L13988–L13995` |
| `EvacuateHostTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L13998–L14417` |
| `EvacuateHostTestCase.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L13999–L14013` |
| `EvacuateHostTestCase.setUp.fake_get_compute_info` | function | (cls, context, host) | public | `cn` (src/nova/tests/unit/compute/test_compute.py:L14009) | — | `src/nova/tests/unit/compute/test_compute.py:L14007–L14009` |
| `EvacuateHostTestCase.tearDown` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_compute.py:L14015–L14017` |
| `EvacuateHostTestCase._rebuild` | method | (self, on_shared_storage=True, migration=None, send_node=False, vm_states_is_stopped=False, expect_error=False) | private | not declared | 2/22 | `src/nova/tests/unit/compute/test_compute.py:L14019–L14092` |
| `EvacuateHostTestCase._rebuild._test_rebuild` | function | (mock_context, mock_setup_instance_network_on_host, mock_setup_networks_on_host, mock_notify_rebuild, mock_notify_action, mock_update_pci_req, mock_get_mapping, vm_is_stopped=False) | private | `` (src/nova/tests/unit/compute/test_compute.py:L14072) | — | `src/nova/tests/unit/compute/test_compute.py:L14041–L14090` |
| `EvacuateHostTestCase.test_rebuild_on_host_updated_target` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_compute.py:L14094–L14115` |
| `EvacuateHostTestCase.test_rebuild_on_host_updated_target.fake_get_compute_info` | function | (context, host) | public | `cn` (src/nova/tests/unit/compute/test_compute.py:L14100) | — | `src/nova/tests/unit/compute/test_compute.py:L14096–L14100` |
| `EvacuateHostTestCase.test_rebuild_on_host_updated_target_node_not_found` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_compute.py:L14117–L14135` |
| `EvacuateHostTestCase.test_rebuild_on_host_updated_target_node_not_found.fake_get_compute_info` | function | (context, host) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L14119–L14120` |
| `EvacuateHostTestCase.test_rebuild_on_host_node_passed` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L14137–L14148` |
| `EvacuateHostTestCase.test_rebuild_with_instance_in_stopped_state` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_compute.py:L14150–L14166` |
| `EvacuateHostTestCase.test_rebuild_with_wrong_shared_storage` | method | (self, mock_remove_allocs) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L14170–L14182` |
| `EvacuateHostTestCase.test_rebuild_on_remote_host_with_volumes` | method | (self, mock_drv_detach, mock_prep, mock_detach) | public | not declared | 3/33 | `src/nova/tests/unit/compute/test_compute.py:L14187–L14235` |
| `EvacuateHostTestCase.test_rebuild_on_remote_host_with_volumes.fake_volume_get` | function | (self, context, volume, microversion=None) | public | `{'id': uuids.volume}` (src/nova/tests/unit/compute/test_compute.py:L14202) | — | `src/nova/tests/unit/compute/test_compute.py:L14201–L14202` |
| `EvacuateHostTestCase.test_rebuild_on_remote_host_with_volumes.fake_detach` | function | (context, volume, instance_uuid, attachment_id) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L14208–L14209` |
| `EvacuateHostTestCase.test_rebuild_on_remote_host_with_volumes.fake_terminate_connection` | function | (self, context, volume, connector) | public | `{}` (src/nova/tests/unit/compute/test_compute.py:L14213) | — | `src/nova/tests/unit/compute/test_compute.py:L14212–L14213` |
| `EvacuateHostTestCase.test_rebuild_on_host_with_shared_storage` | method | (self, mock_spawn) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L14238–L14251` |
| `EvacuateHostTestCase.test_rebuild_on_host_without_shared_storage` | method | (self, mock_spawn) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L14254–L14269` |
| `EvacuateHostTestCase.test_rebuild_on_host_instance_exists` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_compute.py:L14271–L14285` |
| `EvacuateHostTestCase.test_driver_does_not_support_recreate` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L14287–L14296` |
| `EvacuateHostTestCase.test_on_shared_storage_not_provided_host_without_shared_storage` | method | (self, mock_spawn) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_compute.py:L14299–L14313` |
| `EvacuateHostTestCase.test_on_shared_storage_not_provided_host_with_shared_storage` | method | (self, mock_spawn) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_compute.py:L14316–L14329` |
| `EvacuateHostTestCase.test_rebuild_migration_passed_in` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L14331–L14343` |
| `EvacuateHostTestCase.test_rebuild_migration_node_passed_in` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_compute.py:L14345–L14357` |
| `EvacuateHostTestCase.test_rebuild_migration_claim_fails` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_compute.py:L14359–L14376` |
| `EvacuateHostTestCase.test_rebuild_fails_migration_failed` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_compute.py:L14378–L14397` |
| `EvacuateHostTestCase.test_rebuild_numa_migration_context_honoured` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_compute.py:L14399–L14417` |
| `EvacuateHostTestCase.test_rebuild_numa_migration_context_honoured.fake_spawn` | function | (context, instance, image_meta, injected_files, admin_password, allocations, network_info=None, block_device_info=None, accel_info=None) | public | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L14404–L14407` |
| `ComputeInjectedFilesTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L14420–L14477` |
| `ComputeInjectedFilesTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_compute.py:L14423–L14427` |
| `ComputeInjectedFilesTestCase._spawn` | method | (self, context, instance, image_meta, injected_files, admin_password, allocations, nw_info, block_device_info, db_api=None) | private | not declared | 1/6 | `src/nova/tests/unit/compute/test_compute.py:L14429–L14434` |
| `ComputeInjectedFilesTestCase._test` | method | (self, injected_files, decoded_files) | private | not declared | 1/6 | `src/nova/tests/unit/compute/test_compute.py:L14436–L14441` |
| `ComputeInjectedFilesTestCase.test_injected_none` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L14443–L14445` |
| `ComputeInjectedFilesTestCase.test_injected_empty` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_compute.py:L14447–L14449` |
| `ComputeInjectedFilesTestCase.test_injected_success` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L14451–L14462` |
| `ComputeInjectedFilesTestCase.test_injected_invalid` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_compute.py:L14464–L14477` |
| `CheckConfigDriveTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L14480–L14511` |
| `CheckConfigDriveTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_compute.py:L14484–L14486` |
| `CheckConfigDriveTestCase._assertCheck` | method | (self, expected, config_drive) | private | not declared | 1/3 | `src/nova/tests/unit/compute/test_compute.py:L14488–L14490` |
| `CheckConfigDriveTestCase._assertInvalid` | method | (self, config_drive) | private | not declared | 1/4 | `src/nova/tests/unit/compute/test_compute.py:L14492–L14495` |
| `CheckConfigDriveTestCase.test_config_drive_false_values` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_compute.py:L14497–L14502` |
| `CheckConfigDriveTestCase.test_config_drive_true_values` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_compute.py:L14504–L14507` |
| `CheckConfigDriveTestCase.test_config_drive_bogus_values_raise` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_compute.py:L14509–L14511` |
| `CheckRequestedImageTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L14514–L14744` |
| `CheckRequestedImageTestCase.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_compute.py:L14515–L14524` |
| `CheckRequestedImageTestCase.test_no_image_specified` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_compute.py:L14526–L14528` |
| `CheckRequestedImageTestCase.test_image_status_must_be_active` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L14530–L14539` |
| `CheckRequestedImageTestCase.test_image_min_ram_check` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L14541–L14550` |
| `CheckRequestedImageTestCase.test_image_min_disk_check` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L14552–L14561` |
| `CheckRequestedImageTestCase.test_image_too_large` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L14563–L14572` |
| `CheckRequestedImageTestCase.test_root_gb_zero_disables_size_check` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L14574–L14582` |
| `CheckRequestedImageTestCase.test_root_gb_zero_disables_min_disk` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L14584–L14592` |
| `CheckRequestedImageTestCase.test_config_drive_option` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_compute.py:L14594–L14606` |
| `CheckRequestedImageTestCase.test_volume_blockdevicemapping` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L14608–L14624` |
| `CheckRequestedImageTestCase.test_volume_blockdevicemapping_min_disk` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/compute/test_compute.py:L14626–L14643` |
| `CheckRequestedImageTestCase.test_volume_blockdevicemapping_min_disk_no_size` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L14645–L14658` |
| `CheckRequestedImageTestCase.test_image_blockdevicemapping` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_compute.py:L14660–L14671` |
| `CheckRequestedImageTestCase.test_image_blockdevicemapping_too_big` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_compute.py:L14673–L14687` |
| `CheckRequestedImageTestCase.test_image_blockdevicemapping_min_disk` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_compute.py:L14689–L14702` |
| `CheckRequestedImageTestCase.test_cpu_policy` | method | (self, dedicated_cpu_mock) | public | not declared | 3/15 | `src/nova/tests/unit/compute/test_compute.py:L14705–L14721` |
| `CheckRequestedImageTestCase.test_cpu_thread_policy` | method | (self) | public | not declared | 2/21 | `src/nova/tests/unit/compute/test_compute.py:L14723–L14744` |
| `ComputeAPITestCase._parse_db_block_device_mapping` | staticmethod | — | private | not declared | — | `src/nova/tests/unit/compute/test_compute.py:L10109–L10119` |

## Dependencies

- `import datetime` (src/nova/tests/unit/compute/test_compute.py:L20)
- `import threading` (src/nova/tests/unit/compute/test_compute.py:L21)
- `import fixtures as std_fixtures` (src/nova/tests/unit/compute/test_compute.py:L23)
- `itertools`: imports `chain` (src/nova/tests/unit/compute/test_compute.py:L24)
- `import operator` (src/nova/tests/unit/compute/test_compute.py:L25)
- `import sys` (src/nova/tests/unit/compute/test_compute.py:L26)
- `unittest`: imports `mock` (src/nova/tests/unit/compute/test_compute.py:L27)
- `castellan`: imports `key_manager` (src/nova/tests/unit/compute/test_compute.py:L29)
- `cinderclient`: imports `exceptions as cinder_exception` (src/nova/tests/unit/compute/test_compute.py:L30)
- `import ddt` (src/nova/tests/unit/compute/test_compute.py:L31)
- `import futurist` (src/nova/tests/unit/compute/test_compute.py:L32)
- `keystoneauth1`: imports `exceptions as keystone_exception` (src/nova/tests/unit/compute/test_compute.py:L33)
- `neutronclient.common`: imports `exceptions as neutron_exceptions` (src/nova/tests/unit/compute/test_compute.py:L34)
- `oslo_log`: imports `log as logging` (src/nova/tests/unit/compute/test_compute.py:L35)
- `import oslo_messaging as messaging` (src/nova/tests/unit/compute/test_compute.py:L36)
- `oslo_serialization`: imports `base64` (src/nova/tests/unit/compute/test_compute.py:L37)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/compute/test_compute.py:L38)
- `oslo_utils`: imports `fixture as utils_fixture` (src/nova/tests/unit/compute/test_compute.py:L39)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/compute/test_compute.py:L40)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/compute/test_compute.py:L41)
- `oslo_utils`: imports `units` (src/nova/tests/unit/compute/test_compute.py:L42)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/compute/test_compute.py:L43)
- `import testtools` (src/nova/tests/unit/compute/test_compute.py:L44)
- `testtools`: imports `matchers as testtools_matchers` (src/nova/tests/unit/compute/test_compute.py:L45)
- `import nova` (src/nova/tests/unit/compute/test_compute.py:L47)
- `nova`: imports `availability_zones` (src/nova/tests/unit/compute/test_compute.py:L48)
- `nova`: imports `block_device` (src/nova/tests/unit/compute/test_compute.py:L49)
- `nova.compute`: imports `api as compute` (src/nova/tests/unit/compute/test_compute.py:L50)
- `nova.compute`: imports `flavors` (src/nova/tests/unit/compute/test_compute.py:L51)
- `nova.compute`: imports `instance_actions` (src/nova/tests/unit/compute/test_compute.py:L52)
- `nova.compute`: imports `manager as compute_manager` (src/nova/tests/unit/compute/test_compute.py:L53)
- `nova.compute`: imports `power_state` (src/nova/tests/unit/compute/test_compute.py:L54)
- `nova.compute`: imports `rpcapi as compute_rpcapi` (src/nova/tests/unit/compute/test_compute.py:L55)
- `nova.compute`: imports `task_states` (src/nova/tests/unit/compute/test_compute.py:L56)
- `nova.compute`: imports `utils as compute_utils` (src/nova/tests/unit/compute/test_compute.py:L57)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/compute/test_compute.py:L58)
- `import nova.conf` (src/nova/tests/unit/compute/test_compute.py:L59)
- `nova.console`: imports `type as ctype` (src/nova/tests/unit/compute/test_compute.py:L60)
- `nova`: imports `context` (src/nova/tests/unit/compute/test_compute.py:L61)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/compute/test_compute.py:L62)
- `nova`: imports `exception` (src/nova/tests/unit/compute/test_compute.py:L63)
- `nova.image`: imports `glance as image_api` (src/nova/tests/unit/compute/test_compute.py:L64)
- `nova.network`: imports `model as network_model` (src/nova/tests/unit/compute/test_compute.py:L65)
- `nova`: imports `objects` (src/nova/tests/unit/compute/test_compute.py:L66)
- `nova.objects`: imports `block_device as block_device_obj` (src/nova/tests/unit/compute/test_compute.py:L67)
- `nova.objects`: imports `fields as obj_fields` (src/nova/tests/unit/compute/test_compute.py:L68)
- `nova.objects`: imports `instance as instance_obj` (src/nova/tests/unit/compute/test_compute.py:L69)
- `nova.objects`: imports `migrate_data as migrate_data_obj` (src/nova/tests/unit/compute/test_compute.py:L70)
- `nova.policies`: imports `base as base_policy` (src/nova/tests/unit/compute/test_compute.py:L71)
- `nova.policies`: imports `servers as servers_policy` (src/nova/tests/unit/compute/test_compute.py:L72)
- `nova.scheduler`: imports `utils as scheduler_utils` (src/nova/tests/unit/compute/test_compute.py:L73)
- `nova`: imports `test` (src/nova/tests/unit/compute/test_compute.py:L74)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/compute/test_compute.py:L75)
- `nova.tests.fixtures`: imports `cyborg as cyborg_fixture` (src/nova/tests/unit/compute/test_compute.py:L76)
- `nova.tests.unit.compute`: imports `fake_resource_tracker` (src/nova/tests/unit/compute/test_compute.py:L77)
- `nova.tests.unit`: imports `fake_block_device` (src/nova/tests/unit/compute/test_compute.py:L78)
- `nova.tests.unit`: imports `fake_diagnostics` (src/nova/tests/unit/compute/test_compute.py:L79)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/compute/test_compute.py:L80)
- `nova.tests.unit`: imports `fake_network` (src/nova/tests/unit/compute/test_compute.py:L81)
- `nova.tests.unit`: imports `fake_network_cache_model` (src/nova/tests/unit/compute/test_compute.py:L82)
- `nova.tests.unit`: imports `fake_server_actions` (src/nova/tests/unit/compute/test_compute.py:L83)
- `nova.tests.unit`: imports `matchers` (src/nova/tests/unit/compute/test_compute.py:L84)
- `nova.tests.unit.objects`: imports `test_diagnostics` (src/nova/tests/unit/compute/test_compute.py:L85)
- `nova.tests.unit.objects`: imports `test_flavor` (src/nova/tests/unit/compute/test_compute.py:L86)
- `nova.tests.unit.objects`: imports `test_instance_numa` (src/nova/tests/unit/compute/test_compute.py:L87)
- `nova.tests.unit.objects`: imports `test_migration` (src/nova/tests/unit/compute/test_compute.py:L88)
- `nova.tests.unit`: imports `utils as test_utils` (src/nova/tests/unit/compute/test_compute.py:L89)
- `nova`: imports `thread_pool_factory` (src/nova/tests/unit/compute/test_compute.py:L90)
- `nova`: imports `utils` (src/nova/tests/unit/compute/test_compute.py:L91)
- `nova.virt`: imports `block_device as driver_block_device` (src/nova/tests/unit/compute/test_compute.py:L92)
- `nova.virt.block_device`: imports `DriverVolumeBlockDevice as driver_bdm_volume` (src/nova/tests/unit/compute/test_compute.py:L93)
- `nova.virt`: imports `event` (src/nova/tests/unit/compute/test_compute.py:L94)
- `nova.virt`: imports `fake` (src/nova/tests/unit/compute/test_compute.py:L95)
- `nova.virt`: imports `hardware` (src/nova/tests/unit/compute/test_compute.py:L96)
- `nova.volume`: imports `cinder` (src/nova/tests/unit/compute/test_compute.py:L97)

## Side Effects

- **network**: def test_attach_volume_raises(self, mock_notify, mock_elevate, (src/nova/tests/unit/compute/test_compute.py:L436)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L460)
- **network**: def test_attach_volume_raises_new_flow(self, mock_notify, mock_elevate): (src/nova/tests/unit/compute/test_compute.py:L475)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L500)
- **network**: self, mock_notify, mock_elevate, mock_event, mock_debug_log): (src/nova/tests/unit/compute/test_compute.py:L515)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L548)
- **network**: mock_notify): (src/nova/tests/unit/compute/test_compute.py:L855)
- **network**: mock_notify.assert_called_once_with( (src/nova/tests/unit/compute/test_compute.py:L870)
- **network**: mock_notify, mock_elevate, mock_notify_usage): (src/nova/tests/unit/compute/test_compute.py:L885)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L970)
- **network**: def test_stop(self, mock_notify): (src/nova/tests/unit/compute/test_compute.py:L2333)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L2347)
- **network**: def test_start(self, mock_notify): (src/nova/tests/unit/compute/test_compute.py:L2355)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L2372)
- **network**: def test_rescue_notifications(self, mock_context, mock_notify): (src/nova/tests/unit/compute/test_compute.py:L2474)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L2498)
- **network**: def test_unrescue_notifications(self, mock_context, mock_notify): (src/nova/tests/unit/compute/test_compute.py:L2527)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L2549)
- **network**: def test_pause(self, mock_context, mock_notify): (src/nova/tests/unit/compute/test_compute.py:L2980)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L2991)
- **network**: mock_notify.reset_mock() (src/nova/tests/unit/compute/test_compute.py:L3005)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L3015)
- **network**: def test_suspend(self, mock_context, mock_notify, mock_get_share_info, (src/nova/tests/unit/compute/test_compute.py:L3026)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L3051)
- **network**: def test_suspend_with_share(self, mock_context, mock_notify, (src/nova/tests/unit/compute/test_compute.py:L3069)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L3094)
- **network**: def test_resume_notifications(self, mock_context, mock_notify, (src/nova/tests/unit/compute/test_compute.py:L3165)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L3188)
- **network**: orig_notify = self.compute._notify_about_instance_usage (src/nova/tests/unit/compute/test_compute.py:L5125)
- **network**: '_notify_about_instance_usage', orig_notify) (src/nova/tests/unit/compute/test_compute.py:L5144)
- **network**: ) as (mock_get_bdm, mock_setup, mock_net_mig, mock_get_nw, mock_notify, (src/nova/tests/unit/compute/test_compute.py:L5357)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L5413)
- **network**: def test_resize_instance_notification(self, mock_notify): (src/nova/tests/unit/compute/test_compute.py:L5811)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L5862)
- **network**: def _test_confirm_resize(self, mock_notify, mock_get_by_instance_uuid, (src/nova/tests/unit/compute/test_compute.py:L6041)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L6162)
- **network**: def _test_finish_revert_resize(self, mock_notify, power_on, (src/nova/tests/unit/compute/test_compute.py:L6380)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L6509)
- **network**: mock_notify, (src/nova/tests/unit/compute/test_compute.py:L6664)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L6700)
- **network**: def test_post_live_migration_working_correctly(self, mock_notify): (src/nova/tests/unit/compute/test_compute.py:L7015)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L7066)
- **network**: self.assertEqual(2, mock_notify.call_count) (src/nova/tests/unit/compute/test_compute.py:L7072)
- **network**: mock_mig_save, mock_notify, mock_get_pci): (src/nova/tests/unit/compute/test_compute.py:L7183)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L7196)
- **network**: mock_notify): (src/nova/tests/unit/compute/test_compute.py:L7286)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L7313)
- **network**: mock.call(ctxt, inst1, bdms, notify=False), (src/nova/tests/unit/compute/test_compute.py:L7584)
- **network**: mock.call(ctxt, inst2, bdms, notify=False)]) (src/nova/tests/unit/compute/test_compute.py:L7585)
- **network**: self, br_get_by_instance, legacy_notify, minimum_server_version, (src/nova/tests/unit/compute/test_compute.py:L8950)
- **network**: im_get_by_instance, target_cell, instance_destroy, notify): (src/nova/tests/unit/compute/test_compute.py:L8951)
- **network**: legacy_notify, notify, instance.uuid, self.compute_api.notifier, (src/nova/tests/unit/compute/test_compute.py:L8967)
- **network**: self, br_get_by_instance, legacy_notify, im_get_by_instance, (src/nova/tests/unit/compute/test_compute.py:L8977)
- **network**: instance_destroy, notify, api_del_cleanup): (src/nova/tests/unit/compute/test_compute.py:L8978)
- **network**: legacy_notify, notify, instance.uuid, self.compute_api.notifier, (src/nova/tests/unit/compute/test_compute.py:L8994)
- **network**: self, br_get_by_instance, legacy_notify, im_get_by_instance, (src/nova/tests/unit/compute/test_compute.py:L9007)
- **network**: target_cell, instance_destroy, notify): (src/nova/tests/unit/compute/test_compute.py:L9008)
- **network**: legacy_notify, notify, instance.uuid, self.compute_api.notifier, (src/nova/tests/unit/compute/test_compute.py:L9026)
- **network**: mock_notify (src/nova/tests/unit/compute/test_compute.py:L10808)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L10828)
- **network**: def test_attach_interface_with_qos(self, mock_notify): (src/nova/tests/unit/compute/test_compute.py:L10844)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L10895)
- **network**: def test_attach_sriov_interface(self, mock_notify): (src/nova/tests/unit/compute/test_compute.py:L10920)
- **network**: def test_attach_sriov_interface_with_qos(self, mock_notify): (src/nova/tests/unit/compute/test_compute.py:L10992)
- **network**: def test_interface_tagged_attach(self, mock_notify): (src/nova/tests/unit/compute/test_compute.py:L11088)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L11125)
- **network**: ) as (mock_notify, mock_attach, mock_allocate, mock_deallocate, (src/nova/tests/unit/compute/test_compute.py:L11180)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L11203)
- **network**: mock_notify, mock_attach, mock_allocate, mock_deallocate, (src/nova/tests/unit/compute/test_compute.py:L11250)
- **network**: mock_notify (src/nova/tests/unit/compute/test_compute.py:L11670)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L11680)
- **network**: mock_notify, mock_detach, mock_deallocate): (src/nova/tests/unit/compute/test_compute.py:L11708)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L11713)
- **network**: mock_notify, mock_detach, mock_deallocate, mock_instance_update): (src/nova/tests/unit/compute/test_compute.py:L11742)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L11750)
- **network**: mock_destroy, mock_notify, mock_detach, mock_volume_connector): (src/nova/tests/unit/compute/test_compute.py:L12084)
- **network**: def test_lock(self, mock_event, mock_record, mock_elevate, mock_notify): (src/nova/tests/unit/compute/test_compute.py:L12299)
- **network**: mock_notify.assert_called_once_with( (src/nova/tests/unit/compute/test_compute.py:L12311)
- **network**: mock_notify): (src/nova/tests/unit/compute/test_compute.py:L12320)
- **network**: mock_notify.assert_called_once_with( (src/nova/tests/unit/compute/test_compute.py:L12334)
- **network**: def test_unlock(self, mock_event, mock_record, mock_elevate, mock_notify): (src/nova/tests/unit/compute/test_compute.py:L12342)
- **network**: mock_notify.assert_called_once_with( (src/nova/tests/unit/compute/test_compute.py:L12354)
- **network**: mock_notify): (src/nova/tests/unit/compute/test_compute.py:L12363)
- **network**: mock_notify.assert_called_once_with( (src/nova/tests/unit/compute/test_compute.py:L12378)
- **network**: def _test_evacuate(self, mock_notify, force=None, target_state=None): (src/nova/tests/unit/compute/test_compute.py:L12466)
- **network**: mock_notify.assert_called_once_with( (src/nova/tests/unit/compute/test_compute.py:L12535)
- **network**: self.stub_out('oslo_messaging.rpc.client.call', fake_rpc_method) (src/nova/tests/unit/compute/test_compute.py:L12846)
- **network**: self.stub_out('oslo_messaging.rpc.client.cast', fake_rpc_method) (src/nova/tests/unit/compute/test_compute.py:L12847)
- **network**: def test_aggregate_no_zone(self, mock_notify): (src/nova/tests/unit/compute/test_compute.py:L12850)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L12855)
- **network**: def test_update_aggregate_metadata(self, mock_notify): (src/nova/tests/unit/compute/test_compute.py:L13037)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L13057)
- **network**: def test_update_aggregate_metadata_no_az(self, mock_notify, mock_add_host, (src/nova/tests/unit/compute/test_compute.py:L13084)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L13111)
- **network**: def test_delete_aggregate(self, mock_notify): (src/nova/tests/unit/compute/test_compute.py:L13206)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L13217)
- **network**: mock_notify.reset_mock() (src/nova/tests/unit/compute/test_compute.py:L13223)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L13245)
- **network**: def test_add_host_to_aggregate(self, mock_az, mock_notify, mock_add_host, (src/nova/tests/unit/compute/test_compute.py:L13279)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L13305)
- **network**: self, mock_az, mock_notify, mock_add_host, mock_remove_host, (src/nova/tests/unit/compute/test_compute.py:L13471)
- **network**: mock_notify.reset_mock() (src/nova/tests/unit/compute/test_compute.py:L13488)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L13507)
- **network**: self, mock_az, mock_notify, mock_add_host, mock_rm_host, (src/nova/tests/unit/compute/test_compute.py:L13538)
- **network**: self, update_aggregates, mock_notify, mock_add_host, (src/nova/tests/unit/compute/test_compute.py:L13699)
- **network**: self, update_aggregates, mock_notify, mock_remove_host, (src/nova/tests/unit/compute/test_compute.py:L13730)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_compute.py:L13748)
- **network**: def test_reschedule_fails_with_exception(self, mock_log, mock_notify, (src/nova/tests/unit/compute/test_compute.py:L13913)
- **network**: mock_notify.assert_called_once_with( (src/nova/tests/unit/compute/test_compute.py:L13936)
- **network**: def test_reschedule_passes(self, mock_log, mock_notify, mock_resize, (src/nova/tests/unit/compute/test_compute.py:L13947)
- **network**: mock_notify.assert_called_once_with( (src/nova/tests/unit/compute/test_compute.py:L13966)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/unit/compute/test_compute.py:L100)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/compute/test_compute.py:L101)
- **global-mutation**: FAKE_IMAGE_REF = uuids.image_ref (src/nova/tests/unit/compute/test_compute.py:L104)
- **global-mutation**: NODENAME = 'fakenode1' (src/nova/tests/unit/compute/test_compute.py:L106)
- **global-mutation**: NODENAME2 = 'fakenode2' (src/nova/tests/unit/compute/test_compute.py:L107)
- **global-mutation**: COMPUTE_ID = 123 (src/nova/tests/unit/compute/test_compute.py:L108)
- **global-mutation**: FAILED_VIF_TYPES = (network_model.VIF_TYPE_UNBOUND, (src/nova/tests/unit/compute/test_compute.py:L7690)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as keystone_exception (src/nova/tests/unit/compute/test_compute.py:L33)
- **sink** (`db-write`): inst.flavor.update(params.pop('flavor', {})) (src/nova/tests/unit/compute/test_compute.py:L338)
- **sink** (`db-write`): inst.update(params) (src/nova/tests/unit/compute/test_compute.py:L339)
- **sink** (`db-write`): instance.update({'task_state': task_states.MIGRATING, (src/nova/tests/unit/compute/test_compute.py:L7028)
- **sink** (`db-write`): instance.update({'task_state': task_states.MIGRATING, (src/nova/tests/unit/compute/test_compute.py:L7110)
- **sink** (`db-write`): extra.update(values) (src/nova/tests/unit/compute/test_compute.py:L7370)
- **sink** (`db-write`): fake_mig.update({'id': i, (src/nova/tests/unit/compute/test_compute.py:L8009)
- **sink** (`db-write`): migration.update(updates) (src/nova/tests/unit/compute/test_compute.py:L8034)
- **sink** (`db-write`): instance.update(filters) (src/nova/tests/unit/compute/test_compute.py:L8086)
- **sink** (`db-write`): new_instance.update(filters) (src/nova/tests/unit/compute/test_compute.py:L8097)
- **sink** (`db-write`): instance.update(base_options) (src/nova/tests/unit/compute/test_compute.py:L9352)
- **sink** (`db-write`): instance.update(base_options) (src/nova/tests/unit/compute/test_compute.py:L9384)
- **sink** (`db-write`): instance.system_metadata.update({ (src/nova/tests/unit/compute/test_compute.py:L9540)
- **sink** (`db-write`): """Confirm evacuate scenario does not update host.""" (src/nova/tests/unit/compute/test_compute.py:L14171)

## Notes

- KB `sideEffects` entries at L436, L475, L2333, L2355, L2474, L2527, L2980, L3026, L3069, L3165, L5811, L6041, L6380, L7015, L10844, L10920, L10992, L11088, L12299, L12342, L12466, L12850, L13037, L13084, L13206, L13279, L13913, L13947 have targets that appear to be code fragments rather than resource paths; documented as recorded.

