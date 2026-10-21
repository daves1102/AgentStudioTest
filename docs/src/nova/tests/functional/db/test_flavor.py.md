# src/nova/tests/functional/db/test_flavor.py

## Overview

This file implements the `test_flavor` module, defining 1 class, 1 constant, 16 methods, 1 variable, 7 imports, 1 side effect.

Lines: total 177, code 137, comment 12, blank 28

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_api_flavor` | variable | — | exported | not declared | — | `src/nova/tests/functional/db/test_flavor.py:L21–L38` |
| `FlavorObjectTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_flavor.py:L41–L177` |
| `FlavorObjectTestCase.USES_DB_SELF` | constant | — | public | not declared | — | `src/nova/tests/functional/db/test_flavor.py:L42–L42` |
| `FlavorObjectTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/db/test_flavor.py:L44–L48` |
| `FlavorObjectTestCase.test_create` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_flavor.py:L50–L57` |
| `FlavorObjectTestCase.test_get_with_no_projects` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_flavor.py:L59–L64` |
| `FlavorObjectTestCase.test_get_with_projects_and_specs` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_flavor.py:L66–L71` |
| `FlavorObjectTestCase._test_query` | method | (self, flavor) | private | not declared | 1/8 | `src/nova/tests/functional/db/test_flavor.py:L73–L82` |
| `FlavorObjectTestCase.test_query_api` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/db/test_flavor.py:L84–L87` |
| `FlavorObjectTestCase.test_save` | method | (self) | public | not declared | 1/20 | `src/nova/tests/functional/db/test_flavor.py:L89–L111` |
| `FlavorObjectTestCase._collect_flavor_residue_api` | method | (context, flavor) | private | `len(flavors) + len(specs) + len(projects)` (src/nova/tests/functional/db/test_flavor.py:L123) | 1/8 | `src/nova/tests/functional/db/test_flavor.py:L115–L123` |
| `FlavorObjectTestCase._test_destroy` | method | (self, flavor) | private | not declared | 1/5 | `src/nova/tests/functional/db/test_flavor.py:L125–L130` |
| `FlavorObjectTestCase.test_destroy_api` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_flavor.py:L132–L137` |
| `FlavorObjectTestCase.test_destroy_missing_flavor_by_flavorid` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/db/test_flavor.py:L139–L142` |
| `FlavorObjectTestCase.test_destroy_missing_flavor_by_id` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/db/test_flavor.py:L144–L147` |
| `FlavorObjectTestCase._test_get_all` | method | (self, expect_len, marker=None, limit=None) | private | `flavors` (src/nova/tests/functional/db/test_flavor.py:L153) | 1/5 | `src/nova/tests/functional/db/test_flavor.py:L149–L153` |
| `FlavorObjectTestCase.test_get_all_with_all_api_flavors` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/db/test_flavor.py:L155–L158` |
| `FlavorObjectTestCase.test_get_all_with_marker_in_api` | method | (self) | public | not declared | 2/9 | `src/nova/tests/functional/db/test_flavor.py:L160–L168` |
| `FlavorObjectTestCase.test_get_all_with_marker_not_found` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/db/test_flavor.py:L170–L177` |

## Dependencies

- `nova`: imports `context` (src/nova/tests/functional/db/test_flavor.py:L13)
- `nova.db.api`: imports `api as api_db_api` (src/nova/tests/functional/db/test_flavor.py:L14)
- `nova.db.api`: imports `models as api_models` (src/nova/tests/functional/db/test_flavor.py:L15)
- `nova`: imports `exception` (src/nova/tests/functional/db/test_flavor.py:L16)
- `nova`: imports `objects` (src/nova/tests/functional/db/test_flavor.py:L17)
- `nova`: imports `test` (src/nova/tests/functional/db/test_flavor.py:L18)
- `nova.tests`: imports `fixtures` (src/nova/tests/functional/db/test_flavor.py:L19)

## Side Effects

- **global-mutation**: USES_DB_SELF = True (src/nova/tests/functional/db/test_flavor.py:L42)

