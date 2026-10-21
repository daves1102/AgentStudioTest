# src/nova/loadables.py

## Overview

This file implements the `loadables` module, defining 1 class, 5 methods, 5 imports, 3 side effects.

Lines: total 117, code 84, comment 16, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BaseLoader` | class | — | exported | not declared | — | `src/nova/loadables.py:L50–L117` |
| `BaseLoader.__init__` | method | (self, loadable_cls_type) | public | not declared | 1/5 | `src/nova/loadables.py:L51–L55` |
| `BaseLoader._is_correct_class` | method | (self, obj) | private | `(inspect.isclass(obj) and (not obj.__name__.startswith('_')) and issubclass(obj, self.loadable_cls_type))` (src/nova/loadables.py:L61) | 3/4 | `src/nova/loadables.py:L57–L63` |
| `BaseLoader._get_classes_from_module` | method | (self, module_name) | private | `classes` (src/nova/loadables.py:L76) | 4/10 | `src/nova/loadables.py:L65–L76` |
| `BaseLoader.get_all_classes` | method | (self) | public | `classes` (src/nova/loadables.py:L96) | 6/16 | `src/nova/loadables.py:L78–L96` |
| `BaseLoader.get_matching_classes` | method | (self, loadable_class_names) | public | `classes` (src/nova/loadables.py:L117) | 5/14 | `src/nova/loadables.py:L98–L117` |

## Dependencies

- `import inspect` (src/nova/loadables.py:L41)
- `import os` (src/nova/loadables.py:L42)
- `import sys` (src/nova/loadables.py:L43)
- `oslo_utils`: imports `importutils` (src/nova/loadables.py:L45)
- `nova`: imports `exception` (src/nova/loadables.py:L47)

## Side Effects

- **file-io**: self.path = os.path.abspath(mod.__path__[0]) (src/nova/loadables.py:L53)
- **file-io**: relpath = os.path.relpath(dirpath, self.path) (src/nova/loadables.py:L84)
- **file-io**: root, ext = os.path.splitext(fname) (src/nova/loadables.py:L90)

