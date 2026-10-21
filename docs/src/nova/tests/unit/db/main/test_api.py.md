# src/nova/tests/unit/db/main/test_api.py

## Overview

This file implements the `test_api` module, defining 42 classs, 4 constants, 4 fields, 41 functions, 502 methods, 1 property, 1 staticmethod, 38 imports, 5 side effects, 68 security surface entries.

Lines: total 7729, code 6059, comment 488, blank 1182

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L61–L61` |
| `_make_compute_node` | function | (host, node, hv_type, service_id) | unexported | `compute_node_dict` (src/nova/tests/unit/db/main/test_api.py:L89) | 1/25 | `src/nova/tests/unit/db/main/test_api.py:L64–L89` |
| `_quota_create` | function | (context, project_id, user_id) | unexported | not declared | 3/18 | `src/nova/tests/unit/db/main/test_api.py:L92–L111` |
| `_assert_instance_id_mapping` | function | (_ctxt, tc, inst_uuid, expected_existing=False) | unexported | not declared | 2/11 | `src/nova/tests/unit/db/main/test_api.py:L115–L129` |
| `DbTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L132–L163` |
| `DbTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L133–L137` |
| `DbTestCase.create_instance_with_args` | method | (self, **kwargs) | public | `db.instance_create(ctxt, args)` (src/nova/tests/unit/db/main/test_api.py:L149) | 2/11 | `src/nova/tests/unit/db/main/test_api.py:L139–L149` |
| `DbTestCase.fake_metadata` | method | (self, content) | public | `meta` (src/nova/tests/unit/db/main/test_api.py:L155) | 2/5 | `src/nova/tests/unit/db/main/test_api.py:L151–L155` |
| `DbTestCase.create_metadata_for_instance` | method | (self, instance_uuid) | public | `meta, sys_meta` (src/nova/tests/unit/db/main/test_api.py:L163) | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L157–L163` |
| `HelperTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L166–L191` |
| `HelperTestCase.test_joinedload_helper` | method | (self, mock_jl) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L168–L180` |
| `HelperTestCase.test_joinedload_helper_single` | method | (self, mock_jl) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L183–L191` |
| `DecoratorTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L194–L298` |
| `DecoratorTestCase._test_decorator_wraps_helper` | method | (self, decorator) | private | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L195–L203` |
| `DecoratorTestCase._test_decorator_wraps_helper.test_func` | function | — | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L196–L197` |
| `DecoratorTestCase.test_require_context_decorator_wraps_functions_properly` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/db/main/test_api.py:L205–L206` |
| `DecoratorTestCase.test_require_deadlock_retry_wraps_functions_properly` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L208–L210` |
| `DecoratorTestCase.test_select_db_reader_mode_select_sync` | method | (self, mock_clone, mock_using) | public | not declared | 1/10 | `src/nova/tests/unit/db/main/test_api.py:L214–L227` |
| `DecoratorTestCase.test_select_db_reader_mode_select_sync.func` | function | (self, context, value, use_slave=False) | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L217–L218` |
| `DecoratorTestCase.test_select_db_reader_mode_select_async` | method | (self, mock_clone, mock_using) | public | not declared | 1/10 | `src/nova/tests/unit/db/main/test_api.py:L231–L244` |
| `DecoratorTestCase.test_select_db_reader_mode_select_async.func` | function | (self, context, value, use_slave=False) | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L234–L235` |
| `DecoratorTestCase.test_select_db_reader_mode_no_use_slave_select_sync` | method | (self, mock_clone, mock_using) | public | not declared | 1/11 | `src/nova/tests/unit/db/main/test_api.py:L248–L262` |
| `DecoratorTestCase.test_select_db_reader_mode_no_use_slave_select_sync.func` | function | (self, context, value) | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L252–L253` |
| `DecoratorTestCase._test_pick_context_manager_disable_db_access` | method | (self, func, mock_DISABLE_DB_ACCESS, mock_log) | private | not declared | 1/10 | `src/nova/tests/unit/db/main/test_api.py:L266–L277` |
| `DecoratorTestCase.test_pick_context_manager_writer_disable_db_access` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L279–L284` |
| `DecoratorTestCase.test_pick_context_manager_writer_disable_db_access.func` | function | (context, value) | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L281–L282` |
| `DecoratorTestCase.test_pick_context_manager_reader_disable_db_access` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L286–L291` |
| `DecoratorTestCase.test_pick_context_manager_reader_disable_db_access.func` | function | (context, value) | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L288–L289` |
| `DecoratorTestCase.test_pick_context_manager_reader_allow_async_disable_db_access` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L293–L298` |
| `DecoratorTestCase.test_pick_context_manager_reader_allow_async_disable_db_access.func` | function | (context, value) | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L295–L296` |
| `_get_fake_aggr_values` | function | — | unexported | `{'name': 'fake_aggregate'}` (src/nova/tests/unit/db/main/test_api.py:L302) | 1/2 | `src/nova/tests/unit/db/main/test_api.py:L301–L302` |
| `_get_fake_aggr_metadata` | function | — | unexported | `{'fake_key1': 'fake_value1', 'fake_key2': 'fake_value2', 'availability_zone': 'fake_avail_zone'}` (src/nova/tests/unit/db/main/test_api.py:L306) | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L305–L308` |
| `_get_fake_aggr_hosts` | function | — | unexported | `['foo.openstack.org']` (src/nova/tests/unit/db/main/test_api.py:L312) | 1/2 | `src/nova/tests/unit/db/main/test_api.py:L311–L312` |
| `_create_aggregate` | function | (context=context.get_admin_context(), values=_get_fake_aggr_values(), metadata=_get_fake_aggr_metadata()) | unexported | `db.aggregate_create(context, values, metadata)` (src/nova/tests/unit/db/main/test_api.py:L318) | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L315–L318` |
| `_create_aggregate_with_hosts` | function | (context=context.get_admin_context(), values=_get_fake_aggr_values(), metadata=_get_fake_aggr_metadata(), hosts=_get_fake_aggr_hosts()) | unexported | `result` (src/nova/tests/unit/db/main/test_api.py:L329) | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L321–L329` |
| `UnsupportedDbRegexpTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L334–L592` |
| `UnsupportedDbRegexpTestCase.test_instance_get_all_by_filters_paginate` | method | (self, mock_get_regexp) | public | not declared | 1/27 | `src/nova/tests/unit/db/main/test_api.py:L336–L364` |
| `UnsupportedDbRegexpTestCase.test_instance_get_all_uuids_by_hosts` | method | (self, mock_get_regexp) | public | not declared | 2/11 | `src/nova/tests/unit/db/main/test_api.py:L366–L376` |
| `UnsupportedDbRegexpTestCase._assert_equals_inst_order` | method | (self, correct_order, filters, sort_keys=None, sort_dirs=None, limit=None, marker=None, match_keys=['uuid', 'vm_state', 'display_name', 'id']) | private | `result` (src/nova/tests/unit/db/main/test_api.py:L394) | 3/13 | `src/nova/tests/unit/db/main/test_api.py:L378–L394` |
| `UnsupportedDbRegexpTestCase.test_instance_get_all_by_filters_sort_keys` | method | (self, mock_get_regexp) | public | not declared | 1/68 | `src/nova/tests/unit/db/main/test_api.py:L396–L479` |
| `UnsupportedDbRegexpTestCase.test_instance_get_all_by_filters_sort_keys_paginate` | method | (self, mock_get_regexp) | public | not declared | 5/41 | `src/nova/tests/unit/db/main/test_api.py:L481–L532` |
| `UnsupportedDbRegexpTestCase.test_instance_get_deleted_by_filters_sort_keys_paginate` | method | (self, mock_get_regexp) | public | not declared | 5/48 | `src/nova/tests/unit/db/main/test_api.py:L534–L592` |
| `ModelQueryTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L595–L623` |
| `ModelQueryTestCase.test_model_query_invalid_arguments` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L596–L611` |
| `ModelQueryTestCase.test_model_query_invalid_arguments.test` | function | (context) | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L598–L609` |
| `ModelQueryTestCase.test_model_query_use_context_session` | method | (self, mock_model_query) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L614–L623` |
| `ModelQueryTestCase.test_model_query_use_context_session.fake_method` | function | (context) | public | `session` (src/nova/tests/unit/db/main/test_api.py:L619) | — | `src/nova/tests/unit/db/main/test_api.py:L616–L619` |
| `EngineFacadeTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L626–L663` |
| `EngineFacadeTestCase.test_use_single_context_session_writer` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L627–L644` |
| `EngineFacadeTestCase.test_use_single_context_session_writer.fake_parent_method` | function | (context) | public | `fake_child_method(context), session` (src/nova/tests/unit/db/main/test_api.py:L635) | — | `src/nova/tests/unit/db/main/test_api.py:L633–L635` |
| `EngineFacadeTestCase.test_use_single_context_session_writer.fake_child_method` | function | (context) | public | `session` (src/nova/tests/unit/db/main/test_api.py:L641) | — | `src/nova/tests/unit/db/main/test_api.py:L638–L641` |
| `EngineFacadeTestCase.test_use_single_context_session_reader` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L646–L663` |
| `EngineFacadeTestCase.test_use_single_context_session_reader.fake_parent_method` | function | (context) | public | `fake_child_method(context), session` (src/nova/tests/unit/db/main/test_api.py:L654) | — | `src/nova/tests/unit/db/main/test_api.py:L652–L654` |
| `EngineFacadeTestCase.test_use_single_context_session_reader.fake_child_method` | function | (context) | public | `session` (src/nova/tests/unit/db/main/test_api.py:L660) | — | `src/nova/tests/unit/db/main/test_api.py:L657–L660` |
| `SqlAlchemyDbApiNoDbTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L666–L748` |
| `SqlAlchemyDbApiNoDbTestCase.test_manual_join_columns_immutable_list` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L669–L676` |
| `SqlAlchemyDbApiNoDbTestCase.test_convert_objects_related_datetimes` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/db/main/test_api.py:L678–L702` |
| `SqlAlchemyDbApiNoDbTestCase.test_convert_objects_related_datetimes_with_strings` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/db/main/test_api.py:L704–L720` |
| `SqlAlchemyDbApiNoDbTestCase.test_get_engine` | method | (self, mock_ctxt_mgr) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L723–L725` |
| `SqlAlchemyDbApiNoDbTestCase.test_get_engine_use_slave` | method | (self, mock_ctxt_mgr) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L728–L730` |
| `SqlAlchemyDbApiNoDbTestCase.test_get_db_conf_with_connection` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L732–L737` |
| `SqlAlchemyDbApiNoDbTestCase.test_instance_get_all_by_filters_paginated_allows_deleted_marker` | method | (self, mock_paginate, mock_fill, mock_get) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L742–L748` |
| `SqlAlchemyDbApiTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L751–L954` |
| `SqlAlchemyDbApiTestCase.test_instance_get_all_by_host` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/db/main/test_api.py:L752–L770` |
| `SqlAlchemyDbApiTestCase.test_instance_get_all_by_host.test` | function | (context) | public | `db.instance_get_all_by_host( context, 'host1')` (src/nova/tests/unit/db/main/test_api.py:L761) | — | `src/nova/tests/unit/db/main/test_api.py:L760–L762` |
| `SqlAlchemyDbApiTestCase.test_instance_get_all_by_host_no_joins` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/db/main/test_api.py:L772–L788` |
| `SqlAlchemyDbApiTestCase.test_instance_get_all_by_host_no_joins.test` | function | (ctxt) | public | `db.instance_get_all_by_host( ctxt, 'host1', columns_to_join=[])` (src/nova/tests/unit/db/main/test_api.py:L780) | — | `src/nova/tests/unit/db/main/test_api.py:L779–L781` |
| `SqlAlchemyDbApiTestCase.test_instance_get_all_uuids_by_hosts` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/db/main/test_api.py:L790–L815` |
| `SqlAlchemyDbApiTestCase.test_instance_get_all_uuids_by_hosts.test1` | function | (context) | public | `db._instance_get_all_uuids_by_hosts(context, ['host1'])` (src/nova/tests/unit/db/main/test_api.py:L798) | — | `src/nova/tests/unit/db/main/test_api.py:L797–L798` |
| `SqlAlchemyDbApiTestCase.test_instance_get_all_uuids_by_hosts.test2` | function | (context) | public | `db._instance_get_all_uuids_by_hosts( context, ['host1', 'host2'])` (src/nova/tests/unit/db/main/test_api.py:L802) | — | `src/nova/tests/unit/db/main/test_api.py:L801–L803` |
| `SqlAlchemyDbApiTestCase.test_instance_get_active_by_window_joined_paging` | method | (self, mock_uuids) | public | not declared | 4/24 | `src/nova/tests/unit/db/main/test_api.py:L818–L850` |
| `SqlAlchemyDbApiTestCase.test_instance_get_active_by_window_joined` | method | (self) | public | not declared | 1/56 | `src/nova/tests/unit/db/main/test_api.py:L852–L917` |
| `SqlAlchemyDbApiTestCase.test_instance_get_all_by_filters_calls_sort` | method | (self, mock_get_all_filters_sort) | public | not declared | 1/10 | `src/nova/tests/unit/db/main/test_api.py:L920–L932` |
| `SqlAlchemyDbApiTestCase.test_instance_get_all_by_filters_sort_key_invalid` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/db/main/test_api.py:L934–L941` |
| `SqlAlchemyDbApiTestCase.test_instance_get_all_by_filters_sort_hidden` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L943–L954` |
| `MigrationTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L957–L1368` |
| `MigrationTestCase.setUp` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/db/main/test_api.py:L959–L976` |
| `MigrationTestCase._create` | method | (self, status='migrating', source_compute='host1', source_node='a', dest_compute='host2', dest_node='b', system_metadata=None, migration_type=None, uuid=None, created_at=None, updated_at=None, user_id=None, project_id=None) | private | `values` (src/nova/tests/unit/db/main/test_api.py:L1003) | 6/24 | `src/nova/tests/unit/db/main/test_api.py:L978–L1003` |
| `MigrationTestCase._assert_in_progress` | method | (self, migrations) | private | not declared | 2/8 | `src/nova/tests/unit/db/main/test_api.py:L1005–L1012` |
| `MigrationTestCase.test_migration_get_in_progress_joins` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L1014–L1020` |
| `MigrationTestCase.test_in_progress_host1_nodea` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L1022–L1027` |
| `MigrationTestCase.test_in_progress_host1_nodeb` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L1029–L1033` |
| `MigrationTestCase.test_in_progress_host2_nodeb` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L1035–L1040` |
| `MigrationTestCase.test_instance_join` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/db/main/test_api.py:L1042–L1047` |
| `MigrationTestCase.test_migration_get_by_uuid` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/db/main/test_api.py:L1049–L1055` |
| `MigrationTestCase.test_migration_get_by_uuid_soft_deleted_and_deleted` | method | (self) | public | not declared | 2/15 | `src/nova/tests/unit/db/main/test_api.py:L1057–L1080` |
| `MigrationTestCase.test_migration_get_by_uuid_soft_deleted_and_deleted.soft_delete_it` | function | (context) | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L1061–L1064` |
| `MigrationTestCase.test_migration_get_by_uuid_soft_deleted_and_deleted.delete_it` | function | (context) | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L1067–L1070` |
| `MigrationTestCase.test_migration_get_by_uuid_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L1082–L1088` |
| `MigrationTestCase.test_get_migrations_by_filters` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/db/main/test_api.py:L1090–L1098` |
| `MigrationTestCase.test_get_migrations_by_uuid_filters` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/db/main/test_api.py:L1100–L1106` |
| `MigrationTestCase.test_get_migrations_by_filters_with_multiple_statuses` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/db/main/test_api.py:L1108–L1114` |
| `MigrationTestCase.test_get_migrations_by_filters_unicode_status` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/db/main/test_api.py:L1116–L1122` |
| `MigrationTestCase.test_get_migrations_by_filters_with_type` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/db/main/test_api.py:L1124–L1132` |
| `MigrationTestCase.test_get_migrations_by_filters_source_compute` | method | (self) | public | not declared | 3/8 | `src/nova/tests/unit/db/main/test_api.py:L1134–L1141` |
| `MigrationTestCase.test_get_migrations_by_filters_instance_uuid` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/db/main/test_api.py:L1143–L1151` |
| `MigrationTestCase.test_get_migrations_by_filters_user_id` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/db/main/test_api.py:L1153–L1166` |
| `MigrationTestCase.test_get_migrations_by_filters_project_id` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/db/main/test_api.py:L1168–L1181` |
| `MigrationTestCase.test_get_migrations_by_filters_user_id_and_project_id` | method | (self) | public | not declared | 2/13 | `src/nova/tests/unit/db/main/test_api.py:L1183–L1199` |
| `MigrationTestCase.test_migration_get_unconfirmed_by_dest_compute` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/db/main/test_api.py:L1201–L1238` |
| `MigrationTestCase.test_migration_get_in_progress_by_instance` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/db/main/test_api.py:L1240–L1251` |
| `MigrationTestCase.test_migration_get_in_progress_by_instance_not_in_progress` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L1253–L1258` |
| `MigrationTestCase.test_migration_get_in_progress_by_instance_not_live_migration` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L1260–L1269` |
| `MigrationTestCase.test_migration_update_not_found` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L1271–L1273` |
| `MigrationTestCase.test_get_migration_for_instance` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L1275–L1282` |
| `MigrationTestCase.test_get_migration_for_instance_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L1284–L1287` |
| `MigrationTestCase._create_3_migration_after_time` | method | (self, time=None) | private | not declared | 2/12 | `src/nova/tests/unit/db/main/test_api.py:L1289–L1300` |
| `MigrationTestCase.test_get_migrations_by_filters_with_limit` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L1302–L1304` |
| `MigrationTestCase.test_get_migrations_by_filters_with_limit_marker` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/db/main/test_api.py:L1306–L1319` |
| `MigrationTestCase.test_get_migrations_by_filters_with_limit_marker_sort` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/db/main/test_api.py:L1321–L1338` |
| `MigrationTestCase.test_get_migrations_by_filters_with_not_found_marker` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L1340–L1343` |
| `MigrationTestCase.test_get_migrations_by_filters_with_changes_since` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/db/main/test_api.py:L1345–L1355` |
| `MigrationTestCase.test_get_migrations_by_filters_with_changes_before` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/db/main/test_api.py:L1357–L1368` |
| `ModelsObjectComparatorMixin` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L1371–L1410` |
| `ModelsObjectComparatorMixin._dict_from_object` | method | (self, obj, ignored_keys) | private | `{k: v for k, v in obj.items() if k not in ignored_keys}` (src/nova/tests/unit/db/main/test_api.py:L1376) | 4/5 | `src/nova/tests/unit/db/main/test_api.py:L1372–L1377` |
| `ModelsObjectComparatorMixin._assertEqualObjects` | method | (self, obj1, obj2, ignored_keys=None) | private | not declared | 2/9 | `src/nova/tests/unit/db/main/test_api.py:L1379–L1388` |
| `ModelsObjectComparatorMixin._assertEqualListsOfObjects` | method | (self, objs1, objs2, ignored_keys=None) | private | not declared | 2/5 | `src/nova/tests/unit/db/main/test_api.py:L1390–L1395` |
| `ModelsObjectComparatorMixin._assertEqualOrderedListOfObjects` | method | (self, objs1, objs2, ignored_keys=None) | private | not declared | 2/5 | `src/nova/tests/unit/db/main/test_api.py:L1397–L1402` |
| `ModelsObjectComparatorMixin._assertEqualListsOfPrimitivesAsSets` | method | (self, primitives1, primitives2) | private | not declared | 3/6 | `src/nova/tests/unit/db/main/test_api.py:L1404–L1410` |
| `InstanceSystemMetadataTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L1413–L1458` |
| `InstanceSystemMetadataTestCase.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L1417–L1422` |
| `InstanceSystemMetadataTestCase.test_instance_system_metadata_get` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L1424–L1427` |
| `InstanceSystemMetadataTestCase.test_instance_system_metadata_update_new_pair` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L1429–L1435` |
| `InstanceSystemMetadataTestCase.test_instance_system_metadata_update_existent_pair` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L1437–L1443` |
| `InstanceSystemMetadataTestCase.test_instance_system_metadata_update_delete_true` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L1445–L1451` |
| `InstanceSystemMetadataTestCase.test_instance_system_metadata_update_nonexistent` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L1454–L1458` |
| `InstanceTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L1462–L2740` |
| `InstanceTestCase.sample_data` | field | — | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L1466–L1474` |
| `InstanceTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L1476–L1478` |
| `InstanceTestCase._assertEqualInstances` | method | (self, instance1, instance2) | private | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L1480–L1483` |
| `InstanceTestCase._assertEqualListsOfInstances` | method | (self, list1, list2) | private | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L1485–L1488` |
| `InstanceTestCase.create_instance_with_args` | method | (self, **kwargs) | public | `db.instance_create(context, args)` (src/nova/tests/unit/db/main/test_api.py:L1497) | 2/8 | `src/nova/tests/unit/db/main/test_api.py:L1490–L1497` |
| `InstanceTestCase.test_instance_create` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L1499–L1501` |
| `InstanceTestCase.test_instance_create_with_deadlock_retry` | method | (self, mock_sg) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L1504–L1507` |
| `InstanceTestCase.test_instance_create_with_object_values` | method | (self) | public | not declared | 3/16 | `src/nova/tests/unit/db/main/test_api.py:L1509–L1524` |
| `InstanceTestCase.test_instance_update_with_object_values` | method | (self) | public | not declared | 3/17 | `src/nova/tests/unit/db/main/test_api.py:L1526–L1542` |
| `InstanceTestCase.test_instance_update_no_metadata_clobber` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/db/main/test_api.py:L1544–L1555` |
| `InstanceTestCase.test_instance_get_all_with_meta` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/db/main/test_api.py:L1557–L1563` |
| `InstanceTestCase.test_instance_get_with_meta` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L1565–L1571` |
| `InstanceTestCase.test_instance_update` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/db/main/test_api.py:L1573–L1585` |
| `InstanceTestCase.test_instance_update_bad_str_dates` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L1587–L1592` |
| `InstanceTestCase.test_instance_update_good_str_dates` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L1594–L1599` |
| `InstanceTestCase.test_create_instance_unique_hostname` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/db/main/test_api.py:L1601–L1626` |
| `InstanceTestCase.test_instance_get_all_by_filters_empty_list_filter` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L1628–L1631` |
| `InstanceTestCase.test_instance_get_all_by_filters_extra_columns` | method | (self, mock_joinedload) | public | not declared | 1/14 | `src/nova/tests/unit/db/main/test_api.py:L1634–L1647` |
| `InstanceTestCase.test_instance_get_active_by_window_extra_columns` | method | (self, mock_joinedload) | public | not declared | 1/17 | `src/nova/tests/unit/db/main/test_api.py:L1650–L1666` |
| `InstanceTestCase.test_instance_get_all_by_filters_with_meta` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/db/main/test_api.py:L1668–L1674` |
| `InstanceTestCase.test_instance_get_all_by_filters_without_meta` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/db/main/test_api.py:L1676–L1684` |
| `InstanceTestCase.test_instance_get_all_by_filters_with_fault` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/db/main/test_api.py:L1686–L1700` |
| `InstanceTestCase.test_instance_get_all_by_filters` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/db/main/test_api.py:L1702–L1705` |
| `InstanceTestCase.test_instance_get_all_by_filters_zero_limit` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L1707–L1710` |
| `InstanceTestCase.test_instance_metadata_get_multi` | method | (self) | public | not declared | 3/7 | `src/nova/tests/unit/db/main/test_api.py:L1712–L1721` |
| `InstanceTestCase.test_instance_metadata_get_multi.test` | function | (context) | public | `db._instance_metadata_get_multi(context, uuids)` (src/nova/tests/unit/db/main/test_api.py:L1717) | — | `src/nova/tests/unit/db/main/test_api.py:L1716–L1717` |
| `InstanceTestCase.test_instance_metadata_get_multi_no_uuids` | method | (self, mock_query_filter) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L1724–L1727` |
| `InstanceTestCase.test_instance_system_system_metadata_get_multi` | method | (self) | public | not declared | 3/7 | `src/nova/tests/unit/db/main/test_api.py:L1729–L1738` |
| `InstanceTestCase.test_instance_system_system_metadata_get_multi.test` | function | (context) | public | `db._instance_system_metadata_get_multi(context, uuids)` (src/nova/tests/unit/db/main/test_api.py:L1734) | — | `src/nova/tests/unit/db/main/test_api.py:L1733–L1734` |
| `InstanceTestCase.test_instance_system_metadata_get_multi_no_uuids` | method | (self, mock_query_filter) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L1741–L1744` |
| `InstanceTestCase.test_instance_get_all_by_filters_regex` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L1746–L1752` |
| `InstanceTestCase.test_instance_get_all_by_filters_changes_since` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/db/main/test_api.py:L1754–L1777` |
| `InstanceTestCase.test_instance_get_all_by_filters_changes_before` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/db/main/test_api.py:L1779–L1802` |
| `InstanceTestCase.test_instance_get_all_by_filters_changes_time_period` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/db/main/test_api.py:L1804–L1836` |
| `InstanceTestCase.test_instance_get_all_by_filters_exact_match` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L1838–L1843` |
| `InstanceTestCase.test_instance_get_all_by_filters_locked_key_true` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L1845–L1850` |
| `InstanceTestCase.test_instance_get_all_by_filters_locked_key_false` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L1852–L1856` |
| `InstanceTestCase.test_instance_get_all_by_filters_metadata` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L1858–L1863` |
| `InstanceTestCase.test_instance_get_all_by_filters_system_metadata` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L1865–L1871` |
| `InstanceTestCase.test_instance_get_all_by_filters_unicode_value` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/db/main/test_api.py:L1873–L1884` |
| `InstanceTestCase.test_instance_get_by_uuid` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L1886–L1892` |
| `InstanceTestCase.test_instance_get_by_uuid_join_empty` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L1894–L1901` |
| `InstanceTestCase.test_instance_get_by_uuid_join_meta` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L1903–L1910` |
| `InstanceTestCase.test_instance_get_by_uuid_join_sys_meta` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L1912–L1919` |
| `InstanceTestCase.test_instance_get_all_by_filters_deleted` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/db/main/test_api.py:L1921–L1929` |
| `InstanceTestCase.test_instance_get_all_by_filters_deleted_and_soft_deleted` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/db/main/test_api.py:L1931–L1941` |
| `InstanceTestCase.test_instance_get_all_by_filters_deleted_no_soft_deleted` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/db/main/test_api.py:L1943–L1954` |
| `InstanceTestCase.test_instance_get_all_by_filters_alive_and_soft_deleted` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/db/main/test_api.py:L1956–L1964` |
| `InstanceTestCase.test_instance_get_all_by_filters_not_deleted` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/db/main/test_api.py:L1966–L1975` |
| `InstanceTestCase.test_instance_get_all_by_filters_cleaned` | method | (self) | public | not declared | 2/14 | `src/nova/tests/unit/db/main/test_api.py:L1977–L1990` |
| `InstanceTestCase.test_instance_get_all_by_host_and_node_no_join` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L1992–L1996` |
| `InstanceTestCase.test_instance_get_all_by_host_and_node` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/db/main/test_api.py:L1998–L2006` |
| `InstanceTestCase.test_instance_get_all_by_host_and_node_fills_manually` | method | (self, mock_getall, mock_fill) | public | not declared | 1/10 | `src/nova/tests/unit/db/main/test_api.py:L2010–L2019` |
| `InstanceTestCase.test_instance_get_all_hung_in_rebooting` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/db/main/test_api.py:L2021–L2041` |
| `InstanceTestCase.test_instance_update_with_expected_vm_state` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L2043–L2046` |
| `InstanceTestCase.test_instance_update_with_unexpected_vm_state` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L2048–L2052` |
| `InstanceTestCase.test_instance_update_with_instance_uuid` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/db/main/test_api.py:L2054–L2077` |
| `InstanceTestCase.test_delete_block_device_mapping_on_instance_destroy` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/db/main/test_api.py:L2079–L2094` |
| `InstanceTestCase.test_delete_instance_metadata_on_instance_destroy` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/db/main/test_api.py:L2096–L2108` |
| `InstanceTestCase.test_delete_instance_faults_on_instance_destroy` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/db/main/test_api.py:L2110–L2132` |
| `InstanceTestCase.test_delete_migrations_on_instance_destroy` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/db/main/test_api.py:L2134–L2153` |
| `InstanceTestCase.test_delete_virtual_interfaces_on_instance_destroy` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/db/main/test_api.py:L2155–L2168` |
| `InstanceTestCase.test_instance_update_and_get_original` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L2170–L2175` |
| `InstanceTestCase.test_instance_update_and_get_original_metadata` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/db/main/test_api.py:L2177–L2186` |
| `InstanceTestCase.test_instance_update_and_get_original_metadata_none_join` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L2188–L2195` |
| `InstanceTestCase.test_instance_update_and_get_original_no_conflict_on_session` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L2197–L2226` |
| `InstanceTestCase.test_instance_update_and_get_original_no_conflict_on_session.test` | function | (context) | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L2199–L2224` |
| `InstanceTestCase.test_instance_update_and_get_original_conflict_race` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/db/main/test_api.py:L2228–L2275` |
| `InstanceTestCase.test_instance_update_and_get_original_conflict_race_fallthrough` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/db/main/test_api.py:L2277–L2290` |
| `InstanceTestCase.test_instance_update_and_get_original_expected_host` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L2292–L2300` |
| `InstanceTestCase.test_instance_update_and_get_original_expected_host_fail` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/db/main/test_api.py:L2302–L2316` |
| `InstanceTestCase.test_instance_update_and_get_original_expected_host_none` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L2318–L2325` |
| `InstanceTestCase.test_instance_update_and_get_original_expected_host_none_fail` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/db/main/test_api.py:L2327–L2341` |
| `InstanceTestCase.test_instance_update_and_get_original_expected_task_state_single_fail` | method | (self) | public | not declared | 2/15 | `src/nova/tests/unit/db/main/test_api.py:L2343–L2360` |
| `InstanceTestCase.test_instance_update_and_get_original_expected_task_state_single_pass` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L2362–L2371` |
| `InstanceTestCase.test_instance_update_and_get_original_expected_task_state_multi_fail` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/db/main/test_api.py:L2373–L2393` |
| `InstanceTestCase.test_instance_update_and_get_original_expected_task_state_multi_pass` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L2395–L2405` |
| `InstanceTestCase.test_instance_update_and_get_original_expected_task_state_deleting` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/db/main/test_api.py:L2407–L2426` |
| `InstanceTestCase.test_instance_update_unique_name` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/db/main/test_api.py:L2428–L2468` |
| `InstanceTestCase._test_instance_update_updates_metadata` | method | (self, metadata_type) | private | not declared | 1/12 | `src/nova/tests/unit/db/main/test_api.py:L2470–L2487` |
| `InstanceTestCase._test_instance_update_updates_metadata.set_and_check` | function | (meta) | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L2473–L2477` |
| `InstanceTestCase.test_security_group_in_use` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/db/main/test_api.py:L2489–L2490` |
| `InstanceTestCase.test_instance_update_updates_system_metadata` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/db/main/test_api.py:L2492–L2494` |
| `InstanceTestCase.test_instance_update_updates_metadata` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/db/main/test_api.py:L2496–L2498` |
| `InstanceTestCase.test_instance_stringified_ips` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/db/main/test_api.py:L2500–L2510` |
| `InstanceTestCase.test_instance_destroy` | method | (self, mock_check_inst_exists) | public | not declared | 1/19 | `src/nova/tests/unit/db/main/test_api.py:L2514–L2534` |
| `InstanceTestCase.test_instance_destroy_already_destroyed` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L2536–L2541` |
| `InstanceTestCase.test_instance_destroy_already_destroyed_race` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/db/main/test_api.py:L2543–L2578` |
| `InstanceTestCase.test_instance_destroy_already_destroyed_race.fake_get_i` | function | (*a, **kw) | public | `instance` (src/nova/tests/unit/db/main/test_api.py:L2569); `real_get_i(*a, **kw)` (src/nova/tests/unit/db/main/test_api.py:L2570) | — | `src/nova/tests/unit/db/main/test_api.py:L2566–L2570` |
| `InstanceTestCase.test_instance_destroy_hard` | method | (self) | public | not declared | 1/92 | `src/nova/tests/unit/db/main/test_api.py:L2580–L2689` |
| `InstanceTestCase.test_check_instance_exists` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L2691–L2699` |
| `InstanceTestCase.test_check_instance_exists.test` | function | (context) | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L2695–L2697` |
| `InstanceTestCase.test_check_instance_exists_non_existing_instance` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L2701–L2708` |
| `InstanceTestCase.test_check_instance_exists_non_existing_instance.test` | function | (ctxt) | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L2703–L2706` |
| `InstanceTestCase.test_check_instance_exists_from_different_tenant` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/db/main/test_api.py:L2710–L2728` |
| `InstanceTestCase.test_check_instance_exists_from_different_tenant.test1` | function | (context) | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L2716–L2718` |
| `InstanceTestCase.test_check_instance_exists_from_different_tenant.test2` | function | (context) | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L2723–L2726` |
| `InstanceTestCase.test_check_instance_exists_admin_context` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L2730–L2740` |
| `InstanceTestCase.test_check_instance_exists_admin_context.test` | function | (context) | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L2735–L2738` |
| `InstanceMetadataTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L2743–L2779` |
| `InstanceMetadataTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L2747–L2749` |
| `InstanceMetadataTestCase.test_instance_metadata_get` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L2751–L2755` |
| `InstanceMetadataTestCase.test_instance_metadata_delete` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L2757–L2763` |
| `InstanceMetadataTestCase.test_instance_metadata_update` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/db/main/test_api.py:L2765–L2779` |
| `InstanceExtraTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L2782–L2838` |
| `InstanceExtraTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L2783–L2786` |
| `InstanceExtraTestCase.test_instance_extra_get_by_uuid_instance_create` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L2788–L2791` |
| `InstanceExtraTestCase.test_instance_extra_update_by_uuid` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/db/main/test_api.py:L2793–L2805` |
| `InstanceExtraTestCase.test_instance_extra_update_by_uuid_and_create` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/db/main/test_api.py:L2807–L2825` |
| `InstanceExtraTestCase.test_instance_extra_update_by_uuid_and_create.test` | function | (context) | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L2809–L2812` |
| `InstanceExtraTestCase.test_instance_extra_get_with_columns` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/db/main/test_api.py:L2827–L2838` |
| `ServiceTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L2841–L3199` |
| `ServiceTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L2842–L2844` |
| `ServiceTestCase._get_base_values` | method | (self) | private | `{ 'uuid': None, 'host': 'fake_host', 'binary': 'fake_binary', 'topic': 'fake_topic', 'report_count': 3, 'disabled': False, 'forced_down': False }` (src/nova/tests/unit/db/main/test_api.py:L2847) | 1/10 | `src/nova/tests/unit/db/main/test_api.py:L2846–L2855` |
| `ServiceTestCase._create_service` | method | (self, values) | private | `db.service_create(self.ctxt, v)` (src/nova/tests/unit/db/main/test_api.py:L2860) | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L2857–L2860` |
| `ServiceTestCase.test_service_create` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/db/main/test_api.py:L2862–L2866` |
| `ServiceTestCase.test_service_create_disabled` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L2868–L2871` |
| `ServiceTestCase.test_service_create_disabled_reason` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L2873–L2877` |
| `ServiceTestCase.test_service_create_disabled_non_compute_ignored` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L2879–L2886` |
| `ServiceTestCase.test_service_destroy` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L2888–L2896` |
| `ServiceTestCase.test_service_destroy_not_nova_compute` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L2898–L2905` |
| `ServiceTestCase.test_service_destroy_and_reset_mapped_field` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/db/main/test_api.py:L2907–L2919` |
| `ServiceTestCase.test_service_update` | method | (self) | public | not declared | 2/14 | `src/nova/tests/unit/db/main/test_api.py:L2921–L2934` |
| `ServiceTestCase.test_service_update_not_found_exception` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L2936–L2938` |
| `ServiceTestCase.test_service_update_with_set_forced_down` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L2940–L2944` |
| `ServiceTestCase.test_service_update_with_unset_forced_down` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L2946–L2950` |
| `ServiceTestCase.test_service_get` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L2952–L2957` |
| `ServiceTestCase.test_service_get_by_uuid` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L2959–L2966` |
| `ServiceTestCase.test_service_get_by_uuid_not_found` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L2968–L2973` |
| `ServiceTestCase.test_service_get_minimum_version` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/db/main/test_api.py:L2975–L2992` |
| `ServiceTestCase.test_service_get_not_found_exception` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L2994–L2996` |
| `ServiceTestCase.test_service_get_by_host_and_topic` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L2998–L3005` |
| `ServiceTestCase.test_service_get_by_host_and_binary` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L3007–L3014` |
| `ServiceTestCase.test_service_get_by_host_and_binary_raises` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L3016–L3019` |
| `ServiceTestCase.test_service_get_all` | method | (self) | public | not declared | 3/16 | `src/nova/tests/unit/db/main/test_api.py:L3021–L3037` |
| `ServiceTestCase.test_service_get_all_by_topic` | method | (self) | public | not declared | 2/11 | `src/nova/tests/unit/db/main/test_api.py:L3039–L3049` |
| `ServiceTestCase.test_service_get_all_by_binary` | method | (self) | public | not declared | 2/11 | `src/nova/tests/unit/db/main/test_api.py:L3051–L3061` |
| `ServiceTestCase.test_service_get_all_by_binary_include_disabled` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/db/main/test_api.py:L3063–L3074` |
| `ServiceTestCase.test_service_get_all_computes_by_hv_type` | method | (self) | public | not declared | 3/21 | `src/nova/tests/unit/db/main/test_api.py:L3076–L3097` |
| `ServiceTestCase.test_service_get_all_computes_by_hv_type_include_disabled` | method | (self) | public | not declared | 3/21 | `src/nova/tests/unit/db/main/test_api.py:L3099–L3120` |
| `ServiceTestCase.test_service_get_all_by_host` | method | (self) | public | not declared | 2/11 | `src/nova/tests/unit/db/main/test_api.py:L3122–L3133` |
| `ServiceTestCase.test_service_get_by_compute_host` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/db/main/test_api.py:L3135–L3148` |
| `ServiceTestCase.test_service_get_by_compute_host_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L3150–L3153` |
| `ServiceTestCase.test_service_binary_exists_exception` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L3155–L3160` |
| `ServiceTestCase.test_service_topic_exists_exceptions` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L3162–L3167` |
| `ServiceTestCase.test_migration_migrate_to_uuid` | method | (self) | public | not declared | 2/23 | `src/nova/tests/unit/db/main/test_api.py:L3169–L3199` |
| `InstanceActionTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L3202–L3751` |
| `InstanceActionTestCase.IGNORED_FIELDS` | constant | — | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L3203–L3209` |
| `InstanceActionTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L3211–L3213` |
| `InstanceActionTestCase._create_action_values` | method | (self, uuid, action='run_instance', ctxt=None, extra=None, instance_create=True) | private | `values` (src/nova/tests/unit/db/main/test_api.py:L3236) | 4/20 | `src/nova/tests/unit/db/main/test_api.py:L3215–L3236` |
| `InstanceActionTestCase._create_event_values` | method | (self, uuid, event='schedule', ctxt=None, extra=None) | private | `values` (src/nova/tests/unit/db/main/test_api.py:L3252) | 3/15 | `src/nova/tests/unit/db/main/test_api.py:L3238–L3252` |
| `InstanceActionTestCase._assertActionSaved` | method | (self, action, uuid) | private | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L3254–L3258` |
| `InstanceActionTestCase._assertActionEventSaved` | method | (self, event, action_id) | private | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L3260–L3265` |
| `InstanceActionTestCase.test_instance_action_start` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L3267–L3277` |
| `InstanceActionTestCase.test_instance_action_finish` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L3279–L3290` |
| `InstanceActionTestCase.test_instance_action_finish_without_started_event` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L3292–L3299` |
| `InstanceActionTestCase.test_instance_actions_get_by_instance` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/db/main/test_api.py:L3301–L3324` |
| `InstanceActionTestCase.test_instance_actions_get_are_in_order` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/db/main/test_api.py:L3326–L3343` |
| `InstanceActionTestCase.test_instance_actions_get_with_limit` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/db/main/test_api.py:L3345–L3370` |
| `InstanceActionTestCase.test_instance_actions_get_with_changes_since` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/db/main/test_api.py:L3372–L3396` |
| `InstanceActionTestCase.test_instance_actions_get_with_changes_before` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/db/main/test_api.py:L3398–L3425` |
| `InstanceActionTestCase.test_instance_actions_get_with_not_found_marker` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L3427–L3430` |
| `InstanceActionTestCase.test_instance_action_get_by_instance_and_action` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/db/main/test_api.py:L3432–L3453` |
| `InstanceActionTestCase.test_instance_action_get_by_instance_and_action_by_order` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/db/main/test_api.py:L3455–L3481` |
| `InstanceActionTestCase.test_instance_action_event_start` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/db/main/test_api.py:L3483–L3497` |
| `InstanceActionTestCase.test_instance_action_event_start_without_action` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L3499–L3505` |
| `InstanceActionTestCase.test_instance_action_event_finish_without_started_event` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/db/main/test_api.py:L3507–L3519` |
| `InstanceActionTestCase.test_instance_action_event_finish_without_action` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/db/main/test_api.py:L3521–L3531` |
| `InstanceActionTestCase.test_instance_action_event_finish_success` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/db/main/test_api.py:L3533–L3551` |
| `InstanceActionTestCase.test_instance_action_event_finish_error` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/db/main/test_api.py:L3553–L3571` |
| `InstanceActionTestCase.test_instance_action_and_event_start_string_time` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L3573–L3583` |
| `InstanceActionTestCase.test_instance_action_events_get_are_in_order` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/db/main/test_api.py:L3585–L3611` |
| `InstanceActionTestCase.test_instance_action_event_get_by_id` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/db/main/test_api.py:L3613–L3636` |
| `InstanceActionTestCase.test_instance_action_event_start_with_different_request_id` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/db/main/test_api.py:L3638–L3652` |
| `InstanceActionTestCase.test_instance_action_event_finish_with_different_request_id` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/db/main/test_api.py:L3654–L3675` |
| `InstanceActionTestCase.test_instance_action_updated_with_event_start_and_finish_action` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/db/main/test_api.py:L3677–L3708` |
| `InstanceActionTestCase.test_instance_action_not_updated_with_unknown_event_request` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/db/main/test_api.py:L3710–L3751` |
| `InstanceFaultTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L3754–L3853` |
| `InstanceFaultTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L3755–L3757` |
| `InstanceFaultTestCase._create_fault_values` | method | (self, uuid, code=404) | private | `{ 'message': 'message', 'details': 'detail', 'instance_uuid': uuid, 'code': code, 'host': 'localhost' }` (src/nova/tests/unit/db/main/test_api.py:L3760) | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L3759–L3766` |
| `InstanceFaultTestCase.test_instance_fault_create` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/db/main/test_api.py:L3768–L3788` |
| `InstanceFaultTestCase.test_instance_fault_get_by_instance` | method | (self) | public | not declared | 4/15 | `src/nova/tests/unit/db/main/test_api.py:L3790–L3813` |
| `InstanceFaultTestCase.test_instance_fault_get_latest_by_instance` | method | (self) | public | not declared | 5/18 | `src/nova/tests/unit/db/main/test_api.py:L3815–L3840` |
| `InstanceFaultTestCase.test_instance_faults_get_by_instance_uuids_no_faults` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L3842–L3847` |
| `InstanceFaultTestCase.test_instance_faults_get_by_instance_uuids_no_uuids` | method | (self, mock_filter) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L3850–L3853` |
| `InstanceDestroyConstraints` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L3856–L3899` |
| `InstanceDestroyConstraints.test_destroy_with_equal_any_constraint_met_single_value` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L3858–L3864` |
| `InstanceDestroyConstraints.test_destroy_with_equal_any_constraint_met` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L3866–L3873` |
| `InstanceDestroyConstraints.test_destroy_with_equal_any_constraint_not_met` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L3875–L3882` |
| `InstanceDestroyConstraints.test_destroy_with_not_equal_constraint_met` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L3884–L3890` |
| `InstanceDestroyConstraints.test_destroy_with_not_equal_constraint_not_met` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L3892–L3899` |
| `VolumeUsageDBApiTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L3902–L4148` |
| `VolumeUsageDBApiTestCase.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L3904–L3910` |
| `VolumeUsageDBApiTestCase.test_vol_usage_update_no_totals_update` | method | (self) | public | not declared | 2/59 | `src/nova/tests/unit/db/main/test_api.py:L3912–L3977` |
| `VolumeUsageDBApiTestCase.test_vol_usage_update_no_totals_update._compare` | function | (vol_usage, expected) | private | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L3948–L3950` |
| `VolumeUsageDBApiTestCase.test_vol_usage_update_totals_update` | method | (self) | public | not declared | 2/65 | `src/nova/tests/unit/db/main/test_api.py:L3979–L4050` |
| `VolumeUsageDBApiTestCase.test_vol_usage_update_when_blockdevicestats_reset` | method | (self) | public | not declared | 2/43 | `src/nova/tests/unit/db/main/test_api.py:L4052–L4101` |
| `VolumeUsageDBApiTestCase.test_vol_usage_update_totals_update_when_blockdevicestats_reset` | method | (self) | public | not declared | 2/37 | `src/nova/tests/unit/db/main/test_api.py:L4103–L4148` |
| `ShareMappingDBApiTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L4151–L4464` |
| `ShareMappingDBApiTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L4153–L4157` |
| `ShareMappingDBApiTestCase._compare` | method | (self, share_mapping, expected) | private | not declared | 2/3 | `src/nova/tests/unit/db/main/test_api.py:L4159–L4161` |
| `ShareMappingDBApiTestCase.create_test_data` | method | (ctxt) | public | `expected_share_mappings` (src/nova/tests/unit/db/main/test_api.py:L4207) | 1/42 | `src/nova/tests/unit/db/main/test_api.py:L4164–L4207` |
| `ShareMappingDBApiTestCase.test_share_mapping_update` | method | (self) | public | not declared | 3/53 | `src/nova/tests/unit/db/main/test_api.py:L4209–L4266` |
| `ShareMappingDBApiTestCase.test_share_mapping_duplicate` | method | (self) | public | not declared | 2/31 | `src/nova/tests/unit/db/main/test_api.py:L4268–L4304` |
| `ShareMappingDBApiTestCase.test_share_mapping_using_same_tag` | method | (self) | public | not declared | 2/31 | `src/nova/tests/unit/db/main/test_api.py:L4306–L4343` |
| `ShareMappingDBApiTestCase.test_share_mapping_get_by_share_id` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/db/main/test_api.py:L4345–L4360` |
| `ShareMappingDBApiTestCase.test_share_mapping_get_by_instance_uuid` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/db/main/test_api.py:L4362–L4381` |
| `ShareMappingDBApiTestCase.test_share_mapping_get_by_instance_uuids` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/db/main/test_api.py:L4383–L4393` |
| `ShareMappingDBApiTestCase.test_share_mapping_get_by_instance_uuids_subset` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/db/main/test_api.py:L4395–L4404` |
| `ShareMappingDBApiTestCase.test_share_mapping_get_by_instance_uuid_and_share_id` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/db/main/test_api.py:L4406–L4429` |
| `ShareMappingDBApiTestCase.test_share_mapping_get_by_instance_uuid_and_share_id_missing` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/db/main/test_api.py:L4431–L4440` |
| `ShareMappingDBApiTestCase.test_share_mapping_delete_by_instance_uuid_and_share_id` | method | (self) | public | not declared | 2/21 | `src/nova/tests/unit/db/main/test_api.py:L4442–L4464` |
| `TaskLogTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L4467–L4527` |
| `TaskLogTestCase.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/db/main/test_api.py:L4469–L4479` |
| `TaskLogTestCase.test_task_log_get` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/db/main/test_api.py:L4481–L4490` |
| `TaskLogTestCase.test_task_log_get_all` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L4492–L4498` |
| `TaskLogTestCase.test_task_log_begin_task` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L4500–L4506` |
| `TaskLogTestCase.test_task_log_begin_task_duplicate` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L4508–L4513` |
| `TaskLogTestCase.test_task_log_end_task` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L4515–L4521` |
| `TaskLogTestCase.test_task_log_end_task_task_not_running` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L4523–L4527` |
| `BlockDeviceMappingTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L4530–L4881` |
| `BlockDeviceMappingTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L4531–L4534` |
| `BlockDeviceMappingTestCase._create_bdm` | method | (self, values) | private | `bdm` (src/nova/tests/unit/db/main/test_api.py:L4549) | 3/12 | `src/nova/tests/unit/db/main/test_api.py:L4536–L4549` |
| `BlockDeviceMappingTestCase.test_scrub_empty_str_values_no_effect` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L4551–L4555` |
| `BlockDeviceMappingTestCase.test_scrub_empty_str_values_empty_string` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L4557–L4560` |
| `BlockDeviceMappingTestCase.test_scrub_empty_str_values_empty_unicode` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L4562–L4565` |
| `BlockDeviceMappingTestCase.test_block_device_mapping_create` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L4567–L4570` |
| `BlockDeviceMappingTestCase.test_block_device_mapping_create_with_blank_uuid` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L4572–L4575` |
| `BlockDeviceMappingTestCase.test_block_device_mapping_create_with_invalid_uuid` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L4577–L4579` |
| `BlockDeviceMappingTestCase.test_block_device_mapping_create_with_attachment_id` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L4581–L4583` |
| `BlockDeviceMappingTestCase.test_block_device_mapping_update` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/db/main/test_api.py:L4585–L4599` |
| `BlockDeviceMappingTestCase.test_block_device_mapping_update_or_create` | method | (self) | public | not declared | 9/49 | `src/nova/tests/unit/db/main/test_api.py:L4601–L4656` |
| `BlockDeviceMappingTestCase.test_block_device_mapping_update_or_create_with_uuid` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/db/main/test_api.py:L4658–L4672` |
| `BlockDeviceMappingTestCase.test_block_device_mapping_update_or_create_with_blank_uuid` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/db/main/test_api.py:L4674–L4687` |
| `BlockDeviceMappingTestCase.test_block_device_mapping_update_or_create_with_invalid_uuid` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/db/main/test_api.py:L4689–L4699` |
| `BlockDeviceMappingTestCase.test_block_device_mapping_update_or_create_multiple_ephemeral` | method | (self) | public | not declared | 2/21 | `src/nova/tests/unit/db/main/test_api.py:L4701–L4725` |
| `BlockDeviceMappingTestCase.test_block_device_mapping_update_or_create_check_remove_virt` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/db/main/test_api.py:L4727–L4749` |
| `BlockDeviceMappingTestCase.test_block_device_mapping_get_all_by_instance_uuids` | method | (self) | public | not declared | 2/20 | `src/nova/tests/unit/db/main/test_api.py:L4751–L4775` |
| `BlockDeviceMappingTestCase.test_block_device_mapping_get_all_by_instance` | method | (self) | public | not declared | 2/16 | `src/nova/tests/unit/db/main/test_api.py:L4777–L4796` |
| `BlockDeviceMappingTestCase.test_block_device_mapping_destroy` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L4798–L4803` |
| `BlockDeviceMappingTestCase.test_block_device_mapping_destroy_by_instance_and_volume` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/db/main/test_api.py:L4805–L4817` |
| `BlockDeviceMappingTestCase.test_block_device_mapping_destroy_by_instance_and_device` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/db/main/test_api.py:L4819–L4829` |
| `BlockDeviceMappingTestCase.test_block_device_mapping_get_all_by_volume_id` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L4831–L4838` |
| `BlockDeviceMappingTestCase.test_block_device_mapping_get_all_by_volume_id_join_instance` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L4840–L4846` |
| `BlockDeviceMappingTestCase.test_block_device_mapping_get_by_instance_and_volume_id` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L4848–L4853` |
| `BlockDeviceMappingTestCase.test_block_device_mapping_get_by_instance_and_volume_id_multiplebdms` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/db/main/test_api.py:L4855–L4864` |
| `BlockDeviceMappingTestCase.test_block_device_mapping_get_by_instance_and_volume_id_multiattach` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/db/main/test_api.py:L4866–L4881` |
| `VirtualInterfaceTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L4884–L5043` |
| `VirtualInterfaceTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L4885–L4888` |
| `VirtualInterfaceTestCase._get_base_values` | method | (self) | private | `{ 'instance_uuid': self.instance_uuid, 'address': 'fake_address', 'network_id': uuidsentinel.network, 'uuid': uuidutils.generate_uuid(), 'tag': 'fake-tag', }` (src/nova/tests/unit/db/main/test_api.py:L4891) | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L4890–L4897` |
| `VirtualInterfaceTestCase._create_virt_interface` | method | (self, values) | private | `db.virtual_interface_create(self.ctxt, v)` (src/nova/tests/unit/db/main/test_api.py:L4902) | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L4899–L4902` |
| `VirtualInterfaceTestCase.test_virtual_interface_create` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L4904–L4909` |
| `VirtualInterfaceTestCase.test_virtual_interface_create_with_duplicate_address` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L4911–L4914` |
| `VirtualInterfaceTestCase.test_virtual_interface_get` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/db/main/test_api.py:L4916–L4922` |
| `VirtualInterfaceTestCase.test_virtual_interface_get_by_address` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/db/main/test_api.py:L4924–L4930` |
| `VirtualInterfaceTestCase.test_virtual_interface_get_by_address_not_found` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L4932–L4934` |
| `VirtualInterfaceTestCase.test_virtual_interface_get_by_address_data_error_exception` | method | (self, mock_query) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L4937–L4943` |
| `VirtualInterfaceTestCase.test_virtual_interface_get_by_uuid` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/db/main/test_api.py:L4945–L4950` |
| `VirtualInterfaceTestCase.test_virtual_interface_get_by_instance` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/db/main/test_api.py:L4952–L4966` |
| `VirtualInterfaceTestCase.test_virtual_interface_get_by_instance_and_network` | method | (self) | public | not declared | 2/13 | `src/nova/tests/unit/db/main/test_api.py:L4968–L4981` |
| `VirtualInterfaceTestCase.test_virtual_interface_delete_by_instance` | method | (self) | public | not declared | 2/13 | `src/nova/tests/unit/db/main/test_api.py:L4983–L4998` |
| `VirtualInterfaceTestCase.test_virtual_interface_delete` | method | (self) | public | not declared | 2/11 | `src/nova/tests/unit/db/main/test_api.py:L5000–L5012` |
| `VirtualInterfaceTestCase.test_virtual_interface_get_all` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/db/main/test_api.py:L5014–L5021` |
| `VirtualInterfaceTestCase.test_virtual_interface_update` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/db/main/test_api.py:L5023–L5043` |
| `QuotaTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L5046–L5128` |
| `QuotaTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L5050–L5052` |
| `QuotaTestCase.test_quota_create` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L5054–L5058` |
| `QuotaTestCase.test_quota_get` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L5060–L5063` |
| `QuotaTestCase.test_quota_get_all_by_project` | method | (self) | public | not declared | 4/10 | `src/nova/tests/unit/db/main/test_api.py:L5065–L5074` |
| `QuotaTestCase.test_quota_get_all_by_project_and_user` | method | (self) | public | not declared | 4/14 | `src/nova/tests/unit/db/main/test_api.py:L5076–L5089` |
| `QuotaTestCase.test_quota_update` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L5091–L5097` |
| `QuotaTestCase.test_quota_update_nonexistent` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L5099–L5101` |
| `QuotaTestCase.test_quota_get_nonexistent` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L5103–L5105` |
| `QuotaTestCase.test_quota_destroy_all_by_project` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L5107–L5114` |
| `QuotaTestCase.test_quota_destroy_all_by_project_and_user` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L5116–L5123` |
| `QuotaTestCase.test_quota_create_exists` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L5125–L5128` |
| `QuotaClassTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L5131–L5185` |
| `QuotaClassTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L5133–L5135` |
| `QuotaClassTestCase.test_quota_class_get_default` | method | (self) | public | not declared | 2/13 | `src/nova/tests/unit/db/main/test_api.py:L5137–L5150` |
| `QuotaClassTestCase.test_quota_class_create` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L5152–L5156` |
| `QuotaClassTestCase.test_quota_class_get` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L5158–L5161` |
| `QuotaClassTestCase.test_quota_class_get_nonexistent` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L5163–L5165` |
| `QuotaClassTestCase.test_quota_class_get_all_by_name` | method | (self) | public | not declared | 4/9 | `src/nova/tests/unit/db/main/test_api.py:L5167–L5175` |
| `QuotaClassTestCase.test_quota_class_update` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L5177–L5181` |
| `QuotaClassTestCase.test_quota_class_update_nonexistent` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L5183–L5185` |
| `S3ImageTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L5188–L5220` |
| `S3ImageTestCase.setUp` | method | (self) | public | not declared | 3/6 | `src/nova/tests/unit/db/main/test_api.py:L5190–L5195` |
| `S3ImageTestCase.test_s3_image_create` | method | (self) | public | not declared | 3/5 | `src/nova/tests/unit/db/main/test_api.py:L5197–L5201` |
| `S3ImageTestCase.test_s3_image_get_by_uuid` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/db/main/test_api.py:L5203–L5207` |
| `S3ImageTestCase.test_s3_image_get` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/db/main/test_api.py:L5209–L5212` |
| `S3ImageTestCase.test_s3_image_get_not_found` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L5214–L5216` |
| `S3ImageTestCase.test_s3_image_get_by_uuid_not_found` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L5218–L5220` |
| `ComputeNodeTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L5223–L5853` |
| `ComputeNodeTestCase._ignored_keys` | field | — | private | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L5225–L5225` |
| `ComputeNodeTestCase.setUp` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/db/main/test_api.py:L5227–L5261` |
| `ComputeNodeTestCase.test_compute_node_create` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L5263–L5267` |
| `ComputeNodeTestCase.test_compute_node_create_duplicate_host_hypervisor_hostname` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L5269–L5279` |
| `ComputeNodeTestCase.test_compute_node_create_duplicate_uuid` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L5281–L5295` |
| `ComputeNodeTestCase.test_compute_node_get_all` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/db/main/test_api.py:L5297–L5305` |
| `ComputeNodeTestCase.test_compute_node_get_all_mapped_less_than` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/db/main/test_api.py:L5307–L5321` |
| `ComputeNodeTestCase.test_compute_node_get_all_by_pagination` | method | (self) | public | not declared | 1/50 | `src/nova/tests/unit/db/main/test_api.py:L5323–L5374` |
| `ComputeNodeTestCase.test_compute_node_get_all_deleted_compute_node` | method | (self) | public | not declared | 4/22 | `src/nova/tests/unit/db/main/test_api.py:L5376–L5410` |
| `ComputeNodeTestCase.test_compute_node_get_all_mult_compute_nodes_one_service_entry` | method | (self) | public | not declared | 2/19 | `src/nova/tests/unit/db/main/test_api.py:L5412–L5436` |
| `ComputeNodeTestCase.test_compute_node_get_all_by_host_with_distinct_hosts` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/db/main/test_api.py:L5438–L5454` |
| `ComputeNodeTestCase.test_compute_node_get_all_by_host_with_same_host` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/db/main/test_api.py:L5456–L5472` |
| `ComputeNodeTestCase.test_compute_node_get_all_by_host_not_found` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L5474–L5476` |
| `ComputeNodeTestCase.test_compute_nodes_get_by_service_id_one_result` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L5478–L5485` |
| `ComputeNodeTestCase.test_compute_nodes_get_by_service_id_multiple_results` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/db/main/test_api.py:L5487–L5503` |
| `ComputeNodeTestCase.test_compute_nodes_get_by_service_id_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L5505–L5508` |
| `ComputeNodeTestCase.test_compute_node_get_by_host_and_nodename` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/db/main/test_api.py:L5510–L5525` |
| `ComputeNodeTestCase.test_compute_node_get_by_host_and_nodename_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L5527–L5530` |
| `ComputeNodeTestCase.test_compute_node_get_by_nodename` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/db/main/test_api.py:L5532–L5547` |
| `ComputeNodeTestCase.test_compute_node_get_by_nodename_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L5549–L5552` |
| `ComputeNodeTestCase.test_compute_node_get` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L5554–L5561` |
| `ComputeNodeTestCase.test_compute_node_update` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/db/main/test_api.py:L5563–L5577` |
| `ComputeNodeTestCase.test_compute_node_delete` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L5579–L5583` |
| `ComputeNodeTestCase.test_compute_node_delete_different_host` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L5585–L5590` |
| `ComputeNodeTestCase.test_compute_node_search_by_hypervisor` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/db/main/test_api.py:L5592–L5608` |
| `ComputeNodeTestCase.test_compute_node_statistics` | method | (self) | public | not declared | 1/68 | `src/nova/tests/unit/db/main/test_api.py:L5610–L5686` |
| `ComputeNodeTestCase.test_compute_node_statistics_disabled_service` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L5688–L5693` |
| `ComputeNodeTestCase.test_compute_node_statistics_with_old_service_id` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/db/main/test_api.py:L5695–L5713` |
| `ComputeNodeTestCase.test_compute_node_statistics_with_other_service` | method | (self) | public | not declared | 2/20 | `src/nova/tests/unit/db/main/test_api.py:L5715–L5735` |
| `ComputeNodeTestCase.test_compute_node_statistics_delete_and_recreate_service` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/db/main/test_api.py:L5737–L5784` |
| `ComputeNodeTestCase.test_compute_node_not_found` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L5786–L5788` |
| `ComputeNodeTestCase.test_compute_node_update_always_updates_updated_at` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L5790–L5794` |
| `ComputeNodeTestCase.test_compute_node_update_override_updated_at` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L5796–L5807` |
| `ComputeNodeTestCase.test_service_destroy_with_compute_node` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L5809–L5813` |
| `ComputeNodeTestCase.test_service_destroy_with_old_compute_node` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/db/main/test_api.py:L5815–L5829` |
| `ComputeNodeTestCase.test_dbapi_compute_node_get_model` | method | (self, mock_get_model) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L5832–L5835` |
| `ComputeNodeTestCase.test_compute_node_get_model` | method | (self, mock_model_query) | public | not declared | 1/10 | `src/nova/tests/unit/db/main/test_api.py:L5838–L5853` |
| `ComputeNodeTestCase.test_compute_node_get_model.FakeFiltered` | class | — | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L5840–L5842` |
| `ComputeNodeTestCase.test_compute_node_get_model.FakeFiltered.first` | method | (self) | public | `mock.sentinel.first` (src/nova/tests/unit/db/main/test_api.py:L5842) | — | `src/nova/tests/unit/db/main/test_api.py:L5841–L5842` |
| `ComputeNodeTestCase.test_compute_node_get_model.FakeModelQuery` | class | — | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L5846–L5848` |
| `ComputeNodeTestCase.test_compute_node_get_model.FakeModelQuery.filter_by` | method | (self, id) | public | `fake_filtered_cn` (src/nova/tests/unit/db/main/test_api.py:L5848) | — | `src/nova/tests/unit/db/main/test_api.py:L5847–L5848` |
| `CertificateTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L5856–L5896` |
| `CertificateTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L5858–L5861` |
| `CertificateTestCase._get_certs_values` | method | (self) | private | `[{k: v + str(x) for k, v in base_values.items()} for x in range(1, 4)]` (src/nova/tests/unit/db/main/test_api.py:L5869) | 3/8 | `src/nova/tests/unit/db/main/test_api.py:L5863–L5870` |
| `CertificateTestCase._certificates_create` | method | (self) | private | `[db.certificate_create(self.ctxt, cert) for cert in self._get_certs_values()]` (src/nova/tests/unit/db/main/test_api.py:L5873) | 2/3 | `src/nova/tests/unit/db/main/test_api.py:L5872–L5874` |
| `CertificateTestCase.test_certificate_create` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/db/main/test_api.py:L5876–L5881` |
| `CertificateTestCase.test_certificate_get_all_by_project` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L5883–L5886` |
| `CertificateTestCase.test_certificate_get_all_by_user` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L5888–L5891` |
| `CertificateTestCase.test_certificate_get_all_by_user_and_project` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L5893–L5896` |
| `Ec2TestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L5899–L5938` |
| `Ec2TestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L5901–L5903` |
| `Ec2TestCase.test_ec2_instance_create` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L5905–L5908` |
| `Ec2TestCase.test_ec2_instance_get_by_uuid` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L5910–L5913` |
| `Ec2TestCase.test_ec2_instance_get_by_id` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L5915–L5918` |
| `Ec2TestCase.test_ec2_instance_get_by_uuid_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L5920–L5923` |
| `Ec2TestCase.test_ec2_instance_get_by_id_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L5925–L5928` |
| `Ec2TestCase.test_get_instance_uuid_by_ec2_id` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L5930–L5933` |
| `Ec2TestCase.test_get_instance_uuid_by_ec2_id_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L5935–L5938` |
| `ArchiveTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L5941–L6563` |
| `ArchiveTestCase.setUp` | method | (self) | public | not declared | 2/25 | `src/nova/tests/unit/db/main/test_api.py:L5943–L5968` |
| `ArchiveTestCase._assert_shadow_tables_empty_except` | method | (self, *exceptions) | private | not declared | 4/10 | `src/nova/tests/unit/db/main/test_api.py:L5970–L5985` |
| `ArchiveTestCase.test_shadow_tables` | method | (self) | public | not declared | 8/35 | `src/nova/tests/unit/db/main/test_api.py:L5987–L6035` |
| `ArchiveTestCase.test_archive_deleted_rows` | method | (self) | public | not declared | 2/49 | `src/nova/tests/unit/db/main/test_api.py:L6037–L6107` |
| `ArchiveTestCase.test_archive_deleted_rows_before` | method | (self) | public | not declared | 2/71 | `src/nova/tests/unit/db/main/test_api.py:L6109–L6215` |
| `ArchiveTestCase.test_archive_deleted_rows_for_every_uuid_table` | method | (self) | public | not declared | 4/8 | `src/nova/tests/unit/db/main/test_api.py:L6217–L6224` |
| `ArchiveTestCase._test_archive_deleted_rows_for_one_uuid_table` | method | (self, tablename) | private | `1` (src/nova/tests/unit/db/main/test_api.py:L6232); `1` (src/nova/tests/unit/db/main/test_api.py:L6236); `2` (src/nova/tests/unit/db/main/test_api.py:L6248); `0` (src/nova/tests/unit/db/main/test_api.py:L6313) | 5/60 | `src/nova/tests/unit/db/main/test_api.py:L6226–L6313` |
| `ArchiveTestCase.test_archive_deleted_rows_shadow_insertions_equals_deletions` | method | (self) | public | not declared | 2/27 | `src/nova/tests/unit/db/main/test_api.py:L6315–L6353` |
| `ArchiveTestCase.test_archive_deleted_rows_for_migrations` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/db/main/test_api.py:L6355–L6384` |
| `ArchiveTestCase.test_archive_deleted_rows_2_tables` | method | (self) | public | not declared | 2/67 | `src/nova/tests/unit/db/main/test_api.py:L6386–L6473` |
| `ArchiveTestCase.test_archive_deleted_rows_task_log` | method | (self) | public | not declared | 2/65 | `src/nova/tests/unit/db/main/test_api.py:L6475–L6563` |
| `PciDeviceDBApiTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L6566–L6753` |
| `PciDeviceDBApiTestCase.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/db/main/test_api.py:L6567–L6575` |
| `PciDeviceDBApiTestCase._get_fake_pci_devs` | method | (self) | private | `{'id': 3353, 'uuid': uuidsentinel.pci_device1, 'compute_node_id': 1, 'address': '0000:0f:08.7', 'vendor_id': '8086', 'product_id': '1520', 'numa_node': 1, 'dev_type': fields.PciDeviceType.SRIOV_VF, 'd` (src/nova/tests/unit/db/main/test_api.py:L6578) | 1/32 | `src/nova/tests/unit/db/main/test_api.py:L6577–L6608` |
| `PciDeviceDBApiTestCase.compute_node` | method | (self) | public | `self._compute_node` (src/nova/tests/unit/db/main/test_api.py:L6624) | 2/14 | `src/nova/tests/unit/db/main/test_api.py:L6611–L6624` |
| `PciDeviceDBApiTestCase._create_fake_pci_devs` | method | (self) | private | `(v1, v2)` (src/nova/tests/unit/db/main/test_api.py:L6636) | 2/9 | `src/nova/tests/unit/db/main/test_api.py:L6626–L6636` |
| `PciDeviceDBApiTestCase.test_pci_device_get_by_addr` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L6638–L6642` |
| `PciDeviceDBApiTestCase.test_pci_device_get_by_addr_not_found` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L6644–L6648` |
| `PciDeviceDBApiTestCase.test_pci_device_get_all_by_parent_addr` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L6650–L6654` |
| `PciDeviceDBApiTestCase.test_pci_device_get_all_by_parent_addr_empty` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L6656–L6660` |
| `PciDeviceDBApiTestCase.test_pci_device_get_by_id` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L6662–L6665` |
| `PciDeviceDBApiTestCase.test_pci_device_get_by_id_not_found` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L6667–L6671` |
| `PciDeviceDBApiTestCase.test_pci_device_get_all_by_node` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L6673–L6676` |
| `PciDeviceDBApiTestCase.test_pci_device_get_all_by_node_empty` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L6678–L6681` |
| `PciDeviceDBApiTestCase.test_pci_device_get_by_instance_uuid` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/db/main/test_api.py:L6683–L6694` |
| `PciDeviceDBApiTestCase.test_pci_device_get_by_instance_uuid_check_status` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/db/main/test_api.py:L6696–L6707` |
| `PciDeviceDBApiTestCase.test_pci_device_update` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/db/main/test_api.py:L6709–L6723` |
| `PciDeviceDBApiTestCase.test_pci_device_destroy` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/db/main/test_api.py:L6725–L6734` |
| `PciDeviceDBApiTestCase.test_pci_device_destroy_exception` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L6736–L6742` |
| `PciDeviceDBApiTestCase._create_fake_pci_devs_old_format` | method | (self) | private | not declared | 2/8 | `src/nova/tests/unit/db/main/test_api.py:L6744–L6753` |
| `RetryOnDeadlockTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L6757–L6775` |
| `RetryOnDeadlockTestCase.test_without_deadlock` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L6758–L6763` |
| `RetryOnDeadlockTestCase.test_without_deadlock.call_api` | function | (*args, **kwargs) | public | `True` (src/nova/tests/unit/db/main/test_api.py:L6762) | — | `src/nova/tests/unit/db/main/test_api.py:L6761–L6762` |
| `RetryOnDeadlockTestCase.test_raise_deadlock` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L6765–L6775` |
| `RetryOnDeadlockTestCase.test_raise_deadlock.call_api` | function | (*args, **kwargs) | public | `True` (src/nova/tests/unit/db/main/test_api.py:L6774) | — | `src/nova/tests/unit/db/main/test_api.py:L6770–L6774` |
| `TestSqlalchemyTypesRepr` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L6778–L6814` |
| `TestSqlalchemyTypesRepr.setUp` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/db/main/test_api.py:L6782–L6799` |
| `TestSqlalchemyTypesRepr.test_cidr_repr` | method | (self) | public | not declared | 3/13 | `src/nova/tests/unit/db/main/test_api.py:L6801–L6814` |
| `TestMySQLSqlalchemyTypesRepr` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L6817–L6818` |
| `TestMySQLSqlalchemyTypesRepr.FIXTURE` | constant | — | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L6818–L6818` |
| `TestPostgreSQLSqlalchemyTypesRepr` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L6821–L6822` |
| `TestPostgreSQLSqlalchemyTypesRepr.FIXTURE` | constant | — | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L6822–L6822` |
| `TestDBInstanceTags` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L6825–L7058` |
| `TestDBInstanceTags.sample_data` | field | — | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L6827–L6835` |
| `TestDBInstanceTags.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L6837–L6841` |
| `TestDBInstanceTags._create_instance` | method | (self) | private | `inst['uuid']` (src/nova/tests/unit/db/main/test_api.py:L6845) | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L6843–L6845` |
| `TestDBInstanceTags._get_tags_from_resp` | method | (self, tag_refs) | private | `[(t.resource_id, t.tag) for t in tag_refs]` (src/nova/tests/unit/db/main/test_api.py:L6848) | 2/2 | `src/nova/tests/unit/db/main/test_api.py:L6847–L6848` |
| `TestDBInstanceTags.test_instance_tag_add` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/db/main/test_api.py:L6850–L6862` |
| `TestDBInstanceTags.test_instance_tag_add_duplication` | method | (self) | public | not declared | 2/8 | `src/nova/tests/unit/db/main/test_api.py:L6864–L6875` |
| `TestDBInstanceTags.test_instance_tag_set` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/db/main/test_api.py:L6877–L6901` |
| `TestDBInstanceTags.test_instance_tag_set_empty_add` | method | (self, mock_insert) | public | not declared | 1/9 | `src/nova/tests/unit/db/main/test_api.py:L6905–L6919` |
| `TestDBInstanceTags.test_instance_tag_set_empty_delete` | method | (self, mock_delete) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L6922–L6932` |
| `TestDBInstanceTags.test_instance_tag_get_by_instance_uuid` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/db/main/test_api.py:L6934–L6959` |
| `TestDBInstanceTags.test_instance_tag_get_by_instance_uuid_no_tags` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L6961–L6964` |
| `TestDBInstanceTags.test_instance_tag_delete` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/db/main/test_api.py:L6966–L6986` |
| `TestDBInstanceTags.test_instance_tag_delete_non_existent` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L6988–L6991` |
| `TestDBInstanceTags.test_instance_tag_delete_all` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/db/main/test_api.py:L6993–L7012` |
| `TestDBInstanceTags.test_instance_tag_exists` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/db/main/test_api.py:L7014–L7025` |
| `TestDBInstanceTags.test_instance_tag_add_to_non_existing_instance` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L7027–L7030` |
| `TestDBInstanceTags.test_instance_tag_set_to_non_existing_instance` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L7032–L7035` |
| `TestDBInstanceTags.test_instance_tag_get_from_non_existing_instance` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L7037–L7041` |
| `TestDBInstanceTags.test_instance_tag_delete_from_non_existing_instance` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_api.py:L7043–L7046` |
| `TestDBInstanceTags.test_instance_tag_delete_all_from_non_existing_instance` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L7048–L7052` |
| `TestDBInstanceTags.test_instance_tag_exists_non_existing_instance` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L7054–L7058` |
| `TestInstanceInfoCache` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L7062–L7154` |
| `TestInstanceInfoCache.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L7063–L7067` |
| `TestInstanceInfoCache.test_instance_info_cache_get` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L7069–L7075` |
| `TestInstanceInfoCache.test_instance_info_cache_update` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/db/main/test_api.py:L7077–L7090` |
| `TestInstanceInfoCache.test_instance_info_cache_delete` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/db/main/test_api.py:L7092–L7101` |
| `TestInstanceInfoCache.test_instance_info_cache_update_duplicate` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/db/main/test_api.py:L7103–L7123` |
| `TestInstanceInfoCache.test_instance_info_cache_create_using_update` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L7125–L7132` |
| `TestInstanceInfoCache.test_instance_info_cache_retried_on_deadlock` | method | (self, update) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L7135–L7142` |
| `TestInstanceInfoCache.test_instance_info_cache_not_retried_on_deadlock_forever` | method | (self, update) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L7145–L7154` |
| `TestInstanceTagsFiltering` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L7157–L7404` |
| `TestInstanceTagsFiltering.sample_data` | field | — | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L7158–L7160` |
| `TestInstanceTagsFiltering.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L7162–L7164` |
| `TestInstanceTagsFiltering._create_instance_with_kwargs` | method | (self, **kw) | private | `db.instance_create(context, data)` (src/nova/tests/unit/db/main/test_api.py:L7170) | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L7166–L7170` |
| `TestInstanceTagsFiltering._create_instances` | method | (self, count) | private | `[self._create_instance_with_kwargs()['uuid'] for i in range(count)]` (src/nova/tests/unit/db/main/test_api.py:L7173) | 2/3 | `src/nova/tests/unit/db/main/test_api.py:L7172–L7174` |
| `TestInstanceTagsFiltering._assertEqualInstanceUUIDs` | method | (self, expected_uuids, observed_instances) | private | not declared | 2/3 | `src/nova/tests/unit/db/main/test_api.py:L7176–L7178` |
| `TestInstanceTagsFiltering.test_instance_get_all_by_filters_tag_any` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L7180–L7189` |
| `TestInstanceTagsFiltering.test_instance_get_all_by_filters_tag_any_empty` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L7191–L7199` |
| `TestInstanceTagsFiltering.test_instance_get_all_by_filters_tag` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/db/main/test_api.py:L7201–L7210` |
| `TestInstanceTagsFiltering.test_instance_get_all_by_filters_tag_empty` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_api.py:L7212–L7220` |
| `TestInstanceTagsFiltering.test_instance_get_all_by_filters_tag_any_and_tag` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/db/main/test_api.py:L7222–L7232` |
| `TestInstanceTagsFiltering.test_instance_get_all_by_filters_tags_and_project_id` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/db/main/test_api.py:L7234–L7253` |
| `TestInstanceTagsFiltering.test_instance_get_all_by_filters_not_tags` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/db/main/test_api.py:L7255–L7271` |
| `TestInstanceTagsFiltering.test_instance_get_all_by_filters_not_tags_multiple_cells` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/db/main/test_api.py:L7273–L7297` |
| `TestInstanceTagsFiltering.test_instance_get_all_by_filters_not_tags_any` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/db/main/test_api.py:L7299–L7313` |
| `TestInstanceTagsFiltering.test_instance_get_all_by_filters_not_tags_and_tags` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/db/main/test_api.py:L7315–L7327` |
| `TestInstanceTagsFiltering.test_instance_get_all_by_filters_tags_contradictory` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/db/main/test_api.py:L7329–L7352` |
| `TestInstanceTagsFiltering.test_instance_get_all_by_filters_not_tags_and_tags_any` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/db/main/test_api.py:L7354–L7367` |
| `TestInstanceTagsFiltering.test_instance_get_all_by_filters_not_tags_and_not_tags_any` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/db/main/test_api.py:L7369–L7382` |
| `TestInstanceTagsFiltering.test_instance_get_all_by_filters_all_tag_filters` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/db/main/test_api.py:L7384–L7404` |
| `ConsoleAuthTokenTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L7407–L7597` |
| `ConsoleAuthTokenTestCase._create_instances` | method | (self, uuids) | private | not declared | 2/5 | `src/nova/tests/unit/db/main/test_api.py:L7409–L7413` |
| `ConsoleAuthTokenTestCase._create` | method | (self, token_hash, instance_uuid, expire_offset, host=None) | private | not declared | 2/9 | `src/nova/tests/unit/db/main/test_api.py:L7415–L7423` |
| `ConsoleAuthTokenTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_api.py:L7425–L7427` |
| `ConsoleAuthTokenTestCase.test_console_auth_token_create_no_instance` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_api.py:L7429–L7434` |
| `ConsoleAuthTokenTestCase.test_console_auth_token_get_valid_deleted_instance` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/db/main/test_api.py:L7436–L7448` |
| `ConsoleAuthTokenTestCase.test_console_auth_token_destroy_all_by_instance` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/db/main/test_api.py:L7450–L7475` |
| `ConsoleAuthTokenTestCase.test_console_auth_token_get_valid_by_expiry` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/db/main/test_api.py:L7477–L7493` |
| `ConsoleAuthTokenTestCase.test_console_auth_token_get_valid_by_uuid` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/db/main/test_api.py:L7495–L7507` |
| `ConsoleAuthTokenTestCase.test_console_auth_token_destroy_expired` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/db/main/test_api.py:L7509–L7536` |
| `ConsoleAuthTokenTestCase.test_console_auth_token_destroy_expired_by_host` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/db/main/test_api.py:L7538–L7566` |
| `ConsoleAuthTokenTestCase.test_console_auth_token_get_valid_without_uuid_deleted_instance` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/db/main/test_api.py:L7568–L7579` |
| `ConsoleAuthTokenTestCase.test_console_auth_token_get_valid_without_uuid_by_expiry` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/db/main/test_api.py:L7581–L7597` |
| `SortMarkerHelper` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L7600–L7729` |
| `SortMarkerHelper.setUp` | method | (self) | public | not declared | 3/21 | `src/nova/tests/unit/db/main/test_api.py:L7601–L7625` |
| `SortMarkerHelper.test_with_one_key` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L7627–L7634` |
| `SortMarkerHelper._test_with_multiple_keys` | method | (self, sort_keys, sort_dirs, value_fn) | private | not declared | 5/34 | `src/nova/tests/unit/db/main/test_api.py:L7636–L7690` |
| `SortMarkerHelper.test_with_two_keys` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L7692–L7697` |
| `SortMarkerHelper.test_with_three_keys` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L7699–L7712` |
| `SortMarkerHelper.test_no_match` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L7714–L7719` |
| `SortMarkerHelper.test_by_bool` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_api.py:L7721–L7729` |
| `ShareMappingDBApiTestCase.create_test_data` | staticmethod | — | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L4163–L4207` |
| `PciDeviceDBApiTestCase.compute_node` | property | — | public | not declared | — | `src/nova/tests/unit/db/main/test_api.py:L6610–L6624` |

## Dependencies

- `import copy` (src/nova/tests/unit/db/main/test_api.py:L19)
- `import datetime` (src/nova/tests/unit/db/main/test_api.py:L20)
- `unittest`: imports `mock` (src/nova/tests/unit/db/main/test_api.py:L21)
- `dateutil`: imports `parser as dateutil_parser` (src/nova/tests/unit/db/main/test_api.py:L23)
- `import netaddr` (src/nova/tests/unit/db/main/test_api.py:L24)
- `oslo_db`: imports `api as oslo_db_api` (src/nova/tests/unit/db/main/test_api.py:L25)
- `oslo_db`: imports `exception as db_exc` (src/nova/tests/unit/db/main/test_api.py:L26)
- `oslo_db.sqlalchemy`: imports `enginefacade` (src/nova/tests/unit/db/main/test_api.py:L27)
- `oslo_db.sqlalchemy`: imports `test_fixtures` (src/nova/tests/unit/db/main/test_api.py:L28)
- `oslo_db.sqlalchemy`: imports `update_match` (src/nova/tests/unit/db/main/test_api.py:L29)
- `oslo_db.sqlalchemy`: imports `utils as sqlalchemyutils` (src/nova/tests/unit/db/main/test_api.py:L30)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/db/main/test_api.py:L31)
- `oslo_utils`: imports `fixture as utils_fixture` (src/nova/tests/unit/db/main/test_api.py:L32)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/unit/db/main/test_api.py:L33)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/db/main/test_api.py:L34)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/db/main/test_api.py:L35)
- `import sqlalchemy as sa` (src/nova/tests/unit/db/main/test_api.py:L36)
- `sqlalchemy`: imports `exc as sqla_exc` (src/nova/tests/unit/db/main/test_api.py:L37)
- `sqlalchemy`: imports `inspect` (src/nova/tests/unit/db/main/test_api.py:L38)
- `sqlalchemy.orm`: imports `query` (src/nova/tests/unit/db/main/test_api.py:L39)
- `sqlalchemy.orm`: imports `session as sqla_session` (src/nova/tests/unit/db/main/test_api.py:L40)
- `sqlalchemy`: imports `sql` (src/nova/tests/unit/db/main/test_api.py:L41)
- `nova`: imports `block_device` (src/nova/tests/unit/db/main/test_api.py:L43)
- `nova.compute`: imports `rpcapi as compute_rpcapi` (src/nova/tests/unit/db/main/test_api.py:L44)
- `nova.compute`: imports `task_states` (src/nova/tests/unit/db/main/test_api.py:L45)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/db/main/test_api.py:L46)
- `import nova.conf` (src/nova/tests/unit/db/main/test_api.py:L47)
- `nova`: imports `context` (src/nova/tests/unit/db/main/test_api.py:L48)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/db/main/test_api.py:L49)
- `nova.db.main`: imports `models` (src/nova/tests/unit/db/main/test_api.py:L50)
- `nova.db`: imports `types as col_types` (src/nova/tests/unit/db/main/test_api.py:L51)
- `nova.db`: imports `utils as db_utils` (src/nova/tests/unit/db/main/test_api.py:L52)
- `nova`: imports `exception` (src/nova/tests/unit/db/main/test_api.py:L53)
- `nova.objects`: imports `fields` (src/nova/tests/unit/db/main/test_api.py:L54)
- `nova`: imports `test` (src/nova/tests/unit/db/main/test_api.py:L55)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/db/main/test_api.py:L56)
- `nova.tests.unit`: imports `fake_console_auth_token` (src/nova/tests/unit/db/main/test_api.py:L57)
- `nova`: imports `utils` (src/nova/tests/unit/db/main/test_api.py:L58)

## Side Effects

- **network**: return ['foo.openstack.org'] (src/nova/tests/unit/db/main/test_api.py:L312)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/db/main/test_api.py:L61)
- **global-mutation**: IGNORED_FIELDS = [ (src/nova/tests/unit/db/main/test_api.py:L3203)
- **global-mutation**: FIXTURE = test_fixtures.MySQLOpportunisticFixture (src/nova/tests/unit/db/main/test_api.py:L6818)
- **global-mutation**: FIXTURE = test_fixtures.PostgresqlOpportunisticFixture (src/nova/tests/unit/db/main/test_api.py:L6822)

## Security Surface

- **sink** (`db-write`): inst_id_mapping = db.model_query( (src/nova/tests/unit/db/main/test_api.py:L120)
- **sink** (`db-write`): args.update(kwargs) (src/nova/tests/unit/db/main/test_api.py:L148)
- **sink** (`db-write`): db.model_query(context, models.Instance) (src/nova/tests/unit/db/main/test_api.py:L618)
- **sink** (`db-write`): db.model_query(context, models.Instance) (src/nova/tests/unit/db/main/test_api.py:L640)
- **sink** (`db-write`): db.model_query(context, models.Instance) (src/nova/tests/unit/db/main/test_api.py:L659)
- **sink** (`db-write`): db.model_query(context, models.Migration).\ (src/nova/tests/unit/db/main/test_api.py:L1062)
- **sink** (`db-write`): db.model_query(context, models.Migration, read_deleted="yes").\ (src/nova/tests/unit/db/main/test_api.py:L1068)
- **sink** (`db-write`): args.update(kwargs) (src/nova/tests/unit/db/main/test_api.py:L1496)
- **sink** (`db-write`): db.model_query(context, models.InstanceExtra).\ (src/nova/tests/unit/db/main/test_api.py:L2810)
- **sink** (`db-write`): v.update(values) (src/nova/tests/unit/db/main/test_api.py:L2859)
- **sink** (`db-write`): values.update({'topic': 'top1'}) (src/nova/tests/unit/db/main/test_api.py:L3158)
- **sink** (`db-write`): values.update({'binary': 'bin1'}) (src/nova/tests/unit/db/main/test_api.py:L3165)
- **sink** (`db-write`): values.update(extra) (src/nova/tests/unit/db/main/test_api.py:L3235)
- **sink** (`db-write`): values.update(extra) (src/nova/tests/unit/db/main/test_api.py:L3251)
- **sink** (`db-write`): """Tests that we don't update the action.updated_at field when (src/nova/tests/unit/db/main/test_api.py:L3711)
- **sink** (`db-write`): expected[uuid].insert(0, fault) (src/nova/tests/unit/db/main/test_api.py:L3807)
- **sink** (`db-write`): v.update(values) (src/nova/tests/unit/db/main/test_api.py:L4901)
- **sink** (`db-write`): update = {'tag': 'bar'} (src/nova/tests/unit/db/main/test_api.py:L5031)
- **sink** (`db-write`): db.virtual_interface_update(self.ctxt, vif_uuid, update) (src/nova/tests/unit/db/main/test_api.py:L5040)
- **sink** (`db-write`): "SELECT * FROM %s" % table (src/nova/tests/unit/db/main/test_api.py:L5983)
- **sink** (`db-write`): ins_stmt = self.instance_id_mappings.insert().values( (src/nova/tests/unit/db/main/test_api.py:L6041)
- **sink** (`db-write`): update_statement = self.instance_id_mappings.update().where( (src/nova/tests/unit/db/main/test_api.py:L6048)
- **sink** (`db-write`): qiim = sql.select(self.instance_id_mappings).where( (src/nova/tests/unit/db/main/test_api.py:L6053)
- **sink** (`db-write`): qsiim = sql.select(self.shadow_instance_id_mappings).where( (src/nova/tests/unit/db/main/test_api.py:L6056)
- **sink** (`db-write`): ins_stmt = self.instances.insert().values(uuid=uuidstr) (src/nova/tests/unit/db/main/test_api.py:L6112)
- **sink** (`db-write`): ins_stmt = self.instance_actions.insert().values( (src/nova/tests/unit/db/main/test_api.py:L6116)
- **sink** (`db-write`): ins_stmt = self.instance_actions_events.insert().values( (src/nova/tests/unit/db/main/test_api.py:L6123)
- **sink** (`db-write`): update_statement = self.instances.update().where( (src/nova/tests/unit/db/main/test_api.py:L6131)
- **sink** (`db-write`): update_statement = self.instances.update().where( (src/nova/tests/unit/db/main/test_api.py:L6139)
- **sink** (`db-write`): update_statement = self.instances.update().where( (src/nova/tests/unit/db/main/test_api.py:L6146)
- **sink** (`db-write`): qiim = sql.select(self.instances).where( (src/nova/tests/unit/db/main/test_api.py:L6152)
- **sink** (`db-write`): qsiim = sql.select(self.shadow_instances).where( (src/nova/tests/unit/db/main/test_api.py:L6155)
- **sink** (`db-write`): """:returns: 0 on success, 1 if no uuid column, 2 if insert failed.""" (src/nova/tests/unit/db/main/test_api.py:L6227)
- **sink** (`db-write`): ins_stmt = main_table.insert().values(uuid=uuidstr) (src/nova/tests/unit/db/main/test_api.py:L6241)
- **sink** (`db-write`): update_statement = main_table.update().where( (src/nova/tests/unit/db/main/test_api.py:L6250)
- **sink** (`db-write`): qmt = sql.select(main_table).where( (src/nova/tests/unit/db/main/test_api.py:L6256)
- **sink** (`db-write`): qst = sql.select(shadow_table).where( (src/nova/tests/unit/db/main/test_api.py:L6259)
- **sink** (`db-write`): ins_stmt = self.instance_id_mappings.insert().values(uuid=uuidstr) (src/nova/tests/unit/db/main/test_api.py:L6318)
- **sink** (`db-write`): update_statement = self.instance_id_mappings.update().where( (src/nova/tests/unit/db/main/test_api.py:L6323)
- **sink** (`db-write`): qiim = sql.select(self.instance_id_mappings).where( (src/nova/tests/unit/db/main/test_api.py:L6329)
- **sink** (`db-write`): qsiim = sql.select(self.shadow_instance_id_mappings).where( (src/nova/tests/unit/db/main/test_api.py:L6332)
- **sink** (`db-write`): ins_stmt = self.instances.insert().values( (src/nova/tests/unit/db/main/test_api.py:L6362)
- **sink** (`db-write`): ins_stmt = self.migrations.insert().values( (src/nova/tests/unit/db/main/test_api.py:L6370)
- **sink** (`db-write`): ins_stmt = self.instance_id_mappings.insert().values(uuid=uuidstr) (src/nova/tests/unit/db/main/test_api.py:L6389)
- **sink** (`db-write`): ins_stmt2 = self.instances.insert().values(uuid=uuidstr) (src/nova/tests/unit/db/main/test_api.py:L6392)
- **sink** (`db-write`): update_statement = self.instance_id_mappings.update().\ (src/nova/tests/unit/db/main/test_api.py:L6396)
- **sink** (`db-write`): update_statement2 = self.instances.update().\ (src/nova/tests/unit/db/main/test_api.py:L6401)
- **sink** (`db-write`): qiim = sql.select(self.instance_id_mappings).where( (src/nova/tests/unit/db/main/test_api.py:L6407)
- **sink** (`db-write`): qi = sql.select(self.instances).where( (src/nova/tests/unit/db/main/test_api.py:L6410)
- **sink** (`db-write`): qsiim = sql.select(self.shadow_instance_id_mappings).where( (src/nova/tests/unit/db/main/test_api.py:L6413)
- **sink** (`db-write`): qsi = sql.select(self.shadow_instances).where( (src/nova/tests/unit/db/main/test_api.py:L6416)
- **sink** (`db-write`): ins_stmt = self.task_log.insert().values( (src/nova/tests/unit/db/main/test_api.py:L6478)
- **sink** (`db-write`): update_statement = self.task_log.update().where( (src/nova/tests/unit/db/main/test_api.py:L6486)
- **sink** (`db-write`): update_statement = self.task_log.update().where( (src/nova/tests/unit/db/main/test_api.py:L6494)
- **sink** (`db-write`): update_statement = self.task_log.update().where( (src/nova/tests/unit/db/main/test_api.py:L6501)
- **sink** (`db-write`): qtl = sql.select(self.task_log).where( (src/nova/tests/unit/db/main/test_api.py:L6507)
- **sink** (`db-write`): qstl = sql.select(self.shadow_task_log).where( (src/nova/tests/unit/db/main/test_api.py:L6510)
- **sink** (`db-write`): conn.execute(self.table.insert(), {'addr': i[0]}) (src/nova/tests/unit/db/main/test_api.py:L6809)
- **sink** (`db-write`): query = self.table.select().order_by(self.table.c.id) (src/nova/tests/unit/db/main/test_api.py:L6811)
- **sink** (`db-write`): @mock.patch('nova.db.main.models.Tag.__table__.insert', (src/nova/tests/unit/db/main/test_api.py:L6903)
- **sink** (`db-write`): return_value=models.Tag.__table__.insert()) (src/nova/tests/unit/db/main/test_api.py:L6904)
- **sink** (`db-write`): @mock.patch.object(models.InstanceInfoCache, 'update') (src/nova/tests/unit/db/main/test_api.py:L7134)
- **sink** (`db-write`): def test_instance_info_cache_retried_on_deadlock(self, update): (src/nova/tests/unit/db/main/test_api.py:L7135)
- **sink** (`db-write`): update.side_effect = [db_exc.DBDeadlock(), db_exc.DBDeadlock(), None] (src/nova/tests/unit/db/main/test_api.py:L7136)
- **sink** (`db-write`): @mock.patch.object(models.InstanceInfoCache, 'update') (src/nova/tests/unit/db/main/test_api.py:L7144)
- **sink** (`db-write`): def test_instance_info_cache_not_retried_on_deadlock_forever(self, update): (src/nova/tests/unit/db/main/test_api.py:L7145)
- **sink** (`db-write`): update.side_effect = db_exc.DBDeadlock (src/nova/tests/unit/db/main/test_api.py:L7146)
- **sink** (`db-write`): data.update(kw) (src/nova/tests/unit/db/main/test_api.py:L7169)

