# src/nova/tests/unit/api/openstack/compute/test_services.py

## Overview

This file implements the `test_services` module, defining 6 classs, 1 constant, 8 fields, 13 functions, 71 methods, 1 variable, 19 imports, 2 side effects, 28 security surface entries.

Lines: total 1370, code 1199, comment 31, blank 140

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FAKE_UUID_COMPUTE_HOST1` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_services.py:L39–L39` |
| `fake_services_list` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_services.py:L42–L116` |
| `fake_service_get_all` | function | (services) | exported | `service_get_all` (src/nova/tests/unit/api/openstack/compute/test_services.py:L126) | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L119–L126` |
| `fake_service_get_all.service_get_all` | function | (context, filters=None, set_zones=False, all_cells=False, cell_down_support=False) | public | `availability_zones.set_availability_zones(context, services)` (src/nova/tests/unit/api/openstack/compute/test_services.py:L123); `services` (src/nova/tests/unit/api/openstack/compute/test_services.py:L125) | — | `src/nova/tests/unit/api/openstack/compute/test_services.py:L120–L125` |
| `fake_db_api_service_get_all` | function | (context, disabled=None) | exported | `fake_services_list` (src/nova/tests/unit/api/openstack/compute/test_services.py:L130) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L129–L130` |
| `fake_db_service_get_by_host_binary` | function | (services) | exported | `service_get_by_host_binary` (src/nova/tests/unit/api/openstack/compute/test_services.py:L139) | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L133–L139` |
| `fake_db_service_get_by_host_binary.service_get_by_host_binary` | function | (context, host, binary) | public | `service` (src/nova/tests/unit/api/openstack/compute/test_services.py:L137) | — | `src/nova/tests/unit/api/openstack/compute/test_services.py:L134–L138` |
| `fake_service_get_by_host_binary` | function | (context, host, binary) | exported | `fake(context, host, binary)` (src/nova/tests/unit/api/openstack/compute/test_services.py:L144) | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L142–L144` |
| `_service_get_by_id` | function | (services, value) | unexported | `service` (src/nova/tests/unit/api/openstack/compute/test_services.py:L150); `None` (src/nova/tests/unit/api/openstack/compute/test_services.py:L151) | 3/5 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L147–L151` |
| `fake_db_service_update` | function | (services) | exported | `service_update` (src/nova/tests/unit/api/openstack/compute/test_services.py:L162) | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L154–L162` |
| `fake_db_service_update.service_update` | function | (context, service_id, values) | public | `service` (src/nova/tests/unit/api/openstack/compute/test_services.py:L161) | — | `src/nova/tests/unit/api/openstack/compute/test_services.py:L155–L161` |
| `fake_service_update` | function | (context, service_id, values) | exported | `fake(context, service_id, values)` (src/nova/tests/unit/api/openstack/compute/test_services.py:L167) | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L165–L167` |
| `fake_utcnow` | function | — | exported | `datetime.datetime(2012, 10, 29, 13, 42, 11)` (src/nova/tests/unit/api/openstack/compute/test_services.py:L171) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L170–L171` |
| `ServicesTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_services.py:L174–L789` |
| `ServicesTestV21.service_is_up_exc` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_services.py:L175–L175` |
| `ServicesTestV21.bad_request` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_services.py:L176–L176` |
| `ServicesTestV21.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_services.py:L177–L177` |
| `ServicesTestV21.base_path` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_services.py:L178–L178` |
| `ServicesTestV21.base_path_with_query` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_services.py:L179–L179` |
| `ServicesTestV21._set_up_controller` | method | (self) | private | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L181–L182` |
| `ServicesTestV21.setUp` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L184–L206` |
| `ServicesTestV21._process_output` | method | (self, services, has_disabled=False, has_id=False) | private | `services` (src/nova/tests/unit/api/openstack/compute/test_services.py:L209) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L208–L209` |
| `ServicesTestV21.test_services_list` | method | (self) | public | not declared | 1/39 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L211–L250` |
| `ServicesTestV21.test_services_list_with_host` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L252–L275` |
| `ServicesTestV21.test_services_list_with_service` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L277–L301` |
| `ServicesTestV21._test_services_list_with_param` | method | (self, url) | private | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L303–L317` |
| `ServicesTestV21.test_services_list_with_host_service` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L319–L321` |
| `ServicesTestV21.test_services_list_with_additional_filter` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L323–L326` |
| `ServicesTestV21.test_services_list_with_unknown_filter` | method | (self) | public | not declared | 1/43 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L328–L371` |
| `ServicesTestV21.test_services_list_with_multiple_host_filter` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L373–L397` |
| `ServicesTestV21.test_services_list_with_multiple_service_filter` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L399–L423` |
| `ServicesTestV21.test_services_list_host_query_allow_int_as_string` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L425–L429` |
| `ServicesTestV21.test_services_list_service_query_allow_int_as_string` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L431–L435` |
| `ServicesTestV21.test_services_list_with_host_service_dummy` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L437–L442` |
| `ServicesTestV21.test_services_detail` | method | (self) | public | not declared | 1/38 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L444–L482` |
| `ServicesTestV21.test_service_detail_with_host` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L484–L507` |
| `ServicesTestV21.test_service_detail_with_service` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L509–L533` |
| `ServicesTestV21.test_service_detail_with_host_service` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L535–L550` |
| `ServicesTestV21.test_services_detail_with_delete_extension` | method | (self) | public | not declared | 1/39 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L552–L591` |
| `ServicesTestV21.test_services_enable` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L593–L603` |
| `ServicesTestV21.test_services_enable._service_update` | function | (context, service_id, values) | private | `dict(test_service.fake_service, id=service_id, **values)` (src/nova/tests/unit/api/openstack/compute/test_services.py:L596) | — | `src/nova/tests/unit/api/openstack/compute/test_services.py:L594–L596` |
| `ServicesTestV21.test_services_enable_with_invalid_host` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L605–L611` |
| `ServicesTestV21.test_services_enable_with_unmapped_host` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L613–L622` |
| `ServicesTestV21.test_services_enable_with_invalid_binary` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L624–L630` |
| `ServicesTestV21.test_services_disable` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L632–L637` |
| `ServicesTestV21.test_services_disable_with_invalid_host` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L639–L645` |
| `ServicesTestV21.test_services_disable_with_invalid_binary` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L647–L653` |
| `ServicesTestV21.test_services_disable_log_reason` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L655–L665` |
| `ServicesTestV21.test_mandatory_reason_field` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L667–L673` |
| `ServicesTestV21.test_invalid_reason_field` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L675–L683` |
| `ServicesTestV21.test_services_delete` | method | (self, mock_get_compute_nodes) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L687–L700` |
| `ServicesTestV21.test_services_delete_compute_host_not_found` | method | (self, mock_get_all_by_host) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L705–L715` |
| `ServicesTestV21.test_services_delete_not_found` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L717–L720` |
| `ServicesTestV21.test_services_delete_invalid_id` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L722–L725` |
| `ServicesTestV21.test_services_delete_duplicate_service` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L727–L732` |
| `ServicesTestV21.test_compute_service_delete_host_mapping_not_found` | method | (self, service_delete, get_hm, get_count_by_hosts) | public | not declared | 1/22 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L739–L781` |
| `ServicesTestV21.test_compute_service_delete_host_mapping_not_found._test` | function | (mock_log, delete_resource_provider, get_aggregates_by_host, service_get_by_id, cn_get_all_by_host) | private | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_services.py:L763–L780` |
| `ServicesTestV21.test_services_with_exception` | method | (self, mock_is_up) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L786–L789` |
| `ServicesTestV211` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_services.py:L792–L1134` |
| `ServicesTestV211.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_services.py:L793–L793` |
| `ServicesTestV211.test_services_list` | method | (self) | public | not declared | 1/44 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L795–L839` |
| `ServicesTestV211.test_services_list_with_host` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L841–L867` |
| `ServicesTestV211.test_services_list_with_service` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L869–L895` |
| `ServicesTestV211.test_services_list_with_host_service` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L897–L914` |
| `ServicesTestV211.test_services_detail` | method | (self) | public | not declared | 1/44 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L916–L960` |
| `ServicesTestV211.test_service_detail_with_host` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L962–L988` |
| `ServicesTestV211.test_service_detail_with_service` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L990–L1016` |
| `ServicesTestV211.test_service_detail_with_host_service` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1018–L1035` |
| `ServicesTestV211.test_services_detail_with_delete_extension` | method | (self) | public | not declared | 1/44 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1037–L1081` |
| `ServicesTestV211.test_force_down_service` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1083–L1098` |
| `ServicesTestV211.test_force_down_service_with_string_forced_down` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1100–L1115` |
| `ServicesTestV211.test_force_down_service_with_invalid_parameter` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1117–L1124` |
| `ServicesTestV211.test_update_forced_down_invalid_service` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1126–L1134` |
| `ServicesTestV252` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1137–L1139` |
| `ServicesTestV252.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1139–L1139` |
| `FakeServiceGroupAPI` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1142–L1147` |
| `FakeServiceGroupAPI.service_is_up` | method | (self, *args, **kwargs) | public | `True` (src/nova/tests/unit/api/openstack/compute/test_services.py:L1144) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1143–L1144` |
| `FakeServiceGroupAPI.get_updated_time` | method | (self, *args, **kwargs) | public | `'2024-11-18T18:38:54.000000'` (src/nova/tests/unit/api/openstack/compute/test_services.py:L1147) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1146–L1147` |
| `ServicesTestV253` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1150–L1347` |
| `ServicesTestV253.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1153–L1157` |
| `ServicesTestV253.assert_services_equal` | method | (self, s1, s2) | public | not declared | 2/3 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1159–L1161` |
| `ServicesTestV253.test_list_has_uuid_in_id_field` | method | (self) | public | not declared | 3/13 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1163–L1182` |
| `ServicesTestV253.test_delete_takes_uuid_for_id` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1184–L1193` |
| `ServicesTestV253.test_delete_uuid_not_found` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1195–L1200` |
| `ServicesTestV253.test_delete_invalid_uuid` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1202–L1206` |
| `ServicesTestV253.test_update_invalid_service_uuid` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1208–L1212` |
| `ServicesTestV253.test_update_service_not_found` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1214–L1219` |
| `ServicesTestV253.test_update_invalid_status` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1221–L1229` |
| `ServicesTestV253.test_update_disabled_no_reason_then_enable` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1231–L1259` |
| `ServicesTestV253.test_update_enable_with_disabled_reason_fails` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1261–L1272` |
| `ServicesTestV253.test_update_disabled_reason_and_forced_down` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1274–L1298` |
| `ServicesTestV253.test_update_forced_down_invalid_value` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1300–L1311` |
| `ServicesTestV253.test_update_forced_down_invalid_service` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1313–L1323` |
| `ServicesTestV253.test_update_empty_body` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1325–L1335` |
| `ServicesTestV253.test_update_only_disabled_reason` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1337–L1347` |
| `ServicesTestV275` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1350–L1370` |
| `ServicesTestV275.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1351–L1351` |
| `ServicesTestV275.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1353–L1355` |
| `ServicesTestV275.test_services_list_with_additional_filter_old_version` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1357–L1362` |
| `ServicesTestV275.test_services_list_with_additional_filter` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_services.py:L1364–L1370` |

## Dependencies

- `import copy` (src/nova/tests/unit/api/openstack/compute/test_services.py:L15)
- `import datetime` (src/nova/tests/unit/api/openstack/compute/test_services.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_services.py:L17)
- `keystoneauth1`: imports `exceptions as ks_exc` (src/nova/tests/unit/api/openstack/compute/test_services.py:L19)
- `oslo_utils`: imports `fixture as utils_fixture` (src/nova/tests/unit/api/openstack/compute/test_services.py:L20)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/unit/api/openstack/compute/test_services.py:L21)
- `import webob.exc` (src/nova/tests/unit/api/openstack/compute/test_services.py:L22)
- `nova.api.openstack.compute`: imports `services as services_v21` (src/nova/tests/unit/api/openstack/compute/test_services.py:L24)
- `nova.api.openstack`: imports `wsgi as os_wsgi` (src/nova/tests/unit/api/openstack/compute/test_services.py:L25)
- `nova`: imports `availability_zones` (src/nova/tests/unit/api/openstack/compute/test_services.py:L26)
- `nova.compute`: imports `api as compute` (src/nova/tests/unit/api/openstack/compute/test_services.py:L27)
- `nova`: imports `context` (src/nova/tests/unit/api/openstack/compute/test_services.py:L28)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_services.py:L29)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_services.py:L30)
- `nova.servicegroup.drivers`: imports `db as db_driver` (src/nova/tests/unit/api/openstack/compute/test_services.py:L31)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_services.py:L32)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/api/openstack/compute/test_services.py:L33)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_services.py:L34)
- `nova.tests.unit.objects`: imports `test_service` (src/nova/tests/unit/api/openstack/compute/test_services.py:L35)

## Side Effects

- **network**: from nova.api.openstack.compute import services as services_v21 (src/nova/tests/unit/api/openstack/compute/test_services.py:L24)
- **global-mutation**: FAKE_UUID_COMPUTE_HOST1 = 'e81d66a4-ddd3-4aba-8a84-171d1cb4d339' (src/nova/tests/unit/api/openstack/compute/test_services.py:L39)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as ks_exc (src/nova/tests/unit/api/openstack/compute/test_services.py:L19)
- **sink** (`db-write`): service.update(values) (src/nova/tests/unit/api/openstack/compute/test_services.py:L160)
- **sink** (`db-write`): res_dict = self.controller.update(self.req, "enable", body=body) (src/nova/tests/unit/api/openstack/compute/test_services.py:L601)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_services.py:L608)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_services.py:L619)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_services.py:L627)
- **sink** (`db-write`): res_dict = self.controller.update(self.req, "disable", body=body) (src/nova/tests/unit/api/openstack/compute/test_services.py:L634)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_services.py:L642)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_services.py:L650)
- **sink** (`db-write`): res_dict = self.controller.update(self.req, (src/nova/tests/unit/api/openstack/compute/test_services.py:L660)
- **sink** (`db-write`): self.controller.update, self.req, "disable-log-reason", (src/nova/tests/unit/api/openstack/compute/test_services.py:L672)
- **sink** (`db-write`): self.controller.update, self.req, "disable-log-reason", (src/nova/tests/unit/api/openstack/compute/test_services.py:L682)
- **sink** (`db-write`): res_dict = self.controller.update(req, 'force-down', body=req_body) (src/nova/tests/unit/api/openstack/compute/test_services.py:L1089)
- **sink** (`db-write`): res_dict = self.controller.update(req, 'force-down', body=req_body) (src/nova/tests/unit/api/openstack/compute/test_services.py:L1106)
- **sink** (`db-write`): self.controller.update, req, 'force-down', body=req_body) (src/nova/tests/unit/api/openstack/compute/test_services.py:L1124)
- **sink** (`db-write`): self.controller.update, req, 'force-down', (src/nova/tests/unit/api/openstack/compute/test_services.py:L1133)
- **sink** (`db-write`): self.controller.update, self.req, 1234, body={}) (src/nova/tests/unit/api/openstack/compute/test_services.py:L1211)
- **sink** (`db-write`): self.assertRaises(webob.exc.HTTPNotFound, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_services.py:L1218)
- **sink** (`db-write`): exception.ValidationError, self.controller.update, self.req, (src/nova/tests/unit/api/openstack/compute/test_services.py:L1228)
- **sink** (`db-write`): resp = self.controller.update(self.req, service.uuid, (src/nova/tests/unit/api/openstack/compute/test_services.py:L1237)
- **sink** (`db-write`): resp = self.controller.update(req, service.uuid, (src/nova/tests/unit/api/openstack/compute/test_services.py:L1256)
- **sink** (`db-write`): self.controller.update, self.req, service.uuid, (src/nova/tests/unit/api/openstack/compute/test_services.py:L1268)
- **sink** (`db-write`): resp = self.controller.update(self.req, service.uuid, (src/nova/tests/unit/api/openstack/compute/test_services.py:L1280)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_services.py:L1307)
- **sink** (`db-write`): """Tests that you can't update a non-nova-compute service.""" (src/nova/tests/unit/api/openstack/compute/test_services.py:L1314)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_services.py:L1318)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_services.py:L1331)
- **sink** (`db-write`): self.controller.update, self.req, service.uuid, (src/nova/tests/unit/api/openstack/compute/test_services.py:L1343)

