# src/nova/conf/imagecache.py

## Overview

This file implements the `imagecache` module, defining 1 constant, 2 functions, 2 variables, 1 import, 1 side effect.

Lines: total 107, code 80, comment 11, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `imagecache_group` | variable | — | exported | not declared | — | `src/nova/conf/imagecache.py:L15–L20` |
| `imagecache_opts` | variable | — | exported | not declared | — | `src/nova/conf/imagecache.py:L21–L95` |
| `ALL_OPTS` | constant | — | exported | not declared | — | `src/nova/conf/imagecache.py:L98–L98` |
| `register_opts` | function | (conf) | exported | not declared | 1/3 | `src/nova/conf/imagecache.py:L101–L103` |
| `list_opts` | function | — | exported | `{imagecache_group: imagecache_opts}` (src/nova/conf/imagecache.py:L107) | 1/2 | `src/nova/conf/imagecache.py:L106–L107` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/conf/imagecache.py:L13)

## Side Effects

- **global-mutation**: ALL_OPTS = (imagecache_opts,) (src/nova/conf/imagecache.py:L98)

