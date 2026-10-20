# src/nova/compute/migration_list.py

## Overview

This file implements the `migration_list` module, defining 2 classs, 1 function, 6 methods, 1 property, 7 imports.

Lines: total 85, code 53, comment 17, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `MigrationSortContext` | class | — | exported | not declared | — | `src/nova/compute/migration_list.py:L23–L39` |
| `MigrationSortContext.__init__` | method | (self, sort_keys, sort_dirs) | public | not declared | 3/8 | `src/nova/compute/migration_list.py:L24–L39` |
| `MigrationLister` | class | — | exported | not declared | — | `src/nova/compute/migration_list.py:L42–L78` |
| `MigrationLister.__init__` | method | (self, sort_keys, sort_dirs) | public | not declared | 1/3 | `src/nova/compute/migration_list.py:L43–L45` |
| `MigrationLister.marker_identifier` | method | (self) | public | `'uuid'` (src/nova/compute/migration_list.py:L49) | 1/2 | `src/nova/compute/migration_list.py:L48–L49` |
| `MigrationLister.get_marker_record` | method | (self, ctx, marker) | public | `cell_uuid, db_migration` (src/nova/compute/migration_list.py:L66) | 4/12 | `src/nova/compute/migration_list.py:L51–L66` |
| `MigrationLister.get_marker_by_values` | method | (self, ctx, values) | public | `db.migration_get_by_sort_filters(ctx, self.sort_ctx.sort_keys, self.sort_ctx.sort_dirs, values)` (src/nova/compute/migration_list.py:L69) | 1/5 | `src/nova/compute/migration_list.py:L68–L72` |
| `MigrationLister.get_by_filters` | method | (self, ctx, filters, limit, marker, **kwargs) | public | `db.migration_get_all_by_filters( ctx, filters, limit=limit, marker=marker, sort_keys=self.sort_ctx.sort_keys, sort_dirs=self.sort_ctx.sort_dirs)` (src/nova/compute/migration_list.py:L75) | 1/5 | `src/nova/compute/migration_list.py:L74–L78` |
| `get_migration_objects_sorted` | function | (ctx, filters, limit, marker, sort_keys, sort_dirs) | exported | `base.obj_make_list(ctx, objects.MigrationList(), mig_generator)` (src/nova/compute/migration_list.py:L85) | 1/5 | `src/nova/compute/migration_list.py:L81–L85` |
| `MigrationLister.marker_identifier` | property | — | public | not declared | — | `src/nova/compute/migration_list.py:L47–L49` |

## Dependencies

- `import copy` (src/nova/compute/migration_list.py:L13)
- `nova.compute`: imports `multi_cell_list` (src/nova/compute/migration_list.py:L15)
- `nova`: imports `context` (src/nova/compute/migration_list.py:L16)
- `nova.db.main`: imports `api as db` (src/nova/compute/migration_list.py:L17)
- `nova`: imports `exception` (src/nova/compute/migration_list.py:L18)
- `nova`: imports `objects` (src/nova/compute/migration_list.py:L19)
- `nova.objects`: imports `base` (src/nova/compute/migration_list.py:L20)

