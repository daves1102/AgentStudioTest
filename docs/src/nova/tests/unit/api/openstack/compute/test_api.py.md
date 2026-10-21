# src/nova/tests/unit/api/openstack/compute/test_api.py

## Overview

This file implements the `test_api` module, defining 5 classs, 6 functions, 16 methods, 1 property, 9 imports, 1 side effect.

Lines: total 172, code 113, comment 23, blank 36

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `APITest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_api.py:L28–L172` |
| `APITest.wsgi_app` | method | (self) | public | `fakes.wsgi_app_v21()` (src/nova/tests/unit/api/openstack/compute/test_api.py:L32) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_api.py:L31–L32` |
| `APITest._wsgi_app` | method | (self, inner_app) | private | `openstack_api.FaultWrapper(inner_app)` (src/nova/tests/unit/api/openstack/compute/test_api.py:L35) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_api.py:L34–L35` |
| `APITest.test_malformed_json` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_api.py:L37–L44` |
| `APITest.test_malformed_xml` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_api.py:L46–L53` |
| `APITest.test_vendor_content_type_json` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_api.py:L55–L72` |
| `APITest.test_exceptions_are_converted_to_faults_webob_exc` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_api.py:L74–L82` |
| `APITest.test_exceptions_are_converted_to_faults_webob_exc.raise_webob_exc` | function | (req) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_api.py:L76–L77` |
| `APITest.test_exceptions_are_converted_to_faults_api_fault` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_api.py:L84–L94` |
| `APITest.test_exceptions_are_converted_to_faults_api_fault.raise_api_fault` | function | (req) | public | `wsgi.Fault(exc)` (src/nova/tests/unit/api/openstack/compute/test_api.py:L88) | — | `src/nova/tests/unit/api/openstack/compute/test_api.py:L86–L88` |
| `APITest.test_exceptions_are_converted_to_faults_exception` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_api.py:L96–L105` |
| `APITest.test_exceptions_are_converted_to_faults_exception.fail` | function | (req) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_api.py:L98–L99` |
| `APITest._do_test_exception_safety_reflected_in_faults` | method | (self, expose) | private | not declared | 2/13 | `src/nova/tests/unit/api/openstack/compute/test_api.py:L107–L122` |
| `APITest._do_test_exception_safety_reflected_in_faults.ExceptionWithSafety` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_api.py:L108–L109` |
| `APITest._do_test_exception_safety_reflected_in_faults.fail` | function | (req) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_api.py:L112–L113` |
| `APITest.test_safe_exceptions_are_described_in_faults` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_api.py:L124–L125` |
| `APITest.test_unsafe_exceptions_are_not_described_in_faults` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_api.py:L127–L128` |
| `APITest._do_test_exception_mapping` | method | (self, exception_type, msg) | private | not declared | 3/11 | `src/nova/tests/unit/api/openstack/compute/test_api.py:L130–L143` |
| `APITest._do_test_exception_mapping.fail` | function | (req) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_api.py:L132–L133` |
| `APITest.test_quota_error_mapping` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_api.py:L145–L146` |
| `APITest.test_non_nova_notfound_exception_mapping` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_api.py:L148–L153` |
| `APITest.test_non_nova_notfound_exception_mapping.ExceptionWithCode` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_api.py:L149–L150` |
| `APITest.test_non_nova_exception_mapping` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_api.py:L155–L160` |
| `APITest.test_non_nova_exception_mapping.ExceptionWithCode` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_api.py:L156–L157` |
| `APITest.test_exception_with_none_code_throws_500` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_api.py:L162–L172` |
| `APITest.test_exception_with_none_code_throws_500.ExceptionWithNoneCode` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_api.py:L163–L164` |
| `APITest.test_exception_with_none_code_throws_500.fail` | function | (req) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_api.py:L167–L168` |
| `APITest.wsgi_app` | property | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_api.py:L30–L32` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/compute/test_api.py:L16)
- `oslo_utils`: imports `encodeutils` (src/nova/tests/unit/api/openstack/compute/test_api.py:L17)
- `import webob.dec` (src/nova/tests/unit/api/openstack/compute/test_api.py:L18)
- `import webob.exc` (src/nova/tests/unit/api/openstack/compute/test_api.py:L19)
- `nova.api`: imports `openstack as openstack_api` (src/nova/tests/unit/api/openstack/compute/test_api.py:L21)
- `nova.api.openstack`: imports `wsgi` (src/nova/tests/unit/api/openstack/compute/test_api.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_api.py:L23)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_api.py:L24)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_api.py:L25)

## Side Effects

- **network**: ctype = 'application/vnd.openstack.compute+json' (src/nova/tests/unit/api/openstack/compute/test_api.py:L56)

