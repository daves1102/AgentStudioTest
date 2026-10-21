# src/nova/tests/functional/db/test_request_spec.py

## Overview

This file implements the `test_request_spec` module, defining 1 class, 1 constant, 8 methods, 7 imports, 1 side effect.

Lines: total 80, code 55, comment 13, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `RequestSpecTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_request_spec.py:L22–L80` |
| `RequestSpecTestCase.USES_DB_SELF` | constant | — | public | not declared | — | `src/nova/tests/functional/db/test_request_spec.py:L23–L23` |
| `RequestSpecTestCase.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/db/test_request_spec.py:L25–L33` |
| `RequestSpecTestCase._create_spec` | method | (self) | private | `self.spec_obj` (src/nova/tests/functional/db/test_request_spec.py:L41) | 1/7 | `src/nova/tests/functional/db/test_request_spec.py:L35–L41` |
| `RequestSpecTestCase.test_get_by_instance_uuid_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/db/test_request_spec.py:L43–L46` |
| `RequestSpecTestCase.test_get_by_uuid` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/db/test_request_spec.py:L48–L52` |
| `RequestSpecTestCase.test_save_in_db` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/db/test_request_spec.py:L54–L63` |
| `RequestSpecTestCase.test_double_create` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/db/test_request_spec.py:L65–L67` |
| `RequestSpecTestCase.test_destroy` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/db/test_request_spec.py:L69–L75` |
| `RequestSpecTestCase.test_destroy_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/db/test_request_spec.py:L77–L80` |

## Dependencies

- `nova`: imports `context` (src/nova/tests/functional/db/test_request_spec.py:L13)
- `nova`: imports `exception` (src/nova/tests/functional/db/test_request_spec.py:L14)
- `nova.objects`: imports `base as obj_base` (src/nova/tests/functional/db/test_request_spec.py:L15)
- `nova.objects`: imports `request_spec` (src/nova/tests/functional/db/test_request_spec.py:L16)
- `nova`: imports `test` (src/nova/tests/functional/db/test_request_spec.py:L17)
- `nova.tests`: imports `fixtures` (src/nova/tests/functional/db/test_request_spec.py:L18)
- `nova.tests.unit`: imports `fake_request_spec` (src/nova/tests/functional/db/test_request_spec.py:L19)

## Side Effects

- **global-mutation**: USES_DB_SELF = True (src/nova/tests/functional/db/test_request_spec.py:L23)

