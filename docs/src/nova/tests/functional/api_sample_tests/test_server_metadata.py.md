# src/nova/tests/functional/api_sample_tests/test_server_metadata.py

## Overview

This file implements the `test_server_metadata` module, defining 1 class, 1 field, 8 methods, 1 import.

Lines: total 79, code 48, comment 20, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServersMetadataJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_metadata.py:L19–L79` |
| `ServersMetadataJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_metadata.py:L20–L20` |
| `ServersMetadataJsonTest._create_and_set` | method | (self, subs) | private | `uuid` (src/nova/tests/functional/api_sample_tests/test_server_metadata.py:L28) | 1/7 | `src/nova/tests/functional/api_sample_tests/test_server_metadata.py:L22–L28` |
| `ServersMetadataJsonTest.generalize_subs` | method | (self, subs, vanilla_regexes) | public | `subs` (src/nova/tests/functional/api_sample_tests/test_server_metadata.py:L32) | 1/3 | `src/nova/tests/functional/api_sample_tests/test_server_metadata.py:L30–L32` |
| `ServersMetadataJsonTest.test_metadata_put_all` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_server_metadata.py:L34–L37` |
| `ServersMetadataJsonTest.test_metadata_post_all` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_server_metadata.py:L39–L47` |
| `ServersMetadataJsonTest.test_metadata_get_all` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_server_metadata.py:L49–L54` |
| `ServersMetadataJsonTest.test_metadata_put` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_server_metadata.py:L56–L64` |
| `ServersMetadataJsonTest.test_metadata_get` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_server_metadata.py:L66–L71` |
| `ServersMetadataJsonTest.test_metadata_delete` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_server_metadata.py:L73–L79` |

## Dependencies

- `nova.tests.functional.api_sample_tests`: imports `test_servers` (src/nova/tests/functional/api_sample_tests/test_server_metadata.py:L16)

