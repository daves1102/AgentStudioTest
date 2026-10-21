# src/nova/tests/json_ref.py

## Overview

This file implements the `json_ref` module, defining 3 functions, 2 imports, 3 side effects, 3 security surface entries.

Lines: total 65, code 37, comment 18, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_resolve_ref` | function | (ref, base_path) | unexported | `res` (src/nova/tests/json_ref.py:L32) | 2/11 | `src/nova/tests/json_ref.py:L20–L32` |
| `resolve_refs` | function | (obj_with_refs, base_path) | exported | `resolved_ref` (src/nova/tests/json_ref.py:L48); `obj_with_refs` (src/nova/tests/json_ref.py:L56) | 6/17 | `src/nova/tests/json_ref.py:L35–L56` |
| `_update_dict_recursively` | function | (d, update) | unexported | not declared | 5/6 | `src/nova/tests/json_ref.py:L59–L65` |

## Dependencies

- `import os` (src/nova/tests/json_ref.py:L15)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/json_ref.py:L17)

## Side Effects

- **file-io**: path = os.path.join(base_path, file_path) (src/nova/tests/json_ref.py:L26)
- **file-io**: with open(path, 'r+b') as f: (src/nova/tests/json_ref.py:L28)
- **file-io**: base_path = os.path.dirname(path) (src/nova/tests/json_ref.py:L30)

## Security Surface

- **sink** (`db-write`): def _update_dict_recursively(d, update): (src/nova/tests/json_ref.py:L59)
- **sink** (`db-write`): """Update dict d recursively with data from dict update""" (src/nova/tests/json_ref.py:L60)
- **sink** (`db-write`): for k, v in update.items(): (src/nova/tests/json_ref.py:L61)

