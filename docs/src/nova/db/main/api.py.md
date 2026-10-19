# src/nova/db/main/api.py

## Overview

This file implements the `api` module, defining 3 classs, 4 constants, 232 functions, 6 methods, 4 variables, 35 imports, 46 side effects, 204 security surface entries.

Lines: total 4967, code 3535, comment 473, blank 959

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `profiler_sqlalchemy` | variable | — | exported | not declared | — | `src/nova/db/main/api.py:L57–L57` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/db/main/api.py:L59–L59` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/db/main/api.py:L60–L60` |
| `DISABLE_DB_ACCESS` | constant | — | exported | not declared | — | `src/nova/db/main/api.py:L62–L62` |
| `context_manager` | variable | — | exported | not declared | — | `src/nova/db/main/api.py:L64–L64` |
| `_get_db_conf` | function | (conf_group, connection=None) | unexported | `kw` (src/nova/db/main/api.py:L71) | 2/5 | `src/nova/db/main/api.py:L67–L71` |
| `_context_manager_from_context` | function | (context) | unexported | `context.db_connection` (src/nova/db/main/api.py:L77) | 3/6 | `src/nova/db/main/api.py:L74–L79` |
| `_joinedload_all` | function | (lead_entity, column) | unexported | `joined` (src/nova/db/main/api.py:L105) | 2/9 | `src/nova/db/main/api.py:L82–L105` |
| `configure` | function | (conf) | exported | not declared | 4/9 | `src/nova/db/main/api.py:L108–L117` |
| `create_context_manager` | function | (connection=None) | exported | `ctxt_mgr` (src/nova/db/main/api.py:L127) | 1/4 | `src/nova/db/main/api.py:L120–L127` |
| `get_context_manager` | function | (context) | exported | `_context_manager_from_context(context) or context_manager` (src/nova/db/main/api.py:L135) | 2/2 | `src/nova/db/main/api.py:L130–L135` |
| `get_engine` | function | (use_slave=False, context=None) | exported | `ctxt_mgr.reader.get_engine()` (src/nova/db/main/api.py:L146); `ctxt_mgr.writer.get_engine()` (src/nova/db/main/api.py:L147) | 2/5 | `src/nova/db/main/api.py:L138–L147` |
| `_SHADOW_TABLE_PREFIX` | variable | — | unexported | not declared | — | `src/nova/db/main/api.py:L150–L150` |
| `_DEFAULT_QUOTA_NAME` | variable | — | unexported | not declared | — | `src/nova/db/main/api.py:L151–L151` |
| `PER_PROJECT_QUOTAS` | constant | — | exported | not declared | — | `src/nova/db/main/api.py:L152–L152` |
| `select_db_reader_mode` | function | (f) | exported | `wrapper` (src/nova/db/main/api.py:L181) | 1/5 | `src/nova/db/main/api.py:L155–L181` |
| `select_db_reader_mode.wrapper` | function | (*args, **kwargs) | public | `f(*args, **kwargs)` (src/nova/db/main/api.py:L179) | — | `src/nova/db/main/api.py:L166–L179` |
| `_check_db_access` | function | — | unexported | not declared | 2/8 | `src/nova/db/main/api.py:L184–L192` |
| `pick_context_manager_writer` | function | (f) | exported | `wrapper` (src/nova/db/main/api.py:L209) | 1/5 | `src/nova/db/main/api.py:L195–L209` |
| `pick_context_manager_writer.wrapper` | function | (context, *args, **kwargs) | public | `f(context, *args, **kwargs)` (src/nova/db/main/api.py:L207) | — | `src/nova/db/main/api.py:L203–L207` |
| `pick_context_manager_reader` | function | (f) | exported | `wrapper` (src/nova/db/main/api.py:L226) | 1/5 | `src/nova/db/main/api.py:L212–L226` |
| `pick_context_manager_reader.wrapper` | function | (context, *args, **kwargs) | public | `f(context, *args, **kwargs)` (src/nova/db/main/api.py:L224) | — | `src/nova/db/main/api.py:L220–L224` |
| `pick_context_manager_reader_allow_async` | function | (f) | exported | `wrapper` (src/nova/db/main/api.py:L243) | 1/5 | `src/nova/db/main/api.py:L229–L243` |
| `pick_context_manager_reader_allow_async.wrapper` | function | (context, *args, **kwargs) | public | `f(context, *args, **kwargs)` (src/nova/db/main/api.py:L241) | — | `src/nova/db/main/api.py:L237–L241` |
| `model_query` | function | (context, model, args=None, read_deleted=None, project_only=False) | exported | `query` (src/nova/db/main/api.py:L291) | 8/26 | `src/nova/db/main/api.py:L246–L291` |
| `convert_objects_related_datetimes` | function | (values, *datetime_keys) | exported | `values` (src/nova/db/main/api.py:L310) | 7/12 | `src/nova/db/main/api.py:L294–L310` |
| `constraint` | function | (**conditions) | exported | `Constraint(conditions)` (src/nova/db/main/api.py:L318) | 1/2 | `src/nova/db/main/api.py:L316–L318` |
| `equal_any` | function | (*values) | exported | `EqualityCondition(values)` (src/nova/db/main/api.py:L327) | 1/2 | `src/nova/db/main/api.py:L321–L327` |
| `not_equal` | function | (*values) | exported | `InequalityCondition(values)` (src/nova/db/main/api.py:L336) | 1/2 | `src/nova/db/main/api.py:L330–L336` |
| `Constraint` | class | — | exported | not declared | — | `src/nova/db/main/api.py:L339–L348` |
| `Constraint.__init__` | method | (self, conditions) | public | not declared | 1/2 | `src/nova/db/main/api.py:L341–L342` |
| `Constraint.apply` | method | (self, model, query) | public | `query` (src/nova/db/main/api.py:L348) | 3/5 | `src/nova/db/main/api.py:L344–L348` |
| `EqualityCondition` | class | — | exported | not declared | — | `src/nova/db/main/api.py:L351–L359` |
| `EqualityCondition.__init__` | method | (self, values) | public | not declared | 1/2 | `src/nova/db/main/api.py:L353–L354` |
| `EqualityCondition.clauses` | method | (self, field) | public | `[sql.or_(*[field == value for value in self.values])]` (src/nova/db/main/api.py:L359) | 2/2 | `src/nova/db/main/api.py:L356–L359` |
| `InequalityCondition` | class | — | exported | not declared | — | `src/nova/db/main/api.py:L362–L368` |
| `InequalityCondition.__init__` | method | (self, values) | public | not declared | 1/2 | `src/nova/db/main/api.py:L364–L365` |
| `InequalityCondition.clauses` | method | (self, field) | public | `[field != value for value in self.values]` (src/nova/db/main/api.py:L368) | 2/2 | `src/nova/db/main/api.py:L367–L368` |
| `service_destroy` | function | (context, service_id) | exported | not declared | 2/15 | `src/nova/db/main/api.py:L375–L397` |
| `service_get` | function | (context, service_id) | exported | `result` (src/nova/db/main/api.py:L409) | 2/6 | `src/nova/db/main/api.py:L401–L409` |
| `service_get_by_uuid` | function | (context, service_uuid) | exported | `result` (src/nova/db/main/api.py:L423) | 2/6 | `src/nova/db/main/api.py:L413–L423` |
| `service_get_minimum_version` | function | (context, binaries) | exported | `dict(min_versions)` (src/nova/db/main/api.py:L436) | 1/9 | `src/nova/db/main/api.py:L427–L436` |
| `service_get_all` | function | (context, disabled=None) | exported | `query.all()` (src/nova/db/main/api.py:L447) | 2/5 | `src/nova/db/main/api.py:L440–L447` |
| `service_get_all_by_topic` | function | (context, topic) | exported | `model_query(context, models.Service, read_deleted="no").\ filter_by(disabled=False).\ filter_by(topic=topic).\ all()` (src/nova/db/main/api.py:L453) | 1/5 | `src/nova/db/main/api.py:L451–L456` |
| `service_get_by_host_and_topic` | function | (context, host, topic) | exported | `model_query(context, models.Service, read_deleted="no").\ filter_by(disabled=False).\ filter_by(host=host).\ filter_by(topic=topic).\ first()` (src/nova/db/main/api.py:L462) | 1/6 | `src/nova/db/main/api.py:L460–L466` |
| `service_get_all_by_binary` | function | (context, binary, include_disabled=False) | exported | `query.all()` (src/nova/db/main/api.py:L478) | 2/5 | `src/nova/db/main/api.py:L470–L478` |
| `service_get_all_computes_by_hv_type` | function | (context, hv_type, include_disabled=False) | exported | `query.all()` (src/nova/db/main/api.py:L496) | 2/11 | `src/nova/db/main/api.py:L482–L496` |
| `service_get_by_host_and_binary` | function | (context, host, binary) | exported | `result` (src/nova/db/main/api.py:L510) | 2/8 | `src/nova/db/main/api.py:L500–L510` |
| `service_get_all_by_host` | function | (context, host) | exported | `model_query(context, models.Service, read_deleted="no").\ filter_by(host=host).\ all()` (src/nova/db/main/api.py:L516) | 1/4 | `src/nova/db/main/api.py:L514–L518` |
| `service_get_by_compute_host` | function | (context, host) | exported | `result` (src/nova/db/main/api.py:L535) | 2/8 | `src/nova/db/main/api.py:L522–L535` |
| `service_create` | function | (context, values) | exported | `service_ref` (src/nova/db/main/api.py:L560) | 5/16 | `src/nova/db/main/api.py:L539–L560` |
| `service_update` | function | (context, service_id, values) | exported | `service_ref` (src/nova/db/main/api.py:L579) | 3/7 | `src/nova/db/main/api.py:L565–L579` |
| `_compute_node_select` | function | (context, filters=None, limit=None, marker=None) | unexported | `select` (src/nova/db/main/api.py:L616) | 11/28 | `src/nova/db/main/api.py:L585–L616` |
| `_compute_node_fetchall` | function | (context, filters=None, limit=None, marker=None) | unexported | `results` (src/nova/db/main/api.py:L629) | 2/8 | `src/nova/db/main/api.py:L619–L629` |
| `compute_node_get` | function | (context, compute_id) | exported | `results[0]` (src/nova/db/main/api.py:L646) | 2/5 | `src/nova/db/main/api.py:L633–L646` |
| `compute_node_get_model` | function | (context, compute_id) | exported | `result` (src/nova/db/main/api.py:L667) | 2/7 | `src/nova/db/main/api.py:L652–L667` |
| `compute_nodes_get_by_service_id` | function | (context, service_id) | exported | `results` (src/nova/db/main/api.py:L684) | 2/5 | `src/nova/db/main/api.py:L671–L684` |
| `compute_node_get_by_host_and_nodename` | function | (context, host, nodename) | exported | `results[0]` (src/nova/db/main/api.py:L703) | 2/6 | `src/nova/db/main/api.py:L688–L703` |
| `compute_node_get_by_nodename` | function | (context, hypervisor_hostname) | exported | `results[0]` (src/nova/db/main/api.py:L722) | 2/6 | `src/nova/db/main/api.py:L707–L722` |
| `compute_node_get_all` | function | (context) | exported | `_compute_node_fetchall(context)` (src/nova/db/main/api.py:L733) | 1/2 | `src/nova/db/main/api.py:L726–L733` |
| `compute_node_get_all_by_host` | function | (context, host) | exported | `results` (src/nova/db/main/api.py:L748) | 2/5 | `src/nova/db/main/api.py:L737–L748` |
| `compute_node_get_all_mapped_less_than` | function | (context, mapped_less_than) | exported | `_compute_node_fetchall(context, {'mapped': mapped_less_than})` (src/nova/db/main/api.py:L760) | 1/3 | `src/nova/db/main/api.py:L752–L761` |
| `compute_node_get_all_by_pagination` | function | (context, limit=None, marker=None) | exported | `_compute_node_fetchall(context, limit=limit, marker=marker)` (src/nova/db/main/api.py:L775) | 1/2 | `src/nova/db/main/api.py:L765–L775` |
| `compute_node_search_by_hypervisor` | function | (context, hypervisor_match) | exported | `model_query(context, models.ComputeNode).\ filter(field.like('%%%s%%' % hypervisor_match)).\ all()` (src/nova/db/main/api.py:L789) | 1/5 | `src/nova/db/main/api.py:L779–L791` |
| `_compute_node_create` | function | (context, values) | unexported | `compute_node_ref` (src/nova/db/main/api.py:L809) | 1/6 | `src/nova/db/main/api.py:L795–L809` |
| `compute_node_create` | function | (context, values) | exported | `compute_node_ref` (src/nova/db/main/api.py:L839) | 4/12 | `src/nova/db/main/api.py:L816–L839` |
| `_compute_node_get_and_update_deleted` | function | (context, values) | unexported | `compute_node_update(context, cn.id, update_values)` (src/nova/db/main/api.py:L866) | 2/8 | `src/nova/db/main/api.py:L843–L866` |
| `compute_node_update` | function | (context, compute_id, values) | exported | `compute_ref` (src/nova/db/main/api.py:L891) | 1/6 | `src/nova/db/main/api.py:L871–L891` |
| `compute_node_delete` | function | (context, compute_id, constraint=None) | exported | not declared | 3/8 | `src/nova/db/main/api.py:L895–L921` |
| `compute_node_statistics` | function | (context) | exported | `{field: int(results[field] or 0) for field in fields}` (src/nova/db/main/api.py:L1002) | 3/60 | `src/nova/db/main/api.py:L925–L1002` |
| `certificate_create` | function | (context, values) | exported | `certificate_ref` (src/nova/db/main/api.py:L1015) | 2/6 | `src/nova/db/main/api.py:L1009–L1015` |
| `certificate_get_all_by_project` | function | (context, project_id) | exported | `model_query(context, models.Certificate, read_deleted="no").\ filter_by(project_id=project_id).\ all()` (src/nova/db/main/api.py:L1021) | 1/4 | `src/nova/db/main/api.py:L1019–L1023` |
| `certificate_get_all_by_user` | function | (context, user_id) | exported | `model_query(context, models.Certificate, read_deleted="no").\ filter_by(user_id=user_id).\ all()` (src/nova/db/main/api.py:L1029) | 1/4 | `src/nova/db/main/api.py:L1027–L1031` |
| `certificate_get_all_by_user_and_project` | function | (context, user_id, project_id) | exported | `model_query(context, models.Certificate, read_deleted="no").\ filter_by(user_id=user_id).\ filter_by(project_id=project_id).\ all()` (src/nova/db/main/api.py:L1037) | 1/5 | `src/nova/db/main/api.py:L1035–L1040` |
| `virtual_interface_create` | function | (context, values) | exported | `vif_ref` (src/nova/db/main/api.py:L1061) | 2/9 | `src/nova/db/main/api.py:L1048–L1061` |
| `_virtual_interface_query` | function | (context) | unexported | `model_query(context, models.VirtualInterface, read_deleted="no")` (src/nova/db/main/api.py:L1065) | 1/2 | `src/nova/db/main/api.py:L1064–L1065` |
| `virtual_interface_update` | function | (context, vif_uuid, values) | exported | `vif_ref` (src/nova/db/main/api.py:L1075) | 1/5 | `src/nova/db/main/api.py:L1070–L1075` |
| `virtual_interface_get` | function | (context, vif_id) | exported | `vif_ref` (src/nova/db/main/api.py:L1088) | 1/5 | `src/nova/db/main/api.py:L1080–L1088` |
| `virtual_interface_get_by_address` | function | (context, address) | exported | `vif_ref` (src/nova/db/main/api.py:L1106) | 2/10 | `src/nova/db/main/api.py:L1093–L1106` |
| `virtual_interface_get_by_uuid` | function | (context, vif_uuid) | exported | `vif_ref` (src/nova/db/main/api.py:L1119) | 1/5 | `src/nova/db/main/api.py:L1111–L1119` |
| `virtual_interface_get_by_instance` | function | (context, instance_uuid) | exported | `vif_refs` (src/nova/db/main/api.py:L1133) | 1/6 | `src/nova/db/main/api.py:L1124–L1133` |
| `virtual_interface_get_by_instance_and_network` | function | (context, instance_uuid, network_id) | exported | `vif_ref` (src/nova/db/main/api.py:L1147) | 1/7 | `src/nova/db/main/api.py:L1138–L1147` |
| `virtual_interface_delete_by_instance` | function | (context, instance_uuid) | exported | not declared | 1/4 | `src/nova/db/main/api.py:L1152–L1159` |
| `virtual_interface_delete` | function | (context, id) | exported | not declared | 1/4 | `src/nova/db/main/api.py:L1164–L1171` |
| `virtual_interface_get_all` | function | (context) | exported | `vif_refs` (src/nova/db/main/api.py:L1179) | 1/3 | `src/nova/db/main/api.py:L1176–L1179` |
| `_metadata_refs` | function | (metadata_dict, meta_class) | unexported | `metadata_refs` (src/nova/db/main/api.py:L1193) | 3/9 | `src/nova/db/main/api.py:L1185–L1193` |
| `_validate_unique_server_name` | function | (context, name) | unexported | `` (src/nova/db/main/api.py:L1198); `` (src/nova/db/main/api.py:L1213) | 5/16 | `src/nova/db/main/api.py:L1196–L1216` |
| `_handle_objects_related_type_conversions` | function | (values) | unexported | not declared | 4/7 | `src/nova/db/main/api.py:L1219–L1232` |
| `_check_instance_exists_in_project` | function | (context, instance_uuid) | unexported | not declared | 2/5 | `src/nova/db/main/api.py:L1235–L1239` |
| `instance_create` | function | (context, values) | exported | `instance_ref` (src/nova/db/main/api.py:L1304) | 8/40 | `src/nova/db/main/api.py:L1245–L1304` |
| `instance_destroy` | function | (context, instance_uuid, constraint=None, hard_delete=False) | exported | `instance_ref` (src/nova/db/main/api.py:L1394) | 9/45 | `src/nova/db/main/api.py:L1310–L1394` |
| `instance_get_by_uuid` | function | (context, uuid, columns_to_join=None) | exported | `_instance_get_by_uuid(context, uuid, columns_to_join=columns_to_join)` (src/nova/db/main/api.py:L1401) | 1/3 | `src/nova/db/main/api.py:L1399–L1402` |
| `_instance_get_by_uuid` | function | (context, uuid, columns_to_join=None) | unexported | `result` (src/nova/db/main/api.py:L1413) | 2/7 | `src/nova/db/main/api.py:L1405–L1413` |
| `instance_get` | function | (context, instance_id, columns_to_join=None) | exported | `result` (src/nova/db/main/api.py:L1427) | 3/10 | `src/nova/db/main/api.py:L1418–L1432` |
| `_build_instance_get` | function | (context, columns_to_join=None) | unexported | `query.order_by(models.Instance.id)` (src/nova/db/main/api.py:L1477) | 8/29 | `src/nova/db/main/api.py:L1435–L1477` |
| `_instances_fill_metadata` | function | (context, instances, manual_joins=None) | unexported | `filled_instances` (src/nova/db/main/api.py:L1527) | 14/32 | `src/nova/db/main/api.py:L1480–L1527` |
| `instances_fill_metadata` | function | (context, instances, manual_joins=None) | exported | `_instances_fill_metadata(context, instances, manual_joins=manual_joins)` (src/nova/db/main/api.py:L1538) | 1/3 | `src/nova/db/main/api.py:L1532–L1539` |
| `_manual_join_columns` | function | (columns_to_join) | unexported | `manual_joins, columns_to_join_new` (src/nova/db/main/api.py:L1562) | 3/8 | `src/nova/db/main/api.py:L1542–L1562` |
| `instance_get_all` | function | (context, columns_to_join=None) | exported | `_instances_fill_metadata(context, instances, manual_joins)` (src/nova/db/main/api.py:L1586) | 5/18 | `src/nova/db/main/api.py:L1567–L1586` |
| `instance_get_all_by_filters` | function | (context, filters, sort_key='created_at', sort_dir='desc', limit=None, marker=None, columns_to_join=None) | exported | `instance_get_all_by_filters_sort(context, filters, limit=limit, marker=marker, columns_to_join=columns_to_join, sort_keys=[sort_key], sort_dirs=[sort_dir])` (src/nova/db/main/api.py:L1601) | 1/9 | `src/nova/db/main/api.py:L1591–L1605` |
| `_get_query_nova_resource_by_changes_time` | function | (query, filters, model_object) | unexported | `query` (src/nova/db/main/api.py:L1631) | 5/11 | `src/nova/db/main/api.py:L1608–L1631` |
| `instance_get_all_by_filters_sort` | function | (context, filters, limit=None, marker=None, columns_to_join=None, sort_keys=None, sort_dirs=None) | exported | `[]` (src/nova/db/main/api.py:L1704); `[]` (src/nova/db/main/api.py:L1837); `_instances_fill_metadata(context, instances, manual_joins)` (src/nova/db/main/api.py:L1862) | 24/122 | `src/nova/db/main/api.py:L1636–L1862` |
| `instance_get_by_sort_filters` | function | (context, sort_keys, sort_dirs, values) | exported | `_model_get_uuid_by_sort_filters(context, model, sort_keys, sort_dirs, values)` (src/nova/db/main/api.py:L1878) | 1/4 | `src/nova/db/main/api.py:L1867–L1879` |
| `_model_get_uuid_by_sort_filters` | function | (context, model, sort_keys, sort_dirs, values) | unexported | `result[0]` (src/nova/db/main/api.py:L1958); `result` (src/nova/db/main/api.py:L1960) | 9/37 | `src/nova/db/main/api.py:L1882–L1960` |
| `_regex_instance_filter` | function | (query, filters) | unexported | `query` (src/nova/db/main/api.py:L1993) | 6/22 | `src/nova/db/main/api.py:L1963–L1993` |
| `_exact_instance_filter` | function | (query, filters, legal_keys) | unexported | `None` (src/nova/db/main/api.py:L2036); `query` (src/nova/db/main/api.py:L2048) | 12/29 | `src/nova/db/main/api.py:L1996–L2048` |
| `instance_get_active_by_window_joined` | function | (context, begin, end=None, project_id=None, host=None, columns_to_join=None, limit=None, marker=None) | exported | `_instances_fill_metadata(context, instances, manual_joins)` (src/nova/db/main/api.py:L2103) | 9/40 | `src/nova/db/main/api.py:L2053–L2103` |
| `_instance_get_all_query` | function | (context, project_only=False, joins=None) | unexported | `query` (src/nova/db/main/api.py:L2124) | 4/18 | `src/nova/db/main/api.py:L2106–L2124` |
| `instance_get_all_by_host` | function | (context, host, columns_to_join=None) | exported | `_instances_fill_metadata( context, instances, manual_joins=columns_to_join, )` (src/nova/db/main/api.py:L2132) | 1/8 | `src/nova/db/main/api.py:L2128–L2136` |
| `_instance_get_all_uuids_by_hosts` | function | (context, hosts) | unexported | `res` (src/nova/db/main/api.py:L2151) | 2/11 | `src/nova/db/main/api.py:L2139–L2151` |
| `instance_get_all_uuids_by_hosts` | function | (context, hosts) | exported | `_instance_get_all_uuids_by_hosts(context, hosts)` (src/nova/db/main/api.py:L2162) | 1/2 | `src/nova/db/main/api.py:L2155–L2162` |
| `instance_get_all_by_host_and_node` | function | (context, host, node, columns_to_join=None) | exported | `_instances_fill_metadata( context, instances, manual_joins=manual_joins, )` (src/nova/db/main/api.py:L2180) | 4/18 | `src/nova/db/main/api.py:L2166–L2184` |
| `instance_get_all_by_host_and_not_type` | function | (context, host, type_id=None) | exported | `_instances_fill_metadata(context, instances)` (src/nova/db/main/api.py:L2195) | 1/7 | `src/nova/db/main/api.py:L2188–L2195` |
| `instance_get_all_hung_in_rebooting` | function | (context, reboot_window) | exported | `_instances_fill_metadata( context, instances, manual_joins=[], )` (src/nova/db/main/api.py:L2211) | 1/11 | `src/nova/db/main/api.py:L2200–L2215` |
| `_retry_instance_update` | function | — | unexported | `oslo_db_api.wrap_db_retry(max_retries=5, retry_on_deadlock=True, exception_checker=exception_checker)` (src/nova/db/main/api.py:L2224) | 1/5 | `src/nova/db/main/api.py:L2218–L2225` |
| `instance_update` | function | (context, instance_uuid, values, expected=None) | exported | `_instance_update(context, instance_uuid, values, expected)` (src/nova/db/main/api.py:L2236) | 1/2 | `src/nova/db/main/api.py:L2231–L2236` |
| `instance_update_and_get_original` | function | (context, instance_uuid, values, columns_to_join=None, expected=None) | exported | `(copy.copy(instance_ref), _instance_update( context, instance_uuid, values, expected, original=instance_ref))` (src/nova/db/main/api.py:L2261) | 1/6 | `src/nova/db/main/api.py:L2242–L2262` |
| `_instance_metadata_update_in_place` | function | (context, instance, metadata_type, model, metadata) | unexported | not declared | 8/23 | `src/nova/db/main/api.py:L2268–L2296` |
| `_instance_update` | function | (context, instance_uuid, values, expected, original=None) | unexported | `instance_ref` (src/nova/db/main/api.py:L2417) | 18/64 | `src/nova/db/main/api.py:L2299–L2417` |
| `instance_add_security_group` | function | (context, instance_uuid, security_group_id) | exported | not declared | 1/5 | `src/nova/db/main/api.py:L2421–L2426` |
| `instance_remove_security_group` | function | (context, instance_uuid, security_group_id) | exported | not declared | 1/5 | `src/nova/db/main/api.py:L2431–L2436` |
| `instance_info_cache_get` | function | (context, instance_uuid) | exported | `model_query(context, models.InstanceInfoCache).\ filter_by(instance_uuid=instance_uuid).\ first()` (src/nova/db/main/api.py:L2449) | 1/4 | `src/nova/db/main/api.py:L2444–L2451` |
| `instance_info_cache_update` | function | (context, instance_uuid, values) | exported | `info_cache` (src/nova/db/main/api.py:L2491) | 6/22 | `src/nova/db/main/api.py:L2457–L2491` |
| `instance_info_cache_delete` | function | (context, instance_uuid) | exported | not declared | 1/4 | `src/nova/db/main/api.py:L2496–L2503` |
| `_instance_extra_create` | function | (context, values) | unexported | `inst_extra_ref` (src/nova/db/main/api.py:L2513) | 1/5 | `src/nova/db/main/api.py:L2509–L2513` |
| `instance_extra_update_by_uuid` | function | (context, instance_uuid, updates) | exported | `rows_updated` (src/nova/db/main/api.py:L2532) | 2/11 | `src/nova/db/main/api.py:L2517–L2532` |
| `instance_extra_get_by_instance_uuid` | function | (context, instance_uuid, columns=None) | exported | `instance_extra` (src/nova/db/main/api.py:L2554) | 3/14 | `src/nova/db/main/api.py:L2536–L2554` |
| `quota_get` | function | (context, project_id, resource, user_id=None) | exported | `result` (src/nova/db/main/api.py:L2579) | 5/15 | `src/nova/db/main/api.py:L2562–L2579` |
| `quota_get_all_by_project_and_user` | function | (context, project_id, user_id) | exported | `result` (src/nova/db/main/api.py:L2597) | 2/11 | `src/nova/db/main/api.py:L2584–L2597` |
| `quota_get_all_by_project` | function | (context, project_id) | exported | `result` (src/nova/db/main/api.py:L2612) | 2/8 | `src/nova/db/main/api.py:L2602–L2612` |
| `quota_get_all` | function | (context, project_id) | exported | `result` (src/nova/db/main/api.py:L2623) | 1/5 | `src/nova/db/main/api.py:L2617–L2623` |
| `quota_get_per_project_resources` | function | — | exported | `PER_PROJECT_QUOTAS` (src/nova/db/main/api.py:L2630) | 1/2 | `src/nova/db/main/api.py:L2626–L2630` |
| `quota_create` | function | (context, project_id, resource, limit, user_id=None) | exported | `quota_ref` (src/nova/db/main/api.py:L2647) | 5/13 | `src/nova/db/main/api.py:L2634–L2647` |
| `quota_update` | function | (context, project_id, resource, limit, user_id=None) | exported | not declared | 6/15 | `src/nova/db/main/api.py:L2651–L2667` |
| `quota_class_get` | function | (context, class_name, resource) | exported | `result` (src/nova/db/main/api.py:L2685) | 2/8 | `src/nova/db/main/api.py:L2675–L2685` |
| `quota_class_get_default` | function | (context) | exported | `result` (src/nova/db/main/api.py:L2699) | 2/8 | `src/nova/db/main/api.py:L2689–L2699` |
| `quota_class_get_all_by_name` | function | (context, class_name) | exported | `result` (src/nova/db/main/api.py:L2714) | 2/8 | `src/nova/db/main/api.py:L2704–L2714` |
| `quota_class_create` | function | (context, class_name, resource, limit) | exported | `quota_class_ref` (src/nova/db/main/api.py:L2725) | 1/7 | `src/nova/db/main/api.py:L2718–L2725` |
| `quota_class_update` | function | (context, class_name, resource, limit) | exported | not declared | 2/7 | `src/nova/db/main/api.py:L2729–L2737` |
| `quota_destroy_all_by_project_and_user` | function | (context, project_id, user_id) | exported | not declared | 1/5 | `src/nova/db/main/api.py:L2744–L2749` |
| `quota_destroy_all_by_project` | function | (context, project_id) | exported | not declared | 1/7 | `src/nova/db/main/api.py:L2753–L2761` |
| `_block_device_mapping_get_query` | function | (context, columns_to_join=None) | unexported | `query` (src/nova/db/main/api.py:L2777) | 3/8 | `src/nova/db/main/api.py:L2767–L2777` |
| `_scrub_empty_str_values` | function | (dct, keys_to_scrub) | unexported | not declared | 4/4 | `src/nova/db/main/api.py:L2780–L2786` |
| `_from_legacy_values` | function | (values, legacy, allow_updates=False) | unexported | `values` (src/nova/db/main/api.py:L2792); `block_device.BlockDeviceDict.from_legacy(values)` (src/nova/db/main/api.py:L2794); `values` (src/nova/db/main/api.py:L2796) | 4/8 | `src/nova/db/main/api.py:L2789–L2796` |
| `_set_or_validate_uuid` | function | (values) | unexported | not declared | 3/7 | `src/nova/db/main/api.py:L2799–L2809` |
| `block_device_mapping_create` | function | (context, values, legacy=True) | exported | `bdm_ref` (src/nova/db/main/api.py:L2825) | 1/9 | `src/nova/db/main/api.py:L2814–L2825` |
| `block_device_mapping_update` | function | (context, bdm_id, values, legacy=True) | exported | `query.first()` (src/nova/db/main/api.py:L2838) | 1/7 | `src/nova/db/main/api.py:L2830–L2838` |
| `block_device_mapping_update_or_create` | function | (context, values, legacy=True) | exported | `result` (src/nova/db/main/api.py:L2888) | 6/26 | `src/nova/db/main/api.py:L2842–L2888` |
| `block_device_mapping_get_all_by_instance_uuids` | function | (context, instance_uuids) | exported | `[]` (src/nova/db/main/api.py:L2896); `_block_device_mapping_get_query(context).filter( models.BlockDeviceMapping.instance_uuid.in_(instance_uuids)).all()` (src/nova/db/main/api.py:L2897) | 2/5 | `src/nova/db/main/api.py:L2893–L2898` |
| `block_device_mapping_get_all_by_instance` | function | (context, instance_uuid) | exported | `_block_device_mapping_get_query(context).\ filter_by(instance_uuid=instance_uuid).\ all()` (src/nova/db/main/api.py:L2905) | 1/4 | `src/nova/db/main/api.py:L2903–L2907` |
| `block_device_mapping_get_all_by_volume_id` | function | (context, volume_id, columns_to_join=None) | exported | `_block_device_mapping_get_query(context, columns_to_join=columns_to_join).\ filter_by(volume_id=volume_id).\ all()` (src/nova/db/main/api.py:L2916) | 1/7 | `src/nova/db/main/api.py:L2912–L2919` |
| `block_device_mapping_get_by_instance_and_volume_id` | function | (context, volume_id, instance_uuid, columns_to_join=None) | exported | `_block_device_mapping_get_query(context, columns_to_join=columns_to_join).\ filter_by(volume_id=volume_id).\ filter_by(instance_uuid=instance_uuid).\ first()` (src/nova/db/main/api.py:L2928) | 1/8 | `src/nova/db/main/api.py:L2924–L2932` |
| `block_device_mapping_destroy` | function | (context, bdm_id) | exported | not declared | 1/4 | `src/nova/db/main/api.py:L2937–L2941` |
| `block_device_mapping_destroy_by_instance_and_volume` | function | (context, instance_uuid, volume_id) | exported | not declared | 1/7 | `src/nova/db/main/api.py:L2946–L2953` |
| `block_device_mapping_destroy_by_instance_and_device` | function | (context, instance_uuid, device_name) | exported | not declared | 1/7 | `src/nova/db/main/api.py:L2958–L2965` |
| `security_group_create` | function | (context, values) | exported | `security_group_ref` (src/nova/db/main/api.py:L2987) | 2/12 | `src/nova/db/main/api.py:L2973–L2987` |
| `_security_group_get_query` | function | (context, read_deleted=None, project_only=False, join_rules=True) | unexported | `query` (src/nova/db/main/api.py:L3004) | 2/15 | `src/nova/db/main/api.py:L2990–L3004` |
| `_security_group_get_by_names` | function | (context, group_names) | unexported | `sg_models` (src/nova/db/main/api.py:L3017) | 5/13 | `src/nova/db/main/api.py:L3007–L3024` |
| `security_group_get_all` | function | (context) | exported | `_security_group_get_query(context).all()` (src/nova/db/main/api.py:L3031) | 1/2 | `src/nova/db/main/api.py:L3029–L3031` |
| `security_group_get` | function | (context, security_group_id, columns_to_join=None) | exported | `result` (src/nova/db/main/api.py:L3055) | 6/16 | `src/nova/db/main/api.py:L3036–L3055` |
| `security_group_get_by_name` | function | (context, project_id, group_name) | exported | `result` (src/nova/db/main/api.py:L3082) | 2/20 | `src/nova/db/main/api.py:L3060–L3082` |
| `security_group_get_by_project` | function | (context, project_id) | exported | `_security_group_get_query(context, read_deleted="no").\ filter_by(project_id=project_id).\ all()` (src/nova/db/main/api.py:L3089) | 1/4 | `src/nova/db/main/api.py:L3087–L3091` |
| `security_group_get_by_instance` | function | (context, instance_uuid) | exported | `_security_group_get_query(context, read_deleted="no").\ join(models.SecurityGroup.instances).\ filter_by(uuid=instance_uuid).\ all()` (src/nova/db/main/api.py:L3098) | 1/5 | `src/nova/db/main/api.py:L3096–L3101` |
| `security_group_in_use` | function | (context, group_id) | exported | `True` (src/nova/db/main/api.py:L3121); `False` (src/nova/db/main/api.py:L3123) | 3/14 | `src/nova/db/main/api.py:L3106–L3123` |
| `security_group_update` | function | (context, security_group_id, values) | exported | `security_group_ref` (src/nova/db/main/api.py:L3147) | 3/18 | `src/nova/db/main/api.py:L3128–L3147` |
| `security_group_ensure_default` | function | (context) | exported | `_security_group_ensure_default(context)` (src/nova/db/main/api.py:L3165); `security_group_get_by_name(context, context.project_id, 'default')` (src/nova/db/main/api.py:L3169) | 2/7 | `src/nova/db/main/api.py:L3150–L3170` |
| `_security_group_ensure_default` | function | (context) | unexported | `default_group` (src/nova/db/main/api.py:L3183) | 2/10 | `src/nova/db/main/api.py:L3174–L3183` |
| `security_group_destroy` | function | (context, security_group_id) | exported | not declared | 1/13 | `src/nova/db/main/api.py:L3188–L3201` |
| `migration_create` | function | (context, values) | exported | `migration` (src/nova/db/main/api.py:L3213) | 1/5 | `src/nova/db/main/api.py:L3208–L3213` |
| `migration_update` | function | (context, migration_id, values) | exported | `migration` (src/nova/db/main/api.py:L3223) | 1/4 | `src/nova/db/main/api.py:L3218–L3223` |
| `migration_get` | function | (context, migration_id) | exported | `result` (src/nova/db/main/api.py:L3236) | 2/7 | `src/nova/db/main/api.py:L3227–L3236` |
| `migration_get_by_uuid` | function | (context, migration_uuid) | exported | `result` (src/nova/db/main/api.py:L3249) | 2/7 | `src/nova/db/main/api.py:L3240–L3249` |
| `migration_get_by_id_and_instance` | function | (context, migration_id, instance_uuid) | exported | `result` (src/nova/db/main/api.py:L3264) | 2/9 | `src/nova/db/main/api.py:L3253–L3264` |
| `migration_get_by_instance_and_status` | function | (context, instance_uuid, status) | exported | `result` (src/nova/db/main/api.py:L3279) | 2/9 | `src/nova/db/main/api.py:L3268–L3279` |
| `migration_get_unconfirmed_by_dest_compute` | function | (context, confirm_window, dest_compute) | exported | `model_query(context, models.Migration, read_deleted="yes").\ filter(models.Migration.updated_at <= confirm_window).\ filter_by(status="finished").\ filter_by(dest_compute=dest_compute).\ all()` (src/nova/db/main/api.py:L3292) | 1/10 | `src/nova/db/main/api.py:L3283–L3296` |
| `migration_get_in_progress_by_host_and_node` | function | (context, host, node) | exported | `model_query( context, models.Migration, ).filter( sql.or_( sql.and_( models.Migration.source_compute == host, models.Migration.source_node == node, ), sql.and_( models.Migration.dest_compute == host, ` (src/nova/db/main/api.py:L3313) | 1/31 | `src/nova/db/main/api.py:L3300–L3342` |
| `migration_get_in_progress_by_instance` | function | (context, instance_uuid, migration_type=None) | exported | `query.all()` (src/nova/db/main/api.py:L3360) | 2/10 | `src/nova/db/main/api.py:L3346–L3360` |
| `migration_get_all_by_filters` | function | (context, filters, sort_keys=None, sort_dirs=None, limit=None, marker=None) | exported | `[]` (src/nova/db/main/api.py:L3369); `sqlalchemyutils.paginate_query(query, models.Migration, limit=limit, sort_keys=sort_keys, marker=marker, sort_dirs=sort_dirs).all()` (src/nova/db/main/api.py:L3426); `query.all()` (src/nova/db/main/api.py:L3433) | 20/62 | `src/nova/db/main/api.py:L3364–L3433` |
| `migration_get_by_sort_filters` | function | (context, sort_keys, sort_dirs, values) | exported | `_model_get_uuid_by_sort_filters(context, model, sort_keys, sort_dirs, values)` (src/nova/db/main/api.py:L3449) | 1/4 | `src/nova/db/main/api.py:L3438–L3450` |
| `migration_migrate_to_uuid` | function | (context, max_count) | exported | `done, done` (src/nova/db/main/api.py:L3469) | 2/10 | `src/nova/db/main/api.py:L3454–L3469` |
| `migration_get_in_progress_and_error_by_host_and_node` | function | (context, host, node) | exported | `model_query( context, models.Migration, ).filter( sql.or_( sql.and_( models.Migration.source_compute == host, models.Migration.source_node == node), sql.and_( models.Migration.dest_compute == host, mo` (src/nova/db/main/api.py:L3477) | 1/27 | `src/nova/db/main/api.py:L3473–L3502` |
| `_instance_metadata_get_multi` | function | (context, instance_uuids) | unexported | `[]` (src/nova/db/main/api.py:L3510); `model_query(context, models.InstanceMetadata).filter( models.InstanceMetadata.instance_uuid.in_(instance_uuids))` (src/nova/db/main/api.py:L3511) | 2/5 | `src/nova/db/main/api.py:L3508–L3512` |
| `_instance_metadata_get_query` | function | (context, instance_uuid) | unexported | `model_query(context, models.InstanceMetadata, read_deleted="no").\ filter_by(instance_uuid=instance_uuid)` (src/nova/db/main/api.py:L3516) | 1/3 | `src/nova/db/main/api.py:L3515–L3517` |
| `instance_metadata_get` | function | (context, instance_uuid) | exported | `{row['key']: row['value'] for row in rows}` (src/nova/db/main/api.py:L3525) | 2/3 | `src/nova/db/main/api.py:L3522–L3525` |
| `instance_metadata_delete` | function | (context, instance_uuid, key) | exported | not declared | 1/4 | `src/nova/db/main/api.py:L3531–L3535` |
| `instance_metadata_update` | function | (context, instance_uuid, metadata, delete) | exported | `metadata` (src/nova/db/main/api.py:L3565) | 4/20 | `src/nova/db/main/api.py:L3541–L3565` |
| `_instance_system_metadata_get_multi` | function | (context, instance_uuids) | unexported | `[]` (src/nova/db/main/api.py:L3574); `model_query(context, models.InstanceSystemMetadata, read_deleted='yes').filter( models.InstanceSystemMetadata.instance_uuid.in_(instance_uuids))` (src/nova/db/main/api.py:L3575) | 2/6 | `src/nova/db/main/api.py:L3572–L3577` |
| `_instance_system_metadata_get_query` | function | (context, instance_uuid) | unexported | `model_query(context, models.InstanceSystemMetadata).\ filter_by(instance_uuid=instance_uuid)` (src/nova/db/main/api.py:L3581) | 1/3 | `src/nova/db/main/api.py:L3580–L3582` |
| `instance_system_metadata_get` | function | (context, instance_uuid) | exported | `{row['key']: row['value'] for row in rows}` (src/nova/db/main/api.py:L3590) | 2/3 | `src/nova/db/main/api.py:L3587–L3590` |
| `instance_system_metadata_update` | function | (context, instance_uuid, metadata, delete) | exported | `metadata` (src/nova/db/main/api.py:L3619) | 4/20 | `src/nova/db/main/api.py:L3595–L3619` |
| `vol_get_usage_by_time` | function | (context, begin) | exported | `model_query(context, models.VolumeUsage, read_deleted="yes").\ filter(sql.or_( models.VolumeUsage.tot_last_refreshed == sql.null(), models.VolumeUsage.tot_last_refreshed > begin, models.VolumeUsage.cu` (src/nova/db/main/api.py:L3629) | 1/8 | `src/nova/db/main/api.py:L3627–L3635` |
| `vol_usage_update` | function | (context, id, rd_req, rd_bytes, wr_req, wr_bytes, instance_id, project_id, user_id, availability_zone, update_totals=False) | exported | `current_usage` (src/nova/db/main/api.py:L3722); `vol_usage` (src/nova/db/main/api.py:L3746) | 9/93 | `src/nova/db/main/api.py:L3640–L3746` |
| `s3_image_get` | function | (context, image_id) | exported | `result` (src/nova/db/main/api.py:L3762) | 2/7 | `src/nova/db/main/api.py:L3753–L3762` |
| `s3_image_get_by_uuid` | function | (context, image_uuid) | exported | `result` (src/nova/db/main/api.py:L3775) | 2/7 | `src/nova/db/main/api.py:L3766–L3775` |
| `s3_image_create` | function | (context, image_uuid) | exported | `s3_image_ref` (src/nova/db/main/api.py:L3788) | 2/8 | `src/nova/db/main/api.py:L3779–L3788` |
| `instance_fault_create` | function | (context, values) | exported | `dict(fault_ref)` (src/nova/db/main/api.py:L3800) | 1/5 | `src/nova/db/main/api.py:L3795–L3800` |
| `instance_fault_get_by_instance_uuids` | function | (context, instance_uuids, latest=False) | exported | `{}` (src/nova/db/main/api.py:L3814); `output` (src/nova/db/main/api.py:L3864) | 5/32 | `src/nova/db/main/api.py:L3804–L3864` |
| `action_start` | function | (context, values) | exported | `action_ref` (src/nova/db/main/api.py:L3877) | 1/6 | `src/nova/db/main/api.py:L3871–L3877` |
| `action_finish` | function | (context, values) | exported | `query.one()` (src/nova/db/main/api.py:L3892) | 2/11 | `src/nova/db/main/api.py:L3881–L3892` |
| `actions_get` | function | (context, instance_uuid, limit=None, marker=None, filters=None) | exported | `[]` (src/nova/db/main/api.py:L3900); `actions` (src/nova/db/main/api.py:L3921) | 4/21 | `src/nova/db/main/api.py:L3896–L3921` |
| `action_get_by_request_id` | function | (context, instance_uuid, request_id) | exported | `action` (src/nova/db/main/api.py:L3928) | 1/3 | `src/nova/db/main/api.py:L3925–L3928` |
| `_action_get_by_request_id` | function | (context, instance_uuid, request_id) | unexported | `result` (src/nova/db/main/api.py:L3937) | 1/7 | `src/nova/db/main/api.py:L3931–L3937` |
| `_action_get_last_created_by_instance_uuid` | function | (context, instance_uuid) | unexported | `result` (src/nova/db/main/api.py:L3945) | 1/6 | `src/nova/db/main/api.py:L3940–L3945` |
| `action_event_start` | function | (context, values) | exported | `event_ref` (src/nova/db/main/api.py:L3985) | 5/21 | `src/nova/db/main/api.py:L3950–L3985` |
| `action_event_finish` | function | (context, values) | exported | `event_ref` (src/nova/db/main/api.py:L4035) | 7/27 | `src/nova/db/main/api.py:L3993–L4035` |
| `action_events_get` | function | (context, action_id) | exported | `events` (src/nova/db/main/api.py:L4046) | 1/6 | `src/nova/db/main/api.py:L4039–L4046` |
| `action_event_get_by_id` | function | (context, action_id, event_id) | exported | `event` (src/nova/db/main/api.py:L4056) | 1/6 | `src/nova/db/main/api.py:L4050–L4056` |
| `ec2_instance_create` | function | (context, instance_uuid, id=None) | exported | `ec2_instance_ref` (src/nova/db/main/api.py:L4073) | 2/7 | `src/nova/db/main/api.py:L4064–L4073` |
| `ec2_instance_get_by_uuid` | function | (context, instance_uuid) | exported | `result` (src/nova/db/main/api.py:L4087) | 2/7 | `src/nova/db/main/api.py:L4078–L4087` |
| `ec2_instance_get_by_id` | function | (context, instance_id) | exported | `result` (src/nova/db/main/api.py:L4100) | 2/7 | `src/nova/db/main/api.py:L4092–L4100` |
| `get_instance_uuid_by_ec2_id` | function | (context, ec2_id) | exported | `result['uuid']` (src/nova/db/main/api.py:L4108) | 1/3 | `src/nova/db/main/api.py:L4105–L4108` |
| `_ec2_instance_get_query` | function | (context) | unexported | `model_query(context, models.InstanceIdMapping, read_deleted='yes')` (src/nova/db/main/api.py:L4112) | 1/2 | `src/nova/db/main/api.py:L4111–L4112` |
| `_task_log_get_query` | function | (context, task_name, period_beginning, period_ending, host=None, state=None) | unexported | `query` (src/nova/db/main/api.py:L4132) | 3/14 | `src/nova/db/main/api.py:L4118–L4132` |
| `task_log_get` | function | (context, task_name, period_beginning, period_ending, host, state=None) | exported | `_task_log_get_query(context, task_name, period_beginning, period_ending, host, state).first()` (src/nova/db/main/api.py:L4138) | 1/4 | `src/nova/db/main/api.py:L4136–L4139` |
| `task_log_get_all` | function | (context, task_name, period_beginning, period_ending, host=None, state=None) | exported | `_task_log_get_query(context, task_name, period_beginning, period_ending, host, state).all()` (src/nova/db/main/api.py:L4145) | 1/4 | `src/nova/db/main/api.py:L4143–L4146` |
| `task_log_begin_task` | function | (context, task_name, period_beginning, period_ending, host, task_items=None, message=None) | exported | not declared | 4/21 | `src/nova/db/main/api.py:L4150–L4172` |
| `task_log_end_task` | function | (context, task_name, period_beginning, period_ending, host, errors, message=None) | exported | not declared | 3/11 | `src/nova/db/main/api.py:L4176–L4189` |
| `_get_tables_with_fk_to_table` | function | (table) | unexported | `tables` (src/nova/db/main/api.py:L4207) | 4/7 | `src/nova/db/main/api.py:L4195–L4207` |
| `_get_fk_stmts` | function | (metadata, conn, table, column, records) | unexported | `inserts, deletes` (src/nova/db/main/api.py:L4318) | 10/45 | `src/nova/db/main/api.py:L4210–L4318` |
| `_archive_deleted_rows_for_table` | function | (metadata, engine, tablename, max_rows, before, task_log) | unexported | `rows_archived, deleted_instance_uuids, {}` (src/nova/db/main/api.py:L4356); `rows_archived, deleted_instance_uuids, extras` (src/nova/db/main/api.py:L4410); `rows_archived, deleted_instance_uuids, extras` (src/nova/db/main/api.py:L4504) | 20/77 | `src/nova/db/main/api.py:L4321–L4504` |
| `archive_deleted_rows` | function | (context=None, max_rows=None, before=None, task_log=False) | exported | `table_to_rows_archived, deleted_instance_uuids, total_rows_archived` (src/nova/db/main/api.py:L4573) | 9/35 | `src/nova/db/main/api.py:L4507–L4573` |
| `_purgeable_tables` | function | (metadata) | unexported | `[ t for t in metadata.sorted_tables if ( t.name.startswith(_SHADOW_TABLE_PREFIX) and not t.name == 'alembic_version' ) ]` (src/nova/db/main/api.py:L4577) | 4/7 | `src/nova/db/main/api.py:L4576–L4582` |
| `purge_shadow_tables` | function | (context, before_date, status_fn=None) | exported | `total_deleted` (src/nova/db/main/api.py:L4638) | 12/44 | `src/nova/db/main/api.py:L4585–L4638` |
| `pci_device_get_by_addr` | function | (context, node_id, dev_addr) | exported | `pci_dev_ref` (src/nova/db/main/api.py:L4653) | 2/8 | `src/nova/db/main/api.py:L4645–L4653` |
| `pci_device_get_by_id` | function | (context, id) | exported | `pci_dev_ref` (src/nova/db/main/api.py:L4664) | 2/7 | `src/nova/db/main/api.py:L4657–L4664` |
| `pci_device_get_all_by_node` | function | (context, node_id) | exported | `model_query(context, models.PciDevice).\ filter_by(compute_node_id=node_id).\ all()` (src/nova/db/main/api.py:L4670) | 1/4 | `src/nova/db/main/api.py:L4668–L4672` |
| `pci_device_get_all_by_parent_addr` | function | (context, node_id, parent_addr) | exported | `model_query(context, models.PciDevice).\ filter_by(compute_node_id=node_id).\ filter_by(parent_addr=parent_addr).\ all()` (src/nova/db/main/api.py:L4678) | 1/5 | `src/nova/db/main/api.py:L4676–L4681` |
| `pci_device_get_all_by_instance_uuid` | function | (context, instance_uuid) | exported | `model_query(context, models.PciDevice).\ filter_by(status='allocated').\ filter_by(instance_uuid=instance_uuid).\ all()` (src/nova/db/main/api.py:L4688) | 1/5 | `src/nova/db/main/api.py:L4686–L4691` |
| `_instance_pcidevs_get_multi` | function | (context, instance_uuids) | unexported | `[]` (src/nova/db/main/api.py:L4697); `model_query(context, models.PciDevice).\ filter_by(status='allocated').\ filter(models.PciDevice.instance_uuid.in_(instance_uuids))` (src/nova/db/main/api.py:L4698) | 2/6 | `src/nova/db/main/api.py:L4695–L4700` |
| `pci_device_destroy` | function | (context, node_id, address) | exported | not declared | 2/7 | `src/nova/db/main/api.py:L4704–L4711` |
| `pci_device_update` | function | (context, node_id, address, values) | exported | `query.one()` (src/nova/db/main/api.py:L4724) | 2/9 | `src/nova/db/main/api.py:L4715–L4724` |
| `instance_tag_add` | function | (context, instance_uuid, tag) | exported | `tag_ref` (src/nova/db/main/api.py:L4745) | 2/11 | `src/nova/db/main/api.py:L4731–L4745` |
| `instance_tag_set` | function | (context, instance_uuid, tags) | exported | `context.session.query(models.Tag).filter_by( resource_id=instance_uuid).all()` (src/nova/db/main/api.py:L4772) | 5/19 | `src/nova/db/main/api.py:L4749–L4773` |
| `instance_tag_get_by_instance_uuid` | function | (context, instance_uuid) | exported | `context.session.query(models.Tag).filter_by( resource_id=instance_uuid).all()` (src/nova/db/main/api.py:L4780) | 1/4 | `src/nova/db/main/api.py:L4777–L4781` |
| `instance_tag_delete` | function | (context, instance_uuid, tag) | exported | not declared | 2/7 | `src/nova/db/main/api.py:L4785–L4793` |
| `instance_tag_delete_all` | function | (context, instance_uuid) | exported | not declared | 1/4 | `src/nova/db/main/api.py:L4797–L4801` |
| `instance_tag_exists` | function | (context, instance_uuid, tag) | exported | `context.session.query(q.exists()).scalar()` (src/nova/db/main/api.py:L4810) | 1/5 | `src/nova/db/main/api.py:L4805–L4810` |
| `console_auth_token_create` | function | (context, values) | exported | `token_ref` (src/nova/db/main/api.py:L4824) | 1/7 | `src/nova/db/main/api.py:L4817–L4824` |
| `console_auth_token_get_valid` | function | (context, token_hash, instance_uuid=None) | exported | `query.filter( models.ConsoleAuthToken.expires > timeutils.utcnow_ts()).first()` (src/nova/db/main/api.py:L4847) | 3/9 | `src/nova/db/main/api.py:L4828–L4848` |
| `console_auth_token_destroy_all_by_instance` | function | (context, instance_uuid) | exported | not declared | 1/3 | `src/nova/db/main/api.py:L4852–L4855` |
| `console_auth_token_destroy_expired` | function | (context) | exported | not declared | 1/4 | `src/nova/db/main/api.py:L4859–L4867` |
| `console_auth_token_destroy_expired_by_host` | function | (context, host) | exported | not declared | 1/5 | `src/nova/db/main/api.py:L4871–L4881` |
| `share_mapping_get_all` | function | (context) | exported | `context.session.query(models.ShareMapping).all()` (src/nova/db/main/api.py:L4891) | 1/2 | `src/nova/db/main/api.py:L4889–L4891` |
| `share_mapping_get_by_share_id` | function | (context, share_id) | exported | `context.session.query(models.ShareMapping).\ filter_by(share_id=share_id).all()` (src/nova/db/main/api.py:L4898) | 1/3 | `src/nova/db/main/api.py:L4896–L4899` |
| `share_mapping_get_by_instance_uuid` | function | (context, instance_uuid) | exported | `context.session.query(models.ShareMapping).\ filter_by(instance_uuid=instance_uuid).all()` (src/nova/db/main/api.py:L4906) | 1/3 | `src/nova/db/main/api.py:L4904–L4907` |
| `share_mapping_get_by_instance_uuids` | function | (context, instance_uuids) | exported | `context.session.query(models.ShareMapping).\ filter(models.ShareMapping.instance_uuid.in_(instance_uuids)).all()` (src/nova/db/main/api.py:L4914) | 1/3 | `src/nova/db/main/api.py:L4912–L4915` |
| `share_mapping_get_by_instance_uuid_and_share_id` | function | (context, instance_uuid, share_id) | exported | `context.session.query(models.ShareMapping).\ filter_by(instance_uuid=instance_uuid, share_id=share_id).first()` (src/nova/db/main/api.py:L4923) | 1/4 | `src/nova/db/main/api.py:L4920–L4924` |
| `share_mapping_delete_by_instance_uuid_and_share_id` | function | (context, instance_uuid, share_id) | exported | not declared | 1/4 | `src/nova/db/main/api.py:L4929–L4933` |
| `share_mapping_update` | function | (context, uuid, instance_uuid, share_id, status, tag, export_location, share_proto) | exported | `share_mapping` (src/nova/db/main/api.py:L4967) | 2/24 | `src/nova/db/main/api.py:L4938–L4967` |

## Dependencies

- `import collections` (src/nova/db/main/api.py:L20)
- `import copy` (src/nova/db/main/api.py:L21)
- `import datetime` (src/nova/db/main/api.py:L22)
- `import functools` (src/nova/db/main/api.py:L23)
- `import inspect` (src/nova/db/main/api.py:L24)
- `import traceback` (src/nova/db/main/api.py:L25)
- `oslo_db`: imports `api as oslo_db_api` (src/nova/db/main/api.py:L27)
- `oslo_db`: imports `exception as db_exc` (src/nova/db/main/api.py:L28)
- `oslo_db.sqlalchemy`: imports `enginefacade` (src/nova/db/main/api.py:L29)
- `oslo_db.sqlalchemy`: imports `update_match` (src/nova/db/main/api.py:L30)
- `oslo_db.sqlalchemy`: imports `utils as sqlalchemyutils` (src/nova/db/main/api.py:L31)
- `oslo_log`: imports `log as logging` (src/nova/db/main/api.py:L32)
- `oslo_utils`: imports `excutils` (src/nova/db/main/api.py:L33)
- `oslo_utils`: imports `importutils` (src/nova/db/main/api.py:L34)
- `oslo_utils`: imports `timeutils` (src/nova/db/main/api.py:L35)
- `oslo_utils`: imports `uuidutils` (src/nova/db/main/api.py:L36)
- `import sqlalchemy as sa` (src/nova/db/main/api.py:L37)
- `sqlalchemy`: imports `exc as sqla_exc` (src/nova/db/main/api.py:L38)
- `sqlalchemy`: imports `orm` (src/nova/db/main/api.py:L39)
- `sqlalchemy`: imports `schema` (src/nova/db/main/api.py:L40)
- `sqlalchemy`: imports `sql` (src/nova/db/main/api.py:L41)
- `sqlalchemy.sql`: imports `expression` (src/nova/db/main/api.py:L42)
- `sqlalchemy.sql`: imports `func` (src/nova/db/main/api.py:L43)
- `nova`: imports `block_device` (src/nova/db/main/api.py:L45)
- `nova.compute`: imports `task_states` (src/nova/db/main/api.py:L46)
- `nova.compute`: imports `vm_states` (src/nova/db/main/api.py:L47)
- `import nova.conf` (src/nova/db/main/api.py:L48)
- `import nova.context` (src/nova/db/main/api.py:L49)
- `nova.db.main`: imports `models` (src/nova/db/main/api.py:L50)
- `nova.db`: imports `utils as db_utils` (src/nova/db/main/api.py:L51)
- `nova.db.utils`: imports `require_context` (src/nova/db/main/api.py:L52)
- `nova`: imports `exception` (src/nova/db/main/api.py:L53)
- `nova.i18n`: imports `_` (src/nova/db/main/api.py:L54)
- `nova`: imports `safe_utils` (src/nova/db/main/api.py:L55)
- `nova`: imports `objects` (src/nova/db/main/api.py:L3456)

## Side Effects

- **network**: min_versions = context.session.query( (src/nova/db/main/api.py:L429)
- **network**: context.session.add(instance_ref) (src/nova/db/main/api.py:L1294)
- **network**: context.session.query(models.Tag).filter_by( (src/nova/db/main/api.py:L1369)
- **network**: context.session.query(models.ConsoleAuthToken).filter_by( (src/nova/db/main/api.py:L1371)
- **network**: actions = context.session.query(models.InstanceAction).filter_by( (src/nova/db/main/api.py:L1382)
- **network**: context.session.query(models.InstanceActionEvent).filter_by( (src/nova/db/main/api.py:L1385)
- **network**: context.session.query(models.InstanceAction).filter_by( (src/nova/db/main/api.py:L1387)
- **network**: context.session.query(models.Instance).filter_by( (src/nova/db/main/api.py:L1391)
- **network**: query_prefix = context.session.query(models.Instance) (src/nova/db/main/api.py:L1716)
- **network**: subq = query_prefix.session.query(models.Tag.resource_id) (src/nova/db/main/api.py:L1792)
- **network**: query = context.session.query(model.uuid) (src/nova/db/main/api.py:L1884)
- **network**: query = context.session.query(models.Instance) (src/nova/db/main/api.py:L2062)
- **network**: for rec in context.session.execute(sel, {'hosts': hosts}).fetchall(): (src/nova/db/main/api.py:L2149)
- **network**: context.session.delete(condemned) (src/nova/db/main/api.py:L2285)
- **network**: context.session.add(newitem) (src/nova/db/main/api.py:L2295)
- **network**: context.session.add(meta_ref) (src/nova/db/main/api.py:L3563)
- **network**: context.session.add(meta_ref) (src/nova/db/main/api.py:L3617)
- **network**: context.session.refresh(current_usage) (src/nova/db/main/api.py:L3721)
- **network**: context.session.add(event_ref) (src/nova/db/main/api.py:L3978)
- **network**: context.session.add(device) (src/nova/db/main/api.py:L4723)
- **network**: context.session.add(tag_ref) (src/nova/db/main/api.py:L4740)
- **network**: existing = context.session.query(models.Tag.tag).filter_by( (src/nova/db/main/api.py:L4753)
- **network**: context.session.query(models.Tag).filter_by( (src/nova/db/main/api.py:L4762)
- **network**: context.session.execute(models.Tag.__table__.insert(), data) (src/nova/db/main/api.py:L4770)
- **network**: return context.session.query(models.Tag).filter_by( (src/nova/db/main/api.py:L4772)
- **network**: return context.session.query(models.Tag).filter_by( (src/nova/db/main/api.py:L4780)
- **network**: result = context.session.query(models.Tag).filter_by( (src/nova/db/main/api.py:L4788)
- **network**: context.session.query(models.Tag).filter_by( (src/nova/db/main/api.py:L4800)
- **network**: q = context.session.query(models.Tag).filter_by( (src/nova/db/main/api.py:L4808)
- **network**: return context.session.query(q.exists()).scalar() (src/nova/db/main/api.py:L4810)
- **network**: context.session.add(token_ref) (src/nova/db/main/api.py:L4823)
- **network**: query = context.session.query(models.ConsoleAuthToken).\ (src/nova/db/main/api.py:L4843)
- **network**: context.session.query(models.ConsoleAuthToken).\ (src/nova/db/main/api.py:L4854)
- **network**: context.session.query(models.ConsoleAuthToken).\ (src/nova/db/main/api.py:L4865)
- **network**: context.session.query(models.ConsoleAuthToken).\ (src/nova/db/main/api.py:L4878)
- **network**: return context.session.query(models.ShareMapping).all() (src/nova/db/main/api.py:L4891)
- **network**: return context.session.query(models.ShareMapping).\ (src/nova/db/main/api.py:L4898)
- **network**: return context.session.query(models.ShareMapping).\ (src/nova/db/main/api.py:L4906)
- **network**: return context.session.query(models.ShareMapping).\ (src/nova/db/main/api.py:L4914)
- **network**: return context.session.query(models.ShareMapping).\ (src/nova/db/main/api.py:L4923)
- **network**: context.session.query(models.ShareMapping).\ (src/nova/db/main/api.py:L4932)
- **network**: context.session.refresh(share_mapping) (src/nova/db/main/api.py:L4954)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/db/main/api.py:L59)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/db/main/api.py:L60)
- **global-mutation**: DISABLE_DB_ACCESS = False (src/nova/db/main/api.py:L62)
- **global-mutation**: PER_PROJECT_QUOTAS = ['fixed_ips', 'floating_ips', 'networks'] (src/nova/db/main/api.py:L152)

## Security Surface

- **sink** (`db-write`): """Decorator to select synchronous or asynchronous reader mode. (src/nova/db/main/api.py:L156)
- **sink** (`db-write`): def model_query( (src/nova/db/main/api.py:L246)
- **sink** (`db-write`): query = sqlalchemyutils.model_query( (src/nova/db/main/api.py:L277)
- **sink** (`db-write`): model_query(context, models.Service).\ (src/nova/db/main/api.py:L379)
- **sink** (`db-write`): model_query(context, models.ComputeNode).\ (src/nova/db/main/api.py:L389)
- **sink** (`db-write`): update({'deleted': models.ComputeNode.id, (src/nova/db/main/api.py:L393)
- **sink** (`db-write`): query = model_query(context, models.Service).filter_by(id=service_id) (src/nova/db/main/api.py:L403)
- **sink** (`db-write`): query = model_query(context, models.Service).filter_by(uuid=service_uuid) (src/nova/db/main/api.py:L417)
- **sink** (`db-write`): query = model_query(context, models.Service) (src/nova/db/main/api.py:L442)
- **sink** (`db-write`): return model_query(context, models.Service, read_deleted="no").\ (src/nova/db/main/api.py:L453)
- **sink** (`db-write`): return model_query(context, models.Service, read_deleted="no").\ (src/nova/db/main/api.py:L462)
- **sink** (`db-write`): query = model_query(context, models.Service).filter_by(binary=binary) (src/nova/db/main/api.py:L475)
- **sink** (`db-write`): query = model_query(context, models.Service, read_deleted="no").\ (src/nova/db/main/api.py:L488)
- **sink** (`db-write`): result = model_query(context, models.Service, read_deleted="no").\ (src/nova/db/main/api.py:L502)
- **sink** (`db-write`): return model_query(context, models.Service, read_deleted="no").\ (src/nova/db/main/api.py:L516)
- **sink** (`db-write`): result = model_query(context, models.Service, read_deleted="no").\ (src/nova/db/main/api.py:L527)
- **sink** (`db-write`): service_ref.update(values) (src/nova/db/main/api.py:L542)
- **sink** (`db-write`): """Set the given properties on a service and update it. (src/nova/db/main/api.py:L566)
- **sink** (`db-write`): service_ref.update(values) (src/nova/db/main/api.py:L577)
- **sink** (`db-write`): select = sa.select(cn_tbl) (src/nova/db/main/api.py:L590)
- **sink** (`db-write`): select = select.where(cn_tbl.c.deleted == 0) (src/nova/db/main/api.py:L593)
- **sink** (`db-write`): select = select.where(cn_tbl.c.id == filters["compute_id"]) (src/nova/db/main/api.py:L595)
- **sink** (`db-write`): select = select.where(cn_tbl.c.service_id == filters["service_id"]) (src/nova/db/main/api.py:L597)
- **sink** (`db-write`): select = select.where(cn_tbl.c.host == filters["host"]) (src/nova/db/main/api.py:L599)
- **sink** (`db-write`): select = select.where(cn_tbl.c.hypervisor_hostname == hyp_hostname) (src/nova/db/main/api.py:L602)
- **sink** (`db-write`): select = select.where(cn_tbl.c.mapped < filters['mapped']) (src/nova/db/main/api.py:L604)
- **sink** (`db-write`): select = select.where(cn_tbl.c.id > marker) (src/nova/db/main/api.py:L610)
- **sink** (`db-write`): select = select.limit(limit) (src/nova/db/main/api.py:L612)
- **sink** (`db-write`): select = select.order_by(expression.asc("id")) (src/nova/db/main/api.py:L615)
- **sink** (`db-write`): return select (src/nova/db/main/api.py:L616)
- **sink** (`db-write`): select = _compute_node_select(context, filters, limit=limit, marker=marker) (src/nova/db/main/api.py:L620)
- **sink** (`db-write`): results = conn.execute(select).fetchall() (src/nova/db/main/api.py:L624)
- **sink** (`db-write`): result = model_query(context, models.ComputeNode).\ (src/nova/db/main/api.py:L662)
- **sink** (`db-write`): return model_query(context, models.ComputeNode).\ (src/nova/db/main/api.py:L789)
- **sink** (`db-write`): compute_node_ref.update(values) (src/nova/db/main/api.py:L807)
- **sink** (`db-write`): """Find a compute node by uuid, update and un-delete it. (src/nova/db/main/api.py:L844)
- **sink** (`db-write`): This method will update the ComputeNode, if found, to have deleted=0 and (src/nova/db/main/api.py:L849)
- **sink** (`db-write`): :param values: values used to update the ComputeNode record - must include (src/nova/db/main/api.py:L854)
- **sink** (`db-write`): cn = model_query( (src/nova/db/main/api.py:L859)
- **sink** (`db-write`): """Set the given properties on a compute node and update it. (src/nova/db/main/api.py:L872)
- **sink** (`db-write`): compute_ref.update(values) (src/nova/db/main/api.py:L889)
- **sink** (`db-write`): query = model_query(context, models.ComputeNode).filter_by(id=compute_id) (src/nova/db/main/api.py:L906)
- **sink** (`db-write`): select = sql.select(*agg_cols).select_from(j) (src/nova/db/main/api.py:L992)
- **sink** (`db-write`): results = conn.execute(select).mappings().fetchone() (src/nova/db/main/api.py:L995)
- **sink** (`db-write`): return model_query(context, models.Certificate, read_deleted="no").\ (src/nova/db/main/api.py:L1021)
- **sink** (`db-write`): return model_query(context, models.Certificate, read_deleted="no").\ (src/nova/db/main/api.py:L1029)
- **sink** (`db-write`): return model_query(context, models.Certificate, read_deleted="no").\ (src/nova/db/main/api.py:L1037)
- **sink** (`db-write`): vif_ref.update(values) (src/nova/db/main/api.py:L1055)
- **sink** (`db-write`): return model_query(context, models.VirtualInterface, read_deleted="no") (src/nova/db/main/api.py:L1065)
- **sink** (`db-write`): vif_ref.update(values) (src/nova/db/main/api.py:L1073)
- **sink** (`db-write`): base_query = model_query(context, models.Instance, read_deleted='no').\ (src/nova/db/main/api.py:L1201)
- **sink** (`db-write`): if not model_query(context, models.Instance, read_deleted="no", (src/nova/db/main/api.py:L1236)
- **sink** (`db-write`): instance_ref['info_cache'].update(info_cache) (src/nova/db/main/api.py:L1268)
- **sink** (`db-write`): instance_ref['extra'].update( (src/nova/db/main/api.py:L1271)
- **sink** (`db-write`): instance_ref['extra'].update(values.pop('extra', {})) (src/nova/db/main/api.py:L1278)
- **sink** (`db-write`): instance_ref.update(values) (src/nova/db/main/api.py:L1279)
- **sink** (`db-write`): query = model_query(context, models.Instance).\ (src/nova/db/main/api.py:L1326)
- **sink** (`db-write`): model_query(context, model, read_deleted='yes').filter_by( (src/nova/db/main/api.py:L1362)
- **sink** (`db-write`): model_query(context, model).filter_by(**filter_).soft_delete() (src/nova/db/main/api.py:L1365)
- **sink** (`db-write`): query = model_query( (src/nova/db/main/api.py:L1436)
- **sink** (`db-write`): query = model_query(context, models.Instance) (src/nova/db/main/api.py:L1575)
- **sink** (`db-write`): query = model_query( (src/nova/db/main/api.py:L2110)
- **sink** (`db-write`): sel = sql.select(itbl.c.host, itbl.c.uuid) (src/nova/db/main/api.py:L2142)
- **sink** (`db-write`): instances = model_query(context, models.Instance).filter( (src/nova/db/main/api.py:L2208)
- **sink** (`db-write`): """Set the given properties on an instance and update it. (src/nova/db/main/api.py:L2232)
- **sink** (`db-write`): """Set the given properties on an instance and update it. (src/nova/db/main/api.py:L2244)
- **sink** (`db-write`): If "expected_task_state" exists in values, the update can only happen (src/nova/db/main/api.py:L2249)
- **sink** (`db-write`): when the task state before update matches expected_task_state. Otherwise (src/nova/db/main/api.py:L2250)
- **sink** (`db-write`): newitem.update({'key': key, 'value': value, (src/nova/db/main/api.py:L2293)
- **sink** (`db-write`): instance_ref = model_query(context, models.Instance, (src/nova/db/main/api.py:L2342)
- **sink** (`db-write`): sec_group_ref.update({'instance_uuid': instance_uuid, (src/nova/db/main/api.py:L2424)
- **sink** (`db-write`): model_query(context, models.SecurityGroupInstanceAssociation).\ (src/nova/db/main/api.py:L2433)
- **sink** (`db-write`): return model_query(context, models.InstanceInfoCache).\ (src/nova/db/main/api.py:L2449)
- **sink** (`db-write`): """Update an instance info cache record in the table. (src/nova/db/main/api.py:L2458)
- **sink** (`db-write`): :param values: = dict containing column values to update (src/nova/db/main/api.py:L2461)
- **sink** (`db-write`): info_cache = model_query(context, models.InstanceInfoCache).\ (src/nova/db/main/api.py:L2465)
- **sink** (`db-write`): info_cache.update(values) (src/nova/db/main/api.py:L2484)
- **sink** (`db-write`): model_query(context, models.InstanceInfoCache).\ (src/nova/db/main/api.py:L2501)
- **sink** (`db-write`): inst_extra_ref.update(values) (src/nova/db/main/api.py:L2511)
- **sink** (`db-write`): """Update the instance extra record by instance uuid (src/nova/db/main/api.py:L2518)
- **sink** (`db-write`): rows_updated = model_query(context, models.InstanceExtra).\ (src/nova/db/main/api.py:L2523)
- **sink** (`db-write`): update(updates) (src/nova/db/main/api.py:L2525)
- **sink** (`db-write`): query = model_query(context, models.InstanceExtra).filter_by( (src/nova/db/main/api.py:L2544)
- **sink** (`db-write`): query = model_query(context, model).\ (src/nova/db/main/api.py:L2565)
- **sink** (`db-write`): user_quotas = model_query(context, models.ProjectUserQuota, (src/nova/db/main/api.py:L2586)
- **sink** (`db-write`): rows = model_query(context, models.Quota, read_deleted="no").\ (src/nova/db/main/api.py:L2604)
- **sink** (`db-write`): result = model_query(context, models.ProjectUserQuota).\ (src/nova/db/main/api.py:L2619)
- **sink** (`db-write`): """Update a quota or raise if it does not exist.""" (src/nova/db/main/api.py:L2652)
- **sink** (`db-write`): query = model_query(context, model).\ (src/nova/db/main/api.py:L2655)
- **sink** (`db-write`): result = query.update({'hard_limit': limit}) (src/nova/db/main/api.py:L2661)
- **sink** (`db-write`): result = model_query(context, models.QuotaClass, read_deleted="no").\ (src/nova/db/main/api.py:L2677)
- **sink** (`db-write`): rows = model_query(context, models.QuotaClass, read_deleted="no").\ (src/nova/db/main/api.py:L2691)
- **sink** (`db-write`): rows = model_query(context, models.QuotaClass, read_deleted="no").\ (src/nova/db/main/api.py:L2706)
- **sink** (`db-write`): """Update a quota class or raise if it does not exist.""" (src/nova/db/main/api.py:L2730)
- **sink** (`db-write`): result = model_query(context, models.QuotaClass, read_deleted="no").\ (src/nova/db/main/api.py:L2731)
- **sink** (`db-write`): update({'hard_limit': limit}) (src/nova/db/main/api.py:L2734)
- **sink** (`db-write`): model_query(context, models.ProjectUserQuota, read_deleted="no").\ (src/nova/db/main/api.py:L2746)
- **sink** (`db-write`): model_query(context, models.Quota, read_deleted="no").\ (src/nova/db/main/api.py:L2755)
- **sink** (`db-write`): model_query(context, models.ProjectUserQuota, read_deleted="no").\ (src/nova/db/main/api.py:L2759)
- **sink** (`db-write`): query = model_query(context, models.BlockDeviceMapping) (src/nova/db/main/api.py:L2771)
- **sink** (`db-write`): bdm_ref.update(values) (src/nova/db/main/api.py:L2823)
- **sink** (`db-write`): """Update an entry of block device mapping.""" (src/nova/db/main/api.py:L2831)
- **sink** (`db-write`): query.update(values) (src/nova/db/main/api.py:L2837)
- **sink** (`db-write`): """Update an entry of block device mapping. (src/nova/db/main/api.py:L2843)
- **sink** (`db-write`): result.update(values) (src/nova/db/main/api.py:L2871)
- **sink** (`db-write`): security_group_ref.update(values) (src/nova/db/main/api.py:L2979)
- **sink** (`db-write`): query = model_query( (src/nova/db/main/api.py:L2992)
- **sink** (`db-write`): inst_assoc = model_query(context, (src/nova/db/main/api.py:L3110)
- **sink** (`db-write`): num_instances = model_query(context, models.Instance, (src/nova/db/main/api.py:L3116)
- **sink** (`db-write`): """Update a security group.""" (src/nova/db/main/api.py:L3129)
- **sink** (`db-write`): query = model_query(context, models.SecurityGroup).filter_by( (src/nova/db/main/api.py:L3130)
- **sink** (`db-write`): security_group_ref.update(values) (src/nova/db/main/api.py:L3138)
- **sink** (`db-write`): model_query(context, models.SecurityGroup).\ (src/nova/db/main/api.py:L3190)
- **sink** (`db-write`): model_query(context, models.SecurityGroupInstanceAssociation).\ (src/nova/db/main/api.py:L3193)
- **sink** (`db-write`): model_query(context, models.SecurityGroupIngressRule).\ (src/nova/db/main/api.py:L3196)
- **sink** (`db-write`): model_query(context, models.SecurityGroupIngressRule).\ (src/nova/db/main/api.py:L3199)
- **sink** (`db-write`): migration.update(values) (src/nova/db/main/api.py:L3211)
- **sink** (`db-write`): """Update a migration instance.""" (src/nova/db/main/api.py:L3219)
- **sink** (`db-write`): migration.update(values) (src/nova/db/main/api.py:L3221)
- **sink** (`db-write`): result = model_query(context, models.Migration, read_deleted="yes").\ (src/nova/db/main/api.py:L3229)
- **sink** (`db-write`): result = model_query(context, models.Migration, read_deleted="yes").\ (src/nova/db/main/api.py:L3242)
- **sink** (`db-write`): result = model_query(context, models.Migration).\ (src/nova/db/main/api.py:L3255)
- **sink** (`db-write`): result = model_query(context, models.Migration, read_deleted="yes").\ (src/nova/db/main/api.py:L3270)
- **sink** (`db-write`): return model_query(context, models.Migration, read_deleted="yes").\ (src/nova/db/main/api.py:L3292)
- **sink** (`db-write`): return model_query( (src/nova/db/main/api.py:L3313)
- **sink** (`db-write`): query = model_query(context, models.Migration).\ (src/nova/db/main/api.py:L3352)
- **sink** (`db-write`): query = model_query(context, models.Migration) (src/nova/db/main/api.py:L3371)
- **sink** (`db-write`): db_migrations = model_query(context, models.Migration).filter_by( (src/nova/db/main/api.py:L3458)
- **sink** (`db-write`): return model_query( (src/nova/db/main/api.py:L3477)
- **sink** (`db-write`): return model_query(context, models.InstanceMetadata).filter( (src/nova/db/main/api.py:L3511)
- **sink** (`db-write`): return model_query(context, models.InstanceMetadata, read_deleted="no").\ (src/nova/db/main/api.py:L3516)
- **sink** (`db-write`): """Update metadata if it exists, otherwise create it.""" (src/nova/db/main/api.py:L3542)
- **sink** (`db-write`): meta_ref.update({"value": metadata[meta_ref.key]}) (src/nova/db/main/api.py:L3556)
- **sink** (`db-write`): meta_ref.update({"key": key, "value": metadata[key], (src/nova/db/main/api.py:L3561)
- **sink** (`db-write`): return model_query(context, models.InstanceSystemMetadata, (src/nova/db/main/api.py:L3575)
- **sink** (`db-write`): return model_query(context, models.InstanceSystemMetadata).\ (src/nova/db/main/api.py:L3581)
- **sink** (`db-write`): """Update metadata if it exists, otherwise create it.""" (src/nova/db/main/api.py:L3596)
- **sink** (`db-write`): meta_ref.update({"value": metadata[meta_ref.key]}) (src/nova/db/main/api.py:L3610)
- **sink** (`db-write`): meta_ref.update({"key": key, "value": metadata[key], (src/nova/db/main/api.py:L3615)
- **sink** (`db-write`): return model_query(context, models.VolumeUsage, read_deleted="yes").\ (src/nova/db/main/api.py:L3629)
- **sink** (`db-write`): """Update cached volume usage for a volume (src/nova/db/main/api.py:L3645)
- **sink** (`db-write`): current_usage = model_query(context, models.VolumeUsage, (src/nova/db/main/api.py:L3682)
- **sink** (`db-write`): current_usage.update(values) (src/nova/db/main/api.py:L3719)
- **sink** (`db-write`): result = model_query(context, models.S3Image, read_deleted="yes").\ (src/nova/db/main/api.py:L3755)
- **sink** (`db-write`): result = model_query(context, models.S3Image, read_deleted="yes").\ (src/nova/db/main/api.py:L3768)
- **sink** (`db-write`): s3_image_ref.update({'uuid': image_uuid}) (src/nova/db/main/api.py:L3783)
- **sink** (`db-write`): fault_ref.update(values) (src/nova/db/main/api.py:L3798)
- **sink** (`db-write`): query = model_query(context, models.InstanceFault, (src/nova/db/main/api.py:L3820)
- **sink** (`db-write`): latest_faults = model_query( (src/nova/db/main/api.py:L3839)
- **sink** (`db-write`): action_ref.update(values) (src/nova/db/main/api.py:L3875)
- **sink** (`db-write`): query = model_query(context, models.InstanceAction).\ (src/nova/db/main/api.py:L3885)
- **sink** (`db-write`): if query.update(values) != 1: (src/nova/db/main/api.py:L3888)
- **sink** (`db-write`): query_prefix = model_query(context, models.InstanceAction).\ (src/nova/db/main/api.py:L3905)
- **sink** (`db-write`): result = model_query(context, models.InstanceAction).\ (src/nova/db/main/api.py:L3932)
- **sink** (`db-write`): result = model_query(context, models.InstanceAction).\ (src/nova/db/main/api.py:L3941)
- **sink** (`db-write`): event_ref.update(values) (src/nova/db/main/api.py:L3977)
- **sink** (`db-write`): action.update({'updated_at': values['start_time']}) (src/nova/db/main/api.py:L3982)
- **sink** (`db-write`): event_ref = model_query(context, models.InstanceActionEvent).\ (src/nova/db/main/api.py:L4017)
- **sink** (`db-write`): event_ref.update(values) (src/nova/db/main/api.py:L4025)
- **sink** (`db-write`): action.update({'message': 'Error'}) (src/nova/db/main/api.py:L4028)
- **sink** (`db-write`): action.update({'updated_at': values['finish_time']}) (src/nova/db/main/api.py:L4032)
- **sink** (`db-write`): events = model_query(context, models.InstanceActionEvent).\ (src/nova/db/main/api.py:L4041)
- **sink** (`db-write`): event = model_query(context, models.InstanceActionEvent).\ (src/nova/db/main/api.py:L4051)
- **sink** (`db-write`): ec2_instance_ref.update({'uuid': instance_uuid}) (src/nova/db/main/api.py:L4067)
- **sink** (`db-write`): ec2_instance_ref.update({'id': id}) (src/nova/db/main/api.py:L4069)
- **sink** (`db-write`): return model_query(context, models.InstanceIdMapping, read_deleted='yes') (src/nova/db/main/api.py:L4112)
- **sink** (`db-write`): query = model_query(context, models.TaskLog).\ (src/nova/db/main/api.py:L4124)
- **sink** (`db-write`): period_ending, host).update(values) (src/nova/db/main/api.py:L4186)
- **sink** (`db-write`): return insert/delete statements for them. (src/nova/db/main/api.py:L4212)
- **sink** (`db-write`): orphaning related records if any one insert/delete fails or the archive (src/nova/db/main/api.py:L4217)
- **sink** (`db-write`): :param conn: Connection object to use to select records related by FK (src/nova/db/main/api.py:L4221)
- **sink** (`db-write`): :param column: Column object (parent) to use to select records related by (src/nova/db/main/api.py:L4223)
- **sink** (`db-write`): :param records: A list of records (column values) to use to select records (src/nova/db/main/api.py:L4225)
- **sink** (`db-write`): :returns: tuple of (insert statements, delete statements) for records (src/nova/db/main/api.py:L4228)
- **sink** (`db-write`): related by FK to insert into shadow tables and delete from main tables (src/nova/db/main/api.py:L4229)
- **sink** (`db-write`): select = sql.select(fk.column).where( (src/nova/db/main/api.py:L4276)
- **sink** (`db-write`): rows = conn.execute(select).fetchall() (src/nova/db/main/api.py:L4280)
- **sink** (`db-write`): fk_select = sql.select(fk_column).where( (src/nova/db/main/api.py:L4292)
- **sink** (`db-write`): fk_insert = fk_shadow_table.insert().from_select( (src/nova/db/main/api.py:L4303)
- **sink** (`db-write`): sql.select(fk_table).where(fk_column.in_(fk_records)) (src/nova/db/main/api.py:L4305)
- **sink** (`db-write`): select = sql.select(column).where( (src/nova/db/main/api.py:L4369)
- **sink** (`db-write`): select = sql.select(column) (src/nova/db/main/api.py:L4376)
- **sink** (`db-write`): select = select.where(table.c.deleted_at < before) (src/nova/db/main/api.py:L4380)
- **sink** (`db-write`): select = select.where(table.c.updated_at < before) (src/nova/db/main/api.py:L4384)
- **sink** (`db-write`): select = select.order_by(column).limit(max_rows) (src/nova/db/main/api.py:L4386)
- **sink** (`db-write`): rows = conn.execute(select).fetchall() (src/nova/db/main/api.py:L4388)
- **sink** (`db-write`): insert = shadow_table.insert().from_select( (src/nova/db/main/api.py:L4448)
- **sink** (`db-write`): columns, sql.select(table).where(column.in_([record]))).inline() (src/nova/db/main/api.py:L4449)
- **sink** (`db-write`): statements_in_batch.append(insert) (src/nova/db/main/api.py:L4450)
- **sink** (`db-write`): query_select = sql.select(table.c.uuid).where( (src/nova/db/main/api.py:L4472)
- **sink** (`db-write`): pci_dev_ref = model_query(context, models.PciDevice).\ (src/nova/db/main/api.py:L4647)
- **sink** (`db-write`): pci_dev_ref = model_query(context, models.PciDevice).\ (src/nova/db/main/api.py:L4659)
- **sink** (`db-write`): return model_query(context, models.PciDevice).\ (src/nova/db/main/api.py:L4670)
- **sink** (`db-write`): return model_query(context, models.PciDevice).\ (src/nova/db/main/api.py:L4678)
- **sink** (`db-write`): return model_query(context, models.PciDevice).\ (src/nova/db/main/api.py:L4688)
- **sink** (`db-write`): return model_query(context, models.PciDevice).\ (src/nova/db/main/api.py:L4698)
- **sink** (`db-write`): result = model_query(context, models.PciDevice).\ (src/nova/db/main/api.py:L4706)
- **sink** (`db-write`): """Update a pci device.""" (src/nova/db/main/api.py:L4716)
- **sink** (`db-write`): query = model_query(context, models.PciDevice, read_deleted="no").\ (src/nova/db/main/api.py:L4717)
- **sink** (`db-write`): if query.update(values) == 0: (src/nova/db/main/api.py:L4720)
- **sink** (`db-write`): device.update(values) (src/nova/db/main/api.py:L4722)
- **sink** (`db-write`): context.session.execute(models.Tag.__table__.insert(), data) (src/nova/db/main/api.py:L4770)
- **sink** (`db-write`): token_ref.update(values) (src/nova/db/main/api.py:L4822)
- **sink** (`db-write`): """Update share_mapping for a share (src/nova/db/main/api.py:L4942)

