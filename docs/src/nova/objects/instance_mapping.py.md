# src/nova/objects/instance_mapping.py

## Overview

This file implements the `instance_mapping` module, defining 2 classs, 3 constants, 2 fields, 2 functions, 26 methods, 1 variable, 17 imports, 19 side effects.

Lines: total 473, code 352, comment 68, blank 53

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/objects/instance_mapping.py:L34–L34` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/instance_mapping.py:L36–L41` |
| `InstanceMapping` | class | — | exported | not declared | — | `src/nova/objects/instance_mapping.py:L45–L194` |
| `InstanceMapping.VERSION` | constant | — | public | not declared | — | `src/nova/objects/instance_mapping.py:L49–L49` |
| `InstanceMapping.fields` | field | — | public | not declared | — | `src/nova/objects/instance_mapping.py:L51–L58` |
| `InstanceMapping.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 5/9 | `src/nova/objects/instance_mapping.py:L60–L68` |
| `InstanceMapping.obj_load_attr` | method | (self, attrname) | public | not declared | 2/8 | `src/nova/objects/instance_mapping.py:L71–L78` |
| `InstanceMapping._update_with_cell_id` | method | (self, updates) | private | `updates` (src/nova/objects/instance_mapping.py:L84) | 2/5 | `src/nova/objects/instance_mapping.py:L80–L84` |
| `InstanceMapping._from_db_object` | method | (context, instance_mapping, db_instance_mapping) | private | `instance_mapping` (src/nova/objects/instance_mapping.py:L104) | 6/13 | `src/nova/objects/instance_mapping.py:L87–L104` |
| `InstanceMapping._get_by_instance_uuid_from_db` | method | (context, instance_uuid) | private | `db_mapping` (src/nova/objects/instance_mapping.py:L116) | 2/8 | `src/nova/objects/instance_mapping.py:L108–L116` |
| `InstanceMapping.get_by_instance_uuid` | method | (cls, context, instance_uuid) | public | `cls._from_db_object(context, cls(), db_mapping)` (src/nova/objects/instance_mapping.py:L122) | 1/3 | `src/nova/objects/instance_mapping.py:L120–L122` |
| `InstanceMapping._create_in_db` | method | (context, updates) | private | `db_mapping` (src/nova/objects/instance_mapping.py:L135) | 1/6 | `src/nova/objects/instance_mapping.py:L126–L135` |
| `InstanceMapping.create` | method | (self) | public | not declared | 2/7 | `src/nova/objects/instance_mapping.py:L138–L147` |
| `InstanceMapping._save_in_db` | method | (context, instance_uuid, updates) | private | `db_mapping` (src/nova/objects/instance_mapping.py:L165) | 2/10 | `src/nova/objects/instance_mapping.py:L151–L165` |
| `InstanceMapping.save` | method | (self) | public | not declared | 2/10 | `src/nova/objects/instance_mapping.py:L168–L182` |
| `InstanceMapping._destroy_in_db` | method | (context, instance_uuid) | private | not declared | 2/5 | `src/nova/objects/instance_mapping.py:L186–L190` |
| `InstanceMapping.destroy` | method | (self) | public | not declared | 1/2 | `src/nova/objects/instance_mapping.py:L193–L194` |
| `populate_queued_for_delete` | function | (context, max_count) | exported | `processed, processed` (src/nova/objects/instance_mapping.py:L238) | 7/32 | `src/nova/objects/instance_mapping.py:L198–L238` |
| `populate_user_id` | function | (context, max_count) | exported | `found, done` (src/nova/objects/instance_mapping.py:L305) | 10/47 | `src/nova/objects/instance_mapping.py:L242–L305` |
| `InstanceMappingList` | class | — | exported | not declared | — | `src/nova/objects/instance_mapping.py:L309–L473` |
| `InstanceMappingList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/instance_mapping.py:L314–L314` |
| `InstanceMappingList.fields` | field | — | public | not declared | — | `src/nova/objects/instance_mapping.py:L316–L318` |
| `InstanceMappingList._get_by_project_id_from_db` | method | (context, project_id) | private | `context.session.query(api_models.InstanceMapping)\ .options(orm.joinedload(api_models.InstanceMapping.cell_mapping))\ .filter(api_models.InstanceMapping.project_id == project_id).all()` (src/nova/objects/instance_mapping.py:L323) | 1/4 | `src/nova/objects/instance_mapping.py:L322–L325` |
| `InstanceMappingList.get_by_project_id` | method | (cls, context, project_id) | public | `base.obj_make_list(context, cls(), db_mappings)` (src/nova/objects/instance_mapping.py:L332) | 1/3 | `src/nova/objects/instance_mapping.py:L329–L332` |
| `InstanceMappingList._get_by_cell_id_from_db` | method | (context, cell_id) | private | `context.session.query(api_models.InstanceMapping)\ .options(orm.joinedload(api_models.InstanceMapping.cell_mapping))\ .filter(api_models.InstanceMapping.cell_id == cell_id).all()` (src/nova/objects/instance_mapping.py:L337) | 1/4 | `src/nova/objects/instance_mapping.py:L336–L339` |
| `InstanceMappingList.get_by_cell_id` | method | (cls, context, cell_id) | public | `base.obj_make_list(context, cls(), db_mappings)` (src/nova/objects/instance_mapping.py:L345) | 1/3 | `src/nova/objects/instance_mapping.py:L343–L345` |
| `InstanceMappingList._get_by_instance_uuids_from_db` | method | (context, uuids) | private | `context.session.query(api_models.InstanceMapping)\ .options(orm.joinedload(api_models.InstanceMapping.cell_mapping))\ .filter(api_models.InstanceMapping.instance_uuid.in_(uuids))\ .all()` (src/nova/objects/instance_mapping.py:L350) | 1/5 | `src/nova/objects/instance_mapping.py:L349–L353` |
| `InstanceMappingList.get_by_instance_uuids` | method | (cls, context, uuids) | public | `base.obj_make_list(context, cls(), db_mappings)` (src/nova/objects/instance_mapping.py:L359) | 1/3 | `src/nova/objects/instance_mapping.py:L357–L359` |
| `InstanceMappingList._destroy_bulk_in_db` | method | (context, instance_uuids) | private | `context.session.query(api_models.InstanceMapping).filter( api_models.InstanceMapping.instance_uuid.in_(instance_uuids)).\ delete(synchronize_session=False)` (src/nova/objects/instance_mapping.py:L364) | 1/4 | `src/nova/objects/instance_mapping.py:L363–L366` |
| `InstanceMappingList.destroy_bulk` | method | (cls, context, instance_uuids) | public | `cls._destroy_bulk_in_db(context, instance_uuids)` (src/nova/objects/instance_mapping.py:L370) | 1/2 | `src/nova/objects/instance_mapping.py:L369–L370` |
| `InstanceMappingList._get_not_deleted_by_cell_and_project_from_db` | method | (context, cell_uuid, project_id, limit) | private | `query.all()` (src/nova/objects/instance_mapping.py:L397) | 3/18 | `src/nova/objects/instance_mapping.py:L374–L397` |
| `InstanceMappingList.get_not_deleted_by_cell_and_project` | method | (cls, context, cell_uuid, project_id, limit=None) | public | `base.obj_make_list(context, cls(), db_mappings)` (src/nova/objects/instance_mapping.py:L412) | 1/5 | `src/nova/objects/instance_mapping.py:L400–L412` |
| `InstanceMappingList._get_counts_in_db` | method | (context, project_id, user_id=None) | private | `counts` (src/nova/objects/instance_mapping.py:L426) | 2/11 | `src/nova/objects/instance_mapping.py:L416–L426` |
| `InstanceMappingList.get_counts` | method | (cls, context, project_id, user_id=None) | public | `cls._get_counts_in_db(context, project_id, user_id=user_id)` (src/nova/objects/instance_mapping.py:L448) | 1/2 | `src/nova/objects/instance_mapping.py:L430–L448` |
| `InstanceMappingList._get_count_by_uuids_and_user_in_db` | method | (context, uuids, user_id) | private | `query.scalar()` (src/nova/objects/instance_mapping.py:L458) | 1/7 | `src/nova/objects/instance_mapping.py:L452–L458` |
| `InstanceMappingList.get_count_by_uuids_and_user` | method | (cls, context, uuids, user_id) | public | `cls._get_count_by_uuids_and_user_in_db(context, uuids, user_id)` (src/nova/objects/instance_mapping.py:L473) | 1/2 | `src/nova/objects/instance_mapping.py:L461–L473` |

## Dependencies

- `import collections` (src/nova/objects/instance_mapping.py:L13)
- `oslo_log`: imports `log as logging` (src/nova/objects/instance_mapping.py:L15)
- `oslo_utils`: imports `versionutils` (src/nova/objects/instance_mapping.py:L16)
- `sqlalchemy`: imports `orm` (src/nova/objects/instance_mapping.py:L17)
- `sqlalchemy.orm`: imports `exc as orm_exc` (src/nova/objects/instance_mapping.py:L18)
- `sqlalchemy`: imports `sql` (src/nova/objects/instance_mapping.py:L19)
- `sqlalchemy.sql`: imports `func` (src/nova/objects/instance_mapping.py:L20)
- `nova`: imports `context as nova_context` (src/nova/objects/instance_mapping.py:L22)
- `nova.db.api`: imports `api as api_db_api` (src/nova/objects/instance_mapping.py:L23)
- `nova.db.api`: imports `models as api_models` (src/nova/objects/instance_mapping.py:L24)
- `nova`: imports `exception` (src/nova/objects/instance_mapping.py:L25)
- `nova.i18n`: imports `_` (src/nova/objects/instance_mapping.py:L26)
- `nova`: imports `objects` (src/nova/objects/instance_mapping.py:L27)
- `nova.objects`: imports `base` (src/nova/objects/instance_mapping.py:L28)
- `nova.objects`: imports `cell_mapping` (src/nova/objects/instance_mapping.py:L29)
- `nova.objects`: imports `fields` (src/nova/objects/instance_mapping.py:L30)
- `nova.objects`: imports `virtual_interface` (src/nova/objects/instance_mapping.py:L31)

## Side Effects

- **network**: db_mapping = context.session.query(api_models.InstanceMapping)\ (src/nova/objects/instance_mapping.py:L109)
- **network**: db_mapping = context.session.query( (src/nova/objects/instance_mapping.py:L152)
- **network**: context.session.add(db_mapping) (src/nova/objects/instance_mapping.py:L164)
- **network**: result = context.session.query(api_models.InstanceMapping).filter_by( (src/nova/objects/instance_mapping.py:L187)
- **network**: context.session.query(api_models.InstanceMapping) (src/nova/objects/instance_mapping.py:L206)
- **network**: context.session.add(im) (src/nova/objects/instance_mapping.py:L226)
- **network**: context.session.add(non_deleted_im) (src/nova/objects/instance_mapping.py:L232)
- **network**: context.session.query(api_models.InstanceMapping) (src/nova/objects/instance_mapping.py:L254)
- **network**: context.session.add(im) (src/nova/objects/instance_mapping.py:L292)
- **network**: return context.session.query(api_models.InstanceMapping)\ (src/nova/objects/instance_mapping.py:L323)
- **network**: return context.session.query(api_models.InstanceMapping)\ (src/nova/objects/instance_mapping.py:L337)
- **network**: return context.session.query(api_models.InstanceMapping)\ (src/nova/objects/instance_mapping.py:L350)
- **network**: return context.session.query(api_models.InstanceMapping).filter( (src/nova/objects/instance_mapping.py:L364)
- **network**: query = context.session.query(api_models.InstanceMapping) (src/nova/objects/instance_mapping.py:L376)
- **network**: project_query = context.session.query( (src/nova/objects/instance_mapping.py:L417)
- **network**: query = (context.session.query( (src/nova/objects/instance_mapping.py:L453)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/objects/instance_mapping.py:L34)
- **global-mutation**: VERSION = '1.2' (src/nova/objects/instance_mapping.py:L49)
- **global-mutation**: VERSION = '1.3' (src/nova/objects/instance_mapping.py:L314)

