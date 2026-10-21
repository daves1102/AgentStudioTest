# src/nova/tests/unit/api/openstack/test_mapper.py

## Overview

This file implements the `test_mapper` module, defining 3 classs, 4 methods, 4 imports, 2 security surface entries.

Lines: total 46, code 25, comment 14, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `MapperTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_mapper.py:L23–L46` |
| `MapperTest.test_resource_project_prefix` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/test_mapper.py:L24–L34` |
| `MapperTest.test_resource_project_prefix.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_mapper.py:L25–L27` |
| `MapperTest.test_resource_project_prefix.Controller.index` | method | (self, req) | public | `'foo'` (src/nova/tests/unit/api/openstack/test_mapper.py:L27) | — | `src/nova/tests/unit/api/openstack/test_mapper.py:L26–L27` |
| `MapperTest.test_resource_no_project_prefix` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/test_mapper.py:L36–L46` |
| `MapperTest.test_resource_no_project_prefix.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_mapper.py:L37–L39` |
| `MapperTest.test_resource_no_project_prefix.Controller.index` | method | (self, req) | public | `'foo'` (src/nova/tests/unit/api/openstack/test_mapper.py:L39) | — | `src/nova/tests/unit/api/openstack/test_mapper.py:L38–L39` |

## Dependencies

- `import webob` (src/nova/tests/unit/api/openstack/test_mapper.py:L16)
- `nova.api`: imports `openstack as openstack_api` (src/nova/tests/unit/api/openstack/test_mapper.py:L18)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/test_mapper.py:L19)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/test_mapper.py:L20)

## Security Surface

- **entry-point** (`http-param`): req = webob.Request.blank('/1234/tests') (src/nova/tests/unit/api/openstack/test_mapper.py:L31)
- **entry-point** (`http-param`): req = webob.Request.blank('/tests') (src/nova/tests/unit/api/openstack/test_mapper.py:L43)

