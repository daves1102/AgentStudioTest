# src/nova/conf/guestfs.py

## Overview

This file implements the `guestfs` module, defining 2 functions, 2 variables, 1 import.

Lines: total 58, code 33, comment 14, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `guestfs_group` | variable | — | exported | not declared | — | `src/nova/conf/guestfs.py:L18–L26` |
| `enable_guestfs_debug_opts` | variable | — | exported | not declared | — | `src/nova/conf/guestfs.py:L28–L48` |
| `register_opts` | function | (conf) | exported | not declared | 1/4 | `src/nova/conf/guestfs.py:L51–L54` |
| `list_opts` | function | — | exported | `{guestfs_group: enable_guestfs_debug_opts}` (src/nova/conf/guestfs.py:L58) | 1/2 | `src/nova/conf/guestfs.py:L57–L58` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/conf/guestfs.py:L16)

