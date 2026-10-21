# src/nova/tests/unit/fake_network_cache_model.py

## Overview

This file implements the `fake_network_cache_model` module, defining 6 functions, 2 imports, 6 security surface entries.

Lines: total 111, code 82, comment 14, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `new_ip` | function | (ip_dict=None, version=4) | exported | `model.IP(**new_ip)` (src/nova/tests/unit/fake_network_cache_model.py:L28) | 4/8 | `src/nova/tests/unit/fake_network_cache_model.py:L21–L28` |
| `new_fixed_ip` | function | (ip_dict=None, version=4) | exported | `model.FixedIP(**new_fixed_ip)` (src/nova/tests/unit/fake_network_cache_model.py:L38) | 4/8 | `src/nova/tests/unit/fake_network_cache_model.py:L31–L38` |
| `new_route` | function | (route_dict=None, version=4) | exported | `model.Route(**new_route)` (src/nova/tests/unit/fake_network_cache_model.py:L55) | 4/14 | `src/nova/tests/unit/fake_network_cache_model.py:L41–L55` |
| `new_subnet` | function | (subnet_dict=None, version=4) | exported | `model.Subnet(**new_subnet)` (src/nova/tests/unit/fake_network_cache_model.py:L80) | 4/23 | `src/nova/tests/unit/fake_network_cache_model.py:L58–L80` |
| `new_network` | function | (network_dict=None, version=4) | exported | `model.Network(**new_net)` (src/nova/tests/unit/fake_network_cache_model.py:L100) | 4/18 | `src/nova/tests/unit/fake_network_cache_model.py:L83–L100` |
| `new_vif` | function | (vif_dict=None, version=4) | exported | `model.VIF(**vif)` (src/nova/tests/unit/fake_network_cache_model.py:L111) | 2/9 | `src/nova/tests/unit/fake_network_cache_model.py:L103–L111` |

## Dependencies

- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/fake_network_cache_model.py:L16)
- `nova.network`: imports `model` (src/nova/tests/unit/fake_network_cache_model.py:L18)

## Security Surface

- **sink** (`db-write`): new_ip.update(ip_dict) (src/nova/tests/unit/fake_network_cache_model.py:L27)
- **sink** (`db-write`): new_fixed_ip.update(ip_dict) (src/nova/tests/unit/fake_network_cache_model.py:L37)
- **sink** (`db-write`): new_route.update(route_dict) (src/nova/tests/unit/fake_network_cache_model.py:L54)
- **sink** (`db-write`): new_subnet.update(subnet_dict) (src/nova/tests/unit/fake_network_cache_model.py:L79)
- **sink** (`db-write`): new_net.update(network_dict) (src/nova/tests/unit/fake_network_cache_model.py:L99)
- **sink** (`db-write`): vif.update(vif_dict) (src/nova/tests/unit/fake_network_cache_model.py:L110)

