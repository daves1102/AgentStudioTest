# src/nova/db/main/migrations/versions/13863f4e1612_create_share_mapping_table.py

## Overview

This file implements the `13863f4e1612_create_share_mapping_table` module, defining 2 functions, 4 variables, 2 imports.

Lines: total 64, code 43, comment 12, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `revision` | variable | — | exported | not declared | — | `src/nova/db/main/migrations/versions/13863f4e1612_create_share_mapping_table.py:L25–L25` |
| `down_revision` | variable | — | exported | not declared | — | `src/nova/db/main/migrations/versions/13863f4e1612_create_share_mapping_table.py:L26–L26` |
| `branch_labels` | variable | — | exported | not declared | — | `src/nova/db/main/migrations/versions/13863f4e1612_create_share_mapping_table.py:L27–L27` |
| `depends_on` | variable | — | exported | not declared | — | `src/nova/db/main/migrations/versions/13863f4e1612_create_share_mapping_table.py:L28–L28` |
| `upgrade` | function | — | exported | not declared | 1/30 | `src/nova/db/main/migrations/versions/13863f4e1612_create_share_mapping_table.py:L31–L60` |
| `downgrade` | function | — | exported | not declared | 1/2 | `src/nova/db/main/migrations/versions/13863f4e1612_create_share_mapping_table.py:L63–L64` |

## Dependencies

- `alembic`: imports `op` (src/nova/db/main/migrations/versions/13863f4e1612_create_share_mapping_table.py:L20)
- `import sqlalchemy as sa` (src/nova/db/main/migrations/versions/13863f4e1612_create_share_mapping_table.py:L21)

