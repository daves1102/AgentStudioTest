# src/nova/policies/baremetal_nodes.py

## Overview

This file implements the `baremetal_nodes` module, defining 4 constants, 1 function, 1 variable, 2 imports, 4 side effects.

Lines: total 70, code 45, comment 14, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ROOT_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/baremetal_nodes.py:L21–L21` |
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/baremetal_nodes.py:L22–L22` |
| `DEPRECATED_REASON` | constant | — | exported | not declared | — | `src/nova/policies/baremetal_nodes.py:L24–L28` |
| `DEPRECATED_BAREMETAL_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/baremetal_nodes.py:L30–L35` |
| `baremetal_nodes_policies` | variable | — | exported | not declared | — | `src/nova/policies/baremetal_nodes.py:L38–L66` |
| `list_rules` | function | — | exported | `baremetal_nodes_policies` (src/nova/policies/baremetal_nodes.py:L70) | 1/2 | `src/nova/policies/baremetal_nodes.py:L69–L70` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/baremetal_nodes.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/baremetal_nodes.py:L18)

## Side Effects

- **global-mutation**: ROOT_POLICY = 'os_compute_api:os-baremetal-nodes' (src/nova/policies/baremetal_nodes.py:L21)
- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:os-baremetal-nodes:%s' (src/nova/policies/baremetal_nodes.py:L22)
- **global-mutation**: DEPRECATED_REASON = """ (src/nova/policies/baremetal_nodes.py:L24)
- **global-mutation**: DEPRECATED_BAREMETAL_POLICY = policy.DeprecatedRule( (src/nova/policies/baremetal_nodes.py:L30)

