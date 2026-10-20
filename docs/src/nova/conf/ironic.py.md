# src/nova/conf/ironic.py

## Overview

This file implements the `ironic` module, defining 1 constant, 2 functions, 2 variables, 3 imports, 1 side effect, 1 security surface entry.

Lines: total 132, code 102, comment 15, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `DEFAULT_SERVICE_TYPE` | constant | — | exported | not declared | — | `src/nova/conf/ironic.py:L22–L22` |
| `ironic_group` | variable | — | exported | not declared | — | `src/nova/conf/ironic.py:L24–L38` |
| `ironic_options` | variable | — | exported | not declared | — | `src/nova/conf/ironic.py:L40–L116` |
| `register_opts` | function | (conf) | exported | not declared | 1/4 | `src/nova/conf/ironic.py:L119–L122` |
| `list_opts` | function | — | exported | `{ironic_group: ( ironic_options + ks_loading.get_session_conf_options() + ks_loading.get_auth_common_conf_options() + ks_loading.get_auth_plugin_conf_options('v3password') + confutils.get_ksa_adapter_` (src/nova/conf/ironic.py:L126) | 1/8 | `src/nova/conf/ironic.py:L125–L132` |

## Dependencies

- `keystoneauth1`: imports `loading as ks_loading` (src/nova/conf/ironic.py:L16)
- `oslo_config`: imports `cfg` (src/nova/conf/ironic.py:L17)
- `nova.conf`: imports `utils as confutils` (src/nova/conf/ironic.py:L19)

## Side Effects

- **global-mutation**: DEFAULT_SERVICE_TYPE = 'baremetal' (src/nova/conf/ironic.py:L22)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import loading as ks_loading (src/nova/conf/ironic.py:L16)

