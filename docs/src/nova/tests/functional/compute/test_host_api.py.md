# src/nova/tests/functional/compute/test_host_api.py

## Overview

This file implements the `test_host_api` module, defining 1 class, 1 constant, 3 methods, 7 imports, 1 side effect.

Lines: total 123, code 86, comment 24, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ComputeHostAPIMultiCellTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/compute/test_host_api.py:L24–L123` |
| `ComputeHostAPIMultiCellTestCase.USES_DB_SELF` | constant | — | public | not declared | — | `src/nova/tests/functional/compute/test_host_api.py:L27–L27` |
| `ComputeHostAPIMultiCellTestCase.setUp` | method | (self) | public | not declared | 1/24 | `src/nova/tests/functional/compute/test_host_api.py:L29–L53` |
| `ComputeHostAPIMultiCellTestCase.test_compute_node_get_all_uuid_marker` | method | (self) | public | not declared | 5/40 | `src/nova/tests/functional/compute/test_host_api.py:L55–L115` |
| `ComputeHostAPIMultiCellTestCase.test_compute_node_get_all_uuid_marker_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/compute/test_host_api.py:L117–L123` |

## Dependencies

- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/compute/test_host_api.py:L14)
- `nova.compute`: imports `api as compute_api` (src/nova/tests/functional/compute/test_host_api.py:L16)
- `nova`: imports `context` (src/nova/tests/functional/compute/test_host_api.py:L17)
- `nova`: imports `exception` (src/nova/tests/functional/compute/test_host_api.py:L18)
- `nova`: imports `objects` (src/nova/tests/functional/compute/test_host_api.py:L19)
- `nova`: imports `test` (src/nova/tests/functional/compute/test_host_api.py:L20)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/compute/test_host_api.py:L21)

## Side Effects

- **global-mutation**: USES_DB_SELF = True (src/nova/tests/functional/compute/test_host_api.py:L27)

