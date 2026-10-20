# src/nova/conf/neutron.py

## Overview

This file implements the `neutron` module, defining 3 constants, 3 functions, 3 variables, 3 imports, 3 side effects, 1 security surface entry.

Lines: total 178, code 123, comment 20, blank 35

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `DEFAULT_SERVICE_TYPE` | constant | — | exported | not declared | — | `src/nova/conf/neutron.py:L22–L22` |
| `NEUTRON_GROUP` | constant | — | exported | not declared | — | `src/nova/conf/neutron.py:L23–L23` |
| `neutron_group` | variable | — | exported | not declared | — | `src/nova/conf/neutron.py:L25–L30` |
| `neutron_opts` | variable | — | exported | not declared | — | `src/nova/conf/neutron.py:L32–L111` |
| `metadata_proxy_opts` | variable | — | exported | not declared | — | `src/nova/conf/neutron.py:L113–L137` |
| `ALL_OPTS` | constant | — | exported | not declared | — | `src/nova/conf/neutron.py:L139–L139` |
| `register_opts` | function | (conf) | exported | not declared | 1/4 | `src/nova/conf/neutron.py:L142–L145` |
| `register_dynamic_opts` | function | (conf) | exported | not declared | 2/5 | `src/nova/conf/neutron.py:L148–L165` |
| `list_opts` | function | — | exported | `{ neutron_group: ( ALL_OPTS + ks_loading.get_session_conf_options() + ks_loading.get_auth_common_conf_options() + ks_loading.get_auth_plugin_conf_options('password') + ks_loading.get_auth_plugin_conf_` (src/nova/conf/neutron.py:L169) | 1/11 | `src/nova/conf/neutron.py:L168–L178` |

## Dependencies

- `keystoneauth1`: imports `loading as ks_loading` (src/nova/conf/neutron.py:L16)
- `oslo_config`: imports `cfg` (src/nova/conf/neutron.py:L17)
- `nova.conf`: imports `utils as confutils` (src/nova/conf/neutron.py:L19)

## Side Effects

- **global-mutation**: DEFAULT_SERVICE_TYPE = 'network' (src/nova/conf/neutron.py:L22)
- **global-mutation**: NEUTRON_GROUP = 'neutron' (src/nova/conf/neutron.py:L23)
- **global-mutation**: ALL_OPTS = (neutron_opts + metadata_proxy_opts) (src/nova/conf/neutron.py:L139)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import loading as ks_loading (src/nova/conf/neutron.py:L16)

