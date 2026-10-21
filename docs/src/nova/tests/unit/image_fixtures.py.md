# src/nova/tests/unit/image_fixtures.py

## Overview

This file implements the `image_fixtures` module, defining 1 constant, 2 functions, 2 imports, 2 side effects, 1 security surface entry.

Lines: total 79, code 47, comment 17, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NOW_DATE` | constant | — | exported | not declared | — | `src/nova/tests/unit/image_fixtures.py:L19–L19` |
| `get_image_fixtures` | function | — | exported | `fixtures` (src/nova/tests/unit/image_fixtures.py:L79) | 4/25 | `src/nova/tests/unit/image_fixtures.py:L22–L79` |
| `get_image_fixtures.add_fixture` | function | (**kwargs) | public | not declared | — | `src/nova/tests/unit/image_fixtures.py:L45–L48` |

## Dependencies

- `import datetime` (src/nova/tests/unit/image_fixtures.py:L13)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/image_fixtures.py:L15)

## Side Effects

- **network**: `glanceclient.client.Client.images.list`. The IDs of the images are random, (src/nova/tests/unit/image_fixtures.py:L27)
- **global-mutation**: NOW_DATE = datetime.datetime(2010, 10, 11, 10, 30, 22) (src/nova/tests/unit/image_fixtures.py:L19)

## Security Surface

- **sink** (`db-write`): kwargs.update(created_at=NOW_DATE, (src/nova/tests/unit/image_fixtures.py:L46)

