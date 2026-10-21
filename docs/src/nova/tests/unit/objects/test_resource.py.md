# src/nova/tests/unit/objects/test_resource.py

## Overview

This file implements the `test_resource` module, defining 4 classs, 11 methods, 3 variables, 5 imports.

Lines: total 122, code 86, comment 12, blank 24

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_resources` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_resource.py:L22–L26` |
| `fake_vpmems` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_resource.py:L28–L34` |
| `fake_instance_extras` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_resource.py:L36–L38` |
| `TestResourceObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_resource.py:L41–L101` |
| `TestResourceObject._create_resource` | method | (self, metadata=None) | private | `fake_resource` (src/nova/tests/unit/objects/test_resource.py:L48) | 2/7 | `src/nova/tests/unit/objects/test_resource.py:L42–L48` |
| `TestResourceObject._test_set_malformed_resource_class` | method | (self, rc) | private | not declared | 2/9 | `src/nova/tests/unit/objects/test_resource.py:L50–L58` |
| `TestResourceObject._test_set_formed_resource_class` | method | (self, rc) | private | not declared | 1/4 | `src/nova/tests/unit/objects/test_resource.py:L60–L63` |
| `TestResourceObject.test_set_malformed_resource_classes` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/objects/test_resource.py:L65–L68` |
| `TestResourceObject.test_set_formed_resource_classes` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/objects/test_resource.py:L70–L73` |
| `TestResourceObject.test_equal_without_metadata` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_resource.py:L75–L82` |
| `TestResourceObject.test_not_equal_without_matadata` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_resource.py:L84–L85` |
| `TestResourceObject.test_equal_with_vpmem_metadata` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_resource.py:L87–L90` |
| `TestResourceObject.test_not_equal_with_vpmem_metadata` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_resource.py:L92–L95` |
| `TestResourceObject.test_not_equal_with_and_without_metadata` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_resource.py:L97–L101` |
| `_TestResourceListObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_resource.py:L104–L112` |
| `_TestResourceListObject.test_get_by_instance_uuid` | method | (self, mock_get) | public | not declared | 2/7 | `src/nova/tests/unit/objects/test_resource.py:L106–L112` |
| `TestResourceListObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_resource.py:L115–L117` |
| `TestRemoteResourceListObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_resource.py:L120–L122` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_resource.py:L13)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/objects/test_resource.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/objects/test_resource.py:L16)
- `nova.objects`: imports `resource` (src/nova/tests/unit/objects/test_resource.py:L18)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_resource.py:L19)

