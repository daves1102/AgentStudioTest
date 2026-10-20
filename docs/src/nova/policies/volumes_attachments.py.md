# src/nova/policies/volumes_attachments.py

## Overview

This file implements the `volumes_attachments` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect, 4 security surface entries.

Lines: total 102, code 80, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/volumes_attachments.py:L21–L21` |
| `volumes_attachments_policies` | variable | — | exported | not declared | — | `src/nova/policies/volumes_attachments.py:L24–L98` |
| `list_rules` | function | — | exported | `volumes_attachments_policies` (src/nova/policies/volumes_attachments.py:L102) | 1/2 | `src/nova/policies/volumes_attachments.py:L101–L102` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/volumes_attachments.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/volumes_attachments.py:L18)

## Side Effects

- **global-mutation**: POLICY_ROOT = 'os_compute_api:os-volumes-attachments:%s' (src/nova/policies/volumes_attachments.py:L21)

## Security Surface

- **sink** (`db-write`): name=POLICY_ROOT % 'update', (src/nova/policies/volumes_attachments.py:L59)
- **sink** (`db-write`): description="""Update a volume attachment. (src/nova/policies/volumes_attachments.py:L61)
- **sink** (`db-write`): New 'update' policy about 'swap + update' request (which is possible (src/nova/policies/volumes_attachments.py:L62)
- **sink** (`db-write`): description="Update a volume attachment with a different volumeId", (src/nova/policies/volumes_attachments.py:L77)

