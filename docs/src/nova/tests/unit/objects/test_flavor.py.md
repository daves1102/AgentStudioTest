# src/nova/tests/unit/objects/test_flavor.py

## Overview

This file implements the `test_flavor` module, defining 8 classs, 48 methods, 1 staticmethod, 1 variable, 13 imports, 7 side effects, 6 security surface entries.

Lines: total 581, code 452, comment 46, blank 83

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_flavor` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_flavor.py:L32–L49` |
| `_TestFlavor` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_flavor.py:L57–L300` |
| `_TestFlavor._compare` | method | (test, db, obj) | private | not declared | 4/8 | `src/nova/tests/unit/objects/test_flavor.py:L59–L70` |
| `_TestFlavor.test_api_get_by_id_from_api` | method | (self, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_flavor.py:L73–L77` |
| `_TestFlavor.test_get_by_name_from_api` | method | (self, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_flavor.py:L80–L84` |
| `_TestFlavor.test_get_by_flavor_id_from_api` | method | (self, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_flavor.py:L87–L91` |
| `_TestFlavor._create_api_flavor` | method | (context, altid=None) | private | `flavor` (src/nova/tests/unit/objects/test_flavor.py:L112) | 2/16 | `src/nova/tests/unit/objects/test_flavor.py:L95–L112` |
| `_TestFlavor.test_get_by_id_from_db` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_flavor.py:L114–L117` |
| `_TestFlavor.test_get_by_name_from_db` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_flavor.py:L119–L122` |
| `_TestFlavor.test_get_by_flavor_id_from_db` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_flavor.py:L124–L128` |
| `_TestFlavor.test_add_access_api` | method | (self, mock_api_add, mock_notify) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_flavor.py:L132–L136` |
| `_TestFlavor.test_add_access_with_dirty_projects` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_flavor.py:L138–L141` |
| `_TestFlavor.test_remove_access_api` | method | (self, mock_api_del, mock_notify) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_flavor.py:L145–L149` |
| `_TestFlavor.test_create` | method | (self, mock_create) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_flavor.py:L152–L163` |
| `_TestFlavor.test_create_with_projects` | method | (self, mock_create) | public | not declared | 2/19 | `src/nova/tests/unit/objects/test_flavor.py:L166–L188` |
| `_TestFlavor.test_create_with_id` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_flavor.py:L190–L192` |
| `_TestFlavor.test_create_duplicate` | method | (self, mock_flavors) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_flavor.py:L195–L200` |
| `_TestFlavor.test_save_api` | method | (self, mock_update, mock_delete, mock_remove, mock_add, mock_notify) | public | not declared | 1/33 | `src/nova/tests/unit/objects/test_flavor.py:L207–L245` |
| `_TestFlavor.test_save_deleted_extra_specs` | method | (self, mock_add, mock_delete, mock_create) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_flavor.py:L250–L261` |
| `_TestFlavor.test_save_invalid_fields` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_flavor.py:L263–L265` |
| `_TestFlavor.test_destroy_api_by_id` | method | (self, mock_destroy) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_flavor.py:L268–L272` |
| `_TestFlavor.test_destroy_api_by_flavorid` | method | (self, mock_destroy) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_flavor.py:L275–L280` |
| `_TestFlavor.test_load_projects_from_api` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_flavor.py:L282–L288` |
| `_TestFlavor.test_from_db_loads_projects` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_flavor.py:L290–L295` |
| `_TestFlavor.test_load_anything_else` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_flavor.py:L297–L300` |
| `TestFlavor` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_flavor.py:L303–L373` |
| `TestFlavor.test_projects_in_db` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_flavor.py:L308–L320` |
| `TestFlavor.test_extra_specs_in_db` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_flavor.py:L322–L329` |
| `TestFlavor.test_description` | method | (self, mock_notify) | public | not declared | 1/32 | `src/nova/tests/unit/objects/test_flavor.py:L334–L373` |
| `TestFlavorRemote` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_flavor.py:L376–L377` |
| `_TestFlavorList` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_flavor.py:L380–L451` |
| `_TestFlavorList.test_get_all_from_db` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_flavor.py:L381–L390` |
| `_TestFlavorList.test_get_all_from_db_with_limit` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_flavor.py:L392–L394` |
| `_TestFlavorList.test_get_all_from_db_with_filters` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_flavor.py:L396–L401` |
| `_TestFlavorList.test_get_all` | method | (self, mock_api_get) | public | not declared | 1/16 | `src/nova/tests/unit/objects/test_flavor.py:L404–L420` |
| `_TestFlavorList.test_get_all_limit_applied_to_api` | method | (self, mock_api_get) | public | not declared | 1/17 | `src/nova/tests/unit/objects/test_flavor.py:L423–L440` |
| `_TestFlavorList.test_get_no_marker_in_api` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_flavor.py:L442–L451` |
| `TestFlavorList` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_flavor.py:L454–L455` |
| `TestFlavorListRemote` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_flavor.py:L458–L459` |
| `TestFlavorExtraSpecs` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_flavor.py:L462–L544` |
| `TestFlavorExtraSpecs.setUp` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/objects/test_flavor.py:L464–L485` |
| `TestFlavorExtraSpecs.tearDown` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_flavor.py:L487–L490` |
| `TestFlavorExtraSpecs.test_flavor_extra_specs_get` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_flavor.py:L492–L494` |
| `TestFlavorExtraSpecs.test_flavor_extra_specs_delete` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_flavor.py:L496–L501` |
| `TestFlavorExtraSpecs.test_flavor_extra_specs_update` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_flavor.py:L503–L508` |
| `TestFlavorExtraSpecs.test_flavor_extra_specs_create` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_flavor.py:L510–L519` |
| `TestFlavorExtraSpecs.test_flavor_get_with_extra_specs` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_flavor.py:L521–L523` |
| `TestFlavorExtraSpecs.test_flavor_get_by_name_with_extra_specs` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_flavor.py:L525–L529` |
| `TestFlavorExtraSpecs.test_flavor_get_by_flavor_id_with_extra_specs` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_flavor.py:L531–L535` |
| `TestFlavorExtraSpecs.test_flavor_get_all` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/objects/test_flavor.py:L537–L544` |
| `TestFlavorFiltering` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_flavor.py:L547–L581` |
| `TestFlavorFiltering.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_flavor.py:L550–L552` |
| `TestFlavorFiltering.assertFilterResults` | method | (self, filters, expected) | public | not declared | 2/4 | `src/nova/tests/unit/objects/test_flavor.py:L554–L557` |
| `TestFlavorFiltering.test_no_filters` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_flavor.py:L559–L563` |
| `TestFlavorFiltering.test_min_memory_mb_filter` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_flavor.py:L565–L569` |
| `TestFlavorFiltering.test_min_root_gb_filter` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_flavor.py:L571–L575` |
| `TestFlavorFiltering.test_min_memory_mb_AND_root_gb_filter` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_flavor.py:L577–L581` |
| `_TestFlavor._compare` | staticmethod | — | private | not declared | — | `src/nova/tests/unit/objects/test_flavor.py:L58–L70` |

## Dependencies

- `import datetime` (src/nova/tests/unit/objects/test_flavor.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_flavor.py:L16)
- `oslo_db`: imports `exception as db_exc` (src/nova/tests/unit/objects/test_flavor.py:L18)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/objects/test_flavor.py:L19)
- `nova`: imports `context as nova_context` (src/nova/tests/unit/objects/test_flavor.py:L21)
- `nova.db.api`: imports `api as api_db_api` (src/nova/tests/unit/objects/test_flavor.py:L22)
- `nova.db.api`: imports `models as api_models` (src/nova/tests/unit/objects/test_flavor.py:L23)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_flavor.py:L24)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_flavor.py:L25)
- `nova.objects`: imports `fields` (src/nova/tests/unit/objects/test_flavor.py:L26)
- `nova.objects`: imports `flavor as flavor_obj` (src/nova/tests/unit/objects/test_flavor.py:L27)
- `nova`: imports `test` (src/nova/tests/unit/objects/test_flavor.py:L28)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_flavor.py:L29)

## Side Effects

- **network**: def test_add_access_api(self, mock_api_add, mock_notify): (src/nova/tests/unit/objects/test_flavor.py:L132)
- **network**: def test_remove_access_api(self, mock_api_del, mock_notify): (src/nova/tests/unit/objects/test_flavor.py:L145)
- **network**: mock_notify): (src/nova/tests/unit/objects/test_flavor.py:L208)
- **network**: def test_description(self, mock_notify): (src/nova/tests/unit/objects/test_flavor.py:L334)
- **network**: mock_notify.assert_called_once_with('create') (src/nova/tests/unit/objects/test_flavor.py:L343)
- **network**: mock_notify.reset_mock() (src/nova/tests/unit/objects/test_flavor.py:L349)
- **network**: mock_notify.assert_called_once_with('update') (src/nova/tests/unit/objects/test_flavor.py:L359)

## Security Surface

- **sink** (`db-write`): flavor.update(fake_db_flavor) (src/nova/tests/unit/objects/test_flavor.py:L100)
- **sink** (`db-write`): flavor.update({'flavorid': altid, (src/nova/tests/unit/objects/test_flavor.py:L102)
- **sink** (`db-write`): flavor_es.update(fake_db_extra_spec) (src/nova/tests/unit/objects/test_flavor.py:L109)
- **sink** (`db-write`): mock_notify.assert_called_once_with('update') (src/nova/tests/unit/objects/test_flavor.py:L359)
- **sink** (`db-write`): self.specs.update(net_attrs) (src/nova/tests/unit/objects/test_flavor.py:L515)
- **sink** (`db-write`): self.flavor.extra_specs.update(net_attrs) (src/nova/tests/unit/objects/test_flavor.py:L516)

## Notes

- KB `sideEffects` entries at L132, L145, L334 have targets that appear to be code fragments rather than resource paths; documented as recorded.

