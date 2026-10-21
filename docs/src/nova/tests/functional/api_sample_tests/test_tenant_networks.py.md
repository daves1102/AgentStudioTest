# src/nova/tests/functional/api_sample_tests/test_tenant_networks.py

## Overview

This file implements the `test_tenant_networks` module, defining 1 class, 2 constants, 1 field, 3 methods, 2 imports, 2 side effects.

Lines: total 36, code 15, comment 14, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_tenant_networks.py:L19–L19` |
| `TenantNetworksJsonTests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_tenant_networks.py:L22–L36` |
| `TenantNetworksJsonTests.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_tenant_networks.py:L23–L23` |
| `TenantNetworksJsonTests.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_tenant_networks.py:L24–L24` |
| `TenantNetworksJsonTests.test_list_networks` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_tenant_networks.py:L26–L28` |
| `TenantNetworksJsonTests.test_create_network` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_tenant_networks.py:L30–L32` |
| `TenantNetworksJsonTests.test_delete_network` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_tenant_networks.py:L34–L36` |

## Dependencies

- `import nova.conf` (src/nova/tests/functional/api_sample_tests/test_tenant_networks.py:L16)
- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/api_sample_tests/test_tenant_networks.py:L17)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/functional/api_sample_tests/test_tenant_networks.py:L19)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_tenant_networks.py:L23)

