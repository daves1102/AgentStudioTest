# src/nova/tests/unit/policies/test_snapshots.py

## Overview

This file implements the `test_snapshots` module, defining 2 classs, 2 fields, 7 methods, 1 variable, 7 imports, 1 side effect.

Lines: total 165, code 126, comment 20, blank 19

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_snapshot` | variable | — | exported | not declared | — | `src/nova/tests/unit/policies/test_snapshots.py:L24–L32` |
| `SnapshotsPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_snapshots.py:L35–L114` |
| `SnapshotsPolicyTest.setUp` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/policies/test_snapshots.py:L44–L74` |
| `SnapshotsPolicyTest.test_list_snapshots_policy` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_snapshots.py:L77–L82` |
| `SnapshotsPolicyTest.test_list_detail_snapshots_policy` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_snapshots.py:L85–L90` |
| `SnapshotsPolicyTest.test_show_snapshot_policy` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_snapshots.py:L93–L98` |
| `SnapshotsPolicyTest.test_create_snapshot_policy` | method | (self, mock_create) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_snapshots.py:L101–L107` |
| `SnapshotsPolicyTest.test_delete_snapshot_policy` | method | (self, mock_delete) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_snapshots.py:L110–L114` |
| `SnapshotsNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_snapshots.py:L117–L165` |
| `SnapshotsNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_snapshots.py:L123–L123` |
| `SnapshotsNoLegacyPolicyTest.rules_without_deprecation` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_snapshots.py:L124–L145` |
| `SnapshotsNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/policies/test_snapshots.py:L147–L165` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_snapshots.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_snapshots.py:L15)
- `nova.api.openstack.compute`: imports `snapshots` (src/nova/tests/unit/policies/test_snapshots.py:L17)
- `nova.policies`: imports `base as base_policy` (src/nova/tests/unit/policies/test_snapshots.py:L18)
- `nova.policies`: imports `volumes as v_policies` (src/nova/tests/unit/policies/test_snapshots.py:L19)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_snapshots.py:L20)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_snapshots.py:L21)

## Side Effects

- **network**: from nova.api.openstack.compute import snapshots (src/nova/tests/unit/policies/test_snapshots.py:L17)

