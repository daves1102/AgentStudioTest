# src/nova/tests/unit/objects/test_host_mapping.py

## Overview

This file implements the `test_host_mapping` module, defining 7 classs, 6 functions, 14 methods, 10 imports, 2 security surface entries.

Lines: total 352, code 281, comment 17, blank 54

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `get_db_mapping` | function | (mapped_cell=None, **updates) | exported | `db_mapping` (src/nova/tests/unit/objects/test_host_mapping.py:L41) | 2/15 | `src/nova/tests/unit/objects/test_host_mapping.py:L27–L41` |
| `_TestHostMappingObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_host_mapping.py:L44–L142` |
| `_TestHostMappingObject._check_cell_map_value` | method | (self, db_val, cell_obj) | private | not declared | 1/2 | `src/nova/tests/unit/objects/test_host_mapping.py:L45–L46` |
| `_TestHostMappingObject.test_get_by_host` | method | (self, host_from_db) | public | not declared | 1/15 | `src/nova/tests/unit/objects/test_host_mapping.py:L50–L66` |
| `_TestHostMappingObject.test_from_db_object_no_cell_map` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/objects/test_host_mapping.py:L68–L86` |
| `_TestHostMappingObject.test_create` | method | (self, create_in_db) | public | not declared | 1/18 | `src/nova/tests/unit/objects/test_host_mapping.py:L89–L108` |
| `_TestHostMappingObject.test_save` | method | (self, save_in_db) | public | not declared | 1/22 | `src/nova/tests/unit/objects/test_host_mapping.py:L111–L134` |
| `_TestHostMappingObject.test_destroy` | method | (self, destroy_in_db) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_host_mapping.py:L137–L142` |
| `TestHostMappingObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_host_mapping.py:L145–L147` |
| `TestRemoteHostMappingObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_host_mapping.py:L150–L152` |
| `_TestHostMappingListObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_host_mapping.py:L155–L171` |
| `_TestHostMappingListObject._check_cell_map_value` | method | (self, db_val, cell_obj) | private | not declared | 1/2 | `src/nova/tests/unit/objects/test_host_mapping.py:L156–L157` |
| `_TestHostMappingListObject.test_get_all` | method | (self, get_from_db) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_host_mapping.py:L160–L171` |
| `TestCellMappingListObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_host_mapping.py:L174–L176` |
| `TestRemoteCellMappingListObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_host_mapping.py:L179–L181` |
| `TestHostMappingDiscovery` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_host_mapping.py:L184–L352` |
| `TestHostMappingDiscovery.test_discover_hosts_all` | method | (self, mock_cn_get, mock_hm_get, mock_hm_create, mock_cm) | public | not declared | 2/21 | `src/nova/tests/unit/objects/test_host_mapping.py:L189–L214` |
| `TestHostMappingDiscovery.test_discover_hosts_all._hm_get` | function | (context, host) | private | `objects.HostMapping()` (src/nova/tests/unit/objects/test_host_mapping.py:L193) | — | `src/nova/tests/unit/objects/test_host_mapping.py:L191–L194` |
| `TestHostMappingDiscovery.test_discover_hosts_one` | method | (self, mock_cn_get, mock_hm_get, mock_hm_create, mock_cm) | public | not declared | 2/18 | `src/nova/tests/unit/objects/test_host_mapping.py:L220–L244` |
| `TestHostMappingDiscovery.test_discover_hosts_one._hm_get` | function | (context, host) | private | `objects.HostMapping()` (src/nova/tests/unit/objects/test_host_mapping.py:L224) | — | `src/nova/tests/unit/objects/test_host_mapping.py:L222–L225` |
| `TestHostMappingDiscovery.test_discover_services` | method | (self, mock_srv, mock_hm_create, mock_hm_get, mock_cm) | public | not declared | 2/18 | `src/nova/tests/unit/objects/test_host_mapping.py:L250–L274` |
| `TestHostMappingDiscovery.test_discover_services.fake_get_host_mapping` | function | (ctxt, host) | public | `` (src/nova/tests/unit/objects/test_host_mapping.py:L264) | — | `src/nova/tests/unit/objects/test_host_mapping.py:L262–L266` |
| `TestHostMappingDiscovery.test_discover_services_one_cell` | method | (self, mock_srv, mock_hm_create, mock_hm_get, mock_cm) | public | not declared | 2/23 | `src/nova/tests/unit/objects/test_host_mapping.py:L280–L314` |
| `TestHostMappingDiscovery.test_discover_services_one_cell.fake_get_host_mapping` | function | (ctxt, host) | public | `` (src/nova/tests/unit/objects/test_host_mapping.py:L290) | — | `src/nova/tests/unit/objects/test_host_mapping.py:L288–L292` |
| `TestHostMappingDiscovery.test_discover_services_one_cell.fake_status` | function | (msg) | public | not declared | — | `src/nova/tests/unit/objects/test_host_mapping.py:L298–L299` |
| `TestHostMappingDiscovery.test_discover_hosts_duplicate` | method | (self, mock_cn_get, mock_hm_get, mock_hm_create, mock_cm) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_host_mapping.py:L320–L333` |
| `TestHostMappingDiscovery.test_discover_services_duplicate` | method | (self, mock_srv, mock_hm_create, mock_hm_get, mock_cm) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_host_mapping.py:L339–L352` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_host_mapping.py:L13)
- `oslo_db`: imports `exception as db_exc` (src/nova/tests/unit/objects/test_host_mapping.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/objects/test_host_mapping.py:L16)
- `nova`: imports `context` (src/nova/tests/unit/objects/test_host_mapping.py:L18)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_host_mapping.py:L19)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_host_mapping.py:L20)
- `nova.objects`: imports `host_mapping` (src/nova/tests/unit/objects/test_host_mapping.py:L21)
- `nova`: imports `test` (src/nova/tests/unit/objects/test_host_mapping.py:L22)
- `nova.tests.unit.objects`: imports `test_cell_mapping` (src/nova/tests/unit/objects/test_host_mapping.py:L23)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_host_mapping.py:L24)

## Security Surface

- **sink** (`db-write`): db_mapping.update(updates) (src/nova/tests/unit/objects/test_host_mapping.py:L40)
- **sink** (`db-write`): db_mapping.update({"cell_id": new_fake_cell["id"]}) (src/nova/tests/unit/objects/test_host_mapping.py:L122)

