# src/nova/tests/functional/test_legacy_v2_compatible_wrapper.py

## Overview

This file implements the `test_legacy_v2_compatible_wrapper` module, defining 1 class, 1 field, 6 methods, 4 imports, 1 side effect.

Lines: total 83, code 59, comment 14, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LegacyV2CompatibleTestBase` | class | — | exported | not declared | — | `src/nova/tests/functional/test_legacy_v2_compatible_wrapper.py:L22–L83` |
| `LegacyV2CompatibleTestBase.api_major_version` | field | — | public | not declared | — | `src/nova/tests/functional/test_legacy_v2_compatible_wrapper.py:L23–L23` |
| `LegacyV2CompatibleTestBase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_legacy_v2_compatible_wrapper.py:L25–L27` |
| `LegacyV2CompatibleTestBase._check_api_endpoint` | method | (self) | private | not declared | 3/12 | `src/nova/tests/functional/test_legacy_v2_compatible_wrapper.py:L29–L41` |
| `LegacyV2CompatibleTestBase.test_request_with_microversion_headers` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_legacy_v2_compatible_wrapper.py:L43–L51` |
| `LegacyV2CompatibleTestBase.test_request_without_additional_properties_check` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_legacy_v2_compatible_wrapper.py:L53–L61` |
| `LegacyV2CompatibleTestBase.test_request_with_pattern_properties_check` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_legacy_v2_compatible_wrapper.py:L63–L70` |
| `LegacyV2CompatibleTestBase.test_request_with_pattern_properties_with_avoid_metadata` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/test_legacy_v2_compatible_wrapper.py:L72–L83` |

## Dependencies

- `nova.api`: imports `openstack` (src/nova/tests/functional/test_legacy_v2_compatible_wrapper.py:L16)
- `nova.api.openstack`: imports `wsgi` (src/nova/tests/functional/test_legacy_v2_compatible_wrapper.py:L17)
- `nova.tests.functional.api`: imports `client` (src/nova/tests/functional/test_legacy_v2_compatible_wrapper.py:L18)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_legacy_v2_compatible_wrapper.py:L19)

## Side Effects

- **network**: app.application, openstack.LegacyV2CompatibleWrapper, (src/nova/tests/functional/test_legacy_v2_compatible_wrapper.py:L34)

