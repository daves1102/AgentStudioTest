# src/nova/tests/functional/test_server_external_events.py

## Overview

This file implements the `test_server_external_events` module, defining 1 class, 2 fields, 2 methods, 4 imports, 2 security surface entries.

Lines: total 95, code 70, comment 18, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServerExternalEventsTestV276` | class | — | exported | not declared | — | `src/nova/tests/functional/test_server_external_events.py:L19–L95` |
| `ServerExternalEventsTestV276.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_external_events.py:L21–L21` |
| `ServerExternalEventsTestV276.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_external_events.py:L22–L22` |
| `ServerExternalEventsTestV276.setUp` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/test_server_external_events.py:L24–L38` |
| `ServerExternalEventsTestV276.test_server_power_update` | method | (self) | public | not declared | 5/48 | `src/nova/tests/functional/test_server_external_events.py:L40–L95` |

## Dependencies

- `nova.compute`: imports `instance_actions` (src/nova/tests/functional/test_server_external_events.py:L13)
- `nova.compute`: imports `power_state` (src/nova/tests/functional/test_server_external_events.py:L14)
- `nova.compute`: imports `vm_states` (src/nova/tests/functional/test_server_external_events.py:L15)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_server_external_events.py:L16)

## Security Surface

- **sink** (`db-write`): self.power_off = {'name': 'power-update', (src/nova/tests/functional/test_server_external_events.py:L33)
- **sink** (`db-write`): self.power_on = {'name': 'power-update', (src/nova/tests/functional/test_server_external_events.py:L36)

