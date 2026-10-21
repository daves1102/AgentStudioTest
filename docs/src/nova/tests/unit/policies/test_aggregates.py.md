# src/nova/tests/unit/policies/test_aggregates.py

## Overview

This file implements the `test_aggregates` module, defining 2 classs, 1 field, 10 methods, 7 imports, 1 side effect, 2 security surface entries.

Lines: total 150, code 116, comment 14, blank 20

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `AggregatesPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_aggregates.py:L24–L140` |
| `AggregatesPolicyTest.setUp` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/policies/test_aggregates.py:L32–L54` |
| `AggregatesPolicyTest.test_list_aggregate_policy` | method | (self, mock_list) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_aggregates.py:L57–L61` |
| `AggregatesPolicyTest.test_create_aggregate_policy` | method | (self, mock_create) | public | not declared | 1/9 | `src/nova/tests/unit/policies/test_aggregates.py:L64–L72` |
| `AggregatesPolicyTest.test_update_aggregate_policy` | method | (self, mock_update) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_aggregates.py:L75–L81` |
| `AggregatesPolicyTest.test_delete_aggregate_policy` | method | (self, mock_delete) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_aggregates.py:L84–L90` |
| `AggregatesPolicyTest.test_show_aggregate_policy` | method | (self, mock_show) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_aggregates.py:L93–L98` |
| `AggregatesPolicyTest.test_set_metadata_aggregate_policy` | method | (self, mock_metadata) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_aggregates.py:L101–L108` |
| `AggregatesPolicyTest.test_add_host_aggregate_policy` | method | (self, mock_add) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_aggregates.py:L111–L117` |
| `AggregatesPolicyTest.test_remove_host_aggregate_policy` | method | (self, mock_remove) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_aggregates.py:L120–L127` |
| `AggregatesPolicyTest.test_images_aggregate_policy` | method | (self, mock_get) | public | not declared | 1/11 | `src/nova/tests/unit/policies/test_aggregates.py:L130–L140` |
| `AggregatesNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_aggregates.py:L143–L150` |
| `AggregatesNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_aggregates.py:L150–L150` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_aggregates.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_aggregates.py:L15)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/policies/test_aggregates.py:L16)
- `nova.api.openstack.compute`: imports `aggregates` (src/nova/tests/unit/policies/test_aggregates.py:L18)
- `nova`: imports `objects` (src/nova/tests/unit/policies/test_aggregates.py:L19)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_aggregates.py:L20)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_aggregates.py:L21)

## Side Effects

- **network**: from nova.api.openstack.compute import aggregates (src/nova/tests/unit/policies/test_aggregates.py:L18)

## Security Surface

- **sink** (`db-write`): rule_name = "os_compute_api:os-aggregates:update" (src/nova/tests/unit/policies/test_aggregates.py:L76)
- **sink** (`db-write`): rule_name, self.controller.update, (src/nova/tests/unit/policies/test_aggregates.py:L79)

