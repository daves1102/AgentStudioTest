# src/nova/conf/zvm.py

## Overview

This file implements the `zvm` module, defining 2 functions, 2 variables, 2 imports.

Lines: total 86, code 56, comment 13, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `zvm_opt_group` | variable | — | exported | not declared | — | `src/nova/conf/zvm.py:L21–L29` |
| `zvm_opts` | variable | — | exported | not declared | — | `src/nova/conf/zvm.py:L32–L77` |
| `register_opts` | function | (conf) | exported | not declared | 1/3 | `src/nova/conf/zvm.py:L80–L82` |
| `list_opts` | function | — | exported | `{zvm_opt_group: zvm_opts}` (src/nova/conf/zvm.py:L86) | 1/2 | `src/nova/conf/zvm.py:L85–L86` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/conf/zvm.py:L15)
- `nova.conf`: imports `paths` (src/nova/conf/zvm.py:L18)

