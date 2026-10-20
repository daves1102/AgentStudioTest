# src/nova/policies/server_topology.py

## Overview

This file implements the `server_topology` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect.

Lines: total 50, code 30, comment 13, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/server_topology.py:L19–L19` |
| `server_topology_policies` | variable | — | exported | not declared | — | `src/nova/policies/server_topology.py:L21–L46` |
| `list_rules` | function | — | exported | `server_topology_policies` (src/nova/policies/server_topology.py:L50) | 1/2 | `src/nova/policies/server_topology.py:L49–L50` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/server_topology.py:L14)
- `nova.policies`: imports `base` (src/nova/policies/server_topology.py:L16)

## Side Effects

- **global-mutation**: BASE_POLICY_NAME = 'compute:server:topology:%s' (src/nova/policies/server_topology.py:L19)

