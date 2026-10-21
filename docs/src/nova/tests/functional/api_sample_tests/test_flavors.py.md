# src/nova/tests/functional/api_sample_tests/test_flavors.py

## Overview

This file implements the `test_flavors` module, defining 5 classs, 14 fields, 14 methods, 3 imports.

Lines: total 146, code 96, comment 24, blank 26

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FlavorsSampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L21–L82` |
| `FlavorsSampleJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L22–L22` |
| `FlavorsSampleJsonTest.flavor_show_id` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L23–L23` |
| `FlavorsSampleJsonTest.subs` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L24–L24` |
| `FlavorsSampleJsonTest.sort_keys` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L25–L28` |
| `FlavorsSampleJsonTest.sort_dirs` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L29–L29` |
| `FlavorsSampleJsonTest.test_flavors_get` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L31–L33` |
| `FlavorsSampleJsonTest.test_flavors_list` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L35–L37` |
| `FlavorsSampleJsonTest.test_flavors_list_with_sort_key` | method | (self) | public | not declared | 2/5 | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L39–L43` |
| `FlavorsSampleJsonTest.test_flavors_list_with_invalid_sort_key` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L45–L47` |
| `FlavorsSampleJsonTest.test_flavors_list_with_sort_dir` | method | (self) | public | not declared | 2/5 | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L49–L53` |
| `FlavorsSampleJsonTest.test_flavors_list_with_invalid_sort_dir` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L55–L57` |
| `FlavorsSampleJsonTest.test_flavors_detail` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L59–L62` |
| `FlavorsSampleJsonTest.test_flavors_detail_with_sort_key` | method | (self) | public | not declared | 2/5 | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L64–L68` |
| `FlavorsSampleJsonTest.test_flavors_detail_with_invalid_sort_key` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L70–L72` |
| `FlavorsSampleJsonTest.test_flavors_detail_with_sort_dir` | method | (self) | public | not declared | 2/5 | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L74–L78` |
| `FlavorsSampleJsonTest.test_flavors_detail_with_invalid_sort_dir` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L80–L82` |
| `FlavorsSampleJsonTest255` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L85–L104` |
| `FlavorsSampleJsonTest255.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L86–L86` |
| `FlavorsSampleJsonTest255.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L87–L87` |
| `FlavorsSampleJsonTest255.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L89–L104` |
| `FlavorsSampleJsonTest261` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L107–L130` |
| `FlavorsSampleJsonTest261.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L108–L108` |
| `FlavorsSampleJsonTest261.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L109–L109` |
| `FlavorsSampleJsonTest261.setUp` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L111–L130` |
| `FlavorsSampleJsonTest275` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L133–L138` |
| `FlavorsSampleJsonTest275.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L134–L134` |
| `FlavorsSampleJsonTest275.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L135–L135` |
| `FlavorsSampleJsonTest275.test_flavors_list` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L137–L138` |
| `FlavorsSampleJsonTest2102` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L141–L146` |
| `FlavorsSampleJsonTest2102.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L142–L142` |
| `FlavorsSampleJsonTest2102.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L143–L143` |
| `FlavorsSampleJsonTest2102.sort_keys` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavors.py:L145–L145` |

## Dependencies

- `nova`: imports `context as nova_context` (src/nova/tests/functional/api_sample_tests/test_flavors.py:L16)
- `nova`: imports `objects` (src/nova/tests/functional/api_sample_tests/test_flavors.py:L17)
- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/api_sample_tests/test_flavors.py:L18)

