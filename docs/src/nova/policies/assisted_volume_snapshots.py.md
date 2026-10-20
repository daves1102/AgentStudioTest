# src/nova/policies/assisted_volume_snapshots.py

## Overview

This file implements the `assisted_volume_snapshots` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect.

Lines: total 51, code 29, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/assisted_volume_snapshots.py:L21–L21` |
| `assisted_volume_snapshots_policies` | variable | — | exported | not declared | — | `src/nova/policies/assisted_volume_snapshots.py:L24–L47` |
| `list_rules` | function | — | exported | `assisted_volume_snapshots_policies` (src/nova/policies/assisted_volume_snapshots.py:L51) | 1/2 | `src/nova/policies/assisted_volume_snapshots.py:L50–L51` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/assisted_volume_snapshots.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/assisted_volume_snapshots.py:L18)

## Side Effects

- **global-mutation**: POLICY_ROOT = 'os_compute_api:os-assisted-volume-snapshots:%s' (src/nova/policies/assisted_volume_snapshots.py:L21)

