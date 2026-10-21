# src/nova/tests/unit/api/openstack/test_faults.py

## Overview

This file implements the `test_faults` module, defining 2 classs, 2 functions, 6 methods, 9 imports, 2 side effects, 7 security surface entries.

Lines: total 152, code 95, comment 29, blank 28

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestFaultWrapper` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_faults.py:L30–L60` |
| `TestFaultWrapper.test_safe_exception_translated` | method | (self, mock_languages, mock_translate) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/test_faults.py:L35–L60` |
| `TestFaultWrapper.test_safe_exception_translated.fake_translate` | function | (value, locale) | public | `"I've been translated!"` (src/nova/tests/unit/api/openstack/test_faults.py:L37) | — | `src/nova/tests/unit/api/openstack/test_faults.py:L36–L37` |
| `TestFaultWrapper.test_safe_exception_translated.raiser` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/api/openstack/test_faults.py:L49–L50` |
| `TestFaults` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_faults.py:L63–L152` |
| `TestFaults._prepare_xml` | method | (self, xml_string) | private | `xml_string` (src/nova/tests/unit/api/openstack/test_faults.py:L71) | 1/5 | `src/nova/tests/unit/api/openstack/test_faults.py:L66–L71` |
| `TestFaults.test_400_fault_json` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/api/openstack/test_faults.py:L73–L93` |
| `TestFaults.test_413_fault_json` | method | (self) | public | not declared | 2/20 | `src/nova/tests/unit/api/openstack/test_faults.py:L95–L120` |
| `TestFaults.test_429_fault_json` | method | (self) | public | not declared | 2/20 | `src/nova/tests/unit/api/openstack/test_faults.py:L122–L147` |
| `TestFaults.test_fault_has_status_int` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/test_faults.py:L149–L152` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/test_faults.py:L17)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/test_faults.py:L19)
- `import webob` (src/nova/tests/unit/api/openstack/test_faults.py:L20)
- `import webob.dec` (src/nova/tests/unit/api/openstack/test_faults.py:L21)
- `import webob.exc` (src/nova/tests/unit/api/openstack/test_faults.py:L22)
- `import nova.api.openstack` (src/nova/tests/unit/api/openstack/test_faults.py:L24)
- `nova.api.openstack`: imports `wsgi` (src/nova/tests/unit/api/openstack/test_faults.py:L25)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/test_faults.py:L26)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/test_faults.py:L27)

## Side Effects

- **network**: wrapper = nova.api.openstack.FaultWrapper(raiser) (src/nova/tests/unit/api/openstack/test_faults.py:L52)
- **network**: """Tests covering `nova.api.openstack.faults:Fault` class.""" (src/nova/tests/unit/api/openstack/test_faults.py:L64)

## Security Surface

- **entry-point** (`http-param`): req = webob.Request.blank('/') (src/nova/tests/unit/api/openstack/test_faults.py:L47)
- **entry-point** (`http-param`): webob.Request.blank('/.json'), (src/nova/tests/unit/api/openstack/test_faults.py:L76)
- **entry-point** (`http-param`): webob.Request.blank('/', headers={"Accept": "application/json"}), (src/nova/tests/unit/api/openstack/test_faults.py:L77)
- **entry-point** (`http-param`): webob.Request.blank('/.json'), (src/nova/tests/unit/api/openstack/test_faults.py:L98)
- **entry-point** (`http-param`): webob.Request.blank('/', headers={"Accept": "application/json"}), (src/nova/tests/unit/api/openstack/test_faults.py:L99)
- **entry-point** (`http-param`): webob.Request.blank('/.json'), (src/nova/tests/unit/api/openstack/test_faults.py:L125)
- **entry-point** (`http-param`): webob.Request.blank('/', headers={"Accept": "application/json"}), (src/nova/tests/unit/api/openstack/test_faults.py:L126)

