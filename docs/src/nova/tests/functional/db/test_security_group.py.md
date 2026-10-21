# src/nova/tests/functional/db/test_security_group.py

## Overview

This file implements the `test_security_group` module, defining 1 class, 3 methods, 4 imports, 1 security surface entry.

Lines: total 50, code 27, comment 15, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SecurityGroupObjectTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_security_group.py:L19–L50` |
| `SecurityGroupObjectTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/db/test_security_group.py:L20–L22` |
| `SecurityGroupObjectTestCase._create_group` | method | (self, **values) | private | not declared | 1/7 | `src/nova/tests/functional/db/test_security_group.py:L24–L30` |
| `SecurityGroupObjectTestCase.test_get_counts` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/db/test_security_group.py:L32–L50` |

## Dependencies

- `nova`: imports `context` (src/nova/tests/functional/db/test_security_group.py:L13)
- `nova.db.main`: imports `api as db_api` (src/nova/tests/functional/db/test_security_group.py:L14)
- `nova`: imports `objects` (src/nova/tests/functional/db/test_security_group.py:L15)
- `nova`: imports `test` (src/nova/tests/functional/db/test_security_group.py:L16)

## Security Surface

- **sink** (`db-write`): defaults.update(values) (src/nova/tests/functional/db/test_security_group.py:L29)

