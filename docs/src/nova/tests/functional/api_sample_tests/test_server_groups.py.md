# src/nova/tests/functional/api_sample_tests/test_server_groups.py

## Overview

This file implements the `test_server_groups` module, defining 3 classs, 3 fields, 8 methods, 1 import.

Lines: total 80, code 49, comment 15, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServerGroupsSampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_groups.py:L19–L60` |
| `ServerGroupsSampleJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_groups.py:L20–L20` |
| `ServerGroupsSampleJsonTest._get_create_subs` | method | (self) | private | `{'name': 'test'}` (src/nova/tests/functional/api_sample_tests/test_server_groups.py:L23) | 1/2 | `src/nova/tests/functional/api_sample_tests/test_server_groups.py:L22–L23` |
| `ServerGroupsSampleJsonTest._post_server_group` | method | (self) | private | `self._verify_response('server-groups-post-resp', subs, response, 200)` (src/nova/tests/functional/api_sample_tests/test_server_groups.py:L34) | 1/8 | `src/nova/tests/functional/api_sample_tests/test_server_groups.py:L25–L35` |
| `ServerGroupsSampleJsonTest.test_server_groups_post` | method | (self) | public | `self._post_server_group()` (src/nova/tests/functional/api_sample_tests/test_server_groups.py:L38) | 1/2 | `src/nova/tests/functional/api_sample_tests/test_server_groups.py:L37–L38` |
| `ServerGroupsSampleJsonTest.test_server_groups_list` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_server_groups.py:L40–L46` |
| `ServerGroupsSampleJsonTest.test_server_groups_get` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_server_groups.py:L48–L55` |
| `ServerGroupsSampleJsonTest.test_server_groups_delete` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_server_groups.py:L57–L60` |
| `ServerGroupsV213SampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_groups.py:L63–L70` |
| `ServerGroupsV213SampleJsonTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_groups.py:L64–L66` |
| `ServerGroupsV213SampleJsonTest.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_server_groups.py:L68–L70` |
| `ServerGroupsV264SampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_groups.py:L73–L80` |
| `ServerGroupsV264SampleJsonTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_groups.py:L74–L76` |
| `ServerGroupsV264SampleJsonTest.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_server_groups.py:L78–L80` |

## Dependencies

- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/api_sample_tests/test_server_groups.py:L16)

