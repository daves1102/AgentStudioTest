# src/nova/tests/unit/api/test_compute_req_id.py

## Overview

This file implements the `test_compute_req_id` module, defining 1 class, 1 constant, 1 function, 1 method, 6 imports, 2 side effects, 1 security surface entry.

Lines: total 43, code 20, comment 14, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ENV_REQUEST_ID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/test_compute_req_id.py:L26–L26` |
| `RequestIdTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/test_compute_req_id.py:L29–L43` |
| `RequestIdTest.test_generate_request_id` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/test_compute_req_id.py:L30–L43` |
| `RequestIdTest.test_generate_request_id.application` | function | (req) | public | `req.environ[ENV_REQUEST_ID]` (src/nova/tests/unit/api/test_compute_req_id.py:L33) | — | `src/nova/tests/unit/api/test_compute_req_id.py:L32–L33` |

## Dependencies

- `oslo_context`: imports `context` (src/nova/tests/unit/api/test_compute_req_id.py:L17)
- `testtools`: imports `matchers` (src/nova/tests/unit/api/test_compute_req_id.py:L18)
- `import webob` (src/nova/tests/unit/api/test_compute_req_id.py:L19)
- `import webob.dec` (src/nova/tests/unit/api/test_compute_req_id.py:L20)
- `nova.api`: imports `compute_req_id` (src/nova/tests/unit/api/test_compute_req_id.py:L22)
- `nova`: imports `test` (src/nova/tests/unit/api/test_compute_req_id.py:L23)

## Side Effects

- **network**: ENV_REQUEST_ID = 'openstack.request_id' (src/nova/tests/unit/api/test_compute_req_id.py:L26)
- **global-mutation**: ENV_REQUEST_ID = 'openstack.request_id' (src/nova/tests/unit/api/test_compute_req_id.py:L26)

## Security Surface

- **entry-point** (`http-param`): req = webob.Request.blank('/test') (src/nova/tests/unit/api/test_compute_req_id.py:L36)

