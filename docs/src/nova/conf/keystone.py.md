# src/nova/conf/keystone.py

## Overview

This file implements the `keystone` module, defining 1 constant, 2 functions, 1 variable, 3 imports, 1 side effect, 1 security surface entry.

Lines: total 44, code 23, comment 12, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `DEFAULT_SERVICE_TYPE` | constant | — | exported | not declared | — | `src/nova/conf/keystone.py:L20–L20` |
| `keystone_group` | variable | — | exported | not declared | — | `src/nova/conf/keystone.py:L22–L25` |
| `register_opts` | function | (conf) | exported | not declared | 1/4 | `src/nova/conf/keystone.py:L28–L31` |
| `list_opts` | function | — | exported | `{ keystone_group: ( ks_loading.get_session_conf_options() + ks_loading.get_auth_common_conf_options() + ks_loading.get_auth_plugin_conf_options('password') + ks_loading.get_auth_plugin_conf_options('v` (src/nova/conf/keystone.py:L35) | 1/11 | `src/nova/conf/keystone.py:L34–L44` |

## Dependencies

- `keystoneauth1`: imports `loading as ks_loading` (src/nova/conf/keystone.py:L14)
- `oslo_config`: imports `cfg` (src/nova/conf/keystone.py:L15)
- `nova.conf`: imports `utils as confutils` (src/nova/conf/keystone.py:L17)

## Side Effects

- **global-mutation**: DEFAULT_SERVICE_TYPE = 'identity' (src/nova/conf/keystone.py:L20)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import loading as ks_loading (src/nova/conf/keystone.py:L14)

