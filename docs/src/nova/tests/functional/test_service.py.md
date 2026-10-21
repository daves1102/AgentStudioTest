# src/nova/tests/functional/test_service.py

## Overview

This file implements the `test_service` module, defining 3 classs, 1 constant, 12 methods, 12 imports, 1 side effect.

Lines: total 197, code 124, comment 41, blank 32

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServiceTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/test_service.py:L29–L84` |
| `ServiceTestCase.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_service.py:L34–L48` |
| `ServiceTestCase.test_service_reset_resets_cell_cache` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_service.py:L50–L61` |
| `ServiceTestCase.test_service_start_resets_cell_cache` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_service.py:L63–L84` |
| `TestOldComputeCheck` | class | — | exported | not declared | — | `src/nova/tests/functional/test_service.py:L87–L117` |
| `TestOldComputeCheck.test_conductor_fails_to_start_with_old_compute` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_service.py:L90–L98` |
| `TestOldComputeCheck.test_api_fails_to_start_with_old_compute` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_service.py:L100–L108` |
| `TestOldComputeCheck.test_compute_fails_to_start_with_old_compute` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_service.py:L110–L117` |
| `TestComputeStartupChecks` | class | — | exported | not declared | — | `src/nova/tests/functional/test_service.py:L120–L197` |
| `TestComputeStartupChecks.STUB_COMPUTE_ID` | constant | — | public | not declared | — | `src/nova/tests/functional/test_service.py:L121–L121` |
| `TestComputeStartupChecks.setUp` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/test_service.py:L123–L141` |
| `TestComputeStartupChecks.local_uuid` | method | (self, get=False) | public | `self._local_uuid` (src/nova/tests/functional/test_service.py:L148) | 3/5 | `src/nova/tests/functional/test_service.py:L143–L148` |
| `TestComputeStartupChecks.test_compute_node_identity_greenfield` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_service.py:L150–L163` |
| `TestComputeStartupChecks.test_compute_node_identity_deleted` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_service.py:L165–L175` |
| `TestComputeStartupChecks.test_compute_node_hostname_changed` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_service.py:L177–L184` |
| `TestComputeStartupChecks.test_compute_node_uuid_changed` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_service.py:L186–L197` |

## Dependencies

- `import functools` (src/nova/tests/functional/test_service.py:L13)
- `unittest`: imports `mock` (src/nova/tests/functional/test_service.py:L14)
- `import fixtures` (src/nova/tests/functional/test_service.py:L16)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/test_service.py:L17)
- `nova`: imports `context as nova_context` (src/nova/tests/functional/test_service.py:L19)
- `nova`: imports `exception` (src/nova/tests/functional/test_service.py:L20)
- `nova.objects`: imports `service` (src/nova/tests/functional/test_service.py:L21)
- `nova`: imports `test` (src/nova/tests/functional/test_service.py:L22)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/test_service.py:L23)
- `nova.tests.functional`: imports `fixtures as func_fixtures` (src/nova/tests/functional/test_service.py:L24)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_service.py:L25)
- `nova.virt`: imports `node` (src/nova/tests/functional/test_service.py:L26)

## Side Effects

- **global-mutation**: STUB_COMPUTE_ID = False (src/nova/tests/functional/test_service.py:L121)

