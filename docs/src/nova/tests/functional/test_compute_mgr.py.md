# src/nova/tests/functional/test_compute_mgr.py

## Overview

This file implements the `test_compute_mgr` module, defining 1 class, 1 function, 2 methods, 9 imports, 1 side effect.

Lines: total 85, code 62, comment 15, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ComputeManagerTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/test_compute_mgr.py:L26–L85` |
| `ComputeManagerTestCase.setUp` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/test_compute_mgr.py:L27–L40` |
| `ComputeManagerTestCase.test_instance_fault_message_no_traceback_with_retry` | method | (self) | public | not declared | 1/21 | `src/nova/tests/functional/test_compute_mgr.py:L42–L85` |
| `ComputeManagerTestCase.test_instance_fault_message_no_traceback_with_retry._test` | function | (mock_spawn, mock_grt, mock_notify, mock_cinoh, mock_can) | private | not declared | — | `src/nova/tests/functional/test_compute_mgr.py:L71–L83` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/functional/test_compute_mgr.py:L13)
- `import fixtures` (src/nova/tests/functional/test_compute_mgr.py:L15)
- `nova`: imports `context` (src/nova/tests/functional/test_compute_mgr.py:L17)
- `nova.network`: imports `model as network_model` (src/nova/tests/functional/test_compute_mgr.py:L18)
- `nova`: imports `objects` (src/nova/tests/functional/test_compute_mgr.py:L19)
- `nova`: imports `test` (src/nova/tests/functional/test_compute_mgr.py:L20)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/test_compute_mgr.py:L21)
- `nova.tests.unit`: imports `fake_network` (src/nova/tests/functional/test_compute_mgr.py:L22)
- `nova.tests.unit`: imports `fake_server_actions` (src/nova/tests/functional/test_compute_mgr.py:L23)

## Side Effects

- **network**: def _test(mock_spawn, mock_grt, mock_notify, mock_cinoh, mock_can): (src/nova/tests/functional/test_compute_mgr.py:L71)

## Notes

- KB `sideEffects` entries at L71 have targets that appear to be code fragments rather than resource paths; documented as recorded.

