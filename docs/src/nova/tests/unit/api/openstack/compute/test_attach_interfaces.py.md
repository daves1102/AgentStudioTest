# src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py

## Overview

This file implements the `test_attach_interfaces` module, defining 3 classs, 10 constants, 6 fields, 9 functions, 49 methods, 5 variables, 12 imports, 11 side effects.

Lines: total 671, code 570, comment 18, blank 83

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FAKE_UUID1` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L33–L33` |
| `FAKE_UUID2` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L34–L34` |
| `FAKE_PORT_ID1` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L36–L36` |
| `FAKE_PORT_ID2` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L37–L37` |
| `FAKE_PORT_ID3` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L38–L38` |
| `FAKE_NOT_FOUND_PORT_ID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L39–L39` |
| `FAKE_NET_ID1` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L41–L41` |
| `FAKE_NET_ID2` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L42–L42` |
| `FAKE_NET_ID3` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L43–L43` |
| `FAKE_BAD_NET_ID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L44–L44` |
| `port_data1` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L46–L56` |
| `port_data2` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L58–L68` |
| `port_data3` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L70–L80` |
| `fake_networks` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L82–L82` |
| `ports` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L83–L83` |
| `fake_show_port` | function | (context, port_id, **kwargs) | exported | `{'port': port}` (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L89) | 3/6 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L86–L91` |
| `fake_list_ports` | function | (context, **kwargs) | exported | `{'ports': ports}` (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L95) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L94–L95` |
| `fake_attach_interface` | function | (self, context, instance, network_id, port_id, requested_ip='192.168.1.3', tag=None) | exported | `vif` (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L114) | 5/15 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L98–L114` |
| `fake_detach_interface` | function | (self, context, instance, port_id) | exported | `` (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L120) | 3/5 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L117–L121` |
| `fake_get_instance` | function | (self, context, instance_id, expected_attrs=None, cell_down_support=False) | exported | `fake_instance.fake_instance_obj( context, id=1, uuid=instance_id, project_id=context.project_id)` (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L126) | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L124–L127` |
| `InterfaceAttachTestsV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L130–L586` |
| `InterfaceAttachTestsV21.controller_cls` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L131–L131` |
| `InterfaceAttachTestsV21.validate_exc` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L132–L132` |
| `InterfaceAttachTestsV21.in_use_exc` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L133–L133` |
| `InterfaceAttachTestsV21.not_found_exc` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L134–L134` |
| `InterfaceAttachTestsV21.not_usable_exc` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L135–L135` |
| `InterfaceAttachTestsV21.setUp` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L137–L148` |
| `InterfaceAttachTestsV21._test_instance_not_found` | method | (self, func, args, mock_get, kwargs=None) | private | not declared | 2/4 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L152–L155` |
| `InterfaceAttachTestsV21.test_show_instance_not_found` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L157–L158` |
| `InterfaceAttachTestsV21.test_index_instance_not_found` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L160–L161` |
| `InterfaceAttachTestsV21.test_detach_interface_instance_not_found` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L163–L165` |
| `InterfaceAttachTestsV21.test_attach_interface_instance_not_found` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L167–L169` |
| `InterfaceAttachTestsV21.test_show` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L171–L180` |
| `InterfaceAttachTestsV21.test_show_port_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L182–L185` |
| `InterfaceAttachTestsV21.test_show_forbidden` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L187–L192` |
| `InterfaceAttachTestsV21.test_show_invalid_query_params` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L194–L204` |
| `InterfaceAttachTestsV21.test_index` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L206–L231` |
| `InterfaceAttachTestsV21.test_index_invalid_query_params` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L233–L242` |
| `InterfaceAttachTestsV21.test_delete` | method | (self) | public | not declared | 2/20 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L244–L265` |
| `InterfaceAttachTestsV21.test_detach_interface_instance_locked` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L267–L279` |
| `InterfaceAttachTestsV21.test_detach_interface_instance_locked.fake_detach_interface_from_locked_server` | function | (self, context, instance, port_id) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L268–L270` |
| `InterfaceAttachTestsV21.test_delete_interface_not_found` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L281–L289` |
| `InterfaceAttachTestsV21.test_attach_interface_instance_locked` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L291–L301` |
| `InterfaceAttachTestsV21.test_attach_interface_instance_locked.fake_attach_interface_to_locked_server` | function | (self, context, instance, network_id, port_id, requested_ip, tag=None) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L292–L294` |
| `InterfaceAttachTestsV21.test_attach_interface_without_network_id` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L303–L309` |
| `InterfaceAttachTestsV21.test_interface_tagged_attach_not_supported` | method | (self, mock_attach) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L314–L317` |
| `InterfaceAttachTestsV21.test_interface_vdpa_interface_not_supported` | method | (self, mock_attach) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L323–L326` |
| `InterfaceAttachTestsV21.test_detach_interface_vdpa_interface_not_supported` | method | (self, mock_detach) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L332–L334` |
| `InterfaceAttachTestsV21.test_attach_interface_with_network_id` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L336–L342` |
| `InterfaceAttachTestsV21._attach_interface_bad_request_case` | method | (self, body) | private | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L344–L349` |
| `InterfaceAttachTestsV21._attach_interface_not_found_case` | method | (self, body) | private | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L351–L356` |
| `InterfaceAttachTestsV21.test_attach_interface_with_port_and_network_id` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L358–L365` |
| `InterfaceAttachTestsV21.test_attach_interface_with_not_found_network_id` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L367–L373` |
| `InterfaceAttachTestsV21.test_attach_interface_with_not_found_port_id` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L375–L381` |
| `InterfaceAttachTestsV21.test_attach_interface_with_invalid_state` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L383–L394` |
| `InterfaceAttachTestsV21.test_attach_interface_with_invalid_state.fake_attach_interface_invalid_state` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L384–L387` |
| `InterfaceAttachTestsV21.test_attach_interface_port_limit_exceeded` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L396–L408` |
| `InterfaceAttachTestsV21.test_detach_interface_with_invalid_state` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L410–L422` |
| `InterfaceAttachTestsV21.test_detach_interface_with_invalid_state.fake_detach_interface_invalid_state` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L411–L414` |
| `InterfaceAttachTestsV21.test_detach_interface_with_not_implemented` | method | (self, _mock) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L426–L429` |
| `InterfaceAttachTestsV21.test_attach_interface_invalid_fixed_ip` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L431–L440` |
| `InterfaceAttachTestsV21.test_attach_interface_fixed_ip_already_in_use` | method | (self, attach_mock, get_mock) | public | not declared | 1/19 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L444–L462` |
| `InterfaceAttachTestsV21.test_attach_interface_port_in_use` | method | (self, attach_mock, get_mock) | public | not declared | 1/19 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L466–L484` |
| `InterfaceAttachTestsV21.test_attach_interface_port_not_usable` | method | (self, attach_mock, get_mock) | public | not declared | 1/20 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L488–L507` |
| `InterfaceAttachTestsV21.test_attach_interface_failed_no_network` | method | (self, attach_mock, get_mock) | public | not declared | 1/15 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L511–L525` |
| `InterfaceAttachTestsV21.test_attach_interface_no_more_fixed_ips` | method | (self, attach_mock, get_mock) | public | not declared | 1/19 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L529–L547` |
| `InterfaceAttachTestsV21.test_attach_interface_failed_securitygroup_cannot_be_applied` | method | (self, attach_mock, get_mock) | public | not declared | 1/16 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L551–L566` |
| `InterfaceAttachTestsV21._test_attach_interface_with_invalid_parameter` | method | (self, param) | private | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L568–L574` |
| `InterfaceAttachTestsV21.test_attach_interface_instance_with_non_uuid_net_id` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L576–L578` |
| `InterfaceAttachTestsV21.test_attach_interface_instance_with_non_uuid_port_id` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L580–L582` |
| `InterfaceAttachTestsV21.test_attach_interface_instance_with_non_array_fixed_ips` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L584–L586` |
| `InterfaceAttachTestsV249` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L589–L628` |
| `InterfaceAttachTestsV249.controller_cls` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L590–L590` |
| `InterfaceAttachTestsV249.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L592–L601` |
| `InterfaceAttachTestsV249.test_tagged_interface_attach_invalid_tag_comma` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L603–L607` |
| `InterfaceAttachTestsV249.test_tagged_interface_attach_invalid_tag_slash` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L609–L613` |
| `InterfaceAttachTestsV249.test_tagged_interface_attach_invalid_tag_too_long` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L615–L620` |
| `InterfaceAttachTestsV249.test_tagged_interface_attach_valid_tag` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L623–L628` |
| `InterfaceAttachTestsV270` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L631–L671` |
| `InterfaceAttachTestsV270.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L634–L639` |
| `InterfaceAttachTestsV270.test_show_interface_no_vif` | method | (self, mock_get_by_uuid) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L642–L653` |
| `InterfaceAttachTestsV270.test_list_interfaces_no_vifs` | method | (self, mock_get_by_instance_uuid) | public | not declared | 2/12 | `src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L657–L671` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L16)
- `import fixtures` (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L18)
- `webob`: imports `exc` (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L19)
- `nova.api.openstack`: imports `common` (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L21)
- `nova.api.openstack.compute`: imports `attach_interfaces as attach_interfaces_v21` (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L22–L23)
- `nova.compute`: imports `api as compute_api` (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L24)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L25)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L26)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L27)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L28)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L29)
- `nova.tests.unit`: imports `fake_network_cache_model` (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L30)

## Side Effects

- **network**: from nova.api.openstack.compute import attach_interfaces \ (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L22)
- **global-mutation**: FAKE_UUID1 = 'aaaaaaaa-aaaa-aaaa-aaaa-aaaaaaaaaaaa' (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L33)
- **global-mutation**: FAKE_UUID2 = 'bbbbbbbb-bbbb-bbbb-bbbb-bbbbbbbbbbbb' (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L34)
- **global-mutation**: FAKE_PORT_ID1 = '11111111-1111-1111-1111-111111111111' (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L36)
- **global-mutation**: FAKE_PORT_ID2 = '22222222-2222-2222-2222-222222222222' (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L37)
- **global-mutation**: FAKE_PORT_ID3 = '33333333-3333-3333-3333-333333333333' (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L38)
- **global-mutation**: FAKE_NOT_FOUND_PORT_ID = '00000000-0000-0000-0000-000000000000' (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L39)
- **global-mutation**: FAKE_NET_ID1 = '44444444-4444-4444-4444-444444444444' (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L41)
- **global-mutation**: FAKE_NET_ID2 = '55555555-5555-5555-5555-555555555555' (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L42)
- **global-mutation**: FAKE_NET_ID3 = '66666666-6666-6666-6666-666666666666' (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L43)
- **global-mutation**: FAKE_BAD_NET_ID = '00000000-0000-0000-0000-000000000000' (src/nova/tests/unit/api/openstack/compute/test_attach_interfaces.py:L44)

