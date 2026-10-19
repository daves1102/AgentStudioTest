# src/nova/objects/migration.py

## Overview

This file implements the `migration` module, defining 2 classs, 3 constants, 2 fields, 1 function, 22 methods, 4 propertys, 1 variable, 10 imports, 3 side effects.

Lines: total 338, code 249, comment 48, blank 41

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/objects/migration.py:L28–L28` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/migration.py:L30–L34` |
| `determine_migration_type` | function | (migration) | exported | `'resize'` (src/nova/objects/migration.py:L46); `'migration'` (src/nova/objects/migration.py:L48) | 3/10 | `src/nova/objects/migration.py:L37–L48` |
| `Migration` | class | — | exported | not declared | — | `src/nova/objects/migration.py:L52–L272` |
| `Migration.VERSION` | constant | — | public | not declared | — | `src/nova/objects/migration.py:L62–L62` |
| `Migration.fields` | field | — | public | not declared | — | `src/nova/objects/migration.py:L64–L93` |
| `Migration._from_db_object` | method | (context, migration, db_migration) | private | `migration` (src/nova/objects/migration.py:L108) | 6/12 | `src/nova/objects/migration.py:L96–L108` |
| `Migration.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 13/27 | `src/nova/objects/migration.py:L110–L136` |
| `Migration.obj_load_attr` | method | (self, attrname) | public | not declared | 3/7 | `src/nova/objects/migration.py:L139–L147` |
| `Migration._ensure_uuid` | method | (self) | private | `` (src/nova/objects/migration.py:L151) | 3/9 | `src/nova/objects/migration.py:L149–L160` |
| `Migration.get_by_uuid` | method | (cls, context, migration_uuid) | public | `cls._from_db_object(context, cls(), db_migration)` (src/nova/objects/migration.py:L166) | 1/3 | `src/nova/objects/migration.py:L164–L166` |
| `Migration.get_by_id` | method | (cls, context, migration_id) | public | `cls._from_db_object(context, cls(), db_migration)` (src/nova/objects/migration.py:L172) | 1/3 | `src/nova/objects/migration.py:L170–L172` |
| `Migration.get_by_id_and_instance` | method | (cls, context, migration_id, instance_uuid) | public | `cls._from_db_object(context, cls(), db_migration)` (src/nova/objects/migration.py:L179) | 1/4 | `src/nova/objects/migration.py:L176–L179` |
| `Migration.get_by_instance_and_status` | method | (cls, context, instance_uuid, status) | public | `cls._from_db_object(context, cls(), db_migration)` (src/nova/objects/migration.py:L186) | 1/4 | `src/nova/objects/migration.py:L183–L186` |
| `Migration.create` | method | (self) | public | not declared | 9/28 | `src/nova/objects/migration.py:L189–L223` |
| `Migration.save` | method | (self) | public | not declared | 1/6 | `src/nova/objects/migration.py:L226–L231` |
| `Migration.instance` | method | (self) | public | `self._cached_instance` (src/nova/objects/migration.py:L239) | 2/6 | `src/nova/objects/migration.py:L234–L239` |
| `Migration.instance` | method | (self, instance) | public | not declared | 1/2 | `src/nova/objects/migration.py:L242–L243` |
| `Migration.is_live_migration` | method | (self) | public | `self.migration_type == fields.MigrationType.LIVE_MIGRATION` (src/nova/objects/migration.py:L247) | 1/2 | `src/nova/objects/migration.py:L246–L247` |
| `Migration.is_resize` | method | (self) | public | `self.migration_type == fields.MigrationType.RESIZE` (src/nova/objects/migration.py:L251) | 1/2 | `src/nova/objects/migration.py:L250–L251` |
| `Migration.is_same_host_resize` | method | (self) | public | `self.is_resize and self.source_node == self.dest_node` (src/nova/objects/migration.py:L255) | 2/2 | `src/nova/objects/migration.py:L254–L255` |
| `Migration.get_dest_compute_id` | method | (self) | public | `self.dest_compute_id` (src/nova/objects/migration.py:L272) | 2/8 | `src/nova/objects/migration.py:L257–L272` |
| `MigrationList` | class | — | exported | not declared | — | `src/nova/objects/migration.py:L276–L338` |
| `MigrationList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/migration.py:L287–L287` |
| `MigrationList.fields` | field | — | public | not declared | — | `src/nova/objects/migration.py:L289–L291` |
| `MigrationList._db_migration_get_unconfirmed_by_dest_compute` | method | (context, confirm_window, dest_compute, use_slave=False) | private | `db.migration_get_unconfirmed_by_dest_compute( context, confirm_window, dest_compute)` (src/nova/objects/migration.py:L297) | 1/4 | `src/nova/objects/migration.py:L295–L298` |
| `MigrationList.get_unconfirmed_by_dest_compute` | method | (cls, context, confirm_window, dest_compute, use_slave=False) | public | `base.obj_make_list(context, cls(context), db_migrations)` (src/nova/objects/migration.py:L306) | 1/5 | `src/nova/objects/migration.py:L302–L306` |
| `MigrationList.get_in_progress_by_host_and_node` | method | (cls, context, host, node) | public | `base.obj_make_list(context, cls(context), db_migrations)` (src/nova/objects/migration.py:L313) | 1/4 | `src/nova/objects/migration.py:L310–L313` |
| `MigrationList.get_by_filters` | method | (cls, context, filters, sort_keys=None, sort_dirs=None, limit=None, marker=None) | public | `base.obj_make_list(context, cls(context), db_migrations)` (src/nova/objects/migration.py:L322) | 1/6 | `src/nova/objects/migration.py:L317–L322` |
| `MigrationList.get_in_progress_by_instance` | method | (cls, context, instance_uuid, migration_type=None) | public | `base.obj_make_list(context, cls(context), db_migrations)` (src/nova/objects/migration.py:L330) | 1/5 | `src/nova/objects/migration.py:L326–L330` |
| `MigrationList.get_in_progress_and_error` | method | (cls, context, host, node) | public | `base.obj_make_list(context, cls(context), db_migrations)` (src/nova/objects/migration.py:L338) | 1/5 | `src/nova/objects/migration.py:L334–L338` |
| `Migration.instance` | property | — | public | not declared | — | `src/nova/objects/migration.py:L233–L239` |
| `Migration.is_live_migration` | property | — | public | not declared | — | `src/nova/objects/migration.py:L245–L247` |
| `Migration.is_resize` | property | — | public | not declared | — | `src/nova/objects/migration.py:L249–L251` |
| `Migration.is_same_host_resize` | property | — | public | not declared | — | `src/nova/objects/migration.py:L253–L255` |

## Dependencies

- `oslo_db`: imports `exception as db_exc` (src/nova/objects/migration.py:L15)
- `oslo_log`: imports `log as logging` (src/nova/objects/migration.py:L16)
- `oslo_utils`: imports `uuidutils` (src/nova/objects/migration.py:L17)
- `oslo_utils`: imports `versionutils` (src/nova/objects/migration.py:L18)
- `nova.db.main`: imports `api as db` (src/nova/objects/migration.py:L20)
- `nova`: imports `exception` (src/nova/objects/migration.py:L21)
- `nova.i18n`: imports `_` (src/nova/objects/migration.py:L22)
- `nova`: imports `objects` (src/nova/objects/migration.py:L23)
- `nova.objects`: imports `base` (src/nova/objects/migration.py:L24)
- `nova.objects`: imports `fields` (src/nova/objects/migration.py:L25)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/objects/migration.py:L28)
- **global-mutation**: VERSION = '1.8' (src/nova/objects/migration.py:L62)
- **global-mutation**: VERSION = '1.5' (src/nova/objects/migration.py:L287)

