# src/nova/tests/functional/api_sample_tests/test_flavor_access.py

## Overview

This file implements the `test_flavor_access` module, defining 3 classs, 1 constant, 3 fields, 7 methods, 1 import, 1 side effect.

Lines: total 97, code 67, comment 15, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FlavorAccessTestsBase` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavor_access.py:L17–L39` |
| `FlavorAccessTestsBase.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavor_access.py:L18–L18` |
| `FlavorAccessTestsBase.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavor_access.py:L19–L19` |
| `FlavorAccessTestsBase._add_tenant` | method | (self) | private | not declared | 1/10 | `src/nova/tests/functional/api_sample_tests/test_flavor_access.py:L21–L30` |
| `FlavorAccessTestsBase._create_flavor` | method | (self) | private | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_flavor_access.py:L32–L39` |
| `FlavorAccessSampleJsonTests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavor_access.py:L42–L73` |
| `FlavorAccessSampleJsonTests.test_flavor_access_list` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/api_sample_tests/test_flavor_access.py:L44–L53` |
| `FlavorAccessSampleJsonTests.test_flavor_access_add_tenant` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_flavor_access.py:L55–L57` |
| `FlavorAccessSampleJsonTests.test_flavor_access_remove_tenant` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/api_sample_tests/test_flavor_access.py:L59–L73` |
| `FlavorAccessV27SampleJsonTests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavor_access.py:L76–L97` |
| `FlavorAccessV27SampleJsonTests.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavor_access.py:L77–L77` |
| `FlavorAccessV27SampleJsonTests.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavor_access.py:L79–L79` |
| `FlavorAccessV27SampleJsonTests.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_flavor_access.py:L81–L83` |
| `FlavorAccessV27SampleJsonTests.test_add_tenant_access_to_public_flavor` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/api_sample_tests/test_flavor_access.py:L85–L97` |

## Dependencies

- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/api_sample_tests/test_flavor_access.py:L14)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_flavor_access.py:L18)

