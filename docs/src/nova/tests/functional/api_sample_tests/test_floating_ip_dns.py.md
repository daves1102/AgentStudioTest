# src/nova/tests/functional/api_sample_tests/test_floating_ip_dns.py

## Overview

This file implements the `test_floating_ip_dns` module, defining 1 class, 1 constant, 7 methods, 2 imports, 1 side effect.

Lines: total 70, code 47, comment 13, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FloatingIpDNSTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_floating_ip_dns.py:L19–L70` |
| `FloatingIpDNSTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_floating_ip_dns.py:L20–L20` |
| `FloatingIpDNSTest.test_floating_ip_dns_list` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_floating_ip_dns.py:L22–L26` |
| `FloatingIpDNSTest.test_floating_ip_dns_create_or_update` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_floating_ip_dns.py:L28–L34` |
| `FloatingIpDNSTest.test_floating_ip_dns_delete` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_floating_ip_dns.py:L36–L40` |
| `FloatingIpDNSTest.test_floating_ip_dns_create_or_update_entry` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_floating_ip_dns.py:L42–L49` |
| `FloatingIpDNSTest.test_floating_ip_dns_entry_get` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_floating_ip_dns.py:L51–L56` |
| `FloatingIpDNSTest.test_floating_ip_dns_entry_delete` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_floating_ip_dns.py:L58–L63` |
| `FloatingIpDNSTest.test_floating_ip_dns_entry_list` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_floating_ip_dns.py:L65–L70` |

## Dependencies

- `nova.tests.functional.api`: imports `client as api_client` (src/nova/tests/functional/api_sample_tests/test_floating_ip_dns.py:L15)
- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/api_sample_tests/test_floating_ip_dns.py:L16)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_floating_ip_dns.py:L20)

