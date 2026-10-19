# src/nova/db/api/migrations/versions/d67eeaabee36_initial_version.py

## Overview

This file implements the `d67eeaabee36_initial_version` module, defining 3 functions, 4 variables, 5 imports, 6 security surface entries.

Lines: total 603, code 544, comment 16, blank 43

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `revision` | variable | — | exported | not declared | — | `src/nova/db/api/migrations/versions/d67eeaabee36_initial_version.py:L28–L28` |
| `down_revision` | variable | — | exported | not declared | — | `src/nova/db/api/migrations/versions/d67eeaabee36_initial_version.py:L29–L29` |
| `branch_labels` | variable | — | exported | not declared | — | `src/nova/db/api/migrations/versions/d67eeaabee36_initial_version.py:L30–L30` |
| `depends_on` | variable | — | exported | not declared | — | `src/nova/db/api/migrations/versions/d67eeaabee36_initial_version.py:L31–L31` |
| `InetSmall` | function | — | exported | `sa.String(length=39).with_variant( dialects.postgresql.INET(), 'postgresql' )` (src/nova/db/api/migrations/versions/d67eeaabee36_initial_version.py:L35) | 1/4 | `src/nova/db/api/migrations/versions/d67eeaabee36_initial_version.py:L34–L37` |
| `upgrade` | function | — | exported | not declared | 2/524 | `src/nova/db/api/migrations/versions/d67eeaabee36_initial_version.py:L40–L599` |
| `downgrade` | function | — | exported | not declared | 1/2 | `src/nova/db/api/migrations/versions/d67eeaabee36_initial_version.py:L602–L603` |

## Dependencies

- `alembic`: imports `op` (src/nova/db/api/migrations/versions/d67eeaabee36_initial_version.py:L20)
- `import sqlalchemy as sa` (src/nova/db/api/migrations/versions/d67eeaabee36_initial_version.py:L21)
- `sqlalchemy`: imports `dialects` (src/nova/db/api/migrations/versions/d67eeaabee36_initial_version.py:L22)
- `nova.db`: imports `types` (src/nova/db/api/migrations/versions/d67eeaabee36_initial_version.py:L24)
- `nova.objects`: imports `keypair` (src/nova/db/api/migrations/versions/d67eeaabee36_initial_version.py:L25)

## Security Surface

- **sink** (`db-write`): sa.Column('transport_url', sa.Text()), (src/nova/db/api/migrations/versions/d67eeaabee36_initial_version.py:L50)
- **sink** (`db-write`): sa.Column('database_connection', sa.Text()), (src/nova/db/api/migrations/versions/d67eeaabee36_initial_version.py:L51)
- **sink** (`db-write`): sa.Column('description', sa.Text()), (src/nova/db/api/migrations/versions/d67eeaabee36_initial_version.py:L121)
- **sink** (`db-write`): sa.Column('tags', sa.Text()), (src/nova/db/api/migrations/versions/d67eeaabee36_initial_version.py:L201)
- **sink** (`db-write`): sa.Column('public_key', sa.Text()), (src/nova/db/api/migrations/versions/d67eeaabee36_initial_version.py:L218)
- **sink** (`db-write`): 'generation', sa.Integer, default=0, server_default=sa.text('0'), (src/nova/db/api/migrations/versions/d67eeaabee36_initial_version.py:L367)

