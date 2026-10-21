# src/nova/tests/functional/db/test_build_request.py

## Overview

This file implements the `test_build_request` module, defining 2 classs, 2 constants, 34 methods, 10 imports, 2 side effects.

Lines: total 541, code 415, comment 22, blank 104

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BuildRequestTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_build_request.py:L26–L106` |
| `BuildRequestTestCase.USES_DB_SELF` | constant | — | public | not declared | — | `src/nova/tests/functional/db/test_build_request.py:L27–L27` |
| `BuildRequestTestCase.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/db/test_build_request.py:L29–L37` |
| `BuildRequestTestCase._create_req` | method | (self) | private | `build_request.BuildRequest._from_db_object(self.context, self.build_req_obj, self.build_req_obj._create_in_db(self.context, args))` (src/nova/tests/functional/db/test_build_request.py:L44) | 1/8 | `src/nova/tests/functional/db/test_build_request.py:L39–L46` |
| `BuildRequestTestCase.test_get_by_instance_uuid_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/db/test_build_request.py:L48–L51` |
| `BuildRequestTestCase.test_get_by_uuid` | method | (self) | public | not declared | 4/17 | `src/nova/tests/functional/db/test_build_request.py:L53–L72` |
| `BuildRequestTestCase.test_destroy` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/db/test_build_request.py:L74–L81` |
| `BuildRequestTestCase.test_destroy_twice_raises` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_build_request.py:L83–L88` |
| `BuildRequestTestCase.test_save` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/db/test_build_request.py:L90–L98` |
| `BuildRequestTestCase.test_save_not_found` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/db/test_build_request.py:L100–L106` |
| `BuildRequestListTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_build_request.py:L109–L541` |
| `BuildRequestListTestCase.USES_DB_SELF` | constant | — | public | not declared | — | `src/nova/tests/functional/db/test_build_request.py:L110–L110` |
| `BuildRequestListTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/db/test_build_request.py:L112–L118` |
| `BuildRequestListTestCase._create_req` | method | (self, project_id=None, instance=None) | private | `build_request.BuildRequest._from_db_object(self.context, build_request.BuildRequest(), build_request.BuildRequest._create_in_db(self.context, args))` (src/nova/tests/functional/db/test_build_request.py:L128) | 3/11 | `src/nova/tests/functional/db/test_build_request.py:L120–L130` |
| `BuildRequestListTestCase.test_get_all_empty` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/db/test_build_request.py:L132–L134` |
| `BuildRequestListTestCase.test_get_all` | method | (self) | public | not declared | 2/8 | `src/nova/tests/functional/db/test_build_request.py:L136–L145` |
| `BuildRequestListTestCase.test_get_all_filter_by_project_id` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/db/test_build_request.py:L147–L156` |
| `BuildRequestListTestCase.test_get_all_bypass_project_id_filter_as_admin` | method | (self) | public | not declared | 2/10 | `src/nova/tests/functional/db/test_build_request.py:L158–L169` |
| `BuildRequestListTestCase.test_get_by_filters` | method | (self) | public | not declared | 2/10 | `src/nova/tests/functional/db/test_build_request.py:L171–L182` |
| `BuildRequestListTestCase.test_get_by_filters_limit_0` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/db/test_build_request.py:L184–L190` |
| `BuildRequestListTestCase.test_get_by_filters_deleted` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/db/test_build_request.py:L192–L198` |
| `BuildRequestListTestCase.test_get_by_filters_cleaned` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/db/test_build_request.py:L200–L206` |
| `BuildRequestListTestCase.test_get_by_filters_exact_match` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/db/test_build_request.py:L208–L226` |
| `BuildRequestListTestCase.test_get_by_filters_exact_match_list` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/db/test_build_request.py:L228–L246` |
| `BuildRequestListTestCase.test_get_by_filters_exact_match_metadata` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/db/test_build_request.py:L248–L266` |
| `BuildRequestListTestCase.test_get_by_filters_exact_match_metadata_list` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/db/test_build_request.py:L268–L288` |
| `BuildRequestListTestCase.test_get_by_filters_regex_match_one` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/db/test_build_request.py:L290–L308` |
| `BuildRequestListTestCase.test_get_by_filters_regex_match_both` | method | (self) | public | not declared | 2/18 | `src/nova/tests/functional/db/test_build_request.py:L310–L330` |
| `BuildRequestListTestCase.test_get_by_filters_sort_asc` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/db/test_build_request.py:L332–L354` |
| `BuildRequestListTestCase.test_get_by_filters_sort_desc` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/db/test_build_request.py:L356–L378` |
| `BuildRequestListTestCase.test_get_by_filters_sort_build_req_id` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/db/test_build_request.py:L380–L403` |
| `BuildRequestListTestCase.test_get_by_filters_multiple_sort_keys` | method | (self) | public | not declared | 1/27 | `src/nova/tests/functional/db/test_build_request.py:L405–L436` |
| `BuildRequestListTestCase.test_get_by_filters_marker` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/db/test_build_request.py:L438–L459` |
| `BuildRequestListTestCase.test_get_by_filters_marker_not_found` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_build_request.py:L461–L466` |
| `BuildRequestListTestCase.test_get_by_filters_limit` | method | (self) | public | not declared | 2/13 | `src/nova/tests/functional/db/test_build_request.py:L468–L482` |
| `BuildRequestListTestCase.test_get_by_filters_marker_limit` | method | (self) | public | not declared | 2/17 | `src/nova/tests/functional/db/test_build_request.py:L484–L503` |
| `BuildRequestListTestCase.test_get_by_filters_marker_overlimit` | method | (self) | public | not declared | 2/17 | `src/nova/tests/functional/db/test_build_request.py:L505–L524` |
| `BuildRequestListTestCase.test_get_by_filters_bails_on_empty_list_check` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/db/test_build_request.py:L526–L541` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/tests/functional/db/test_build_request.py:L13)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/functional/db/test_build_request.py:L14)
- `nova`: imports `context` (src/nova/tests/functional/db/test_build_request.py:L16)
- `nova`: imports `exception` (src/nova/tests/functional/db/test_build_request.py:L17)
- `nova`: imports `objects` (src/nova/tests/functional/db/test_build_request.py:L18)
- `nova.objects`: imports `build_request` (src/nova/tests/functional/db/test_build_request.py:L19)
- `nova`: imports `test` (src/nova/tests/functional/db/test_build_request.py:L20)
- `nova.tests`: imports `fixtures` (src/nova/tests/functional/db/test_build_request.py:L21)
- `nova.tests.unit`: imports `fake_build_request` (src/nova/tests/functional/db/test_build_request.py:L22)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/functional/db/test_build_request.py:L23)

## Side Effects

- **global-mutation**: USES_DB_SELF = True (src/nova/tests/functional/db/test_build_request.py:L27)
- **global-mutation**: USES_DB_SELF = True (src/nova/tests/functional/db/test_build_request.py:L110)

