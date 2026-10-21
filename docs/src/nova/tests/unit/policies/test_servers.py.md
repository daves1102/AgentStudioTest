# src/nova/tests/unit/policies/test_servers.py

## Overview

This file implements the `test_servers` module, defining 2 classs, 1 constant, 2 fields, 14 functions, 61 methods, 24 imports, 4 side effects, 15 security surface entries.

Lines: total 1416, code 1135, comment 139, blank 142

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/policies/test_servers.py:L40–L40` |
| `fake_add_security_grps` | function | (req, servers, instances, create_request=False) | exported | not declared | 2/5 | `src/nova/tests/unit/policies/test_servers.py:L43–L48` |
| `ServersPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_servers.py:L51–L1376` |
| `ServersPolicyTest.setUp` | method | (self) | public | not declared | 1/101 | `src/nova/tests/unit/policies/test_servers.py:L59–L189` |
| `ServersPolicyTest.test_index_server_policy` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/policies/test_servers.py:L191–L210` |
| `ServersPolicyTest.test_index_server_policy.fake_get_all` | function | (context, search_opts=None, limit=None, marker=None, expected_attrs=None, sort_keys=None, sort_dirs=None, cell_down_support=False, all_tenants=False) | public | `objects.InstanceList(objects=self.servers)` (src/nova/tests/unit/policies/test_servers.py:L199) | — | `src/nova/tests/unit/policies/test_servers.py:L193–L201` |
| `ServersPolicyTest.test_index_all_project_server_policy` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/policies/test_servers.py:L212–L237` |
| `ServersPolicyTest.test_index_all_project_server_policy.fake_get_all` | function | (context, search_opts=None, limit=None, marker=None, expected_attrs=None, sort_keys=None, sort_dirs=None, cell_down_support=False, all_tenants=False) | public | `objects.InstanceList(objects=self.servers)` (src/nova/tests/unit/policies/test_servers.py:L227) | — | `src/nova/tests/unit/policies/test_servers.py:L221–L227` |
| `ServersPolicyTest.test_detail_list_server_policy` | method | (self, mock_get) | public | not declared | 1/9 | `src/nova/tests/unit/policies/test_servers.py:L240–L259` |
| `ServersPolicyTest.test_detail_list_server_policy.fake_get_all` | function | (context, search_opts=None, limit=None, marker=None, expected_attrs=None, sort_keys=None, sort_dirs=None, cell_down_support=False, all_tenants=False) | public | `objects.InstanceList(objects=self.servers)` (src/nova/tests/unit/policies/test_servers.py:L248) | — | `src/nova/tests/unit/policies/test_servers.py:L242–L250` |
| `ServersPolicyTest.test_detail_list_all_project_server_policy` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/policies/test_servers.py:L261–L286` |
| `ServersPolicyTest.test_detail_list_all_project_server_policy.fake_get_all` | function | (context, search_opts=None, limit=None, marker=None, expected_attrs=None, sort_keys=None, sort_dirs=None, cell_down_support=False, all_tenants=False) | public | `objects.InstanceList(objects=self.servers)` (src/nova/tests/unit/policies/test_servers.py:L276) | — | `src/nova/tests/unit/policies/test_servers.py:L270–L276` |
| `ServersPolicyTest.test_index_server_allow_all_filters_policy` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/policies/test_servers.py:L288–L314` |
| `ServersPolicyTest.test_index_server_allow_all_filters_policy.fake_get_all` | function | (context, search_opts=None, limit=None, marker=None, expected_attrs=None, sort_keys=None, sort_dirs=None, cell_down_support=False, all_tenants=False) | public | `objects.InstanceList(objects=self.servers)` (src/nova/tests/unit/policies/test_servers.py:L304) | — | `src/nova/tests/unit/policies/test_servers.py:L295–L304` |
| `ServersPolicyTest.test_detail_server_allow_all_filters_policy` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/policies/test_servers.py:L316–L341` |
| `ServersPolicyTest.test_detail_server_allow_all_filters_policy.fake_get_all` | function | (context, search_opts=None, limit=None, marker=None, expected_attrs=None, sort_keys=None, sort_dirs=None, cell_down_support=False, all_tenants=False) | public | `objects.InstanceList(objects=self.servers)` (src/nova/tests/unit/policies/test_servers.py:L332) | — | `src/nova/tests/unit/policies/test_servers.py:L323–L332` |
| `ServersPolicyTest.test_show_server_policy` | method | (self, mock_bdm) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_servers.py:L344–L351` |
| `ServersPolicyTest.test_server_show_with_extra_specs_policy` | method | (self, mock_get, mock_block) | public | not declared | 3/13 | `src/nova/tests/unit/policies/test_servers.py:L356–L371` |
| `ServersPolicyTest.test_server_detail_with_extra_specs_policy` | method | (self, mock_get) | public | not declared | 3/15 | `src/nova/tests/unit/policies/test_servers.py:L374–L401` |
| `ServersPolicyTest.test_server_detail_with_extra_specs_policy.fake_get_all` | function | (context, search_opts=None, limit=None, marker=None, expected_attrs=None, sort_keys=None, sort_dirs=None, cell_down_support=False, all_tenants=False) | public | `objects.InstanceList(objects=self.servers)` (src/nova/tests/unit/policies/test_servers.py:L382) | — | `src/nova/tests/unit/policies/test_servers.py:L376–L384` |
| `ServersPolicyTest.test_server_rebuild_with_extra_specs_policy` | method | (self, mock_rebuild, mock_get, mock_bdm) | public | not declared | 3/16 | `src/nova/tests/unit/policies/test_servers.py:L406–L424` |
| `ServersPolicyTest.test_server_update_with_extra_specs_policy` | method | (self, mock_update, mock_group, mock_bdm) | public | not declared | 3/20 | `src/nova/tests/unit/policies/test_servers.py:L429–L452` |
| `ServersPolicyTest.test_create_server_policy` | method | (self, mock_create) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_servers.py:L455–L461` |
| `ServersPolicyTest.test_create_forced_host_server_policy` | method | (self, mock_az, mock_create) | public | not declared | 1/11 | `src/nova/tests/unit/policies/test_servers.py:L468–L481` |
| `ServersPolicyTest.test_create_attach_volume_server_policy` | method | (self, mock_create) | public | not declared | 1/18 | `src/nova/tests/unit/policies/test_servers.py:L484–L504` |
| `ServersPolicyTest.test_create_attach_network_server_policy` | method | (self, mock_create) | public | not declared | 1/20 | `src/nova/tests/unit/policies/test_servers.py:L507–L530` |
| `ServersPolicyTest.test_create_trusted_certs_server_policy` | method | (self, mock_create) | public | not declared | 1/22 | `src/nova/tests/unit/policies/test_servers.py:L533–L559` |
| `ServersPolicyTest.test_delete_server_policy` | method | (self, mock_delete) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_servers.py:L562–L567` |
| `ServersPolicyTest.test_delete_server_policy_failed_with_other_user` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/policies/test_servers.py:L569–L581` |
| `ServersPolicyTest.test_delete_server_overridden_policy_pass_with_same_user` | method | (self, mock_delete) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_servers.py:L584–L590` |
| `ServersPolicyTest.test_update_server_policy` | method | (self, mock_update) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_servers.py:L593–L601` |
| `ServersPolicyTest.test_update_server_policy_failed_with_other_user` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/policies/test_servers.py:L603–L616` |
| `ServersPolicyTest.test_update_server_overridden_policy_pass_with_same_user` | method | (self, mock_update) | public | not declared | 1/10 | `src/nova/tests/unit/policies/test_servers.py:L619–L629` |
| `ServersPolicyTest.test_confirm_resize_server_policy` | method | (self, mock_confirm_resize) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_servers.py:L632–L639` |
| `ServersPolicyTest.test_revert_resize_server_policy` | method | (self, mock_revert_resize) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_servers.py:L642–L649` |
| `ServersPolicyTest.test_reboot_server_policy` | method | (self, mock_reboot) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_servers.py:L652–L659` |
| `ServersPolicyTest.test_resize_server_policy` | method | (self, mock_resize) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_servers.py:L662–L668` |
| `ServersPolicyTest.test_resize_server_policy_failed_with_other_user` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/policies/test_servers.py:L670–L683` |
| `ServersPolicyTest.test_resize_server_overridden_policy_pass_with_same_user` | method | (self, mock_resize) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_servers.py:L686–L693` |
| `ServersPolicyTest.test_start_policy` | method | (self, mock_start) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_servers.py:L696–L703` |
| `ServersPolicyTest.test_stop_policy` | method | (self, mock_stop) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_servers.py:L706–L713` |
| `ServersPolicyTest.test_stop_policy_failed_with_other_user` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/policies/test_servers.py:L715–L728` |
| `ServersPolicyTest.test_stop_overridden_policy_pass_with_same_user` | method | (self, mock_stop) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_servers.py:L731–L738` |
| `ServersPolicyTest.test_rebuild_server_policy` | method | (self, mock_rebuild) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_servers.py:L741–L747` |
| `ServersPolicyTest.test_rebuild_server_policy_failed_with_other_user` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/policies/test_servers.py:L749–L762` |
| `ServersPolicyTest.test_rebuild_server_overridden_policy_pass_with_same_user` | method | (self, mock_rebuild) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_servers.py:L765–L772` |
| `ServersPolicyTest.test_rebuild_trusted_certs_server_policy` | method | (self, mock_rebuild) | public | not declared | 1/17 | `src/nova/tests/unit/policies/test_servers.py:L775–L796` |
| `ServersPolicyTest.test_rebuild_trusted_certs_policy_failed_with_other_user` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/policies/test_servers.py:L798–L819` |
| `ServersPolicyTest.test_rebuild_trusted_certs_overridden_policy_pass_with_same_user` | method | (self, mock_rebuild) | public | not declared | 1/16 | `src/nova/tests/unit/policies/test_servers.py:L822–L837` |
| `ServersPolicyTest.test_create_image_server_policy` | method | (self, mock_snapshot, mock_image, mock_bdm) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_servers.py:L842–L849` |
| `ServersPolicyTest.test_create_image_allow_volume_backed_server_policy` | method | (self, mock_snapshot, mock_image, mock_bdm) | public | not declared | 1/12 | `src/nova/tests/unit/policies/test_servers.py:L854–L870` |
| `ServersPolicyTest.test_trigger_crash_dump_server_policy` | method | (self, mock_crash) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_servers.py:L873–L880` |
| `ServersPolicyTest.test_trigger_crash_dump_policy_failed_with_other_user` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/policies/test_servers.py:L882–L896` |
| `ServersPolicyTest.test_trigger_crash_dump_overridden_policy_pass_with_same_user` | method | (self, mock_crash) | public | not declared | 1/9 | `src/nova/tests/unit/policies/test_servers.py:L899–L907` |
| `ServersPolicyTest.test_server_detail_with_extended_attr_policy` | method | (self) | public | not declared | 4/16 | `src/nova/tests/unit/policies/test_servers.py:L909–L932` |
| `ServersPolicyTest.test_server_detail_with_extended_attr_policy.fake_get_all` | function | (context, search_opts=None, limit=None, marker=None, expected_attrs=None, sort_keys=None, sort_dirs=None, cell_down_support=False, all_tenants=False) | public | `objects.InstanceList(objects=self.servers)` (src/nova/tests/unit/policies/test_servers.py:L914) | — | `src/nova/tests/unit/policies/test_servers.py:L910–L914` |
| `ServersPolicyTest.test_server_show_with_extended_attr_policy` | method | (self, mock_get, mock_block) | public | not declared | 4/14 | `src/nova/tests/unit/policies/test_servers.py:L936–L952` |
| `ServersPolicyTest.test_server_rebuild_with_extended_attr_policy` | method | (self, mock_rebuild, mock_get, mock_bdm) | public | not declared | 5/19 | `src/nova/tests/unit/policies/test_servers.py:L958–L981` |
| `ServersPolicyTest.test_server_update_with_extended_attr_policy` | method | (self, mock_status, mock_update, mock_group, mock_bdm) | public | not declared | 4/22 | `src/nova/tests/unit/policies/test_servers.py:L987–L1012` |
| `ServersPolicyTest.test_server_detail_with_host_status_policy` | method | (self) | public | not declared | 3/15 | `src/nova/tests/unit/policies/test_servers.py:L1014–L1036` |
| `ServersPolicyTest.test_server_detail_with_host_status_policy.fake_get_all` | function | (context, search_opts=None, limit=None, marker=None, expected_attrs=None, sort_keys=None, sort_dirs=None, cell_down_support=False, all_tenants=False) | public | `objects.InstanceList(objects=self.servers)` (src/nova/tests/unit/policies/test_servers.py:L1019) | — | `src/nova/tests/unit/policies/test_servers.py:L1015–L1019` |
| `ServersPolicyTest.test_server_show_with_host_status_policy` | method | (self, mock_status, mock_block) | public | not declared | 3/15 | `src/nova/tests/unit/policies/test_servers.py:L1041–L1058` |
| `ServersPolicyTest.test_server_rebuild_with_host_status_policy` | method | (self, mock_rebuild, mock_status, mock_bdm) | public | not declared | 3/17 | `src/nova/tests/unit/policies/test_servers.py:L1064–L1083` |
| `ServersPolicyTest.test_server_update_with_host_status_policy` | method | (self, mock_status, mock_update, mock_group, mock_bdm) | public | not declared | 3/21 | `src/nova/tests/unit/policies/test_servers.py:L1089–L1113` |
| `ServersPolicyTest.test_server_detail_with_unknown_host_status_policy` | method | (self, mock_status) | public | not declared | 4/24 | `src/nova/tests/unit/policies/test_servers.py:L1116–L1147` |
| `ServersPolicyTest.test_server_detail_with_unknown_host_status_policy.fake_get_all` | function | (context, search_opts=None, limit=None, marker=None, expected_attrs=None, sort_keys=None, sort_dirs=None, cell_down_support=False, all_tenants=False) | public | `objects.InstanceList(objects=self.servers)` (src/nova/tests/unit/policies/test_servers.py:L1121) | — | `src/nova/tests/unit/policies/test_servers.py:L1117–L1121` |
| `ServersPolicyTest.test_server_show_with_unknown_host_status_policy` | method | (self, mock_status, mock_block) | public | not declared | 3/20 | `src/nova/tests/unit/policies/test_servers.py:L1151–L1174` |
| `ServersPolicyTest.test_server_rebuild_with_unknown_host_status_policy` | method | (self, mock_rebuild, mock_status, mock_bdm) | public | not declared | 3/22 | `src/nova/tests/unit/policies/test_servers.py:L1179–L1204` |
| `ServersPolicyTest.test_server_update_with_unknown_host_status_policy` | method | (self, mock_update, mock_group, mock_status, mock_bdm) | public | not declared | 3/26 | `src/nova/tests/unit/policies/test_servers.py:L1210–L1240` |
| `ServersPolicyTest.test_create_requested_destination_server_policy` | method | (self, mock_create) | public | not declared | 1/24 | `src/nova/tests/unit/policies/test_servers.py:L1243–L1279` |
| `ServersPolicyTest.test_create_requested_destination_server_policy.fake_create` | function | (context, *args, **kwargs) | public | `([self.instance], '')` (src/nova/tests/unit/policies/test_servers.py:L1260) | — | `src/nova/tests/unit/policies/test_servers.py:L1254–L1260` |
| `ServersPolicyTest.test_cross_cell_resize_server_policy` | method | (self, mock_resize, mock_save, mock_rs, mock_allow, m_net) | public | not declared | 1/19 | `src/nova/tests/unit/policies/test_servers.py:L1292–L1342` |
| `ServersPolicyTest.test_cross_cell_resize_server_policy.fake_get` | function | (*args, **kwargs) | public | `inst` (src/nova/tests/unit/policies/test_servers.py:L1321) | — | `src/nova/tests/unit/policies/test_servers.py:L1304–L1321` |
| `ServersPolicyTest.test_cross_cell_resize_server_policy.fake_validate` | function | (context, instance, host_name, allow_cross_cell_resize) | public | `objects.ComputeNode(host=1, hypervisor_hostname=2)` (src/nova/tests/unit/policies/test_servers.py:L1331) | — | `src/nova/tests/unit/policies/test_servers.py:L1325–L1331` |
| `ServersPolicyTest.test_network_attach_external_network_policy` | method | (self) | public | not declared | 3/11 | `src/nova/tests/unit/policies/test_servers.py:L1344–L1357` |
| `ServersPolicyTest.test_zero_disk_flavor_policy` | method | (self) | public | not declared | 3/15 | `src/nova/tests/unit/policies/test_servers.py:L1359–L1376` |
| `ServersNoLegacyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_servers.py:L1379–L1416` |
| `ServersNoLegacyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_servers.py:L1382–L1382` |
| `ServersNoLegacyTest.rules_without_deprecation` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_servers.py:L1383–L1386` |
| `ServersNoLegacyTest.setUp` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/policies/test_servers.py:L1388–L1416` |

## Dependencies

- `import functools` (src/nova/tests/unit/policies/test_servers.py:L13)
- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_servers.py:L14)
- `import fixtures` (src/nova/tests/unit/policies/test_servers.py:L16)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_servers.py:L17)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/policies/test_servers.py:L18)
- `nova.api.openstack.compute`: imports `migrate_server` (src/nova/tests/unit/policies/test_servers.py:L20)
- `nova.api.openstack.compute`: imports `servers` (src/nova/tests/unit/policies/test_servers.py:L21)
- `nova.compute`: imports `api as compute` (src/nova/tests/unit/policies/test_servers.py:L22)
- `nova.compute`: imports `power_state` (src/nova/tests/unit/policies/test_servers.py:L23)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_servers.py:L24)
- `import nova.conf` (src/nova/tests/unit/policies/test_servers.py:L25)
- `nova`: imports `exception` (src/nova/tests/unit/policies/test_servers.py:L26)
- `nova.network`: imports `model` (src/nova/tests/unit/policies/test_servers.py:L27)
- `nova.network`: imports `neutron` (src/nova/tests/unit/policies/test_servers.py:L28)
- `nova`: imports `objects` (src/nova/tests/unit/policies/test_servers.py:L29)
- `nova.objects`: imports `fields` (src/nova/tests/unit/policies/test_servers.py:L30)
- `nova.objects.instance_group`: imports `InstanceGroup` (src/nova/tests/unit/policies/test_servers.py:L31)
- `nova.policies`: imports `base as base_policy` (src/nova/tests/unit/policies/test_servers.py:L32)
- `nova.policies`: imports `extended_server_attributes as ea_policies` (src/nova/tests/unit/policies/test_servers.py:L33)
- `nova.policies`: imports `servers as policies` (src/nova/tests/unit/policies/test_servers.py:L34)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_servers.py:L35)
- `nova.tests.unit`: imports `fake_flavor` (src/nova/tests/unit/policies/test_servers.py:L36)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_servers.py:L37)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_servers.py:L38)

## Side Effects

- **network**: from nova.api.openstack.compute import migrate_server (src/nova/tests/unit/policies/test_servers.py:L20)
- **network**: from nova.api.openstack.compute import servers (src/nova/tests/unit/policies/test_servers.py:L21)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_servers.py:L97)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/policies/test_servers.py:L40)

## Security Surface

- **sink** (`db-write`): rule = policies.SERVERS % 'update' (src/nova/tests/unit/policies/test_servers.py:L436)
- **sink** (`db-write`): rule_name, self.controller.update, (src/nova/tests/unit/policies/test_servers.py:L445)
- **sink** (`db-write`): rule_name = policies.SERVERS % 'update' (src/nova/tests/unit/policies/test_servers.py:L595)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/policies/test_servers.py:L600)
- **sink** (`db-write`): rule_name = policies.SERVERS % 'update' (src/nova/tests/unit/policies/test_servers.py:L607)
- **sink** (`db-write`): exception.PolicyNotAuthorized, self.controller.update, (src/nova/tests/unit/policies/test_servers.py:L612)
- **sink** (`db-write`): rule_name = policies.SERVERS % 'update' (src/nova/tests/unit/policies/test_servers.py:L624)
- **sink** (`db-write`): self.controller.update(self.req, (src/nova/tests/unit/policies/test_servers.py:L628)
- **sink** (`db-write`): rule = policies.SERVERS % 'update' (src/nova/tests/unit/policies/test_servers.py:L995)
- **sink** (`db-write`): rule_name, self.controller.update, (src/nova/tests/unit/policies/test_servers.py:L1004)
- **sink** (`db-write`): rule = policies.SERVERS % 'update' (src/nova/tests/unit/policies/test_servers.py:L1097)
- **sink** (`db-write`): rule_name, self.controller.update, (src/nova/tests/unit/policies/test_servers.py:L1106)
- **sink** (`db-write`): host_statuses.update({server.uuid: fields.HostStatus.UNKNOWN}) (src/nova/tests/unit/policies/test_servers.py:L1125)
- **sink** (`db-write`): rule = policies.SERVERS % 'update' (src/nova/tests/unit/policies/test_servers.py:L1218)
- **sink** (`db-write`): rule_name, self.controller.update, (src/nova/tests/unit/policies/test_servers.py:L1231)

