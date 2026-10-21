# src/nova/tests/functional/api_sample_tests/test_volumes.py

## Overview

This file implements the `test_volumes` module, defining 1 class, 1 field, 7 methods, 3 imports.

Lines: total 80, code 51, comment 16, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `VolumesSampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volumes.py:L22–L80` |
| `VolumesSampleJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volumes.py:L23–L23` |
| `VolumesSampleJsonTest.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/api_sample_tests/test_volumes.py:L25–L35` |
| `VolumesSampleJsonTest._post_volume` | method | (self) | private | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_volumes.py:L37–L45` |
| `VolumesSampleJsonTest.test_volumes_show` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_volumes.py:L47–L53` |
| `VolumesSampleJsonTest.test_volumes_index` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_volumes.py:L55–L61` |
| `VolumesSampleJsonTest.test_volumes_detail` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_volumes.py:L63–L71` |
| `VolumesSampleJsonTest.test_volumes_create` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_volumes.py:L73–L74` |
| `VolumesSampleJsonTest.test_volumes_delete` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_volumes.py:L76–L80` |

## Dependencies

- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/api_sample_tests/test_volumes.py:L16)
- `nova.tests.functional.api_sample_tests`: imports `test_servers` (src/nova/tests/functional/api_sample_tests/test_volumes.py:L18)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/functional/api_sample_tests/test_volumes.py:L19)

