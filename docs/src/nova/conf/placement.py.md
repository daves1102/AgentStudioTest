# src/nova/conf/placement.py

## Overview

This file implements the `placement` module, defining 1 constant, 2 functions, 1 variable, 3 imports, 1 side effect, 1 security surface entry.

Lines: total 42, code 21, comment 11, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `DEFAULT_SERVICE_TYPE` | constant | — | exported | not declared | — | `src/nova/conf/placement.py:L19–L19` |
| `placement_group` | variable | — | exported | not declared | — | `src/nova/conf/placement.py:L22–L25` |
| `register_opts` | function | (conf) | exported | not declared | 1/3 | `src/nova/conf/placement.py:L28–L30` |
| `list_opts` | function | — | exported | `{ placement_group.name: ( ks_loading.get_session_conf_options() + ks_loading.get_auth_common_conf_options() + ks_loading.get_auth_plugin_conf_options('password') + ks_loading.get_auth_plugin_conf_opti` (src/nova/conf/placement.py:L34) | 1/10 | `src/nova/conf/placement.py:L33–L42` |

## Dependencies

- `keystoneauth1`: imports `loading as ks_loading` (src/nova/conf/placement.py:L13)
- `oslo_config`: imports `cfg` (src/nova/conf/placement.py:L14)
- `nova.conf`: imports `utils as confutils` (src/nova/conf/placement.py:L16)

## Side Effects

- **global-mutation**: DEFAULT_SERVICE_TYPE = 'placement' (src/nova/conf/placement.py:L19)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import loading as ks_loading (src/nova/conf/placement.py:L13)

