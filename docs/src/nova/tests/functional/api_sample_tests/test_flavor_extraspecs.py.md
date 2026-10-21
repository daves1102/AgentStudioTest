# src/nova/tests/functional/api_sample_tests/test_flavor_extraspecs.py

## Overview

This file implements the `test_flavor_extraspecs` module, defining 1 class, 1 constant, 1 field, 6 methods, 1 import, 1 side effect, 2 security surface entries.

Lines: total 69, code 46, comment 14, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FlavorExtraSpecsSampleJsonTests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavor_extraspecs.py:L19–L69` |
| `FlavorExtraSpecsSampleJsonTests.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavor_extraspecs.py:L20–L20` |
| `FlavorExtraSpecsSampleJsonTests.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_flavor_extraspecs.py:L21–L21` |
| `FlavorExtraSpecsSampleJsonTests._flavor_extra_specs_create` | method | (self) | private | not declared | 1/9 | `src/nova/tests/functional/api_sample_tests/test_flavor_extraspecs.py:L23–L31` |
| `FlavorExtraSpecsSampleJsonTests.test_flavor_extra_specs_get` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_flavor_extraspecs.py:L33–L40` |
| `FlavorExtraSpecsSampleJsonTests.test_flavor_extra_specs_list` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/api_sample_tests/test_flavor_extraspecs.py:L42–L50` |
| `FlavorExtraSpecsSampleJsonTests.test_flavor_extra_specs_create` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_flavor_extraspecs.py:L52–L53` |
| `FlavorExtraSpecsSampleJsonTests.test_flavor_extra_specs_update` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/api_sample_tests/test_flavor_extraspecs.py:L55–L63` |
| `FlavorExtraSpecsSampleJsonTests.test_flavor_extra_specs_delete` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_flavor_extraspecs.py:L65–L69` |

## Dependencies

- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/api_sample_tests/test_flavor_extraspecs.py:L16)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_flavor_extraspecs.py:L20)

## Security Surface

- **sink** (`db-write`): 'flavor-extra-specs-update-req', subs) (src/nova/tests/functional/api_sample_tests/test_flavor_extraspecs.py:L61)
- **sink** (`db-write`): self._verify_response('flavor-extra-specs-update-resp', (src/nova/tests/functional/api_sample_tests/test_flavor_extraspecs.py:L62)

