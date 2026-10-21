# src/nova/tests/functional/api_sample_tests/test_floating_ips_bulk.py

## Overview

This file implements the `test_floating_ips_bulk` module, defining 1 class, 2 constants, 4 methods, 3 imports, 2 side effects.

Lines: total 51, code 29, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_floating_ips_bulk.py:L20–L20` |
| `FloatingIpsBulkTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_floating_ips_bulk.py:L23–L51` |
| `FloatingIpsBulkTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_floating_ips_bulk.py:L24–L24` |
| `FloatingIpsBulkTest.test_floating_ips_bulk_list` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_floating_ips_bulk.py:L26–L29` |
| `FloatingIpsBulkTest.test_floating_ips_bulk_list_by_host` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_floating_ips_bulk.py:L31–L35` |
| `FloatingIpsBulkTest.test_floating_ips_bulk_create` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_floating_ips_bulk.py:L37–L44` |
| `FloatingIpsBulkTest.test_floating_ips_bulk_delete` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_floating_ips_bulk.py:L46–L51` |

## Dependencies

- `import nova.conf` (src/nova/tests/functional/api_sample_tests/test_floating_ips_bulk.py:L16)
- `nova.tests.functional.api`: imports `client as api_client` (src/nova/tests/functional/api_sample_tests/test_floating_ips_bulk.py:L17)
- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/api_sample_tests/test_floating_ips_bulk.py:L18)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/functional/api_sample_tests/test_floating_ips_bulk.py:L20)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_floating_ips_bulk.py:L24)

