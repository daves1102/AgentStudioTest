# src/nova/tests/unit/scheduler/ironic_fakes.py

## Overview

This file implements the `ironic_fakes` module, defining 2 constants, 1 function, 2 imports, 2 side effects.

Lines: total 107, code 86, comment 15, blank 6

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `COMPUTE_NODES` | constant | — | exported | not declared | — | `src/nova/tests/unit/scheduler/ironic_fakes.py:L23–L95` |
| `SERVICES` | constant | — | exported | not declared | — | `src/nova/tests/unit/scheduler/ironic_fakes.py:L97–L102` |
| `get_service_by_host` | function | (host) | exported | `services[0]` (src/nova/tests/unit/scheduler/ironic_fakes.py:L107) | 3/3 | `src/nova/tests/unit/scheduler/ironic_fakes.py:L105–L107` |

## Dependencies

- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/scheduler/ironic_fakes.py:L18)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/ironic_fakes.py:L20)

## Side Effects

- **global-mutation**: COMPUTE_NODES = [ (src/nova/tests/unit/scheduler/ironic_fakes.py:L23)
- **global-mutation**: SERVICES = [ (src/nova/tests/unit/scheduler/ironic_fakes.py:L97)

