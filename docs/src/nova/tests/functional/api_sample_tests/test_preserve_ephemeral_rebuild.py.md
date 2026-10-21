# src/nova/tests/functional/api_sample_tests/test_preserve_ephemeral_rebuild.py

## Overview

This file implements the `test_preserve_ephemeral_rebuild` module, defining 1 class, 1 field, 1 function, 3 methods, 2 imports.

Lines: total 60, code 39, comment 13, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `PreserveEphemeralOnRebuildJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_preserve_ephemeral_rebuild.py:L19–L60` |
| `PreserveEphemeralOnRebuildJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_preserve_ephemeral_rebuild.py:L20–L20` |
| `PreserveEphemeralOnRebuildJsonTest._test_server_rebuild_preserve_ephemeral` | method | (self, value, resp_tpl=None) | private | not declared | 2/24 | `src/nova/tests/functional/api_sample_tests/test_preserve_ephemeral_rebuild.py:L22–L53` |
| `PreserveEphemeralOnRebuildJsonTest._test_server_rebuild_preserve_ephemeral.fake_rebuild` | function | (self_, context, instance, image_href, admin_password, files_to_inject=None, **kwargs) | public | `old_rebuild(self_, context, instance, image_href, admin_password, files_to_inject=None, **kwargs)` (src/nova/tests/functional/api_sample_tests/test_preserve_ephemeral_rebuild.py:L41) | — | `src/nova/tests/functional/api_sample_tests/test_preserve_ephemeral_rebuild.py:L37–L43` |
| `PreserveEphemeralOnRebuildJsonTest.test_server_rebuild_preserve_ephemeral_true` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_preserve_ephemeral_rebuild.py:L55–L56` |
| `PreserveEphemeralOnRebuildJsonTest.test_server_rebuild_preserve_ephemeral_false` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_preserve_ephemeral_rebuild.py:L58–L60` |

## Dependencies

- `nova.compute`: imports `api as compute_api` (src/nova/tests/functional/api_sample_tests/test_preserve_ephemeral_rebuild.py:L15)
- `nova.tests.functional.api_sample_tests`: imports `test_servers` (src/nova/tests/functional/api_sample_tests/test_preserve_ephemeral_rebuild.py:L16)

