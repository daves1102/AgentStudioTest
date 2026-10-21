# src/nova/tests/unit/api/openstack/compute/test_snapshots.py

## Overview

This file implements the `test_snapshots` module, defining 2 classs, 36 methods, 8 imports, 1 side effect.

Lines: total 248, code 189, comment 14, blank 45

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SnapshotApiTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L28–L228` |
| `SnapshotApiTestV21.setUp` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L29–L44` |
| `SnapshotApiTestV21._test_snapshot_create` | method | (self, force) | private | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L46–L59` |
| `SnapshotApiTestV21.test_snapshot_create` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L61–L62` |
| `SnapshotApiTestV21.test_snapshot_create_force` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L64–L65` |
| `SnapshotApiTestV21.test_snapshot_create_invalid_force_param` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L67–L72` |
| `SnapshotApiTestV21.test_create_no_body` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L74–L77` |
| `SnapshotApiTestV21.test_create_missing_volume` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L79–L83` |
| `SnapshotApiTestV21.test_create_malformed_entity` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L85–L89` |
| `SnapshotApiTestV21.test_snapshot_delete` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L91–L95` |
| `SnapshotApiTestV21.test_snapshot_delete_not_exists` | method | (self, mock_mr) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L99–L102` |
| `SnapshotApiTestV21.test_snapshot_show` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L104–L107` |
| `SnapshotApiTestV21.test_snapshot_show_not_exists` | method | (self, mock_mr) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L111–L114` |
| `SnapshotApiTestV21.test_snapshot_detail` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L116–L123` |
| `SnapshotApiTestV21.test_snapshot_detail_offset_and_limit` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L125–L134` |
| `SnapshotApiTestV21.test_snapshot_index` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L136–L140` |
| `SnapshotApiTestV21.test_snapshot_index_offset_and_limit` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L142–L148` |
| `SnapshotApiTestV21._test_list_with_invalid_filter` | method | (self, url) | private | not declared | 2/8 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L150–L157` |
| `SnapshotApiTestV21.test_list_with_invalid_non_int_limit` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L159–L160` |
| `SnapshotApiTestV21.test_list_with_invalid_string_limit` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L162–L163` |
| `SnapshotApiTestV21.test_list_duplicate_query_with_invalid_string_limit` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L165–L167` |
| `SnapshotApiTestV21.test_detail_list_with_invalid_non_int_limit` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L169–L170` |
| `SnapshotApiTestV21.test_detail_list_with_invalid_string_limit` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L172–L173` |
| `SnapshotApiTestV21.test_detail_list_duplicate_query_with_invalid_string_limit` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L175–L177` |
| `SnapshotApiTestV21.test_list_with_invalid_non_int_offset` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L179–L180` |
| `SnapshotApiTestV21.test_list_with_invalid_string_offset` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L182–L183` |
| `SnapshotApiTestV21.test_list_duplicate_query_with_invalid_string_offset` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L185–L187` |
| `SnapshotApiTestV21.test_detail_list_with_invalid_non_int_offset` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L189–L190` |
| `SnapshotApiTestV21.test_detail_list_with_invalid_string_offset` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L192–L193` |
| `SnapshotApiTestV21.test_detail_list_duplicate_query_with_invalid_string_offset` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L195–L197` |
| `SnapshotApiTestV21._test_list_duplicate_query_parameters_validation` | method | (self, url) | private | not declared | 3/13 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L199–L211` |
| `SnapshotApiTestV21.test_list_duplicate_query_parameters_validation` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L213–L214` |
| `SnapshotApiTestV21.test_detail_list_duplicate_query_parameters_validation` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L216–L218` |
| `SnapshotApiTestV21.test_list_with_additional_filter` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L220–L223` |
| `SnapshotApiTestV21.test_detail_list_with_additional_filter` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L225–L228` |
| `TestSnapshotAPIDeprecation` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L231–L248` |
| `TestSnapshotAPIDeprecation.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L233–L236` |
| `TestSnapshotAPIDeprecation.test_all_apis_return_not_found` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L238–L248` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L16)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L18)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L19)
- `nova.api.openstack.compute`: imports `snapshots` (src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L21)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L22)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L23)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L24)
- `nova.volume`: imports `cinder` (src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L25)

## Side Effects

- **network**: from nova.api.openstack.compute import snapshots (src/nova/tests/unit/api/openstack/compute/test_snapshots.py:L21)

