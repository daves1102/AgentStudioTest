# src/nova/conf/service_token.py

## Overview

This file implements the `service_token` module, defining 1 constant, 2 functions, 2 variables, 2 imports, 1 side effect, 1 security surface entry.

Lines: total 63, code 42, comment 11, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SERVICE_USER_GROUP` | constant | — | exported | not declared | — | `src/nova/conf/service_token.py:L16–L16` |
| `service_user` | variable | — | exported | not declared | — | `src/nova/conf/service_token.py:L18–L26` |
| `service_user_opts` | variable | — | exported | not declared | — | `src/nova/conf/service_token.py:L28–L43` |
| `register_opts` | function | (conf) | exported | not declared | 1/5 | `src/nova/conf/service_token.py:L46–L51` |
| `list_opts` | function | — | exported | `{ service_user: ( service_user_opts + ks_loading.get_session_conf_options() + ks_loading.get_auth_common_conf_options() + ks_loading.get_auth_plugin_conf_options('password') + ks_loading.get_auth_plug` (src/nova/conf/service_token.py:L55) | 1/10 | `src/nova/conf/service_token.py:L54–L63` |

## Dependencies

- `keystoneauth1`: imports `loading as ks_loading` (src/nova/conf/service_token.py:L13)
- `oslo_config`: imports `cfg` (src/nova/conf/service_token.py:L14)

## Side Effects

- **global-mutation**: SERVICE_USER_GROUP = 'service_user' (src/nova/conf/service_token.py:L16)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import loading as ks_loading (src/nova/conf/service_token.py:L13)

