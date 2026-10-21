# src/nova/tests/unit/test_cache.py

## Overview

This file implements the `test_cache` module, defining 1 class, 4 methods, 3 imports.

Lines: total 59, code 39, comment 12, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestOsloCache` | class | — | exported | not declared | — | `src/nova/tests/unit/test_cache.py:L19–L59` |
| `TestOsloCache.test_get_default_cache_region` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_cache.py:L20–L23` |
| `TestOsloCache.test_get_default_cache_region_default_expiration_time` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_cache.py:L25–L29` |
| `TestOsloCache.test_get_custom_cache_region` | method | (self, mock_cacheregion) | public | not declared | 1/18 | `src/nova/tests/unit/test_cache.py:L32–L49` |
| `TestOsloCache.test_get_memcached_client` | method | (self, mock_cacheregion) | public | not declared | 2/7 | `src/nova/tests/unit/test_cache.py:L52–L59` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/test_cache.py:L13)
- `nova`: imports `cache_utils` (src/nova/tests/unit/test_cache.py:L15)
- `nova`: imports `test` (src/nova/tests/unit/test_cache.py:L16)

