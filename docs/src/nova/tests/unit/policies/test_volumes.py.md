# src/nova/tests/unit/policies/test_volumes.py

## Overview

This file implements the `test_volumes` module, defining 2 classs, 2 fields, 7 methods, 7 imports, 1 side effect.

Lines: total 178, code 141, comment 20, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `VolumesPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_volumes.py:L24–L127` |
| `VolumesPolicyTest.setUp` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/policies/test_volumes.py:L33–L64` |
| `VolumesPolicyTest.test_list_volumes_policy` | method | (self, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_volumes.py:L67–L71` |
| `VolumesPolicyTest.test_list_detail_volumes_policy` | method | (self, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_volumes.py:L74–L78` |
| `VolumesPolicyTest.test_show_volume_policy` | method | (self, mock_get) | public | not declared | 1/17 | `src/nova/tests/unit/policies/test_volumes.py:L81–L97` |
| `VolumesPolicyTest.test_create_volumes_policy` | method | (self, mock_create) | public | not declared | 1/21 | `src/nova/tests/unit/policies/test_volumes.py:L100–L120` |
| `VolumesPolicyTest.test_delete_volume_policy` | method | (self, mock_delete) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_volumes.py:L123–L127` |
| `VolumesNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_volumes.py:L130–L178` |
| `VolumesNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_volumes.py:L136–L136` |
| `VolumesNoLegacyPolicyTest.rules_without_deprecation` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_volumes.py:L137–L158` |
| `VolumesNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/policies/test_volumes.py:L160–L178` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_volumes.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_volumes.py:L15)
- `nova.api.openstack.compute`: imports `volumes` (src/nova/tests/unit/policies/test_volumes.py:L17)
- `nova.policies`: imports `base as base_policy` (src/nova/tests/unit/policies/test_volumes.py:L18)
- `nova.policies`: imports `volumes as v_policies` (src/nova/tests/unit/policies/test_volumes.py:L19)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_volumes.py:L20)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_volumes.py:L21)

## Side Effects

- **network**: from nova.api.openstack.compute import volumes (src/nova/tests/unit/policies/test_volumes.py:L17)

