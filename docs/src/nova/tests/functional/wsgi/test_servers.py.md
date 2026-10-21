# src/nova/tests/functional/wsgi/test_servers.py

## Overview

This file implements the `test_servers` module, defining 3 classs, 1 field, 16 methods, 7 imports.

Lines: total 439, code 347, comment 52, blank 40

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServersPreSchedulingTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/wsgi/test_servers.py:L22–L310` |
| `ServersPreSchedulingTestCase.setUp` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/wsgi/test_servers.py:L39–L52` |
| `ServersPreSchedulingTestCase.test_instance_from_buildrequest` | method | (self) | public | not declared | 1/29 | `src/nova/tests/functional/wsgi/test_servers.py:L54–L84` |
| `ServersPreSchedulingTestCase.test_instance_from_buildrequest_old_service` | method | (self) | public | not declared | 1/28 | `src/nova/tests/functional/wsgi/test_servers.py:L86–L114` |
| `ServersPreSchedulingTestCase.test_delete_instance_from_buildrequest` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/wsgi/test_servers.py:L116–L132` |
| `ServersPreSchedulingTestCase.test_delete_instance_from_buildrequest_old_service` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/wsgi/test_servers.py:L134–L149` |
| `ServersPreSchedulingTestCase._test_instance_list_from_buildrequests` | method | (self) | private | not declared | 1/27 | `src/nova/tests/functional/wsgi/test_servers.py:L151–L181` |
| `ServersPreSchedulingTestCase.test_instance_list_from_buildrequests` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/wsgi/test_servers.py:L183–L185` |
| `ServersPreSchedulingTestCase.test_instance_list_from_buildrequests_old_service` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/wsgi/test_servers.py:L187–L188` |
| `ServersPreSchedulingTestCase.test_instance_list_from_buildrequests_with_tags` | method | (self) | public | not declared | 1/40 | `src/nova/tests/functional/wsgi/test_servers.py:L190–L242` |
| `ServersPreSchedulingTestCase.test_bfv_delete_build_request_pre_scheduling` | method | (self) | public | not declared | 1/25 | `src/nova/tests/functional/wsgi/test_servers.py:L244–L281` |
| `ServersPreSchedulingTestCase.test_instance_list_build_request_marker_ip_filter` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/wsgi/test_servers.py:L283–L310` |
| `EnforceVolumeBackedForZeroDiskFlavorTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/wsgi/test_servers.py:L313–L381` |
| `EnforceVolumeBackedForZeroDiskFlavorTestCase.setUp` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/wsgi/test_servers.py:L320–L340` |
| `EnforceVolumeBackedForZeroDiskFlavorTestCase.test_create_image_backed_server_with_zero_disk_fails` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/wsgi/test_servers.py:L342–L357` |
| `EnforceVolumeBackedForZeroDiskFlavorTestCase.test_create_volume_backed_server_with_zero_disk_allowed` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/wsgi/test_servers.py:L359–L381` |
| `ResizeCheckInstanceHostTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/wsgi/test_servers.py:L384–L439` |
| `ResizeCheckInstanceHostTestCase.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/wsgi/test_servers.py:L388–L388` |
| `ResizeCheckInstanceHostTestCase.test_resize_source_compute_validation` | method | (self, resize=True) | public | not declared | 2/33 | `src/nova/tests/functional/wsgi/test_servers.py:L390–L436` |
| `ResizeCheckInstanceHostTestCase.test_cold_migrate_source_compute_validation` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/wsgi/test_servers.py:L438–L439` |

## Dependencies

- `nova.policies`: imports `base as base_policies` (src/nova/tests/functional/wsgi/test_servers.py:L13)
- `nova.policies`: imports `servers as servers_policies` (src/nova/tests/functional/wsgi/test_servers.py:L14)
- `nova`: imports `test` (src/nova/tests/functional/wsgi/test_servers.py:L15)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/wsgi/test_servers.py:L16)
- `nova.tests.functional.api`: imports `client as api_client` (src/nova/tests/functional/wsgi/test_servers.py:L17)
- `nova.tests.functional`: imports `fixtures as func_fixtures` (src/nova/tests/functional/wsgi/test_servers.py:L18)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/wsgi/test_servers.py:L19)

