# src/nova/conf/paths.py

## Overview

This file implements the `paths` module, defining 1 constant, 4 functions, 2 imports, 4 side effects.

Lines: total 78, code 42, comment 16, blank 20

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ALL_OPTS` | constant | — | exported | not declared | — | `src/nova/conf/paths.py:L22–L60` |
| `basedir_def` | function | (*args) | exported | `os.path.join('$pybasedir', *args)` (src/nova/conf/paths.py:L65) | 1/2 | `src/nova/conf/paths.py:L63–L65` |
| `state_path_def` | function | (*args) | exported | `os.path.join('$state_path', *args)` (src/nova/conf/paths.py:L70) | 1/2 | `src/nova/conf/paths.py:L68–L70` |
| `register_opts` | function | (conf) | exported | not declared | 1/2 | `src/nova/conf/paths.py:L73–L74` |
| `list_opts` | function | — | exported | `{"DEFAULT": ALL_OPTS}` (src/nova/conf/paths.py:L78) | 1/2 | `src/nova/conf/paths.py:L77–L78` |

## Dependencies

- `import os` (src/nova/conf/paths.py:L18)
- `oslo_config`: imports `cfg` (src/nova/conf/paths.py:L20)

## Side Effects

- **file-io**: default=os.path.abspath(os.path.join(os.path.dirname(__file__), (src/nova/conf/paths.py:L24)
- **file-io**: return os.path.join('$pybasedir', *args) (src/nova/conf/paths.py:L65)
- **file-io**: return os.path.join('$state_path', *args) (src/nova/conf/paths.py:L70)
- **global-mutation**: ALL_OPTS = [ (src/nova/conf/paths.py:L22)

