# src/nova/tests/functional/api_sample_tests/test_versions.py

## Overview

This file implements the `test_versions` module, defining 1 class, 2 constants, 3 fields, 3 methods, 3 imports, 2 side effects.

Lines: total 61, code 28, comment 23, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `VersionsSampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_versions.py:L23–L61` |
| `VersionsSampleJsonTest.STUB_KEYSTONE` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_versions.py:L30–L30` |
| `VersionsSampleJsonTest.USE_PROJECT_ID` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_versions.py:L32–L32` |
| `VersionsSampleJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_versions.py:L34–L34` |
| `VersionsSampleJsonTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_versions.py:L38–L38` |
| `VersionsSampleJsonTest.max_api_version` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_versions.py:L39–L39` |
| `VersionsSampleJsonTest._get` | method | (self, url) | private | `self._do_get( url, # Since we're explicitly getting discovery endpoints, strip the # automatic /v2[.1] added by the fixture. strip_version=True)` (src/nova/tests/functional/api_sample_tests/test_versions.py:L42) | 1/4 | `src/nova/tests/functional/api_sample_tests/test_versions.py:L41–L46` |
| `VersionsSampleJsonTest.test_versions_get_base` | method | (self, url) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_versions.py:L49–L52` |
| `VersionsSampleJsonTest.test_versions_get_versioned` | method | (self, url, tplname, subs) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_versions.py:L59–L61` |

## Dependencies

- `import ddt` (src/nova/tests/functional/api_sample_tests/test_versions.py:L16)
- `nova.api.openstack`: imports `api_version_request as avr` (src/nova/tests/functional/api_sample_tests/test_versions.py:L18)
- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/api_sample_tests/test_versions.py:L19)

## Side Effects

- **global-mutation**: STUB_KEYSTONE = False (src/nova/tests/functional/api_sample_tests/test_versions.py:L30)
- **global-mutation**: USE_PROJECT_ID = False (src/nova/tests/functional/api_sample_tests/test_versions.py:L32)

