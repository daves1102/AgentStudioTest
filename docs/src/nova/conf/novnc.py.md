# src/nova/conf/novnc.py

## Overview

This file implements the `novnc` module, defining 3 functions, 1 variable, 1 import.

Lines: total 78, code 50, comment 14, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `novnc_opts` | variable | — | exported | not declared | — | `src/nova/conf/novnc.py:L18–L66` |
| `register_opts` | function | (conf) | exported | not declared | 1/2 | `src/nova/conf/novnc.py:L69–L70` |
| `register_cli_opts` | function | (conf) | exported | not declared | 1/2 | `src/nova/conf/novnc.py:L73–L74` |
| `list_opts` | function | — | exported | `{'DEFAULT': novnc_opts}` (src/nova/conf/novnc.py:L78) | 1/2 | `src/nova/conf/novnc.py:L77–L78` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/conf/novnc.py:L16)

