# src/nova/conf/servicegroup.py

## Overview

This file implements the `servicegroup` module, defining 1 constant, 2 functions, 1 import, 1 side effect.

Lines: total 48, code 25, comment 14, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SERVICEGROUP_OPTS` | constant | — | exported | not declared | — | `src/nova/conf/servicegroup.py:L18–L40` |
| `register_opts` | function | (conf) | exported | not declared | 1/2 | `src/nova/conf/servicegroup.py:L43–L44` |
| `list_opts` | function | — | exported | `{'DEFAULT': SERVICEGROUP_OPTS}` (src/nova/conf/servicegroup.py:L48) | 1/2 | `src/nova/conf/servicegroup.py:L47–L48` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/conf/servicegroup.py:L16)

## Side Effects

- **global-mutation**: SERVICEGROUP_OPTS = [ (src/nova/conf/servicegroup.py:L18)

