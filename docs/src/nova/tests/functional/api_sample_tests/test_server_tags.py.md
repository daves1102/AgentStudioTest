# src/nova/tests/functional/api_sample_tests/test_server_tags.py

## Overview

This file implements the `test_server_tags` module, defining 1 class, 2 constants, 3 fields, 11 methods, 2 imports, 2 side effects.

Lines: total 105, code 79, comment 11, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TAG1` | constant | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_tags.py:L16–L16` |
| `TAG2` | constant | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_tags.py:L17–L17` |
| `ServerTagsJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_tags.py:L20–L105` |
| `ServerTagsJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_tags.py:L21–L21` |
| `ServerTagsJsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_tags.py:L22–L22` |
| `ServerTagsJsonTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_tags.py:L23–L23` |
| `ServerTagsJsonTest._get_create_subs` | method | (self) | private | `{'tag1': TAG1, 'tag2': TAG2}` (src/nova/tests/functional/api_sample_tests/test_server_tags.py:L26) | 1/3 | `src/nova/tests/functional/api_sample_tests/test_server_tags.py:L25–L27` |
| `ServerTagsJsonTest._get_show_subs` | method | (self) | private | `subs` (src/nova/tests/functional/api_sample_tests/test_server_tags.py:L41) | 1/13 | `src/nova/tests/functional/api_sample_tests/test_server_tags.py:L29–L41` |
| `ServerTagsJsonTest._put_server_tags` | method | (self) | private | `uuid` (src/nova/tests/functional/api_sample_tests/test_server_tags.py:L52) | 1/7 | `src/nova/tests/functional/api_sample_tests/test_server_tags.py:L43–L52` |
| `ServerTagsJsonTest.test_server_tags_update_all` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_server_tags.py:L54–L55` |
| `ServerTagsJsonTest.test_server_tags_show` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_server_tags.py:L57–L60` |
| `ServerTagsJsonTest.test_server_tags_show_with_details_information` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_server_tags.py:L62–L67` |
| `ServerTagsJsonTest.test_server_tags_list_with_details_information` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_server_tags.py:L69–L73` |
| `ServerTagsJsonTest.test_server_tags_index` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_server_tags.py:L75–L81` |
| `ServerTagsJsonTest.test_server_tags_update` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/api_sample_tests/test_server_tags.py:L83–L93` |
| `ServerTagsJsonTest.test_server_tags_delete` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_server_tags.py:L95–L99` |
| `ServerTagsJsonTest.test_server_tags_delete_all` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_server_tags.py:L101–L105` |

## Dependencies

- `nova.db.main`: imports `models` (src/nova/tests/functional/api_sample_tests/test_server_tags.py:L13)
- `nova.tests.functional.api_sample_tests`: imports `test_servers` (src/nova/tests/functional/api_sample_tests/test_server_tags.py:L14)

## Side Effects

- **global-mutation**: TAG1 = 'tag1' (src/nova/tests/functional/api_sample_tests/test_server_tags.py:L16)
- **global-mutation**: TAG2 = 'tag2' (src/nova/tests/functional/api_sample_tests/test_server_tags.py:L17)

