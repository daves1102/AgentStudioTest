# src/nova/tests/unit/test_fixtures.py

## Overview

This file implements the `test_fixtures` module, defining 14 classs, 1 constant, 3 functions, 36 methods, 30 imports, 1 side effect, 16 security surface entries.

Lines: total 649, code 460, comment 92, blank 97

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/test_fixtures.py:L50–L50` |
| `TestLogging` | class | — | exported | not declared | — | `src/nova/tests/unit/test_fixtures.py:L53–L102` |
| `TestLogging.test_default_logging` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/test_fixtures.py:L54–L89` |
| `TestLogging.test_debug_logging` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_fixtures.py:L91–L102` |
| `TestOSAPIFixture` | class | — | exported | not declared | — | `src/nova/tests/unit/test_fixtures.py:L105–L132` |
| `TestOSAPIFixture.test_responds_to_version` | method | (self, mock_service_create, mock_get) | public | not declared | 1/10 | `src/nova/tests/unit/test_fixtures.py:L109–L132` |
| `TestDatabaseFixture` | class | — | exported | not declared | — | `src/nova/tests/unit/test_fixtures.py:L135–L255` |
| `TestDatabaseFixture.test_fixture_reset` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/test_fixtures.py:L136–L170` |
| `TestDatabaseFixture.test_api_fixture_reset` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/test_fixtures.py:L172–L201` |
| `TestDatabaseFixture.test_fixture_cleanup` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/test_fixtures.py:L207–L223` |
| `TestDatabaseFixture.test_api_fixture_cleanup` | method | (self) | public | not declared | 2/20 | `src/nova/tests/unit/test_fixtures.py:L229–L255` |
| `TestDefaultFlavorsFixture` | class | — | exported | not declared | — | `src/nova/tests/unit/test_fixtures.py:L258–L278` |
| `TestDefaultFlavorsFixture.test_flavors` | method | (self, mock_send_notification) | public | not declared | 1/14 | `src/nova/tests/unit/test_fixtures.py:L260–L278` |
| `TestIndirectionAPIFixture` | class | — | exported | not declared | — | `src/nova/tests/unit/test_fixtures.py:L281–L295` |
| `TestIndirectionAPIFixture.test_indirection_api` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_fixtures.py:L282–L295` |
| `TestSpawnIsSynchronousFixture` | class | — | exported | not declared | — | `src/nova/tests/unit/test_fixtures.py:L298–L328` |
| `TestSpawnIsSynchronousFixture.test_spawn_patch` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_fixtures.py:L299–L304` |
| `TestSpawnIsSynchronousFixture.test_spawn_passes_through` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_fixtures.py:L306–L310` |
| `TestSpawnIsSynchronousFixture.test_spawn_return_has_result` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_fixtures.py:L312–L316` |
| `TestSpawnIsSynchronousFixture.test_spawn_callback` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_fixtures.py:L318–L328` |
| `TestSpawnIsSynchronousFixture.test_spawn_callback.fake` | function | (thread) | public | not declared | — | `src/nova/tests/unit/test_fixtures.py:L323–L325` |
| `TestBannedDBSchemaOperations` | class | — | exported | not declared | — | `src/nova/tests/unit/test_fixtures.py:L331–L346` |
| `TestBannedDBSchemaOperations.test_column` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_fixtures.py:L332–L338` |
| `TestBannedDBSchemaOperations.test_table` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_fixtures.py:L340–L346` |
| `TestAllServicesCurrentFixture` | class | — | exported | not declared | — | `src/nova/tests/unit/test_fixtures.py:L349–L364` |
| `TestAllServicesCurrentFixture.test_services_current` | method | (self, mock_db) | public | not declared | 1/14 | `src/nova/tests/unit/test_fixtures.py:L351–L364` |
| `TestNoopConductorFixture` | class | — | exported | not declared | — | `src/nova/tests/unit/test_fixtures.py:L367–L378` |
| `TestNoopConductorFixture.test_task_api_not_called` | method | (self, mock_resize) | public | not declared | 1/4 | `src/nova/tests/unit/test_fixtures.py:L369–L372` |
| `TestNoopConductorFixture.test_api_not_called` | method | (self, mock_wait) | public | not declared | 1/4 | `src/nova/tests/unit/test_fixtures.py:L375–L378` |
| `TestSingleCellSimpleFixture` | class | — | exported | not declared | — | `src/nova/tests/unit/test_fixtures.py:L381–L390` |
| `TestSingleCellSimpleFixture.test_single_cell` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_fixtures.py:L382–L385` |
| `TestSingleCellSimpleFixture.test_target_cell` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_fixtures.py:L387–L390` |
| `TestWarningsFixture` | class | — | exported | not declared | — | `src/nova/tests/unit/test_fixtures.py:L393–L430` |
| `TestWarningsFixture.test_invalid_uuid_errors` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/test_fixtures.py:L394–L430` |
| `TestDownCellFixture` | class | — | exported | not declared | — | `src/nova/tests/unit/test_fixtures.py:L433–L528` |
| `TestDownCellFixture.test_fixture` | method | (self) | public | not declared | 3/19 | `src/nova/tests/unit/test_fixtures.py:L435–L462` |
| `TestDownCellFixture.test_fixture_when_explicitly_passing_down_cell_mappings` | method | (self) | public | not declared | 5/25 | `src/nova/tests/unit/test_fixtures.py:L464–L492` |
| `TestDownCellFixture.test_fixture_for_an_individual_down_cell_targeted_call` | method | (self) | public | not declared | 3/23 | `src/nova/tests/unit/test_fixtures.py:L494–L528` |
| `TestDownCellFixture.test_fixture_for_an_individual_down_cell_targeted_call.dummy_tester` | function | (ctxt, cell_mapping, uuid) | public | `objects.Instance.get_by_uuid(cctxt, uuid)` (src/nova/tests/unit/test_fixtures.py:L514) | — | `src/nova/tests/unit/test_fixtures.py:L512–L514` |
| `TestNeutronFixture` | class | — | exported | not declared | — | `src/nova/tests/unit/test_fixtures.py:L531–L551` |
| `TestNeutronFixture.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_fixtures.py:L533–L535` |
| `TestNeutronFixture.test_list_ports_with_resource_request_non_admin_client` | method | (self) | public | not declared | 3/7 | `src/nova/tests/unit/test_fixtures.py:L537–L543` |
| `TestNeutronFixture.test_list_ports_with_resource_request_admin_client` | method | (self) | public | not declared | 3/7 | `src/nova/tests/unit/test_fixtures.py:L545–L551` |
| `TestGlanceFixture` | class | — | exported | not declared | — | `src/nova/tests/unit/test_fixtures.py:L554–L649` |
| `TestGlanceFixture.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_fixtures.py:L555–L558` |
| `TestGlanceFixture.test_detail` | method | (self) | public | not declared | 4/25 | `src/nova/tests/unit/test_fixtures.py:L560–L592` |
| `TestGlanceFixture.test_detail.check_is_bool` | function | (image, key) | public | not declared | — | `src/nova/tests/unit/test_fixtures.py:L584–L589` |
| `TestGlanceFixture.test_show_raises_imagenotfound_for_invalid_id` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_fixtures.py:L594–L598` |
| `TestGlanceFixture.test_create_adds_id` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_fixtures.py:L600–L608` |
| `TestGlanceFixture.test_create_keeps_id` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_fixtures.py:L610–L612` |
| `TestGlanceFixture.test_create_rejects_duplicate_ids` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_fixtures.py:L614–L622` |
| `TestGlanceFixture.test_update` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_fixtures.py:L624–L632` |
| `TestGlanceFixture.test_delete` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_fixtures.py:L634–L640` |
| `TestGlanceFixture.test_create_then_get` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_fixtures.py:L642–L649` |

## Dependencies

- `import copy` (src/nova/tests/unit/test_fixtures.py:L17)
- `import datetime` (src/nova/tests/unit/test_fixtures.py:L18)
- `import io` (src/nova/tests/unit/test_fixtures.py:L19)
- `import unittest` (src/nova/tests/unit/test_fixtures.py:L20)
- `unittest`: imports `mock` (src/nova/tests/unit/test_fixtures.py:L21)
- `import fixtures as fx` (src/nova/tests/unit/test_fixtures.py:L23)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/test_fixtures.py:L24)
- `oslo_db`: imports `exception as db_exc` (src/nova/tests/unit/test_fixtures.py:L25)
- `oslo_log`: imports `log as logging` (src/nova/tests/unit/test_fixtures.py:L26)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/test_fixtures.py:L27)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/test_fixtures.py:L28)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/test_fixtures.py:L29)
- `oslotest`: imports `output` (src/nova/tests/unit/test_fixtures.py:L30)
- `import sqlalchemy as sa` (src/nova/tests/unit/test_fixtures.py:L31)
- `import testtools` (src/nova/tests/unit/test_fixtures.py:L32)
- `nova.compute`: imports `rpcapi as compute_rpcapi` (src/nova/tests/unit/test_fixtures.py:L34)
- `nova`: imports `conductor` (src/nova/tests/unit/test_fixtures.py:L35)
- `nova`: imports `context` (src/nova/tests/unit/test_fixtures.py:L36)
- `nova.db.api`: imports `api as api_db_api` (src/nova/tests/unit/test_fixtures.py:L37)
- `nova.db.main`: imports `api as main_db_api` (src/nova/tests/unit/test_fixtures.py:L38)
- `nova`: imports `exception` (src/nova/tests/unit/test_fixtures.py:L39)
- `nova.network`: imports `neutron as neutron_api` (src/nova/tests/unit/test_fixtures.py:L40)
- `nova`: imports `objects` (src/nova/tests/unit/test_fixtures.py:L41)
- `nova.objects`: imports `base as obj_base` (src/nova/tests/unit/test_fixtures.py:L42)
- `nova.objects`: imports `service as service_obj` (src/nova/tests/unit/test_fixtures.py:L43)
- `nova`: imports `test` (src/nova/tests/unit/test_fixtures.py:L44)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/test_fixtures.py:L45)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/test_fixtures.py:L46)
- `nova`: imports `thread_pool_factory` (src/nova/tests/unit/test_fixtures.py:L47)
- `nova`: imports `utils` (src/nova/tests/unit/test_fixtures.py:L48)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/tests/unit/test_fixtures.py:L50)

## Security Surface

- **sink** (`db-write`): result = conn.execute(sa.text("SELECT * FROM instance_types")) (src/nova/tests/unit/test_fixtures.py:L146)
- **sink** (`db-write`): conn.execute(sa.text( (src/nova/tests/unit/test_fixtures.py:L153)
- **sink** (`db-write`): "INSERT INTO instance_types VALUES " (src/nova/tests/unit/test_fixtures.py:L154)
- **sink** (`db-write`): result = conn.execute(sa.text("SELECT * FROM instance_types")) (src/nova/tests/unit/test_fixtures.py:L158)
- **sink** (`db-write`): result = conn.execute(sa.text("SELECT * FROM instance_types")) (src/nova/tests/unit/test_fixtures.py:L168)
- **sink** (`db-write`): result = conn.execute(sa.text("SELECT * FROM cell_mappings")) (src/nova/tests/unit/test_fixtures.py:L179)
- **sink** (`db-write`): sa.text( (src/nova/tests/unit/test_fixtures.py:L185)
- **sink** (`db-write`): "INSERT INTO cell_mappings (uuid, name) VALUES (:uuid, :name)" (src/nova/tests/unit/test_fixtures.py:L186)
- **sink** (`db-write`): result = conn.execute(sa.text("SELECT * FROM cell_mappings")) (src/nova/tests/unit/test_fixtures.py:L189)
- **sink** (`db-write`): result = conn.execute(sa.text("SELECT * FROM cell_mappings")) (src/nova/tests/unit/test_fixtures.py:L199)
- **sink** (`db-write`): sa.text( (src/nova/tests/unit/test_fixtures.py:L240)
- **sink** (`db-write`): "INSERT INTO cell_mappings (uuid, name) VALUES (:uuid, :name)" (src/nova/tests/unit/test_fixtures.py:L241)
- **sink** (`db-write`): result = conn.execute(sa.text("SELECT * FROM cell_mappings")) (src/nova/tests/unit/test_fixtures.py:L244)
- **sink** (`db-write`): result = conn.execute(sa.text("SELECT * FROM flavors")) (src/nova/tests/unit/test_fixtures.py:L267)
- **sink** (`db-write`): result = conn.execute(sa.text("SELECT * FROM flavors")) (src/nova/tests/unit/test_fixtures.py:L276)
- **sink** (`db-write`): self.image_service.update( (src/nova/tests/unit/test_fixtures.py:L628)

