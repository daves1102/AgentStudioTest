# src/nova/conf/rpc.py

## Overview

This file implements the `rpc` module, defining 1 constant, 2 functions, 1 variable, 1 import, 1 side effect.

Lines: total 52, code 26, comment 14, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `rpc_opts` | variable | — | exported | not declared | — | `src/nova/conf/rpc.py:L18–L41` |
| `ALL_OPTS` | constant | — | exported | not declared | — | `src/nova/conf/rpc.py:L44–L44` |
| `register_opts` | function | (conf) | exported | not declared | 1/2 | `src/nova/conf/rpc.py:L47–L48` |
| `list_opts` | function | — | exported | `{'DEFAULT': ALL_OPTS}` (src/nova/conf/rpc.py:L52) | 1/2 | `src/nova/conf/rpc.py:L51–L52` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/conf/rpc.py:L16)

## Side Effects

- **global-mutation**: ALL_OPTS = rpc_opts (src/nova/conf/rpc.py:L44)

