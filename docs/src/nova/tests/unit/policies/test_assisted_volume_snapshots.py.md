# src/nova/tests/unit/policies/test_assisted_volume_snapshots.py

## Overview

This file implements the `test_assisted_volume_snapshots` module, defining 2 classs, 1 field, 3 methods, 7 imports, 1 side effect.

Lines: total 79, code 54, comment 13, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `AssistedVolumeSnapshotPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_assisted_volume_snapshots.py:L24–L70` |
| `AssistedVolumeSnapshotPolicyTest.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_assisted_volume_snapshots.py:L32–L40` |
| `AssistedVolumeSnapshotPolicyTest.test_assisted_create_policy` | method | (self, mock_create) | public | not declared | 1/15 | `src/nova/tests/unit/policies/test_assisted_volume_snapshots.py:L43–L57` |
| `AssistedVolumeSnapshotPolicyTest.test_assisted_delete_policy` | method | (self, mock_delete) | public | not declared | 1/11 | `src/nova/tests/unit/policies/test_assisted_volume_snapshots.py:L60–L70` |
| `AssistedSnapshotNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_assisted_volume_snapshots.py:L73–L79` |
| `AssistedSnapshotNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_assisted_volume_snapshots.py:L79–L79` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_assisted_volume_snapshots.py:L13)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/policies/test_assisted_volume_snapshots.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_assisted_volume_snapshots.py:L16)
- `import urllib` (src/nova/tests/unit/policies/test_assisted_volume_snapshots.py:L17)
- `nova.api.openstack.compute`: imports `assisted_volume_snapshots as snapshots` (src/nova/tests/unit/policies/test_assisted_volume_snapshots.py:L19)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_assisted_volume_snapshots.py:L20)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_assisted_volume_snapshots.py:L21)

## Side Effects

- **network**: from nova.api.openstack.compute import assisted_volume_snapshots as snapshots (src/nova/tests/unit/policies/test_assisted_volume_snapshots.py:L19)

