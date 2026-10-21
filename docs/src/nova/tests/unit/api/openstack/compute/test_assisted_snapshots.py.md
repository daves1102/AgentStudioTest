# src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py

## Overview

This file implements the `test_assisted_snapshots` module, defining 3 classs, 1 constant, 6 fields, 20 methods, 12 imports, 2 side effects.

Lines: total 255, code 203, comment 17, blank 35

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FAKE_UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L33–L33` |
| `AssistedSnapshotCreateTestCaseV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L36–L129` |
| `AssistedSnapshotCreateTestCaseV21.assisted_snaps` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L37–L37` |
| `AssistedSnapshotCreateTestCaseV21.bad_request` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L38–L38` |
| `AssistedSnapshotCreateTestCaseV21.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L40–L46` |
| `AssistedSnapshotCreateTestCaseV21.test_assisted_create` | method | (self, mock_volume_snapshot_create) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L49–L67` |
| `AssistedSnapshotCreateTestCaseV21.test_assisted_create_missing_create_info` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L69–L74` |
| `AssistedSnapshotCreateTestCaseV21.test_assisted_create_with_unexpected_attr` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L76–L91` |
| `AssistedSnapshotCreateTestCaseV21.test_assisted_create_multiattach_fails` | method | (self, bdm_get_by_volume) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L95–L104` |
| `AssistedSnapshotCreateTestCaseV21._test_assisted_create_instance_conflict` | method | (self, api_error) | private | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L106–L118` |
| `AssistedSnapshotCreateTestCaseV21.test_assisted_create_instance_invalid_state` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L120–L125` |
| `AssistedSnapshotCreateTestCaseV21.test_assisted_create_instance_not_ready` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L127–L129` |
| `AssistedSnapshotDeleteTestCaseV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L132–L232` |
| `AssistedSnapshotDeleteTestCaseV21.assisted_snaps` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L133–L133` |
| `AssistedSnapshotDeleteTestCaseV21.microversion` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L134–L134` |
| `AssistedSnapshotDeleteTestCaseV21._check_status` | method | (self, expected_status, req, res, controller_method) | private | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L136–L137` |
| `AssistedSnapshotDeleteTestCaseV21.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L139–L148` |
| `AssistedSnapshotDeleteTestCaseV21.test_assisted_delete` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L150–L160` |
| `AssistedSnapshotDeleteTestCaseV21.test_assisted_delete_missing_delete_info` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L162–L167` |
| `AssistedSnapshotDeleteTestCaseV21._test_assisted_delete_instance_conflict` | method | (self, api_error) | private | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L169–L181` |
| `AssistedSnapshotDeleteTestCaseV21.test_assisted_delete_instance_invalid_state` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L183–L188` |
| `AssistedSnapshotDeleteTestCaseV21.test_assisted_delete_instance_not_ready` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L190–L192` |
| `AssistedSnapshotDeleteTestCaseV21.test_delete_additional_query_parameters` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L194–L204` |
| `AssistedSnapshotDeleteTestCaseV21.test_delete_duplicate_query_parameters_validation` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L206–L216` |
| `AssistedSnapshotDeleteTestCaseV21.test_assisted_delete_missing_volume_id` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L218–L232` |
| `AssistedSnapshotDeleteTestCaseV275` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L235–L255` |
| `AssistedSnapshotDeleteTestCaseV275.assisted_snaps` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L236–L236` |
| `AssistedSnapshotDeleteTestCaseV275.microversion` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L237–L237` |
| `AssistedSnapshotDeleteTestCaseV275.test_delete_additional_query_parameters_old_version` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L239–L248` |
| `AssistedSnapshotDeleteTestCaseV275.test_delete_additional_query_parameters` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L250–L255` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L17)
- `import urllib` (src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L18)
- `import fixtures` (src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L20)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L21)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L22)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L23)
- `nova.api.openstack.compute`: imports `assisted_volume_snapshots as assisted_snaps_v21` (src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L25–L26)
- `nova.compute`: imports `api as compute_api` (src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L27)
- `nova.compute`: imports `task_states` (src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L28)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L29)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L30)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L31)

## Side Effects

- **network**: from nova.api.openstack.compute import assisted_volume_snapshots \ (src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L25)
- **global-mutation**: FAKE_UUID = 'aaaaaaaa-aaaa-aaaa-aaaa-aaaaaaaaaaaa' (src/nova/tests/unit/api/openstack/compute/test_assisted_snapshots.py:L33)

