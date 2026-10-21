# src/nova/tests/functional/test_ip_allocation.py

## Overview

This file implements the `test_ip_allocation` module, defining 1 class, 1 constant, 2 fields, 2 methods, 1 import, 1 side effect.

Lines: total 53, code 33, comment 13, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `IPAllocationTests` | class | — | exported | not declared | — | `src/nova/tests/functional/test_ip_allocation.py:L16–L53` |
| `IPAllocationTests.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_ip_allocation.py:L21–L21` |
| `IPAllocationTests.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_ip_allocation.py:L22–L22` |
| `IPAllocationTests.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/test_ip_allocation.py:L23–L23` |
| `IPAllocationTests.setUp` | method | (self) | public | not declared | 1/21 | `src/nova/tests/functional/test_ip_allocation.py:L25–L48` |
| `IPAllocationTests.test_boot_with_none_policy` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_ip_allocation.py:L50–L53` |

## Dependencies

- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_ip_allocation.py:L13)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/test_ip_allocation.py:L23)

