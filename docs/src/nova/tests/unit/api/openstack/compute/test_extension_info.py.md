# src/nova/tests/unit/api/openstack/compute/test_extension_info.py

## Overview

This file implements the `test_extension_info` module, defining 1 class, 4 methods, 5 imports, 1 side effect.

Lines: total 49, code 28, comment 13, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ExtensionInfoV21Test` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_extension_info.py:L23–L49` |
| `ExtensionInfoV21Test.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_extension_info.py:L25–L27` |
| `ExtensionInfoV21Test.test_extension_info_index_invalid_query_params` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_extension_info.py:L29–L35` |
| `ExtensionInfoV21Test.test_extension_info_show_extension_not_present` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_extension_info.py:L37–L40` |
| `ExtensionInfoV21Test.test_extension_info_show_invalid_query_params` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_extension_info.py:L42–L49` |

## Dependencies

- `import webob` (src/nova/tests/unit/api/openstack/compute/test_extension_info.py:L15)
- `nova.api.openstack.compute`: imports `extension_info` (src/nova/tests/unit/api/openstack/compute/test_extension_info.py:L17)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_extension_info.py:L18)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_extension_info.py:L19)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_extension_info.py:L20)

## Side Effects

- **network**: from nova.api.openstack.compute import extension_info (src/nova/tests/unit/api/openstack/compute/test_extension_info.py:L17)

