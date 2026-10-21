# src/nova/tests/functional/api_sample_tests/test_evacuate.py

## Overview

This file implements the `test_evacuate` module, defining 5 classs, 1 constant, 9 fields, 3 functions, 11 methods, 3 imports, 1 side effect.

Lines: total 256, code 202, comment 22, blank 32

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `EvacuateJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L22–L100` |
| `EvacuateJsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L23–L23` |
| `EvacuateJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L24–L24` |
| `EvacuateJsonTest._test_evacuate` | method | (self, req_subs, server_req, server_resp, expected_resp_code) | private | not declared | 2/23 | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L26–L65` |
| `EvacuateJsonTest._test_evacuate.fake_service_is_up` | function | (self, service) | public | `False` (src/nova/tests/functional/api_sample_tests/test_evacuate.py:L32) | — | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L30–L32` |
| `EvacuateJsonTest._test_evacuate.fake_service_get_by_compute_host` | function | (self, context, host) | public | `{ 'host_name': host, 'service': 'compute', 'zone': 'nova' }` (src/nova/tests/functional/api_sample_tests/test_evacuate.py:L36) | — | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L34–L40` |
| `EvacuateJsonTest._test_evacuate.fake_check_instance_exists` | function | (self, context, instance) | public | `False` (src/nova/tests/functional/api_sample_tests/test_evacuate.py:L44) | — | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L42–L44` |
| `EvacuateJsonTest.test_server_evacuate` | method | (self, rebuild_mock) | public | not declared | 1/15 | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L68–L83` |
| `EvacuateJsonTest.test_server_evacuate_find_host` | method | (self, rebuild_mock) | public | not declared | 1/14 | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L86–L100` |
| `EvacuateJsonTestV214` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L103–L138` |
| `EvacuateJsonTestV214.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L104–L104` |
| `EvacuateJsonTestV214.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L105–L105` |
| `EvacuateJsonTestV214.test_server_evacuate` | method | (self, rebuild_mock) | public | not declared | 1/14 | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L108–L122` |
| `EvacuateJsonTestV214.test_server_evacuate_find_host` | method | (self, rebuild_mock) | public | not declared | 1/13 | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L125–L138` |
| `EvacuateJsonTestV229` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L141–L187` |
| `EvacuateJsonTestV229.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L142–L142` |
| `EvacuateJsonTestV229.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L143–L143` |
| `EvacuateJsonTestV229.test_server_evacuate` | method | (self, compute_node_get_all_by_host, rebuild_mock) | public | not declared | 1/19 | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L147–L166` |
| `EvacuateJsonTestV229.test_server_evacuate_with_force` | method | (self, compute_node_get_all_by_host, rebuild_mock) | public | not declared | 1/17 | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L170–L187` |
| `EvacuateJsonTestV268` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L190–L218` |
| `EvacuateJsonTestV268.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L191–L191` |
| `EvacuateJsonTestV268.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L192–L192` |
| `EvacuateJsonTestV268.test_server_evacuate` | method | (self, compute_node_get_all_by_host, rebuild_mock) | public | not declared | 1/18 | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L196–L214` |
| `EvacuateJsonTestV268.test_server_evacuate_with_force` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L216–L218` |
| `EvacuateJsonTestV295` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L221–L256` |
| `EvacuateJsonTestV295.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L222–L222` |
| `EvacuateJsonTestV295.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L223–L223` |
| `EvacuateJsonTestV295.test_server_evacuate` | method | (self, rebuild_mock) | public | not declared | 1/13 | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L226–L239` |
| `EvacuateJsonTestV295.test_server_evacuate_find_host` | method | (self, rebuild_mock) | public | not declared | 1/14 | `src/nova/tests/functional/api_sample_tests/test_evacuate.py:L242–L256` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/functional/api_sample_tests/test_evacuate.py:L16)
- `nova`: imports `objects` (src/nova/tests/functional/api_sample_tests/test_evacuate.py:L18)
- `nova.tests.functional.api_sample_tests`: imports `test_servers` (src/nova/tests/functional/api_sample_tests/test_evacuate.py:L19)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_evacuate.py:L23)

