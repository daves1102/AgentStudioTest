# src/nova/tests/unit/fake_server_actions.py

## Overview

This file implements the `fake_server_actions` module, defining 11 constants, 3 functions, 1 import, 11 side effects.

Lines: total 134, code 108, comment 15, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FAKE_UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_server_actions.py:L18–L18` |
| `FAKE_REQUEST_ID1` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_server_actions.py:L19–L19` |
| `FAKE_REQUEST_ID2` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_server_actions.py:L20–L20` |
| `FAKE_ACTION_ID1` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_server_actions.py:L21–L21` |
| `FAKE_ACTION_ID2` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_server_actions.py:L22–L22` |
| `FAKE_PROJECT_ID1` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_server_actions.py:L25–L25` |
| `FAKE_PROJECT_ID2` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_server_actions.py:L26–L26` |
| `FAKE_HOST_ID1` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_server_actions.py:L27–L27` |
| `FAKE_HOST_ID2` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_server_actions.py:L28–L28` |
| `FAKE_ACTIONS` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_server_actions.py:L30–L63` |
| `FAKE_EVENTS` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_server_actions.py:L65–L119` |
| `fake_action_event_start` | function | (*args) | exported | `FAKE_EVENTS[FAKE_ACTION_ID1][0]` (src/nova/tests/unit/fake_server_actions.py:L123) | 1/2 | `src/nova/tests/unit/fake_server_actions.py:L122–L123` |
| `fake_action_event_finish` | function | (*args) | exported | `FAKE_EVENTS[FAKE_ACTION_ID1][0]` (src/nova/tests/unit/fake_server_actions.py:L127) | 1/2 | `src/nova/tests/unit/fake_server_actions.py:L126–L127` |
| `stub_out_action_events` | function | (test) | exported | not declared | 1/5 | `src/nova/tests/unit/fake_server_actions.py:L130–L134` |

## Dependencies

- `import datetime` (src/nova/tests/unit/fake_server_actions.py:L15)

## Side Effects

- **global-mutation**: FAKE_UUID = 'b48316c5-71e8-45e4-9884-6c78055b9b13' (src/nova/tests/unit/fake_server_actions.py:L18)
- **global-mutation**: FAKE_REQUEST_ID1 = 'req-3293a3f1-b44c-4609-b8d2-d81b105636b8' (src/nova/tests/unit/fake_server_actions.py:L19)
- **global-mutation**: FAKE_REQUEST_ID2 = 'req-25517360-b757-47d3-be45-0e8d2a01b36a' (src/nova/tests/unit/fake_server_actions.py:L20)
- **global-mutation**: FAKE_ACTION_ID1 = 123 (src/nova/tests/unit/fake_server_actions.py:L21)
- **global-mutation**: FAKE_ACTION_ID2 = 456 (src/nova/tests/unit/fake_server_actions.py:L22)
- **global-mutation**: FAKE_PROJECT_ID1 = '9ccc9bd7-8b23-4d57-8421-291fe888bdc6' (src/nova/tests/unit/fake_server_actions.py:L25)
- **global-mutation**: FAKE_PROJECT_ID2 = '427b71e6-49d2-4c30-a8a0-d23adfe772e2' (src/nova/tests/unit/fake_server_actions.py:L26)
- **global-mutation**: FAKE_HOST_ID1 = 'b7e03ca48116ea93152de5d2eff1c69f515a5198f3cfbe59103faf17' (src/nova/tests/unit/fake_server_actions.py:L27)
- **global-mutation**: FAKE_HOST_ID2 = '7bd9ecf0b8cec52cd1410aee9b4bee5370c698bfc11f9478b35b80e2' (src/nova/tests/unit/fake_server_actions.py:L28)
- **global-mutation**: FAKE_ACTIONS = { (src/nova/tests/unit/fake_server_actions.py:L30)
- **global-mutation**: FAKE_EVENTS = { (src/nova/tests/unit/fake_server_actions.py:L65)

