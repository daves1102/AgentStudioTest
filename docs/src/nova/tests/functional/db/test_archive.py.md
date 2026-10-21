# src/nova/tests/functional/db/test_archive.py

## Overview

This file implements the `test_archive` module, defining 1 class, 1 function, 9 methods, 12 imports, 1 security surface entry.

Lines: total 353, code 224, comment 88, blank 41

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestDatabaseArchive` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_archive.py:L31–L353` |
| `TestDatabaseArchive.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/db/test_archive.py:L34–L40` |
| `TestDatabaseArchive.test_archive_deleted_rows` | method | (self) | public | not declared | 1/21 | `src/nova/tests/functional/db/test_archive.py:L42–L75` |
| `TestDatabaseArchive.test_archive_deleted_rows_with_undeleted_residue` | method | (self) | public | not declared | 1/39 | `src/nova/tests/functional/db/test_archive.py:L77–L134` |
| `TestDatabaseArchive.test_archive_deleted_rows_incomplete` | method | (self) | public | not declared | 4/17 | `src/nova/tests/functional/db/test_archive.py:L136–L175` |
| `TestDatabaseArchive.test_archive_deleted_rows_parent_child_trees_one_at_time` | method | (self) | public | not declared | 2/10 | `src/nova/tests/functional/db/test_archive.py:L177–L219` |
| `TestDatabaseArchive._get_table_counts` | method | (self) | private | `results` (src/nova/tests/functional/db/test_archive.py:L233) | 2/13 | `src/nova/tests/functional/db/test_archive.py:L221–L233` |
| `TestDatabaseArchive.test_archive_then_purge_all` | method | (self) | public | not declared | 2/29 | `src/nova/tests/functional/db/test_archive.py:L235–L281` |
| `TestDatabaseArchive.test_archive_then_purge_all.status` | function | (msg) | public | not declared | — | `src/nova/tests/functional/db/test_archive.py:L266–L267` |
| `TestDatabaseArchive.test_archive_then_purge_by_date` | method | (self) | public | not declared | 1/29 | `src/nova/tests/functional/db/test_archive.py:L283–L338` |
| `TestDatabaseArchive.test_purge_with_real_date` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/db/test_archive.py:L340–L353` |

## Dependencies

- `import datetime` (src/nova/tests/functional/db/test_archive.py:L15)
- `import re` (src/nova/tests/functional/db/test_archive.py:L16)
- `dateutil`: imports `parser as dateutil_parser` (src/nova/tests/functional/db/test_archive.py:L18)
- `oslo_utils`: imports `fixture as osloutils_fixture` (src/nova/tests/functional/db/test_archive.py:L19)
- `oslo_utils`: imports `timeutils` (src/nova/tests/functional/db/test_archive.py:L20)
- `import sqlalchemy as sa` (src/nova/tests/functional/db/test_archive.py:L21)
- `sqlalchemy`: imports `func` (src/nova/tests/functional/db/test_archive.py:L22)
- `nova`: imports `context` (src/nova/tests/functional/db/test_archive.py:L24)
- `nova.db.main`: imports `api as db` (src/nova/tests/functional/db/test_archive.py:L25)
- `nova`: imports `objects` (src/nova/tests/functional/db/test_archive.py:L26)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/db/test_archive.py:L27)
- `nova`: imports `utils as nova_utils` (src/nova/tests/functional/db/test_archive.py:L28)

## Security Surface

- **sink** (`db-write`): sa.select(func.count()).select_from(table) (src/nova/tests/functional/db/test_archive.py:L230)

