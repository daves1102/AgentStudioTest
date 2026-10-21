# src/nova/tests/unit/objects/test_selection.py

## Overview

This file implements the `test_selection` module, defining 3 classs, 1 constant, 10 methods, 7 variables, 7 imports, 1 side effect.

Lines: total 198, code 159, comment 14, blank 25

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/objects/test_selection.py:L22–L22` |
| `fake_numa_limit1` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_selection.py:L24–L25` |
| `fake_limit1` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_selection.py:L26–L27` |
| `fake_limit_obj1` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_selection.py:L28–L28` |
| `fake_host1` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_selection.py:L29–L35` |
| `fake_host_state1` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_selection.py:L36–L36` |
| `fake_alloc1` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_selection.py:L39–L44` |
| `fake_alloc_version` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_selection.py:L45–L45` |
| `_TestSelectionObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_selection.py:L48–L148` |
| `_TestSelectionObject.test_create_with_values` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_selection.py:L49–L61` |
| `_TestSelectionObject.test_passing_dict_allocation_fails` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_selection.py:L63–L67` |
| `_TestSelectionObject.test_passing_numeric_allocation_version_converts` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_selection.py:L69–L75` |
| `_TestSelectionObject.test_from_host_state` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_selection.py:L77–L83` |
| `_TestSelectionObject.test_from_host_state_no_alloc_info` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_selection.py:L85–L90` |
| `_TestSelectionObject.test_selection_obj_to_dict` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/objects/test_selection.py:L92–L128` |
| `_TestSelectionObject.test_selection_obj_to_dict_no_numa` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/objects/test_selection.py:L130–L148` |
| `TestSelectionObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_selection.py:L151–L193` |
| `TestSelectionObject.test_obj_make_compatible` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_selection.py:L157–L166` |
| `TestSelectionObject.test_from_host_state_az_via_aggregate_metadata` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_selection.py:L168–L181` |
| `TestSelectionObject.test_from_host_state_az_via_config` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_selection.py:L183–L193` |
| `TestRemoteSelectionObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_selection.py:L196–L198` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/objects/test_selection.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/objects/test_selection.py:L14)
- `nova`: imports `conf` (src/nova/tests/unit/objects/test_selection.py:L16)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_selection.py:L17)
- `nova.objects`: imports `numa` (src/nova/tests/unit/objects/test_selection.py:L18)
- `nova.scheduler`: imports `host_manager` (src/nova/tests/unit/objects/test_selection.py:L19)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_selection.py:L20)

## Side Effects

- **global-mutation**: CONF = conf.CONF (src/nova/tests/unit/objects/test_selection.py:L22)

