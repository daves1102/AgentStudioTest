# src/nova/policies/server_diagnostics.py

## Overview

This file implements the `server_diagnostics` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect.

Lines: total 40, code 18, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/server_diagnostics.py:L21–L21` |
| `server_diagnostics_policies` | variable | — | exported | not declared | — | `src/nova/policies/server_diagnostics.py:L24–L36` |
| `list_rules` | function | — | exported | `server_diagnostics_policies` (src/nova/policies/server_diagnostics.py:L40) | 1/2 | `src/nova/policies/server_diagnostics.py:L39–L40` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/server_diagnostics.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/server_diagnostics.py:L18)

## Side Effects

- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:os-server-diagnostics' (src/nova/policies/server_diagnostics.py:L21)

