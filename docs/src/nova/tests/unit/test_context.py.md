# src/nova/tests/unit/test_context.py

## Overview

This file implements the `test_context` module, defining 3 classs, 1 constant, 5 functions, 37 methods, 17 imports, 1 side effect, 7 security surface entries.

Lines: total 705, code 526, comment 76, blank 103

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestPluginWithAccess` | class | — | exported | not declared | — | `src/nova/tests/unit/test_context.py:L36–L39` |
| `TestPluginWithAccess.get_access` | method | (self, session) | public | `mock.Mock(role_names=['service'])` (src/nova/tests/unit/test_context.py:L39) | 1/2 | `src/nova/tests/unit/test_context.py:L38–L39` |
| `LoadingFixtureWithAccess` | class | — | exported | not declared | — | `src/nova/tests/unit/test_context.py:L42–L49` |
| `LoadingFixtureWithAccess.create_plugin` | method | (self) | public | `TestPluginWithAccess( token=self.token, endpoint=self.endpoint, user_id=self.user_id, project_id=self.project_id)` (src/nova/tests/unit/test_context.py:L45) | 1/6 | `src/nova/tests/unit/test_context.py:L44–L49` |
| `ContextTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_context.py:L53–L705` |
| `ContextTestCase.USES_DB_SELF` | constant | — | public | not declared | — | `src/nova/tests/unit/test_context.py:L56–L56` |
| `ContextTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_context.py:L58–L60` |
| `ContextTestCase.test_request_context_elevated` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_context.py:L62–L71` |
| `ContextTestCase.test_request_context_sets_is_admin` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_context.py:L73–L77` |
| `ContextTestCase.test_request_context_sets_is_admin_by_role` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_context.py:L79–L83` |
| `ContextTestCase.test_request_context_sets_is_admin_upcase` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_context.py:L85–L89` |
| `ContextTestCase.test_request_context_read_deleted` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_context.py:L91–L98` |
| `ContextTestCase.test_request_context_read_deleted_invalid` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/test_context.py:L100–L112` |
| `ContextTestCase.test_service_catalog_default` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_context.py:L114–L124` |
| `ContextTestCase.test_service_catalog_filter` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/test_context.py:L126–L146` |
| `ContextTestCase.test_context_auth_plugin_get_endpoint_data` | method | (self, mock_get_endpoint, mock_super_get_endpoint_data) | public | not declared | 1/16 | `src/nova/tests/unit/test_context.py:L150–L171` |
| `ContextTestCase.test_to_dict_from_dict_no_log` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_context.py:L173–L189` |
| `ContextTestCase.test_to_dict_from_dict_no_log.stub_warn` | function | (msg, *a, **kw) | public | not declared | — | `src/nova/tests/unit/test_context.py:L176–L179` |
| `ContextTestCase.test_store_when_no_overwrite` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_context.py:L191–L197` |
| `ContextTestCase.test_no_overwrite` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_context.py:L199–L208` |
| `ContextTestCase.test_get_context_no_overwrite` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_context.py:L210–L217` |
| `ContextTestCase.test_admin_no_overwrite` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_context.py:L219–L226` |
| `ContextTestCase.test_get_nova_service_user_context` | method | (self, mock_load_session, mock_load_auth) | public | not declared | 1/21 | `src/nova/tests/unit/test_context.py:L230–L262` |
| `ContextTestCase.test_get_nova_service_user_context_user_project` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/test_context.py:L264–L295` |
| `ContextTestCase.test_get_nova_service_user_context_load_fail` | method | (self, to_fail, mock_load_session, mock_load_auth) | public | not declared | 3/13 | `src/nova/tests/unit/test_context.py:L300–L313` |
| `ContextTestCase.test_convert_from_rc_to_dict` | method | (self) | public | not declared | 2/31 | `src/nova/tests/unit/test_context.py:L315–L345` |
| `ContextTestCase.test_can` | method | (self, mock_authorize) | public | not declared | 1/7 | `src/nova/tests/unit/test_context.py:L348–L356` |
| `ContextTestCase.test_can_fatal` | method | (self, mock_authorize) | public | not declared | 1/5 | `src/nova/tests/unit/test_context.py:L359–L364` |
| `ContextTestCase.test_can_non_fatal` | method | (self, mock_authorize) | public | not declared | 1/8 | `src/nova/tests/unit/test_context.py:L367–L376` |
| `ContextTestCase.test_target_cell` | method | (self, mock_create_ctxt_mgr, mock_rpc) | public | not declared | 1/22 | `src/nova/tests/unit/test_context.py:L380–L403` |
| `ContextTestCase.test_target_cell_unset` | method | (self, mock_create_ctxt_mgr, mock_rpc) | public | not declared | 1/13 | `src/nova/tests/unit/test_context.py:L407–L422` |
| `ContextTestCase.test_target_cell_regenerates` | method | (self, mock_set) | public | not declared | 1/9 | `src/nova/tests/unit/test_context.py:L425–L442` |
| `ContextTestCase.test_get_context` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_context.py:L444–L448` |
| `ContextTestCase.test_target_cell_caching` | method | (self, mock_create_cm, mock_create_tport) | public | not declared | 1/19 | `src/nova/tests/unit/test_context.py:L452–L472` |
| `ContextTestCase.test_is_cell_failure_sentinel` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_context.py:L474–L480` |
| `ContextTestCase.test_scatter_gather_cells` | method | (self, mock_get_inst, mock_target_cell) | public | not declared | 1/13 | `src/nova/tests/unit/test_context.py:L484–L498` |
| `ContextTestCase.test_scatter_gather_cells_timeout` | method | (self, mock_log_warning) | public | not declared | 1/19 | `src/nova/tests/unit/test_context.py:L501–L535` |
| `ContextTestCase.test_scatter_gather_cells_timeout.cleanup` | function | — | public | not declared | — | `src/nova/tests/unit/test_context.py:L507–L511` |
| `ContextTestCase.test_scatter_gather_cells_timeout.task` | function | (*args, **kwargs) | public | `mock.sentinel.instances` (src/nova/tests/unit/test_context.py:L517) | — | `src/nova/tests/unit/test_context.py:L515–L517` |
| `ContextTestCase.test_scatter_gather_cells_queued_task_cancelled` | method | (self, mock_warning) | public | not declared | 2/43 | `src/nova/tests/unit/test_context.py:L538–L608` |
| `ContextTestCase.test_scatter_gather_cells_queued_task_cancelled.cleanup` | function | — | public | not declared | — | `src/nova/tests/unit/test_context.py:L551–L553` |
| `ContextTestCase.test_scatter_gather_cells_queued_task_cancelled.task` | function | (*args, **kwargs) | public | `mock.sentinel.instances` (src/nova/tests/unit/test_context.py:L559) | — | `src/nova/tests/unit/test_context.py:L557–L559` |
| `ContextTestCase.test_scatter_gather_cells_exception` | method | (self, mock_get_inst, mock_log_exception) | public | not declared | 1/28 | `src/nova/tests/unit/test_context.py:L612–L647` |
| `ContextTestCase.test_scatter_gather_all_cells` | method | (self, mock_get_all, mock_scatter) | public | not declared | 1/16 | `src/nova/tests/unit/test_context.py:L651–L668` |
| `ContextTestCase.test_scatter_gather_skip_cell0` | method | (self, mock_get_all, mock_scatter) | public | not declared | 1/16 | `src/nova/tests/unit/test_context.py:L672–L689` |
| `ContextTestCase.test_scatter_gather_single_cell` | method | (self, mock_scatter) | public | not declared | 1/12 | `src/nova/tests/unit/test_context.py:L692–L705` |

## Dependencies

- `import threading` (src/nova/tests/unit/test_context.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/test_context.py:L16)
- `import ddt` (src/nova/tests/unit/test_context.py:L18)
- `keystoneauth1.fixture`: imports `plugin as ks_plugin_fixture` (src/nova/tests/unit/test_context.py:L19)
- `keystoneauth1`: imports `loading as ks_loading` (src/nova/tests/unit/test_context.py:L20)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/test_context.py:L21)
- `oslo_config`: imports `fixture as config_fixture` (src/nova/tests/unit/test_context.py:L22)
- `oslo_context`: imports `context as o_context` (src/nova/tests/unit/test_context.py:L23)
- `oslo_context`: imports `fixture as o_fixture` (src/nova/tests/unit/test_context.py:L24)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/test_context.py:L25)
- `nova`: imports `context` (src/nova/tests/unit/test_context.py:L27)
- `nova`: imports `exception` (src/nova/tests/unit/test_context.py:L28)
- `nova`: imports `objects` (src/nova/tests/unit/test_context.py:L29)
- `nova`: imports `service_auth` (src/nova/tests/unit/test_context.py:L30)
- `nova`: imports `test` (src/nova/tests/unit/test_context.py:L31)
- `nova`: imports `thread_pool_factory` (src/nova/tests/unit/test_context.py:L32)
- `nova`: imports `utils` (src/nova/tests/unit/test_context.py:L33)

## Side Effects

- **global-mutation**: USES_DB_SELF = True (src/nova/tests/unit/test_context.py:L56)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1.fixture import plugin as ks_plugin_fixture (src/nova/tests/unit/test_context.py:L19)
- **privilege** (`crypto-key`): from keystoneauth1 import loading as ks_loading (src/nova/tests/unit/test_context.py:L20)
- **privilege** (`crypto-key`): @mock.patch('keystoneauth1.plugin.BaseAuthPlugin.get_endpoint_data') (src/nova/tests/unit/test_context.py:L148)
- **privilege** (`crypto-key`): @mock.patch('keystoneauth1.loading.load_auth_from_conf_options') (src/nova/tests/unit/test_context.py:L228)
- **privilege** (`crypto-key`): @mock.patch('keystoneauth1.loading.load_session_from_conf_options') (src/nova/tests/unit/test_context.py:L229)
- **privilege** (`crypto-key`): @mock.patch('keystoneauth1.loading.load_auth_from_conf_options') (src/nova/tests/unit/test_context.py:L297)
- **privilege** (`crypto-key`): @mock.patch('keystoneauth1.loading.load_session_from_conf_options') (src/nova/tests/unit/test_context.py:L298)

