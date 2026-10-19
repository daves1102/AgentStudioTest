# src/nova/objects/migration_context.py

## Overview

This file implements the `migration_context` module, defining 1 class, 2 constants, 1 field, 5 methods, 1 variable, 8 imports, 2 side effects.

Lines: total 140, code 105, comment 16, blank 19

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/objects/migration_context.py:L25–L25` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/migration_context.py:L27–L29` |
| `MigrationContext` | class | — | exported | not declared | — | `src/nova/objects/migration_context.py:L33–L140` |
| `MigrationContext.VERSION` | constant | — | public | not declared | — | `src/nova/objects/migration_context.py:L47–L47` |
| `MigrationContext.fields` | field | — | public | not declared | — | `src/nova/objects/migration_context.py:L49–L68` |
| `MigrationContext.obj_make_compatible` | method | (cls, primitive, target_version) | public | not declared | 3/10 | `src/nova/objects/migration_context.py:L71–L80` |
| `MigrationContext.obj_from_db_obj` | method | (cls, db_obj) | public | `cls.obj_from_primitive(primitive)` (src/nova/objects/migration_context.py:L85) | 1/3 | `src/nova/objects/migration_context.py:L83–L85` |
| `MigrationContext.get_by_instance_uuid` | method | (cls, context, instance_uuid) | public | `None` (src/nova/objects/migration_context.py:L97); `cls.obj_from_db_obj(db_extra['migration_context'])` (src/nova/objects/migration_context.py:L99) | 3/9 | `src/nova/objects/migration_context.py:L89–L99` |
| `MigrationContext.get_pci_mapping_for_migration` | method | (self, revert) | public | `{curr_dev.address: upd_dev for curr_dev in current_pci_devs for upd_dev in updated_pci_devs if curr_dev.request_id == upd_dev.request_id}` (src/nova/objects/migration_context.py:L124); `{}` (src/nova/objects/migration_context.py:L128) | 9/15 | `src/nova/objects/migration_context.py:L101–L128` |
| `MigrationContext.is_cross_cell_move` | method | (self) | public | `migration.cross_cell_move` (src/nova/objects/migration_context.py:L140) | 1/4 | `src/nova/objects/migration_context.py:L130–L140` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/objects/migration_context.py:L15)
- `oslo_serialization`: imports `jsonutils` (src/nova/objects/migration_context.py:L16)
- `oslo_utils`: imports `versionutils` (src/nova/objects/migration_context.py:L17)
- `nova.db.main`: imports `api as db` (src/nova/objects/migration_context.py:L19)
- `nova`: imports `exception` (src/nova/objects/migration_context.py:L20)
- `nova`: imports `objects` (src/nova/objects/migration_context.py:L21)
- `nova.objects`: imports `base` (src/nova/objects/migration_context.py:L22)
- `nova.objects`: imports `fields` (src/nova/objects/migration_context.py:L23)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/objects/migration_context.py:L25)
- **global-mutation**: VERSION = '1.2' (src/nova/objects/migration_context.py:L47)

