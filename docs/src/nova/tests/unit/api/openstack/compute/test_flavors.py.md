# src/nova/tests/unit/api/openstack/compute/test_flavors.py

## Overview

This file implements the `test_flavors` module, defining 7 classs, 1 constant, 11 fields, 2 functions, 76 methods, 11 imports, 3 side effects, 2 security surface entries.

Lines: total 1080, code 939, comment 22, blank 119

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_get_limit_and_marker` | function | (request, max_limit=1) | exported | `limit, marker` (src/nova/tests/unit/api/openstack/compute/test_flavors.py:L37) | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L31–L37` |
| `return_flavor_not_found` | function | (context, flavor_id, read_deleted=None) | exported | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L40–L41` |
| `FlavorsTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L44–L752` |
| `FlavorsTestV21.microversion` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L45–L45` |
| `FlavorsTestV21.expect_description` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L47–L47` |
| `FlavorsTestV21.expect_extra_specs` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L49–L49` |
| `FlavorsTestV21.omit_legacy_fields` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L51–L51` |
| `FlavorsTestV21.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L53–L58` |
| `FlavorsTestV21._build_request` | method | (self, url) | private | `fakes.HTTPRequestV21.blank( url, version=self.microversion, base_url='http://localhost/v2.1')` (src/nova/tests/unit/api/openstack/compute/test_flavors.py:L61) | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L60–L62` |
| `FlavorsTestV21._set_expected_body` | method | (self, expected, flavor) | private | not declared | 4/11 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L64–L74` |
| `FlavorsTestV21.test_get_flavor_by_invalid_id` | method | (self, mock_get) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L78–L81` |
| `FlavorsTestV21.test_get_flavor_by_id` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L83–L108` |
| `FlavorsTestV21.test_get_flavor_with_custom_link_prefix` | method | (self) | public | not declared | 1/29 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L110–L138` |
| `FlavorsTestV21.test_get_flavor_list` | method | (self) | public | not declared | 3/40 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L140–L179` |
| `FlavorsTestV21.test_get_flavor_list_with_marker` | method | (self) | public | not declared | 2/31 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L181–L211` |
| `FlavorsTestV21.test_get_flavor_list_with_invalid_marker` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L213–L216` |
| `FlavorsTestV21.test_get_flavor_detail_with_limit` | method | (self) | public | not declared | 1/35 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L218–L255` |
| `FlavorsTestV21.test_get_flavor_list_with_limit` | method | (self) | public | not declared | 3/46 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L257–L304` |
| `FlavorsTestV21.test_get_flavor_list_with_default_limit` | method | (self) | public | not declared | 2/34 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L306–L341` |
| `FlavorsTestV21.test_get_flavor_list_detail` | method | (self) | public | not declared | 1/48 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L343–L390` |
| `FlavorsTestV21.test_get_empty_flavor_list` | method | (self, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L394–L398` |
| `FlavorsTestV21.test_get_flavor_list_filter_min_ram` | method | (self) | public | not declared | 2/25 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L400–L425` |
| `FlavorsTestV21.test_get_flavor_list_filter_invalid_min_ram` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L427–L431` |
| `FlavorsTestV21.test_get_flavor_list_filter_min_disk` | method | (self) | public | not declared | 2/25 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L433–L458` |
| `FlavorsTestV21.test_get_flavor_list_filter_invalid_min_disk` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L460–L464` |
| `FlavorsTestV21.test_get_flavor_list_detail_min_ram_and_min_disk` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L466–L496` |
| `FlavorsTestV21._test_list_flavors_with_invalid_filter` | method | (self, url, expected_exception=exception.ValidationError) | private | not declared | 2/8 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L498–L505` |
| `FlavorsTestV21.test_list_flavors_with_invalid_non_int_limit` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L507–L508` |
| `FlavorsTestV21.test_list_detail_flavors_with_invalid_non_int_limit` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L510–L511` |
| `FlavorsTestV21.test_list_flavors_with_invalid_string_limit` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L513–L514` |
| `FlavorsTestV21.test_list_detail_flavors_with_invalid_string_limit` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L516–L518` |
| `FlavorsTestV21.test_list_duplicate_query_with_invalid_string_limit` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L520–L522` |
| `FlavorsTestV21.test_list_detail_duplicate_query_with_invalid_string_limit` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L524–L526` |
| `FlavorsTestV21._test_list_flavors_duplicate_query_parameters_validation` | method | (self, url, expected=None) | private | not declared | 8/45 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L528–L573` |
| `FlavorsTestV21.test_list_duplicate_query_parameters_validation` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L575–L577` |
| `FlavorsTestV21.test_list_detail_duplicate_query_parameters_validation` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L579–L591` |
| `FlavorsTestV21._test_list_flavors_with_allowed_filter` | method | (self, url, expected=None, req=None) | private | not declared | 8/33 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L593–L625` |
| `FlavorsTestV21.test_list_flavors_with_additional_filter` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L627–L629` |
| `FlavorsTestV21.test_list_detail_flavors_with_additional_filter` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L631–L644` |
| `FlavorsTestV21.test_list_flavors_with_min_ram_filter_as_negative_int` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L646–L648` |
| `FlavorsTestV21.test_list_detail_flavors_with_min_ram_filter_as_negative_int` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L650–L662` |
| `FlavorsTestV21.test_list_flavors_with_min_ram_filter_as_float` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L664–L666` |
| `FlavorsTestV21.test_list_detail_flavors_with_min_ram_filter_as_float` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L668–L671` |
| `FlavorsTestV21.test_list_flavors_with_min_disk_filter_as_negative_int` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L673–L674` |
| `FlavorsTestV21.test_list_detail_flavors_with_min_disk_filter_as_negative_int` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L676–L688` |
| `FlavorsTestV21.test_list_flavors_with_min_disk_filter_as_float` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L690–L693` |
| `FlavorsTestV21.test_list_detail_flavors_with_min_disk_filter_as_float` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L695–L698` |
| `FlavorsTestV21.test_list_flavors_with_is_public_filter_as_string_none` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L700–L702` |
| `FlavorsTestV21.test_list_detail_flavors_with_is_public_filter_as_string_none` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L704–L716` |
| `FlavorsTestV21.test_list_flavors_with_is_public_filter_as_valid_bool` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L718–L720` |
| `FlavorsTestV21.test_list_detail_flavors_with_is_public_filter_as_valid_bool` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L722–L734` |
| `FlavorsTestV21.test_list_flavors_with_is_public_filter_as_invalid_string` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L736–L738` |
| `FlavorsTestV21.test_list_detail_flavors_with_is_public_filter_as_invalid_string` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L740–L752` |
| `FlavorsTestV255` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L755–L758` |
| `FlavorsTestV255.microversion` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L757–L757` |
| `FlavorsTestV255.expect_description` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L758–L758` |
| `FlavorsTestV261` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L761–L764` |
| `FlavorsTestV261.microversion` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L763–L763` |
| `FlavorsTestV261.expect_extra_specs` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L764–L764` |
| `FlavorsTestV275` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L767–L864` |
| `FlavorsTestV275.microversion` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L768–L768` |
| `FlavorsTestV275.FLAVOR_WITH_NO_SWAP` | constant | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L770–L785` |
| `FlavorsTestV275.test_list_flavors_with_additional_filter_old_version` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L787–L793` |
| `FlavorsTestV275.test_list_detail_flavors_with_additional_filter_old_version` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L795–L811` |
| `FlavorsTestV275._test_list_flavors_with_additional_filter` | method | (self, url) | private | not declared | 2/7 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L813–L819` |
| `FlavorsTestV275.test_list_flavors_with_additional_filter` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L821–L823` |
| `FlavorsTestV275.test_list_detail_flavors_with_additional_filter` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L825–L827` |
| `FlavorsTestV275.test_list_flavor_detail_default_swap_value_old_version` | method | (self, mock_get) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L830–L837` |
| `FlavorsTestV275.test_show_flavor_default_swap_value_old_version` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L840–L845` |
| `FlavorsTestV275.test_list_flavor_detail_default_swap_value` | method | (self, mock_get) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L848–L855` |
| `FlavorsTestV275.test_show_flavor_default_swap_value` | method | (self, mock_get) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L858–L864` |
| `FlavorsTestV2102` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L867–L970` |
| `FlavorsTestV2102.microversion` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L868–L868` |
| `FlavorsTestV2102.omit_legacy_fields` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L869–L869` |
| `FlavorsTestV2102.test_list_flavors_with_name_filter_old_version` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L871–L875` |
| `FlavorsTestV2102.test_list_detail_flavors_with_name_filter_old_version` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L877–L881` |
| `FlavorsTestV2102.test_list_flavors_with_name_filter` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L883–L906` |
| `FlavorsTestV2102.test_list_detail_flavors_with_name_filter` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L908–L939` |
| `FlavorsTestV2102.test_list_detail_flavors_with_additional_filter_old_version` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L941–L943` |
| `FlavorsTestV2102.test_list_flavor_invalid_query_params` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L945–L952` |
| `FlavorsTestV2102.test_detail_flavor_invalid_query_params` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L954–L961` |
| `FlavorsTestV2102.test_show_flavor_invalid_query_params` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L963–L970` |
| `DisabledFlavorsWithRealDBTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L973–L1044` |
| `DisabledFlavorsWithRealDBTestV21.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L976–L987` |
| `DisabledFlavorsWithRealDBTestV21._create_disabled_flavor` | method | (self) | private | `flavor` (src/nova/tests/unit/api/openstack/compute/test_flavors.py:L997) | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L989–L997` |
| `DisabledFlavorsWithRealDBTestV21.test_index_should_not_list_disabled_flavors_to_user` | method | (self) | public | not declared | 3/9 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L999–L1010` |
| `DisabledFlavorsWithRealDBTestV21.test_index_should_list_disabled_flavors_to_admin` | method | (self) | public | not declared | 3/8 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L1012–L1022` |
| `DisabledFlavorsWithRealDBTestV21.test_show_should_include_disabled_flavor_for_user` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L1024–L1036` |
| `DisabledFlavorsWithRealDBTestV21.test_show_should_include_disabled_flavor_for_admin` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L1038–L1044` |
| `ParseIsPublicTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L1047–L1080` |
| `ParseIsPublicTestV21.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L1049–L1051` |
| `ParseIsPublicTestV21.assertPublic` | method | (self, expected, is_public) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L1053–L1055` |
| `ParseIsPublicTestV21.test_None` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L1057–L1058` |
| `ParseIsPublicTestV21.test_truthy` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L1060–L1065` |
| `ParseIsPublicTestV21.test_falsey` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L1067–L1072` |
| `ParseIsPublicTestV21.test_string_none` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L1074–L1076` |
| `ParseIsPublicTestV21.test_other` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavors.py:L1078–L1080` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_flavors.py:L16)
- `urllib`: imports `parse as urlparse` (src/nova/tests/unit/api/openstack/compute/test_flavors.py:L17)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_flavors.py:L19)
- `nova.api.openstack`: imports `common` (src/nova/tests/unit/api/openstack/compute/test_flavors.py:L21)
- `nova.api.openstack.compute`: imports `flavors` (src/nova/tests/unit/api/openstack/compute/test_flavors.py:L22)
- `nova`: imports `context` (src/nova/tests/unit/api/openstack/compute/test_flavors.py:L23)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_flavors.py:L24)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_flavors.py:L25)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_flavors.py:L26)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_flavors.py:L27)
- `nova.tests.unit`: imports `matchers` (src/nova/tests/unit/api/openstack/compute/test_flavors.py:L28)

## Side Effects

- **network**: from nova.api.openstack.compute import flavors (src/nova/tests/unit/api/openstack/compute/test_flavors.py:L22)
- **network**: self.stub_out('nova.api.openstack.common.get_limit_and_marker', (src/nova/tests/unit/api/openstack/compute/test_flavors.py:L307)
- **global-mutation**: FLAVOR_WITH_NO_SWAP = objects.Flavor( (src/nova/tests/unit/api/openstack/compute/test_flavors.py:L770)

## Security Surface

- **sink** (`db-write`): expected_resp[0].update(expected) (src/nova/tests/unit/api/openstack/compute/test_flavors.py:L548)
- **sink** (`db-write`): expected_resp[0].update(expected) (src/nova/tests/unit/api/openstack/compute/test_flavors.py:L613)

