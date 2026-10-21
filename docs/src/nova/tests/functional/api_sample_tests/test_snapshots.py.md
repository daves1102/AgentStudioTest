# src/nova/tests/functional/api_sample_tests/test_snapshots.py

## Overview

This file implements the `test_snapshots` module, defining 1 class, 2 fields, 7 methods, 3 imports.

Lines: total 77, code 50, comment 14, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SnapshotsSampleJsonTests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_snapshots.py:L22–L77` |
| `SnapshotsSampleJsonTests.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_snapshots.py:L23–L23` |
| `SnapshotsSampleJsonTests.create_subs` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_snapshots.py:L25–L29` |
| `SnapshotsSampleJsonTests.setUp` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/api_sample_tests/test_snapshots.py:L31–L45` |
| `SnapshotsSampleJsonTests._create_snapshot` | method | (self) | private | `response` (src/nova/tests/functional/api_sample_tests/test_snapshots.py:L50) | 1/4 | `src/nova/tests/functional/api_sample_tests/test_snapshots.py:L47–L50` |
| `SnapshotsSampleJsonTests.test_snapshots_create` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_snapshots.py:L52–L55` |
| `SnapshotsSampleJsonTests.test_snapshots_delete` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_snapshots.py:L57–L61` |
| `SnapshotsSampleJsonTests.test_snapshots_detail` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_snapshots.py:L63–L65` |
| `SnapshotsSampleJsonTests.test_snapshots_list` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_snapshots.py:L67–L69` |
| `SnapshotsSampleJsonTests.test_snapshots_show` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_snapshots.py:L71–L77` |

## Dependencies

- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/api_sample_tests/test_snapshots.py:L16)
- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/api_sample_tests/test_snapshots.py:L18)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/functional/api_sample_tests/test_snapshots.py:L19)

