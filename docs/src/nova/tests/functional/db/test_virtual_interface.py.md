# src/nova/tests/functional/db/test_virtual_interface.py

## Overview

This file implements the `test_virtual_interface` module, defining 1 class, 3 constants, 2 functions, 13 methods, 11 imports, 3 side effects, 1 security surface entry.

Lines: total 372, code 256, comment 47, blank 69

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/db/test_virtual_interface.py:L27–L27` |
| `FAKE_UUID` | constant | — | exported | not declared | — | `src/nova/tests/functional/db/test_virtual_interface.py:L29–L29` |
| `_delete_vif_list` | function | (context, instance_uuid) | unexported | not declared | 2/5 | `src/nova/tests/functional/db/test_virtual_interface.py:L32–L38` |
| `_verify_list_fulfillment` | function | (context, instance_uuid) | unexported | `cached_vif_ids == db_vif_ids` (src/nova/tests/functional/db/test_virtual_interface.py:L55) | 4/13 | `src/nova/tests/functional/db/test_virtual_interface.py:L41–L55` |
| `VirtualInterfaceListMigrationTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_virtual_interface.py:L58–L372` |
| `VirtualInterfaceListMigrationTestCase.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/db/test_virtual_interface.py:L61–L61` |
| `VirtualInterfaceListMigrationTestCase.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/db/test_virtual_interface.py:L63–L71` |
| `VirtualInterfaceListMigrationTestCase._create_instances` | method | (self, pre_newton=2, deleted=0, total=5, target_cell=None) | private | not declared | 9/45 | `src/nova/tests/functional/db/test_virtual_interface.py:L73–L129` |
| `VirtualInterfaceListMigrationTestCase.test_migration_nothing_to_migrate` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_virtual_interface.py:L131–L140` |
| `VirtualInterfaceListMigrationTestCase.test_migration_verify_max_count` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_virtual_interface.py:L142–L151` |
| `VirtualInterfaceListMigrationTestCase.test_migration_do_not_step_to_next_cell` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/db/test_virtual_interface.py:L153–L174` |
| `VirtualInterfaceListMigrationTestCase.test_migration_pre_newton_instances` | method | (self) | public | not declared | 2/12 | `src/nova/tests/functional/db/test_virtual_interface.py:L176–L196` |
| `VirtualInterfaceListMigrationTestCase.test_migration_pre_newton_instance_new_vifs` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/db/test_virtual_interface.py:L198–L218` |
| `VirtualInterfaceListMigrationTestCase.test_migration_attach_in_progress` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/db/test_virtual_interface.py:L220–L241` |
| `VirtualInterfaceListMigrationTestCase.test_migration_empty_network_info` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/db/test_virtual_interface.py:L243–L260` |
| `VirtualInterfaceListMigrationTestCase.test_migration_inconsistent_data` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/db/test_virtual_interface.py:L262–L287` |
| `VirtualInterfaceListMigrationTestCase.test_migration_dont_touch_deleted_objects` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/db/test_virtual_interface.py:L289–L299` |
| `VirtualInterfaceListMigrationTestCase.test_migration_multiple_cells` | method | (self) | public | not declared | 1/22 | `src/nova/tests/functional/db/test_virtual_interface.py:L301–L339` |
| `VirtualInterfaceListMigrationTestCase.test_migration_multiple_cells_new_instances_in_meantime` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/db/test_virtual_interface.py:L341–L372` |

## Dependencies

- `import datetime` (src/nova/tests/functional/db/test_virtual_interface.py:L13)
- `unittest`: imports `mock` (src/nova/tests/functional/db/test_virtual_interface.py:L14)
- `oslo_config`: imports `cfg` (src/nova/tests/functional/db/test_virtual_interface.py:L16)
- `oslo_utils`: imports `timeutils` (src/nova/tests/functional/db/test_virtual_interface.py:L17)
- `nova`: imports `context` (src/nova/tests/functional/db/test_virtual_interface.py:L19)
- `nova`: imports `exception` (src/nova/tests/functional/db/test_virtual_interface.py:L20)
- `nova.network`: imports `model as network_model` (src/nova/tests/functional/db/test_virtual_interface.py:L21)
- `nova`: imports `objects` (src/nova/tests/functional/db/test_virtual_interface.py:L22)
- `nova.objects`: imports `virtual_interface` (src/nova/tests/functional/db/test_virtual_interface.py:L23)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/db/test_virtual_interface.py:L24)
- `nova.tests.unit`: imports `fake_network` (src/nova/tests/functional/db/test_virtual_interface.py:L25)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/tests/functional/db/test_virtual_interface.py:L27)
- **global-mutation**: FAKE_UUID = '00000000-0000-0000-0000-000000000000' (src/nova/tests/functional/db/test_virtual_interface.py:L29)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/db/test_virtual_interface.py:L61)

## Security Surface

- **sink** (`db-write`): nwinfo.insert(0, interface) (src/nova/tests/functional/db/test_virtual_interface.py:L275)

