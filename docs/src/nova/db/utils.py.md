# src/nova/db/utils.py

## Overview

This file implements the `utils` module, defining 6 functions, 6 imports.

Lines: total 156, code 108, comment 19, blank 29

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `require_context` | function | (f) | exported | `wrapper` (src/nova/db/utils.py:L38) | 1/5 | `src/nova/db/utils.py:L22–L38` |
| `require_context.wrapper` | function | (*args, **kwargs) | public | `f(*args, **kwargs)` (src/nova/db/utils.py:L36) | — | `src/nova/db/utils.py:L34–L36` |
| `process_sort_params` | function | (sort_keys, sort_dirs, default_keys=['created_at', 'id'], default_dir='asc') | exported | `result_keys, result_dirs` (src/nova/db/utils.py:L110) | 12/33 | `src/nova/db/utils.py:L41–L110` |
| `_db_connection_type` | function | (db_connection) | unexported | `db_string.lower()` (src/nova/db/utils.py:L121) | 1/3 | `src/nova/db/utils.py:L113–L121` |
| `_safe_regex_mysql` | function | (raw_string) | unexported | `raw_string.replace('\|', '\\\|')` (src/nova/db/utils.py:L136) | 1/2 | `src/nova/db/utils.py:L124–L136` |
| `get_regexp_ops` | function | (connection) | exported | `( regex_safe_filters.get(db_type, lambda x: x), regexp_op_map.get(db_type, 'LIKE'), )` (src/nova/db/utils.py:L153) | 1/16 | `src/nova/db/utils.py:L139–L156` |

## Dependencies

- `import collections.abc` (src/nova/db/utils.py:L13)
- `import functools` (src/nova/db/utils.py:L14)
- `import inspect` (src/nova/db/utils.py:L15)
- `import nova.context` (src/nova/db/utils.py:L17)
- `nova`: imports `exception` (src/nova/db/utils.py:L18)
- `nova.i18n`: imports `_` (src/nova/db/utils.py:L19)

