# src/nova/conf/opts.py

## Overview

This file implements the `opts` module, defining 1 constant, 5 functions, 4 imports, 2 side effects.

Lines: total 79, code 51, comment 14, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LIST_OPTS_FUNC_NAME` | constant | — | exported | not declared | — | `src/nova/conf/opts.py:L34–L34` |
| `_tupleize` | function | (dct) | unexported | `[(key, val) for key, val in dct.items()]` (src/nova/conf/opts.py:L39) | 2/2 | `src/nova/conf/opts.py:L37–L39` |
| `list_opts` | function | — | exported | `_tupleize(opts)` (src/nova/conf/opts.py:L47) | 1/6 | `src/nova/conf/opts.py:L42–L47` |
| `_list_module_names` | function | — | unexported | `module_names` (src/nova/conf/opts.py:L58) | 4/9 | `src/nova/conf/opts.py:L50–L58` |
| `_import_modules` | function | (module_names) | unexported | `imported_modules` (src/nova/conf/opts.py:L72) | 3/12 | `src/nova/conf/opts.py:L61–L72` |
| `_append_config_options` | function | (imported_modules, config_options) | unexported | not declared | 3/5 | `src/nova/conf/opts.py:L75–L79` |

## Dependencies

- `import collections` (src/nova/conf/opts.py:L29)
- `import importlib` (src/nova/conf/opts.py:L30)
- `import os` (src/nova/conf/opts.py:L31)
- `import pkgutil` (src/nova/conf/opts.py:L32)

## Side Effects

- **file-io**: package_path = os.path.dirname(os.path.abspath(__file__)) (src/nova/conf/opts.py:L52)
- **global-mutation**: LIST_OPTS_FUNC_NAME = "list_opts" (src/nova/conf/opts.py:L34)

