# src/nova/virt/virtapi.py

## Overview

This file implements the `virtapi` module, defining 1 class, 3 methods, 1 import.

Lines: total 36, code 17, comment 13, blank 6

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `VirtAPI` | class | — | exported | not declared | — | `src/nova/virt/virtapi.py:L18–L36` |
| `VirtAPI.wait_for_instance_event` | method | (self, instance, event_names, timeout=300, error_callback=None) | public | not declared | 1/3 | `src/nova/virt/virtapi.py:L20–L22` |
| `VirtAPI.exit_wait_early` | method | (self, events) | public | not declared | 1/2 | `src/nova/virt/virtapi.py:L24–L25` |
| `VirtAPI.update_compute_provider_status` | method | (self, context, rp_uuid, enabled) | public | not declared | 1/2 | `src/nova/virt/virtapi.py:L27–L36` |

## Dependencies

- `import contextlib` (src/nova/virt/virtapi.py:L15)

