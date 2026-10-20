# src/nova/conf/wsgi.py

## Overview

This file implements the `wsgi` module, defining 1 constant, 2 functions, 1 variable, 1 import, 1 side effect.

Lines: total 80, code 51, comment 14, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `wsgi_group` | variable | — | exported | not declared | — | `src/nova/conf/wsgi.py:L18–L25` |
| `ALL_OPTS` | constant | — | exported | not declared | — | `src/nova/conf/wsgi.py:L27–L71` |
| `register_opts` | function | (conf) | exported | not declared | 1/3 | `src/nova/conf/wsgi.py:L74–L76` |
| `list_opts` | function | — | exported | `{wsgi_group: ALL_OPTS}` (src/nova/conf/wsgi.py:L80) | 1/2 | `src/nova/conf/wsgi.py:L79–L80` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/conf/wsgi.py:L16)

## Side Effects

- **global-mutation**: ALL_OPTS = [ (src/nova/conf/wsgi.py:L27)

