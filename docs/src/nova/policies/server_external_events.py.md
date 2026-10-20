# src/nova/policies/server_external_events.py

## Overview

This file implements the `server_external_events` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect.

Lines: total 40, code 18, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/server_external_events.py:L21–L21` |
| `server_external_events_policies` | variable | — | exported | not declared | — | `src/nova/policies/server_external_events.py:L24–L36` |
| `list_rules` | function | — | exported | `server_external_events_policies` (src/nova/policies/server_external_events.py:L40) | 1/2 | `src/nova/policies/server_external_events.py:L39–L40` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/server_external_events.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/server_external_events.py:L18)

## Side Effects

- **global-mutation**: POLICY_ROOT = 'os_compute_api:os-server-external-events:%s' (src/nova/policies/server_external_events.py:L21)

