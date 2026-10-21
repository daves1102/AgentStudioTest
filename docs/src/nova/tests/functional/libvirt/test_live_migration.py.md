# src/nova/tests/functional/libvirt/test_live_migration.py

## Overview

This file implements the `test_live_migration` module, defining 5 classs, 2 constants, 2 fields, 10 methods, 7 imports, 2 side effects.

Lines: total 421, code 265, comment 96, blank 60

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LiveMigrationWithLockBase` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_live_migration.py:L25–L74` |
| `LiveMigrationWithLockBase.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_live_migration.py:L38–L38` |
| `LiveMigrationWithLockBase.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_live_migration.py:L39–L39` |
| `LiveMigrationWithLockBase.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_live_migration.py:L41–L54` |
| `LiveMigrationWithLockBase._migrate_stub` | method | (self, domain, destination, params, flags) | private | not declared | 1/11 | `src/nova/tests/functional/libvirt/test_live_migration.py:L56–L74` |
| `LiveMigrationQueuedAbortTestVmStatus` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_live_migration.py:L77–L125` |
| `LiveMigrationQueuedAbortTestVmStatus.test_queued_live_migration_abort_vm_status` | method | (self) | public | not declared | 1/26 | `src/nova/tests/functional/libvirt/test_live_migration.py:L84–L125` |
| `LiveMigrationQueuedAbortTestLeftoversRemoved` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_live_migration.py:L128–L212` |
| `LiveMigrationQueuedAbortTestLeftoversRemoved.test_queued_live_migration_abort_leftovers_removed` | method | (self) | public | not declared | 1/51 | `src/nova/tests/functional/libvirt/test_live_migration.py:L137–L212` |
| `ManagerCleanupHostCancelsQueuedMigration` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_live_migration.py:L215–L303` |
| `ManagerCleanupHostCancelsQueuedMigration.test_cleanup_host_cancels_queued_live_migration` | method | (self) | public | not declared | 3/39 | `src/nova/tests/functional/libvirt/test_live_migration.py:L226–L303` |
| `LiveMigrationWithCpuSharedSet` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_live_migration.py:L306–L421` |
| `LiveMigrationWithCpuSharedSet.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_live_migration.py:L313–L313` |
| `LiveMigrationWithCpuSharedSet.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_live_migration.py:L314–L314` |
| `LiveMigrationWithCpuSharedSet.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/libvirt/test_live_migration.py:L316–L323` |
| `LiveMigrationWithCpuSharedSet.get_host` | method | (self, server_id) | public | `server['OS-EXT-SRV-ATTR:host']` (src/nova/tests/functional/libvirt/test_live_migration.py:L327) | 1/3 | `src/nova/tests/functional/libvirt/test_live_migration.py:L325–L327` |
| `LiveMigrationWithCpuSharedSet.test_live_migration_to_different_cpu_shared_set` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/libvirt/test_live_migration.py:L329–L355` |
| `LiveMigrationWithCpuSharedSet.test_live_migration_to_no_cpu_shared_set` | method | (self) | public | not declared | 1/24 | `src/nova/tests/functional/libvirt/test_live_migration.py:L357–L396` |
| `LiveMigrationWithCpuSharedSet.test_live_migration_from_no_cpu_shared_set_to_cpu_shared_set` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/libvirt/test_live_migration.py:L398–L421` |

## Dependencies

- `import copy` (src/nova/tests/functional/libvirt/test_live_migration.py:L15)
- `import threading` (src/nova/tests/functional/libvirt/test_live_migration.py:L16)
- `unittest`: imports `mock` (src/nova/tests/functional/libvirt/test_live_migration.py:L17)
- `lxml`: imports `etree` (src/nova/tests/functional/libvirt/test_live_migration.py:L19)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/libvirt/test_live_migration.py:L20)
- `nova.tests.functional.libvirt`: imports `base as libvirt_base` (src/nova/tests/functional/libvirt/test_live_migration.py:L21)
- `nova`: imports `thread_pool_factory` (src/nova/tests/functional/libvirt/test_live_migration.py:L22)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/libvirt/test_live_migration.py:L39)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/libvirt/test_live_migration.py:L314)

