# src/nova/objects/flavor.py

## Overview

This file implements the `flavor` module, defining 2 classs, 6 constants, 2 fields, 9 functions, 34 methods, 1 variable, 16 imports, 17 side effects.

Lines: total 677, code 516, comment 59, blank 102

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `OPTIONAL_FIELDS` | constant | — | exported | not declared | — | `src/nova/objects/flavor.py:L34–L34` |
| `DEPRECATED_FIELDS` | constant | — | exported | not declared | — | `src/nova/objects/flavor.py:L36–L36` |
| `MUTABLE_FIELDS` | constant | — | exported | not declared | — | `src/nova/objects/flavor.py:L39–L39` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/flavor.py:L41–L44` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/objects/flavor.py:L46–L46` |
| `_dict_with_extra_specs` | function | (flavor_model) | unexported | `dict(flavor_model, extra_specs=extra_specs)` (src/nova/objects/flavor.py:L52) | 2/4 | `src/nova/objects/flavor.py:L49–L52` |
| `_get_projects_from_db` | function | (context, flavorid) | unexported | `[x['project_id'] for x in db_flavor['projects']]` (src/nova/objects/flavor.py:L68) | 3/9 | `src/nova/objects/flavor.py:L60–L68` |
| `_flavor_add_project` | function | (context, flavor_id, project_id) | unexported | not declared | 2/9 | `src/nova/objects/flavor.py:L72–L80` |
| `_flavor_del_project` | function | (context, flavor_id, project_id) | unexported | not declared | 2/8 | `src/nova/objects/flavor.py:L84–L91` |
| `_flavor_extra_specs_add` | function | (context, flavor_id, specs, max_retries=10) | unexported | `specs` (src/nova/objects/flavor.py:L122) | 7/29 | `src/nova/objects/flavor.py:L95–L128` |
| `_flavor_extra_specs_del` | function | (context, flavor_id, key) | unexported | not declared | 2/8 | `src/nova/objects/flavor.py:L132–L139` |
| `_flavor_create` | function | (context, values) | unexported | `_dict_with_extra_specs(db_flavor)` (src/nova/objects/flavor.py:L175) | 8/29 | `src/nova/objects/flavor.py:L143–L175` |
| `_flavor_destroy` | function | (context, flavor_id=None, flavorid=None) | unexported | `result` (src/nova/objects/flavor.py:L196) | 4/15 | `src/nova/objects/flavor.py:L179–L196` |
| `Flavor` | class | — | exported | not declared | — | `src/nova/objects/flavor.py:L202–L596` |
| `Flavor.VERSION` | constant | — | public | not declared | — | `src/nova/objects/flavor.py:L209–L209` |
| `Flavor.fields` | field | — | public | not declared | — | `src/nova/objects/flavor.py:L211–L227` |
| `Flavor.__init__` | method | (self, *args, **kwargs) | public | not declared | 1/4 | `src/nova/objects/flavor.py:L229–L232` |
| `Flavor.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 3/5 | `src/nova/objects/flavor.py:L234–L238` |
| `Flavor._from_db_object` | method | (context, flavor, db_flavor, expected_attrs=None) | private | `flavor` (src/nova/objects/flavor.py:L274) | 14/26 | `src/nova/objects/flavor.py:L241–L274` |
| `Flavor._flavor_get_query_from_db` | method | (context) | private | `query` (src/nova/objects/flavor.py:L289) | 2/11 | `src/nova/objects/flavor.py:L277–L289` |
| `Flavor._flavor_get_from_db` | method | (context, id) | private | `_dict_with_extra_specs(result)` (src/nova/objects/flavor.py:L301) | 2/7 | `src/nova/objects/flavor.py:L294–L301` |
| `Flavor._flavor_get_by_name_from_db` | method | (context, name) | private | `_dict_with_extra_specs(result)` (src/nova/objects/flavor.py:L313) | 2/7 | `src/nova/objects/flavor.py:L306–L313` |
| `Flavor._flavor_get_by_flavor_id_from_db` | method | (context, flavor_id) | private | `_dict_with_extra_specs(result)` (src/nova/objects/flavor.py:L326) | 2/8 | `src/nova/objects/flavor.py:L318–L326` |
| `Flavor._get_projects_from_db` | method | (context, flavorid) | private | `_get_projects_from_db(context, flavorid)` (src/nova/objects/flavor.py:L330) | 1/2 | `src/nova/objects/flavor.py:L329–L330` |
| `Flavor._load_projects` | method | (self) | private | not declared | 1/4 | `src/nova/objects/flavor.py:L333–L336` |
| `Flavor.obj_load_attr` | method | (self, attrname) | public | not declared | 2/5 | `src/nova/objects/flavor.py:L339–L345` |
| `Flavor.obj_reset_changes` | method | (self, fields=None, recursive=False) | public | not declared | 7/11 | `src/nova/objects/flavor.py:L347–L357` |
| `Flavor.obj_what_changed` | method | (self) | public | `changes` (src/nova/objects/flavor.py:L366) | 5/8 | `src/nova/objects/flavor.py:L359–L366` |
| `Flavor._obj_from_primitive` | method | (cls, context, objver, primitive) | private | `self` (src/nova/objects/flavor.py:L383) | 5/13 | `src/nova/objects/flavor.py:L369–L383` |
| `Flavor.get_by_id` | method | (cls, context, id) | public | `cls._from_db_object(context, cls(context), db_flavor, expected_attrs=['extra_specs'])` (src/nova/objects/flavor.py:L389) | 1/4 | `src/nova/objects/flavor.py:L387–L390` |
| `Flavor.get_by_name` | method | (cls, context, name) | public | `cls._from_db_object(context, cls(context), db_flavor, expected_attrs=['extra_specs'])` (src/nova/objects/flavor.py:L396) | 1/4 | `src/nova/objects/flavor.py:L394–L397` |
| `Flavor.get_by_flavor_id` | method | (cls, context, flavor_id, read_deleted=None) | public | `cls._from_db_object(context, cls(context), db_flavor, expected_attrs=['extra_specs'])` (src/nova/objects/flavor.py:L404) | 1/5 | `src/nova/objects/flavor.py:L401–L405` |
| `Flavor._flavor_add_project` | method | (context, flavor_id, project_id) | private | `_flavor_add_project(context, flavor_id, project_id)` (src/nova/objects/flavor.py:L409) | 1/2 | `src/nova/objects/flavor.py:L408–L409` |
| `Flavor._flavor_del_project` | method | (context, flavor_id, project_id) | private | `_flavor_del_project(context, flavor_id, project_id)` (src/nova/objects/flavor.py:L413) | 1/2 | `src/nova/objects/flavor.py:L412–L413` |
| `Flavor._add_access` | method | (self, project_id) | private | not declared | 1/2 | `src/nova/objects/flavor.py:L415–L416` |
| `Flavor.add_access` | method | (self, project_id) | public | not declared | 2/7 | `src/nova/objects/flavor.py:L419–L425` |
| `Flavor._remove_access` | method | (self, project_id) | private | not declared | 1/2 | `src/nova/objects/flavor.py:L427–L428` |
| `Flavor.remove_access` | method | (self, project_id) | public | not declared | 2/7 | `src/nova/objects/flavor.py:L431–L437` |
| `Flavor._flavor_create` | method | (context, updates) | private | `_flavor_create(context, updates)` (src/nova/objects/flavor.py:L441) | 1/2 | `src/nova/objects/flavor.py:L440–L441` |
| `Flavor.create` | method | (self) | public | not declared | 4/13 | `src/nova/objects/flavor.py:L444–L457` |
| `Flavor.save_projects` | method | (self, to_add=None, to_delete=None) | public | not declared | 5/8 | `src/nova/objects/flavor.py:L460–L474` |
| `Flavor._flavor_extra_specs_add` | method | (context, flavor_id, specs, max_retries=10) | private | `_flavor_extra_specs_add(context, flavor_id, specs, max_retries)` (src/nova/objects/flavor.py:L478) | 1/2 | `src/nova/objects/flavor.py:L477–L478` |
| `Flavor._flavor_extra_specs_del` | method | (context, flavor_id, key) | private | `_flavor_extra_specs_del(context, flavor_id, key)` (src/nova/objects/flavor.py:L482) | 1/2 | `src/nova/objects/flavor.py:L481–L482` |
| `Flavor.save_extra_specs` | method | (self, to_add=None, to_delete=None) | public | not declared | 5/8 | `src/nova/objects/flavor.py:L485–L499` |
| `Flavor._save` | method | (self, context, values) | private | not declared | 2/9 | `src/nova/objects/flavor.py:L504–L513` |
| `Flavor.save` | method | (self) | public | not declared | 14/27 | `src/nova/objects/flavor.py:L515–L552` |
| `Flavor._flavor_destroy` | method | (context, flavor_id=None, flavorid=None) | private | `_flavor_destroy(context, flavor_id=flavor_id, flavorid=flavorid)` (src/nova/objects/flavor.py:L556) | 1/2 | `src/nova/objects/flavor.py:L555–L556` |
| `Flavor.destroy` | method | (self) | public | not declared | 2/9 | `src/nova/objects/flavor.py:L559–L573` |
| `Flavor._send_notification` | method | (self, action) | private | not declared | 3/14 | `src/nova/objects/flavor.py:L575–L596` |
| `_flavor_get_all_from_db` | function | (context, inactive, filters, sort_key, sort_dir, limit, marker) | unexported | `[_dict_with_extra_specs(i) for i in query.all()]` (src/nova/objects/flavor.py:L653) | 14/43 | `src/nova/objects/flavor.py:L600–L653` |
| `FlavorList` | class | — | exported | not declared | — | `src/nova/objects/flavor.py:L657–L677` |
| `FlavorList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/flavor.py:L658–L658` |
| `FlavorList.fields` | field | — | public | not declared | — | `src/nova/objects/flavor.py:L660–L662` |
| `FlavorList.get_all` | method | (cls, context, inactive=False, filters=None, sort_key='flavorid', sort_dir='asc', limit=None, marker=None) | public | `base.obj_make_list(context, cls(context), api_db_flavors, expected_attrs=['extra_specs'])` (src/nova/objects/flavor.py:L675) | 1/12 | `src/nova/objects/flavor.py:L666–L677` |

## Dependencies

- `oslo_db`: imports `exception as db_exc` (src/nova/objects/flavor.py:L15)
- `oslo_db.sqlalchemy`: imports `utils as sqlalchemyutils` (src/nova/objects/flavor.py:L16)
- `oslo_utils`: imports `versionutils` (src/nova/objects/flavor.py:L17)
- `import sqlalchemy as sa` (src/nova/objects/flavor.py:L18)
- `sqlalchemy`: imports `orm` (src/nova/objects/flavor.py:L19)
- `sqlalchemy`: imports `sql` (src/nova/objects/flavor.py:L20)
- `sqlalchemy.sql`: imports `expression` (src/nova/objects/flavor.py:L21)
- `import nova.conf` (src/nova/objects/flavor.py:L23)
- `nova.db.api`: imports `api as api_db_api` (src/nova/objects/flavor.py:L24)
- `nova.db.api`: imports `models as api_models` (src/nova/objects/flavor.py:L25)
- `nova.db`: imports `utils as db_utils` (src/nova/objects/flavor.py:L26)
- `nova`: imports `exception` (src/nova/objects/flavor.py:L27)
- `nova.notifications.objects`: imports `base as notification` (src/nova/objects/flavor.py:L28)
- `nova.notifications.objects`: imports `flavor as flavor_notification` (src/nova/objects/flavor.py:L29)
- `nova.objects`: imports `base` (src/nova/objects/flavor.py:L30)
- `nova.objects`: imports `fields` (src/nova/objects/flavor.py:L31)

## Side Effects

- **network**: db_flavor = context.session.query(api_models.Flavors).filter_by( (src/nova/objects/flavor.py:L61)
- **network**: result = context.session.query(api_models.FlavorProjects).\ (src/nova/objects/flavor.py:L85)
- **network**: spec_refs = context.session.query( (src/nova/objects/flavor.py:L99)
- **network**: context.session.add(spec_ref) (src/nova/objects/flavor.py:L120)
- **network**: result = context.session.query(api_models.FlavorExtraSpecs).\ (src/nova/objects/flavor.py:L133)
- **network**: query = context.session.query(api_models.Flavors) (src/nova/objects/flavor.py:L180)
- **network**: context.session.query(api_models.FlavorProjects).\ (src/nova/objects/flavor.py:L191)
- **network**: context.session.query(api_models.FlavorExtraSpecs).\ (src/nova/objects/flavor.py:L193)
- **network**: context.session.delete(result) (src/nova/objects/flavor.py:L195)
- **network**: query = context.session.query(api_models.Flavors).options( (src/nova/objects/flavor.py:L280)
- **network**: db_flavor = context.session.query(api_models.Flavors).\ (src/nova/objects/flavor.py:L505)
- **global-mutation**: OPTIONAL_FIELDS = ['extra_specs', 'projects'] (src/nova/objects/flavor.py:L34)
- **global-mutation**: DEPRECATED_FIELDS = ['deleted', 'deleted_at'] (src/nova/objects/flavor.py:L36)
- **global-mutation**: MUTABLE_FIELDS = set(['description']) (src/nova/objects/flavor.py:L39)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/objects/flavor.py:L46)
- **global-mutation**: VERSION = '1.2' (src/nova/objects/flavor.py:L209)
- **global-mutation**: VERSION = '1.1' (src/nova/objects/flavor.py:L658)

