# src/nova/conf/console.py

## Overview

This file implements the `console` module, defining 2 functions, 2 variables, 1 import, 1 security surface entry.

Lines: total 93, code 60, comment 16, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `console_group` | variable | — | exported | not declared | — | `src/nova/conf/console.py:L18–L26` |
| `console_opts` | variable | — | exported | not declared | — | `src/nova/conf/console.py:L28–L82` |
| `register_opts` | function | (conf) | exported | not declared | 1/3 | `src/nova/conf/console.py:L85–L87` |
| `list_opts` | function | — | exported | `{ console_group: console_opts, }` (src/nova/conf/console.py:L91) | 1/4 | `src/nova/conf/console.py:L90–L93` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/conf/console.py:L16)

## Security Surface

- **sink** (`db-write`): which allows to select the console proxy service to connect to. (src/nova/conf/console.py:L25)

