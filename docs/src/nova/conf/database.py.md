# src/nova/conf/database.py

## Overview

This file implements the `database` module, defining 2 functions, 6 variables, 3 imports.

Lines: total 65, code 32, comment 21, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `main_db_group` | variable | — | exported | not declared | — | `src/nova/conf/database.py:L21–L29` |
| `api_db_group` | variable | — | exported | not declared | — | `src/nova/conf/database.py:L31–L40` |
| `main_db_opts` | variable | — | exported | not declared | — | `src/nova/conf/database.py:L47–L47` |
| `api_db_opts` | variable | — | exported | not declared | — | `src/nova/conf/database.py:L48–L48` |
| `main_db_opts` | variable | — | exported | not declared | — | `src/nova/conf/database.py:L52–L52` |
| `api_db_opts` | variable | — | exported | not declared | — | `src/nova/conf/database.py:L53–L53` |
| `register_opts` | function | (conf) | exported | not declared | 1/3 | `src/nova/conf/database.py:L56–L58` |
| `list_opts` | function | — | exported | `{ main_db_group: main_db_opts, api_db_group: api_db_opts, }` (src/nova/conf/database.py:L62) | 1/5 | `src/nova/conf/database.py:L61–L65` |

## Dependencies

- `import copy` (src/nova/conf/database.py:L16)
- `oslo_config`: imports `cfg` (src/nova/conf/database.py:L18)
- `oslo_db`: imports `options as oslo_db_opts` (src/nova/conf/database.py:L19)

