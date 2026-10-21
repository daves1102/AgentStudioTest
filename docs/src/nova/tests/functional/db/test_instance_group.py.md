# src/nova/tests/functional/db/test_instance_group.py

## Overview

This file implements the `test_instance_group` module, defining 1 class, 14 methods, 9 imports, 1 side effect, 1 security surface entry.

Lines: total 165, code 122, comment 21, blank 22

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `InstanceGroupObjectTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_instance_group.py:L26–L165` |
| `InstanceGroupObjectTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/db/test_instance_group.py:L27–L29` |
| `InstanceGroupObjectTestCase._api_group` | method | (self, **values) | private | `group` (src/nova/tests/functional/db/test_instance_group.py:L41) | 1/11 | `src/nova/tests/functional/db/test_instance_group.py:L31–L41` |
| `InstanceGroupObjectTestCase.test_create` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/db/test_instance_group.py:L43–L54` |
| `InstanceGroupObjectTestCase.test_destroy` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_instance_group.py:L56–L61` |
| `InstanceGroupObjectTestCase.test_save` | method | (self, _mock_notify) | public | not declared | 1/12 | `src/nova/tests/functional/db/test_instance_group.py:L64–L75` |
| `InstanceGroupObjectTestCase.test_add_members` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/db/test_instance_group.py:L77–L84` |
| `InstanceGroupObjectTestCase.test_add_members_to_group_with_no_members` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/db/test_instance_group.py:L86–L93` |
| `InstanceGroupObjectTestCase.test_remove_members` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/db/test_instance_group.py:L95–L112` |
| `InstanceGroupObjectTestCase.test_get_by_uuid` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/db/test_instance_group.py:L114–L118` |
| `InstanceGroupObjectTestCase.test_get_by_name` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/db/test_instance_group.py:L120–L124` |
| `InstanceGroupObjectTestCase.test_get_by_instance_uuid` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/db/test_instance_group.py:L126–L130` |
| `InstanceGroupObjectTestCase.test_get_by_project_id` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/db/test_instance_group.py:L132–L138` |
| `InstanceGroupObjectTestCase.test_get_all` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_instance_group.py:L140–L145` |
| `InstanceGroupObjectTestCase.test_get_counts` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/db/test_instance_group.py:L147–L165` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/functional/db/test_instance_group.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/db/test_instance_group.py:L15)
- `oslo_versionedobjects`: imports `fixture as ovo_fixture` (src/nova/tests/functional/db/test_instance_group.py:L16)
- `nova`: imports `context` (src/nova/tests/functional/db/test_instance_group.py:L18)
- `nova.db.api`: imports `models as api_models` (src/nova/tests/functional/db/test_instance_group.py:L19)
- `nova`: imports `exception` (src/nova/tests/functional/db/test_instance_group.py:L20)
- `nova`: imports `objects` (src/nova/tests/functional/db/test_instance_group.py:L21)
- `nova.objects`: imports `base` (src/nova/tests/functional/db/test_instance_group.py:L22)
- `nova`: imports `test` (src/nova/tests/functional/db/test_instance_group.py:L23)

## Side Effects

- **network**: def test_save(self, _mock_notify): (src/nova/tests/functional/db/test_instance_group.py:L64)

## Security Surface

- **sink** (`db-write`): group.update(values) (src/nova/tests/functional/db/test_instance_group.py:L39)

## Notes

- KB `sideEffects` entries at L64 have targets that appear to be code fragments rather than resource paths; documented as recorded.

