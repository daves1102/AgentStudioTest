# src/nova/conf/conductor.py

## Overview

This file implements the `conductor` module, defining 1 constant, 2 functions, 2 variables, 1 import, 1 side effect.

Lines: total 62, code 38, comment 14, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `conductor_group` | variable | — | exported | not declared | — | `src/nova/conf/conductor.py:L18–L26` |
| `ALL_OPTS` | constant | — | exported | not declared | — | `src/nova/conf/conductor.py:L28–L35` |
| `migrate_opts` | variable | — | exported | not declared | — | `src/nova/conf/conductor.py:L37–L51` |
| `register_opts` | function | (conf) | exported | not declared | 1/4 | `src/nova/conf/conductor.py:L54–L57` |
| `list_opts` | function | — | exported | `{"DEFAULT": migrate_opts, conductor_group: ALL_OPTS}` (src/nova/conf/conductor.py:L61) | 1/3 | `src/nova/conf/conductor.py:L60–L62` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/conf/conductor.py:L16)

## Side Effects

- **global-mutation**: ALL_OPTS = [ (src/nova/conf/conductor.py:L28)

