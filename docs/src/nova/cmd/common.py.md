# src/nova/cmd/common.py

## Overview

This file implements the `common` module, defining 2 constants, 9 functions, 7 imports, 2 side effects, 2 security surface entries.

Lines: total 192, code 128, comment 23, blank 41

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/cmd/common.py:L30–L30` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/cmd/common.py:L31–L31` |
| `validate_args` | function | (fn, *args, **kwargs) | exported | `missing` (src/nova/cmd/common.py:L60) | 5/9 | `src/nova/cmd/common.py:L34–L60` |
| `args` | function | (*args, **kwargs) | exported | `_decorator` (src/nova/cmd/common.py:L71) | 1/3 | `src/nova/cmd/common.py:L64–L71` |
| `args._decorator` | function | (func) | private | `func` (src/nova/cmd/common.py:L70) | — | `src/nova/cmd/common.py:L68–L70` |
| `methods_of` | function | (obj) | exported | `result` (src/nova/cmd/common.py:L83) | 4/6 | `src/nova/cmd/common.py:L74–L83` |
| `add_command_parsers` | function | (subparsers, categories) | exported | not declared | 7/32 | `src/nova/cmd/common.py:L86–L135` |
| `print_bash_completion` | function | (categories) | exported | not declared | 4/8 | `src/nova/cmd/common.py:L138–L145` |
| `get_action_fn` | function | — | exported | `fn, fn_args, fn_kwargs` (src/nova/cmd/common.py:L177) | 7/22 | `src/nova/cmd/common.py:L148–L177` |
| `action_description` | function | (text) | exported | `_decorator` (src/nova/cmd/common.py:L192) | 1/3 | `src/nova/cmd/common.py:L180–L192` |
| `action_description._decorator` | function | (func) | private | `func` (src/nova/cmd/common.py:L191) | — | `src/nova/cmd/common.py:L189–L191` |

## Dependencies

- `import argparse` (src/nova/cmd/common.py:L20)
- `import inspect` (src/nova/cmd/common.py:L21)
- `oslo_log`: imports `log as logging` (src/nova/cmd/common.py:L23)
- `import nova.conf` (src/nova/cmd/common.py:L25)
- `import nova.db.main.api` (src/nova/cmd/common.py:L26)
- `nova`: imports `exception` (src/nova/cmd/common.py:L27)
- `nova.i18n`: imports `_` (src/nova/cmd/common.py:L28)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/cmd/common.py:L30)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/cmd/common.py:L31)

## Security Surface

- **sink** (`db-write`): func.__dict__.setdefault('args', []).insert(0, (args, kwargs)) (src/nova/cmd/common.py:L69)
- **entry-point** (`cli-args`): help=argparse.SUPPRESS) (src/nova/cmd/common.py:L135)

