# src/nova/tests/unit/test_api_validation.py

## Overview

This file implements the `test_api_validation` module, defining 29 classs, 27 fields, 4 functions, 73 methods, 11 imports.

Lines: total 1085, code 831, comment 40, blank 214

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FakeQueryParametersController` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L30–L46` |
| `FakeQueryParametersController.schema` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L32–L42` |
| `FakeQueryParametersController.get` | method | (self, req) | public | `list(set(req.GET.keys()))` (src/nova/tests/unit/test_api_validation.py:L46) | 1/2 | `src/nova/tests/unit/test_api_validation.py:L45–L46` |
| `FakeRequest` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L49–L55` |
| `FakeRequest.api_version_request` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L50–L50` |
| `FakeRequest.environ` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L51–L51` |
| `FakeRequest.legacy_v2` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L52–L52` |
| `FakeRequest.is_legacy_v2` | method | (self) | public | `self.legacy_v2` (src/nova/tests/unit/test_api_validation.py:L55) | 1/2 | `src/nova/tests/unit/test_api_validation.py:L54–L55` |
| `ValidationRegex` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L58–L104` |
| `ValidationRegex.test_build_regex_range` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/test_api_validation.py:L59–L104` |
| `ValidationRegex.test_build_regex_range._get_all_chars` | function | — | private | not declared | — | `src/nova/tests/unit/test_api_validation.py:L63–L65` |
| `APIValidationTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L107–L138` |
| `APIValidationTestCase.post_schema` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L109–L109` |
| `APIValidationTestCase.setUp` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/test_api_validation.py:L111–L120` |
| `APIValidationTestCase.setUp.post` | function | (req, body) | public | `'Validation succeeded.'` (src/nova/tests/unit/test_api_validation.py:L118) | — | `src/nova/tests/unit/test_api_validation.py:L117–L118` |
| `APIValidationTestCase.check_validation_error` | method | (self, method, body, expected_detail, req=None) | public | not declared | 6/17 | `src/nova/tests/unit/test_api_validation.py:L122–L138` |
| `FormatCheckerTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L141–L163` |
| `FormatCheckerTestCase._format_checker` | method | (self, format, value, error_message) | private | not declared | 1/7 | `src/nova/tests/unit/test_api_validation.py:L143–L149` |
| `FormatCheckerTestCase.test_format_checker_failed_with_non_string_name` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_api_validation.py:L151–L156` |
| `FormatCheckerTestCase.test_format_checker_failed_name_with_leading_trailing_spaces` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_api_validation.py:L158–L163` |
| `MicroversionsSchemaTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L166–L243` |
| `MicroversionsSchemaTestCase.setUp` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/test_api_validation.py:L168–L187` |
| `MicroversionsSchemaTestCase.setUp.post` | function | (req, body) | public | `'Validation succeeded.'` (src/nova/tests/unit/test_api_validation.py:L185) | — | `src/nova/tests/unit/test_api_validation.py:L184–L185` |
| `MicroversionsSchemaTestCase.test_validate_v2compatible_request` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_api_validation.py:L189–L194` |
| `MicroversionsSchemaTestCase.test_validate_v2compatible_request_fails` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_api_validation.py:L196–L203` |
| `MicroversionsSchemaTestCase.test_validate_v21_request` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_api_validation.py:L205–L208` |
| `MicroversionsSchemaTestCase.test_validate_v21_request_fails` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_api_validation.py:L210–L216` |
| `MicroversionsSchemaTestCase.test_validate_v2compatible_request_with_none_min_version` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/test_api_validation.py:L218–L243` |
| `MicroversionsSchemaTestCase.test_validate_v2compatible_request_with_none_min_version.post` | function | (req, body) | public | `'Validation succeeded.'` (src/nova/tests/unit/test_api_validation.py:L231) | — | `src/nova/tests/unit/test_api_validation.py:L230–L231` |
| `QueryParamsSchemaTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L246–L311` |
| `QueryParamsSchemaTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_api_validation.py:L248–L250` |
| `QueryParamsSchemaTestCase.test_validate_request` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_api_validation.py:L252–L255` |
| `QueryParamsSchemaTestCase.test_validate_request_failed` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_api_validation.py:L257–L264` |
| `QueryParamsSchemaTestCase.test_validate_request_with_multiple_values` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_api_validation.py:L266–L271` |
| `QueryParamsSchemaTestCase.test_validate_request_with_multiple_values_fails` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_api_validation.py:L273–L277` |
| `QueryParamsSchemaTestCase.test_validate_request_unicode_decode_failure` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_api_validation.py:L279–L284` |
| `QueryParamsSchemaTestCase.test_strip_out_additional_properties` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_api_validation.py:L286–L292` |
| `QueryParamsSchemaTestCase.test_no_strip_out_additional_properties_when_not_match_version` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_api_validation.py:L294–L303` |
| `QueryParamsSchemaTestCase.test_strip_out_correct_pattern_retained` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_api_validation.py:L305–L311` |
| `RequiredDisableTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L314–L329` |
| `RequiredDisableTestCase.post_schema` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L316–L325` |
| `RequiredDisableTestCase.test_validate_required_disable` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_api_validation.py:L327–L329` |
| `RequiredEnableTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L332–L351` |
| `RequiredEnableTestCase.post_schema` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L334–L343` |
| `RequiredEnableTestCase.test_validate_required_enable` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_api_validation.py:L345–L346` |
| `RequiredEnableTestCase.test_validate_required_enable_fails` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_api_validation.py:L348–L351` |
| `AdditionalPropertiesEnableTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L354–L369` |
| `AdditionalPropertiesEnableTestCase.post_schema` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L356–L365` |
| `AdditionalPropertiesEnableTestCase.test_validate_additionalProperties_enable` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_api_validation.py:L367–L369` |
| `AdditionalPropertiesDisableTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L372–L391` |
| `AdditionalPropertiesDisableTestCase.post_schema` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L374–L383` |
| `AdditionalPropertiesDisableTestCase.test_validate_additionalProperties_disable` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_api_validation.py:L385–L386` |
| `AdditionalPropertiesDisableTestCase.test_validate_additionalProperties_disable_fails` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_api_validation.py:L388–L391` |
| `PatternPropertiesTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L394–L437` |
| `PatternPropertiesTestCase.post_schema` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L396–L403` |
| `PatternPropertiesTestCase.test_validate_patternProperties` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_api_validation.py:L405–L406` |
| `PatternPropertiesTestCase.test_validate_patternProperties_fails` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/test_api_validation.py:L408–L437` |
| `StringTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L440–L471` |
| `StringTestCase.post_schema` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L442–L450` |
| `StringTestCase.test_validate_string` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_api_validation.py:L452–L455` |
| `StringTestCase.test_validate_string_fails` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/test_api_validation.py:L457–L471` |
| `StringLengthTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L474–L505` |
| `StringLengthTestCase.post_schema` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L476–L486` |
| `StringLengthTestCase.test_validate_string_length` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_api_validation.py:L488–L490` |
| `StringLengthTestCase.test_validate_string_length_fails` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/test_api_validation.py:L492–L505` |
| `IntegerTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L508–L550` |
| `IntegerTestCase.post_schema` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L510–L519` |
| `IntegerTestCase.test_validate_integer` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_api_validation.py:L521–L524` |
| `IntegerTestCase.test_validate_integer_fails` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/test_api_validation.py:L526–L550` |
| `IntegerRangeTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L553–L592` |
| `IntegerRangeTestCase.post_schema` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L555–L566` |
| `IntegerRangeTestCase.test_validate_integer_range` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_api_validation.py:L568–L571` |
| `IntegerRangeTestCase.test_validate_integer_range_fails` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/test_api_validation.py:L573–L592` |
| `BooleanTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L595–L627` |
| `BooleanTestCase.post_schema` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L597–L603` |
| `BooleanTestCase.test_validate_boolean` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_api_validation.py:L605–L611` |
| `BooleanTestCase.test_validate_boolean_fails` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/test_api_validation.py:L613–L627` |
| `FQDNTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L630–L660` |
| `FQDNTestCase.post_schema` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L632–L638` |
| `FQDNTestCase.test_validate_fqdn` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_api_validation.py:L640–L644` |
| `FQDNTestCase.test_validate_fqdn_fails` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/test_api_validation.py:L646–L660` |
| `NameTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L663–L701` |
| `NameTestCase.post_schema` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L665–L671` |
| `NameTestCase.test_validate_name` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_api_validation.py:L673–L678` |
| `NameTestCase.test_validate_name_fails` | method | (self) | public | not declared | 3/18 | `src/nova/tests/unit/test_api_validation.py:L680–L701` |
| `NameWithLeadingTrailingSpacesTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L704–L745` |
| `NameWithLeadingTrailingSpacesTestCase.post_schema` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L706–L712` |
| `NameWithLeadingTrailingSpacesTestCase.test_validate_name` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_api_validation.py:L714–L724` |
| `NameWithLeadingTrailingSpacesTestCase.test_validate_name_fails` | method | (self) | public | not declared | 3/16 | `src/nova/tests/unit/test_api_validation.py:L726–L745` |
| `NameOrNoneTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L748–L779` |
| `NameOrNoneTestCase.post_schema` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L750–L756` |
| `NameOrNoneTestCase.test_valid` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_api_validation.py:L758–L760` |
| `NameOrNoneTestCase.test_validate_fails` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/test_api_validation.py:L762–L779` |
| `CidrFormatTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L782–L823` |
| `CidrFormatTestCase.post_schema` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L784–L793` |
| `CidrFormatTestCase.test_validate_cidr` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_api_validation.py:L795–L796` |
| `CidrFormatTestCase.test_validate_cidr_null` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_api_validation.py:L798–L799` |
| `CidrFormatTestCase.test_validate_cidr_fails` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/test_api_validation.py:L801–L823` |
| `DatetimeTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L826–L861` |
| `DatetimeTestCase.post_schema` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L828–L837` |
| `DatetimeTestCase.test_validate_datetime` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_api_validation.py:L839–L840` |
| `DatetimeTestCase.test_validate_datetime_null` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_api_validation.py:L842–L843` |
| `DatetimeTestCase.test_validate_datetime_fails` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/test_api_validation.py:L845–L861` |
| `UuidTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L864–L903` |
| `UuidTestCase.post_schema` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L866–L875` |
| `UuidTestCase.test_validate_uuid` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_api_validation.py:L877–L881` |
| `UuidTestCase.test_validate_uuid_null` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_api_validation.py:L883–L884` |
| `UuidTestCase.test_validate_uuid_fails` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/test_api_validation.py:L886–L903` |
| `UriTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L906–L955` |
| `UriTestCase.post_schema` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L908–L917` |
| `UriTestCase.test_validate_uri` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_api_validation.py:L919–L925` |
| `UriTestCase.test_validate_uri_null` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_api_validation.py:L927–L928` |
| `UriTestCase.test_validate_uri_fails` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/test_api_validation.py:L930–L955` |
| `Ipv4TestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L958–L993` |
| `Ipv4TestCase.post_schema` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L960–L969` |
| `Ipv4TestCase.test_validate_ipv4` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_api_validation.py:L971–L972` |
| `Ipv4TestCase.test_validate_ipv4_null` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_api_validation.py:L974–L975` |
| `Ipv4TestCase.test_validate_ipv4_fails` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/test_api_validation.py:L977–L993` |
| `Ipv6TestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L996–L1029` |
| `Ipv6TestCase.post_schema` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L998–L1007` |
| `Ipv6TestCase.test_validate_ipv6` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_api_validation.py:L1009–L1010` |
| `Ipv6TestCase.test_validate_ipv6_null` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_api_validation.py:L1012–L1013` |
| `Ipv6TestCase.test_validate_ipv6_fails` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/test_api_validation.py:L1015–L1029` |
| `Base64TestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L1032–L1057` |
| `Base64TestCase.post_schema` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L1034–L1043` |
| `Base64TestCase.test_validate_base64` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_api_validation.py:L1045–L1047` |
| `Base64TestCase.test_validate_base64_null` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_api_validation.py:L1049–L1050` |
| `Base64TestCase.test_validate_base64_fails` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_api_validation.py:L1052–L1057` |
| `RegexFormatTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_api_validation.py:L1060–L1085` |
| `RegexFormatTestCase.post_schema` | field | — | public | not declared | — | `src/nova/tests/unit/test_api_validation.py:L1062–L1071` |
| `RegexFormatTestCase.test_validate_regex` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_api_validation.py:L1073–L1074` |
| `RegexFormatTestCase.test_validate_regex_null` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_api_validation.py:L1076–L1077` |
| `RegexFormatTestCase.test_validate_regex_fails` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_api_validation.py:L1079–L1085` |

## Dependencies

- `import copy` (src/nova/tests/unit/test_api_validation.py:L15)
- `import re` (src/nova/tests/unit/test_api_validation.py:L16)
- `import fixtures` (src/nova/tests/unit/test_api_validation.py:L18)
- `jsonschema`: imports `exceptions as jsonschema_exc` (src/nova/tests/unit/test_api_validation.py:L19)
- `nova.api.openstack`: imports `api_version_request as api_version` (src/nova/tests/unit/test_api_validation.py:L21)
- `nova.api`: imports `validation` (src/nova/tests/unit/test_api_validation.py:L22)
- `nova.api.validation`: imports `parameter_types` (src/nova/tests/unit/test_api_validation.py:L23)
- `nova.api.validation`: imports `validators` (src/nova/tests/unit/test_api_validation.py:L24)
- `nova`: imports `exception` (src/nova/tests/unit/test_api_validation.py:L25)
- `nova`: imports `test` (src/nova/tests/unit/test_api_validation.py:L26)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/test_api_validation.py:L27)

