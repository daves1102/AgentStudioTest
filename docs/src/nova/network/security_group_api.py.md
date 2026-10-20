# src/nova/network/security_group_api.py

## Overview

This file implements the `security_group_api` module, defining 2 constants, 30 functions, 15 imports, 2 side effects, 1 security surface entry.

Lines: total 709, code 524, comment 78, blank 107

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/network/security_group_api.py:L39–L39` |
| `MAX_SEARCH_IDS` | constant | — | exported | not declared | — | `src/nova/network/security_group_api.py:L44–L44` |
| `validate_id` | function | (id) | exported | `id` (src/nova/network/security_group_api.py:L51) | 2/5 | `src/nova/network/security_group_api.py:L47–L51` |
| `validate_name` | function | (context, name) | exported | `neutronv20.find_resourceid_by_name_or_id( neutron, 'security_group', name, context.project_id)` (src/nova/network/security_group_api.py:L67) | 4/16 | `src/nova/network/security_group_api.py:L54–L77` |
| `parse_cidr` | function | (cidr) | exported | `'0.0.0.0/0'` (src/nova/network/security_group_api.py:L82); `cidr` (src/nova/network/security_group_api.py:L92) | 4/10 | `src/nova/network/security_group_api.py:L80–L92` |
| `new_group_ingress_rule` | function | (grantee_group_id, protocol, from_port, to_port) | exported | `_new_ingress_rule( protocol, from_port, to_port, group_id=grantee_group_id)` (src/nova/network/security_group_api.py:L97) | 1/4 | `src/nova/network/security_group_api.py:L95–L98` |
| `new_cidr_ingress_rule` | function | (grantee_cidr, protocol, from_port, to_port) | exported | `_new_ingress_rule( protocol, from_port, to_port, cidr=grantee_cidr)` (src/nova/network/security_group_api.py:L102) | 1/3 | `src/nova/network/security_group_api.py:L101–L103` |
| `_new_ingress_rule` | function | (ip_protocol, from_port, to_port, group_id=None, cidr=None) | unexported | `None` (src/nova/network/security_group_api.py:L176); `values` (src/nova/network/security_group_api.py:L178) | 27/54 | `src/nova/network/security_group_api.py:L106–L178` |
| `create_security_group_rule` | function | (context, security_group, new_rule) | exported | `add_rules(context, new_rule['parent_group_id'], security_group['name'], [new_rule])[0]` (src/nova/network/security_group_api.py:L187) | 2/8 | `src/nova/network/security_group_api.py:L181–L189` |
| `_rule_exists` | function | (security_group, new_rule) | unexported | `rule.get('id') or True` (src/nova/network/security_group_api.py:L202); `False` (src/nova/network/security_group_api.py:L203) | 5/9 | `src/nova/network/security_group_api.py:L192–L203` |
| `populate_security_groups` | function | (security_groups) | exported | `security_group_obj.SecurityGroupList()` (src/nova/network/security_group_api.py:L215); `security_group_obj.make_secgroup_list(security_groups)` (src/nova/network/security_group_api.py:L216) | 2/4 | `src/nova/network/security_group_api.py:L206–L216` |
| `create_security_group` | function | (context, name, description) | exported | `_convert_to_nova_security_group_format(security_group)` (src/nova/network/security_group_api.py:L237) | 5/16 | `src/nova/network/security_group_api.py:L219–L237` |
| `update_security_group` | function | (context, security_group, name, description) | exported | `_convert_to_nova_security_group_format(security_group)` (src/nova/network/security_group_api.py:L254) | 3/12 | `src/nova/network/security_group_api.py:L240–L254` |
| `_convert_to_nova_security_group_format` | function | (security_group) | unexported | `nova_group` (src/nova/network/security_group_api.py:L269) | 3/12 | `src/nova/network/security_group_api.py:L257–L269` |
| `_convert_to_nova_security_group_rule_format` | function | (rule) | unexported | `nova_rule` (src/nova/network/security_group_api.py:L290) | 5/19 | `src/nova/network/security_group_api.py:L272–L290` |
| `get` | function | (context, id) | exported | `_convert_to_nova_security_group_format(group)` (src/nova/network/security_group_api.py:L297) | 3/12 | `src/nova/network/security_group_api.py:L293–L304` |
| `list` | function | (context, project, search_opts=None) | exported | `converted_rules` (src/nova/network/security_group_api.py:L338) | 6/19 | `src/nova/network/security_group_api.py:L307–L338` |
| `destroy` | function | (context, security_group) | exported | not declared | 4/12 | `src/nova/network/security_group_api.py:L341–L354` |
| `add_rules` | function | (context, id, name, vals) | exported | `converted_rules` (src/nova/network/security_group_api.py:L388) | 6/24 | `src/nova/network/security_group_api.py:L357–L388` |
| `_make_neutron_security_group_dict` | function | (name, description) | unexported | `{'security_group': {'name': name, 'description': description}}` (src/nova/network/security_group_api.py:L392) | 1/3 | `src/nova/network/security_group_api.py:L391–L393` |
| `_make_neutron_security_group_rules_list` | function | (rules) | unexported | `{'security_group_rules': new_rules}` (src/nova/network/security_group_api.py:L425) | 8/20 | `src/nova/network/security_group_api.py:L396–L425` |
| `remove_rules` | function | (context, security_group, rule_ids) | exported | not declared | 3/9 | `src/nova/network/security_group_api.py:L428–L440` |
| `get_rule` | function | (context, id) | exported | `_convert_to_nova_security_group_rule_format(rule)` (src/nova/network/security_group_api.py:L455) | 3/13 | `src/nova/network/security_group_api.py:L443–L455` |
| `_get_ports_from_server_list` | function | (servers, neutron) | unexported | `ports` (src/nova/network/security_group_api.py:L486) | 3/12 | `src/nova/network/security_group_api.py:L458–L486` |
| `_get_ports_from_server_list._chunk_by_ids` | function | (servers, limit) | private | not declared | — | `src/nova/network/security_group_api.py:L461–L469` |
| `_get_secgroups_from_port_list` | function | (ports, neutron, fields=None) | unexported | `security_groups` (src/nova/network/security_group_api.py:L518) | 5/14 | `src/nova/network/security_group_api.py:L489–L518` |
| `_get_secgroups_from_port_list._chunk_by_ids` | function | (sg_ids, limit) | private | not declared | — | `src/nova/network/security_group_api.py:L492–L500` |
| `get_instances_security_groups_bindings` | function | (context, servers, detailed=False) | exported | `instances_security_group_bindings` (src/nova/network/security_group_api.py:L563) | 7/25 | `src/nova/network/security_group_api.py:L521–L563` |
| `get_instance_security_groups` | function | (context, instance, detailed=False) | exported | `sg_bindings.get(instance.uuid, [])` (src/nova/network/security_group_api.py:L575) | 1/5 | `src/nova/network/security_group_api.py:L566–L575` |
| `_has_security_group_requirements` | function | (port) | unexported | `port_security_enabled` (src/nova/network/security_group_api.py:L583); `False` (src/nova/network/security_group_api.py:L584) | 3/7 | `src/nova/network/security_group_api.py:L578–L584` |
| `add_to_instance` | function | (context, instance, security_group_name) | exported | not declared | 13/57 | `src/nova/network/security_group_api.py:L587–L647` |
| `remove_from_instance` | function | (context, instance, security_group_name) | exported | not declared | 10/51 | `src/nova/network/security_group_api.py:L650–L709` |

## Dependencies

- `import urllib` (src/nova/network/security_group_api.py:L20)
- `import netaddr` (src/nova/network/security_group_api.py:L22)
- `neutronclient.common`: imports `exceptions as n_exc` (src/nova/network/security_group_api.py:L23)
- `neutronclient.neutron`: imports `v2_0 as neutronv20` (src/nova/network/security_group_api.py:L24)
- `oslo_log`: imports `log as logging` (src/nova/network/security_group_api.py:L25)
- `oslo_utils`: imports `encodeutils` (src/nova/network/security_group_api.py:L26)
- `oslo_utils`: imports `excutils` (src/nova/network/security_group_api.py:L27)
- `oslo_utils`: imports `netutils` (src/nova/network/security_group_api.py:L28)
- `oslo_utils`: imports `uuidutils` (src/nova/network/security_group_api.py:L29)
- `webob`: imports `exc` (src/nova/network/security_group_api.py:L30)
- `nova`: imports `context as nova_context` (src/nova/network/security_group_api.py:L32)
- `nova`: imports `exception` (src/nova/network/security_group_api.py:L33)
- `nova.i18n`: imports `_` (src/nova/network/security_group_api.py:L34)
- `nova.network`: imports `neutron as neutronapi` (src/nova/network/security_group_api.py:L35)
- `nova.objects`: imports `security_group as security_group_obj` (src/nova/network/security_group_api.py:L36)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/network/security_group_api.py:L39)
- **global-mutation**: MAX_SEARCH_IDS = 150 (src/nova/network/security_group_api.py:L44)

## Security Surface

- **sink** (`db-write`): sg_ids.update(port.get('security_groups', [])) (src/nova/network/security_group_api.py:L505)

