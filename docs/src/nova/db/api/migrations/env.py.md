# src/nova/db/api/migrations/env.py

## Overview

This file implements the `env` module, defining 3 functions, 2 variables, 5 imports.

Lines: total 123, code 80, comment 17, blank 26

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `config` | variable | — | exported | not declared | — | `src/nova/db/api/migrations/env.py:L23–L23` |
| `target_metadata` | variable | — | exported | not declared | — | `src/nova/db/api/migrations/env.py:L31–L31` |
| `include_name` | function | (name, type_, parent_names) | exported | `name not in models.REMOVED_TABLES` (src/nova/db/api/migrations/env.py:L46); `(parent_names['table_name'], name) not in models.REMOVED_COLUMNS` (src/nova/db/api/migrations/env.py:L49); `True` (src/nova/db/api/migrations/env.py:L51) | 3/6 | `src/nova/db/api/migrations/env.py:L34–L51` |
| `run_migrations_offline` | function | — | exported | not declared | 1/12 | `src/nova/db/api/migrations/env.py:L54–L74` |
| `run_migrations_online` | function | — | exported | not declared | 2/26 | `src/nova/db/api/migrations/env.py:L77–L117` |

## Dependencies

- `logging.config`: imports `fileConfig` (src/nova/db/api/migrations/env.py:L13)
- `alembic`: imports `context` (src/nova/db/api/migrations/env.py:L15)
- `sqlalchemy`: imports `engine_from_config` (src/nova/db/api/migrations/env.py:L16)
- `sqlalchemy`: imports `pool` (src/nova/db/api/migrations/env.py:L17)
- `nova.db.api`: imports `models` (src/nova/db/api/migrations/env.py:L19)

