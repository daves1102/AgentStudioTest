# src/nova/conf/vmware.py

## Overview

This file implements the `vmware` module, defining 1 constant, 2 functions, 6 variables, 1 import, 1 side effect.

Lines: total 302, code 230, comment 16, blank 56

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `vmware_group` | variable | — | exported | not declared | — | `src/nova/conf/vmware.py:L18–L29` |
| `vmwareapi_vif_opts` | variable | — | exported | not declared | — | `src/nova/conf/vmware.py:L31–L43` |
| `vmware_utils_opts` | variable | — | exported | not declared | — | `src/nova/conf/vmware.py:L45–L91` |
| `vmwareapi_opts` | variable | — | exported | not declared | — | `src/nova/conf/vmware.py:L93–L218` |
| `spbm_opts` | variable | — | exported | not declared | — | `src/nova/conf/vmware.py:L220–L258` |
| `vmops_opts` | variable | — | exported | not declared | — | `src/nova/conf/vmware.py:L260–L287` |
| `ALL_VMWARE_OPTS` | constant | — | exported | not declared | — | `src/nova/conf/vmware.py:L289–L293` |
| `register_opts` | function | (conf) | exported | not declared | 1/3 | `src/nova/conf/vmware.py:L296–L298` |
| `list_opts` | function | — | exported | `{vmware_group: ALL_VMWARE_OPTS}` (src/nova/conf/vmware.py:L302) | 1/2 | `src/nova/conf/vmware.py:L301–L302` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/conf/vmware.py:L16)

## Side Effects

- **global-mutation**: ALL_VMWARE_OPTS = (vmwareapi_vif_opts + (src/nova/conf/vmware.py:L289)

