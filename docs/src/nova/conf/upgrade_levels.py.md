# src/nova/conf/upgrade_levels.py

## Overview

This file implements the `upgrade_levels` module, defining 2 functions, 2 variables, 1 import.

Lines: total 108, code 72, comment 15, blank 21

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `upgrade_group` | variable | — | exported | not declared | — | `src/nova/conf/upgrade_levels.py:L18–L32` |
| `upgrade_levels_opts` | variable | — | exported | not declared | — | `src/nova/conf/upgrade_levels.py:L35–L99` |
| `register_opts` | function | (conf) | exported | not declared | 1/3 | `src/nova/conf/upgrade_levels.py:L102–L104` |
| `list_opts` | function | — | exported | `{upgrade_group: upgrade_levels_opts}` (src/nova/conf/upgrade_levels.py:L108) | 1/2 | `src/nova/conf/upgrade_levels.py:L107–L108` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/conf/upgrade_levels.py:L16)

