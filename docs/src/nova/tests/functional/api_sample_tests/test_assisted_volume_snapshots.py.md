# src/nova/tests/functional/api_sample_tests/test_assisted_volume_snapshots.py

## Overview

This file implements the `test_assisted_volume_snapshots` module, defining 1 class, 1 constant, 1 field, 2 methods, 2 imports, 1 side effect.

Lines: total 53, code 30, comment 15, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `AssistedVolumeSnapshotsJsonTests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_assisted_volume_snapshots.py:L19–L53` |
| `AssistedVolumeSnapshotsJsonTests.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_assisted_volume_snapshots.py:L22–L22` |
| `AssistedVolumeSnapshotsJsonTests.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_assisted_volume_snapshots.py:L23–L23` |
| `AssistedVolumeSnapshotsJsonTests.test_create` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/api_sample_tests/test_assisted_volume_snapshots.py:L25–L41` |
| `AssistedVolumeSnapshotsJsonTests.test_snapshots_delete_assisted` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/api_sample_tests/test_assisted_volume_snapshots.py:L43–L53` |

## Dependencies

- `nova.tests.functional.api_sample_tests`: imports `test_servers` (src/nova/tests/functional/api_sample_tests/test_assisted_volume_snapshots.py:L15)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/functional/api_sample_tests/test_assisted_volume_snapshots.py:L16)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_assisted_volume_snapshots.py:L22)

