# src/nova/tests/functional/api_sample_tests/test_networks.py

## Overview

This file implements the `test_networks` module, defining 1 class, 1 constant, 1 field, 6 methods, 4 imports, 1 side effect.

Lines: total 53, code 29, comment 14, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NetworksJsonTests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_networks.py:L23–L53` |
| `NetworksJsonTests.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_networks.py:L24–L24` |
| `NetworksJsonTests.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_networks.py:L25–L25` |
| `NetworksJsonTests.test_network_list` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_networks.py:L27–L29` |
| `NetworksJsonTests.test_network_show` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_networks.py:L31–L34` |
| `NetworksJsonTests.test_network_show_token_expired` | method | (self, mock_get) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_networks.py:L38–L41` |
| `NetworksJsonTests.test_network_create` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_networks.py:L43–L45` |
| `NetworksJsonTests.test_network_add` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_networks.py:L47–L49` |
| `NetworksJsonTests.test_network_delete` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_networks.py:L51–L53` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/functional/api_sample_tests/test_networks.py:L16)
- `nova`: imports `exception` (src/nova/tests/functional/api_sample_tests/test_networks.py:L18)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/api_sample_tests/test_networks.py:L19)
- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/api_sample_tests/test_networks.py:L20)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_networks.py:L24)

