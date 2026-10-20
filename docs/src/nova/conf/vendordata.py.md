# src/nova/conf/vendordata.py

## Overview

This file implements the `vendordata` module, defining 2 functions, 1 variable, 2 imports, 1 security surface entry.

Lines: total 42, code 22, comment 14, blank 6

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `vendordata_group` | variable | — | exported | not declared | — | `src/nova/conf/vendordata.py:L19–L24` |
| `register_opts` | function | (conf) | exported | not declared | 1/4 | `src/nova/conf/vendordata.py:L27–L30` |
| `list_opts` | function | — | exported | `{ vendordata_group: ( ks_loading.get_session_conf_options() + ks_loading.get_auth_common_conf_options() + ks_loading.get_auth_plugin_conf_options('password') + ks_loading.get_auth_plugin_conf_options(` (src/nova/conf/vendordata.py:L34) | 1/10 | `src/nova/conf/vendordata.py:L33–L42` |

## Dependencies

- `keystoneauth1`: imports `loading as ks_loading` (src/nova/conf/vendordata.py:L16)
- `oslo_config`: imports `cfg` (src/nova/conf/vendordata.py:L17)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import loading as ks_loading (src/nova/conf/vendordata.py:L16)

