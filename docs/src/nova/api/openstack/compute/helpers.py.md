# src/nova/api/openstack/compute/helpers.py

## Overview

This file implements the `helpers` module, defining 7 constants, 3 functions, 3 imports, 7 side effects, 3 security surface entries.

Lines: total 116, code 70, comment 24, blank 22

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `API_DISK_CONFIG` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/helpers.py:L21–L21` |
| `API_ACCESS_V4` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/helpers.py:L22–L22` |
| `API_ACCESS_V6` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/helpers.py:L23–L23` |
| `CREATE` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/helpers.py:L26–L26` |
| `UPDATE` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/helpers.py:L27–L27` |
| `REBUILD` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/helpers.py:L28–L28` |
| `RESIZE` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/helpers.py:L29–L29` |
| `disk_config_from_api` | function | (value) | exported | `True` (src/nova/api/openstack/compute/helpers.py:L34); `False` (src/nova/api/openstack/compute/helpers.py:L36) | 3/8 | `src/nova/api/openstack/compute/helpers.py:L32–L39` |
| `get_injected_files` | function | (personality) | exported | `injected_files` (src/nova/api/openstack/compute/helpers.py:L52) | 2/5 | `src/nova/api/openstack/compute/helpers.py:L42–L52` |
| `translate_attributes` | function | (op, server_dict, operation_kwargs) | exported | not declared | 9/20 | `src/nova/api/openstack/compute/helpers.py:L55–L116` |

## Dependencies

- `oslo_utils`: imports `strutils` (src/nova/api/openstack/compute/helpers.py:L16)
- `webob`: imports `exc` (src/nova/api/openstack/compute/helpers.py:L17)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/helpers.py:L19)

## Side Effects

- **global-mutation**: API_DISK_CONFIG = "OS-DCF:diskConfig" (src/nova/api/openstack/compute/helpers.py:L21)
- **global-mutation**: API_ACCESS_V4 = "accessIPv4" (src/nova/api/openstack/compute/helpers.py:L22)
- **global-mutation**: API_ACCESS_V6 = "accessIPv6" (src/nova/api/openstack/compute/helpers.py:L23)
- **global-mutation**: CREATE = 'create' (src/nova/api/openstack/compute/helpers.py:L26)
- **global-mutation**: UPDATE = 'update' (src/nova/api/openstack/compute/helpers.py:L27)
- **global-mutation**: REBUILD = 'rebuild' (src/nova/api/openstack/compute/helpers.py:L28)
- **global-mutation**: RESIZE = 'resize' (src/nova/api/openstack/compute/helpers.py:L29)

## Security Surface

- **sink** (`db-write`): UPDATE = 'update' (src/nova/api/openstack/compute/helpers.py:L27)
- **sink** (`db-write`): / rebuild / update (src/nova/api/openstack/compute/helpers.py:L65)
- **sink** (`db-write`): question. During ``create`` and ``update`` operations this will (src/nova/api/openstack/compute/helpers.py:L72)

