# src/nova/tests/unit/api/openstack/test_common.py

## Overview

This file implements the `test_common` module, defining 8 classs, 2 constants, 2 fields, 66 methods, 11 imports, 9 side effects, 27 security surface entries.

Lines: total 627, code 487, comment 39, blank 101

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NS` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_common.py:L35–L35` |
| `ATOMNS` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_common.py:L36–L36` |
| `LimiterTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_common.py:L39–L161` |
| `LimiterTest.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/test_common.py:L45–L51` |
| `LimiterTest.test_limiter_offset_zero` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/test_common.py:L53–L59` |
| `LimiterTest.test_limiter_offset_medium` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/test_common.py:L61–L67` |
| `LimiterTest.test_limiter_offset_over_max` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/test_common.py:L69–L76` |
| `LimiterTest.test_limiter_offset_blank` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_common.py:L78–L82` |
| `LimiterTest.test_limiter_offset_bad` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_common.py:L84–L88` |
| `LimiterTest.test_limiter_nothing` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/test_common.py:L90–L96` |
| `LimiterTest.test_limiter_limit_zero` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/test_common.py:L98–L104` |
| `LimiterTest.test_limiter_limit_medium` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/test_common.py:L106–L112` |
| `LimiterTest.test_limiter_limit_over_max` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/test_common.py:L114–L120` |
| `LimiterTest.test_limiter_limit_and_offset` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/test_common.py:L122–L132` |
| `LimiterTest.test_limiter_custom_max_limit` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/api/openstack/test_common.py:L134–L149` |
| `LimiterTest.test_limiter_negative_limit` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_common.py:L151–L155` |
| `LimiterTest.test_limiter_negative_offset` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_common.py:L157–L161` |
| `SortParamUtilsTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_common.py:L164–L230` |
| `SortParamUtilsTest.test_get_sort_params_defaults` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_common.py:L166–L170` |
| `SortParamUtilsTest.test_get_sort_params_override_defaults` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/test_common.py:L172–L182` |
| `SortParamUtilsTest.test_get_sort_params_single_value` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/test_common.py:L184–L191` |
| `SortParamUtilsTest.test_get_sort_params_single_with_default` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/test_common.py:L193–L207` |
| `SortParamUtilsTest.test_get_sort_params_multiple_values` | method | (self) | public | not declared | 3/20 | `src/nova/tests/unit/api/openstack/test_common.py:L209–L230` |
| `PaginationParamsTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_common.py:L233–L285` |
| `PaginationParamsTest.test_no_params` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/test_common.py:L239–L242` |
| `PaginationParamsTest.test_valid_marker` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_common.py:L244–L249` |
| `PaginationParamsTest.test_valid_limit` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/test_common.py:L251–L254` |
| `PaginationParamsTest.test_invalid_limit` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_common.py:L256–L260` |
| `PaginationParamsTest.test_valid_limit_and_marker` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_common.py:L262–L267` |
| `PaginationParamsTest.test_valid_page_size` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_common.py:L269–L273` |
| `PaginationParamsTest.test_invalid_page_size` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_common.py:L275–L279` |
| `PaginationParamsTest.test_valid_limit_and_page_size` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_common.py:L281–L285` |
| `MiscFunctionsTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_common.py:L288–L450` |
| `MiscFunctionsTest.test_remove_trailing_version_from_href` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_common.py:L290–L294` |
| `MiscFunctionsTest.test_remove_trailing_version_from_href_2` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_common.py:L296–L300` |
| `MiscFunctionsTest.test_remove_trailing_version_from_href_3` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_common.py:L302–L306` |
| `MiscFunctionsTest.test_remove_trailing_version_from_href_bad_request` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_common.py:L308–L312` |
| `MiscFunctionsTest.test_remove_trailing_version_from_href_bad_request_2` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_common.py:L314–L318` |
| `MiscFunctionsTest.test_remove_trailing_version_from_href_bad_request_3` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_common.py:L320–L324` |
| `MiscFunctionsTest.test_get_id_from_href_with_int_url` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_common.py:L326–L330` |
| `MiscFunctionsTest.test_get_id_from_href_with_int` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_common.py:L332–L336` |
| `MiscFunctionsTest.test_get_id_from_href_with_int_url_query` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_common.py:L338–L342` |
| `MiscFunctionsTest.test_get_id_from_href_with_uuid_url` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_common.py:L344–L348` |
| `MiscFunctionsTest.test_get_id_from_href_with_uuid_url_query` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_common.py:L350–L354` |
| `MiscFunctionsTest.test_get_id_from_href_with_uuid` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_common.py:L356–L360` |
| `MiscFunctionsTest.test_raise_http_conflict_for_instance_invalid_state` | method | (self) | public | not declared | 2/13 | `src/nova/tests/unit/api/openstack/test_common.py:L362–L374` |
| `MiscFunctionsTest.test_status_from_state` | method | (self) | public | not declared | 3/9 | `src/nova/tests/unit/api/openstack/test_common.py:L376–L384` |
| `MiscFunctionsTest.test_status_rebuild_from_state` | method | (self) | public | not declared | 3/9 | `src/nova/tests/unit/api/openstack/test_common.py:L386–L394` |
| `MiscFunctionsTest.test_status_migrating_from_state` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/api/openstack/test_common.py:L396–L401` |
| `MiscFunctionsTest.test_task_and_vm_state_from_status` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/api/openstack/test_common.py:L403–L430` |
| `MiscFunctionsTest.test_is_all_tenants_true` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/api/openstack/test_common.py:L432–L436` |
| `MiscFunctionsTest.test_is_all_tenants_false` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/api/openstack/test_common.py:L438–L442` |
| `MiscFunctionsTest.test_is_all_tenants_missing` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/test_common.py:L444–L445` |
| `MiscFunctionsTest.test_is_all_tenants_invalid` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_common.py:L447–L450` |
| `TestCollectionLinks` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_common.py:L453–L526` |
| `TestCollectionLinks.test_items_less_than_limit` | method | (self, href_link_mock) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/test_common.py:L457–L469` |
| `TestCollectionLinks.test_items_equals_given_limit` | method | (self, href_link_mock) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/test_common.py:L472–L487` |
| `TestCollectionLinks.test_items_equals_default_limit` | method | (self, href_link_mock) | public | not declared | 1/15 | `src/nova/tests/unit/api/openstack/test_common.py:L490–L506` |
| `TestCollectionLinks.test_items_equals_default_limit_with_given` | method | (self, href_link_mock) | public | not declared | 1/15 | `src/nova/tests/unit/api/openstack/test_common.py:L509–L526` |
| `LinkPrefixTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_common.py:L529–L545` |
| `LinkPrefixTest.test_update_link_prefix` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/test_common.py:L531–L545` |
| `UrlJoinTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_common.py:L548–L577` |
| `UrlJoinTest.test_url_join` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_common.py:L549–L552` |
| `UrlJoinTest.test_url_join_extra_slashes` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_common.py:L554–L557` |
| `UrlJoinTest.test_url_join_trailing_slash` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_common.py:L559–L562` |
| `UrlJoinTest.test_url_join_empty_list` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_common.py:L564–L567` |
| `UrlJoinTest.test_url_join_single_empty_string` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_common.py:L569–L572` |
| `UrlJoinTest.test_url_join_single_slash` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_common.py:L574–L577` |
| `ViewBuilderLinkTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_common.py:L580–L627` |
| `ViewBuilderLinkTest.project_id` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_common.py:L581–L581` |
| `ViewBuilderLinkTest.api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_common.py:L582–L582` |
| `ViewBuilderLinkTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_common.py:L584–L587` |
| `ViewBuilderLinkTest.req` | method | (self, url, use_admin_context=False) | public | `fakes.HTTPRequest.blank(url, use_admin_context=use_admin_context, version=self.api_version)` (src/nova/tests/unit/api/openstack/test_common.py:L590) | 1/3 | `src/nova/tests/unit/api/openstack/test_common.py:L589–L591` |
| `ViewBuilderLinkTest.test_get_project_id` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/test_common.py:L593–L595` |
| `ViewBuilderLinkTest.test_get_project_id_with_none_project_id` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_common.py:L597–L600` |
| `ViewBuilderLinkTest.test_get_next_link` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/test_common.py:L602–L609` |
| `ViewBuilderLinkTest.test_get_href_link` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/test_common.py:L611–L617` |
| `ViewBuilderLinkTest.test_get_bookmark_link` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/test_common.py:L619–L627` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/test_common.py:L20)
- `testtools`: imports `matchers` (src/nova/tests/unit/api/openstack/test_common.py:L22)
- `import webob` (src/nova/tests/unit/api/openstack/test_common.py:L23)
- `import webob.exc` (src/nova/tests/unit/api/openstack/test_common.py:L24)
- `import webob.multidict` (src/nova/tests/unit/api/openstack/test_common.py:L25)
- `nova.api.openstack`: imports `common` (src/nova/tests/unit/api/openstack/test_common.py:L27)
- `nova.compute`: imports `task_states` (src/nova/tests/unit/api/openstack/test_common.py:L28)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/api/openstack/test_common.py:L29)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/test_common.py:L30)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/test_common.py:L31)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/test_common.py:L32)

## Side Effects

- **network**: NS = "{http://docs.openstack.org/compute/api/v1.1}" (src/nova/tests/unit/api/openstack/test_common.py:L35)
- **network**: """Unit tests for the `nova.api.openstack.common.limited` method which (src/nova/tests/unit/api/openstack/test_common.py:L40)
- **network**: """Unit tests for the `nova.api.openstack.common.get_pagination_params` (src/nova/tests/unit/api/openstack/test_common.py:L234)
- **network**: @mock.patch('nova.api.openstack.common.ViewBuilder._get_next_link') (src/nova/tests/unit/api/openstack/test_common.py:L456)
- **network**: @mock.patch('nova.api.openstack.common.ViewBuilder._get_next_link') (src/nova/tests/unit/api/openstack/test_common.py:L471)
- **network**: @mock.patch('nova.api.openstack.common.ViewBuilder._get_next_link') (src/nova/tests/unit/api/openstack/test_common.py:L489)
- **network**: @mock.patch('nova.api.openstack.common.ViewBuilder._get_next_link') (src/nova/tests/unit/api/openstack/test_common.py:L508)
- **global-mutation**: NS = "{http://docs.openstack.org/compute/api/v1.1}" (src/nova/tests/unit/api/openstack/test_common.py:L35)
- **global-mutation**: ATOMNS = "{http://www.w3.org/2005/Atom}" (src/nova/tests/unit/api/openstack/test_common.py:L36)

## Security Surface

- **entry-point** (`http-param`): req = webob.Request.blank('/?offset=0') (src/nova/tests/unit/api/openstack/test_common.py:L55)
- **entry-point** (`http-param`): req = webob.Request.blank('/?offset=10') (src/nova/tests/unit/api/openstack/test_common.py:L63)
- **entry-point** (`http-param`): req = webob.Request.blank('/?offset=1001') (src/nova/tests/unit/api/openstack/test_common.py:L71)
- **entry-point** (`http-param`): req = webob.Request.blank('/?offset=') (src/nova/tests/unit/api/openstack/test_common.py:L80)
- **entry-point** (`http-param`): req = webob.Request.blank(u'/?offset=\u0020aa') (src/nova/tests/unit/api/openstack/test_common.py:L86)
- **entry-point** (`http-param`): req = webob.Request.blank('/') (src/nova/tests/unit/api/openstack/test_common.py:L92)
- **entry-point** (`http-param`): req = webob.Request.blank('/?limit=0') (src/nova/tests/unit/api/openstack/test_common.py:L100)
- **entry-point** (`http-param`): req = webob.Request.blank('/?limit=10') (src/nova/tests/unit/api/openstack/test_common.py:L108)
- **entry-point** (`http-param`): req = webob.Request.blank('/?limit=3000') (src/nova/tests/unit/api/openstack/test_common.py:L116)
- **entry-point** (`http-param`): req = webob.Request.blank('/?offset=1&limit=3') (src/nova/tests/unit/api/openstack/test_common.py:L125)
- **entry-point** (`http-param`): req = webob.Request.blank('/?offset=3&limit=0') (src/nova/tests/unit/api/openstack/test_common.py:L127)
- **entry-point** (`http-param`): req = webob.Request.blank('/?offset=3&limit=1500') (src/nova/tests/unit/api/openstack/test_common.py:L129)
- **entry-point** (`http-param`): req = webob.Request.blank('/?offset=3000&limit=10') (src/nova/tests/unit/api/openstack/test_common.py:L131)
- **entry-point** (`http-param`): req = webob.Request.blank('/?offset=1&limit=3') (src/nova/tests/unit/api/openstack/test_common.py:L139)
- **entry-point** (`http-param`): req = webob.Request.blank('/?offset=3&limit=0') (src/nova/tests/unit/api/openstack/test_common.py:L142)
- **entry-point** (`http-param`): req = webob.Request.blank('/?offset=3&limit=2500') (src/nova/tests/unit/api/openstack/test_common.py:L145)
- **entry-point** (`http-param`): req = webob.Request.blank('/?offset=3000&limit=10') (src/nova/tests/unit/api/openstack/test_common.py:L148)
- **entry-point** (`http-param`): req = webob.Request.blank('/?limit=-3000') (src/nova/tests/unit/api/openstack/test_common.py:L153)
- **entry-point** (`http-param`): req = webob.Request.blank('/?offset=-30') (src/nova/tests/unit/api/openstack/test_common.py:L159)
- **entry-point** (`http-param`): req = webob.Request.blank('/') (src/nova/tests/unit/api/openstack/test_common.py:L241)
- **entry-point** (`http-param`): req = webob.Request.blank( (src/nova/tests/unit/api/openstack/test_common.py:L246)
- **entry-point** (`http-param`): req = webob.Request.blank('/?limit=10') (src/nova/tests/unit/api/openstack/test_common.py:L253)
- **entry-point** (`http-param`): req = webob.Request.blank('/?limit=-2') (src/nova/tests/unit/api/openstack/test_common.py:L258)
- **entry-point** (`http-param`): req = webob.Request.blank('/?limit=20&marker=%s' % marker) (src/nova/tests/unit/api/openstack/test_common.py:L265)
- **entry-point** (`http-param`): req = webob.Request.blank('/?page_size=10') (src/nova/tests/unit/api/openstack/test_common.py:L271)
- **entry-point** (`http-param`): req = webob.Request.blank('/?page_size=-2') (src/nova/tests/unit/api/openstack/test_common.py:L277)
- **entry-point** (`http-param`): req = webob.Request.blank('/?limit=20&page_size=5') (src/nova/tests/unit/api/openstack/test_common.py:L283)

