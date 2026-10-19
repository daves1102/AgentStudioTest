# src/nova/db/migration.py

## Overview

This file implements the `migration` module, defining 1 constant, 5 functions, 8 imports, 3 side effects.

Lines: total 108, code 51, comment 30, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/db/migration.py:L28–L28` |
| `_get_engine` | function | (database='main', context=None) | unexported | `main_db_api.get_engine(context=context)` (src/nova/db/migration.py:L33); `api_db_api.get_engine()` (src/nova/db/migration.py:L36) | 3/5 | `src/nova/db/migration.py:L31–L36` |
| `_find_alembic_conf` | function | (database='main') | unexported | `config` (src/nova/db/migration.py:L51) | 1/7 | `src/nova/db/migration.py:L39–L51` |
| `_upgrade_alembic` | function | (engine, config, version) | unexported | not declared | 2/4 | `src/nova/db/migration.py:L54–L58` |
| `db_sync` | function | (version=None, database='main', context=None) | exported | not declared | 4/15 | `src/nova/db/migration.py:L61–L94` |
| `db_version` | function | (database='main', context=None) | exported | `version` (src/nova/db/migration.py:L108) | 2/8 | `src/nova/db/migration.py:L97–L108` |

## Dependencies

- `import os` (src/nova/db/migration.py:L17)
- `alembic`: imports `command as alembic_api` (src/nova/db/migration.py:L19)
- `alembic`: imports `config as alembic_config` (src/nova/db/migration.py:L20)
- `alembic.runtime`: imports `migration as alembic_migration` (src/nova/db/migration.py:L21)
- `oslo_log`: imports `log as logging` (src/nova/db/migration.py:L22)
- `nova.db.api`: imports `api as api_db_api` (src/nova/db/migration.py:L24)
- `nova.db.main`: imports `api as main_db_api` (src/nova/db/migration.py:L25)
- `nova`: imports `exception` (src/nova/db/migration.py:L26)

## Side Effects

- **file-io**: path = os.path.join( (src/nova/db/migration.py:L42)
- **file-io**: os.path.abspath(os.path.dirname(__file__)), (src/nova/db/migration.py:L43)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/db/migration.py:L28)

