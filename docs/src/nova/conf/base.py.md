# src/nova/conf/base.py

## Overview

This file implements the `base` module, defining 1 constant, 2 functions, 1 variable, 2 imports, 2 side effects.

Lines: total 215, code 169, comment 19, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NOVA_DEFAULT_GRACEFUL_SHUTDOWN_TIMEOUT` | constant | — | exported | not declared | — | `src/nova/conf/base.py:L25–L25` |
| `base_options` | variable | — | exported | not declared | — | `src/nova/conf/base.py:L31–L207` |
| `register_opts` | function | (conf) | exported | not declared | 1/2 | `src/nova/conf/base.py:L210–L211` |
| `list_opts` | function | — | exported | `{'DEFAULT': base_options}` (src/nova/conf/base.py:L215) | 1/2 | `src/nova/conf/base.py:L214–L215` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/conf/base.py:L18)
- `oslo_service`: imports `opts` (src/nova/conf/base.py:L19)

## Side Effects

- **network**: .. __: https://docs.openstack.org/nova/latest/admin/concurrency.html (src/nova/conf/base.py:L128)
- **global-mutation**: NOVA_DEFAULT_GRACEFUL_SHUTDOWN_TIMEOUT = 180 (src/nova/conf/base.py:L25)

