# src/nova/api/compute_req_id.py

## Overview

This file implements the `compute_req_id` module, defining 1 class, 1 constant, 1 field, 1 import, 1 side effect.

Lines: total 36, code 13, comment 14, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `HTTP_RESP_HEADER_REQUEST_ID` | constant | — | exported | not declared | — | `src/nova/api/compute_req_id.py:L32–L32` |
| `ComputeReqIdMiddleware` | class | — | exported | not declared | — | `src/nova/api/compute_req_id.py:L35–L36` |
| `ComputeReqIdMiddleware.compat_headers` | field | — | public | not declared | — | `src/nova/api/compute_req_id.py:L36–L36` |

## Dependencies

- `oslo_middleware`: imports `request_id` (src/nova/api/compute_req_id.py:L29)

## Side Effects

- **global-mutation**: HTTP_RESP_HEADER_REQUEST_ID = 'x-compute-request-id' (src/nova/api/compute_req_id.py:L32)

