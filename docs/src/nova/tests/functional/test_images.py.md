# src/nova/tests/functional/test_images.py

## Overview

This file implements the `test_images` module, defining 1 class, 2 methods, 3 imports.

Lines: total 103, code 61, comment 28, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ImagesTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_images.py:L19–L103` |
| `ImagesTest.test_create_images_negative_invalid_state` | method | (self) | public | not declared | 3/29 | `src/nova/tests/functional/test_images.py:L21–L62` |
| `ImagesTest.test_admin_snapshot_user_image_access_member` | method | (self) | public | not declared | 3/23 | `src/nova/tests/functional/test_images.py:L64–L103` |

## Dependencies

- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/test_images.py:L13)
- `nova.tests.functional.api`: imports `client` (src/nova/tests/functional/test_images.py:L15)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_images.py:L16)

