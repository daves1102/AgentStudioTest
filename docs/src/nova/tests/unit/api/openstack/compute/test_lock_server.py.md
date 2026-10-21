# src/nova/tests/unit/api/openstack/compute/test_lock_server.py

## Overview

This file implements the `test_lock_server` module, defining 2 classs, 10 methods, 7 imports, 2 side effects.

Lines: total 120, code 80, comment 18, blank 22

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LockServerTests` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_lock_server.py:L26–L68` |
| `LockServerTests.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_lock_server.py:L28–L31` |
| `LockServerTests.test_lock_unlock` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_lock_server.py:L33–L37` |
| `LockServerTests.test_lock_unlock_with_non_existed_instance` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_lock_server.py:L39–L42` |
| `LockServerTests.test_unlock_with_any_body` | method | (self, get_instance_mock) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_lock_server.py:L45–L55` |
| `LockServerTests.test_lock_with_empty_dict_body_is_valid` | method | (self, get_instance_mock) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_lock_server.py:L58–L68` |
| `LockServerTestsV273` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_lock_server.py:L71–L120` |
| `LockServerTestsV273.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_lock_server.py:L73–L76` |
| `LockServerTestsV273.test_lock_with_reason_V273` | method | (self, get_instance_mock) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_lock_server.py:L79–L89` |
| `LockServerTestsV273.test_lock_with_reason_exceeding_255_chars` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_lock_server.py:L91–L99` |
| `LockServerTestsV273.test_lock_with_reason_in_invalid_format` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_lock_server.py:L101–L109` |
| `LockServerTestsV273.test_lock_with_invalid_parameter` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_lock_server.py:L111–L120` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_lock_server.py:L16)
- `nova.api.openstack`: imports `api_version_request` (src/nova/tests/unit/api/openstack/compute/test_lock_server.py:L18)
- `nova.api.openstack`: imports `common` (src/nova/tests/unit/api/openstack/compute/test_lock_server.py:L19)
- `nova.api.openstack.compute`: imports `lock_server` (src/nova/tests/unit/api/openstack/compute/test_lock_server.py:L20)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_lock_server.py:L21)
- `nova.tests.unit.api.openstack.compute`: imports `admin_only_action_common` (src/nova/tests/unit/api/openstack/compute/test_lock_server.py:L22)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/api/openstack/compute/test_lock_server.py:L23)

## Side Effects

- **network**: from nova.api.openstack.compute import lock_server (src/nova/tests/unit/api/openstack/compute/test_lock_server.py:L20)
- **network**: from nova.tests.unit.api.openstack.compute import admin_only_action_common (src/nova/tests/unit/api/openstack/compute/test_lock_server.py:L22)

