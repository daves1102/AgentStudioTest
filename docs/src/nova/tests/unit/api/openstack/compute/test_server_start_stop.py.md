# src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py

## Overview

This file implements the `test_server_start_stop` module, defining 1 class, 12 methods, 10 imports, 1 side effect.

Lines: total 119, code 89, comment 13, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServerStartStopTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py:L29–L119` |
| `ServerStartStopTestV21.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py:L31–L38` |
| `ServerStartStopTestV21._setup_controller` | method | (self) | private | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py:L40–L41` |
| `ServerStartStopTestV21.test_start` | method | (self, start_mock) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py:L44–L47` |
| `ServerStartStopTestV21.test_start_not_ready` | method | (self, start_mock) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py:L52–L55` |
| `ServerStartStopTestV21.test_start_locked_server` | method | (self, start_mock) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py:L60–L63` |
| `ServerStartStopTestV21.test_start_invalid_state` | method | (self, start_mock) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py:L68–L72` |
| `ServerStartStopTestV21.test_stop` | method | (self, stop_mock) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py:L75–L78` |
| `ServerStartStopTestV21.test_stop_not_ready` | method | (self, stop_mock) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py:L83–L86` |
| `ServerStartStopTestV21.test_stop_locked_server` | method | (self, stop_mock) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py:L91–L95` |
| `ServerStartStopTestV21.test_stop_invalid_state` | method | (self, stop_mock) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py:L100–L103` |
| `ServerStartStopTestV21.test_start_with_bogus_id` | method | (self, get_mock) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py:L108–L111` |
| `ServerStartStopTestV21.test_stop_with_bogus_id` | method | (self, get_mock) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py:L116–L119` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py:L17)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py:L18)
- `nova.api.openstack.compute`: imports `servers` (src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py:L20)
- `nova.compute`: imports `api as compute_api` (src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py:L21)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py:L23)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py:L24)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py:L25)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py:L26)

## Side Effects

- **network**: from nova.api.openstack.compute import servers (src/nova/tests/unit/api/openstack/compute/test_server_start_stop.py:L20)

