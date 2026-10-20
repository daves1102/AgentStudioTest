# src/nova/conf/key_manager.py

## Overview

This file implements the `key_manager` module, defining 2 functions, 2 variables, 2 imports.

Lines: total 64, code 28, comment 27, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `key_manager_group` | variable | — | exported | not declared | — | `src/nova/conf/key_manager.py:L19–L21` |
| `key_manager_opts` | variable | — | exported | not declared | — | `src/nova/conf/key_manager.py:L23–L38` |
| `register_opts` | function | (conf) | exported | not declared | 1/4 | `src/nova/conf/key_manager.py:L41–L44` |
| `list_opts` | function | — | exported | `opts` (src/nova/conf/key_manager.py:L59) | 3/8 | `src/nova/conf/key_manager.py:L47–L64` |

## Dependencies

- `castellan`: imports `options as castellan_opts` (src/nova/conf/key_manager.py:L16)
- `oslo_config`: imports `cfg` (src/nova/conf/key_manager.py:L17)

