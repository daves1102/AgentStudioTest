# src/nova/conf/devices.py

## Overview

This file implements the `devices` module, defining 3 functions, 2 variables, 1 import.

Lines: total 119, code 75, comment 15, blank 29

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `devices_group` | variable | — | exported | not declared | — | `src/nova/conf/devices.py:L15–L17` |
| `mdev_opts` | variable | — | exported | not declared | — | `src/nova/conf/devices.py:L19–L74` |
| `register_opts` | function | (conf) | exported | not declared | 1/3 | `src/nova/conf/devices.py:L77–L79` |
| `register_dynamic_opts` | function | (conf) | exported | not declared | 2/22 | `src/nova/conf/devices.py:L82–L115` |
| `list_opts` | function | — | exported | `{devices_group: mdev_opts}` (src/nova/conf/devices.py:L119) | 1/2 | `src/nova/conf/devices.py:L118–L119` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/conf/devices.py:L13)

