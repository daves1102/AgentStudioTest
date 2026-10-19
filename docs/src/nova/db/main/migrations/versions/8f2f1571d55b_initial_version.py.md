# src/nova/db/main/migrations/versions/8f2f1571d55b_initial_version.py

## Overview

This file implements the `8f2f1571d55b_initial_version` module, defining 6 functions, 4 variables, 7 imports.

Lines: total 1629, code 1436, comment 88, blank 105

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `revision` | variable | — | exported | not declared | — | `src/nova/db/main/migrations/versions/8f2f1571d55b_initial_version.py:L30–L30` |
| `down_revision` | variable | — | exported | not declared | — | `src/nova/db/main/migrations/versions/8f2f1571d55b_initial_version.py:L31–L31` |
| `branch_labels` | variable | — | exported | not declared | — | `src/nova/db/main/migrations/versions/8f2f1571d55b_initial_version.py:L32–L32` |
| `depends_on` | variable | — | exported | not declared | — | `src/nova/db/main/migrations/versions/8f2f1571d55b_initial_version.py:L33–L33` |
| `Inet` | function | — | exported | `sa.String(length=43).with_variant( dialects.postgresql.INET(), 'postgresql', )` (src/nova/db/main/migrations/versions/8f2f1571d55b_initial_version.py:L37) | 1/4 | `src/nova/db/main/migrations/versions/8f2f1571d55b_initial_version.py:L36–L39` |
| `InetSmall` | function | — | exported | `sa.String(length=39).with_variant( dialects.postgresql.INET(), 'postgresql', )` (src/nova/db/main/migrations/versions/8f2f1571d55b_initial_version.py:L43) | 1/4 | `src/nova/db/main/migrations/versions/8f2f1571d55b_initial_version.py:L42–L45` |
| `process` | function | (element, compiler, **kw) | exported | `compiler.visit_foreign_key_constraint(element, **kw)` (src/nova/db/main/migrations/versions/8f2f1571d55b_initial_version.py:L52) | 1/3 | `src/nova/db/main/migrations/versions/8f2f1571d55b_initial_version.py:L50–L52` |
| `_create_shadow_tables` | function | (connection) | unexported | not declared | 24/71 | `src/nova/db/main/migrations/versions/8f2f1571d55b_initial_version.py:L55–L185` |
| `upgrade` | function | — | exported | not declared | 4/1335 | `src/nova/db/main/migrations/versions/8f2f1571d55b_initial_version.py:L188–L1625` |
| `downgrade` | function | — | exported | not declared | 1/2 | `src/nova/db/main/migrations/versions/8f2f1571d55b_initial_version.py:L1628–L1629` |

## Dependencies

- `alembic`: imports `op` (src/nova/db/main/migrations/versions/8f2f1571d55b_initial_version.py:L20)
- `import sqlalchemy as sa` (src/nova/db/main/migrations/versions/8f2f1571d55b_initial_version.py:L21)
- `sqlalchemy`: imports `dialects` (src/nova/db/main/migrations/versions/8f2f1571d55b_initial_version.py:L22)
- `sqlalchemy.ext`: imports `compiler` (src/nova/db/main/migrations/versions/8f2f1571d55b_initial_version.py:L23)
- `sqlalchemy`: imports `types as sqla_types` (src/nova/db/main/migrations/versions/8f2f1571d55b_initial_version.py:L24)
- `nova.db`: imports `types` (src/nova/db/main/migrations/versions/8f2f1571d55b_initial_version.py:L26)
- `nova.objects`: imports `keypair` (src/nova/db/main/migrations/versions/8f2f1571d55b_initial_version.py:L27)

