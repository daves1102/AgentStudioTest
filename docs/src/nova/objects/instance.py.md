# src/nova/objects/instance.py

## Overview

This file implements the `instance` module, defining 2 classs, 7 constants, 3 fields, 4 functions, 88 methods, 2 propertys, 6 variables, 23 imports, 12 side effects.

Lines: total 1715, code 1296, comment 208, blank 211

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/objects/instance.py:L42–L42` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/objects/instance.py:L43–L43` |
| `_INSTANCE_OPTIONAL_JOINED_FIELDS` | variable | — | unexported | not declared | — | `src/nova/objects/instance.py:L47–L50` |
| `_INSTANCE_OPTIONAL_NON_COLUMN_FIELDS` | variable | — | unexported | not declared | — | `src/nova/objects/instance.py:L52–L53` |
| `_INSTANCE_EXTRA_FIELDS` | variable | — | unexported | not declared | — | `src/nova/objects/instance.py:L55–L58` |
| `_MIGRATION_CONTEXT_ATTRS` | variable | — | unexported | not declared | — | `src/nova/objects/instance.py:L60–L61` |
| `INSTANCE_OPTIONAL_ATTRS` | constant | — | exported | not declared | — | `src/nova/objects/instance.py:L64–L66` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/instance.py:L68–L72` |
| `INSTANCE_DEFAULT_FIELDS` | constant | — | exported | not declared | — | `src/nova/objects/instance.py:L75–L76` |
| `MAX_TAG_COUNT` | constant | — | exported | not declared | — | `src/nova/objects/instance.py:L79–L79` |
| `_expected_cols` | function | (expected_attrs) | unexported | `expected_attrs` (src/nova/objects/instance.py:L89); `sorted(list(set(expected_cols)), key=expected_cols.index)` (src/nova/objects/instance.py:L106) | 9/13 | `src/nova/objects/instance.py:L82–L106` |
| `_NO_DATA_SENTINEL` | variable | — | unexported | not declared | — | `src/nova/objects/instance.py:L109–L109` |
| `Instance` | class | — | exported | not declared | — | `src/nova/objects/instance.py:L114–L1317` |
| `Instance.VERSION` | constant | — | public | not declared | — | `src/nova/objects/instance.py:L125–L125` |
| `Instance.fields` | field | — | public | not declared | — | `src/nova/objects/instance.py:L127–L235` |
| `Instance.obj_extra_fields` | field | — | public | not declared | — | `src/nova/objects/instance.py:L237–L237` |
| `Instance.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 15/17 | `src/nova/objects/instance.py:L239–L255` |
| `Instance.__init__` | method | (self, *args, **kwargs) | public | not declared | 1/3 | `src/nova/objects/instance.py:L257–L259` |
| `Instance.image_meta` | method | (self) | public | `objects.ImageMeta.from_instance(self)` (src/nova/objects/instance.py:L263) | 1/2 | `src/nova/objects/instance.py:L262–L263` |
| `Instance._reset_metadata_tracking` | method | (self, fields=None) | private | not declared | 7/7 | `src/nova/objects/instance.py:L265–L271` |
| `Instance.obj_clone` | method | (self) | public | `nobj` (src/nova/objects/instance.py:L284) | 3/7 | `src/nova/objects/instance.py:L273–L284` |
| `Instance.obj_reset_changes` | method | (self, fields=None, recursive=False) | public | not declared | 1/4 | `src/nova/objects/instance.py:L286–L289` |
| `Instance.obj_what_changed` | method | (self) | public | `changes` (src/nova/objects/instance.py:L298) | 5/8 | `src/nova/objects/instance.py:L291–L298` |
| `Instance._obj_from_primitive` | method | (cls, context, objver, primitive) | private | `self` (src/nova/objects/instance.py:L305) | 1/5 | `src/nova/objects/instance.py:L301–L305` |
| `Instance.name` | method | (self) | public | `base_name` (src/nova/objects/instance.py:L345) | 9/25 | `src/nova/objects/instance.py:L308–L345` |
| `Instance._flavor_from_db` | method | (self, db_flavor) | private | not declared | 3/18 | `src/nova/objects/instance.py:L347–L380` |
| `Instance._flavor_from_db._default_flavor_values` | function | (flavor) | private | not declared | — | `src/nova/objects/instance.py:L358–L362` |
| `Instance._from_db_object` | method | (context, instance, db_inst, expected_attrs=None) | private | `instance` (src/nova/objects/instance.py:L453) | 18/53 | `src/nova/objects/instance.py:L383–L453` |
| `Instance._extra_attributes_from_db_object` | method | (instance, db_inst, expected_attrs=None) | private | not declared | 25/58 | `src/nova/objects/instance.py:L456–L518` |
| `Instance._db_instance_get_by_uuid` | method | (context, uuid, columns_to_join, use_slave=False) | private | `db.instance_get_by_uuid(context, uuid, columns_to_join=columns_to_join)` (src/nova/objects/instance.py:L524) | 1/4 | `src/nova/objects/instance.py:L522–L525` |
| `Instance.get_by_uuid` | method | (cls, context, uuid, expected_attrs=None, use_slave=False) | public | `cls._from_db_object(context, cls(), db_inst, expected_attrs)` (src/nova/objects/instance.py:L535) | 2/8 | `src/nova/objects/instance.py:L529–L536` |
| `Instance.get_by_id` | method | (cls, context, inst_id, expected_attrs=None) | public | `cls._from_db_object(context, cls(), db_inst, expected_attrs)` (src/nova/objects/instance.py:L546) | 2/8 | `src/nova/objects/instance.py:L540–L547` |
| `Instance.create` | method | (self) | public | not declared | 26/97 | `src/nova/objects/instance.py:L550–L669` |
| `Instance.destroy` | method | (self, hard_delete=False) | public | not declared | 6/20 | `src/nova/objects/instance.py:L672–L693` |
| `Instance._save_info_cache` | method | (self, context) | private | not declared | 2/4 | `src/nova/objects/instance.py:L695–L698` |
| `Instance._save_security_groups` | method | (self, context) | private | not declared | 1/2 | `src/nova/objects/instance.py:L701–L704` |
| `Instance._save_fault` | method | (self, context) | private | not declared | 1/2 | `src/nova/objects/instance.py:L706–L708` |
| `Instance._save_pci_requests` | method | (self, context) | private | not declared | 1/3 | `src/nova/objects/instance.py:L710–L715` |
| `Instance._save_pci_devices` | method | (self, context) | private | not declared | 1/2 | `src/nova/objects/instance.py:L717–L721` |
| `Instance._save_tags` | method | (self, context) | private | not declared | 1/2 | `src/nova/objects/instance.py:L723–L725` |
| `Instance._save_services` | method | (self, context) | private | not declared | 1/2 | `src/nova/objects/instance.py:L727–L729` |
| `Instance._nullify_flavor_description` | method | (flavor_info) | private | not declared | 4/4 | `src/nova/objects/instance.py:L732–L745` |
| `Instance._save_flavor` | method | (self, context) | private | `` (src/nova/objects/instance.py:L750) | 7/14 | `src/nova/objects/instance.py:L747–L760` |
| `Instance._save_old_flavor` | method | (self, context) | private | not declared | 2/3 | `src/nova/objects/instance.py:L762–L764` |
| `Instance._save_new_flavor` | method | (self, context) | private | not declared | 2/3 | `src/nova/objects/instance.py:L766–L768` |
| `Instance._save_ec2_ids` | method | (self, context) | private | not declared | 1/2 | `src/nova/objects/instance.py:L770–L772` |
| `Instance._save_keypairs` | method | (self, context) | private | not declared | 2/4 | `src/nova/objects/instance.py:L774–L777` |
| `Instance._save_extra_generic` | method | (self, field) | private | not declared | 3/7 | `src/nova/objects/instance.py:L779–L785` |
| `Instance.save` | method | (self, expected_vm_state=None, expected_task_state=None, admin_state_reset=False) | public | `` (src/nova/objects/instance.py:L857) | 22/60 | `src/nova/objects/instance.py:L790–L894` |
| `Instance.refresh` | method | (self, use_slave=False) | public | not declared | 8/19 | `src/nova/objects/instance.py:L897–L923` |
| `Instance._load_generic` | method | (self, attrname) | private | not declared | 5/11 | `src/nova/objects/instance.py:L925–L941` |
| `Instance._load_fault` | method | (self) | private | not declared | 1/3 | `src/nova/objects/instance.py:L943–L945` |
| `Instance._load_numa_topology` | method | (self, db_topology=_NO_DATA_SENTINEL) | private | not declared | 4/13 | `src/nova/objects/instance.py:L947–L959` |
| `Instance._load_pci_requests` | method | (self, db_requests=_NO_DATA_SENTINEL) | private | not declared | 2/8 | `src/nova/objects/instance.py:L961–L968` |
| `Instance._load_device_metadata` | method | (self, db_dev_meta=_NO_DATA_SENTINEL) | private | not declared | 3/11 | `src/nova/objects/instance.py:L970–L980` |
| `Instance._load_flavor` | method | (self) | private | not declared | 1/8 | `src/nova/objects/instance.py:L982–L992` |
| `Instance._load_vcpu_model` | method | (self, db_vcpu_model=_NO_DATA_SENTINEL) | private | not declared | 3/10 | `src/nova/objects/instance.py:L994–L1003` |
| `Instance._load_ec2_ids` | method | (self) | private | not declared | 1/2 | `src/nova/objects/instance.py:L1005–L1006` |
| `Instance._load_pci_devices` | method | (self) | private | not declared | 1/3 | `src/nova/objects/instance.py:L1008–L1010` |
| `Instance._load_migration_context` | method | (self, db_context=_NO_DATA_SENTINEL) | private | not declared | 4/13 | `src/nova/objects/instance.py:L1012–L1024` |
| `Instance._load_keypairs` | method | (self, db_keypairs=_NO_DATA_SENTINEL) | private | not declared | 4/14 | `src/nova/objects/instance.py:L1026–L1041` |
| `Instance._load_tags` | method | (self) | private | not declared | 1/3 | `src/nova/objects/instance.py:L1043–L1045` |
| `Instance._load_trusted_certs` | method | (self, db_trusted_certs=_NO_DATA_SENTINEL) | private | not declared | 3/9 | `src/nova/objects/instance.py:L1047–L1055` |
| `Instance._load_resources` | method | (self, db_resources=_NO_DATA_SENTINEL) | private | not declared | 3/9 | `src/nova/objects/instance.py:L1057–L1065` |
| `Instance.apply_migration_context` | method | (self) | public | not declared | 2/6 | `src/nova/objects/instance.py:L1067–L1072` |
| `Instance.revert_migration_context` | method | (self) | public | not declared | 2/6 | `src/nova/objects/instance.py:L1074–L1079` |
| `Instance._set_migration_context_to_instance` | method | (self, prefix) | private | not declared | 3/8 | `src/nova/objects/instance.py:L1081–L1088` |
| `Instance.mutated_migration_context` | method | (self, revert=False) | public | `` (src/nova/objects/instance.py:L1102) | 7/16 | `src/nova/objects/instance.py:L1091–L1115` |
| `Instance.drop_migration_context` | method | (self) | public | not declared | 2/5 | `src/nova/objects/instance.py:L1118–L1122` |
| `Instance.clear_numa_topology` | method | (self) | public | not declared | 2/4 | `src/nova/objects/instance.py:L1124–L1127` |
| `Instance.obj_load_attr` | method | (self, attrname) | public | not declared | 4/20 | `src/nova/objects/instance.py:L1130–L1152` |
| `Instance._obj_load_attr` | method | (self, attrname) | private | `self._load_keypairs()` (src/nova/objects/instance.py:L1188); `self._load_trusted_certs()` (src/nova/objects/instance.py:L1190); `self._load_resources()` (src/nova/objects/instance.py:L1192) | 20/41 | `src/nova/objects/instance.py:L1154–L1225` |
| `Instance.get_flavor` | method | (self, namespace=None) | public | `getattr(self, attr)` (src/nova/objects/instance.py:L1231); `None` (src/nova/objects/instance.py:L1239) | 3/7 | `src/nova/objects/instance.py:L1227–L1239` |
| `Instance.delete_metadata_key` | method | (self, key) | public | not declared | 2/8 | `src/nova/objects/instance.py:L1242–L1256` |
| `Instance.get_network_info` | method | (self) | public | `network_model.NetworkInfo.hydrate([])` (src/nova/objects/instance.py:L1260); `self.info_cache.network_info` (src/nova/objects/instance.py:L1261) | 2/4 | `src/nova/objects/instance.py:L1258–L1261` |
| `Instance.get_bdms` | method | (self) | public | `objects.BlockDeviceMappingList.get_by_instance_uuid( self._context, self.uuid)` (src/nova/objects/instance.py:L1264) | 1/3 | `src/nova/objects/instance.py:L1263–L1265` |
| `Instance.get_shares` | method | (self) | public | `objects.ShareMappingList.get_by_instance_uuid( self._context, self.uuid)` (src/nova/objects/instance.py:L1268) | 1/3 | `src/nova/objects/instance.py:L1267–L1269` |
| `Instance.remove_pci_device_and_request` | method | (self, pci_device) | public | not declared | 4/6 | `src/nova/objects/instance.py:L1271–L1277` |
| `Instance.get_pci_devices` | method | (self, source=None, request_id=None) | public | `[]` (src/nova/objects/instance.py:L1296); `devs` (src/nova/objects/instance.py:L1317) | 9/20 | `src/nova/objects/instance.py:L1279–L1317` |
| `_make_instance_list` | function | (context, inst_list, db_inst_list, expected_attrs) | unexported | `inst_list` (src/nova/objects/instance.py:L1344) | 8/22 | `src/nova/objects/instance.py:L1320–L1344` |
| `populate_instance_compute_id` | function | (context, max_count) | exported | `count_all, count_hit` (src/nova/objects/instance.py:L1368) | 3/21 | `src/nova/objects/instance.py:L1348–L1368` |
| `InstanceList` | class | — | exported | not declared | — | `src/nova/objects/instance.py:L1372–L1715` |
| `InstanceList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/instance.py:L1380–L1380` |
| `InstanceList.fields` | field | — | public | not declared | — | `src/nova/objects/instance.py:L1382–L1384` |
| `InstanceList._get_by_filters_impl` | method | (cls, context, filters, sort_key='created_at', sort_dir='desc', limit=None, marker=None, expected_attrs=None, use_slave=False, sort_keys=None, sort_dirs=None) | private | `db_inst_list` (src/nova/objects/instance.py:L1401) | 3/14 | `src/nova/objects/instance.py:L1388–L1401` |
| `InstanceList.get_by_filters` | method | (cls, context, filters, sort_key='created_at', sort_dir='desc', limit=None, marker=None, expected_attrs=None, use_slave=False, sort_keys=None, sort_dirs=None) | public | `_make_instance_list(context, cls(), db_inst_list, expected_attrs)` (src/nova/objects/instance.py:L1418) | 1/10 | `src/nova/objects/instance.py:L1405–L1419` |
| `InstanceList._db_instance_get_all_by_host` | method | (context, host, columns_to_join, use_slave=False) | private | `db.instance_get_all_by_host(context, host, columns_to_join=columns_to_join)` (src/nova/objects/instance.py:L1425) | 1/4 | `src/nova/objects/instance.py:L1423–L1426` |
| `InstanceList.get_by_host` | method | (cls, context, host, expected_attrs=None, use_slave=False) | public | `_make_instance_list(context, cls(), db_inst_list, expected_attrs)` (src/nova/objects/instance.py:L1434) | 1/6 | `src/nova/objects/instance.py:L1430–L1435` |
| `InstanceList.get_by_host_and_node` | method | (cls, context, host, node, expected_attrs=None) | public | `_make_instance_list(context, cls(), db_inst_list, expected_attrs)` (src/nova/objects/instance.py:L1443) | 1/6 | `src/nova/objects/instance.py:L1439–L1444` |
| `InstanceList._get_uuids_by_host_and_node` | method | (context, host, node) | private | `context.session.query( models.Instance.uuid).filter_by( host=host).filter_by(node=node).filter_by(deleted=0).all()` (src/nova/objects/instance.py:L1449) | 1/4 | `src/nova/objects/instance.py:L1448–L1451` |
| `InstanceList.get_uuids_by_host_and_node` | method | (cls, context, host, node) | public | `cls._get_uuids_by_host_and_node(context, host, node)` (src/nova/objects/instance.py:L1463) | 1/2 | `src/nova/objects/instance.py:L1455–L1463` |
| `InstanceList.get_by_host_and_not_type` | method | (cls, context, host, type_id=None, expected_attrs=None) | public | `_make_instance_list(context, cls(), db_inst_list, expected_attrs)` (src/nova/objects/instance.py:L1471) | 1/6 | `src/nova/objects/instance.py:L1467–L1472` |
| `InstanceList.get_all` | method | (cls, context, expected_attrs=None) | public | `_make_instance_list(context, cls(), db_instances, expected_attrs)` (src/nova/objects/instance.py:L1480) | 1/5 | `src/nova/objects/instance.py:L1476–L1481` |
| `InstanceList.get_hung_in_rebooting` | method | (cls, context, reboot_window, expected_attrs=None) | public | `_make_instance_list(context, cls(), db_inst_list, expected_attrs)` (src/nova/objects/instance.py:L1489) | 1/6 | `src/nova/objects/instance.py:L1485–L1490` |
| `InstanceList._db_instance_get_active_by_window_joined` | method | (context, begin, end, project_id, host, columns_to_join, use_slave=False, limit=None, marker=None) | private | `db.instance_get_active_by_window_joined( context, begin, end, project_id, host, columns_to_join=columns_to_join, limit=limit, marker=marker)` (src/nova/objects/instance.py:L1497) | 1/6 | `src/nova/objects/instance.py:L1494–L1499` |
| `InstanceList._get_active_by_window_joined` | method | (cls, context, begin, end=None, project_id=None, host=None, expected_attrs=None, use_slave=False, limit=None, marker=None) | private | `_make_instance_list(context, cls(), db_inst_list, expected_attrs)` (src/nova/objects/instance.py:L1515) | 2/12 | `src/nova/objects/instance.py:L1503–L1516` |
| `InstanceList.get_active_by_window_joined` | method | (cls, context, begin, end=None, project_id=None, host=None, expected_attrs=None, use_slave=False, limit=None, marker=None) | public | `cls._get_active_by_window_joined(context, begin, end, project_id, host, expected_attrs, use_slave=use_slave, limit=limit, marker=marker)` (src/nova/objects/instance.py:L1542) | 2/11 | `src/nova/objects/instance.py:L1519–L1546` |
| `InstanceList.get_by_security_group_id` | method | (cls, context, security_group_id) | public | not declared | 1/2 | `src/nova/objects/instance.py:L1551–L1552` |
| `InstanceList.get_by_security_group` | method | (cls, context, security_group) | public | not declared | 1/2 | `src/nova/objects/instance.py:L1556–L1557` |
| `InstanceList.get_by_grantee_security_group_ids` | method | (cls, context, security_group_ids) | public | not declared | 1/2 | `src/nova/objects/instance.py:L1562–L1563` |
| `InstanceList.fill_faults` | method | (self) | public | `faults_by_uuid.keys()` (src/nova/objects/instance.py:L1596) | 8/23 | `src/nova/objects/instance.py:L1565–L1596` |
| `InstanceList.fill_metadata` | method | (self) | public | not declared | 8/12 | `src/nova/objects/instance.py:L1598–L1617` |
| `InstanceList.get_uuids_by_host` | method | (cls, context, host) | public | `db.instance_get_all_uuids_by_hosts(context, [host])[host]` (src/nova/objects/instance.py:L1622) | 1/2 | `src/nova/objects/instance.py:L1621–L1622` |
| `InstanceList.get_uuids_by_hosts` | method | (cls, context, hosts) | public | `db.instance_get_all_uuids_by_hosts(context, hosts)` (src/nova/objects/instance.py:L1630) | 1/2 | `src/nova/objects/instance.py:L1626–L1630` |
| `InstanceList._get_count_by_vm_state_in_db` | method | (context, project_id, user_id, vm_state) | private | `context.session.query(models.Instance.id).\ filter_by(deleted=0).\ filter_by(project_id=project_id).\ filter_by(user_id=user_id).\ filter_by(vm_state=vm_state).\ count()` (src/nova/objects/instance.py:L1635) | 1/7 | `src/nova/objects/instance.py:L1634–L1640` |
| `InstanceList.get_count_by_vm_state` | method | (cls, context, project_id, user_id, vm_state) | public | `cls._get_count_by_vm_state_in_db(context, project_id, user_id, vm_state)` (src/nova/objects/instance.py:L1645) | 1/3 | `src/nova/objects/instance.py:L1644–L1646` |
| `InstanceList._get_counts_in_db` | method | (context, project_id, user_id=None) | private | `counts` (src/nova/objects/instance.py:L1684) | 6/28 | `src/nova/objects/instance.py:L1650–L1684` |
| `InstanceList.get_counts` | method | (cls, context, project_id, user_id=None) | public | `cls._get_counts_in_db(context, project_id, user_id=user_id)` (src/nova/objects/instance.py:L1704) | 1/2 | `src/nova/objects/instance.py:L1688–L1704` |
| `InstanceList._get_count_by_hosts` | method | (context, hosts) | private | `context.session.query(models.Instance).\ filter_by(deleted=0).\ filter(models.Instance.host.in_(hosts)).count()` (src/nova/objects/instance.py:L1709) | 1/4 | `src/nova/objects/instance.py:L1708–L1711` |
| `InstanceList.get_count_by_hosts` | method | (cls, context, hosts) | public | `cls._get_count_by_hosts(context, hosts)` (src/nova/objects/instance.py:L1715) | 1/2 | `src/nova/objects/instance.py:L1714–L1715` |
| `Instance.image_meta` | property | — | public | not declared | — | `src/nova/objects/instance.py:L261–L263` |
| `Instance.name` | property | — | public | not declared | — | `src/nova/objects/instance.py:L307–L345` |

## Dependencies

- `import contextlib` (src/nova/objects/instance.py:L15)
- `oslo_config`: imports `cfg` (src/nova/objects/instance.py:L17)
- `oslo_db`: imports `exception as db_exc` (src/nova/objects/instance.py:L18)
- `oslo_log`: imports `log as logging` (src/nova/objects/instance.py:L19)
- `oslo_serialization`: imports `jsonutils` (src/nova/objects/instance.py:L20)
- `oslo_utils`: imports `timeutils` (src/nova/objects/instance.py:L21)
- `oslo_utils`: imports `versionutils` (src/nova/objects/instance.py:L22)
- `import sqlalchemy as sa` (src/nova/objects/instance.py:L23)
- `sqlalchemy`: imports `sql` (src/nova/objects/instance.py:L24)
- `sqlalchemy.sql`: imports `func` (src/nova/objects/instance.py:L25)
- `nova.compute`: imports `task_states` (src/nova/objects/instance.py:L27)
- `nova.compute`: imports `vm_states` (src/nova/objects/instance.py:L28)
- `nova`: imports `context as nova_context` (src/nova/objects/instance.py:L29)
- `nova.db.main`: imports `api as db` (src/nova/objects/instance.py:L30)
- `nova.db.main`: imports `models` (src/nova/objects/instance.py:L31)
- `nova`: imports `exception` (src/nova/objects/instance.py:L32)
- `nova.i18n`: imports `_` (src/nova/objects/instance.py:L33)
- `nova.network`: imports `model as network_model` (src/nova/objects/instance.py:L34)
- `nova`: imports `notifications` (src/nova/objects/instance.py:L35)
- `nova`: imports `objects` (src/nova/objects/instance.py:L36)
- `nova.objects`: imports `base` (src/nova/objects/instance.py:L37)
- `nova.objects`: imports `fields` (src/nova/objects/instance.py:L38)
- `nova`: imports `utils` (src/nova/objects/instance.py:L39)

## Side Effects

- **network**: instances = (context.session.query(models.Instance). (src/nova/objects/instance.py:L1349)
- **network**: return context.session.query( (src/nova/objects/instance.py:L1449)
- **network**: return context.session.query(models.Instance.id).\ (src/nova/objects/instance.py:L1635)
- **network**: project_query = context.session.query( (src/nova/objects/instance.py:L1658)
- **network**: return context.session.query(models.Instance).\ (src/nova/objects/instance.py:L1709)
- **global-mutation**: CONF = cfg.CONF (src/nova/objects/instance.py:L42)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/objects/instance.py:L43)
- **global-mutation**: INSTANCE_OPTIONAL_ATTRS = (_INSTANCE_OPTIONAL_JOINED_FIELDS + (src/nova/objects/instance.py:L64)
- **global-mutation**: INSTANCE_DEFAULT_FIELDS = ['metadata', 'system_metadata', (src/nova/objects/instance.py:L75)
- **global-mutation**: MAX_TAG_COUNT = 50 (src/nova/objects/instance.py:L79)
- **global-mutation**: VERSION = '2.8' (src/nova/objects/instance.py:L125)
- **global-mutation**: VERSION = '2.6' (src/nova/objects/instance.py:L1380)

