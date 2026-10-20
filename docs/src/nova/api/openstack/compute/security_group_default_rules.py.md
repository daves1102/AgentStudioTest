# src/nova/api/openstack/compute/security_group_default_rules.py

## Overview

This file implements the `security_group_default_rules` module, defining 1 class, 4 methods, 1 variable, 4 imports, 1 side effect.

Lines: total 58, code 36, comment 13, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_removal_reason` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/security_group_default_rules.py:L21–L26` |
| `SecurityGroupDefaultRulesController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/security_group_default_rules.py:L30–L58` |
| `SecurityGroupDefaultRulesController.create` | method | (self, req, body) | public | not declared | 1/2 | `src/nova/api/openstack/compute/security_group_default_rules.py:L37–L38` |
| `SecurityGroupDefaultRulesController.show` | method | (self, req, id) | public | not declared | 1/2 | `src/nova/api/openstack/compute/security_group_default_rules.py:L44–L45` |
| `SecurityGroupDefaultRulesController.delete` | method | (self, req, id) | public | not declared | 1/2 | `src/nova/api/openstack/compute/security_group_default_rules.py:L50–L51` |
| `SecurityGroupDefaultRulesController.index` | method | (self, req) | public | not declared | 1/2 | `src/nova/api/openstack/compute/security_group_default_rules.py:L57–L58` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/openstack/compute/security_group_default_rules.py:L15)
- `nova.api.openstack.compute.schemas`: imports `security_group_default_rules as schema` (src/nova/api/openstack/compute/security_group_default_rules.py:L17)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/security_group_default_rules.py:L18)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/security_group_default_rules.py:L19)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import security_group_default_rules as schema  # noqa: E501 (src/nova/api/openstack/compute/security_group_default_rules.py:L17)

