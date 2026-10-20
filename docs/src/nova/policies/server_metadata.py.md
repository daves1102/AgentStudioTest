# src/nova/policies/server_metadata.py

## Overview

This file implements the `server_metadata` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect, 2 security surface entries.

Lines: total 101, code 79, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/server_metadata.py:L21–L21` |
| `server_metadata_policies` | variable | — | exported | not declared | — | `src/nova/policies/server_metadata.py:L24–L97` |
| `list_rules` | function | — | exported | `server_metadata_policies` (src/nova/policies/server_metadata.py:L101) | 1/2 | `src/nova/policies/server_metadata.py:L100–L101` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/server_metadata.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/server_metadata.py:L18)

## Side Effects

- **global-mutation**: POLICY_ROOT = 'os_compute_api:server-metadata:%s' (src/nova/policies/server_metadata.py:L21)

## Security Surface

- **sink** (`db-write`): name=POLICY_ROOT % 'update', (src/nova/policies/server_metadata.py:L74)
- **sink** (`db-write`): description="Update metadata from a server", (src/nova/policies/server_metadata.py:L76)

