# src/nova/conf/manila.py

## Overview

This file implements the `manila` module, defining 1 constant, 2 functions, 2 variables, 3 imports, 1 side effect, 1 security surface entry.

Lines: total 58, code 34, comment 11, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `DEFAULT_SERVICE_TYPE` | constant | — | exported | not declared | — | `src/nova/conf/manila.py:L18–L18` |
| `manila_group` | variable | — | exported | not declared | — | `src/nova/conf/manila.py:L20–L23` |
| `manila_opts` | variable | — | exported | not declared | — | `src/nova/conf/manila.py:L25–L39` |
| `register_opts` | function | (conf) | exported | not declared | 1/6 | `src/nova/conf/manila.py:L42–L48` |
| `list_opts` | function | — | exported | `{ manila_group.name: ( manila_opts + ks_loading.get_session_conf_options() + ks_loading.get_auth_common_conf_options() + ks_loading.get_auth_plugin_conf_options('v3password')) }` (src/nova/conf/manila.py:L52) | 1/8 | `src/nova/conf/manila.py:L51–L58` |

## Dependencies

- `keystoneauth1`: imports `loading as ks_loading` (src/nova/conf/manila.py:L13)
- `oslo_config`: imports `cfg` (src/nova/conf/manila.py:L14)
- `nova.conf`: imports `utils as confutils` (src/nova/conf/manila.py:L16)

## Side Effects

- **global-mutation**: DEFAULT_SERVICE_TYPE = 'shared-file-system' (src/nova/conf/manila.py:L18)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import loading as ks_loading (src/nova/conf/manila.py:L13)

