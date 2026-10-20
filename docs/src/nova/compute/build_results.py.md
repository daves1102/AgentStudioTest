# src/nova/compute/build_results.py

## Overview

This file implements the `build_results` module, defining 5 constants, 5 side effects.

Lines: total 34, code 10, comment 20, blank 4

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ACTIVE` | constant | — | exported | not declared | — | `src/nova/compute/build_results.py:L24–L24` |
| `FAILED` | constant | — | exported | not declared | — | `src/nova/compute/build_results.py:L25–L25` |
| `RESCHEDULED` | constant | — | exported | not declared | — | `src/nova/compute/build_results.py:L26–L26` |
| `FAILED_BY_POLICY` | constant | — | exported | not declared | — | `src/nova/compute/build_results.py:L30–L30` |
| `RESCHEDULED_BY_POLICY` | constant | — | exported | not declared | — | `src/nova/compute/build_results.py:L34–L34` |

## Dependencies

None.

## Side Effects

- **global-mutation**: ACTIVE = 'active'  # Instance is running (src/nova/compute/build_results.py:L24)
- **global-mutation**: FAILED = 'failed'  # Instance failed to build and was not rescheduled (src/nova/compute/build_results.py:L25)
- **global-mutation**: RESCHEDULED = 'rescheduled'  # Instance failed to build, but was rescheduled (src/nova/compute/build_results.py:L26)
- **global-mutation**: FAILED_BY_POLICY = 'failed_by_policy' (src/nova/compute/build_results.py:L30)
- **global-mutation**: RESCHEDULED_BY_POLICY = 'rescheduled_by_policy' (src/nova/compute/build_results.py:L34)

