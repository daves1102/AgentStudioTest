# src/nova/tests/unit/virt/libvirt/test_host.py

## Overview

This file implements the `test_host` module, defining 15 classs, 1 constant, 18 functions, 192 methods, 1 variable, 27 imports, 3 side effects.

Lines: total 2824, code 2351, comment 123, blank 350

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L47–L47` |
| `StringMatcher` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L50–L52` |
| `StringMatcher.__eq__` | method | (self, other) | public | `isinstance(other, str)` (src/nova/tests/unit/virt/libvirt/test_host.py:L52) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_host.py:L51–L52` |
| `FakeVirtDomain` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L55–L69` |
| `FakeVirtDomain.__init__` | method | (self, id=-1, name=None) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L57–L60` |
| `FakeVirtDomain.name` | method | (self) | public | `self._name` (src/nova/tests/unit/virt/libvirt/test_host.py:L63) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_host.py:L62–L63` |
| `FakeVirtDomain.ID` | method | (self) | public | `self._id` (src/nova/tests/unit/virt/libvirt/test_host.py:L66) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_host.py:L65–L66` |
| `FakeVirtDomain.UUIDString` | method | (self) | public | `self._uuid` (src/nova/tests/unit/virt/libvirt/test_host.py:L69) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_host.py:L68–L69` |
| `HostTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L73–L2093` |
| `HostTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L75–L79` |
| `HostTestCase._create_host` | method | (self, *args, **kwargs) | private | `h` (src/nova/tests/unit/virt/libvirt/test_host.py:L95) | 1/9 | `src/nova/tests/unit/virt/libvirt/test_host.py:L81–L95` |
| `HostTestCase.test_repeat_initialization` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L97–L100` |
| `HostTestCase.test_close_callback` | method | (self, mock_close) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_host.py:L103–L112` |
| `HostTestCase.test_close_callback.set_close_callback` | function | (cb, opaque) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L106–L107` |
| `HostTestCase.test_broken_connection` | method | (self, mock_ver) | public | not declared | 2/15 | `src/nova/tests/unit/virt/libvirt/test_host.py:L115–L130` |
| `HostTestCase.test_connect_auth_cb_exception` | method | (self, log_mock) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_host.py:L133–L138` |
| `HostTestCase.test_event_dispatch` | method | (self, mock_wrapper) | public | not declared | 1/34 | `src/nova/tests/unit/virt/libvirt/test_host.py:L142–L194` |
| `HostTestCase.test_event_dispatch.run_dispatch` | function | (hostimpl) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L149–L151` |
| `HostTestCase.test_event_dispatch.handler` | function | (event) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L153–L154` |
| `HostTestCase.test_event_lifecycle` | method | (self, mock_emit) | public | not declared | 2/28 | `src/nova/tests/unit/virt/libvirt/test_host.py:L197–L230` |
| `HostTestCase.test_event_lifecycle_callback_suspended_postcopy` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_host.py:L232–L248` |
| `HostTestCase.test_event_lifecycle_callback_suspended_migrated` | method | (self, get_job_info) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_host.py:L251–L271` |
| `HostTestCase.test_event_lifecycle_callback_suspended_migrated_job_failed` | method | (self, find_job_type, get_job_info) | public | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/test_host.py:L275–L301` |
| `HostTestCase.test_event_emit_delayed_call_delayed` | method | (self, mock_wrapper) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_host.py:L306–L319` |
| `HostTestCase.test_event_emit_delayed_call_delayed_pending` | method | (self, mock_wrapper) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_host.py:L324–L335` |
| `HostTestCase.test_event_delayed_cleanup` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_host.py:L337–L347` |
| `HostTestCase.test_host_cleanup_cancels_delayed_events` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_host.py:L349–L366` |
| `HostTestCase.test_device_removed_event` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_host.py:L368–L384` |
| `HostTestCase.test_device_removal_failed` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_host.py:L386–L402` |
| `HostTestCase.test_get_connection_serial` | method | (self, mock_conn, mock_event) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_host.py:L406–L430` |
| `HostTestCase.test_get_connection_serial.get_conn_currency` | function | (host) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L407–L408` |
| `HostTestCase.test_get_connection_serial.connect_with_block` | function | (*a, **k) | public | `fakelibvirt.openAuth("qemu:///system", [[], lambda: 1, None], 0)` (src/nova/tests/unit/virt/libvirt/test_host.py:L414) | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L410–L415` |
| `HostTestCase.test_get_connection_serial.fake_register` | function | (*a, **k) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L417–L418` |
| `HostTestCase.test_get_connection_concurrency` | method | (self, mock_conn, mock_event) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_host.py:L434–L464` |
| `HostTestCase.test_get_connection_concurrency.get_conn_currency` | function | (host) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L435–L436` |
| `HostTestCase.test_get_connection_concurrency.connect_with_block` | function | (*a, **k) | public | `fakelibvirt.openAuth("qemu:///system", [[], lambda: 1, None], 0)` (src/nova/tests/unit/virt/libvirt/test_host.py:L442) | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L438–L443` |
| `HostTestCase.test_get_connection_concurrency.fake_register` | function | (*a, **k) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L445–L446` |
| `HostTestCase.test_conn_event` | method | (self, mock_conn) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_host.py:L467–L474` |
| `HostTestCase.test_conn_event_fail` | method | (self, mock_conn) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_host.py:L477–L496` |
| `HostTestCase.test_conn_event_up_down` | method | (self, mock_conn, mock_test_conn) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_host.py:L500–L515` |
| `HostTestCase.test_conn_event_thread` | method | (self, mock_conn) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_host.py:L518–L534` |
| `HostTestCase.test_conn_event_thread.conn_event_handler` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L522–L523` |
| `HostTestCase.test_has_min_version` | method | (self, fake_hv_type, fake_hv_ver, fake_lv_ver) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_host.py:L539–L555` |
| `HostTestCase.test_has_version` | method | (self, fake_hv_type, fake_hv_ver, fake_lv_ver) | public | not declared | 3/16 | `src/nova/tests/unit/virt/libvirt/test_host.py:L560–L578` |
| `HostTestCase.test_get_domain` | method | (self, fake_lookup) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_host.py:L581–L589` |
| `HostTestCase.test_get_domain_raises` | method | (self, fake_lookup) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_host.py:L592–L604` |
| `HostTestCase.test_get_guest` | method | (self, fake_lookup) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_host.py:L607–L619` |
| `HostTestCase.test_list_instance_domains` | method | (self, mock_list_all) | public | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/test_host.py:L622–L659` |
| `HostTestCase.test_list_instance_domains.fake_list_all` | function | (flags) | public | `vms` (src/nova/tests/unit/virt/libvirt/test_host.py:L634) | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L628–L634` |
| `HostTestCase.test_list_guests` | method | (self, mock_list_domains) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_host.py:L662–L669` |
| `HostTestCase.test_cpu_features` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L671–L675` |
| `HostTestCase.test_cpu_features_are_not_duplicated` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/virt/libvirt/test_host.py:L677–L682` |
| `HostTestCase.test_baseline_cpu_not_supported` | method | (self) | public | not declared | 2/20 | `src/nova/tests/unit/virt/libvirt/test_host.py:L684–L710` |
| `HostTestCase.test_get_capabilities_no_host_cpu_model` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_host.py:L712–L731` |
| `HostTestCase.test_get_capabilities_on_aarch64` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_host.py:L733–L748` |
| `HostTestCase.test__get_machine_types` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/virt/libvirt/test_host.py:L750–L773` |
| `HostTestCase._test_get_domain_capabilities` | method | (self) | private | `caps['x86_64']['pc']` (src/nova/tests/unit/virt/libvirt/test_host.py:L799) | 5/16 | `src/nova/tests/unit/virt/libvirt/test_host.py:L775–L799` |
| `HostTestCase.test_get_domain_capabilities` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L801–L806` |
| `HostTestCase.test_get_domain_capabilities_non_native_kvm` | method | (self) | public | not declared | 4/28 | `src/nova/tests/unit/virt/libvirt/test_host.py:L808–L871` |
| `HostTestCase.test_get_domain_capabilities_non_native_kvm._get_domain_capabilities` | function | (**kwargs) | private | `local__get_domain_caps(**kwargs)` (src/nova/tests/unit/virt/libvirt/test_host.py:L834) | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L831–L841` |
| `HostTestCase.test_get_domain_capabilities_other_archs` | method | (self) | public | not declared | 2/14 | `src/nova/tests/unit/virt/libvirt/test_host.py:L873–L892` |
| `HostTestCase.test_get_domain_capabilities_with_versioned_machine_type` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_host.py:L894–L911` |
| `HostTestCase.test_get_domain_capabilities_vtpm_unsupported` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_host.py:L913–L921` |
| `HostTestCase.test_get_domain_capabilities_vtpm_supported` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_host.py:L927–L941` |
| `HostTestCase.test_get_domain_capabilities_vtpm_supported_and_versions` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_host.py:L947–L964` |
| `HostTestCase.test_get_domain_capabilities_no_features` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_host.py:L968–L972` |
| `HostTestCase._test_get_domain_capabilities_sev` | method | (self, supported) | private | not declared | 2/14 | `src/nova/tests/unit/virt/libvirt/test_host.py:L974–L987` |
| `HostTestCase.test_get_domain_capabilities_sev_unsupported` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_host.py:L993–L994` |
| `HostTestCase.test_get_domain_capabilities_sev_supported` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_host.py:L999–L1000` |
| `HostTestCase._test_get_domain_capabilities_sev_with_launch_security` | method | (self, supported, sectypes=None) | private | not declared | 3/25 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1002–L1026` |
| `HostTestCase.test_get_domain_capabilities_sev_supported_launch_security` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1032–L1034` |
| `HostTestCase.test_get_domain_capabilities_sev_unsupported_launch_security` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1040–L1041` |
| `HostTestCase.test_get_domain_capabilities_sev_supported_launch_security_snp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1047–L1049` |
| `HostTestCase.test_get_hostname_caching` | method | (self, mock_hostname) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1052–L1061` |
| `HostTestCase.test_get_driver_type` | method | (self, mock_type) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1064–L1067` |
| `HostTestCase.test_get_version` | method | (self, mock_version) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1070–L1073` |
| `HostTestCase.test_find_secret` | method | (self, mock_sec) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1076–L1094` |
| `HostTestCase.test_create_secret` | method | (self, mock_sec) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1097–L1110` |
| `HostTestCase.test_create_secret_vtpm_ephemeral_private_default` | method | (self, mock_sec) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1113–L1117` |
| `HostTestCase.test_create_secret_vtpm_not_ephemeral_private` | method | (self, mock_sec) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1120–L1125` |
| `HostTestCase.test_delete_secret` | method | (self, mock_find_secret) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1128–L1138` |
| `HostTestCase.test_get_memory_total` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1140–L1143` |
| `HostTestCase.test_get_memory_total_file_backed` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1145–L1147` |
| `HostTestCase.test_get_memory_used` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1149–L1154` |
| `HostTestCase.test_sum_domain_memory_mb_file_backed` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1156–L1181` |
| `HostTestCase.test_sum_domain_memory_mb_file_backed.DiagFakeDomain` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L1157–L1172` |
| `HostTestCase.test_sum_domain_memory_mb_file_backed.DiagFakeDomain.__init__` | method | (self, id, memmb) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L1158–L1160` |
| `HostTestCase.test_sum_domain_memory_mb_file_backed.DiagFakeDomain.info` | method | (self) | public | `[0, 0, self.memmb * 1024]` (src/nova/tests/unit/virt/libvirt/test_host.py:L1163) | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L1162–L1163` |
| `HostTestCase.test_sum_domain_memory_mb_file_backed.DiagFakeDomain.ID` | method | (self) | public | `self.id` (src/nova/tests/unit/virt/libvirt/test_host.py:L1166) | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L1165–L1166` |
| `HostTestCase.test_sum_domain_memory_mb_file_backed.DiagFakeDomain.name` | method | (self) | public | `"instance000001"` (src/nova/tests/unit/virt/libvirt/test_host.py:L1169) | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L1168–L1169` |
| `HostTestCase.test_sum_domain_memory_mb_file_backed.DiagFakeDomain.UUIDString` | method | (self) | public | `uuids.fake` (src/nova/tests/unit/virt/libvirt/test_host.py:L1172) | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L1171–L1172` |
| `HostTestCase.test_get_memory_used_file_backed` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1183–L1192` |
| `HostTestCase.test_get_cpu_stats` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1194–L1202` |
| `HostTestCase.test_get_available_cpus` | method | (self, mock_map) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1205–L1208` |
| `HostTestCase.test_write_instance_config` | method | (self, mock_defineXML) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1211–L1229` |
| `HostTestCase.test_write_instance_config_unicode` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1231–L1251` |
| `HostTestCase.test_write_instance_config_unicode.emulate_defineXML` | function | (xml) | public | `dom` (src/nova/tests/unit/virt/libvirt/test_host.py:L1246) | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L1243–L1246` |
| `HostTestCase.test_check_machine_type_invalid` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1253–L1272` |
| `HostTestCase.test_check_machine_type_valid` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1274–L1293` |
| `HostTestCase.test_device_lookup_by_name` | method | (self, mock_nodeDeviceLookupByName) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1296–L1298` |
| `HostTestCase.test_device_create` | method | (self, mock_create) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1301–L1304` |
| `HostTestCase.test_device_define` | method | (self, mock_define) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1307–L1310` |
| `HostTestCase.test_get_pcinet_info` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1312–L1323` |
| `HostTestCase.test_get_pcidev_info_non_nic` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1325–L1341` |
| `HostTestCase.test_get_pcidev_info` | method | (self) | public | not declared | 7/190 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1343–L1557` |
| `HostTestCase.test_list_pci_devices` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1559–L1562` |
| `HostTestCase.test_list_mdev_capable_devices` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1564–L1567` |
| `HostTestCase.test_list_mediated_devices` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1569–L1572` |
| `HostTestCase.test_list_all_devices` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1574–L1605` |
| `HostTestCase.test_list_all_devices_raises` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1607–L1640` |
| `HostTestCase.test_get_vdpa_nodedev_by_address` | method | (self) | public | not declared | 1/92 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1642–L1733` |
| `HostTestCase.test_get_vdpa_device_path` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1735–L1755` |
| `HostTestCase.test_list_devices` | method | (self, mock_listDevices) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1758–L1760` |
| `HostTestCase.test_list_devices_unsupported` | method | (self, mock_listDevices) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1763–L1770` |
| `HostTestCase.test_list_devices_other_exc` | method | (self, mock_listDevices) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1773–L1776` |
| `HostTestCase.test_compare_cpu` | method | (self, mock_compareCPU) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1779–L1781` |
| `HostTestCase.test_is_cpu_control_policy_capable_via_neither` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1783–L1785` |
| `HostTestCase.test_is_cpu_control_policy_capable_via_cgroupsv1` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1787–L1789` |
| `HostTestCase.test_is_cpu_control_policy_capable_via_cgroupsv2` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1791–L1793` |
| `HostTestCase.test_has_cgroupsv1_cpu_controller_ok` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1795–L1803` |
| `HostTestCase.test_has_cgroupsv1_cpu_controller_ko` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1805–L1813` |
| `HostTestCase.test_has_cgroupsv1_cpu_controller_ioerror` | method | (self, _) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1816–L1817` |
| `HostTestCase.test_has_cgroupsv2_cpu_controller_ok` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1819–L1824` |
| `HostTestCase.test_has_cgroupsv2_cpu_controller_ko` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1826–L1831` |
| `HostTestCase.test_has_cgroupsv2_cpu_controller_ioerror` | method | (self, _) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1834–L1835` |
| `HostTestCase.test_get_canonical_machine_type` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1837–L1850` |
| `HostTestCase.test_has_hyperthreading__true` | method | (self, mock_cap) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1853–L1875` |
| `HostTestCase.test_has_hyperthreading__false` | method | (self, mock_cap) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1878–L1900` |
| `HostTestCase.test_supports_uefi__false` | method | (self, mock_caps, mock_domcaps) | public | not declared | 1/39 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1905–L1943` |
| `HostTestCase.test_supports_uefi__true` | method | (self, mock_caps, mock_domcaps) | public | not declared | 1/42 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1948–L1989` |
| `HostTestCase.test_supports_secure_boot__false` | method | (self, mock_caps, mock_domcaps) | public | not declared | 1/42 | `src/nova/tests/unit/virt/libvirt/test_host.py:L1994–L2035` |
| `HostTestCase.test_supports_secure_boot__true` | method | (self, mock_caps, mock_domcaps) | public | not declared | 1/44 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2040–L2083` |
| `HostTestCase.test_supports_virtio_fs__true` | method | (self, virt_type) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2086–L2088` |
| `HostTestCase.test_supports_virtio_fs__false` | method | (self, virt_type) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2091–L2093` |
| `vc` | variable | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L2096–L2096` |
| `TestLibvirtSEV` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L2099–L2140` |
| `TestLibvirtSEV.setUp` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2102–L2140` |
| `TestLibvirtSEV.setUp._exists` | function | (path) | private | `self.kernel_sev_snp is not None` (src/nova/tests/unit/virt/libvirt/test_host.py:L2120); `self.kernel_sev_es is not None` (src/nova/tests/unit/virt/libvirt/test_host.py:L2122); `self.kernel_sev is not None` (src/nova/tests/unit/virt/libvirt/test_host.py:L2124) | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L2118–L2125` |
| `TestLibvirtSEV.setUp._open` | function | (path) | private | `io.StringIO(self.kernel_sev_snp)` (src/nova/tests/unit/virt/libvirt/test_host.py:L2132); `io.StringIO(self.kernel_sev_es)` (src/nova/tests/unit/virt/libvirt/test_host.py:L2134); `io.StringIO(self.kernel_sev)` (src/nova/tests/unit/virt/libvirt/test_host.py:L2136) | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L2130–L2137` |
| `TestLibvirtSEVUnsupported` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L2144–L2205` |
| `TestLibvirtSEVUnsupported.test_kernel_parameter_missing` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2145–L2148` |
| `TestLibvirtSEVUnsupported.test_kernel_parameter` | method | (self, sev_param_value, expected_support) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2157–L2166` |
| `TestLibvirtSEVUnsupported.test_unsupported_without_feature` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2168–L2171` |
| `TestLibvirtSEVUnsupported.test_unsupported_with_feature` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2175–L2178` |
| `TestLibvirtSEVUnsupported.test_non_x86_architecture` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2180–L2193` |
| `TestLibvirtSEVUnsupported.test_slots` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2195–L2196` |
| `TestLibvirtSEVUnsupported.test_inventory_traits` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2198–L2200` |
| `TestLibvirtSEVUnsupported.test_inventory` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2202–L2205` |
| `TestLibvirtSEVSupported` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L2208–L2243` |
| `TestLibvirtSEVSupported.test_supported_with_feature` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2213–L2216` |
| `TestLibvirtSEVSupported.test_slots` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2220–L2222` |
| `TestLibvirtSEVSupported.test_inventory_traits` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2226–L2229` |
| `TestLibvirtSEVSupported.test_inventory` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2233–L2243` |
| `TestLibvirtSEVESUnsupported` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L2247–L2343` |
| `TestLibvirtSEVESUnsupported.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2249–L2251` |
| `TestLibvirtSEVESUnsupported.test_kernel_parameter_missing` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2253–L2256` |
| `TestLibvirtSEVESUnsupported.test_kernel_parameter` | method | (self, sev_param_value, expected_support) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2265–L2274` |
| `TestLibvirtSEVESUnsupported.test_unsupported_without_feature` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2276–L2278` |
| `TestLibvirtSEVESUnsupported.test_unsupported_with_feature` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2282–L2285` |
| `TestLibvirtSEVESUnsupported.test_non_x86_architecture` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2287–L2299` |
| `TestLibvirtSEVESUnsupported.test_unsupported_with_qemu_too_old` | method | (self, get_version) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2306–L2309` |
| `TestLibvirtSEVESUnsupported.test_unsupported_without_sev` | method | (self, get_version) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2316–L2320` |
| `TestLibvirtSEVESUnsupported.test_unsupported_with_snp` | method | (self, get_version) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2327–L2331` |
| `TestLibvirtSEVESUnsupported.test_slots` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2333–L2334` |
| `TestLibvirtSEVESUnsupported.test_inventory_traits` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2336–L2338` |
| `TestLibvirtSEVESUnsupported.test_inventory` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2340–L2343` |
| `TestLibvirtSEVESSupported` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L2346–L2397` |
| `TestLibvirtSEVESSupported.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2349–L2351` |
| `TestLibvirtSEVESSupported.test_supported_with_feature` | method | (self, get_version) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2358–L2361` |
| `TestLibvirtSEVESSupported.test_slots_` | method | (self, get_version) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2368–L2370` |
| `TestLibvirtSEVESSupported.test_inventory_traits` | method | (self, get_version) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2377–L2380` |
| `TestLibvirtSEVESSupported.test_inventory` | method | (self, get_version) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2387–L2397` |
| `TestLibvirtSEVSNPUnsupported` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L2401–L2488` |
| `TestLibvirtSEVSNPUnsupported.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2403–L2405` |
| `TestLibvirtSEVSNPUnsupported.test_kernel_parameter_missing` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2407–L2410` |
| `TestLibvirtSEVSNPUnsupported.test_kernel_parameter` | method | (self, sev_param_value, expected_support) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2419–L2426` |
| `TestLibvirtSEVSNPUnsupported.test_unsupported_without_sev_feature` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2428–L2430` |
| `TestLibvirtSEVSNPUnsupported.test_unsupported_with_feature` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2434–L2436` |
| `TestLibvirtSEVSNPUnsupported.test_unsupported_with_launch_security` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2441–L2443` |
| `TestLibvirtSEVSNPUnsupported.test_unsupported_with_launch_security_no_snp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2448–L2450` |
| `TestLibvirtSEVSNPUnsupported.test_non_x86_architecture` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2452–L2464` |
| `TestLibvirtSEVSNPUnsupported.test_unsupported_without_sev` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2469–L2473` |
| `TestLibvirtSEVSNPUnsupported.test_slots` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2478–L2479` |
| `TestLibvirtSEVSNPUnsupported.test_inventory_traits` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2481–L2483` |
| `TestLibvirtSEVSNPUnsupported.test_inventory` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2485–L2488` |
| `TestLibvirtSEVSNPSupported` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L2491–L2534` |
| `TestLibvirtSEVSNPSupported.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2494–L2496` |
| `TestLibvirtSEVSNPSupported.test_supported_with_feature` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2501–L2504` |
| `TestLibvirtSEVSNPSupported.test_slots` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2509–L2511` |
| `TestLibvirtSEVSNPSupported.test_inventory_traits` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2516–L2519` |
| `TestLibvirtSEVSNPSupported.test_inventory` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2524–L2534` |
| `TestLibvirtTDX` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L2537–L2573` |
| `TestLibvirtTDX.setUp` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2540–L2573` |
| `TestLibvirtTDX.setUp._exists` | function | (path) | private | `self.misc_capacity is not None` (src/nova/tests/unit/virt/libvirt/test_host.py:L2557); `None` (src/nova/tests/unit/virt/libvirt/test_host.py:L2561) | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L2555–L2562` |
| `TestLibvirtTDX.setUp._open` | function | (path) | private | `io.StringIO(self.misc_capacity)` (src/nova/tests/unit/virt/libvirt/test_host.py:L2569) | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L2567–L2570` |
| `TestLibvirtTDXUnsupported` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L2576–L2623` |
| `TestLibvirtTDXUnsupported.test_unsupported_without_feature` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2577–L2579` |
| `TestLibvirtTDXUnsupported.test_unsupported_without_host_passthrough` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2583–L2586` |
| `TestLibvirtTDXUnsupported.test_unsupported_with_feature` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2590–L2592` |
| `TestLibvirtTDXUnsupported.test_non_x86_architecture` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2594–L2607` |
| `TestLibvirtTDXUnsupported.test_slots` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2609–L2610` |
| `TestLibvirtTDXUnsupported.test_slots_with_config_set` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2612–L2614` |
| `TestLibvirtTDXUnsupported.test_inventory_traits` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2616–L2618` |
| `TestLibvirtTDXUnsupported.test_inventory` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2620–L2623` |
| `TestLibvirtTDXSupported` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L2626–L2714` |
| `TestLibvirtTDXSupported.test_supported_with_feature` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2631–L2634` |
| `TestLibvirtTDXSupported.test_slots_with_capacity_and_config_absent` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2638–L2642` |
| `TestLibvirtTDXSupported.test_slots_with_capacity_and_config_less` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2646–L2651` |
| `TestLibvirtTDXSupported.test_slots_with_capacity_and_config_equal` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2655–L2660` |
| `TestLibvirtTDXSupported.test_slots_with_capacity_and_config_more` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2664–L2669` |
| `TestLibvirtTDXSupported.test_slots_capacity_file_and_config_absent_when_supported` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2673–L2676` |
| `TestLibvirtTDXSupported.test_slots_capacity_file_absent_and_config_zero_when_supported` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2680–L2684` |
| `TestLibvirtTDXSupported.test_slots_capacity_file_absent_and_config_set_when_supported` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2688–L2692` |
| `TestLibvirtTDXSupported.test_inventory_traits` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2696–L2698` |
| `TestLibvirtTDXSupported.test_inventory_supported` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2702–L2714` |
| `LibvirtTpoolProxyTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L2717–L2824` |
| `LibvirtTpoolProxyTestCase.setUp` | method | (self) | public | not declared | 2/21 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2718–L2747` |
| `LibvirtTpoolProxyTestCase.setUp._stub_xml` | function | (uuid) | private | `("<domain>" " <uuid>" + uuid + "</uuid>" " <name>" + uuid + "</name>" "</domain>")` (src/nova/tests/unit/virt/libvirt/test_host.py:L2740) | — | `src/nova/tests/unit/virt/libvirt/test_host.py:L2739–L2743` |
| `LibvirtTpoolProxyTestCase.test_get_libvirt_proxy_classes` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2749–L2763` |
| `LibvirtTpoolProxyTestCase.test_tpool_get_connection` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2765–L2767` |
| `LibvirtTpoolProxyTestCase.test_tpool_instance_lookup` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2769–L2772` |
| `LibvirtTpoolProxyTestCase.test_tpool_list_all_connections` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2774–L2782` |
| `LibvirtTpoolProxyTestCase._add_fake_host_devices` | method | (self) | private | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2784–L2795` |
| `LibvirtTpoolProxyTestCase.test_tpool_list_all_devices` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2797–L2803` |
| `LibvirtTpoolProxyTestCase.test_tpool_list_pci_devices` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2805–L2810` |
| `LibvirtTpoolProxyTestCase.test_tpool_list_mdev_capable_devices` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2812–L2817` |
| `LibvirtTpoolProxyTestCase.test_tpool_list_mediated_devices` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/virt/libvirt/test_host.py:L2819–L2824` |

## Dependencies

- `import io` (src/nova/tests/unit/virt/libvirt/test_host.py:L17)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/test_host.py:L18)
- `import ddt` (src/nova/tests/unit/virt/libvirt/test_host.py:L20)
- `import fixtures` (src/nova/tests/unit/virt/libvirt/test_host.py:L21)
- `lxml`: imports `etree` (src/nova/tests/unit/virt/libvirt/test_host.py:L22)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/virt/libvirt/test_host.py:L23)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/virt/libvirt/test_host.py:L24)
- `oslo_utils`: imports `versionutils` (src/nova/tests/unit/virt/libvirt/test_host.py:L25)
- `import testtools` (src/nova/tests/unit/virt/libvirt/test_host.py:L26)
- `nova.compute`: imports `manager` (src/nova/tests/unit/virt/libvirt/test_host.py:L28)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/virt/libvirt/test_host.py:L29)
- `import nova.conf` (src/nova/tests/unit/virt/libvirt/test_host.py:L30)
- `nova`: imports `exception` (src/nova/tests/unit/virt/libvirt/test_host.py:L31)
- `nova`: imports `objects` (src/nova/tests/unit/virt/libvirt/test_host.py:L32)
- `nova.objects`: imports `fields as obj_fields` (src/nova/tests/unit/virt/libvirt/test_host.py:L33)
- `nova.pci`: imports `utils as pci_utils` (src/nova/tests/unit/virt/libvirt/test_host.py:L34)
- `nova`: imports `test` (src/nova/tests/unit/virt/libvirt/test_host.py:L35)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/virt/libvirt/test_host.py:L36)
- `nova.tests.fixtures`: imports `libvirt as fakelibvirt` (src/nova/tests/unit/virt/libvirt/test_host.py:L37)
- `nova.tests.fixtures`: imports `libvirt_data as fake_libvirt_data` (src/nova/tests/unit/virt/libvirt/test_host.py:L38)
- `nova`: imports `thread_pool_factory` (src/nova/tests/unit/virt/libvirt/test_host.py:L39)
- `nova`: imports `utils` (src/nova/tests/unit/virt/libvirt/test_host.py:L40)
- `nova.virt`: imports `event` (src/nova/tests/unit/virt/libvirt/test_host.py:L41)
- `nova.virt.libvirt`: imports `config as vconfig` (src/nova/tests/unit/virt/libvirt/test_host.py:L42)
- `nova.virt.libvirt`: imports `event as libvirtevent` (src/nova/tests/unit/virt/libvirt/test_host.py:L43)
- `nova.virt.libvirt`: imports `guest as libvirt_guest` (src/nova/tests/unit/virt/libvirt/test_host.py:L44)
- `nova.virt.libvirt`: imports `host` (src/nova/tests/unit/virt/libvirt/test_host.py:L45)

## Side Effects

- **file-io**: 'os.path.exists', side_effect=_exists)).mock (src/nova/tests/unit/virt/libvirt/test_host.py:L2128)
- **file-io**: 'os.path.exists', side_effect=_exists)).mock (src/nova/tests/unit/virt/libvirt/test_host.py:L2565)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/virt/libvirt/test_host.py:L47)

