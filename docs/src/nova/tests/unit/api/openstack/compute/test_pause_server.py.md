# src/nova/tests/unit/api/openstack/compute/test_pause_server.py

## Overview

This file implements the `test_pause_server` module, defining 1 class, 7 methods, 2 imports, 2 side effects.

Lines: total 59, code 35, comment 14, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `PauseServerTests` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_pause_server.py:L20–L59` |
| `PauseServerTests.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_pause_server.py:L22–L25` |
| `PauseServerTests.test_pause_unpause` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_pause_server.py:L27–L31` |
| `PauseServerTests.test_actions_raise_on_not_implemented` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_pause_server.py:L33–L35` |
| `PauseServerTests.test_pause_unpause_with_non_existed_instance` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_pause_server.py:L37–L41` |
| `PauseServerTests.test_pause_unpause_with_non_existed_instance_in_compute_api` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_pause_server.py:L43–L47` |
| `PauseServerTests.test_pause_unpause_raise_conflict_on_invalid_state` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_pause_server.py:L49–L53` |
| `PauseServerTests.test_actions_with_locked_instance` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_pause_server.py:L55–L59` |

## Dependencies

- `nova.api.openstack.compute`: imports `pause_server` (src/nova/tests/unit/api/openstack/compute/test_pause_server.py:L16)
- `nova.tests.unit.api.openstack.compute`: imports `admin_only_action_common` (src/nova/tests/unit/api/openstack/compute/test_pause_server.py:L17)

## Side Effects

- **network**: from nova.api.openstack.compute import pause_server (src/nova/tests/unit/api/openstack/compute/test_pause_server.py:L16)
- **network**: from nova.tests.unit.api.openstack.compute import admin_only_action_common (src/nova/tests/unit/api/openstack/compute/test_pause_server.py:L17)

