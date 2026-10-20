# src/nova/api/validation/extra_specs/hw.py

## Overview

This file implements the `hw` module, defining 1 function, 8 variables, 2 imports.

Lines: total 655, code 626, comment 16, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `realtime_validators` | variable | — | exported | not declared | — | `src/nova/api/validation/extra_specs/hw.py:L21–L46` |
| `hide_hypervisor_id_validator` | variable | — | exported | not declared | — | `src/nova/api/validation/extra_specs/hw.py:L48–L61` |
| `cpu_policy_validators` | variable | — | exported | not declared | — | `src/nova/api/validation/extra_specs/hw.py:L63–L149` |
| `hugepage_validators` | variable | — | exported | not declared | — | `src/nova/api/validation/extra_specs/hw.py:L151–L178` |
| `numa_validators` | variable | — | exported | not declared | — | `src/nova/api/validation/extra_specs/hw.py:L180–L275` |
| `cpu_topology_validators` | variable | — | exported | not declared | — | `src/nova/api/validation/extra_specs/hw.py:L277–L368` |
| `feature_flag_validators` | variable | — | exported | not declared | — | `src/nova/api/validation/extra_specs/hw.py:L370–L617` |
| `ephemeral_encryption_validators` | variable | — | exported | not declared | — | `src/nova/api/validation/extra_specs/hw.py:L619–L642` |
| `register` | function | — | exported | `( realtime_validators + hide_hypervisor_id_validator + cpu_policy_validators + hugepage_validators + numa_validators + cpu_topology_validators + feature_flag_validators + ephemeral_encryption_validato` (src/nova/api/validation/extra_specs/hw.py:L646) | 1/11 | `src/nova/api/validation/extra_specs/hw.py:L645–L655` |

## Dependencies

- `nova.api.validation.extra_specs`: imports `base` (src/nova/api/validation/extra_specs/hw.py:L17)
- `nova.objects`: imports `fields` (src/nova/api/validation/extra_specs/hw.py:L18)

