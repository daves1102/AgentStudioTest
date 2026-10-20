# src/nova/conf/cinder.py

## Overview

This file implements the `cinder` module, defining 2 functions, 2 variables, 2 imports, 1 security surface entry.

Lines: total 133, code 91, comment 14, blank 28

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `cinder_group` | variable | — | exported | not declared | — | `src/nova/conf/cinder.py:L19–L22` |
| `cinder_opts` | variable | — | exported | not declared | — | `src/nova/conf/cinder.py:L24–L113` |
| `register_opts` | function | (conf) | exported | not declared | 1/6 | `src/nova/conf/cinder.py:L116–L121` |
| `list_opts` | function | — | exported | `{ cinder_group.name: ( cinder_opts + ks_loading.get_session_conf_options() + ks_loading.get_auth_common_conf_options() + ks_loading.get_auth_plugin_conf_options('password') + ks_loading.get_auth_plugi` (src/nova/conf/cinder.py:L125) | 1/10 | `src/nova/conf/cinder.py:L124–L133` |

## Dependencies

- `keystoneauth1`: imports `loading as ks_loading` (src/nova/conf/cinder.py:L16)
- `oslo_config`: imports `cfg` (src/nova/conf/cinder.py:L17)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import loading as ks_loading (src/nova/conf/cinder.py:L16)

