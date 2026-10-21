# src/nova/tests/unit/api/openstack/compute/test_security_groups.py

## Overview

This file implements the `test_security_groups` module, defining 7 classs, 7 constants, 10 fields, 10 functions, 151 methods, 19 imports, 8 side effects, 3 security surface entries.

Lines: total 1629, code 1310, comment 34, blank 285

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L38–L38` |
| `FAKE_UUID1` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L39–L39` |
| `FAKE_UUID2` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L40–L40` |
| `UUID_SERVER` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L41–L41` |
| `AttrDict` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L44–L46` |
| `AttrDict.__getattr__` | method | (self, k) | public | `self[k]` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L46) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L45–L46` |
| `security_group_request_template` | function | (**kwargs) | exported | `sg` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L53) | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L49–L53` |
| `security_group_template` | function | (**kwargs) | exported | `sg` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L61) | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L56–L61` |
| `security_group_db` | function | (security_group, id=None) | exported | `AttrDict(attrs)` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L72) | 3/9 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L64–L72` |
| `security_group_rule_template` | function | (**kwargs) | exported | `rule` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L81) | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L75–L81` |
| `security_group_rule_db` | function | (rule, id=None) | exported | `AttrDict(attrs)` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L88) | 2/5 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L84–L88` |
| `return_security_group_by_name` | function | (context, project_id, group_name, columns_to_join=None) | exported | `{'id': 1, 'name': group_name, "instances": [{'id': 1, 'uuid': UUID_SERVER}]}` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L93) | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L91–L94` |
| `MockClient` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L97–L372` |
| `MockClient._fake_security_groups` | field | — | private | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L100–L100` |
| `MockClient._fake_ports` | field | — | private | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L101–L101` |
| `MockClient._fake_networks` | field | — | private | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L102–L102` |
| `MockClient._fake_subnets` | field | — | private | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L103–L103` |
| `MockClient._fake_security_group_rules` | field | — | private | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L104–L104` |
| `MockClient.__init__` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L106–L113` |
| `MockClient._reset` | method | (self) | private | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L115–L120` |
| `MockClient.create_security_group` | method | (self, body=None) | public | `{'security_group': ret}` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L140) | 5/18 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L122–L140` |
| `MockClient.create_network` | method | (self, body) | public | `{'network': ret}` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L151) | 2/10 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L142–L151` |
| `MockClient.create_subnet` | method | (self, body) | public | `{'subnet': ret}` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L166) | 2/14 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L153–L166` |
| `MockClient.create_port` | method | (self, body) | public | `{'port': ret}` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L201) | 13/30 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L168–L201` |
| `MockClient.create_security_group_rule` | method | (self, body) | public | `{'security_group_rules': [ret]}` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L214) | 2/11 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L203–L214` |
| `MockClient.show_security_group` | method | (self, security_group, **_params) | public | `{'security_group': sg}` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L226) | 4/10 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L216–L226` |
| `MockClient.show_security_group_rule` | method | (self, security_group_rule, **_params) | public | `{'security_group_rule': self._fake_security_group_rules[security_group_rule]}` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L230) | 2/7 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L228–L234` |
| `MockClient.show_network` | method | (self, network, **_params) | public | `{'network': self._fake_networks[network]}` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L238) | 2/7 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L236–L242` |
| `MockClient.show_port` | method | (self, port, **_params) | public | `{'port': self._fake_ports[port]}` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L246) | 2/7 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L244–L250` |
| `MockClient.show_subnet` | method | (self, subnet, **_params) | public | `{'subnet': self._fake_subnets[subnet]}` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L254) | 2/7 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L252–L258` |
| `MockClient.list_security_groups` | method | (self, **_params) | public | `{'security_groups': ret}` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L279) | 12/20 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L260–L279` |
| `MockClient.list_networks` | method | (self, **_params) | public | `{'networks': []}` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L286); `{'networks': [network for network in self._fake_networks.values()]}` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L288) | 3/7 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L281–L289` |
| `MockClient.list_ports` | method | (self, **_params) | public | `{'ports': ret}` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L300) | 4/10 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L291–L300` |
| `MockClient.list_subnets` | method | (self, **_params) | public | `{'subnets': [subnet for subnet in self._fake_subnets.values()]}` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L303) | 2/3 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L302–L304` |
| `MockClient.list_floatingips` | method | (self, **_params) | public | `{'floatingips': []}` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L307) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L306–L307` |
| `MockClient.delete_security_group` | method | (self, security_group) | public | not declared | 4/11 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L309–L319` |
| `MockClient.delete_security_group_rule` | method | (self, security_group_rule) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L321–L323` |
| `MockClient.delete_network` | method | (self, network) | public | not declared | 3/7 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L325–L331` |
| `MockClient.delete_port` | method | (self, port) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L333–L335` |
| `MockClient.update_port` | method | (self, port, body=None) | public | `{'port': self._fake_ports[port]}` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L340) | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L337–L340` |
| `MockClient.list_extensions` | method | (self, **_parms) | public | `{'extensions': []}` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L343) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L342–L343` |
| `MockClient._check_ports_on_network` | method | (self, network) | private | not declared | 3/8 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L345–L352` |
| `MockClient.find_resource` | method | (self, resource, name_or_id, project_id=None, cmd_resource=None, parent_id=None, fields=None) | public | `sg` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L360); `res` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L370) | 7/17 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L354–L372` |
| `get_client` | function | (context=None, admin=False) | exported | `MockClient()` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L376) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L375–L376` |
| `TestSecurityGroupsV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L379–L934` |
| `TestSecurityGroupsV21.secgrp_ctl_cls` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L380–L380` |
| `TestSecurityGroupsV21.server_secgrp_ctl_cls` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L381–L381` |
| `TestSecurityGroupsV21.secgrp_act_ctl_cls` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L382–L382` |
| `TestSecurityGroupsV21.setUp` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L384–L408` |
| `TestSecurityGroupsV21.tearDown` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L410–L413` |
| `TestSecurityGroupsV21._create_sg_template` | method | (self, **kwargs) | private | `self.controller.create(self.req, body={'security_group': sg})` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L417) | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L415–L417` |
| `TestSecurityGroupsV21._create_network` | method | (self) | private | `net` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L426) | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L419–L426` |
| `TestSecurityGroupsV21._create_port` | method | (self, **kwargs) | private | `neutron.create_port(body)` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L436) | 3/9 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L428–L436` |
| `TestSecurityGroupsV21._create_security_group` | method | (self, **kwargs) | private | `neutron.create_security_group(body)` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L445) | 3/8 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L438–L445` |
| `TestSecurityGroupsV21._assert_security_groups_in_use` | method | (self, project_id, user_id, in_use) | private | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L447–L452` |
| `TestSecurityGroupsV21.test_create_security_group` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L454–L461` |
| `TestSecurityGroupsV21.test_create_security_group_with_no_name` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L463–L470` |
| `TestSecurityGroupsV21.test_create_security_group_with_no_body` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L472–L475` |
| `TestSecurityGroupsV21.test_create_security_group_with_no_security_group` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L477–L482` |
| `TestSecurityGroupsV21.test_create_security_group_above_255_characters_name` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L484–L489` |
| `TestSecurityGroupsV21.test_create_security_group_above_255_characters_description` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L491–L496` |
| `TestSecurityGroupsV21.test_get_security_group_list` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L498–L502` |
| `TestSecurityGroupsV21.test_get_security_group_list_offset_and_limit` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L504–L509` |
| `TestSecurityGroupsV21.test_get_security_group_list_missing_group_id_rule` | method | (self) | public | not declared | 2/35 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L511–L553` |
| `TestSecurityGroupsV21.test_get_security_group_by_instance` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L555–L568` |
| `TestSecurityGroupsV21.test_get_security_group_empty_for_instance` | method | (self, neutron_sg_bind_mock) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L572–L581` |
| `TestSecurityGroupsV21.test_get_security_group_by_instance_non_existing` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L583–L588` |
| `TestSecurityGroupsV21.test_get_security_group_by_id` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L590–L596` |
| `TestSecurityGroupsV21.test_get_security_group_by_invalid_id` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L598–L600` |
| `TestSecurityGroupsV21.test_get_security_group_by_non_existing_id` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L602–L604` |
| `TestSecurityGroupsV21.test_update_default_security_group_fail` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L606–L610` |
| `TestSecurityGroupsV21.test_delete_security_group_by_id` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L612–L616` |
| `TestSecurityGroupsV21.test_delete_security_group_by_admin` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L618–L622` |
| `TestSecurityGroupsV21.test_delete_security_group_by_invalid_id` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L624–L626` |
| `TestSecurityGroupsV21.test_delete_security_group_by_non_existing_id` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L628–L630` |
| `TestSecurityGroupsV21.test_delete_security_group_in_use` | method | (self, refresh_info_cache_mock) | public | not declared | 1/17 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L633–L650` |
| `TestSecurityGroupsV21._test_list_with_invalid_filter` | method | (self, url, expected_exception=exception.ValidationError) | private | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L652–L657` |
| `TestSecurityGroupsV21.test_list_with_invalid_non_int_limit` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L659–L660` |
| `TestSecurityGroupsV21.test_list_with_invalid_string_limit` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L662–L663` |
| `TestSecurityGroupsV21.test_list_duplicate_query_with_invalid_string_limit` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L665–L667` |
| `TestSecurityGroupsV21.test_list_with_invalid_non_int_offset` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L669–L670` |
| `TestSecurityGroupsV21.test_list_with_invalid_string_offset` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L672–L673` |
| `TestSecurityGroupsV21.test_list_duplicate_query_with_invalid_string_offset` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L675–L677` |
| `TestSecurityGroupsV21.test_list_duplicate_query_parameters_validation` | method | (self) | public | not declared | 2/11 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L679–L690` |
| `TestSecurityGroupsV21.test_list_with_additional_filter` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L692–L695` |
| `TestSecurityGroupsV21.test_list_all_tenants_filter_as_string` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L697–L700` |
| `TestSecurityGroupsV21.test_list_all_tenants_filter_as_positive_int` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L702–L705` |
| `TestSecurityGroupsV21.test_list_all_tenants_filter_as_negative_int` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L707–L710` |
| `TestSecurityGroupsV21.test_associate_by_non_existing_security_group_name` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L712–L717` |
| `TestSecurityGroupsV21.test_associate_without_body` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L719–L724` |
| `TestSecurityGroupsV21.test_associate_no_security_group_name` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L726–L731` |
| `TestSecurityGroupsV21.test_associate_security_group_name_with_whitespaces` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L733–L738` |
| `TestSecurityGroupsV21.test_associate_non_existing_instance` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L740–L747` |
| `TestSecurityGroupsV21.test_associate_duplicate_names` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L749–L765` |
| `TestSecurityGroupsV21.test_associate_port_security_enabled_true` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L767–L779` |
| `TestSecurityGroupsV21.test_associate_port_security_enabled_false` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L781–L794` |
| `TestSecurityGroupsV21.test_associate_deferred_ip_port` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L796–L808` |
| `TestSecurityGroupsV21.test_associate` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L810–L821` |
| `TestSecurityGroupsV21.test_disassociate_by_non_existing_security_group_name` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L823–L830` |
| `TestSecurityGroupsV21.test_disassociate_without_body` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L832–L837` |
| `TestSecurityGroupsV21.test_disassociate_no_security_group_name` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L839–L844` |
| `TestSecurityGroupsV21.test_disassociate_security_group_name_with_whitespaces` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L846–L851` |
| `TestSecurityGroupsV21.test_disassociate_non_existing_instance` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L853–L860` |
| `TestSecurityGroupsV21.test_disassociate` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L862–L873` |
| `TestSecurityGroupsV21.test_get_instances_security_groups_bindings` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L875–L894` |
| `TestSecurityGroupsV21.test_get_instance_security_groups` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L896–L912` |
| `TestSecurityGroupsV21.test_create_port_with_sg_and_port_security_enabled_true` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L914–L924` |
| `TestSecurityGroupsV21.test_create_port_with_sg_and_port_security_enabled_false` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L926–L934` |
| `TestSecurityGroupRulesV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L937–L1415` |
| `TestSecurityGroupRulesV21.secgrp_ctl_cls` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L938–L938` |
| `TestSecurityGroupRulesV21.setUp` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L940–L963` |
| `TestSecurityGroupRulesV21.tearDown` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L965–L968` |
| `TestSecurityGroupRulesV21.test_create_by_cidr` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L970–L981` |
| `TestSecurityGroupRulesV21.test_create_by_group_id` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L983–L993` |
| `TestSecurityGroupRulesV21.test_create_by_same_group_id` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L995–L1013` |
| `TestSecurityGroupRulesV21.test_create_none_value_from_to_port` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1015–L1025` |
| `TestSecurityGroupRulesV21.test_create_none_value_from_to_port_icmp` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1027–L1039` |
| `TestSecurityGroupRulesV21.test_create_none_value_from_to_port_tcp` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1041–L1053` |
| `TestSecurityGroupRulesV21.test_create_by_invalid_cidr_json` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1055–L1064` |
| `TestSecurityGroupRulesV21.test_create_by_invalid_tcp_port_json` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1066–L1076` |
| `TestSecurityGroupRulesV21.test_create_by_invalid_icmp_port_json` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1078–L1087` |
| `TestSecurityGroupRulesV21.test_create_add_existing_rules_by_cidr` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1089–L1099` |
| `TestSecurityGroupRulesV21.test_create_add_existing_rules_by_group_id` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1101–L1111` |
| `TestSecurityGroupRulesV21.test_create_with_no_body` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1113–L1116` |
| `TestSecurityGroupRulesV21.test_create_with_no_security_group_rule_in_body` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1118–L1122` |
| `TestSecurityGroupRulesV21.test_create_with_invalid_parent_group_id` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1124–L1130` |
| `TestSecurityGroupRulesV21.test_create_with_non_existing_parent_group_id` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1132–L1138` |
| `TestSecurityGroupRulesV21.test_create_with_non_existing_group_id` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1140–L1146` |
| `TestSecurityGroupRulesV21.test_create_with_invalid_protocol` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1148–L1155` |
| `TestSecurityGroupRulesV21.test_create_with_no_protocol` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1157–L1164` |
| `TestSecurityGroupRulesV21.test_create_with_invalid_from_port` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1166–L1173` |
| `TestSecurityGroupRulesV21.test_create_with_invalid_to_port` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1175–L1182` |
| `TestSecurityGroupRulesV21.test_create_with_non_numerical_from_port` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1184–L1191` |
| `TestSecurityGroupRulesV21.test_create_with_non_numerical_to_port` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1193–L1200` |
| `TestSecurityGroupRulesV21.test_create_with_no_from_port` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1202–L1209` |
| `TestSecurityGroupRulesV21.test_create_with_no_to_port` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1211–L1218` |
| `TestSecurityGroupRulesV21.test_create_with_invalid_cidr` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1220–L1226` |
| `TestSecurityGroupRulesV21.test_create_with_no_cidr_group` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1228–L1239` |
| `TestSecurityGroupRulesV21.test_create_with_invalid_group_id` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1241–L1247` |
| `TestSecurityGroupRulesV21.test_create_with_empty_group_id` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1249–L1255` |
| `TestSecurityGroupRulesV21.test_create_with_nonexist_group_id` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1257–L1263` |
| `TestSecurityGroupRulesV21.test_create_with_same_group_parent_id_and_group_id` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1265–L1275` |
| `TestSecurityGroupRulesV21._test_create_with_no_ports_and_no_group` | method | (self, proto) | private | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1277–L1282` |
| `TestSecurityGroupRulesV21._test_create_with_no_ports` | method | (self, proto) | private | not declared | 2/15 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1284–L1299` |
| `TestSecurityGroupRulesV21.test_create_with_no_ports_icmp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1301–L1303` |
| `TestSecurityGroupRulesV21.test_create_with_no_ports_tcp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1305–L1307` |
| `TestSecurityGroupRulesV21.test_create_with_no_ports_udp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1309–L1311` |
| `TestSecurityGroupRulesV21._test_create_with_ports` | method | (self, proto, from_port, to_port) | private | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1313–L1331` |
| `TestSecurityGroupRulesV21.test_create_with_ports_icmp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1333–L1336` |
| `TestSecurityGroupRulesV21.test_create_with_ports_tcp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1338–L1341` |
| `TestSecurityGroupRulesV21.test_create_with_ports_udp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1343–L1346` |
| `TestSecurityGroupRulesV21.test_delete` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1348–L1357` |
| `TestSecurityGroupRulesV21.test_delete_invalid_rule_id` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1359–L1361` |
| `TestSecurityGroupRulesV21.test_delete_non_existing_rule_id` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1363–L1365` |
| `TestSecurityGroupRulesV21.test_create_rule_cidr_allow_all` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1367–L1379` |
| `TestSecurityGroupRulesV21.test_create_rule_cidr_ipv6_allow_all` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1381–L1393` |
| `TestSecurityGroupRulesV21.test_create_rule_cidr_allow_some` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1395–L1407` |
| `TestSecurityGroupRulesV21.test_create_rule_cidr_bad_netmask` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1409–L1415` |
| `UUID1` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1418–L1418` |
| `UUID2` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1419–L1419` |
| `UUID3` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1420–L1420` |
| `fake_compute_get_all` | function | (*args, **kwargs) | exported | `objects.InstanceList(objects=inst_list)` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1438) | 1/15 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1423–L1438` |
| `fake_compute_get` | function | (*args, **kwargs) | exported | `inst` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1449) | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1441–L1449` |
| `fake_compute_create` | function | (*args, **kwargs) | exported | `([fake_compute_get(*args, **kwargs)], '')` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1453) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1452–L1453` |
| `SecurityGroupsOutputTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1456–L1595` |
| `SecurityGroupsOutputTest.content_type` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1457–L1457` |
| `SecurityGroupsOutputTest.setUp` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1459–L1473` |
| `SecurityGroupsOutputTest.tearDown` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1475–L1478` |
| `SecurityGroupsOutputTest._fake_get_instances_security_groups_bindings` | method | (inst, context, servers) | private | `result` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1491) | 2/12 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1480–L1491` |
| `SecurityGroupsOutputTest._make_request` | method | (self, url, body=None) | private | `res` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1504) | 2/9 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1493–L1504` |
| `SecurityGroupsOutputTest._encode_body` | method | (self, body) | private | `jsonutils.dumps(body)` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1507) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1506–L1507` |
| `SecurityGroupsOutputTest._get_server` | method | (self, body) | private | `jsonutils.loads(body).get('server')` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1510) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1509–L1510` |
| `SecurityGroupsOutputTest._get_servers` | method | (self, body) | private | `jsonutils.loads(body).get('servers')` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1513) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1512–L1513` |
| `SecurityGroupsOutputTest._get_groups` | method | (self, server) | private | `server.get('security_groups')` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1516) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1515–L1516` |
| `SecurityGroupsOutputTest.test_create` | method | (self) | public | not declared | 3/16 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1518–L1534` |
| `SecurityGroupsOutputTest.test_create_server_get_default_security_group` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1536–L1544` |
| `SecurityGroupsOutputTest.test_show` | method | (self) | public | not declared | 4/27 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1546–L1577` |
| `SecurityGroupsOutputTest.test_detail` | method | (self) | public | not declared | 3/8 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1579–L1587` |
| `SecurityGroupsOutputTest.test_no_instance_passthrough_404` | method | (self, mock_get) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1591–L1595` |
| `TestSecurityGroupsDeprecation` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1598–L1615` |
| `TestSecurityGroupsDeprecation.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1600–L1603` |
| `TestSecurityGroupsDeprecation.test_all_apis_return_not_found` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1605–L1615` |
| `TestSecurityGroupRulesDeprecation` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1618–L1629` |
| `TestSecurityGroupRulesDeprecation.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1620–L1623` |
| `TestSecurityGroupRulesDeprecation.test_all_apis_return_not_found` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1625–L1629` |

## Dependencies

- `neutronclient.common`: imports `exceptions as n_exc` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L17)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L19)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L20)
- `oslo_utils`: imports `encodeutils` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L21)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L22)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L23)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L24)
- `nova.api.openstack.compute`: imports `security_groups as secgroups_v21` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L26)
- `nova`: imports `context as context_maker` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L27)
- `import nova.db.main.api` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L28)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L29)
- `nova.network`: imports `model` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L30)
- `nova.network`: imports `neutron as neutron_api` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L31)
- `nova.network`: imports `security_group_api` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L32)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L33)
- `nova.objects`: imports `instance as instance_obj` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L34)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L35)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L36)

## Side Effects

- **network**: from nova.api.openstack.compute import security_groups as secgroups_v21 (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L26)
- **global-mutation**: CONF = cfg.CONF (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L38)
- **global-mutation**: FAKE_UUID1 = 'a47ae74e-ab08-447f-8eee-ffd43fc46c16' (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L39)
- **global-mutation**: FAKE_UUID2 = 'c6e6430a-6563-4efa-9542-5e93c9e97d18' (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L40)
- **global-mutation**: UUID_SERVER = uuids.server (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L41)
- **global-mutation**: UUID1 = '00000000-0000-0000-0000-000000000001' (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1418)
- **global-mutation**: UUID2 = '00000000-0000-0000-0000-000000000002' (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1419)
- **global-mutation**: UUID3 = '00000000-0000-0000-0000-000000000003' (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1420)

## Security Surface

- **sink** (`db-write`): self._fake_ports[port].update(body['port']) (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L339)
- **sink** (`db-write`): self.assertRaises(webob.exc.HTTPBadRequest, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L609)
- **sink** (`db-write`): self.controller.update, self.req, fakes.FAKE_UUID, body={}) (src/nova/tests/unit/api/openstack/compute/test_security_groups.py:L1613)

