# src/nova/tests/functional/api_sample_tests/test_hosts.py

## Overview

This file implements the `test_hosts` module, defining 1 class, 1 constant, 1 field, 6 methods, 1 import, 1 side effect.

Lines: total 46, code 23, comment 14, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `HostsSampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_hosts.py:L19–L46` |
| `HostsSampleJsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_hosts.py:L20–L20` |
| `HostsSampleJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_hosts.py:L21–L21` |
| `HostsSampleJsonTest.test_host_startup` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_hosts.py:L23–L25` |
| `HostsSampleJsonTest.test_host_reboot` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_hosts.py:L27–L29` |
| `HostsSampleJsonTest.test_host_shutdown` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_hosts.py:L31–L33` |
| `HostsSampleJsonTest.test_host_maintenance` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_hosts.py:L35–L38` |
| `HostsSampleJsonTest.test_host_get` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_hosts.py:L40–L42` |
| `HostsSampleJsonTest.test_hosts_list` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_hosts.py:L44–L46` |

## Dependencies

- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/api_sample_tests/test_hosts.py:L16)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_hosts.py:L20)

