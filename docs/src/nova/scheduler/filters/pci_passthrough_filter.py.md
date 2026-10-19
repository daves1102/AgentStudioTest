# src/nova/scheduler/filters/pci_passthrough_filter.py

## Overview

This file implements the `pci_passthrough_filter` module, defining 1 class, 2 constants, 1 method, 2 imports, 2 side effects.

Lines: total 74, code 42, comment 14, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/scheduler/filters/pci_passthrough_filter.py:L20–L20` |
| `PciPassthroughFilter` | class | — | exported | not declared | — | `src/nova/scheduler/filters/pci_passthrough_filter.py:L23–L74` |
| `PciPassthroughFilter.RUN_ON_REBUILD` | constant | — | public | not declared | — | `src/nova/scheduler/filters/pci_passthrough_filter.py:L46–L46` |
| `PciPassthroughFilter.host_passes` | method | (self, host_state, spec_obj) | public | `True` (src/nova/scheduler/filters/pci_passthrough_filter.py:L52); `False` (src/nova/scheduler/filters/pci_passthrough_filter.py:L59); `False` (src/nova/scheduler/filters/pci_passthrough_filter.py:L72); `True` (src/nova/scheduler/filters/pci_passthrough_filter.py:L74) | 5/22 | `src/nova/scheduler/filters/pci_passthrough_filter.py:L48–L74` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/scheduler/filters/pci_passthrough_filter.py:L16)
- `nova.scheduler`: imports `filters` (src/nova/scheduler/filters/pci_passthrough_filter.py:L18)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/scheduler/filters/pci_passthrough_filter.py:L20)
- **global-mutation**: RUN_ON_REBUILD = False (src/nova/scheduler/filters/pci_passthrough_filter.py:L46)

