# src/nova/db/main/migrations/env.py

## Overview

This file implements the `env` module, defining 3 functions, 2 variables, 5 imports.

Lines: total 129, code 82, comment 20, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `config` | variable | — | exported | not declared | — | `src/nova/db/main/migrations/env.py:L23–L23` |
| `target_metadata` | variable | — | exported | not declared | — | `src/nova/db/main/migrations/env.py:L31–L31` |
| `include_name` | function | (name, type_, parent_names) | exported | `False` (src/nova/db/main/migrations/env.py:L50); `name not in models.REMOVED_TABLES` (src/nova/db/main/migrations/env.py:L52); `(parent_names['table_name'], name) not in models.REMOVED_COLUMNS` (src/nova/db/main/migrations/env.py:L55); `True` (src/nova/db/main/migrations/env.py:L57) | 4/8 | `src/nova/db/main/migrations/env.py:L34–L57` |
| `run_migrations_offline` | function | — | exported | not declared | 1/12 | `src/nova/db/main/migrations/env.py:L60–L80` |
| `run_migrations_online` | function | — | exported | not declared | 2/26 | `src/nova/db/main/migrations/env.py:L83–L123` |

## Dependencies

- `logging.config`: imports `fileConfig` (src/nova/db/main/migrations/env.py:L13)
- `alembic`: imports `context` (src/nova/db/main/migrations/env.py:L15)
- `sqlalchemy`: imports `engine_from_config` (src/nova/db/main/migrations/env.py:L16)
- `sqlalchemy`: imports `pool` (src/nova/db/main/migrations/env.py:L17)
- `nova.db.main`: imports `models` (src/nova/db/main/migrations/env.py:L19)

