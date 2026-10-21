# src/nova/tests/unit/fake_flavor.py

## Overview

This file implements the `fake_flavor` module, defining 2 functions, 2 imports, 1 security surface entry.

Lines: total 56, code 35, comment 13, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_db_flavor` | function | (**updates) | exported | `db_flavor` (src/nova/tests/unit/fake_flavor.py:L49) | 6/28 | `src/nova/tests/unit/fake_flavor.py:L19–L49` |
| `fake_flavor_obj` | function | (context, **updates) | exported | `objects.Flavor._from_db_object(context, objects.Flavor(), fake_db_flavor(**updates), expected_attrs=expected_attrs)` (src/nova/tests/unit/fake_flavor.py:L54) | 1/5 | `src/nova/tests/unit/fake_flavor.py:L52–L56` |

## Dependencies

- `nova`: imports `objects` (src/nova/tests/unit/fake_flavor.py:L15)
- `nova.objects`: imports `fields` (src/nova/tests/unit/fake_flavor.py:L16)

## Security Surface

- **sink** (`db-write`): db_flavor.update(updates) (src/nova/tests/unit/fake_flavor.py:L47)

