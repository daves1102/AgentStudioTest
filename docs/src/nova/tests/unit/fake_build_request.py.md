# src/nova/tests/unit/fake_build_request.py

## Overview

This file implements the `fake_build_request` module, defining 2 functions, 9 imports, 1 security surface entry.

Lines: total 100, code 76, comment 14, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_db_req` | function | (**updates) | exported | `db_build_request` (src/nova/tests/unit/fake_build_request.py:L70) | 6/41 | `src/nova/tests/unit/fake_build_request.py:L26–L70` |
| `fake_req_obj` | function | (ctxt, db_req=None) | exported | `req_obj` (src/nova/tests/unit/fake_build_request.py:L100) | 9/26 | `src/nova/tests/unit/fake_build_request.py:L73–L100` |

## Dependencies

- `import datetime` (src/nova/tests/unit/fake_build_request.py:L13)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/fake_build_request.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/fake_build_request.py:L16)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/fake_build_request.py:L17)
- `nova`: imports `context` (src/nova/tests/unit/fake_build_request.py:L19)
- `nova`: imports `objects` (src/nova/tests/unit/fake_build_request.py:L20)
- `nova.objects`: imports `fields` (src/nova/tests/unit/fake_build_request.py:L21)
- `nova.tests.unit`: imports `fake_block_device` (src/nova/tests/unit/fake_build_request.py:L22)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/fake_build_request.py:L23)

## Security Surface

- **sink** (`db-write`): db_build_request.update(updates) (src/nova/tests/unit/fake_build_request.py:L68)

