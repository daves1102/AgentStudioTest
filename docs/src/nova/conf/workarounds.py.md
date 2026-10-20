# src/nova/conf/workarounds.py

## Overview

This file implements the `workarounds` module, defining 1 constant, 2 functions, 1 variable, 1 import, 1 side effect, 3 security surface entries.

Lines: total 449, code 360, comment 14, blank 75

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `workarounds_group` | variable | — | exported | not declared | — | `src/nova/conf/workarounds.py:L35–L43` |
| `ALL_OPTS` | constant | — | exported | not declared | — | `src/nova/conf/workarounds.py:L44–L440` |
| `register_opts` | function | (conf) | exported | not declared | 1/3 | `src/nova/conf/workarounds.py:L443–L445` |
| `list_opts` | function | — | exported | `{workarounds_group: ALL_OPTS}` (src/nova/conf/workarounds.py:L449) | 1/2 | `src/nova/conf/workarounds.py:L448–L449` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/conf/workarounds.py:L33)

## Side Effects

- **global-mutation**: ALL_OPTS = [ (src/nova/conf/workarounds.py:L44)

## Security Surface

- **sink** (`db-write`): cases the correct fix it to update the guest image kernel to one that is (src/nova/conf/workarounds.py:L264)
- **sink** (`db-write`): to update network switches in the post live migration phase on the destination. (src/nova/conf/workarounds.py:L335)
- **sink** (`db-write`): before compute nodes have been able to update their service record. In an FFU, (src/nova/conf/workarounds.py:L371)

