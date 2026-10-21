# src/nova/tests/unit/db/test_migration.py

## Overview

This file implements the `test_migration` module, defining 3 classs, 7 methods, 8 imports.

Lines: total 108, code 73, comment 14, blank 21

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestDBSync` | class | — | exported | not declared | — | `src/nova/tests/unit/db/test_migration.py:L27–L65` |
| `TestDBSync.test_db_sync_invalid_database` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/test_migration.py:L29–L32` |
| `TestDBSync.test_db_sync_legacy_version` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/test_migration.py:L34–L38` |
| `TestDBSync.test_db_sync` | method | (self, mock_get_engine, mock_find_conf, mock_upgrade) | public | not declared | 1/18 | `src/nova/tests/unit/db/test_migration.py:L43–L65` |
| `TestDBVersion` | class | — | exported | not declared | — | `src/nova/tests/unit/db/test_migration.py:L70–L89` |
| `TestDBVersion.test_db_version_invalid_database` | method | (self, mock_get_engine, mock_m_context_configure) | public | not declared | 1/5 | `src/nova/tests/unit/db/test_migration.py:L72–L77` |
| `TestDBVersion.test_db_version` | method | (self, mock_get_engine, mock_m_context_configure) | public | not declared | 1/9 | `src/nova/tests/unit/db/test_migration.py:L79–L89` |
| `TestGetEngine` | class | — | exported | not declared | — | `src/nova/tests/unit/db/test_migration.py:L92–L108` |
| `TestGetEngine.test_get_main_engine` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/test_migration.py:L94–L100` |
| `TestGetEngine.test_get_api_engine` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/test_migration.py:L102–L108` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/db/test_migration.py:L15)
- `alembic.runtime`: imports `migration as alembic_migration` (src/nova/tests/unit/db/test_migration.py:L17)
- `sqlalchemy.engine`: imports `url as sa_url` (src/nova/tests/unit/db/test_migration.py:L18)
- `nova.db.api`: imports `api as api_db_api` (src/nova/tests/unit/db/test_migration.py:L20)
- `nova.db.main`: imports `api as main_db_api` (src/nova/tests/unit/db/test_migration.py:L21)
- `nova.db`: imports `migration` (src/nova/tests/unit/db/test_migration.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/db/test_migration.py:L23)
- `nova`: imports `test` (src/nova/tests/unit/db/test_migration.py:L24)

