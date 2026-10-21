# src/nova/tests/unit/policies/test_server_external_events.py

## Overview

This file implements the `test_server_external_events` module, defining 2 classs, 1 field, 2 methods, 6 imports, 1 side effect.

Lines: total 65, code 40, comment 13, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServerExternalEventsPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_server_external_events.py:L23–L56` |
| `ServerExternalEventsPolicyTest.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_server_external_events.py:L32–L42` |
| `ServerExternalEventsPolicyTest.test_server_external_events_policy` | method | (self, mock_event, mock_get, mock_filter) | public | not declared | 1/10 | `src/nova/tests/unit/policies/test_server_external_events.py:L47–L56` |
| `ServerExternalEventsNoLegacyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_server_external_events.py:L59–L65` |
| `ServerExternalEventsNoLegacyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_server_external_events.py:L65–L65` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_server_external_events.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_server_external_events.py:L15)
- `nova.api.openstack.compute`: imports `server_external_events as ev` (src/nova/tests/unit/policies/test_server_external_events.py:L17)
- `nova.policies`: imports `server_external_events as policies` (src/nova/tests/unit/policies/test_server_external_events.py:L18)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_server_external_events.py:L19)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_server_external_events.py:L20)

## Side Effects

- **network**: from nova.api.openstack.compute import server_external_events as ev (src/nova/tests/unit/policies/test_server_external_events.py:L17)

