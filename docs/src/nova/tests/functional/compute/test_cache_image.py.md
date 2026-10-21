# src/nova/tests/functional/compute/test_cache_image.py

## Overview

This file implements the `test_cache_image` module, defining 1 class, 1 constant, 2 methods, 5 imports, 1 side effect.

Lines: total 102, code 70, comment 14, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ImageCacheTest` | class | — | exported | not declared | — | `src/nova/tests/functional/compute/test_cache_image.py:L21–L102` |
| `ImageCacheTest.NUMBER_OF_CELLS` | constant | — | public | not declared | — | `src/nova/tests/functional/compute/test_cache_image.py:L22–L22` |
| `ImageCacheTest.setUp` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/compute/test_cache_image.py:L24–L47` |
| `ImageCacheTest.test_cache_image` | method | (self) | public | not declared | 5/40 | `src/nova/tests/functional/compute/test_cache_image.py:L49–L102` |

## Dependencies

- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/compute/test_cache_image.py:L13)
- `nova`: imports `context` (src/nova/tests/functional/compute/test_cache_image.py:L15)
- `nova`: imports `objects` (src/nova/tests/functional/compute/test_cache_image.py:L16)
- `nova`: imports `test` (src/nova/tests/functional/compute/test_cache_image.py:L17)
- `nova.tests`: imports `fixtures` (src/nova/tests/functional/compute/test_cache_image.py:L18)

## Side Effects

- **global-mutation**: NUMBER_OF_CELLS = 2 (src/nova/tests/functional/compute/test_cache_image.py:L22)

