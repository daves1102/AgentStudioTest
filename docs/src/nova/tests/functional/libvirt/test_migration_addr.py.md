# src/nova/tests/functional/libvirt/test_migration_addr.py

## Overview

This file implements the `test_migration_addr` module, defining 1 class, 2 constants, 11 methods, 3 imports, 2 side effects.

Lines: total 91, code 55, comment 13, blank 23

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_migration_addr.py:L21–L21` |
| `LibvirtMigrationAddrTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_migration_addr.py:L24–L91` |
| `LibvirtMigrationAddrTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_migration_addr.py:L25–L25` |
| `LibvirtMigrationAddrTest.setUp` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_migration_addr.py:L27–L28` |
| `LibvirtMigrationAddrTest._test_move_op` | method | (self, move_op, migration_inbound_addr=None) | private | not declared | 3/15 | `src/nova/tests/functional/libvirt/test_migration_addr.py:L30–L49` |
| `LibvirtMigrationAddrTest._cold_migrate` | method | (self, server) | private | not declared | 1/7 | `src/nova/tests/functional/libvirt/test_migration_addr.py:L51–L57` |
| `LibvirtMigrationAddrTest._resize` | method | (self, server) | private | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_migration_addr.py:L59–L67` |
| `LibvirtMigrationAddrTest._evacuate` | method | (self, server) | private | not declared | 1/5 | `src/nova/tests/functional/libvirt/test_migration_addr.py:L69–L73` |
| `LibvirtMigrationAddrTest.test_cold_migrate_with_ip` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_migration_addr.py:L75–L76` |
| `LibvirtMigrationAddrTest.test_cold_migrate_with_hostname` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_migration_addr.py:L78–L79` |
| `LibvirtMigrationAddrTest.test_resize_with_ip` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_migration_addr.py:L81–L82` |
| `LibvirtMigrationAddrTest.test_resize_with_hostname` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_migration_addr.py:L84–L85` |
| `LibvirtMigrationAddrTest.test_evacuate_with_ip` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_migration_addr.py:L87–L88` |
| `LibvirtMigrationAddrTest.test_evacuate_with_hostname` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_migration_addr.py:L90–L91` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/functional/libvirt/test_migration_addr.py:L15)
- `oslo_config`: imports `cfg` (src/nova/tests/functional/libvirt/test_migration_addr.py:L17)
- `nova.tests.functional.libvirt`: imports `base` (src/nova/tests/functional/libvirt/test_migration_addr.py:L19)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/tests/functional/libvirt/test_migration_addr.py:L21)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/libvirt/test_migration_addr.py:L25)

