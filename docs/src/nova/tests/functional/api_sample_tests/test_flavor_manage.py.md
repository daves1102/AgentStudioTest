# src/nova/tests/functional/api_sample_tests/test_flavor_manage.py

## Overview

This file implements the `test_flavor_manage` module, defining 4 classs, 1 constant, 7 fields, 3 methods, 1 import, 1 side effect, 2 security surface entries.

Lines: total 58, code 31, comment 15, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FlavorManageSampleJsonTests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavor_manage.py:L19–L39` |
| `FlavorManageSampleJsonTests.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavor_manage.py:L20–L20` |
| `FlavorManageSampleJsonTests.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavor_manage.py:L21–L21` |
| `FlavorManageSampleJsonTests._create_flavor` | method | (self) | private | not declared | 1/9 | `src/nova/tests/functional/api_sample_tests/test_flavor_manage.py:L23–L32` |
| `FlavorManageSampleJsonTests.test_create_delete_flavor` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_flavor_manage.py:L34–L39` |
| `FlavorManageSampleJsonTests255` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavor_manage.py:L42–L48` |
| `FlavorManageSampleJsonTests255.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavor_manage.py:L43–L43` |
| `FlavorManageSampleJsonTests255.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavor_manage.py:L44–L44` |
| `FlavorManageSampleJsonTests255.test_update_flavor_description` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_flavor_manage.py:L46–L48` |
| `FlavorManageSampleJsonTests275` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavor_manage.py:L51–L53` |
| `FlavorManageSampleJsonTests275.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavor_manage.py:L52–L52` |
| `FlavorManageSampleJsonTests275.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavor_manage.py:L53–L53` |
| `FlavorManageSampleJsonTests2102` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavor_manage.py:L56–L58` |
| `FlavorManageSampleJsonTests2102.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavor_manage.py:L57–L57` |
| `FlavorManageSampleJsonTests2102.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavor_manage.py:L58–L58` |

## Dependencies

- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/api_sample_tests/test_flavor_manage.py:L16)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_flavor_manage.py:L20)

## Security Surface

- **sink** (`db-write`): response = self._do_put("flavors/1", "flavor-update-req", {}) (src/nova/tests/functional/api_sample_tests/test_flavor_manage.py:L47)
- **sink** (`db-write`): self._verify_response("flavor-update-resp", {}, response, 200) (src/nova/tests/functional/api_sample_tests/test_flavor_manage.py:L48)

