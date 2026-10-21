# src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py

## Overview

This file implements the `test_server_reset_state` module, defining 1 class, 2 fields, 9 methods, 10 imports, 1 side effect.

Lines: total 156, code 116, comment 17, blank 23

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ResetStateTestsV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L30–L156` |
| `ResetStateTestsV21.admin_act` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L31–L31` |
| `ResetStateTestsV21.bad_request` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L32–L32` |
| `ResetStateTestsV21.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L34–L42` |
| `ResetStateTestsV21._create_instance` | method | (self) | private | `instance` (src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L51) | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L44–L51` |
| `ResetStateTestsV21._check_instance_state` | method | (self, expected) | private | not declared | 2/7 | `src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L53–L59` |
| `ResetStateTestsV21._get_request` | method | (self) | private | `fakes.HTTPRequest.blank('')` (src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L62) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L61–L62` |
| `ResetStateTestsV21.test_no_state` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L67–L71` |
| `ResetStateTestsV21.test_bad_state` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L76–L80` |
| `ResetStateTestsV21.test_no_instance` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L85–L96` |
| `ResetStateTestsV21.test_reset_active` | method | (self, mock_instance_action_start) | public | not declared | 2/23 | `src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L99–L126` |
| `ResetStateTestsV21.test_reset_error` | method | (self, mock_instance_action_start) | public | not declared | 2/23 | `src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L129–L156` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L15)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L17)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L18)
- `nova.api.openstack.compute`: imports `admin_actions as admin_actions_v21` (src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L20–L21)
- `nova.compute`: imports `instance_actions` (src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L22)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L23)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L24)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L25)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L26)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L27)

## Side Effects

- **network**: from nova.api.openstack.compute import admin_actions \ (src/nova/tests/unit/api/openstack/compute/test_server_reset_state.py:L20)

