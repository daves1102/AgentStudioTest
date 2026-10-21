# src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py

## Overview

This file implements the `test_remote_consoles` module, defining 4 classs, 2 fields, 1 function, 48 methods, 11 imports, 1 side effect.

Lines: total 505, code 421, comment 14, blank 70

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ConsolesExtensionTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L32–L313` |
| `ConsolesExtensionTestV21.controller_class` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L33–L33` |
| `ConsolesExtensionTestV21.validation_error` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L34–L34` |
| `ConsolesExtensionTestV21.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L36–L41` |
| `ConsolesExtensionTestV21._check_console_failure` | method | (self, func, expected_exception, body, mocked_method=None, raised_exception=None) | private | not declared | 2/12 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L43–L60` |
| `ConsolesExtensionTestV21._check_console_failure._do_test` | function | (mock_method) | private | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L50–L54` |
| `ConsolesExtensionTestV21.test_get_vnc_console` | method | (self, mock_get_vnc_console) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L64–L72` |
| `ConsolesExtensionTestV21.test_get_vnc_console_not_ready` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L74–L81` |
| `ConsolesExtensionTestV21.test_get_vnc_console_no_type` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L83–L88` |
| `ConsolesExtensionTestV21.test_get_vnc_console_no_instance` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L90–L97` |
| `ConsolesExtensionTestV21.test_get_vnc_console_no_instance_on_console_get` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L99–L106` |
| `ConsolesExtensionTestV21.test_get_vnc_console_instance_invalid_state` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L108–L118` |
| `ConsolesExtensionTestV21.test_get_vnc_console_invalid_type` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L120–L125` |
| `ConsolesExtensionTestV21.test_get_vnc_console_type_unavailable` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L127–L132` |
| `ConsolesExtensionTestV21.test_get_vnc_console_not_implemented` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L134–L141` |
| `ConsolesExtensionTestV21.test_get_spice_console` | method | (self, mock_get_spice_console) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L145–L153` |
| `ConsolesExtensionTestV21.test_get_spice_console_not_ready` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L155–L162` |
| `ConsolesExtensionTestV21.test_get_spice_console_no_type` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L164–L169` |
| `ConsolesExtensionTestV21.test_get_spice_console_no_instance` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L171–L178` |
| `ConsolesExtensionTestV21.test_get_spice_console_no_instance_on_console_get` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L180–L187` |
| `ConsolesExtensionTestV21.test_get_spice_console_invalid_type` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L189–L194` |
| `ConsolesExtensionTestV21.test_get_spice_console_not_implemented` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L196–L203` |
| `ConsolesExtensionTestV21.test_get_spice_console_type_unavailable` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L205–L210` |
| `ConsolesExtensionTestV21.test_get_rdp_console_bad_request` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L212–L217` |
| `ConsolesExtensionTestV21.test_get_vnc_console_with_undefined_param` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L219–L224` |
| `ConsolesExtensionTestV21.test_get_spice_console_with_undefined_param` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L226–L232` |
| `ConsolesExtensionTestV21.test_get_serial_console` | method | (self, mock_get_serial_console) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L236–L244` |
| `ConsolesExtensionTestV21.test_get_serial_console_not_enable` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L246–L253` |
| `ConsolesExtensionTestV21.test_get_serial_console_invalid_type` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L255–L260` |
| `ConsolesExtensionTestV21.test_get_serial_console_no_type` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L262–L267` |
| `ConsolesExtensionTestV21.test_get_serial_console_no_instance` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L269–L276` |
| `ConsolesExtensionTestV21.test_get_serial_console_instance_not_ready` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L278–L285` |
| `ConsolesExtensionTestV21.test_get_serial_console_socket_exhausted` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L287–L294` |
| `ConsolesExtensionTestV21.test_get_serial_console_image_nport_invalid` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L296–L304` |
| `ConsolesExtensionTestV21.test_get_serial_console_image_nport_exceed` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L306–L313` |
| `ConsolesExtensionTestV26` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L316–L450` |
| `ConsolesExtensionTestV26.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L317–L326` |
| `ConsolesExtensionTestV26.test_create_vnc_console` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L328–L339` |
| `ConsolesExtensionTestV26.test_create_spice_console` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L341–L353` |
| `ConsolesExtensionTestV26.test_create_rdp_console_bad_request` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L355–L358` |
| `ConsolesExtensionTestV26.test_create_serial_console` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L360–L371` |
| `ConsolesExtensionTestV26.test_create_console_instance_not_ready` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L373–L381` |
| `ConsolesExtensionTestV26.test_create_console_unavailable` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L383–L392` |
| `ConsolesExtensionTestV26.test_create_console_not_found` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L394–L402` |
| `ConsolesExtensionTestV26.test_create_console_not_implemented` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L404–L411` |
| `ConsolesExtensionTestV26.test_create_console_nport_invalid` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L413–L421` |
| `ConsolesExtensionTestV26.test_create_console_nport_exceed` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L423–L431` |
| `ConsolesExtensionTestV26.test_create_console_socket_exhausted` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L433–L441` |
| `ConsolesExtensionTestV26.test_create_console_invalid_type` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L443–L450` |
| `ConsolesExtensionTestV28` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L453–L473` |
| `ConsolesExtensionTestV28.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L454–L460` |
| `ConsolesExtensionTestV28.test_create_mks_console` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L462–L473` |
| `ConsolesExtensionTestV299` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L476–L505` |
| `ConsolesExtensionTestV299.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L477–L483` |
| `ConsolesExtensionTestV299.test_create_spice_direct_console` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L485–L505` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L16)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L18)
- `import webob.exc` (src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L19)
- `nova.api.openstack`: imports `api_version_request` (src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L21)
- `nova.api.openstack.compute`: imports `remote_consoles as console_v21` (src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L22–L23)
- `nova.compute`: imports `api as compute_api` (src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L24)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L25)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L26)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L27)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L28)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L29)

## Side Effects

- **network**: from nova.api.openstack.compute import remote_consoles \ (src/nova/tests/unit/api/openstack/compute/test_remote_consoles.py:L22)

