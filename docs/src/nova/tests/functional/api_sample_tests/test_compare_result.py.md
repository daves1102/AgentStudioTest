# src/nova/tests/functional/api_sample_tests/test_compare_result.py

## Overview

This file implements the `test_compare_result` module, defining 1 class, 23 methods, 5 imports, 6 side effects, 1 security surface entry.

Lines: total 475, code 379, comment 34, blank 62

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestCompareResult` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_compare_result.py:L24–L475` |
| `TestCompareResult.getApiSampleTestBaseHelper` | method | (self) | public | `ast_instance` (src/nova/tests/functional/api_sample_tests/test_compare_result.py:L53) | 1/7 | `src/nova/tests/functional/api_sample_tests/test_compare_result.py:L37–L53` |
| `TestCompareResult.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_compare_result.py:L55–L57` |
| `TestCompareResult.test_bare_strings_match` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/api_sample_tests/test_compare_result.py:L59–L74` |
| `TestCompareResult.test_bare_strings_no_match` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_compare_result.py:L76–L85` |
| `TestCompareResult.test_template_strings_match` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/api_sample_tests/test_compare_result.py:L87–L99` |
| `TestCompareResult.test_template_strings_no_match` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_compare_result.py:L101–L110` |
| `TestCompareResult.test_bare_int_match` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/api_sample_tests/test_compare_result.py:L115–L126` |
| `TestCompareResult.test_bare_int_no_match` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_compare_result.py:L128–L137` |
| `TestCompareResult.test_template_int_match` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/api_sample_tests/test_compare_result.py:L140–L153` |
| `TestCompareResult.test_template_int_no_match` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_compare_result.py:L155–L164` |
| `TestCompareResult.test_template_int_value` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_compare_result.py:L166–L177` |
| `TestCompareResult.test_dict_match` | method | (self) | public | not declared | 1/20 | `src/nova/tests/functional/api_sample_tests/test_compare_result.py:L180–L202` |
| `TestCompareResult.test_dict_no_match_value` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/api_sample_tests/test_compare_result.py:L204–L222` |
| `TestCompareResult.test_dict_no_match_extra_key` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/api_sample_tests/test_compare_result.py:L224–L243` |
| `TestCompareResult.test_dict_result_type_mismatch` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/api_sample_tests/test_compare_result.py:L245–L260` |
| `TestCompareResult.test_list_match` | method | (self) | public | not declared | 1/43 | `src/nova/tests/functional/api_sample_tests/test_compare_result.py:L263–L308` |
| `TestCompareResult.test_list_match_extra_item_result` | method | (self) | public | not declared | 1/37 | `src/nova/tests/functional/api_sample_tests/test_compare_result.py:L310–L348` |
| `TestCompareResult.test_list_match_extra_item_template` | method | (self) | public | not declared | 1/37 | `src/nova/tests/functional/api_sample_tests/test_compare_result.py:L350–L388` |
| `TestCompareResult.test_list_no_match` | method | (self) | public | not declared | 1/32 | `src/nova/tests/functional/api_sample_tests/test_compare_result.py:L390–L425` |
| `TestCompareResult.test_none_match` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/api_sample_tests/test_compare_result.py:L427–L442` |
| `TestCompareResult.test_none_no_match` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_compare_result.py:L444–L453` |
| `TestCompareResult.test_none_result_no_match` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_compare_result.py:L455–L464` |
| `TestCompareResult.test_template_no_subs_key` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_compare_result.py:L466–L475` |

## Dependencies

- `import copy` (src/nova/tests/functional/api_sample_tests/test_compare_result.py:L15)
- `unittest`: imports `mock` (src/nova/tests/functional/api_sample_tests/test_compare_result.py:L16)
- `import testtools` (src/nova/tests/functional/api_sample_tests/test_compare_result.py:L18)
- `nova`: imports `test` (src/nova/tests/functional/api_sample_tests/test_compare_result.py:L20)
- `nova.tests.functional`: imports `api_samples_test_base` (src/nova/tests/functional/api_sample_tests/test_compare_result.py:L21)

## Side Effects

- **network**: (u'http://openstack.example.com/v2.1/%s/server/' (src/nova/tests/functional/api_sample_tests/test_compare_result.py:L283)
- **network**: (u'http://openstack.example.com/%s/servers/' (src/nova/tests/functional/api_sample_tests/test_compare_result.py:L291)
- **network**: (u'http://openstack.example.com/v2.1/openstack/server/' (src/nova/tests/functional/api_sample_tests/test_compare_result.py:L330)
- **network**: (u'http://openstack.example.com/openstack/servers/' (src/nova/tests/functional/api_sample_tests/test_compare_result.py:L336)
- **network**: (u'http://openstack.example.com/v2.1/openstack/server/' (src/nova/tests/functional/api_sample_tests/test_compare_result.py:L371)
- **network**: (u'http://openstack.example.com/openstack/servers/' (src/nova/tests/functional/api_sample_tests/test_compare_result.py:L377)

## Security Surface

- **sink** (`db-write`): local_subs.update({'int_test': 42}) (src/nova/tests/functional/api_sample_tests/test_compare_result.py:L174)

