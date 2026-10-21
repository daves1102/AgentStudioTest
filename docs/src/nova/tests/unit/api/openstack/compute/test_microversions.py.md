# src/nova/tests/unit/api/openstack/compute/test_microversions.py

## Overview

This file implements the `test_microversions` module, defining 2 classs, 2 fields, 23 methods, 6 imports, 12 side effects.

Lines: total 268, code 206, comment 13, blank 49

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LegacyMicroversionsTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L25–L263` |
| `LegacyMicroversionsTest.header_name` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L27–L27` |
| `LegacyMicroversionsTest.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L29–L31` |
| `LegacyMicroversionsTest._test_microversions` | method | (self, app, req, ret_code, ret_header=None) | private | `res` (src/nova/tests/unit/api/openstack/compute/test_microversions.py:L43) | 3/10 | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L33–L43` |
| `LegacyMicroversionsTest._make_header` | method | (self, req_header) | private | `headers` (src/nova/tests/unit/api/openstack/compute/test_microversions.py:L50) | 2/6 | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L45–L50` |
| `LegacyMicroversionsTest.test_microversions_no_header` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L52–L57` |
| `LegacyMicroversionsTest.test_microversions_return_header` | method | (self) | public | not declared | 2/11 | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L59–L69` |
| `LegacyMicroversionsTest.test_microversions_return_header_non_default` | method | (self, mock_maxver) | public | not declared | 2/13 | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L72–L85` |
| `LegacyMicroversionsTest.test_microversions_return_header_fault` | method | (self, mock_maxver) | public | not declared | 2/11 | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L88–L99` |
| `LegacyMicroversionsTest._check_microversion_response` | method | (self, url, req_version, resp_param, mock_maxver) | private | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L102–L111` |
| `LegacyMicroversionsTest.test_microversions_with_header` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L113–L114` |
| `LegacyMicroversionsTest.test_microversions_with_header_exact_match` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L116–L117` |
| `LegacyMicroversionsTest.test_microversions2_no_2_1_version` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L119–L121` |
| `LegacyMicroversionsTest.test_microversions2_later_version` | method | (self, mock_maxver) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L124–L132` |
| `LegacyMicroversionsTest.test_microversions2_version_too_high` | method | (self, mock_maxver) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L135–L141` |
| `LegacyMicroversionsTest.test_microversions2_version_too_low` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L143–L147` |
| `LegacyMicroversionsTest.test_microversions_global_version_too_high` | method | (self, mock_maxver) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L150–L161` |
| `LegacyMicroversionsTest.test_microversions_schema` | method | (self, mock_maxver) | public | not declared | 2/16 | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L164–L181` |
| `LegacyMicroversionsTest.test_microversions_schema_fail` | method | (self, mock_maxver) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L184–L197` |
| `LegacyMicroversionsTest.test_microversions_schema_out_of_version_check` | method | (self, mock_maxver) | public | not declared | 2/16 | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L200–L217` |
| `LegacyMicroversionsTest.test_microversions_schema_second_version` | method | (self, mock_maxver) | public | not declared | 2/16 | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L220–L237` |
| `LegacyMicroversionsTest._test_microversions_actions` | method | (self, ret_code, ret_header, req_header, mock_maxver) | private | not declared | 3/13 | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L240–L254` |
| `LegacyMicroversionsTest.test_microversions_actions` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L256–L257` |
| `LegacyMicroversionsTest.test_microversions_actions_too_high` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L259–L260` |
| `LegacyMicroversionsTest.test_microversions_actions_no_header` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L262–L263` |
| `MicroversionsTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L266–L268` |
| `MicroversionsTest.header_name` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_microversions.py:L268–L268` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_microversions.py:L15)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/compute/test_microversions.py:L17)
- `nova.api.openstack`: imports `api_version_request as api_version` (src/nova/tests/unit/api/openstack/compute/test_microversions.py:L19)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_microversions.py:L20)
- `nova.tests.unit.api.openstack.compute`: imports `microversions` (src/nova/tests/unit/api/openstack/compute/test_microversions.py:L21)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_microversions.py:L22)

## Side Effects

- **network**: from nova.tests.unit.api.openstack.compute import microversions (src/nova/tests/unit/api/openstack/compute/test_microversions.py:L21)
- **network**: @mock.patch("nova.api.openstack.api_version_request.max_api_version") (src/nova/tests/unit/api/openstack/compute/test_microversions.py:L71)
- **network**: @mock.patch("nova.api.openstack.api_version_request.max_api_version") (src/nova/tests/unit/api/openstack/compute/test_microversions.py:L87)
- **network**: @mock.patch("nova.api.openstack.api_version_request.max_api_version") (src/nova/tests/unit/api/openstack/compute/test_microversions.py:L101)
- **network**: @mock.patch("nova.api.openstack.api_version_request.max_api_version") (src/nova/tests/unit/api/openstack/compute/test_microversions.py:L123)
- **network**: @mock.patch("nova.api.openstack.api_version_request.max_api_version") (src/nova/tests/unit/api/openstack/compute/test_microversions.py:L134)
- **network**: @mock.patch("nova.api.openstack.api_version_request.max_api_version") (src/nova/tests/unit/api/openstack/compute/test_microversions.py:L149)
- **network**: @mock.patch("nova.api.openstack.api_version_request.max_api_version") (src/nova/tests/unit/api/openstack/compute/test_microversions.py:L163)
- **network**: @mock.patch("nova.api.openstack.api_version_request.max_api_version") (src/nova/tests/unit/api/openstack/compute/test_microversions.py:L183)
- **network**: @mock.patch("nova.api.openstack.api_version_request.max_api_version") (src/nova/tests/unit/api/openstack/compute/test_microversions.py:L199)
- **network**: @mock.patch("nova.api.openstack.api_version_request.max_api_version") (src/nova/tests/unit/api/openstack/compute/test_microversions.py:L219)
- **network**: @mock.patch("nova.api.openstack.api_version_request.max_api_version") (src/nova/tests/unit/api/openstack/compute/test_microversions.py:L239)

