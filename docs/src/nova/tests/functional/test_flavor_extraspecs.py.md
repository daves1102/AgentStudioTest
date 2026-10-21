# src/nova/tests/functional/test_flavor_extraspecs.py

## Overview

This file implements the `test_flavor_extraspecs` module, defining 2 classs, 1 field, 9 methods, 2 imports.

Lines: total 144, code 93, comment 24, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FlavorExtraSpecsTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_flavor_extraspecs.py:L21–L69` |
| `FlavorExtraSpecsTest.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_flavor_extraspecs.py:L23–L25` |
| `FlavorExtraSpecsTest.test_create` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_flavor_extraspecs.py:L27–L35` |
| `FlavorExtraSpecsTest.test_create_invalid_spec` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_flavor_extraspecs.py:L37–L47` |
| `FlavorExtraSpecsTest.test_update` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_flavor_extraspecs.py:L49–L56` |
| `FlavorExtraSpecsTest.test_update_invalid_spec` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_flavor_extraspecs.py:L58–L69` |
| `FlavorExtraSpecsV286Test` | class | — | exported | not declared | — | `src/nova/tests/functional/test_flavor_extraspecs.py:L72–L144` |
| `FlavorExtraSpecsV286Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_flavor_extraspecs.py:L73–L73` |
| `FlavorExtraSpecsV286Test.test_create_invalid_spec` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_flavor_extraspecs.py:L75–L89` |
| `FlavorExtraSpecsV286Test.test_create_unknown_spec` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_flavor_extraspecs.py:L91–L107` |
| `FlavorExtraSpecsV286Test.test_update_invalid_spec` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/test_flavor_extraspecs.py:L109–L134` |
| `FlavorExtraSpecsV286Test.test_update_unknown_spec` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_flavor_extraspecs.py:L136–L144` |

## Dependencies

- `nova.tests.functional.api`: imports `client as api_client` (src/nova/tests/functional/test_flavor_extraspecs.py:L17)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_flavor_extraspecs.py:L18)

