# src/nova/conf/serial_console.py

## Overview

This file implements the `serial_console` module, defining 3 constants, 3 functions, 1 variable, 1 import, 3 side effects.

Lines: total 127, code 86, comment 15, blank 26

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `DEFAULT_PORT_RANGE` | constant | — | exported | not declared | — | `src/nova/conf/serial_console.py:L18–L18` |
| `serial_opt_group` | variable | — | exported | not declared | — | `src/nova/conf/serial_console.py:L20–L25` |
| `ALL_OPTS` | constant | — | exported | not declared | — | `src/nova/conf/serial_console.py:L27–L80` |
| `CLI_OPTS` | constant | — | exported | not declared | — | `src/nova/conf/serial_console.py:L82–L111` |
| `register_opts` | function | (conf) | exported | not declared | 1/3 | `src/nova/conf/serial_console.py:L116–L118` |
| `register_cli_opts` | function | (conf) | exported | not declared | 1/3 | `src/nova/conf/serial_console.py:L121–L123` |
| `list_opts` | function | — | exported | `{serial_opt_group: ALL_OPTS}` (src/nova/conf/serial_console.py:L127) | 1/2 | `src/nova/conf/serial_console.py:L126–L127` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/conf/serial_console.py:L16)

## Side Effects

- **global-mutation**: DEFAULT_PORT_RANGE = '10000:20000' (src/nova/conf/serial_console.py:L18)
- **global-mutation**: ALL_OPTS = [ (src/nova/conf/serial_console.py:L27)
- **global-mutation**: CLI_OPTS = [ (src/nova/conf/serial_console.py:L82)

