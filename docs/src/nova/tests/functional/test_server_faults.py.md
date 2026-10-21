# src/nova/tests/functional/test_server_faults.py

## Overview

This file implements the `test_server_faults` module, defining 2 classs, 2 methods, 5 imports.

Lines: total 109, code 59, comment 38, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `HypervisorError` | class | — | exported | not declared | — | `src/nova/tests/functional/test_server_faults.py:L21–L23` |
| `ServerFaultTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/test_server_faults.py:L26–L109` |
| `ServerFaultTestCase.setUp` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/test_server_faults.py:L30–L45` |
| `ServerFaultTestCase.test_server_fault_non_nova_exception` | method | (self) | public | not declared | 1/29 | `src/nova/tests/functional/test_server_faults.py:L47–L109` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/functional/test_server_faults.py:L13)
- `nova`: imports `test` (src/nova/tests/functional/test_server_faults.py:L15)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/test_server_faults.py:L16)
- `nova.tests.functional`: imports `fixtures as func_fixtures` (src/nova/tests/functional/test_server_faults.py:L17)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_server_faults.py:L18)

