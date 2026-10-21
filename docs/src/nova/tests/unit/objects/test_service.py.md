# src/nova/tests/unit/objects/test_service.py

## Overview

This file implements the `test_service` module, defining 5 classs, 2 constants, 1 function, 54 methods, 1 variable, 16 imports, 7 side effects, 2 security surface entries.

Lines: total 570, code 477, comment 17, blank 76

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NOW` | constant | — | exported | not declared | — | `src/nova/tests/unit/objects/test_service.py:L35–L35` |
| `_fake_service` | function | (**kwargs) | unexported | `fake_service` (src/nova/tests/unit/objects/test_service.py:L57) | 1/20 | `src/nova/tests/unit/objects/test_service.py:L38–L57` |
| `fake_service` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_service.py:L60–L60` |
| `OPTIONAL` | constant | — | exported | not declared | — | `src/nova/tests/unit/objects/test_service.py:L62–L62` |
| `_TestServiceObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_service.py:L65–L427` |
| `_TestServiceObject.supported_hv_specs_comparator` | method | (self, expected, obj_val) | public | not declared | 2/3 | `src/nova/tests/unit/objects/test_service.py:L66–L68` |
| `_TestServiceObject.pci_device_pools_comparator` | method | (self, expected, obj_val) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_service.py:L70–L72` |
| `_TestServiceObject.comparators` | method | (self) | public | `{'stats': self.assertJsonEqual, 'host_ip': self.assertJsonEqual, 'supported_hv_specs': self.supported_hv_specs_comparator, 'pci_device_pools': self.pci_device_pools_comparator}` (src/nova/tests/unit/objects/test_service.py:L75) | 1/5 | `src/nova/tests/unit/objects/test_service.py:L74–L78` |
| `_TestServiceObject.subs` | method | (self) | public | `{'supported_hv_specs': 'supported_instances', 'pci_device_pools': 'pci_stats'}` (src/nova/tests/unit/objects/test_service.py:L81) | 1/3 | `src/nova/tests/unit/objects/test_service.py:L80–L82` |
| `_TestServiceObject._test_query` | method | (self, db_method, obj_method, *args, **kwargs) | private | not declared | 2/18 | `src/nova/tests/unit/objects/test_service.py:L84–L101` |
| `_TestServiceObject.test_get_by_id` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_service.py:L103–L104` |
| `_TestServiceObject.test_get_by_uuid` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_service.py:L106–L108` |
| `_TestServiceObject.test_get_by_host_and_topic` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_service.py:L110–L112` |
| `_TestServiceObject.test_get_by_host_and_binary` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_service.py:L114–L116` |
| `_TestServiceObject.test_get_by_host_and_binary_raises` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_service.py:L118–L122` |
| `_TestServiceObject.test_get_by_compute_host` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_service.py:L124–L126` |
| `_TestServiceObject.test_get_by_args` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_service.py:L128–L130` |
| `_TestServiceObject.test_create` | method | (self, mock_service_create) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_service.py:L133–L143` |
| `_TestServiceObject.test_create_without_uuid_generates_one` | method | (self, mock_service_create, generate_uuid) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_service.py:L148–L153` |
| `_TestServiceObject.test_recreate_fails` | method | (self, mock_service_create) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_service.py:L156–L162` |
| `_TestServiceObject.test_save` | method | (self, mock_service_update, mock_notify) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_service.py:L166–L174` |
| `_TestServiceObject.test_set_id_failure` | method | (self, db_mock) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_service.py:L178–L183` |
| `_TestServiceObject._test_destroy` | method | (self, mock_service_destroy, mock_notify) | private | not declared | 1/5 | `src/nova/tests/unit/objects/test_service.py:L187–L191` |
| `_TestServiceObject.test_destroy` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/objects/test_service.py:L193–L200` |
| `_TestServiceObject.test_get_by_topic` | method | (self, mock_service_get) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_service.py:L204–L208` |
| `_TestServiceObject.test_get_by_binary` | method | (self, mock_get) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_service.py:L211–L218` |
| `_TestServiceObject.test_get_by_binary_disabled` | method | (self, mock_get) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_service.py:L221–L229` |
| `_TestServiceObject.test_get_by_binary_both` | method | (self, mock_get) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_service.py:L232–L241` |
| `_TestServiceObject.test_get_by_host` | method | (self, mock_service_get) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_service.py:L245–L249` |
| `_TestServiceObject.test_get_all` | method | (self, mock_get_all) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_service.py:L252–L256` |
| `_TestServiceObject.test_get_all_with_az` | method | (self, mock_get_by_key, mock_get_all) | public | not declared | 1/14 | `src/nova/tests/unit/objects/test_service.py:L260–L273` |
| `_TestServiceObject.test_compute_node` | method | (self, mock_get) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_service.py:L276–L288` |
| `_TestServiceObject.test_get_all_computes_by_hv_type` | method | (self, mock_get_all) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_service.py:L291–L298` |
| `_TestServiceObject.test_load_when_orphaned` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_service.py:L300–L304` |
| `_TestServiceObject.test_obj_make_compatible_for_compute_node` | method | (self, get_all_by_host) | public | not declared | 1/14 | `src/nova/tests/unit/objects/test_service.py:L307–L321` |
| `_TestServiceObject.test_get_minimum_version_none` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_service.py:L324–L329` |
| `_TestServiceObject.test_get_minimum_version` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_service.py:L332–L337` |
| `_TestServiceObject.test_get_minimum_version_checks_binary` | method | (self, mock_log, mock_get) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_service.py:L341–L351` |
| `_TestServiceObject.test_get_minimum_version_with_caching` | method | (self, mock_get) | public | not declared | 1/14 | `src/nova/tests/unit/objects/test_service.py:L354–L367` |
| `_TestServiceObject.test_get_min_version_multiple_with_old` | method | (self, mock_gmv) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_service.py:L370–L379` |
| `_TestServiceObject.test_get_min_version_multiple` | method | (self, mock_gmv) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_service.py:L382–L391` |
| `_TestServiceObject.test_create_above_minimum` | method | (self, mock_get, mock_notify) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_service.py:L396–L400` |
| `_TestServiceObject.test_create_equal_to_minimum` | method | (self, mock_get, mock_notify) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_service.py:L405–L409` |
| `_TestServiceObject.test_create_below_minimum` | method | (self, mock_get) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_service.py:L413–L419` |
| `_TestServiceObject.test_obj_make_compatible_from_manifest_strips_uuid` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_service.py:L423–L427` |
| `TestServiceObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_service.py:L430–L432` |
| `TestRemoteServiceObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_service.py:L435–L437` |
| `TestServiceVersion` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_service.py:L440–L480` |
| `TestServiceVersion.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_service.py:L441–L443` |
| `TestServiceVersion._collect_things` | method | (self) | private | `data` (src/nova/tests/unit/objects/test_service.py:L449) | 1/5 | `src/nova/tests/unit/objects/test_service.py:L445–L449` |
| `TestServiceVersion.test_version` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_service.py:L451–L463` |
| `TestServiceVersion.test_version_in_init` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_service.py:L465–L468` |
| `TestServiceVersion.test_version_set_on_init` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_service.py:L470–L472` |
| `TestServiceVersion.test_version_loaded_from_db` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_service.py:L474–L480` |
| `TestServiceVersionCells` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_service.py:L483–L570` |
| `TestServiceVersionCells.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_service.py:L485–L487` |
| `TestServiceVersionCells._setup_cells` | method | (self) | private | not declared | 1/17 | `src/nova/tests/unit/objects/test_service.py:L489–L507` |
| `TestServiceVersionCells._create_services` | method | (self, *versions) | private | not declared | 2/12 | `src/nova/tests/unit/objects/test_service.py:L509–L520` |
| `TestServiceVersionCells.test_version_all_cells` | method | (self, mock_check, mock_notify) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_service.py:L524–L527` |
| `TestServiceVersionCells.test_get_minimum_version_checks_binary` | method | (self, mock_log) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_service.py:L530–L535` |
| `TestServiceVersionCells.test_version_all_cells_with_fail` | method | (self, mock_scatter) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_service.py:L538–L548` |
| `TestServiceVersionCells.test_version_all_cells_with_timeout` | method | (self, mock_scatter) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_service.py:L551–L561` |
| `TestServiceVersionCells.test_version_all_cells_exclude_zero_service` | method | (self, mock_scatter) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_service.py:L564–L570` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_service.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/unit/objects/test_service.py:L17)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/objects/test_service.py:L18)
- `oslo_versionedobjects`: imports `base as ovo_base` (src/nova/tests/unit/objects/test_service.py:L19)
- `oslo_versionedobjects`: imports `exception as ovo_exc` (src/nova/tests/unit/objects/test_service.py:L20)
- `nova.compute`: imports `manager as compute_manager` (src/nova/tests/unit/objects/test_service.py:L22)
- `nova`: imports `context` (src/nova/tests/unit/objects/test_service.py:L23)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/objects/test_service.py:L24)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_service.py:L25)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_service.py:L26)
- `nova.objects`: imports `aggregate` (src/nova/tests/unit/objects/test_service.py:L27)
- `nova.objects`: imports `service` (src/nova/tests/unit/objects/test_service.py:L28)
- `nova`: imports `test` (src/nova/tests/unit/objects/test_service.py:L29)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/objects/test_service.py:L30)
- `nova.tests.unit.objects`: imports `test_compute_node` (src/nova/tests/unit/objects/test_service.py:L31)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_service.py:L32)

## Side Effects

- **network**: def test_save(self, mock_service_update, mock_notify): (src/nova/tests/unit/objects/test_service.py:L166)
- **network**: def _test_destroy(self, mock_service_destroy, mock_notify): (src/nova/tests/unit/objects/test_service.py:L187)
- **network**: def test_create_above_minimum(self, mock_get, mock_notify): (src/nova/tests/unit/objects/test_service.py:L396)
- **network**: def test_create_equal_to_minimum(self, mock_get, mock_notify): (src/nova/tests/unit/objects/test_service.py:L405)
- **network**: def test_version_all_cells(self, mock_check, mock_notify): (src/nova/tests/unit/objects/test_service.py:L524)
- **global-mutation**: NOW = timeutils.utcnow().replace(microsecond=0) (src/nova/tests/unit/objects/test_service.py:L35)
- **global-mutation**: OPTIONAL = ['availability_zone', 'compute_node'] (src/nova/tests/unit/objects/test_service.py:L62)

## Security Surface

- **sink** (`db-write`): fake_service.update(kwargs) (src/nova/tests/unit/objects/test_service.py:L56)
- **sink** (`db-write`): 'Service version %i has no history. Please update ' (src/nova/tests/unit/objects/test_service.py:L455)

## Notes

- KB `sideEffects` entries at L166, L187, L396, L405, L524 have targets that appear to be code fragments rather than resource paths; documented as recorded.

