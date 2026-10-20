# src/nova/policies/flavor_extra_specs.py

## Overview

This file implements the `flavor_extra_specs` module, defining 1 constant, 1 function, 1 variable, 2 imports, 1 side effect, 2 security surface entries.

Lines: total 109, code 88, comment 15, blank 6

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `POLICY_ROOT` | constant | — | exported | not declared | — | `src/nova/policies/flavor_extra_specs.py:L20–L20` |
| `flavor_extra_specs_policies` | variable | — | exported | not declared | — | `src/nova/policies/flavor_extra_specs.py:L22–L105` |
| `list_rules` | function | — | exported | `flavor_extra_specs_policies` (src/nova/policies/flavor_extra_specs.py:L109) | 1/2 | `src/nova/policies/flavor_extra_specs.py:L108–L109` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/flavor_extra_specs.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/flavor_extra_specs.py:L18)

## Side Effects

- **global-mutation**: POLICY_ROOT = 'os_compute_api:os-flavor-extra-specs:%s' (src/nova/policies/flavor_extra_specs.py:L20)

## Security Surface

- **sink** (`db-write`): name=POLICY_ROOT % 'update', (src/nova/policies/flavor_extra_specs.py:L49)
- **sink** (`db-write`): description="Update an extra spec for a flavor", (src/nova/policies/flavor_extra_specs.py:L51)

