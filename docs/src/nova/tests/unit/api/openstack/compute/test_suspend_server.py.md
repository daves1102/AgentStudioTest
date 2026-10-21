# src/nova/tests/unit/api/openstack/compute/test_suspend_server.py

## Overview

This file implements the `test_suspend_server` module, defining 1 class, 6 methods, 7 imports, 2 side effects.

Lines: total 81, code 57, comment 13, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SuspendServerTests` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_suspend_server.py:L27–L81` |
| `SuspendServerTests.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_suspend_server.py:L29–L32` |
| `SuspendServerTests.test_suspend_resume` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_suspend_server.py:L34–L40` |
| `SuspendServerTests.test_suspend_raise_badrequest_for_not_supported_features` | method | (self, exc, mock_suspend) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_suspend_server.py:L50–L57` |
| `SuspendServerTests.test_suspend_resume_with_non_existed_instance` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_suspend_server.py:L59–L65` |
| `SuspendServerTests.test_suspend_resume_raise_conflict_on_invalid_state` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_suspend_server.py:L67–L73` |
| `SuspendServerTests.test_actions_with_locked_instance` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_suspend_server.py:L75–L81` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_suspend_server.py:L15)
- `import ddt` (src/nova/tests/unit/api/openstack/compute/test_suspend_server.py:L17)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_suspend_server.py:L18)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_suspend_server.py:L19)
- `nova.api.openstack.compute`: imports `suspend_server` (src/nova/tests/unit/api/openstack/compute/test_suspend_server.py:L21)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_suspend_server.py:L22)
- `nova.tests.unit.api.openstack.compute`: imports `admin_only_action_common` (src/nova/tests/unit/api/openstack/compute/test_suspend_server.py:L23)

## Side Effects

- **network**: from nova.api.openstack.compute import suspend_server (src/nova/tests/unit/api/openstack/compute/test_suspend_server.py:L21)
- **network**: from nova.tests.unit.api.openstack.compute import admin_only_action_common (src/nova/tests/unit/api/openstack/compute/test_suspend_server.py:L23)

