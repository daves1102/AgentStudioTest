# src/nova/availability_zones.py

## Overview

This file implements the `availability_zones` module, defining 3 constants, 11 functions, 4 imports, 5 side effects, 1 security surface entry.

Lines: total 212, code 135, comment 33, blank 44

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `AZ_CACHE_SECONDS` | constant | — | exported | not declared | — | `src/nova/availability_zones.py:L26–L26` |
| `MC` | constant | — | exported | not declared | — | `src/nova/availability_zones.py:L27–L27` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/availability_zones.py:L29–L29` |
| `_get_cache` | function | — | unexported | `MC` (src/nova/availability_zones.py:L38) | 2/5 | `src/nova/availability_zones.py:L32–L38` |
| `reset_cache` | function | — | exported | not declared | 1/3 | `src/nova/availability_zones.py:L41–L48` |
| `_make_cache_key` | function | (host) | unexported | `"azcache-%s" % host` (src/nova/availability_zones.py:L52) | 1/2 | `src/nova/availability_zones.py:L51–L52` |
| `_build_metadata_by_host` | function | (aggregates, hosts=None) | unexported | `metadata` (src/nova/availability_zones.py:L64) | 7/10 | `src/nova/availability_zones.py:L55–L64` |
| `set_availability_zones` | function | (context, services) | exported | `services` (src/nova/availability_zones.py:L86) | 6/17 | `src/nova/availability_zones.py:L67–L86` |
| `get_host_availability_zone` | function | (context, host) | exported | `az` (src/nova/availability_zones.py:L96) | 2/8 | `src/nova/availability_zones.py:L89–L96` |
| `update_host_availability_zone_cache` | function | (context, host, availability_zone=None) | exported | not declared | 2/7 | `src/nova/availability_zones.py:L99–L105` |
| `get_availability_zones` | function | (context, hostapi, get_only_available=False, with_hosts=False, services=None) | exported | `_get_availability_zones_with_hosts( enabled_services, disabled_services, get_only_available)` (src/nova/availability_zones.py:L136); `_get_availability_zones( enabled_services, disabled_services, get_only_available)` (src/nova/availability_zones.py:L139) | 5/18 | `src/nova/availability_zones.py:L108–L140` |
| `_get_availability_zones` | function | (enabled_services, disabled_services, get_only_available=False) | unexported | `sorted(available_zones)` (src/nova/availability_zones.py:L151); `sorted(available_zones), sorted(not_available_zones)` (src/nova/availability_zones.py:L158) | 5/12 | `src/nova/availability_zones.py:L143–L158` |
| `_get_availability_zones_with_hosts` | function | (enabled_services, disabled_services, get_only_available=False) | unexported | `sorted(available_zones.items())` (src/nova/availability_zones.py:L169); `sorted(available_zones.items()), sorted(not_available_zones.items())` (src/nova/availability_zones.py:L178) | 5/13 | `src/nova/availability_zones.py:L161–L178` |
| `get_instance_availability_zone` | function | (context, instance) | exported | `az` (src/nova/availability_zones.py:L189); `az` (src/nova/availability_zones.py:L212) | 6/16 | `src/nova/availability_zones.py:L181–L212` |

## Dependencies

- `import collections` (src/nova/availability_zones.py:L18)
- `nova`: imports `cache_utils` (src/nova/availability_zones.py:L20)
- `import nova.conf` (src/nova/availability_zones.py:L21)
- `nova`: imports `objects` (src/nova/availability_zones.py:L22)

## Side Effects

- **global-mutation**: AZ_CACHE_SECONDS = 60 * 60 (src/nova/availability_zones.py:L26)
- **global-mutation**: MC = None (src/nova/availability_zones.py:L27)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/availability_zones.py:L29)
- **global-mutation**: MC = cache_utils.get_client(expiration_time=AZ_CACHE_SECONDS) (src/nova/availability_zones.py:L36)
- **global-mutation**: MC = None (src/nova/availability_zones.py:L48)

## Security Surface

- **sink** (`db-write`): """Reset the cache, mainly for testing purposes and update (src/nova/availability_zones.py:L42)

