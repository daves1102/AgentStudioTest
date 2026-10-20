# src/nova/conf/glance.py

## Overview

This file implements the `glance` module, defining 1 constant, 2 functions, 3 variables, 3 imports, 1 side effect, 3 security surface entries.

Lines: total 219, code 164, comment 15, blank 40

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `DEFAULT_SERVICE_TYPE` | constant | — | exported | not declared | — | `src/nova/conf/glance.py:L21–L21` |
| `glance_group` | variable | — | exported | not declared | — | `src/nova/conf/glance.py:L23–L26` |
| `glance_opts` | variable | — | exported | not declared | — | `src/nova/conf/glance.py:L28–L194` |
| `deprecated_ksa_opts` | variable | — | exported | not declared | — | `src/nova/conf/glance.py:L196–L201` |
| `register_opts` | function | (conf) | exported | not declared | 1/6 | `src/nova/conf/glance.py:L204–L210` |
| `list_opts` | function | — | exported | `{glance_group: ( glance_opts + ks_loading.get_session_conf_options() + confutils.get_ksa_adapter_opts(DEFAULT_SERVICE_TYPE, deprecated_opts=deprecated_ksa_opts)) }` (src/nova/conf/glance.py:L214) | 1/7 | `src/nova/conf/glance.py:L213–L219` |

## Dependencies

- `keystoneauth1`: imports `loading as ks_loading` (src/nova/conf/glance.py:L15)
- `oslo_config`: imports `cfg` (src/nova/conf/glance.py:L16)
- `nova.conf`: imports `utils as confutils` (src/nova/conf/glance.py:L18)

## Side Effects

- **global-mutation**: DEFAULT_SERVICE_TYPE = 'image' (src/nova/conf/glance.py:L21)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import loading as ks_loading (src/nova/conf/glance.py:L15)
- **privilege** (`crypto-key`): Support for image service configuration via standard keystoneauth1 Adapter (src/nova/conf/glance.py:L35)
- **privilege** (`crypto-key`): NOTE: The preferred mechanism for endpoint discovery is via keystoneauth1 (src/nova/conf/glance.py:L45)

