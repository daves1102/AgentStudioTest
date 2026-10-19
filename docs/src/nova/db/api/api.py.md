# src/nova/db/api/api.py

## Overview

This file implements the `api` module, defining 1 constant, 3 functions, 2 variables, 4 imports, 1 side effect.

Lines: total 50, code 23, comment 14, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `profiler_sqlalchemy` | variable | — | exported | not declared | — | `src/nova/db/api/api.py:L19–L19` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/db/api/api.py:L21–L21` |
| `context_manager` | variable | — | exported | not declared | — | `src/nova/db/api/api.py:L23–L23` |
| `_get_db_conf` | function | (conf_group, connection=None) | unexported | `kw` (src/nova/db/api/api.py:L34) | 2/5 | `src/nova/db/api/api.py:L30–L34` |
| `configure` | function | (conf) | exported | not declared | 4/9 | `src/nova/db/api/api.py:L37–L46` |
| `get_engine` | function | — | exported | `context_manager.writer.get_engine()` (src/nova/db/api/api.py:L50) | 1/2 | `src/nova/db/api/api.py:L49–L50` |

## Dependencies

- `oslo_db.sqlalchemy`: imports `enginefacade` (src/nova/db/api/api.py:L13)
- `oslo_utils`: imports `importutils` (src/nova/db/api/api.py:L14)
- `import sqlalchemy as sa` (src/nova/db/api/api.py:L15)
- `import nova.conf` (src/nova/db/api/api.py:L17)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/db/api/api.py:L21)

