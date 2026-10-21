# src/nova/tests/functional/api_sample_tests/test_security_groups.py

## Overview

This file implements the `test_security_groups` module, defining 1 class, 1 field, 10 functions, 12 methods, 3 imports.

Lines: total 174, code 121, comment 17, blank 36

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_get` | function | (*args, **kwargs) | exported | `nova_group` (src/nova/tests/functional/api_sample_tests/test_security_groups.py:L29) | 1/8 | `src/nova/tests/functional/api_sample_tests/test_security_groups.py:L22–L29` |
| `fake_get_instances_security_groups_bindings` | function | (context, servers, detailed=False) | exported | `result` (src/nova/tests/functional/api_sample_tests/test_security_groups.py:L37) | 2/6 | `src/nova/tests/functional/api_sample_tests/test_security_groups.py:L32–L37` |
| `fake_add_to_instance` | function | (context, instance, security_group_name) | exported | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_security_groups.py:L40–L41` |
| `fake_remove_from_instance` | function | (context, instance, security_group_name) | exported | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_security_groups.py:L44–L45` |
| `fake_list` | function | (context, names=None, ids=None, project=None, search_opts=None) | exported | `[fake_get()]` (src/nova/tests/functional/api_sample_tests/test_security_groups.py:L49) | 1/2 | `src/nova/tests/functional/api_sample_tests/test_security_groups.py:L48–L49` |
| `fake_get_instance_security_groups` | function | (context, instance_uuid, detailed=False) | exported | `[fake_get()]` (src/nova/tests/functional/api_sample_tests/test_security_groups.py:L53) | 1/2 | `src/nova/tests/functional/api_sample_tests/test_security_groups.py:L52–L53` |
| `fake_create_security_group` | function | (context, name, description) | exported | `fake_get()` (src/nova/tests/functional/api_sample_tests/test_security_groups.py:L57) | 1/2 | `src/nova/tests/functional/api_sample_tests/test_security_groups.py:L56–L57` |
| `fake_create_security_group_rule` | function | (context, security_group, new_rule) | exported | `{ 'from_port': 22, 'to_port': 22, 'cidr': '10.0.0.0/24', 'id': uuids.security_group_rule, 'parent_group_id': 'd6f86d8c-06ef-4bef-8e7c-8bf8f9ba9b7a', 'protocol': 'tcp', 'group_id': None }` (src/nova/tests/functional/api_sample_tests/test_security_groups.py:L61) | 1/10 | `src/nova/tests/functional/api_sample_tests/test_security_groups.py:L60–L69` |
| `fake_remove_rules` | function | (context, security_group, rule_ids) | exported | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_security_groups.py:L72–L73` |
| `fake_get_rule` | function | (context, id) | exported | `{ 'id': id, 'parent_group_id': 'd6f86d8c-06ef-4bef-8e7c-8bf8f9ba9b7a' }` (src/nova/tests/functional/api_sample_tests/test_security_groups.py:L77) | 1/5 | `src/nova/tests/functional/api_sample_tests/test_security_groups.py:L76–L80` |
| `SecurityGroupsJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_security_groups.py:L83–L174` |
| `SecurityGroupsJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_security_groups.py:L84–L84` |
| `SecurityGroupsJsonTest.setUp` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/api_sample_tests/test_security_groups.py:L86–L102` |
| `SecurityGroupsJsonTest._get_create_subs` | method | (self) | private | `{ 'group_name': 'default', "description": "default", }` (src/nova/tests/functional/api_sample_tests/test_security_groups.py:L105) | 1/5 | `src/nova/tests/functional/api_sample_tests/test_security_groups.py:L104–L108` |
| `SecurityGroupsJsonTest._create_security_group` | method | (self) | private | `self._do_post('os-security-groups', 'security-group-post-req', subs)` (src/nova/tests/functional/api_sample_tests/test_security_groups.py:L112) | 1/4 | `src/nova/tests/functional/api_sample_tests/test_security_groups.py:L110–L113` |
| `SecurityGroupsJsonTest._add_group` | method | (self, uuid) | private | `self._do_post('servers/%s/action' % uuid, 'security-group-add-post-req', subs)` (src/nova/tests/functional/api_sample_tests/test_security_groups.py:L119) | 1/6 | `src/nova/tests/functional/api_sample_tests/test_security_groups.py:L115–L120` |
| `SecurityGroupsJsonTest.test_security_group_create` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_security_groups.py:L122–L126` |
| `SecurityGroupsJsonTest.test_security_groups_list` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_security_groups.py:L128–L132` |
| `SecurityGroupsJsonTest.test_security_groups_get` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_security_groups.py:L134–L137` |
| `SecurityGroupsJsonTest.test_security_groups_list_server` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_security_groups.py:L139–L144` |
| `SecurityGroupsJsonTest.test_security_groups_add` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_security_groups.py:L146–L151` |
| `SecurityGroupsJsonTest.test_security_groups_remove` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/api_sample_tests/test_security_groups.py:L153–L163` |
| `SecurityGroupsJsonTest.test_security_group_rules_create` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_security_groups.py:L165–L169` |
| `SecurityGroupsJsonTest.test_security_group_rules_remove` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_security_groups.py:L171–L174` |

## Dependencies

- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/api_sample_tests/test_security_groups.py:L16)
- `nova.tests.functional.api_sample_tests`: imports `test_servers` (src/nova/tests/functional/api_sample_tests/test_security_groups.py:L18)
- `import nova.tests.functional.api_samples_test_base as astb` (src/nova/tests/functional/api_sample_tests/test_security_groups.py:L19)

