# src/nova/conf/netconf.py

## Overview

This file implements the `netconf` module, defining 2 functions, 1 variable, 3 imports.

Lines: total 108, code 63, comment 20, blank 25

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `netconf_opts` | variable | — | exported | not declared | — | `src/nova/conf/netconf.py:L24–L100` |
| `register_opts` | function | (conf) | exported | not declared | 1/2 | `src/nova/conf/netconf.py:L103–L104` |
| `list_opts` | function | — | exported | `{'DEFAULT': netconf_opts}` (src/nova/conf/netconf.py:L108) | 1/2 | `src/nova/conf/netconf.py:L107–L108` |

## Dependencies

- `import socket` (src/nova/conf/netconf.py:L18)
- `oslo_config`: imports `cfg` (src/nova/conf/netconf.py:L20)
- `oslo_utils`: imports `netutils` (src/nova/conf/netconf.py:L21)

