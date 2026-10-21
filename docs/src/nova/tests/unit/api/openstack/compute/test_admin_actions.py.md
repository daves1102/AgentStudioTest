# src/nova/tests/unit/api/openstack/compute/test_admin_actions.py

## Overview

This file implements the `test_admin_actions` module, defining 1 class, 4 methods, 2 imports, 2 side effects.

Lines: total 46, code 24, comment 13, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `AdminActionsTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_admin_actions.py:L19–L46` |
| `AdminActionsTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_admin_actions.py:L21–L24` |
| `AdminActionsTest.test_actions` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_admin_actions.py:L26–L32` |
| `AdminActionsTest.test_actions_with_non_existed_instance` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_admin_actions.py:L34–L38` |
| `AdminActionsTest.test_actions_with_locked_instance` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_admin_actions.py:L40–L46` |

## Dependencies

- `nova.api.openstack.compute`: imports `admin_actions` (src/nova/tests/unit/api/openstack/compute/test_admin_actions.py:L15)
- `nova.tests.unit.api.openstack.compute`: imports `admin_only_action_common` (src/nova/tests/unit/api/openstack/compute/test_admin_actions.py:L16)

## Side Effects

- **network**: from nova.api.openstack.compute import admin_actions (src/nova/tests/unit/api/openstack/compute/test_admin_actions.py:L15)
- **network**: from nova.tests.unit.api.openstack.compute import admin_only_action_common (src/nova/tests/unit/api/openstack/compute/test_admin_actions.py:L16)

