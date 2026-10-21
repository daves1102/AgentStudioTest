# src/nova/tests/functional/db/test_host_mapping.py

## Overview

This file implements the `test_host_mapping` module, defining 2 classs, 1 constant, 3 functions, 11 methods, 2 variables, 10 imports, 1 side effect, 2 security surface entries.

Lines: total 218, code 159, comment 22, blank 37

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `sample_mapping` | variable | — | exported | not declared | — | `src/nova/tests/functional/db/test_host_mapping.py:L27–L28` |
| `sample_cell_mapping` | variable | — | exported | not declared | — | `src/nova/tests/functional/db/test_host_mapping.py:L31–L35` |
| `create_cell_mapping` | function | (**kwargs) | exported | `cell_mapping.CellMapping._create_in_db(ctxt, args)` (src/nova/tests/functional/db/test_host_mapping.py:L44) | 2/7 | `src/nova/tests/functional/db/test_host_mapping.py:L38–L44` |
| `create_mapping` | function | (**kwargs) | exported | `host_mapping.HostMapping._create_in_db(ctxt, args)` (src/nova/tests/functional/db/test_host_mapping.py:L54) | 2/8 | `src/nova/tests/functional/db/test_host_mapping.py:L47–L54` |
| `create_mapping_obj` | function | (context, **kwargs) | exported | `host_mapping.HostMapping._from_db_object( context, host_mapping.HostMapping(), mapping)` (src/nova/tests/functional/db/test_host_mapping.py:L59) | 1/4 | `src/nova/tests/functional/db/test_host_mapping.py:L57–L60` |
| `HostMappingTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_host_mapping.py:L63–L140` |
| `HostMappingTestCase.USES_DB_SELF` | constant | — | public | not declared | — | `src/nova/tests/functional/db/test_host_mapping.py:L64–L64` |
| `HostMappingTestCase.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_host_mapping.py:L66–L71` |
| `HostMappingTestCase._compare_cell_obj_to_mapping` | method | (self, obj, mapping) | private | not declared | 4/4 | `src/nova/tests/functional/db/test_host_mapping.py:L73–L76` |
| `HostMappingTestCase.test_get_by_host` | method | (self) | public | not declared | 3/8 | `src/nova/tests/functional/db/test_host_mapping.py:L78–L85` |
| `HostMappingTestCase.test_get_by_host_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/db/test_host_mapping.py:L87–L90` |
| `HostMappingTestCase.test_update_cell_mapping` | method | (self) | public | not declared | 4/20 | `src/nova/tests/functional/db/test_host_mapping.py:L92–L111` |
| `HostMappingTestCase.test_destroy_in_db` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/db/test_host_mapping.py:L113–L120` |
| `HostMappingTestCase.test_load_cell_mapping` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/db/test_host_mapping.py:L122–L126` |
| `HostMappingTestCase.test_host_mapping_list_get_by_cell_id` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/db/test_host_mapping.py:L128–L140` |
| `HostMappingDiscoveryTest` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_host_mapping.py:L143–L218` |
| `HostMappingDiscoveryTest._setup_cells` | method | (self) | private | not declared | 6/33 | `src/nova/tests/functional/db/test_host_mapping.py:L144–L180` |
| `HostMappingDiscoveryTest.test_discover_hosts` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/db/test_host_mapping.py:L182–L196` |
| `HostMappingDiscoveryTest.test_discover_hosts_one_cell` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/db/test_host_mapping.py:L198–L218` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/functional/db/test_host_mapping.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/db/test_host_mapping.py:L15)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/functional/db/test_host_mapping.py:L16)
- `nova`: imports `context` (src/nova/tests/functional/db/test_host_mapping.py:L18)
- `nova`: imports `exception` (src/nova/tests/functional/db/test_host_mapping.py:L19)
- `nova`: imports `objects` (src/nova/tests/functional/db/test_host_mapping.py:L20)
- `nova.objects`: imports `cell_mapping` (src/nova/tests/functional/db/test_host_mapping.py:L21)
- `nova.objects`: imports `host_mapping` (src/nova/tests/functional/db/test_host_mapping.py:L22)
- `nova`: imports `test` (src/nova/tests/functional/db/test_host_mapping.py:L23)
- `nova.tests`: imports `fixtures` (src/nova/tests/functional/db/test_host_mapping.py:L24)

## Side Effects

- **global-mutation**: USES_DB_SELF = True (src/nova/tests/functional/db/test_host_mapping.py:L64)

## Security Surface

- **sink** (`db-write`): args.update(kwargs) (src/nova/tests/functional/db/test_host_mapping.py:L42)
- **sink** (`db-write`): args.update(kwargs) (src/nova/tests/functional/db/test_host_mapping.py:L49)

