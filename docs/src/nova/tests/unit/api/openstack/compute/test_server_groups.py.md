# src/nova/tests/unit/api/openstack/compute/test_server_groups.py

## Overview

This file implements the `test_server_groups` module, defining 5 classs, 1 constant, 5 fields, 7 functions, 65 methods, 14 imports, 2 side effects.

Lines: total 828, code 642, comment 58, blank 128

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `AttrDict` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L34–L36` |
| `AttrDict.__getattr__` | method | (self, k) | public | `self[k]` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L36) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L35–L36` |
| `server_group_template` | function | (**kwargs) | exported | `sgroup` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L42) | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L39–L42` |
| `server_group_resp_template` | function | (**kwargs) | exported | `sgroup` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L51) | 2/7 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L45–L51` |
| `server_group_db` | function | (sg) | exported | `AttrDict(attrs)` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L80) | 7/26 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L54–L80` |
| `ServerGroupTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L83–L661` |
| `ServerGroupTestV21.USES_DB_SELF` | constant | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L84–L84` |
| `ServerGroupTestV21.validation_error` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L85–L85` |
| `ServerGroupTestV21.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L86–L86` |
| `ServerGroupTestV21.setUp` | method | (self) | public | not declared | 2/22 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L88–L111` |
| `ServerGroupTestV21._setup_controller` | method | (self) | private | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L113–L114` |
| `ServerGroupTestV21.test_create_server_group_with_no_policies` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L116–L119` |
| `ServerGroupTestV21._create_server_group_normal` | method | (self, policies=None, policy=None, rules=None) | private | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L121–L129` |
| `ServerGroupTestV21.test_create_server_group_with_new_policy_before_264` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L131–L152` |
| `ServerGroupTestV21.test_create_server_group` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L154–L157` |
| `ServerGroupTestV21.test_create_server_group_rbac_default` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L159–L167` |
| `ServerGroupTestV21._create_instance` | method | (self, ctx, cell) | private | `instance` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L186) | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L169–L186` |
| `ServerGroupTestV21._create_instance_group` | method | (self, context, members) | private | `ig.uuid` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L193) | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L188–L193` |
| `ServerGroupTestV21._create_groups_and_instances` | method | (self, ctx) | private | `(ig_uuid, instances, members)` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L203) | 2/9 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L195–L203` |
| `ServerGroupTestV21._test_list_server_group_all` | method | (self, api_version='2.1') | private | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L205–L208` |
| `ServerGroupTestV21._test_list_server_group_offset_and_limit` | method | (self, api_version='2.1') | private | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L210–L213` |
| `ServerGroupTestV21._test_list_server_group` | method | (self, mock_get_all, mock_get_by_project, path, api_version='2.1', limited=None) | private | not declared | 6/73 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L217–L305` |
| `ServerGroupTestV21._test_list_server_group.return_all_server_groups` | function | — | public | `objects.InstanceGroupList( objects=[objects.InstanceGroup( **server_group_db(sg)) for sg in all_groups])` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L279) | — | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L278–L281` |
| `ServerGroupTestV21._test_list_server_group.return_tenant_server_groups` | function | — | public | `objects.InstanceGroupList( objects=[objects.InstanceGroup( **server_group_db(sg)) for sg in tenant_groups])` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L286) | — | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L285–L288` |
| `ServerGroupTestV21._test_list_server_group_by_tenant` | method | (self, mock_get_by_project, api_version='2.1') | private | not declared | 2/43 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L308–L355` |
| `ServerGroupTestV21._test_list_server_group_by_tenant.return_server_groups` | function | — | public | `objects.InstanceGroupList( objects=[objects.InstanceGroup( **server_group_db(sg)) for sg in groups])` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L346) | — | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L345–L348` |
| `ServerGroupTestV21.test_display_members` | method | (self) | public | not declared | 2/8 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L357–L364` |
| `ServerGroupTestV21.test_display_members_with_nonexistent_group` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L366–L369` |
| `ServerGroupTestV21.test_display_active_members_only` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L371–L391` |
| `ServerGroupTestV21.test_display_active_members_only_when_listing` | method | (self) | public | not declared | 3/24 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L393–L422` |
| `ServerGroupTestV21.test_display_members_rbac_default` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L424–L436` |
| `ServerGroupTestV21.test_create_server_group_with_non_alphanumeric_in_name` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L438–L447` |
| `ServerGroupTestV21.test_create_server_group_with_illegal_name` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L449–L494` |
| `ServerGroupTestV21.test_create_server_group_with_illegal_policies` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L496–L515` |
| `ServerGroupTestV21.test_create_server_group_conflicting_policies` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L517–L522` |
| `ServerGroupTestV21.test_create_server_group_with_duplicate_policies` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L524–L529` |
| `ServerGroupTestV21.test_create_server_group_not_supported` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L531–L536` |
| `ServerGroupTestV21.test_create_server_group_with_no_body` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L538–L540` |
| `ServerGroupTestV21.test_create_server_group_with_no_server_group` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L542–L545` |
| `ServerGroupTestV21.test_list_server_group_by_tenant` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L547–L549` |
| `ServerGroupTestV21.test_list_server_group_all_v20` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L551–L552` |
| `ServerGroupTestV21.test_list_server_group_all` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L554–L556` |
| `ServerGroupTestV21.test_list_server_group_offset_and_limit` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L558–L560` |
| `ServerGroupTestV21.test_list_server_groups_rbac_default` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L562–L567` |
| `ServerGroupTestV21.test_list_server_group_multiple_param` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L569–L572` |
| `ServerGroupTestV21.test_list_server_group_additional_param` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L574–L577` |
| `ServerGroupTestV21.test_list_server_group_param_as_int` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L579–L582` |
| `ServerGroupTestV21.test_list_server_group_negative_int_as_offset` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L584–L589` |
| `ServerGroupTestV21.test_list_server_group_string_int_as_offset` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L591–L596` |
| `ServerGroupTestV21.test_list_server_group_multiparam_string_as_offset` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L598–L603` |
| `ServerGroupTestV21.test_list_server_group_negative_int_as_limit` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L605–L610` |
| `ServerGroupTestV21.test_list_server_group_string_int_as_limit` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L612–L617` |
| `ServerGroupTestV21.test_list_server_group_multiparam_string_as_limit` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L619–L624` |
| `ServerGroupTestV21.test_delete_server_group_by_id` | method | (self, mock_destroy) | public | not declared | 2/12 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L627–L646` |
| `ServerGroupTestV21.test_delete_server_group_by_id.return_server_group` | function | (_cls, context, group_id) | public | `objects.InstanceGroup(**server_group_db(sg))` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L632) | — | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L630–L632` |
| `ServerGroupTestV21.test_delete_non_existing_server_group` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L648–L650` |
| `ServerGroupTestV21.test_delete_server_group_rbac_default` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L652–L661` |
| `ServerGroupTestV213` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L664–L677` |
| `ServerGroupTestV213.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L665–L665` |
| `ServerGroupTestV213._setup_controller` | method | (self) | private | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L667–L668` |
| `ServerGroupTestV213.test_list_server_group_all` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L670–L671` |
| `ServerGroupTestV213.test_list_server_group_offset_and_limit` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L673–L674` |
| `ServerGroupTestV213.test_list_server_group_by_tenant` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L676–L677` |
| `ServerGroupTestV264` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L680–L813` |
| `ServerGroupTestV264.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L681–L681` |
| `ServerGroupTestV264._setup_controller` | method | (self) | private | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L683–L684` |
| `ServerGroupTestV264._create_server_group_normal` | method | (self, policies=None, policy=None, rules=None) | private | `res_dict['server_group']['id']` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L698) | 3/13 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L686–L698` |
| `ServerGroupTestV264.test_list_server_group_all` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L700–L701` |
| `ServerGroupTestV264.test_create_and_show_server_group` | method | (self) | public | not declared | 2/8 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L703–L710` |
| `ServerGroupTestV264._display_server_group` | method | (self, uuid) | private | `group` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L715) | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L712–L715` |
| `ServerGroupTestV264.test_create_and_show_server_group_with_rules` | method | (self, mock_get_v) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L719–L726` |
| `ServerGroupTestV264.test_create_affinity_server_group_with_invalid_policy` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L728–L734` |
| `ServerGroupTestV264.test_create_anti_affinity_server_group_with_invalid_rules` | method | (self) | public | not declared | 2/13 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L736–L751` |
| `ServerGroupTestV264.test_create_server_group_with_low_version_compute_service` | method | (self, mock_get_v) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L755–L765` |
| `ServerGroupTestV264.test_create_server_group` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L767–L770` |
| `ServerGroupTestV264.test_policies_since_264` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L772–L778` |
| `ServerGroupTestV264.test_create_server_group_without_policy` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L780–L785` |
| `ServerGroupTestV264.test_create_server_group_with_illegal_policies` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L787–L807` |
| `ServerGroupTestV264.test_additional_params` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L809–L813` |
| `ServerGroupTestV275` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L816–L828` |
| `ServerGroupTestV275.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L817–L817` |
| `ServerGroupTestV275.test_list_server_group_additional_param_old_version` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L819–L822` |
| `ServerGroupTestV275.test_list_server_group_additional_param` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L824–L828` |

## Dependencies

- `import copy` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L16)
- `import itertools` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L17)
- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L18)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L20)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L21)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L22)
- `nova.api.openstack`: imports `api_version_request as avr` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L24)
- `nova.api.openstack.compute`: imports `server_groups as sg_v21` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L25)
- `nova`: imports `context` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L26)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L27)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L28)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L29)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L30)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L31)

## Side Effects

- **network**: from nova.api.openstack.compute import server_groups as sg_v21 (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L25)
- **global-mutation**: USES_DB_SELF = True (src/nova/tests/unit/api/openstack/compute/test_server_groups.py:L84)

