# src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py

## Overview

This file implements the `test_legacy_v2_compatible_wrapper` module, defining 2 classs, 6 functions, 14 methods, 7 imports, 6 side effects, 7 security surface entries.

Lines: total 205, code 159, comment 14, blank 32

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestLegacyV2CompatibleWrapper` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L26–L110` |
| `TestLegacyV2CompatibleWrapper.test_filter_out_microversions_request_header` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L28–L39` |
| `TestLegacyV2CompatibleWrapper.test_filter_out_microversions_request_header.fake_app` | function | (req, *args, **kwargs) | public | `resp` (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L36) | — | `src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L33–L36` |
| `TestLegacyV2CompatibleWrapper.test_filter_out_microversions_response_header` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L41–L53` |
| `TestLegacyV2CompatibleWrapper.test_filter_out_microversions_response_header.fake_app` | function | (req, *args, **kwargs) | public | `resp` (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L49) | — | `src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L45–L49` |
| `TestLegacyV2CompatibleWrapper.test_filter_out_microversions_vary_header` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L55–L67` |
| `TestLegacyV2CompatibleWrapper.test_filter_out_microversions_vary_header.fake_app` | function | (req, *args, **kwargs) | public | `resp` (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L63) | — | `src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L59–L63` |
| `TestLegacyV2CompatibleWrapper.test_filter_out_microversions_vary_header_with_multi_fields` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L69–L84` |
| `TestLegacyV2CompatibleWrapper.test_filter_out_microversions_vary_header_with_multi_fields.fake_app` | function | (req, *args, **kwargs) | public | `resp` (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L79) | — | `src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L73–L79` |
| `TestLegacyV2CompatibleWrapper.test_filter_out_microversions_no_vary_header` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L86–L97` |
| `TestLegacyV2CompatibleWrapper.test_filter_out_microversions_no_vary_header.fake_app` | function | (req, *args, **kwargs) | public | `resp` (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L93) | — | `src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L90–L93` |
| `TestLegacyV2CompatibleWrapper.test_legacy_env_variable` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L99–L110` |
| `TestLegacyV2CompatibleWrapper.test_legacy_env_variable.fake_app` | function | (req, *args, **kwargs) | public | `resp` (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L107) | — | `src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L103–L107` |
| `TestSoftAdditionalPropertiesValidation` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L113–L205` |
| `TestSoftAdditionalPropertiesValidation.setUp` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L115–L142` |
| `TestSoftAdditionalPropertiesValidation.test_strip_extra_properties_out_without_extra_props` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L144–L150` |
| `TestSoftAdditionalPropertiesValidation.test_strip_extra_properties_out_with_extra_props` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L152–L158` |
| `TestSoftAdditionalPropertiesValidation.test_not_strip_extra_properties_out_with_allow_extra_props` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L160–L166` |
| `TestSoftAdditionalPropertiesValidation.test_pattern_properties_with_invalid_property_and_allow_extra_props` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L168–L175` |
| `TestSoftAdditionalPropertiesValidation.test_pattern_properties` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L177–L183` |
| `TestSoftAdditionalPropertiesValidation.test_pattern_properties_with_invalid_property` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L185–L194` |
| `TestSoftAdditionalPropertiesValidation.test_pattern_properties_with_multiple_invalid_properties` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L196–L205` |

## Dependencies

- `jsonschema`: imports `exceptions as jsonschema_exc` (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L16)
- `import webob` (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L17)
- `import webob.dec` (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L18)
- `import nova.api.openstack` (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L20)
- `nova.api.openstack`: imports `wsgi` (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L21)
- `nova.api.validation`: imports `validators` (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L22)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L23)

## Side Effects

- **network**: wrapper = nova.api.openstack.LegacyV2CompatibleWrapper(fake_app) (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L38)
- **network**: wrapper = nova.api.openstack.LegacyV2CompatibleWrapper(fake_app) (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L51)
- **network**: wrapper = nova.api.openstack.LegacyV2CompatibleWrapper(fake_app) (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L65)
- **network**: wrapper = nova.api.openstack.LegacyV2CompatibleWrapper(fake_app) (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L81)
- **network**: wrapper = nova.api.openstack.LegacyV2CompatibleWrapper(fake_app) (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L95)
- **network**: wrapper = nova.api.openstack.LegacyV2CompatibleWrapper(fake_app) (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L109)

## Security Surface

- **entry-point** (`http-param`): req = webob.Request.blank('/') (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L29)
- **entry-point** (`http-param`): req = webob.Request.blank('/') (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L42)
- **entry-point** (`http-param`): req = webob.Request.blank('/') (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L56)
- **entry-point** (`http-param`): req = webob.Request.blank('/') (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L70)
- **entry-point** (`http-param`): req = webob.Request.blank('/') (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L87)
- **entry-point** (`http-param`): req = webob.Request.blank('/') (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L100)
- **entry-point** (`http-param`): @webob.dec.wsgify(RequestClass=wsgi.Request) (src/nova/tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py:L102)

