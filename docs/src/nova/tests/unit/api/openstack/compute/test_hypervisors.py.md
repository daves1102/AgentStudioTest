# src/nova/tests/unit/api/openstack/compute/test_hypervisors.py

## Overview

This file implements the `test_hypervisors` module, defining 7 classs, 15 constants, 9 fields, 10 functions, 116 methods, 12 imports, 16 side effects, 11 security surface entries.

Lines: total 1567, code 1273, comment 62, blank 232

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CPU_INFO` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L32–L37` |
| `TEST_HYPERS` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L39–L80` |
| `TEST_SERVICES` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L83–L102` |
| `TEST_HYPERS_OBJ` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L104–L105` |
| `TEST_SERVERS` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L110–L113` |
| `fake_compute_node_get_all` | function | (context, limit=None, marker=None) | exported | `output` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L128) | 9/12 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L116–L128` |
| `fake_compute_node_search_by_hypervisor` | function | (context, hypervisor_re) | exported | `TEST_HYPERS_OBJ` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L132) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L131–L132` |
| `fake_compute_node_get` | function | (context, compute_id) | exported | `hyper` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L138); `hyper` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L144) | 6/10 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L135–L145` |
| `fake_service_get_by_compute_host` | function | (context, host) | exported | `service` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L151) | 3/4 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L148–L151` |
| `fake_compute_node_statistics` | function | (context) | exported | `result` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L177) | 4/22 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L154–L177` |
| `fake_instance_get_all_by_host` | function | (context, host) | exported | `results` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L186) | 3/7 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L180–L186` |
| `HypervisorsTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L189–L744` |
| `HypervisorsTestV21.api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L190–L190` |
| `HypervisorsTestV21.expect_uuid_for_id` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L193–L193` |
| `HypervisorsTestV21.TEST_HYPERS_OBJ` | constant | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L196–L196` |
| `HypervisorsTestV21.TEST_SERVICES` | constant | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L197–L197` |
| `HypervisorsTestV21.TEST_SERVERS` | constant | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L198–L198` |
| `HypervisorsTestV21.DETAIL_HYPERS_DICTS` | constant | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L200–L200` |
| `HypervisorsTestV21.INDEX_HYPER_DICTS` | constant | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L220–L224` |
| `HypervisorsTestV21.DETAIL_NULL_CPUINFO_DICT` | constant | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L225–L225` |
| `HypervisorsTestV21._get_request` | method | (self, use_admin_context, url='', version=None) | private | `fakes.HTTPRequest.blank( url, use_admin_context=use_admin_context, version=version or self.api_version)` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L228) | 2/5 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L227–L231` |
| `HypervisorsTestV21._get_hyper_id` | method | (self) | private | `(self.TEST_HYPERS_OBJ[0].uuid if self.expect_uuid_for_id else self.TEST_HYPERS_OBJ[0].id)` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L239) | 2/3 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L233–L240` |
| `HypervisorsTestV21.setUp` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L242–L260` |
| `HypervisorsTestV21.test_view_hypervisor_nodetail_noservers` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L262–L267` |
| `HypervisorsTestV21.test_view_hypervisor_detail_noservers` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L269–L274` |
| `HypervisorsTestV21.test_view_hypervisor_nodetail_service_down` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L276–L286` |
| `HypervisorsTestV21.test_view_hypervisor_detail_service_down` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L288–L298` |
| `HypervisorsTestV21.test_view_hypervisor_nodetail_service_disabled` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L300–L308` |
| `HypervisorsTestV21.test_view_hypervisor_detail_service_disabled` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L310–L318` |
| `HypervisorsTestV21.test_view_hypervisor_servers` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L320–L333` |
| `HypervisorsTestV21._test_view_hypervisor_detail_cpuinfo_null` | method | (self, cpu_info) | private | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L335–L347` |
| `HypervisorsTestV21.test_view_hypervisor_detail_cpuinfo_empty_string` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L349–L350` |
| `HypervisorsTestV21.test_view_hypervisor_detail_cpuinfo_none` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L352–L353` |
| `HypervisorsTestV21.test_index` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L355–L359` |
| `HypervisorsTestV21.test_index_compute_host_not_found` | method | (self) | public | not declared | 2/22 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L361–L393` |
| `HypervisorsTestV21.test_index_compute_host_not_found.fake_service_get_by_compute_host` | function | (context, host) | public | `TEST_SERVICES[0]` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L374) | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L372–L375` |
| `HypervisorsTestV21.test_index_compute_host_not_mapped` | method | (self) | public | not declared | 2/21 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L395–L424` |
| `HypervisorsTestV21.test_index_compute_host_not_mapped.fake_service_get_by_compute_host` | function | (context, host) | public | `TEST_SERVICES[0]` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L406) | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L404–L407` |
| `HypervisorsTestV21.test_detail` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L426–L430` |
| `HypervisorsTestV21.test_detail_compute_host_not_found` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L432–L471` |
| `HypervisorsTestV21.test_detail_compute_host_not_found.fake_service_get_by_compute_host` | function | (context, host) | public | `TEST_SERVICES[0]` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L445) | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L443–L446` |
| `HypervisorsTestV21.test_detail_compute_host_not_mapped` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L473–L510` |
| `HypervisorsTestV21.test_detail_compute_host_not_mapped.fake_service_get_by_compute_host` | function | (context, host) | public | `TEST_SERVICES[0]` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L486) | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L484–L487` |
| `HypervisorsTestV21.test_show` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L512–L517` |
| `HypervisorsTestV21.test_show_compute_host_not_mapped` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L519–L532` |
| `HypervisorsTestV21.test_show_noid` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L534–L537` |
| `HypervisorsTestV21.test_show_non_integer_id` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L539–L541` |
| `HypervisorsTestV21.test_uptime` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L543–L556` |
| `HypervisorsTestV21.test_uptime_noid` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L558–L562` |
| `HypervisorsTestV21.test_uptime_not_implemented` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L564–L574` |
| `HypervisorsTestV21.test_uptime_host_not_found` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L576–L586` |
| `HypervisorsTestV21.test_uptime_non_integer_id` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L588–L590` |
| `HypervisorsTestV21.test_uptime_hypervisor_down` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L592–L601` |
| `HypervisorsTestV21.test_uptime_hypervisor_not_mapped_service_get` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L603–L612` |
| `HypervisorsTestV21.test_uptime_hypervisor_not_mapped` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L614–L623` |
| `HypervisorsTestV21.test_search` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L625–L629` |
| `HypervisorsTestV21.test_search_non_exist` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L631–L638` |
| `HypervisorsTestV21.test_search_unmapped` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L640–L651` |
| `HypervisorsTestV21.test_servers` | method | (self, mock_get) | public | not declared | 3/15 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L655–L671` |
| `HypervisorsTestV21.test_servers_not_mapped` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L673–L681` |
| `HypervisorsTestV21.test_servers_compute_host_not_found` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L683–L696` |
| `HypervisorsTestV21.test_servers_non_id` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L698–L707` |
| `HypervisorsTestV21.test_servers_with_non_integer_hypervisor_id` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L709–L717` |
| `HypervisorsTestV21.test_servers_with_no_servers` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L719–L726` |
| `HypervisorsTestV21.test_statistics` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L728–L744` |
| `HypervisorsTestV228` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L747–L753` |
| `HypervisorsTestV228.api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L748–L748` |
| `HypervisorsTestV228.DETAIL_HYPERS_DICTS` | constant | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L750–L750` |
| `HypervisorsTestV228.DETAIL_NULL_CPUINFO_DICT` | constant | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L753–L753` |
| `HypervisorsTestV233` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L756–L983` |
| `HypervisorsTestV233.api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L757–L757` |
| `HypervisorsTestV233.test_index_pagination` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L759–L777` |
| `HypervisorsTestV233.test_index_pagination_with_invalid_marker` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L779–L782` |
| `HypervisorsTestV233.test_index_pagination_with_invalid_non_int_limit` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L784–L787` |
| `HypervisorsTestV233.test_index_pagination_with_invalid_string_limit` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L789–L792` |
| `HypervisorsTestV233.test_index_duplicate_query_parameters_with_invalid_string_limit` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L794–L798` |
| `HypervisorsTestV233.test_index_duplicate_query_parameters_validation` | method | (self) | public | not declared | 2/18 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L800–L818` |
| `HypervisorsTestV233.test_index_pagination_with_additional_filter` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L820–L837` |
| `HypervisorsTestV233.test_detail_pagination` | method | (self) | public | not declared | 1/39 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L839–L878` |
| `HypervisorsTestV233.test_detail_pagination_with_invalid_marker` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L880–L884` |
| `HypervisorsTestV233.test_detail_pagination_with_invalid_string_limit` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L886–L890` |
| `HypervisorsTestV233.test_detail_duplicate_query_parameters_with_invalid_string_limit` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L892–L896` |
| `HypervisorsTestV233.test_detail_duplicate_query_parameters_validation` | method | (self) | public | not declared | 2/42 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L898–L941` |
| `HypervisorsTestV233.test_detail_pagination_with_additional_filter` | method | (self) | public | not declared | 1/41 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L943–L983` |
| `HypervisorsTestV252` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L986–L988` |
| `HypervisorsTestV252.api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L988–L988` |
| `HypervisorsTestV253` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L991–L1374` |
| `HypervisorsTestV253.api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L992–L992` |
| `HypervisorsTestV253.expect_uuid_for_id` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L993–L993` |
| `HypervisorsTestV253.INDEX_HYPER_DICTS` | constant | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L996–L1000` |
| `HypervisorsTestV253.setUp` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1002–L1007` |
| `HypervisorsTestV253.test_servers` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1009–L1013` |
| `HypervisorsTestV253.test_servers_not_mapped` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1015–L1017` |
| `HypervisorsTestV253.test_servers_compute_host_not_found` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1019–L1021` |
| `HypervisorsTestV253.test_servers_non_id` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1023–L1025` |
| `HypervisorsTestV253.test_servers_with_non_integer_hypervisor_id` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1027–L1029` |
| `HypervisorsTestV253.test_servers_with_no_servers` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1031–L1033` |
| `HypervisorsTestV253.test_index_with_no_servers` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1035–L1050` |
| `HypervisorsTestV253.test_index_with_servers_not_mapped` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1052–L1061` |
| `HypervisorsTestV253.test_index_with_servers_compute_host_not_found` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1063–L1079` |
| `HypervisorsTestV253.test_index_with_servers` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1081–L1104` |
| `HypervisorsTestV253.test_index_with_servers_invalid_parameter` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1106–L1111` |
| `HypervisorsTestV253.test_index_with_hostname_pattern_and_paging_parameters` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1113–L1124` |
| `HypervisorsTestV253.test_index_with_hostname_pattern_no_match` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1126–L1140` |
| `HypervisorsTestV253.test_detail_with_hostname_pattern` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1142–L1163` |
| `HypervisorsTestV253.test_detail_invalid_hostname_pattern_parameter` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1165–L1173` |
| `HypervisorsTestV253.test_search` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1175–L1179` |
| `HypervisorsTestV253.test_search_non_exist` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1181–L1184` |
| `HypervisorsTestV253.test_search_unmapped` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1186–L1188` |
| `HypervisorsTestV253.test_show_non_integer_id` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1190–L1194` |
| `HypervisorsTestV253.test_show_integer_id` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1196–L1202` |
| `HypervisorsTestV253.test_show_with_servers_invalid_parameter` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1204–L1214` |
| `HypervisorsTestV253.test_show_with_servers_host_mapping_not_found` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1216–L1228` |
| `HypervisorsTestV253.test_show_with_servers` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1230–L1248` |
| `HypervisorsTestV253.test_show_duplicate_query_parameters_validation` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1250–L1259` |
| `HypervisorsTestV253.test_uptime_non_integer_id` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1261–L1265` |
| `HypervisorsTestV253.test_uptime_integer_id` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1267–L1274` |
| `HypervisorsTestV253.test_detail_pagination` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1276–L1290` |
| `HypervisorsTestV253.test_detail_pagination_with_invalid_marker` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1292–L1298` |
| `HypervisorsTestV253.test_detail_pagination_with_additional_filter` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1300–L1304` |
| `HypervisorsTestV253.test_detail_duplicate_query_parameters_validation` | method | (self) | public | not declared | 2/14 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1306–L1322` |
| `HypervisorsTestV253.test_index_pagination` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1324–L1342` |
| `HypervisorsTestV253.test_index_pagination_with_invalid_marker` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1344–L1350` |
| `HypervisorsTestV253.test_index_pagination_with_additional_filter` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1352–L1356` |
| `HypervisorsTestV253.test_index_duplicate_query_parameters_validation` | method | (self) | public | not declared | 2/14 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1358–L1374` |
| `HypervisorsTestV275` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1377–L1426` |
| `HypervisorsTestV275.api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1378–L1378` |
| `HypervisorsTestV275._test_servers_with_no_servers` | method | (self, func, version=None, **kwargs) | private | `result` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1394) | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1380–L1394` |
| `HypervisorsTestV275.test_index_with_no_servers` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1396–L1399` |
| `HypervisorsTestV275.test_index_with_no_servers_old_version` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1401–L1405` |
| `HypervisorsTestV275.test_detail_with_no_servers` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1407–L1410` |
| `HypervisorsTestV275.test_detail_with_no_servers_old_version` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1412–L1416` |
| `HypervisorsTestV275.test_show_with_no_servers` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1418–L1421` |
| `HypervisorsTestV275.test_show_with_no_servers_old_version` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1423–L1426` |
| `HypervisorsTestV288` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1429–L1567` |
| `HypervisorsTestV288.api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1430–L1430` |
| `HypervisorsTestV288.DETAIL_HYPERS_DICTS` | constant | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1432–L1432` |
| `HypervisorsTestV288.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1443–L1447` |
| `HypervisorsTestV288.test_view_hypervisor_detail_cpuinfo_empty_string` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1449–L1451` |
| `HypervisorsTestV288.test_view_hypervisor_detail_cpuinfo_none` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1453–L1455` |
| `HypervisorsTestV288.test_show_with_uptime_provided_by_compute_node` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1457–L1462` |
| `HypervisorsTestV288.test_detail_list_uptime` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1464–L1470` |
| `HypervisorsTestV288.test_uptime` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1472–L1476` |
| `HypervisorsTestV288.test_uptime_old_version` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1478–L1483` |
| `HypervisorsTestV288.test_uptime_noid` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1485–L1487` |
| `HypervisorsTestV288.test_uptime_not_implemented` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1489–L1491` |
| `HypervisorsTestV288.test_uptime_implemented` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1493–L1495` |
| `HypervisorsTestV288.test_uptime_integer_id` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1497–L1499` |
| `HypervisorsTestV288.test_uptime_host_not_found` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1501–L1503` |
| `HypervisorsTestV288.test_uptime_hypervisor_down` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1505–L1507` |
| `HypervisorsTestV288.test_uptime_hypervisor_not_mapped_service_get` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1509–L1511` |
| `HypervisorsTestV288.test_uptime_hypervisor_not_mapped` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1513–L1515` |
| `HypervisorsTestV288.test_show_with_uptime_notimplemented` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1517–L1530` |
| `HypervisorsTestV288.test_show_with_uptime_hypervisor_down` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1532–L1547` |
| `HypervisorsTestV288.test_show_old_version` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1549–L1556` |
| `HypervisorsTestV288.test_statistics` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1558–L1562` |
| `HypervisorsTestV288.test_statistics_old_version` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1564–L1567` |

## Dependencies

- `import copy` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L17)
- `import netaddr` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L19)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L20)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L21)
- `webob`: imports `exc` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L22)
- `nova.api.openstack.compute`: imports `hypervisors as hypervisors_v21` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L24)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L25)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L26)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L27)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L28)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L29)

## Side Effects

- **network**: from nova.api.openstack.compute import hypervisors as hypervisors_v21 (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L24)
- **global-mutation**: CPU_INFO = """ (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L32)
- **global-mutation**: TEST_HYPERS = [ (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L39)
- **global-mutation**: TEST_SERVICES = [ (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L83)
- **global-mutation**: TEST_HYPERS_OBJ = [objects.ComputeNode(**hyper_dct) (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L104)
- **global-mutation**: TEST_SERVERS = [dict(name="inst1", uuid=uuids.instance_1, host="compute1"), (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L110)
- **global-mutation**: TEST_HYPERS_OBJ = copy.deepcopy(TEST_HYPERS_OBJ) (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L196)
- **global-mutation**: TEST_SERVICES = copy.deepcopy(TEST_SERVICES) (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L197)
- **global-mutation**: TEST_SERVERS = copy.deepcopy(TEST_SERVERS) (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L198)
- **global-mutation**: DETAIL_HYPERS_DICTS = copy.deepcopy(TEST_HYPERS) (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L200)
- **global-mutation**: INDEX_HYPER_DICTS = [ (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L220)
- **global-mutation**: DETAIL_NULL_CPUINFO_DICT = {'': '', None: None} (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L225)
- **global-mutation**: DETAIL_HYPERS_DICTS = copy.deepcopy(HypervisorsTestV21.DETAIL_HYPERS_DICTS) (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L750)
- **global-mutation**: DETAIL_NULL_CPUINFO_DICT = {'': {}, None: {}} (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L753)
- **global-mutation**: INDEX_HYPER_DICTS = [ (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L996)
- **global-mutation**: DETAIL_HYPERS_DICTS = copy.deepcopy(HypervisorsTestV21.DETAIL_HYPERS_DICTS) (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1432)

## Security Surface

- **sink** (`db-write`): TEST_HYPERS[0].update({'service': TEST_SERVICES[0]}) (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L107)
- **sink** (`db-write`): TEST_HYPERS[1].update({'service': TEST_SERVICES[1]}) (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L108)
- **sink** (`db-write`): DETAIL_HYPERS_DICTS[0].update({'state': 'up', (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L212)
- **sink** (`db-write`): DETAIL_HYPERS_DICTS[1].update({'state': 'up', (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L216)
- **sink** (`db-write`): expected_dict.update({'servers': [ (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L327)
- **sink** (`db-write`): expected_dict.update({'cpu_info': (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L345)
- **sink** (`db-write`): expected_dict.update({'uptime': "fake uptime"}) (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L554)
- **sink** (`db-write`): expected_dict[0].update({'servers': [ (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L660)
- **sink** (`db-write`): expected_dict[1].update({'servers': [ (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L663)
- **sink** (`db-write`): expected_dict.update({'uptime': None}) (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1527)
- **sink** (`db-write`): expected_dict.update({'uptime': None}) (src/nova/tests/unit/api/openstack/compute/test_hypervisors.py:L1542)

