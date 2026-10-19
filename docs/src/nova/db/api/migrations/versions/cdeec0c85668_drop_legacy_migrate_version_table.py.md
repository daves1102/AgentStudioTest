# src/nova/db/api/migrations/versions/cdeec0c85668_drop_legacy_migrate_version_table.py

## Overview

This file implements the `cdeec0c85668_drop_legacy_migrate_version_table` module, defining 1 function, 4 variables, 2 imports.

Lines: total 36, code 17, comment 12, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `revision` | variable | — | exported | not declared | — | `src/nova/db/api/migrations/versions/cdeec0c85668_drop_legacy_migrate_version_table.py:L24–L24` |
| `down_revision` | variable | — | exported | not declared | — | `src/nova/db/api/migrations/versions/cdeec0c85668_drop_legacy_migrate_version_table.py:L25–L25` |
| `branch_labels` | variable | — | exported | not declared | — | `src/nova/db/api/migrations/versions/cdeec0c85668_drop_legacy_migrate_version_table.py:L26–L26` |
| `depends_on` | variable | — | exported | not declared | — | `src/nova/db/api/migrations/versions/cdeec0c85668_drop_legacy_migrate_version_table.py:L27–L27` |
| `upgrade` | function | — | exported | not declared | 2/6 | `src/nova/db/api/migrations/versions/cdeec0c85668_drop_legacy_migrate_version_table.py:L30–L36` |

## Dependencies

- `alembic`: imports `op` (src/nova/db/api/migrations/versions/cdeec0c85668_drop_legacy_migrate_version_table.py:L20)
- `sqlalchemy.engine`: imports `reflection` (src/nova/db/api/migrations/versions/cdeec0c85668_drop_legacy_migrate_version_table.py:L21)

