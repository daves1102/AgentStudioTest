# src/nova/cache_utils.py

## Overview

This file implements the `cache_utils` module, defining 1 class, 3 constants, 5 functions, 4 methods, 4 imports, 3 side effects.

Lines: total 116, code 69, comment 20, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/cache_utils.py:L25–L25` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/cache_utils.py:L27–L27` |
| `WEEK` | constant | — | exported | not declared | — | `src/nova/cache_utils.py:L29–L29` |
| `_warn_if_null_backend` | function | — | unexported | not declared | 2/3 | `src/nova/cache_utils.py:L32–L34` |
| `get_memcached_client` | function | (expiration_time=0) | exported | `CacheClient( _get_default_cache_region(expiration_time=expiration_time))` (src/nova/cache_utils.py:L43) | 3/5 | `src/nova/cache_utils.py:L37–L44` |
| `get_client` | function | (expiration_time=0) | exported | `CacheClient( _get_default_cache_region(expiration_time=expiration_time))` (src/nova/cache_utils.py:L53); `CacheClient( _get_custom_cache_region(expiration_time=expiration_time, backend='oslo_cache.dict'))` (src/nova/cache_utils.py:L56) | 2/8 | `src/nova/cache_utils.py:L47–L58` |
| `_get_default_cache_region` | function | (expiration_time) | unexported | `region` (src/nova/cache_utils.py:L66) | 2/6 | `src/nova/cache_utils.py:L61–L66` |
| `_get_custom_cache_region` | function | (expiration_time=WEEK, backend=None, url=None) | unexported | `region` (src/nova/cache_utils.py:L97) | 4/16 | `src/nova/cache_utils.py:L69–L97` |
| `CacheClient` | class | — | exported | not declared | — | `src/nova/cache_utils.py:L100–L116` |
| `CacheClient.__init__` | method | (self, region) | public | not declared | 1/2 | `src/nova/cache_utils.py:L103–L104` |
| `CacheClient.get` | method | (self, key) | public | `None` (src/nova/cache_utils.py:L109); `value` (src/nova/cache_utils.py:L110) | 2/5 | `src/nova/cache_utils.py:L106–L110` |
| `CacheClient.set` | method | (self, key, value) | public | `self.region.set(key, value)` (src/nova/cache_utils.py:L113) | 1/2 | `src/nova/cache_utils.py:L112–L113` |
| `CacheClient.delete` | method | (self, key) | public | `self.region.delete(key)` (src/nova/cache_utils.py:L116) | 1/2 | `src/nova/cache_utils.py:L115–L116` |

## Dependencies

- `oslo_cache`: imports `core as cache` (src/nova/cache_utils.py:L19)
- `oslo_log`: imports `log as logging` (src/nova/cache_utils.py:L20)
- `import nova.conf` (src/nova/cache_utils.py:L22)
- `nova.i18n`: imports `_` (src/nova/cache_utils.py:L23)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/cache_utils.py:L25)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/cache_utils.py:L27)
- **global-mutation**: WEEK = 604800 (src/nova/cache_utils.py:L29)

