# src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py

## Overview

This file implements the `test_server_diagnostics` module, defining 2 classs, 1 constant, 4 fields, 1 function, 10 methods, 9 imports, 1 side effect.

Lines: total 176, code 136, comment 17, blank 23

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L29–L29` |
| `fake_instance_get` | function | (self, _context, instance_uuid, expected_attrs=None, cell_down_support=False) | exported | `objects.Instance(uuid=instance_uuid, project_id=_context.project_id, host='123')` (src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L36) | 2/7 | `src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L32–L38` |
| `ServerDiagnosticsTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L41–L101` |
| `ServerDiagnosticsTestV21.mock_diagnostics_method` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L42–L42` |
| `ServerDiagnosticsTestV21.api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L43–L43` |
| `ServerDiagnosticsTestV21._setup_router` | method | (self) | private | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L45–L46` |
| `ServerDiagnosticsTestV21._get_request` | method | (self) | private | `fakes.HTTPRequest.blank( '/v2.1/servers/%s/diagnostics' % UUID, version=self.api_version, headers = {os_wsgi.API_VERSION_REQUEST_HEADER: 'compute %s' % self.api_version})` (src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L49) | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L48–L53` |
| `ServerDiagnosticsTestV21.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L55–L57` |
| `ServerDiagnosticsTestV21._test_get_diagnostics` | method | (self, expected, return_value) | private | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L60–L66` |
| `ServerDiagnosticsTestV21.test_get_diagnostics` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L68–L70` |
| `ServerDiagnosticsTestV21.test_get_diagnostics_with_non_existed_instance` | method | (self, mock_get) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L74–L77` |
| `ServerDiagnosticsTestV21.test_get_diagnostics_raise_conflict_on_invalid_state` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L80–L85` |
| `ServerDiagnosticsTestV21.test_get_diagnostics_raise_instance_not_ready` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L88–L93` |
| `ServerDiagnosticsTestV21.test_get_diagnostics_raise_no_notimplementederror` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L96–L101` |
| `ServerDiagnosticsTestV248` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L104–L176` |
| `ServerDiagnosticsTestV248.mock_diagnostics_method` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L105–L105` |
| `ServerDiagnosticsTestV248.api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L106–L106` |
| `ServerDiagnosticsTestV248.test_get_diagnostics` | method | (self) | public | not declared | 1/64 | `src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L108–L176` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L16)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L18)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L19)
- `nova.api.openstack`: imports `wsgi as os_wsgi` (src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L21)
- `nova.compute`: imports `api as compute_api` (src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L23)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L24)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L25)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L26)

## Side Effects

- **global-mutation**: UUID = uuids.abc (src/nova/tests/unit/api/openstack/compute/test_server_diagnostics.py:L29)

