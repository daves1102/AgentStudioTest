# src/nova/conf/api.py

## Overview

This file implements the `api` module, defining 1 constant, 2 functions, 7 variables, 1 import, 2 side effects.

Lines: total 409, code 338, comment 14, blank 57

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `api_group` | variable | — | exported | not declared | — | `src/nova/conf/api.py:L18–L22` |
| `metadata_opts` | variable | — | exported | not declared | — | `src/nova/conf/api.py:L24–L196` |
| `file_opts` | variable | — | exported | not declared | — | `src/nova/conf/api.py:L198–L216` |
| `osapi_opts` | variable | — | exported | not declared | — | `src/nova/conf/api.py:L218–L324` |
| `os_network_opts` | variable | — | exported | not declared | — | `src/nova/conf/api.py:L326–L348` |
| `enable_inst_pw_opts` | variable | — | exported | not declared | — | `src/nova/conf/api.py:L350–L359` |
| `validation_opts` | variable | — | exported | not declared | — | `src/nova/conf/api.py:L361–L391` |
| `API_OPTS` | constant | — | exported | not declared | — | `src/nova/conf/api.py:L393–L400` |
| `register_opts` | function | (conf) | exported | not declared | 1/3 | `src/nova/conf/api.py:L403–L405` |
| `list_opts` | function | — | exported | `{api_group: API_OPTS}` (src/nova/conf/api.py:L409) | 1/2 | `src/nova/conf/api.py:L408–L409` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/conf/api.py:L16)

## Side Effects

- **network**: guide (https://docs.openstack.org/api-guide/compute/down_cells.html) for (src/nova/conf/api.py:L321)
- **global-mutation**: API_OPTS = ( (src/nova/conf/api.py:L393)

