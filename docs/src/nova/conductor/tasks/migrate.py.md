# src/nova/conductor/tasks/migrate.py

## Overview

This file implements the `migrate` module, defining 1 class, 1 constant, 2 functions, 8 methods, 11 imports, 1 side effect, 2 security surface entries.

Lines: total 410, code 253, comment 112, blank 45

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/conductor/tasks/migrate.py:L26–L26` |
| `replace_allocation_with_migration` | function | (context, instance, migration) | exported | `None, None` (src/nova/conductor/tasks/migrate.py:L69); `source_cn, orig_alloc` (src/nova/conductor/tasks/migrate.py:L91) | 4/34 | `src/nova/conductor/tasks/migrate.py:L29–L91` |
| `revert_allocation_for_migration` | function | (context, source_cn, instance, migration) | exported | not declared | 2/13 | `src/nova/conductor/tasks/migrate.py:L94–L112` |
| `MigrationTask` | class | — | exported | not declared | — | `src/nova/conductor/tasks/migrate.py:L115–L410` |
| `MigrationTask.__init__` | method | (self, context, instance, flavor, request_spec, clean_shutdown, compute_rpcapi, query_client, report_client, host_list, network_api) | public | not declared | 1/15 | `src/nova/conductor/tasks/migrate.py:L116–L134` |
| `MigrationTask._preallocate_migration` | method | (self) | private | `migration` (src/nova/conductor/tasks/migrate.py:L165) | 3/26 | `src/nova/conductor/tasks/migrate.py:L136–L165` |
| `MigrationTask._set_requested_destination_cell` | method | (self, legacy_props) | private | not declared | 9/28 | `src/nova/conductor/tasks/migrate.py:L167–L212` |
| `MigrationTask._is_selected_host_in_source_cell` | method | (self, selection) | private | `same_cell` (src/nova/conductor/tasks/migrate.py:L230) | 2/8 | `src/nova/conductor/tasks/migrate.py:L214–L230` |
| `MigrationTask._execute` | method | (self) | private | `` (src/nova/conductor/tasks/migrate.py:L306) | 7/53 | `src/nova/conductor/tasks/migrate.py:L232–L339` |
| `MigrationTask._schedule` | method | (self) | private | `selection` (src/nova/conductor/tasks/migrate.py:L353) | 1/8 | `src/nova/conductor/tasks/migrate.py:L341–L353` |
| `MigrationTask._reschedule` | method | (self) | private | `selection` (src/nova/conductor/tasks/migrate.py:L393) | 7/26 | `src/nova/conductor/tasks/migrate.py:L355–L393` |
| `MigrationTask.rollback` | method | (self, ex) | public | `` (src/nova/conductor/tasks/migrate.py:L401) | 3/8 | `src/nova/conductor/tasks/migrate.py:L395–L410` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/conductor/tasks/migrate.py:L13)
- `oslo_serialization`: imports `jsonutils` (src/nova/conductor/tasks/migrate.py:L14)
- `nova`: imports `availability_zones` (src/nova/conductor/tasks/migrate.py:L16)
- `nova.compute`: imports `utils as compute_utils` (src/nova/conductor/tasks/migrate.py:L17)
- `nova.conductor.tasks`: imports `base` (src/nova/conductor/tasks/migrate.py:L18)
- `nova.conductor.tasks`: imports `cross_cell_migrate` (src/nova/conductor/tasks/migrate.py:L19)
- `nova`: imports `exception` (src/nova/conductor/tasks/migrate.py:L20)
- `nova.i18n`: imports `_` (src/nova/conductor/tasks/migrate.py:L21)
- `nova`: imports `objects` (src/nova/conductor/tasks/migrate.py:L22)
- `nova.scheduler.client`: imports `report` (src/nova/conductor/tasks/migrate.py:L23)
- `nova.scheduler`: imports `utils as scheduler_utils` (src/nova/conductor/tasks/migrate.py:L24)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/conductor/tasks/migrate.py:L26)

## Security Surface

- **privilege** (`crypto-key`): :raises: keystoneauth1.exceptions.base.ClientException on failure to (src/nova/conductor/tasks/migrate.py:L32)
- **sink** (`db-write`): :raises: NoValidHost if placement rejects the update for other reasons (src/nova/conductor/tasks/migrate.py:L41)

