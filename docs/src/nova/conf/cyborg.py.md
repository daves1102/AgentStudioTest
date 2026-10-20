# src/nova/conf/cyborg.py

## Overview

This file implements the `cyborg` module, defining 2 constants, 2 functions, 1 variable, 3 imports, 2 side effects, 1 security surface entry.

Lines: total 43, code 21, comment 13, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `DEFAULT_SERVICE_TYPE` | constant | — | exported | not declared | — | `src/nova/conf/cyborg.py:L21–L21` |
| `CYBORG_GROUP` | constant | — | exported | not declared | — | `src/nova/conf/cyborg.py:L22–L22` |
| `cyborg_group` | variable | — | exported | not declared | — | `src/nova/conf/cyborg.py:L24–L29` |
| `register_opts` | function | (conf) | exported | not declared | 1/4 | `src/nova/conf/cyborg.py:L32–L35` |
| `list_opts` | function | — | exported | `{ cyborg_group: ( ks_loading.get_session_conf_options() + confutils.get_ksa_adapter_opts(DEFAULT_SERVICE_TYPE)) }` (src/nova/conf/cyborg.py:L39) | 1/6 | `src/nova/conf/cyborg.py:L38–L43` |

## Dependencies

- `keystoneauth1`: imports `loading as ks_loading` (src/nova/conf/cyborg.py:L15)
- `oslo_config`: imports `cfg` (src/nova/conf/cyborg.py:L16)
- `nova.conf`: imports `utils as confutils` (src/nova/conf/cyborg.py:L18)

## Side Effects

- **global-mutation**: DEFAULT_SERVICE_TYPE = 'accelerator' (src/nova/conf/cyborg.py:L21)
- **global-mutation**: CYBORG_GROUP = 'cyborg' (src/nova/conf/cyborg.py:L22)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import loading as ks_loading (src/nova/conf/cyborg.py:L15)

