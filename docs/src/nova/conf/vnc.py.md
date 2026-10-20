# src/nova/conf/vnc.py

## Overview

This file implements the `vnc` module, defining 2 constants, 3 functions, 1 variable, 2 imports, 2 side effects.

Lines: total 199, code 140, comment 14, blank 45

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `vnc_group` | variable | — | exported | not declared | — | `src/nova/conf/vnc.py:L19–L24` |
| `ALL_OPTS` | constant | — | exported | not declared | — | `src/nova/conf/vnc.py:L26–L88` |
| `CLI_OPTS` | constant | — | exported | not declared | — | `src/nova/conf/vnc.py:L90–L184` |
| `register_opts` | function | (conf) | exported | not declared | 1/3 | `src/nova/conf/vnc.py:L189–L191` |
| `register_cli_opts` | function | (conf) | exported | not declared | 1/2 | `src/nova/conf/vnc.py:L194–L195` |
| `list_opts` | function | — | exported | `{vnc_group: ALL_OPTS}` (src/nova/conf/vnc.py:L199) | 1/2 | `src/nova/conf/vnc.py:L198–L199` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/conf/vnc.py:L16)
- `oslo_config`: imports `types` (src/nova/conf/vnc.py:L17)

## Side Effects

- **global-mutation**: ALL_OPTS = [ (src/nova/conf/vnc.py:L26)
- **global-mutation**: CLI_OPTS = [ (src/nova/conf/vnc.py:L90)

