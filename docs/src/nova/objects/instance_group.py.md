# src/nova/objects/instance_group.py

## Overview

This file implements the `instance_group` module, defining 2 classs, 4 constants, 2 fields, 5 functions, 32 methods, 1 property, 1 variable, 14 imports, 13 side effects.

Lines: total 601, code 439, comment 80, blank 82

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LAZY_LOAD_FIELDS` | constant | — | exported | not declared | — | `src/nova/objects/instance_group.py:L33–L33` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/objects/instance_group.py:L34–L34` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/instance_group.py:L36–L39` |
| `_instance_group_get_query` | function | (context, id_field=None, id=None) | unexported | `query` (src/nova/objects/instance_group.py:L50) | 4/9 | `src/nova/objects/instance_group.py:L42–L50` |
| `_instance_group_model_get_query` | function | (context, model_class, group_id) | unexported | `context.session.query(model_class).filter_by(group_id=group_id)` (src/nova/objects/instance_group.py:L54) | 1/2 | `src/nova/objects/instance_group.py:L53–L54` |
| `_instance_group_model_add` | function | (context, model_class, items, item_models, field, group_id, append_to_models=None) | unexported | `models` (src/nova/objects/instance_group.py:L75) | 5/19 | `src/nova/objects/instance_group.py:L57–L75` |
| `_instance_group_members_add` | function | (context, group, members) | unexported | `_instance_group_model_add(context, api_models.InstanceGroupMember, members, query.all(), 'instance_uuid', group.id, append_to_models=group._members)` (src/nova/objects/instance_group.py:L84) | 1/9 | `src/nova/objects/instance_group.py:L78–L86` |
| `_instance_group_members_add_by_uuid` | function | (context, group_uuid, members) | unexported | `_instance_group_model_add( context, api_models.InstanceGroupMember, members, group._members, 'instance_uuid', group.id, )` (src/nova/objects/instance_group.py:L100) | 2/17 | `src/nova/objects/instance_group.py:L89–L107` |
| `InstanceGroup` | class | — | exported | not declared | — | `src/nova/objects/instance_group.py:L113–L534` |
| `InstanceGroup.VERSION` | constant | — | public | not declared | — | `src/nova/objects/instance_group.py:L127–L127` |
| `InstanceGroup.fields` | field | — | public | not declared | — | `src/nova/objects/instance_group.py:L129–L144` |
| `InstanceGroup.__init__` | method | (self, *args, **kwargs) | public | not declared | 2/4 | `src/nova/objects/instance_group.py:L146–L149` |
| `InstanceGroup.rules` | method | (self) | public | `{}` (src/nova/objects/instance_group.py:L154); `rules` (src/nova/objects/instance_group.py:L160) | 3/8 | `src/nova/objects/instance_group.py:L152–L160` |
| `InstanceGroup.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 4/11 | `src/nova/objects/instance_group.py:L162–L177` |
| `InstanceGroup._from_db_object` | method | (context, instance_group, db_inst) | private | `instance_group` (src/nova/objects/instance_group.py:L224) | 11/29 | `src/nova/objects/instance_group.py:L180–L224` |
| `InstanceGroup._get_from_db_by_uuid` | method | (context, uuid) | private | `grp` (src/nova/objects/instance_group.py:L234) | 2/7 | `src/nova/objects/instance_group.py:L228–L234` |
| `InstanceGroup._get_from_db_by_id` | method | (context, id) | private | `grp` (src/nova/objects/instance_group.py:L244) | 2/7 | `src/nova/objects/instance_group.py:L238–L244` |
| `InstanceGroup._get_from_db_by_name` | method | (context, name) | private | `grp` (src/nova/objects/instance_group.py:L252) | 2/5 | `src/nova/objects/instance_group.py:L248–L252` |
| `InstanceGroup._get_from_db_by_instance` | method | (context, instance_uuid) | private | `grp` (src/nova/objects/instance_group.py:L262) | 2/7 | `src/nova/objects/instance_group.py:L256–L262` |
| `InstanceGroup._save_in_db` | method | (context, group_uuid, values) | private | `grp` (src/nova/objects/instance_group.py:L276) | 2/8 | `src/nova/objects/instance_group.py:L266–L276` |
| `InstanceGroup._create_in_db` | method | (context, values, policies=None, members=None, policy=None, rules=None) | private | `group` (src/nova/objects/instance_group.py:L312) | 7/29 | `src/nova/objects/instance_group.py:L280–L312` |
| `InstanceGroup._destroy_in_db` | method | (context, group_uuid) | private | not declared | 3/12 | `src/nova/objects/instance_group.py:L316–L330` |
| `InstanceGroup._add_members_in_db` | method | (context, group_uuid, members) | private | `_instance_group_members_add_by_uuid(context, group_uuid, members)` (src/nova/objects/instance_group.py:L335) | 1/3 | `src/nova/objects/instance_group.py:L334–L336` |
| `InstanceGroup._remove_members_in_db` | method | (context, group_id, instance_uuids) | private | not declared | 1/6 | `src/nova/objects/instance_group.py:L340–L348` |
| `InstanceGroup._destroy_members_bulk_in_db` | method | (context, instance_uuids) | private | `context.session.query(api_models.InstanceGroupMember).filter( api_models.InstanceGroupMember.instance_uuid.in_(instance_uuids)).\ delete(synchronize_session=False)` (src/nova/objects/instance_group.py:L353) | 1/4 | `src/nova/objects/instance_group.py:L352–L355` |
| `InstanceGroup.destroy_members_bulk` | method | (cls, context, instance_uuids) | public | `cls._destroy_members_bulk_in_db(context, instance_uuids)` (src/nova/objects/instance_group.py:L359) | 1/2 | `src/nova/objects/instance_group.py:L358–L359` |
| `InstanceGroup.obj_load_attr` | method | (self, attrname) | public | not declared | 2/11 | `src/nova/objects/instance_group.py:L362–L375` |
| `InstanceGroup.get_by_uuid` | method | (cls, context, uuid) | public | `cls._from_db_object(context, cls(), db_group)` (src/nova/objects/instance_group.py:L381) | 1/3 | `src/nova/objects/instance_group.py:L379–L381` |
| `InstanceGroup.get_by_name` | method | (cls, context, name) | public | `cls._from_db_object(context, cls(), db_group)` (src/nova/objects/instance_group.py:L387) | 1/3 | `src/nova/objects/instance_group.py:L385–L387` |
| `InstanceGroup.get_by_instance_uuid` | method | (cls, context, instance_uuid) | public | `cls._from_db_object(context, cls(), db_group)` (src/nova/objects/instance_group.py:L393) | 1/3 | `src/nova/objects/instance_group.py:L391–L393` |
| `InstanceGroup.get_by_hint` | method | (cls, context, hint) | public | `cls.get_by_uuid(context, hint)` (src/nova/objects/instance_group.py:L398); `cls.get_by_name(context, hint)` (src/nova/objects/instance_group.py:L400) | 2/5 | `src/nova/objects/instance_group.py:L396–L400` |
| `InstanceGroup.save` | method | (self) | public | `` (src/nova/objects/instance_group.py:L427) | 4/14 | `src/nova/objects/instance_group.py:L403–L435` |
| `InstanceGroup.refresh` | method | (self) | public | not declared | 4/6 | `src/nova/objects/instance_group.py:L438–L444` |
| `InstanceGroup.create` | method | (self) | public | not declared | 3/27 | `src/nova/objects/instance_group.py:L447–L475` |
| `InstanceGroup.destroy` | method | (self) | public | not declared | 1/10 | `src/nova/objects/instance_group.py:L478–L487` |
| `InstanceGroup.add_members` | method | (cls, context, group_uuid, instance_uuids) | public | `list(members)` (src/nova/objects/instance_group.py:L500) | 2/10 | `src/nova/objects/instance_group.py:L491–L500` |
| `InstanceGroup.get_hosts` | method | (self, exclude=None) | public | `list(set([instance.host for instance in instances if instance.host]))` (src/nova/objects/instance_group.py:L524) | 4/10 | `src/nova/objects/instance_group.py:L503–L525` |
| `InstanceGroup.count_members_by_user` | method | (self, user_id) | public | `len(instances)` (src/nova/objects/instance_group.py:L534) | 1/6 | `src/nova/objects/instance_group.py:L528–L534` |
| `InstanceGroupList` | class | — | exported | not declared | — | `src/nova/objects/instance_group.py:L538–L601` |
| `InstanceGroupList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/instance_group.py:L549–L549` |
| `InstanceGroupList.fields` | field | — | public | not declared | — | `src/nova/objects/instance_group.py:L551–L553` |
| `InstanceGroupList._get_from_db` | method | (context, project_id=None) | private | `query.all()` (src/nova/objects/instance_group.py:L561) | 2/5 | `src/nova/objects/instance_group.py:L557–L561` |
| `InstanceGroupList._get_counts_from_db` | method | (context, project_id, user_id=None) | private | `counts` (src/nova/objects/instance_group.py:L573) | 2/9 | `src/nova/objects/instance_group.py:L565–L573` |
| `InstanceGroupList.get_by_project_id` | method | (cls, context, project_id) | public | `base.obj_make_list(context, cls(context), api_db_groups)` (src/nova/objects/instance_group.py:L579) | 1/3 | `src/nova/objects/instance_group.py:L577–L579` |
| `InstanceGroupList.get_all` | method | (cls, context) | public | `base.obj_make_list(context, cls(context), api_db_groups)` (src/nova/objects/instance_group.py:L585) | 1/3 | `src/nova/objects/instance_group.py:L583–L585` |
| `InstanceGroupList.get_counts` | method | (cls, context, project_id, user_id=None) | public | `cls._get_counts_from_db(context, project_id, user_id=user_id)` (src/nova/objects/instance_group.py:L601) | 1/2 | `src/nova/objects/instance_group.py:L589–L601` |
| `InstanceGroup.rules` | property | — | public | not declared | — | `src/nova/objects/instance_group.py:L151–L160` |

## Dependencies

- `import copy` (src/nova/objects/instance_group.py:L15)
- `oslo_db`: imports `exception as db_exc` (src/nova/objects/instance_group.py:L17)
- `oslo_log`: imports `log as logging` (src/nova/objects/instance_group.py:L18)
- `oslo_serialization`: imports `jsonutils` (src/nova/objects/instance_group.py:L19)
- `oslo_utils`: imports `uuidutils` (src/nova/objects/instance_group.py:L20)
- `oslo_utils`: imports `versionutils` (src/nova/objects/instance_group.py:L21)
- `sqlalchemy`: imports `orm` (src/nova/objects/instance_group.py:L22)
- `nova.compute`: imports `utils as compute_utils` (src/nova/objects/instance_group.py:L24)
- `nova.db.api`: imports `api as api_db_api` (src/nova/objects/instance_group.py:L25)
- `nova.db.api`: imports `models as api_models` (src/nova/objects/instance_group.py:L26)
- `nova`: imports `exception` (src/nova/objects/instance_group.py:L27)
- `nova`: imports `objects` (src/nova/objects/instance_group.py:L28)
- `nova.objects`: imports `base` (src/nova/objects/instance_group.py:L29)
- `nova.objects`: imports `fields` (src/nova/objects/instance_group.py:L30)

## Side Effects

- **network**: query = context.session.query(api_models.InstanceGroup).\ (src/nova/objects/instance_group.py:L43)
- **network**: return context.session.query(model_class).filter_by(group_id=group_id) (src/nova/objects/instance_group.py:L54)
- **network**: context.session.add(model) (src/nova/objects/instance_group.py:L71)
- **network**: group = context.session.query(api_models.InstanceGroup).outerjoin( (src/nova/objects/instance_group.py:L92)
- **network**: grp_member = context.session.query(api_models.InstanceGroupMember).\ (src/nova/objects/instance_group.py:L257)
- **network**: context.session.query(model).filter_by(group_id=group_id).delete() (src/nova/objects/instance_group.py:L328)
- **network**: context.session.query(api_models.InstanceGroupMember).\ (src/nova/objects/instance_group.py:L344)
- **network**: return context.session.query(api_models.InstanceGroupMember).filter( (src/nova/objects/instance_group.py:L353)
- **network**: query = context.session.query(api_models.InstanceGroup.id).\ (src/nova/objects/instance_group.py:L566)
- **global-mutation**: LAZY_LOAD_FIELDS = ['hosts'] (src/nova/objects/instance_group.py:L33)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/objects/instance_group.py:L34)
- **global-mutation**: VERSION = '1.11' (src/nova/objects/instance_group.py:L127)
- **global-mutation**: VERSION = '1.8' (src/nova/objects/instance_group.py:L549)

