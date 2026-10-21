# src/nova/tests/unit/api/openstack/test_api_version_request.py

## Overview

This file implements the `test_api_version_request` module, defining 1 class, 1 field, 1 function, 7 methods, 4 imports.

Lines: total 135, code 95, comment 13, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `APIVersionRequestTests` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_api_version_request.py:L21–L135` |
| `APIVersionRequestTests.base_path` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_api_version_request.py:L22–L22` |
| `APIVersionRequestTests.test_valid_version_strings` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/test_api_version_request.py:L24–L35` |
| `APIVersionRequestTests.test_valid_version_strings._test_string` | function | (version, exp_major, exp_minor) | private | not declared | — | `src/nova/tests/unit/api/openstack/test_api_version_request.py:L25–L28` |
| `APIVersionRequestTests.test_null_version` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/test_api_version_request.py:L37–L39` |
| `APIVersionRequestTests.test_invalid_version_strings` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/api/openstack/test_api_version_request.py:L41–L76` |
| `APIVersionRequestTests.test_version_comparisons` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/api/openstack/test_api_version_request.py:L78–L97` |
| `APIVersionRequestTests.test_version_matches` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/api/openstack/test_api_version_request.py:L99–L120` |
| `APIVersionRequestTests.test_get_string` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/test_api_version_request.py:L122–L128` |
| `APIVersionRequestTests.test_is_supported` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_api_version_request.py:L130–L135` |

## Dependencies

- `nova.api.openstack`: imports `api_version_request` (src/nova/tests/unit/api/openstack/test_api_version_request.py:L15)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/test_api_version_request.py:L16)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/test_api_version_request.py:L17)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/test_api_version_request.py:L18)

