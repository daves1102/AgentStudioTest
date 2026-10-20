# src/nova/conf/utils.py

## Overview

This file implements the `utils` module, defining 4 functions, 1 variable, 2 imports, 4 security surface entries.

Lines: total 91, code 55, comment 21, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_ADAPTER_VERSION_OPTS` | variable | — | unexported | not declared | — | `src/nova/conf/utils.py:L22–L22` |
| `get_ksa_adapter_opts` | function | (default_service_type, deprecated_opts=None) | exported | `opts` (src/nova/conf/utils.py:L49) | 3/10 | `src/nova/conf/utils.py:L25–L49` |
| `_dummy_opt` | function | (name) | unexported | `cfg.Opt(name, type=lambda x: None)` (src/nova/conf/utils.py:L55) | 1/2 | `src/nova/conf/utils.py:L52–L55` |
| `register_ksa_opts` | function | (conf, group, default_service_type, include_auth=True, deprecated_opts=None) | exported | not declared | 3/11 | `src/nova/conf/utils.py:L58–L86` |
| `list_opts` | function | — | exported | `{}` (src/nova/conf/utils.py:L91) | 1/2 | `src/nova/conf/utils.py:L90–L91` |

## Dependencies

- `keystoneauth1`: imports `loading as ks_loading` (src/nova/conf/utils.py:L18)
- `oslo_config`: imports `cfg` (src/nova/conf/utils.py:L19)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import loading as ks_loading (src/nova/conf/utils.py:L18)
- **privilege** (`crypto-key`): keystoneauth1.loading.session.Session.register_conf_options (src/nova/conf/utils.py:L33)
- **privilege** (`crypto-key`): """Register keystoneauth auth, Session, and Adapter opts. (src/nova/conf/utils.py:L60)
- **privilege** (`crypto-key`): keystoneauth1.loading.session.Session.register_conf_options (src/nova/conf/utils.py:L74)

