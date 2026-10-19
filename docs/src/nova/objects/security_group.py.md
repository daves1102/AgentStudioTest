# src/nova/objects/security_group.py

## Overview

This file implements the `security_group` module, defining 2 classs, 2 constants, 2 fields, 1 function, 14 methods, 1 property, 1 variable, 7 imports, 3 side effects.

Lines: total 190, code 132, comment 29, blank 29

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/security_group.py:L27–L31` |
| `SecurityGroup` | class | — | exported | not declared | — | `src/nova/objects/security_group.py:L35–L105` |
| `SecurityGroup.VERSION` | constant | — | public | not declared | — | `src/nova/objects/security_group.py:L39–L39` |
| `SecurityGroup.fields` | field | — | public | not declared | — | `src/nova/objects/security_group.py:L41–L50` |
| `SecurityGroup.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 3/4 | `src/nova/objects/security_group.py:L52–L55` |
| `SecurityGroup._from_db_object` | method | (context, secgroup, db_secgroup) | private | `secgroup` (src/nova/objects/security_group.py:L64) | 3/7 | `src/nova/objects/security_group.py:L58–L64` |
| `SecurityGroup.get` | method | (cls, context, secgroup_id) | public | `cls._from_db_object(context, cls(), db_secgroup)` (src/nova/objects/security_group.py:L70) | 1/3 | `src/nova/objects/security_group.py:L68–L70` |
| `SecurityGroup.get_by_name` | method | (cls, context, project_id, group_name) | public | `cls._from_db_object(context, cls(), db_secgroup)` (src/nova/objects/security_group.py:L78) | 1/5 | `src/nova/objects/security_group.py:L74–L78` |
| `SecurityGroup.in_use` | method | (self) | public | `db.security_group_in_use(self._context, self.id)` (src/nova/objects/security_group.py:L82) | 1/2 | `src/nova/objects/security_group.py:L81–L82` |
| `SecurityGroup.save` | method | (self) | public | not declared | 2/8 | `src/nova/objects/security_group.py:L85–L96` |
| `SecurityGroup.refresh` | method | (self) | public | not declared | 1/3 | `src/nova/objects/security_group.py:L99–L101` |
| `SecurityGroup.identifier` | method | (self) | public | `self.uuid if 'uuid' in self else self.name` (src/nova/objects/security_group.py:L105) | 2/2 | `src/nova/objects/security_group.py:L104–L105` |
| `SecurityGroupList` | class | — | exported | not declared | — | `src/nova/objects/security_group.py:L109–L169` |
| `SecurityGroupList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/security_group.py:L113–L113` |
| `SecurityGroupList.fields` | field | — | public | not declared | — | `src/nova/objects/security_group.py:L115–L117` |
| `SecurityGroupList.__init__` | method | (self, *args, **kwargs) | public | not declared | 1/4 | `src/nova/objects/security_group.py:L119–L122` |
| `SecurityGroupList._get_counts_from_db` | method | (context, project_id, user_id=None) | private | `counts` (src/nova/objects/security_group.py:L135) | 2/10 | `src/nova/objects/security_group.py:L126–L135` |
| `SecurityGroupList.get_all` | method | (cls, context) | public | `base.obj_make_list(context, cls(context), groups)` (src/nova/objects/security_group.py:L141) | 1/3 | `src/nova/objects/security_group.py:L139–L141` |
| `SecurityGroupList.get_by_project` | method | (cls, context, project_id) | public | `base.obj_make_list(context, cls(context), groups)` (src/nova/objects/security_group.py:L147) | 1/3 | `src/nova/objects/security_group.py:L145–L147` |
| `SecurityGroupList.get_by_instance` | method | (cls, context, instance) | public | `base.obj_make_list(context, cls(context), groups)` (src/nova/objects/security_group.py:L153) | 1/3 | `src/nova/objects/security_group.py:L151–L153` |
| `SecurityGroupList.get_counts` | method | (cls, context, project_id, user_id=None) | public | `cls._get_counts_from_db(context, project_id, user_id=user_id)` (src/nova/objects/security_group.py:L169) | 1/2 | `src/nova/objects/security_group.py:L157–L169` |
| `make_secgroup_list` | function | (security_groups) | exported | `secgroups` (src/nova/objects/security_group.py:L190) | 3/11 | `src/nova/objects/security_group.py:L172–L190` |
| `SecurityGroup.identifier` | property | — | public | not declared | — | `src/nova/objects/security_group.py:L103–L105` |

## Dependencies

- `oslo_utils`: imports `uuidutils` (src/nova/objects/security_group.py:L18)
- `oslo_utils`: imports `versionutils` (src/nova/objects/security_group.py:L19)
- `nova.db.main`: imports `api as db` (src/nova/objects/security_group.py:L21)
- `nova.db.main`: imports `models` (src/nova/objects/security_group.py:L22)
- `nova`: imports `objects` (src/nova/objects/security_group.py:L23)
- `nova.objects`: imports `base` (src/nova/objects/security_group.py:L24)
- `nova.objects`: imports `fields` (src/nova/objects/security_group.py:L25)

## Side Effects

- **network**: query = context.session.query(models.SecurityGroup.id).\ (src/nova/objects/security_group.py:L127)
- **global-mutation**: VERSION = '1.2' (src/nova/objects/security_group.py:L39)
- **global-mutation**: VERSION = '1.1' (src/nova/objects/security_group.py:L113)

