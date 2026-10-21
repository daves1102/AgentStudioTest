# src/nova/tests/functional/db/test_connection_switch.py

## Overview

This file implements the `test_connection_switch` module, defining 2 classs, 2 constants, 2 fields, 7 methods, 8 imports, 2 side effects.

Lines: total 201, code 134, comment 34, blank 33

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ConnectionSwitchTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_connection_switch.py:L25–L70` |
| `ConnectionSwitchTestCase.USES_DB_SELF` | constant | — | public | not declared | — | `src/nova/tests/functional/db/test_connection_switch.py:L26–L26` |
| `ConnectionSwitchTestCase.test_filename` | field | — | public | not declared | — | `src/nova/tests/functional/db/test_connection_switch.py:L27–L27` |
| `ConnectionSwitchTestCase.fake_conn` | field | — | public | not declared | — | `src/nova/tests/functional/db/test_connection_switch.py:L28–L28` |
| `ConnectionSwitchTestCase.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_connection_switch.py:L30–L38` |
| `ConnectionSwitchTestCase.cleanup` | method | (self) | public | not declared | 2/5 | `src/nova/tests/functional/db/test_connection_switch.py:L40–L44` |
| `ConnectionSwitchTestCase.test_connection_switch` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/db/test_connection_switch.py:L46–L70` |
| `CellDatabasesTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_connection_switch.py:L73–L201` |
| `CellDatabasesTestCase.USES_DB_SELF` | constant | — | public | not declared | — | `src/nova/tests/functional/db/test_connection_switch.py:L74–L74` |
| `CellDatabasesTestCase.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/db/test_connection_switch.py:L76–L85` |
| `CellDatabasesTestCase._create_cell_mappings` | method | (self) | private | not declared | 1/17 | `src/nova/tests/functional/db/test_connection_switch.py:L87–L103` |
| `CellDatabasesTestCase.test_cell_dbs` | method | (self) | public | not declared | 1/25 | `src/nova/tests/functional/db/test_connection_switch.py:L105–L141` |
| `CellDatabasesTestCase.test_scatter_gather_cells` | method | (self) | public | not declared | 5/42 | `src/nova/tests/functional/db/test_connection_switch.py:L143–L201` |

## Dependencies

- `import os` (src/nova/tests/functional/db/test_connection_switch.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/db/test_connection_switch.py:L15)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/functional/db/test_connection_switch.py:L16)
- `nova`: imports `context` (src/nova/tests/functional/db/test_connection_switch.py:L18)
- `nova`: imports `exception` (src/nova/tests/functional/db/test_connection_switch.py:L19)
- `nova`: imports `objects` (src/nova/tests/functional/db/test_connection_switch.py:L20)
- `nova`: imports `test` (src/nova/tests/functional/db/test_connection_switch.py:L21)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/db/test_connection_switch.py:L22)

## Side Effects

- **global-mutation**: USES_DB_SELF = True (src/nova/tests/functional/db/test_connection_switch.py:L26)
- **global-mutation**: USES_DB_SELF = True (src/nova/tests/functional/db/test_connection_switch.py:L74)

