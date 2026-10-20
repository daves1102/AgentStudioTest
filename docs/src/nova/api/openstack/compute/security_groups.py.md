# src/nova/api/openstack/compute/security_groups.py

## Overview

This file implements the `security_groups` module, defining 5 classs, 2 constants, 17 methods, 13 imports, 4 side effects, 5 security surface entries.

Lines: total 468, code 376, comment 29, blank 63

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/security_groups.py:L35–L35` |
| `SG_NOT_FOUND` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/security_groups.py:L36–L36` |
| `SecurityGroupControllerBase` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/security_groups.py:L39–L131` |
| `SecurityGroupControllerBase.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/security_groups.py:L42–L44` |
| `SecurityGroupControllerBase._format_security_group_rule` | method | (self, context, rule, group_rule_data=None) | private | `` (src/nova/api/openstack/compute/security_groups.py:L76); `sg_rule` (src/nova/api/openstack/compute/security_groups.py:L81) | 4/24 | `src/nova/api/openstack/compute/security_groups.py:L46–L81` |
| `SecurityGroupControllerBase._format_security_group` | method | (self, context, group, group_rule_data_by_rule_group_id=None) | private | `security_group` (src/nova/api/openstack/compute/security_groups.py:L103) | 6/20 | `src/nova/api/openstack/compute/security_groups.py:L83–L103` |
| `SecurityGroupControllerBase._get_group_rule_data_by_rule_group_id` | method | (self, context, groups) | private | `group_rule_data_by_rule_group_id` (src/nova/api/openstack/compute/security_groups.py:L131) | 7/23 | `src/nova/api/openstack/compute/security_groups.py:L105–L131` |
| `SecurityGroupController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/security_groups.py:L135–L257` |
| `SecurityGroupController.show` | method | (self, req, id) | public | `{'security_group': self._format_security_group(context, security_group)}` (src/nova/api/openstack/compute/security_groups.py:L156) | 3/13 | `src/nova/api/openstack/compute/security_groups.py:L142–L157` |
| `SecurityGroupController.delete` | method | (self, req, id) | public | not declared | 3/12 | `src/nova/api/openstack/compute/security_groups.py:L163–L176` |
| `SecurityGroupController.index` | method | (self, req) | public | `{'security_groups': list(sorted(result, key=lambda k: (k['tenant_id'], k['name'])))}` (src/nova/api/openstack/compute/security_groups.py:L199) | 2/15 | `src/nova/api/openstack/compute/security_groups.py:L182–L201` |
| `SecurityGroupController.create` | method | (self, req, body) | public | `{'security_group': self._format_security_group(context, group_ref)}` (src/nova/api/openstack/compute/security_groups.py:L224) | 3/15 | `src/nova/api/openstack/compute/security_groups.py:L207–L225` |
| `SecurityGroupController.update` | method | (self, req, id, body) | public | `{'security_group': self._format_security_group(context, group_ref)}` (src/nova/api/openstack/compute/security_groups.py:L256) | 5/22 | `src/nova/api/openstack/compute/security_groups.py:L231–L257` |
| `SecurityGroupRulesController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/security_groups.py:L261–L360` |
| `SecurityGroupRulesController.create` | method | (self, req, body) | public | `{"security_group_rule": formatted_rule}` (src/nova/api/openstack/compute/security_groups.py:L326) | 12/51 | `src/nova/api/openstack/compute/security_groups.py:L269–L326` |
| `SecurityGroupRulesController._rule_args_to_dict` | method | (self, context, to_port=None, from_port=None, ip_protocol=None, cidr=None, group_id=None) | private | `security_group_api.new_group_ingress_rule( group_id, ip_protocol, from_port, to_port)` (src/nova/api/openstack/compute/security_groups.py:L332); `security_group_api.new_cidr_ingress_rule( cidr, ip_protocol, from_port, to_port)` (src/nova/api/openstack/compute/security_groups.py:L336) | 2/9 | `src/nova/api/openstack/compute/security_groups.py:L328–L337` |
| `SecurityGroupRulesController.delete` | method | (self, req, id) | public | not declared | 4/17 | `src/nova/api/openstack/compute/security_groups.py:L343–L360` |
| `ServerSecurityGroupController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/security_groups.py:L364–L398` |
| `ServerSecurityGroupController.index` | method | (self, req, server_id) | public | `{'security_groups': list(sorted(result, key=lambda k: (k['tenant_id'], k['name'])))}` (src/nova/api/openstack/compute/security_groups.py:L396) | 3/20 | `src/nova/api/openstack/compute/security_groups.py:L372–L398` |
| `SecurityGroupActionController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/security_groups.py:L402–L468` |
| `SecurityGroupActionController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/security_groups.py:L403–L405` |
| `SecurityGroupActionController._parse` | method | (self, body, action) | private | `group_name` (src/nova/api/openstack/compute/security_groups.py:L422) | 5/14 | `src/nova/api/openstack/compute/security_groups.py:L407–L422` |
| `SecurityGroupActionController._addSecurityGroup` | method | (self, req, id, body) | private | not declared | 4/17 | `src/nova/api/openstack/compute/security_groups.py:L429–L446` |
| `SecurityGroupActionController._removeSecurityGroup` | method | (self, req, id, body) | private | not declared | 3/14 | `src/nova/api/openstack/compute/security_groups.py:L453–L468` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/api/openstack/compute/security_groups.py:L18)
- `webob`: imports `exc` (src/nova/api/openstack/compute/security_groups.py:L19)
- `nova.api.openstack.api_version_request`: imports `MAX_PROXY_API_SUPPORT_VERSION` (src/nova/api/openstack/compute/security_groups.py:L21–L22)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/security_groups.py:L23)
- `nova.api.openstack.compute.schemas`: imports `security_groups as schema` (src/nova/api/openstack/compute/security_groups.py:L24)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/security_groups.py:L25)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/security_groups.py:L26)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/security_groups.py:L27)
- `nova`: imports `exception` (src/nova/api/openstack/compute/security_groups.py:L28)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/security_groups.py:L29)
- `nova.network`: imports `security_group_api` (src/nova/api/openstack/compute/security_groups.py:L30)
- `nova.policies`: imports `security_groups as sg_policies` (src/nova/api/openstack/compute/security_groups.py:L31)
- `nova.virt`: imports `netutils` (src/nova/api/openstack/compute/security_groups.py:L32)

## Side Effects

- **network**: from nova.api.openstack.api_version_request \ (src/nova/api/openstack/compute/security_groups.py:L21)
- **network**: from nova.api.openstack.compute.schemas import security_groups as schema (src/nova/api/openstack/compute/security_groups.py:L24)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/openstack/compute/security_groups.py:L35)
- **global-mutation**: SG_NOT_FOUND = object() (src/nova/api/openstack/compute/security_groups.py:L36)

## Security Surface

- **sink** (`db-write`): search_opts.update(req.GET) (src/nova/api/openstack/compute/security_groups.py:L189)
- **sink** (`db-write`): @validation.schema(schema.update) (src/nova/api/openstack/compute/security_groups.py:L229)
- **sink** (`db-write`): def update(self, req, id, body): (src/nova/api/openstack/compute/security_groups.py:L231)
- **sink** (`db-write`): """Update a security group.""" (src/nova/api/openstack/compute/security_groups.py:L232)
- **sink** (`db-write`): context.can(sg_policies.POLICY_NAME % 'update', (src/nova/api/openstack/compute/security_groups.py:L234)

