# src/nova/tests/unit/api/openstack/compute/test_aggregates.py

## Overview

This file implements the `test_aggregates` module, defining 2 classs, 6 constants, 5 fields, 7 functions, 86 methods, 12 imports, 7 side effects, 18 security surface entries.

Lines: total 799, code 645, comment 25, blank 129

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_make_agg_obj` | function | (agg_dict) | unexported | `objects.Aggregate(**_aggregate)` (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L47) | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L34–L47` |
| `_make_agg_list` | function | (agg_list) | unexported | `objects.AggregateList(objects=[_make_agg_obj(a) for a in agg_list])` (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L51) | 2/2 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L50–L51` |
| `_transform_aggregate_az` | function | (agg_dict) | unexported | `agg_dict` (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L64) | 2/7 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L54–L64` |
| `_transform_aggregate_list_azs` | function | (agg_list) | unexported | not declared | 2/3 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L67–L69` |
| `AGGREGATE_LIST` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L72–L80` |
| `AGGREGATE_LIST` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L81–L81` |
| `AGGREGATE` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L83–L88` |
| `AGGREGATE` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L89–L89` |
| `FORMATTED_AGGREGATE` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L91–L93` |
| `FORMATTED_AGGREGATE` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L94–L94` |
| `FakeRequest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L97–L98` |
| `FakeRequest.environ` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L98–L98` |
| `AggregateTestCaseV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L101–L799` |
| `AggregateTestCaseV21.add_host` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L104–L104` |
| `AggregateTestCaseV21.remove_host` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L105–L105` |
| `AggregateTestCaseV21.set_metadata` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L106–L106` |
| `AggregateTestCaseV21.bad_request` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L107–L107` |
| `AggregateTestCaseV21.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L109–L115` |
| `AggregateTestCaseV21.test_index` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L117–L128` |
| `AggregateTestCaseV21.test_index._list_aggregates` | function | (context) | private | `AGGREGATE_LIST` (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L121) | — | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L118–L121` |
| `AggregateTestCaseV21.test_index_invalid_query_params` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L130–L137` |
| `AggregateTestCaseV21.test_create` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L139–L147` |
| `AggregateTestCaseV21.test_create_with_duplicate_aggregate_name` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L149–L156` |
| `AggregateTestCaseV21.test_create_with_unmigrated_aggregates` | method | (self, mock_create_aggregate) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L159–L167` |
| `AggregateTestCaseV21.test_create_with_incorrect_availability_zone` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L169–L181` |
| `AggregateTestCaseV21.test_create_with_no_aggregate` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L183–L187` |
| `AggregateTestCaseV21.test_create_with_no_name` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L189–L193` |
| `AggregateTestCaseV21.test_create_name_with_leading_trailing_spaces` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L195–L199` |
| `AggregateTestCaseV21.test_create_name_with_leading_trailing_spaces_compat_mode` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L201–L214` |
| `AggregateTestCaseV21.test_create_name_with_leading_trailing_spaces_compat_mode.fake_mock_aggs` | function | (context, name, az) | public | `AGGREGATE` (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L205) | — | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L203–L205` |
| `AggregateTestCaseV21.test_create_with_no_availability_zone` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L216–L224` |
| `AggregateTestCaseV21.test_create_with_null_name` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L226–L230` |
| `AggregateTestCaseV21.test_create_with_name_too_long` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L232–L236` |
| `AggregateTestCaseV21.test_create_with_availability_zone_too_long` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L238–L242` |
| `AggregateTestCaseV21.test_create_with_availability_zone_invalid` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L244–L248` |
| `AggregateTestCaseV21.test_create_availability_zone_with_leading_trailing_spaces` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L250–L254` |
| `AggregateTestCaseV21.test_create_availability_zone_with_leading_trailing_spaces_compat_mode` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L256–L270` |
| `AggregateTestCaseV21.test_create_availability_zone_with_leading_trailing_spaces_compat_mode.fake_mock_aggs` | function | (context, name, az) | public | `AGGREGATE` (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L261) | — | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L259–L261` |
| `AggregateTestCaseV21.test_create_with_empty_availability_zone` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L272–L276` |
| `AggregateTestCaseV21.test_create_with_none_availability_zone` | method | (self, mock_create_agg) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L279–L286` |
| `AggregateTestCaseV21.test_create_with_extra_invalid_arg` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L288–L292` |
| `AggregateTestCaseV21.test_show` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L294–L300` |
| `AggregateTestCaseV21.test_show_invalid_query_params` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L302–L309` |
| `AggregateTestCaseV21.test_show_with_bad_aggregate` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L311–L317` |
| `AggregateTestCaseV21.test_show_with_invalid_id` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L319–L321` |
| `AggregateTestCaseV21.test_update` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L323–L333` |
| `AggregateTestCaseV21.test_update_with_only_name` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L335–L344` |
| `AggregateTestCaseV21.test_update_with_only_availability_zone` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L346–L355` |
| `AggregateTestCaseV21.test_update_with_no_updates` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L357–L360` |
| `AggregateTestCaseV21.test_update_with_no_update_key` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L362–L365` |
| `AggregateTestCaseV21.test_update_with_wrong_updates` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L367–L371` |
| `AggregateTestCaseV21.test_update_with_null_name` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L373–L376` |
| `AggregateTestCaseV21.test_update_with_name_too_long` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L378–L381` |
| `AggregateTestCaseV21.test_update_with_availability_zone_too_long` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L383–L386` |
| `AggregateTestCaseV21.test_update_with_availability_zone_invalid` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L388–L391` |
| `AggregateTestCaseV21.test_update_with_empty_availability_zone` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L393–L396` |
| `AggregateTestCaseV21.test_update_with_none_availability_zone` | method | (self, mock_update_agg) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L399–L408` |
| `AggregateTestCaseV21.test_update_with_bad_aggregate` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L410–L419` |
| `AggregateTestCaseV21.test_update_with_invalid_id` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L421–L424` |
| `AggregateTestCaseV21.test_update_with_duplicated_name` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L426–L435` |
| `AggregateTestCaseV21.test_invalid_action` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L437–L440` |
| `AggregateTestCaseV21.test_update_with_invalid_action` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L442–L448` |
| `AggregateTestCaseV21.test_add_host` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L450–L459` |
| `AggregateTestCaseV21.test_add_host_with_already_added_host` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L461–L469` |
| `AggregateTestCaseV21.test_add_host_with_bad_aggregate` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L471–L480` |
| `AggregateTestCaseV21.test_add_host_with_invalid_id` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L482–L485` |
| `AggregateTestCaseV21.test_add_host_with_bad_host` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L487–L494` |
| `AggregateTestCaseV21.test_add_host_with_missing_host` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L496–L498` |
| `AggregateTestCaseV21.test_add_host_with_invalid_format_host` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L500–L502` |
| `AggregateTestCaseV21.test_add_host_with_invalid_name_host` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L504–L506` |
| `AggregateTestCaseV21.test_add_host_with_multiple_hosts` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L508–L510` |
| `AggregateTestCaseV21.test_add_host_raises_key_error` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L512–L518` |
| `AggregateTestCaseV21.test_add_host_with_invalid_request` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L520–L522` |
| `AggregateTestCaseV21.test_add_host_with_non_string` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L524–L526` |
| `AggregateTestCaseV21.test_remove_host` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L528–L535` |
| `AggregateTestCaseV21.test_remove_host_with_bad_aggregate` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L537–L547` |
| `AggregateTestCaseV21.test_remove_host_with_invalid_id` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L549–L552` |
| `AggregateTestCaseV21.test_remove_host_with_host_not_in_aggregate` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L554–L563` |
| `AggregateTestCaseV21.test_remove_host_with_bad_host` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L565–L575` |
| `AggregateTestCaseV21.test_remove_host_with_missing_host` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L577–L579` |
| `AggregateTestCaseV21.test_remove_host_with_multiple_hosts` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L581–L584` |
| `AggregateTestCaseV21.test_remove_host_with_extra_param` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L586–L589` |
| `AggregateTestCaseV21.test_remove_host_with_invalid_request` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L591–L594` |
| `AggregateTestCaseV21.test_remove_host_with_missing_host_empty` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L596–L599` |
| `AggregateTestCaseV21.test_remove_host_resource_provider_update_conflict` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L601–L614` |
| `AggregateTestCaseV21.test_set_metadata` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L616–L625` |
| `AggregateTestCaseV21.test_set_metadata_delete` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L627–L638` |
| `AggregateTestCaseV21.test_set_metadata_with_bad_aggregate` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L640–L650` |
| `AggregateTestCaseV21.test_set_metadata_with_invalid_id` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L652–L655` |
| `AggregateTestCaseV21.test_set_metadata_with_missing_metadata` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L657–L660` |
| `AggregateTestCaseV21.test_set_metadata_with_extra_params` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L662–L665` |
| `AggregateTestCaseV21.test_set_metadata_without_dict` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L667–L670` |
| `AggregateTestCaseV21.test_set_metadata_with_empty_key` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L672–L675` |
| `AggregateTestCaseV21.test_set_metadata_with_key_too_long` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L677–L680` |
| `AggregateTestCaseV21.test_set_metadata_with_value_too_long` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L682–L685` |
| `AggregateTestCaseV21.test_set_metadata_with_string` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L687–L690` |
| `AggregateTestCaseV21.test_set_metadata_case_sensitive` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L692–L703` |
| `AggregateTestCaseV21.test_delete_aggregate` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L705–L709` |
| `AggregateTestCaseV21.test_delete_aggregate_with_bad_aggregate` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L711–L718` |
| `AggregateTestCaseV21.test_delete_with_invalid_id` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L720–L722` |
| `AggregateTestCaseV21.test_delete_aggregate_with_host` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L724–L731` |
| `AggregateTestCaseV21.test_marshall_aggregate` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L733–L762` |
| `AggregateTestCaseV21._assert_agg_data` | method | (self, expected, actual) | private | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L764–L766` |
| `AggregateTestCaseV21.test_images_with_invalid_id` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L768–L774` |
| `AggregateTestCaseV21.test_images_with_duplicate_id` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L776–L783` |
| `AggregateTestCaseV21.test_images_with_disorder_id` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L785–L799` |

## Dependencies

- `import datetime` (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L18)
- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L19)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L21)
- `webob`: imports `exc` (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L22)
- `nova.api.openstack.compute`: imports `aggregates as aggregates_v21` (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L24)
- `nova.compute`: imports `api as compute_api` (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L25)
- `nova`: imports `context` (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L26)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L27)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L28)
- `nova.objects`: imports `base as obj_base` (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L29)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L30)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L31)

## Side Effects

- **network**: from nova.api.openstack.compute import aggregates as aggregates_v21 (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L24)
- **global-mutation**: AGGREGATE_LIST = [ (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L72)
- **global-mutation**: AGGREGATE_LIST = _make_agg_list(AGGREGATE_LIST) (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L81)
- **global-mutation**: AGGREGATE = { (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L83)
- **global-mutation**: AGGREGATE = _make_agg_obj(AGGREGATE) (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L89)
- **global-mutation**: FORMATTED_AGGREGATE = {"name": "aggregate1", (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L91)
- **global-mutation**: FORMATTED_AGGREGATE = _make_agg_obj(FORMATTED_AGGREGATE) (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L94)

## Security Surface

- **sink** (`db-write`): _aggregate.update(**agg_dict) (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L46)
- **sink** (`db-write`): result = self.controller.update(self.req, "1", body=body) (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L328)
- **sink** (`db-write`): result = self.controller.update(self.req, "1", body=body) (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L339)
- **sink** (`db-write`): result = self.controller.update(self.req, "1", body=body) (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L350)
- **sink** (`db-write`): self.assertRaises(self.bad_request, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L359)
- **sink** (`db-write`): self.assertRaises(self.bad_request, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L364)
- **sink** (`db-write`): self.assertRaises(self.bad_request, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L370)
- **sink** (`db-write`): self.assertRaises(self.bad_request, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L375)
- **sink** (`db-write`): self.assertRaises(self.bad_request, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L380)
- **sink** (`db-write`): self.assertRaises(self.bad_request, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L385)
- **sink** (`db-write`): self.assertRaises(self.bad_request, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L390)
- **sink** (`db-write`): self.assertRaises(self.bad_request, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L395)
- **sink** (`db-write`): result = self.controller.update(self.req, agg_id, body=body) (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L405)
- **sink** (`db-write`): self.assertRaises(exc.HTTPNotFound, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L416)
- **sink** (`db-write`): self.assertRaises(exc.HTTPBadRequest, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L423)
- **sink** (`db-write`): self.assertRaises(exc.HTTPConflict, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L432)
- **sink** (`db-write`): self.assertRaises(exc.HTTPBadRequest, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L447)
- **sink** (`db-write`): 'Error: A conflict was encountered attempting to update ' (src/nova/tests/unit/api/openstack/compute/test_aggregates.py:L613)

