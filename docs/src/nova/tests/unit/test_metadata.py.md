# src/nova/tests/unit/test_metadata.py

## Overview

This file implements the `test_metadata` module, defining 5 classs, 4 constants, 13 functions, 104 methods, 35 imports, 8 side effects, 16 security surface entries.

Lines: total 1870, code 1471, comment 93, blank 306

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/test_metadata.py:L57–L57` |
| `USER_DATA_STRING` | constant | — | exported | not declared | — | `src/nova/tests/unit/test_metadata.py:L59–L59` |
| `ENCODE_USER_DATA_STRING` | constant | — | exported | not declared | — | `src/nova/tests/unit/test_metadata.py:L60–L60` |
| `FAKE_SEED` | constant | — | exported | not declared | — | `src/nova/tests/unit/test_metadata.py:L61–L61` |
| `fake_inst_obj` | function | (context) | exported | `inst` (src/nova/tests/unit/test_metadata.py:L100) | 1/36 | `src/nova/tests/unit/test_metadata.py:L64–L100` |
| `fake_keypair_obj` | function | (name, data) | exported | `objects.KeyPair(name=name, type='fake_type', public_key=data)` (src/nova/tests/unit/test_metadata.py:L104) | 1/4 | `src/nova/tests/unit/test_metadata.py:L103–L106` |
| `fake_InstanceMetadata` | function | (testcase, inst_data, address=None, sgroups=None, content=None, extra_md=None, network_info=None, network_metadata=None) | exported | `base.InstanceMetadata(inst_data, address=address, content=content, extra_md=extra_md, network_info=network_info, network_metadata=network_metadata)` (src/nova/tests/unit/test_metadata.py:L118) | 4/11 | `src/nova/tests/unit/test_metadata.py:L109–L120` |
| `fake_request` | function | (testcase, mdinst, relpath, address="127.0.0.1", fake_get_metadata=None, headers=None, fake_get_metadata_by_instance_id=None, app=None) | exported | `response` (src/nova/tests/unit/test_metadata.py:L157) | 6/26 | `src/nova/tests/unit/test_metadata.py:L123–L157` |
| `fake_request.get_metadata_by_remote_address` | function | (self, address) | public | `mdinst` (src/nova/tests/unit/test_metadata.py:L128) | — | `src/nova/tests/unit/test_metadata.py:L127–L128` |
| `fake_metadata_objects` | function | — | exported | `mdlist` (src/nova/tests/unit/test_metadata.py:L210) | 1/51 | `src/nova/tests/unit/test_metadata.py:L160–L210` |
| `fake_metadata_dicts` | function | (include_vlan=False, include_vf_trusted=False, include_shares=False) | exported | `dicts` (src/nova/tests/unit/test_metadata.py:L272) | 4/56 | `src/nova/tests/unit/test_metadata.py:L213–L272` |
| `MetadataTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_metadata.py:L275–L672` |
| `MetadataTestCase.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_metadata.py:L276–L282` |
| `MetadataTestCase.test_can_pickle_metadata` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_metadata.py:L284–L288` |
| `MetadataTestCase.test_user_data` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_metadata.py:L290–L295` |
| `MetadataTestCase.test_no_user_data` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_metadata.py:L297–L304` |
| `MetadataTestCase.test_security_groups` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/test_metadata.py:L306–L313` |
| `MetadataTestCase.test_local_hostname` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_metadata.py:L315–L320` |
| `MetadataTestCase.test_local_hostname_fqdn` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_metadata.py:L322–L327` |
| `MetadataTestCase.test_format_instance_mapping` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/test_metadata.py:L329–L387` |
| `MetadataTestCase.test_format_instance_mapping.fake_bdm_get` | function | (ctxt, uuid) | public | `[fake_block_device.FakeDbBlockDeviceDict( {'volume_id': 87654321, 'snapshot_id': None, 'no_device': None, 'source_type': 'volume', 'destination_type': 'volume', 'delete_on_termination': True, 'device_` (src/nova/tests/unit/test_metadata.py:L345) | — | `src/nova/tests/unit/test_metadata.py:L344–L370` |
| `MetadataTestCase.test_pubkey` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_metadata.py:L389–L396` |
| `MetadataTestCase.test_image_type_ramdisk` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_metadata.py:L398–L405` |
| `MetadataTestCase.test_image_type_kernel` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_metadata.py:L407–L416` |
| `MetadataTestCase.test_image_type_no_kernel_raises` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_metadata.py:L418–L422` |
| `MetadataTestCase.test_instance_is_sanitized` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/test_metadata.py:L424–L455` |
| `MetadataTestCase.test_instance_is_sanitized.fake_obj_load_attr` | function | (attrname) | public | not declared | — | `src/nova/tests/unit/test_metadata.py:L433–L441` |
| `MetadataTestCase.test_check_version` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_metadata.py:L457–L467` |
| `MetadataTestCase.test_InstanceMetadata_uses_passed_network_info` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/test_metadata.py:L470–L476` |
| `MetadataTestCase.test_InstanceMetadata_gets_network_metadata` | method | (self, mock_netutils) | public | not declared | 1/5 | `src/nova/tests/unit/test_metadata.py:L479–L484` |
| `MetadataTestCase.test_InstanceMetadata_invoke_metadata_for_config_drive` | method | (self) | public | not declared | 2/60 | `src/nova/tests/unit/test_metadata.py:L486–L545` |
| `MetadataTestCase.test_InstanceMetadata_queries_network_API_when_needed` | method | (self, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/test_metadata.py:L548–L553` |
| `MetadataTestCase.test_local_ipv4` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_metadata.py:L555–L561` |
| `MetadataTestCase.test_local_ipv4_from_nw_info` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_metadata.py:L563–L569` |
| `MetadataTestCase.test_local_ipv4_from_address` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_metadata.py:L571–L576` |
| `MetadataTestCase._test_as_json_with_options` | method | (self, mock_json_dump_as_bytes, mock_base64, os_version=base.GRIZZLY) | private | not declared | 12/48 | `src/nova/tests/unit/test_metadata.py:L581–L629` |
| `MetadataTestCase.test_as_json` | method | (self) | public | not declared | 2/3 | `src/nova/tests/unit/test_metadata.py:L631–L633` |
| `MetadataTestCase.test_metadata_as_json_deleted_keypair` | method | (self, mock_inst_get_by_uuid) | public | not declared | 1/9 | `src/nova/tests/unit/test_metadata.py:L636–L648` |
| `MetadataTestCase.test_metadata_as_json_numatopology` | method | (self, mock_inst_get_by_uuid) | public | not declared | 1/19 | `src/nova/tests/unit/test_metadata.py:L651–L672` |
| `OpenStackMetadataTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_metadata.py:L675–L1094` |
| `OpenStackMetadataTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_metadata.py:L676–L679` |
| `OpenStackMetadataTestCase.test_empty_device_metadata` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_metadata.py:L681–L688` |
| `OpenStackMetadataTestCase.test_device_metadata` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_metadata.py:L690–L701` |
| `OpenStackMetadataTestCase.test_top_level_listing` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_metadata.py:L703–L716` |
| `OpenStackMetadataTestCase.test_version_content_listing` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_metadata.py:L718–L724` |
| `OpenStackMetadataTestCase.test_returns_apis_supported_in_liberty_version` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_metadata.py:L726–L732` |
| `OpenStackMetadataTestCase.test_returns_apis_supported_in_havana_version` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_metadata.py:L734–L739` |
| `OpenStackMetadataTestCase.test_returns_apis_supported_in_folsom_version` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_metadata.py:L741–L746` |
| `OpenStackMetadataTestCase.test_returns_apis_supported_in_grizzly_version` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_metadata.py:L748–L753` |
| `OpenStackMetadataTestCase.test_metadata_json` | method | (self) | public | not declared | 4/25 | `src/nova/tests/unit/test_metadata.py:L755–L788` |
| `OpenStackMetadataTestCase.test_x509_keypair` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/test_metadata.py:L790–L803` |
| `OpenStackMetadataTestCase.test_extra_md` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/test_metadata.py:L805–L817` |
| `OpenStackMetadataTestCase.test_password` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_metadata.py:L819–L825` |
| `OpenStackMetadataTestCase.test_userdata` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/test_metadata.py:L827–L844` |
| `OpenStackMetadataTestCase.test_random_seed` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/test_metadata.py:L846–L861` |
| `OpenStackMetadataTestCase.test_project_id` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_metadata.py:L863–L876` |
| `OpenStackMetadataTestCase.test_no_dashes_in_metadata` | method | (self) | public | not declared | 3/7 | `src/nova/tests/unit/test_metadata.py:L878–L886` |
| `OpenStackMetadataTestCase.test_vendor_data_presence` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_metadata.py:L888–L905` |
| `OpenStackMetadataTestCase._test_vendordata2_response_inner` | method | (self, request_mock, response_code, include_rest_result=True) | private | not declared | 3/43 | `src/nova/tests/unit/test_metadata.py:L907–L964` |
| `OpenStackMetadataTestCase.test_vendor_data_response_vendordata2_ok` | method | (self, request_mock) | public | not declared | 1/3 | `src/nova/tests/unit/test_metadata.py:L967–L969` |
| `OpenStackMetadataTestCase.test_vendor_data_response_vendordata2_created` | method | (self, request_mock) | public | not declared | 1/3 | `src/nova/tests/unit/test_metadata.py:L972–L974` |
| `OpenStackMetadataTestCase.test_vendor_data_response_vendordata2_accepted` | method | (self, request_mock) | public | not declared | 1/3 | `src/nova/tests/unit/test_metadata.py:L977–L979` |
| `OpenStackMetadataTestCase.test_vendor_data_response_vendordata2_no_content` | method | (self, request_mock) | public | not declared | 1/5 | `src/nova/tests/unit/test_metadata.py:L982–L987` |
| `OpenStackMetadataTestCase._test_vendordata2_response_inner_exceptional` | method | (self, request_mock, log_mock, exc) | private | not declared | 1/22 | `src/nova/tests/unit/test_metadata.py:L989–L1017` |
| `OpenStackMetadataTestCase.test_vendor_data_response_vendordata2_type_error` | method | (self, request_mock, log_mock) | public | not declared | 1/4 | `src/nova/tests/unit/test_metadata.py:L1021–L1024` |
| `OpenStackMetadataTestCase.test_vendor_data_response_vendordata2_value_error` | method | (self, request_mock, log_mock) | public | not declared | 1/4 | `src/nova/tests/unit/test_metadata.py:L1028–L1031` |
| `OpenStackMetadataTestCase.test_vendor_data_response_vendordata2_request_error` | method | (self, request_mock, log_mock) | public | not declared | 1/5 | `src/nova/tests/unit/test_metadata.py:L1035–L1039` |
| `OpenStackMetadataTestCase.test_vendor_data_response_vendordata2_ssl_error` | method | (self, request_mock, log_mock) | public | not declared | 1/5 | `src/nova/tests/unit/test_metadata.py:L1043–L1047` |
| `OpenStackMetadataTestCase.test_vendor_data_response_vendordata2_ssl_error_fatal` | method | (self, request_mock, log_mock) | public | not declared | 1/7 | `src/nova/tests/unit/test_metadata.py:L1051–L1057` |
| `OpenStackMetadataTestCase.test_network_data_presence` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_metadata.py:L1059–L1069` |
| `OpenStackMetadataTestCase.test_network_data_response` | method | (self) | public | not declared | 2/18 | `src/nova/tests/unit/test_metadata.py:L1071–L1094` |
| `MetadataHandlerTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_metadata.py:L1097–L1794` |
| `MetadataHandlerTestCase.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_metadata.py:L1100–L1106` |
| `MetadataHandlerTestCase.test_callable` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_metadata.py:L1108–L1120` |
| `MetadataHandlerTestCase.test_callable.verify` | function | (req, meta_data) | public | `"foo"` (src/nova/tests/unit/test_metadata.py:L1112) | — | `src/nova/tests/unit/test_metadata.py:L1110–L1112` |
| `MetadataHandlerTestCase.test_callable.CallableMD` | class | — | public | not declared | — | `src/nova/tests/unit/test_metadata.py:L1114–L1116` |
| `MetadataHandlerTestCase.test_callable.CallableMD.lookup` | method | (self, path_info) | public | `verify` (src/nova/tests/unit/test_metadata.py:L1116) | — | `src/nova/tests/unit/test_metadata.py:L1115–L1116` |
| `MetadataHandlerTestCase.test_root` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_metadata.py:L1122–L1128` |
| `MetadataHandlerTestCase.test_root_metadata_proxy_enabled` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_metadata.py:L1130–L1139` |
| `MetadataHandlerTestCase.test_version_root` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_metadata.py:L1141–L1148` |
| `MetadataHandlerTestCase.test_json_data` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_metadata.py:L1150–L1160` |
| `MetadataHandlerTestCase.test_user_data_non_existing_fixed_address` | method | (self, mock_network_api) | public | not declared | 1/6 | `src/nova/tests/unit/test_metadata.py:L1163–L1168` |
| `MetadataHandlerTestCase.test_fixed_address_none` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_metadata.py:L1170–L1173` |
| `MetadataHandlerTestCase.test_invalid_path_is_404` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_metadata.py:L1175–L1178` |
| `MetadataHandlerTestCase.test_by_instance_id_uses_constant_time_compare` | method | (self, mock_compare) | public | not declared | 1/10 | `src/nova/tests/unit/test_metadata.py:L1181–L1194` |
| `MetadataHandlerTestCase._fake_x_get_metadata` | method | (self, self_app, instance_id, remote_address) | private | `self.mdinst` (src/nova/tests/unit/test_metadata.py:L1201) | 3/7 | `src/nova/tests/unit/test_metadata.py:L1196–L1205` |
| `MetadataHandlerTestCase.test_user_data_with_neutron_instance_id` | method | (self, mock_warning) | public | not declared | 1/86 | `src/nova/tests/unit/test_metadata.py:L1208–L1316` |
| `MetadataHandlerTestCase.test_get_metadata` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_metadata.py:L1318–L1338` |
| `MetadataHandlerTestCase.test_get_metadata._test_metadata_path` | function | (relpath) | private | not declared | — | `src/nova/tests/unit/test_metadata.py:L1319–L1336` |
| `MetadataHandlerTestCase._metadata_handler_with_instance_id` | method | (self, hnd) | private | not declared | 1/20 | `src/nova/tests/unit/test_metadata.py:L1340–L1362` |
| `MetadataHandlerTestCase.test_metadata_handler_with_instance_id` | method | (self, get_by_uuid) | public | not declared | 1/7 | `src/nova/tests/unit/test_metadata.py:L1365–L1372` |
| `MetadataHandlerTestCase.test_metadata_handler_with_instance_id_no_cache` | method | (self, get_by_uuid) | public | not declared | 1/7 | `src/nova/tests/unit/test_metadata.py:L1375–L1382` |
| `MetadataHandlerTestCase._metadata_handler_with_remote_address` | method | (self, hnd) | private | not declared | 1/10 | `src/nova/tests/unit/test_metadata.py:L1384–L1393` |
| `MetadataHandlerTestCase.test_metadata_handler_with_remote_address` | method | (self, get_by_uuid) | public | not declared | 1/7 | `src/nova/tests/unit/test_metadata.py:L1396–L1403` |
| `MetadataHandlerTestCase.test_metadata_handler_with_remote_address_no_cache` | method | (self, get_by_uuid) | public | not declared | 1/7 | `src/nova/tests/unit/test_metadata.py:L1406–L1413` |
| `MetadataHandlerTestCase.test_metadata_lb_proxy` | method | (self, mock_get_client) | public | not declared | 1/17 | `src/nova/tests/unit/test_metadata.py:L1416–L1439` |
| `MetadataHandlerTestCase.test_metadata_lb_proxy_many_networks` | method | (self, mock_get_client) | public | not declared | 2/21 | `src/nova/tests/unit/test_metadata.py:L1442–L1475` |
| `MetadataHandlerTestCase.test_metadata_lb_proxy_many_networks.fake_list_ports` | function | (context, fixed_ips, network_id, fields) | public | `{'ports': [{'device_id': 'a-b-c-d', 'tenant_id': 'test'}]}` (src/nova/tests/unit/test_metadata.py:L1446); `{'ports': []}` (src/nova/tests/unit/test_metadata.py:L1448) | — | `src/nova/tests/unit/test_metadata.py:L1444–L1448` |
| `MetadataHandlerTestCase._metadata_handler_with_provider_id` | method | (self, hnd, mock_get_client) | private | not declared | 1/17 | `src/nova/tests/unit/test_metadata.py:L1478–L1498` |
| `MetadataHandlerTestCase._test__handler_with_provider_id` | method | (self, expected_calls, get_by_uuid) | private | not declared | 1/11 | `src/nova/tests/unit/test_metadata.py:L1501–L1511` |
| `MetadataHandlerTestCase.test_metadata_handler_with_provider_id` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_metadata.py:L1513–L1516` |
| `MetadataHandlerTestCase.test_metadata_handler_with_provider_id_no_cache` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_metadata.py:L1518–L1521` |
| `MetadataHandlerTestCase.test_metadata_lb_proxy_chain` | method | (self, mock_get_client) | public | not declared | 1/17 | `src/nova/tests/unit/test_metadata.py:L1524–L1556` |
| `MetadataHandlerTestCase.test_metadata_lb_proxy_chain.fake_list_ports` | function | (ctx, **kwargs) | public | `{ 'ports': [{ 'device_id': 'a-b-c-d', 'tenant_id': 'test'}]}` (src/nova/tests/unit/test_metadata.py:L1535); `{'ports': []}` (src/nova/tests/unit/test_metadata.py:L1540) | — | `src/nova/tests/unit/test_metadata.py:L1533–L1541` |
| `MetadataHandlerTestCase.test_metadata_lb_proxy_signed` | method | (self, mock_get_client) | public | not declared | 1/25 | `src/nova/tests/unit/test_metadata.py:L1559–L1591` |
| `MetadataHandlerTestCase.test_metadata_lb_proxy_not_signed` | method | (self, mock_get_client) | public | not declared | 1/20 | `src/nova/tests/unit/test_metadata.py:L1594–L1619` |
| `MetadataHandlerTestCase.test_metadata_lb_proxy_signed_fail` | method | (self, mock_get_client) | public | not declared | 1/26 | `src/nova/tests/unit/test_metadata.py:L1622–L1654` |
| `MetadataHandlerTestCase.test_metadata_lb_net_not_found` | method | (self, mock_get_client) | public | not declared | 1/16 | `src/nova/tests/unit/test_metadata.py:L1657–L1676` |
| `MetadataHandlerTestCase._test_metadata_lb_incorrect_port_count` | method | (self, mock_get_client, ports) | private | not declared | 1/18 | `src/nova/tests/unit/test_metadata.py:L1678–L1699` |
| `MetadataHandlerTestCase.test_metadata_lb_too_many_ports` | method | (self, mock_get_client) | public | not declared | 1/5 | `src/nova/tests/unit/test_metadata.py:L1702–L1706` |
| `MetadataHandlerTestCase.test_metadata_no_ports_found` | method | (self, mock_get_client) | public | not declared | 1/3 | `src/nova/tests/unit/test_metadata.py:L1709–L1711` |
| `MetadataHandlerTestCase.test_get_metadata_by_address` | method | (self, mock_get_fip, mock_get_context) | public | not declared | 1/7 | `src/nova/tests/unit/test_metadata.py:L1715–L1723` |
| `MetadataHandlerTestCase.test_get_metadata_by_instance_id` | method | (self, mock_uuid, mock_context) | public | not declared | 1/13 | `src/nova/tests/unit/test_metadata.py:L1727–L1741` |
| `MetadataHandlerTestCase.test_get_metadata_by_instance_id_null_context` | method | (self, mock_uuid, mock_context) | public | not declared | 1/13 | `src/nova/tests/unit/test_metadata.py:L1745–L1759` |
| `MetadataHandlerTestCase.test_get_metadata_by_instance_id_with_cell_mapping` | method | (self, mock_get_im, mock_get_inst) | public | not declared | 1/13 | `src/nova/tests/unit/test_metadata.py:L1763–L1777` |
| `MetadataHandlerTestCase.test_get_metadata_by_instance_id_with_local_meta` | method | (self, mock_get_im, mock_get_inst) | public | not declared | 1/10 | `src/nova/tests/unit/test_metadata.py:L1781–L1794` |
| `MetadataPasswordTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_metadata.py:L1797–L1870` |
| `MetadataPasswordTestCase.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_metadata.py:L1798–L1803` |
| `MetadataPasswordTestCase.test_get_password` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_metadata.py:L1805–L1809` |
| `MetadataPasswordTestCase.test_set_password_instance_not_found` | method | (self, get_by_uuid, get_mapping) | public | not declared | 1/9 | `src/nova/tests/unit/test_metadata.py:L1814–L1823` |
| `MetadataPasswordTestCase.test_bad_method` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_metadata.py:L1825–L1829` |
| `MetadataPasswordTestCase._try_set_password` | method | (self, get_by_uuid, get_mapping, val=b'bar', use_local_meta=False) | private | not declared | 3/17 | `src/nova/tests/unit/test_metadata.py:L1833–L1851` |
| `MetadataPasswordTestCase.test_set_password` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_metadata.py:L1853–L1855` |
| `MetadataPasswordTestCase.test_set_password_local_meta` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_metadata.py:L1857–L1859` |
| `MetadataPasswordTestCase.test_conflict` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_metadata.py:L1861–L1864` |
| `MetadataPasswordTestCase.test_too_large` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_metadata.py:L1866–L1870` |

## Dependencies

- `import copy` (src/nova/tests/unit/test_metadata.py:L19)
- `import hashlib` (src/nova/tests/unit/test_metadata.py:L20)
- `import hmac` (src/nova/tests/unit/test_metadata.py:L21)
- `import os` (src/nova/tests/unit/test_metadata.py:L22)
- `import pickle` (src/nova/tests/unit/test_metadata.py:L23)
- `import re` (src/nova/tests/unit/test_metadata.py:L24)
- `unittest`: imports `mock` (src/nova/tests/unit/test_metadata.py:L25)
- `keystoneauth1`: imports `exceptions as ks_exceptions` (src/nova/tests/unit/test_metadata.py:L27)
- `keystoneauth1`: imports `session` (src/nova/tests/unit/test_metadata.py:L28)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/test_metadata.py:L29)
- `oslo_serialization`: imports `base64` (src/nova/tests/unit/test_metadata.py:L30)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/test_metadata.py:L31)
- `oslo_utils`: imports `encodeutils` (src/nova/tests/unit/test_metadata.py:L32)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/test_metadata.py:L33)
- `import requests` (src/nova/tests/unit/test_metadata.py:L34)
- `import webob` (src/nova/tests/unit/test_metadata.py:L35)
- `nova.api.metadata`: imports `base` (src/nova/tests/unit/test_metadata.py:L37)
- `nova.api.metadata`: imports `handler` (src/nova/tests/unit/test_metadata.py:L38)
- `nova.api.metadata`: imports `password` (src/nova/tests/unit/test_metadata.py:L39)
- `nova.api.metadata`: imports `vendordata_dynamic` (src/nova/tests/unit/test_metadata.py:L40)
- `nova`: imports `block_device` (src/nova/tests/unit/test_metadata.py:L41)
- `nova`: imports `context` (src/nova/tests/unit/test_metadata.py:L42)
- `nova`: imports `exception` (src/nova/tests/unit/test_metadata.py:L43)
- `nova.network`: imports `model as network_model` (src/nova/tests/unit/test_metadata.py:L44)
- `nova.network`: imports `neutron as neutronapi` (src/nova/tests/unit/test_metadata.py:L45)
- `nova`: imports `objects` (src/nova/tests/unit/test_metadata.py:L46)
- `nova.objects`: imports `instance_numa as numa` (src/nova/tests/unit/test_metadata.py:L47)
- `nova.objects`: imports `virt_device_metadata as metadata_obj` (src/nova/tests/unit/test_metadata.py:L48)
- `nova`: imports `test` (src/nova/tests/unit/test_metadata.py:L49)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/test_metadata.py:L50)
- `nova.tests.unit`: imports `fake_block_device` (src/nova/tests/unit/test_metadata.py:L51)
- `nova.tests.unit`: imports `fake_network` (src/nova/tests/unit/test_metadata.py:L52)
- `nova.tests.unit`: imports `fake_requests` (src/nova/tests/unit/test_metadata.py:L53)
- `nova`: imports `utils` (src/nova/tests/unit/test_metadata.py:L54)
- `nova.virt`: imports `netutils` (src/nova/tests/unit/test_metadata.py:L55)

## Side Effects

- **file-io**: jsonfile = os.path.join(tmpdir, 'test.json') (src/nova/tests/unit/test_metadata.py:L917)
- **file-io**: with open(jsonfile, 'w') as f: (src/nova/tests/unit/test_metadata.py:L918)
- **file-io**: jsonfile = os.path.join(tmpdir, 'test.json') (src/nova/tests/unit/test_metadata.py:L994)
- **file-io**: with open(jsonfile, 'w') as f: (src/nova/tests/unit/test_metadata.py:L995)
- **global-mutation**: CONF = cfg.CONF (src/nova/tests/unit/test_metadata.py:L57)
- **global-mutation**: USER_DATA_STRING = (b"This is an encoded string") (src/nova/tests/unit/test_metadata.py:L59)
- **global-mutation**: ENCODE_USER_DATA_STRING = base64.encode_as_text(USER_DATA_STRING) (src/nova/tests/unit/test_metadata.py:L60)
- **global-mutation**: FAKE_SEED = '7qtD24mpMR2' (src/nova/tests/unit/test_metadata.py:L61)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as ks_exceptions (src/nova/tests/unit/test_metadata.py:L27)
- **privilege** (`crypto-key`): from keystoneauth1 import session (src/nova/tests/unit/test_metadata.py:L28)
- **entry-point** (`http-param`): request = webob.Request.blank(relpath) (src/nova/tests/unit/test_metadata.py:L150)
- **sink** (`db-write`): request.headers.update(headers) (src/nova/tests/unit/test_metadata.py:L154)
- **sink** (`db-write`): dicts.insert(len(dicts) - 1, vlan_nic_meta) (src/nova/tests/unit/test_metadata.py:L265)
- **sink** (`file-write`): with open(jsonfile, 'w') as f: (src/nova/tests/unit/test_metadata.py:L918)
- **sink** (`file-write`): f.write(jsonutils.dumps({'ldap': '10.0.0.1', (src/nova/tests/unit/test_metadata.py:L919)
- **sink** (`file-write`): with open(jsonfile, 'w') as f: (src/nova/tests/unit/test_metadata.py:L995)
- **sink** (`file-write`): f.write(jsonutils.dumps({'ldap': '10.0.0.1', (src/nova/tests/unit/test_metadata.py:L996)
- **entry-point** (`http-param`): req = webob.Request.blank('/') (src/nova/tests/unit/test_metadata.py:L1184)
- **entry-point** (`http-param`): request = webob.Request.blank('') (src/nova/tests/unit/test_metadata.py:L1806)
- **entry-point** (`http-param`): request = webob.Request.blank('') (src/nova/tests/unit/test_metadata.py:L1818)
- **entry-point** (`http-param`): request.content_length = len(request.body) (src/nova/tests/unit/test_metadata.py:L1821)
- **entry-point** (`http-param`): request = webob.Request.blank('') (src/nova/tests/unit/test_metadata.py:L1826)
- **entry-point** (`http-param`): request = webob.Request.blank('') (src/nova/tests/unit/test_metadata.py:L1837)
- **entry-point** (`http-param`): request.body = val (src/nova/tests/unit/test_metadata.py:L1839)

