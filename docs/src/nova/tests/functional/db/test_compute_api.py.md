# src/nova/tests/functional/db/test_compute_api.py

## Overview

This file implements the `test_compute_api` module, defining 1 class, 1 constant, 2 methods, 8 imports, 1 side effect.

Lines: total 59, code 33, comment 16, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ComputeAPITestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_compute_api.py:L25–L59` |
| `ComputeAPITestCase.USES_DB_SELF` | constant | — | public | not declared | — | `src/nova/tests/functional/db/test_compute_api.py:L26–L26` |
| `ComputeAPITestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/db/test_compute_api.py:L28–L30` |
| `ComputeAPITestCase.test_reqspec_buildreq_instmapping_single_transaction` | method | (self, mock_create) | public | not declared | 1/19 | `src/nova/tests/functional/db/test_compute_api.py:L33–L59` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/functional/db/test_compute_api.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/db/test_compute_api.py:L15)
- `nova.compute`: imports `api as compute_api` (src/nova/tests/functional/db/test_compute_api.py:L17)
- `nova`: imports `context as nova_context` (src/nova/tests/functional/db/test_compute_api.py:L18)
- `nova`: imports `exception` (src/nova/tests/functional/db/test_compute_api.py:L19)
- `nova`: imports `objects` (src/nova/tests/functional/db/test_compute_api.py:L20)
- `nova`: imports `test` (src/nova/tests/functional/db/test_compute_api.py:L21)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/db/test_compute_api.py:L22)

## Side Effects

- **global-mutation**: USES_DB_SELF = True (src/nova/tests/functional/db/test_compute_api.py:L26)

