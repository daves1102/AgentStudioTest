# src/nova/tests/fixtures/nova.py

## Overview

This file implements the `nova` module, defining 50 classs, 6 constants, 29 functions, 120 methods, 1 property, 3 staticmethods, 56 imports, 17 side effects, 8 security surface entries.

Lines: total 2374, code 1679, comment 284, blank 411

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L75–L75` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L76–L76` |
| `DB_SCHEMA` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L78–L78` |
| `PROJECT_ID` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L79–L79` |
| `_use_file_backed_sqlite_with_wal` | function | (name) | unexported | `'sqlite:///%s' % abs_path, abs_path` (src/nova/tests/fixtures/nova.py:L100) | 1/11 | `src/nova/tests/fixtures/nova.py:L82–L100` |
| `_bind_database_fixture_to_file_wal_sqlite` | function | (database_fixture, file_label, db_api_module) | unexported | not declared | 1/11 | `src/nova/tests/fixtures/nova.py:L103–L116` |
| `ServiceFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L119–L158` |
| `ServiceFixture.__init__` | method | (self, name, host=None, cell=None, **kwargs) | public | not declared | 2/7 | `src/nova/tests/fixtures/nova.py:L122–L131` |
| `ServiceFixture.setUp` | method | (self) | public | not declared | 2/13 | `src/nova/tests/fixtures/nova.py:L133–L158` |
| `NullHandler` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L161–L176` |
| `NullHandler.handle` | method | (self, record) | public | not declared | 1/2 | `src/nova/tests/fixtures/nova.py:L169–L170` |
| `NullHandler.emit` | method | (self, record) | public | not declared | 1/2 | `src/nova/tests/fixtures/nova.py:L172–L173` |
| `NullHandler.createLock` | method | (self) | public | not declared | 1/2 | `src/nova/tests/fixtures/nova.py:L175–L176` |
| `StandardLogging` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L179–L258` |
| `StandardLogging.setUp` | method | (self) | public | not declared | 3/24 | `src/nova/tests/fixtures/nova.py:L206–L252` |
| `StandardLogging.setUp.fake_logging_setup` | function | (*args) | public | not declared | — | `src/nova/tests/fixtures/nova.py:L248–L249` |
| `StandardLogging.delete_stored_logs` | method | (self) | public | not declared | 1/2 | `src/nova/tests/fixtures/nova.py:L254–L258` |
| `DatabasePoisonFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L261–L305` |
| `DatabasePoisonFixture.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/fixtures/nova.py:L262–L279` |
| `DatabasePoisonFixture._poison_configure` | method | (self, *a, **k) | private | not declared | 1/5 | `src/nova/tests/fixtures/nova.py:L281–L305` |
| `SingleCellSimple` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L308–L417` |
| `SingleCellSimple.__init__` | method | (self, instances_created=True, project_id=PROJECT_ID) | public | not declared | 1/5 | `src/nova/tests/fixtures/nova.py:L323–L327` |
| `SingleCellSimple.setUp` | method | (self) | public | not declared | 1/29 | `src/nova/tests/fixtures/nova.py:L329–L357` |
| `SingleCellSimple._fake_hostmapping_get` | method | (self, *args) | private | `{'id': 1, 'updated_at': None, 'created_at': None, 'host': 'host1', 'cell_mapping': self._fake_cell_list()[0]}` (src/nova/tests/fixtures/nova.py:L360) | 1/6 | `src/nova/tests/fixtures/nova.py:L359–L364` |
| `SingleCellSimple._fake_instancemapping_get_common` | method | (self, instance_uuid) | private | `{ 'id': 1, 'updated_at': None, 'created_at': None, 'instance_uuid': instance_uuid, 'cell_id': (self.instances_created and 1 or None), 'project_id': self.project_id, 'cell_mapping': ( self.instances_cr` (src/nova/tests/fixtures/nova.py:L367) | 5/11 | `src/nova/tests/fixtures/nova.py:L366–L376` |
| `SingleCellSimple._fake_instancemapping_get_save` | method | (self, *args) | private | `self._fake_instancemapping_get_common(args[-2])` (src/nova/tests/fixtures/nova.py:L379) | 1/2 | `src/nova/tests/fixtures/nova.py:L378–L379` |
| `SingleCellSimple._fake_instancemapping_get` | method | (self, *args) | private | `self._fake_instancemapping_get_common(args[-1])` (src/nova/tests/fixtures/nova.py:L382) | 1/2 | `src/nova/tests/fixtures/nova.py:L381–L382` |
| `SingleCellSimple._fake_instancemapping_get_uuids` | method | (self, *args) | private | `[self._fake_instancemapping_get(uuid) for uuid in args[-1]]` (src/nova/tests/fixtures/nova.py:L385) | 2/3 | `src/nova/tests/fixtures/nova.py:L384–L386` |
| `SingleCellSimple._fake_cell_get` | method | (self, *args) | private | `self._fake_cell_list()[0]` (src/nova/tests/fixtures/nova.py:L389) | 1/2 | `src/nova/tests/fixtures/nova.py:L388–L389` |
| `SingleCellSimple._fake_cell_list` | method | (self, *args) | private | `[{'id': 1, 'updated_at': None, 'created_at': None, 'uuid': uuidsentinel.cell1, 'name': 'onlycell', 'transport_url': 'fake://nowhere/', 'database_connection': 'sqlite:///', 'disabled': False}]` (src/nova/tests/fixtures/nova.py:L392) | 1/9 | `src/nova/tests/fixtures/nova.py:L391–L399` |
| `SingleCellSimple._fake_target_cell` | method | (self, context, target_cell) | private | not declared | 2/7 | `src/nova/tests/fixtures/nova.py:L402–L409` |
| `SingleCellSimple._fake_set_target_cell` | method | (self, context, cell_mapping) | private | not declared | 2/6 | `src/nova/tests/fixtures/nova.py:L411–L417` |
| `CheatingSerializer` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L420–L444` |
| `CheatingSerializer.serialize_context` | method | (self, context) | public | `values` (src/nova/tests/fixtures/nova.py:L437) | 1/5 | `src/nova/tests/fixtures/nova.py:L432–L437` |
| `CheatingSerializer.deserialize_context` | method | (self, values) | public | `ctxt` (src/nova/tests/fixtures/nova.py:L444) | 1/5 | `src/nova/tests/fixtures/nova.py:L439–L444` |
| `DatabaseWriteLock` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L447–L486` |
| `DatabaseWriteLock._setUp` | method | (self) | private | not declared | 1/11 | `src/nova/tests/fixtures/nova.py:L461–L481` |
| `DatabaseWriteLock._setUp._locked_scope` | function | (tcm_self, context) | private | not declared | — | `src/nova/tests/fixtures/nova.py:L468–L476` |
| `DatabaseWriteLock._get_lock` | method | (self, db_url) | private | `self._locks[db_url]` (src/nova/tests/fixtures/nova.py:L486) | 1/3 | `src/nova/tests/fixtures/nova.py:L483–L486` |
| `CellDatabases` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L489–L684` |
| `CellDatabases.__init__` | method | (self) | public | not declared | 1/4 | `src/nova/tests/fixtures/nova.py:L507–L516` |
| `CellDatabases._cache_schema` | method | (self, connection_str) | private | not declared | 3/10 | `src/nova/tests/fixtures/nova.py:L518–L533` |
| `CellDatabases._wrap_target_cell` | method | (self, context, cell_mapping) | private | not declared | 3/12 | `src/nova/tests/fixtures/nova.py:L536–L568` |
| `CellDatabases._wrap_create_context_manager` | method | (self, connection=None) | private | `ctxt_mgr` (src/nova/tests/fixtures/nova.py:L572) | 1/3 | `src/nova/tests/fixtures/nova.py:L570–L572` |
| `CellDatabases._wrap_get_context_manager` | method | (self, context) | private | `context.db_connection` (src/nova/tests/fixtures/nova.py:L580); `getattr(self._local, 'ctxt_mgr', self._default_ctxt_mgr)` (src/nova/tests/fixtures/nova.py:L590) | 3/7 | `src/nova/tests/fixtures/nova.py:L574–L590` |
| `CellDatabases._wrap_get_server` | method | (self, target, endpoints, serializer=None) | private | `messaging.get_rpc_server(rpc.TRANSPORT, target, endpoints, executor=exc, serializer=serializer)` (src/nova/tests/fixtures/nova.py:L596) | 2/8 | `src/nova/tests/fixtures/nova.py:L592–L600` |
| `CellDatabases._wrap_get_client` | method | (self, target, version_cap=None, serializer=None, call_monitor_timeout=None) | private | `messaging.get_rpc_client(rpc.TRANSPORT, target, version_cap=version_cap, serializer=serializer, call_monitor_timeout=call_monitor_timeout)` (src/nova/tests/fixtures/nova.py:L606) | 1/7 | `src/nova/tests/fixtures/nova.py:L602–L609` |
| `CellDatabases.add_cell_database` | method | (self, connection_str, default=False) | public | not declared | 4/17 | `src/nova/tests/fixtures/nova.py:L611–L651` |
| `CellDatabases.add_cell_database.get_context_manager` | function | (context) | public | `ctxt_mgr` (src/nova/tests/fixtures/nova.py:L640) | — | `src/nova/tests/fixtures/nova.py:L639–L640` |
| `CellDatabases.setUp` | method | (self) | public | not declared | 2/22 | `src/nova/tests/fixtures/nova.py:L653–L679` |
| `CellDatabases.cleanup` | method | (self) | public | not declared | 2/4 | `src/nova/tests/fixtures/nova.py:L681–L684` |
| `Database` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L687–L771` |
| `Database.__init__` | method | (self, database='main', version=None, connection=None) | public | not declared | 2/8 | `src/nova/tests/fixtures/nova.py:L690–L704` |
| `Database.setUp` | method | (self) | public | not declared | 7/33 | `src/nova/tests/fixtures/nova.py:L706–L752` |
| `Database._apply_schema` | method | (self) | private | not declared | 3/12 | `src/nova/tests/fixtures/nova.py:L754–L767` |
| `Database.cleanup` | method | (self) | public | not declared | 1/3 | `src/nova/tests/fixtures/nova.py:L769–L771` |
| `DefaultFlavorsFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L774–L804` |
| `DefaultFlavorsFixture.setUp` | method | (self) | public | not declared | 2/30 | `src/nova/tests/fixtures/nova.py:L775–L804` |
| `RPCFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L807–L854` |
| `RPCFixture.__init__` | method | (self, *exmods) | public | not declared | 1/5 | `src/nova/tests/fixtures/nova.py:L808–L812` |
| `RPCFixture._fake_create_transport` | method | (self, url) | private | `self._buses[url]` (src/nova/tests/fixtures/nova.py:L831) | 2/9 | `src/nova/tests/fixtures/nova.py:L814–L831` |
| `RPCFixture.setUp` | method | (self) | public | not declared | 1/15 | `src/nova/tests/fixtures/nova.py:L833–L854` |
| `RPCFixture.setUp.cleanup_in_flight_rpc_messages` | function | — | public | not declared | — | `src/nova/tests/fixtures/nova.py:L851–L852` |
| `WarningsFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L857–L987` |
| `WarningsFixture.setUp` | method | (self) | public | not declared | 1/92 | `src/nova/tests/fixtures/nova.py:L860–L984` |
| `WarningsFixture._reset_warning_filters` | method | (self) | private | not declared | 1/2 | `src/nova/tests/fixtures/nova.py:L986–L987` |
| `ConfPatcher` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L990–L1015` |
| `ConfPatcher.__init__` | method | (self, **kwargs) | public | not declared | 1/4 | `src/nova/tests/fixtures/nova.py:L998–L1009` |
| `ConfPatcher.setUp` | method | (self) | public | not declared | 2/5 | `src/nova/tests/fixtures/nova.py:L1011–L1015` |
| `OSAPIFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1018–L1146` |
| `OSAPIFixture.__init__` | method | (self, api_version='v2.1', project_id=PROJECT_ID, use_project_id_in_urls=False, stub_keystone=True) | public | not declared | 1/9 | `src/nova/tests/fixtures/nova.py:L1049–L1067` |
| `OSAPIFixture.setUp` | method | (self) | public | not declared | 3/45 | `src/nova/tests/fixtures/nova.py:L1069–L1127` |
| `OSAPIFixture._stub_keystone` | method | (self) | private | not declared | 1/7 | `src/nova/tests/fixtures/nova.py:L1129–L1146` |
| `OSAPIFixture._stub_keystone.fake_ctx` | function | (env, **kwargs) | public | `context.RequestContext( user_id, project_id, is_admin=is_admin, roles=roles, **kwargs)` (src/nova/tests/fixtures/nova.py:L1142) | — | `src/nova/tests/fixtures/nova.py:L1137–L1143` |
| `OSMetadataServer` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1149–L1183` |
| `OSMetadataServer.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/tests/fixtures/nova.py:L1161–L1162` |
| `OSMetadataServer.setUp` | method | (self) | public | not declared | 1/15 | `src/nova/tests/fixtures/nova.py:L1164–L1183` |
| `PoisonFunctions` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1186–L1216` |
| `PoisonFunctions.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/fixtures/nova.py:L1196–L1199` |
| `PoisonFunctions._poison_libvirt_driver` | method | (self) | private | not declared | 2/7 | `src/nova/tests/fixtures/nova.py:L1201–L1216` |
| `PoisonFunctions._poison_libvirt_driver.evloop` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/fixtures/nova.py:L1206–L1209` |
| `IndirectionAPIFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1219–L1238` |
| `IndirectionAPIFixture.__init__` | method | (self, indirection_api) | public | not declared | 1/3 | `src/nova/tests/fixtures/nova.py:L1222–L1229` |
| `IndirectionAPIFixture.cleanup` | method | (self) | public | not declared | 1/2 | `src/nova/tests/fixtures/nova.py:L1231–L1232` |
| `IndirectionAPIFixture.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/fixtures/nova.py:L1234–L1238` |
| `IsolatedExecutorFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1241–L1321` |
| `IsolatedExecutorFixture.__init__` | method | (self, test) | public | not declared | 1/2 | `src/nova/tests/fixtures/nova.py:L1248–L1249` |
| `IsolatedExecutorFixture._setUp` | method | (self) | private | not declared | 1/7 | `src/nova/tests/fixtures/nova.py:L1251–L1271` |
| `IsolatedExecutorFixture._setUp._get_executor` | function | (executor_type, **kwargs) | private | `executor` (src/nova/tests/fixtures/nova.py:L1260) | — | `src/nova/tests/fixtures/nova.py:L1257–L1260` |
| `IsolatedExecutorFixture._cleanup_executors` | method | (self) | private | not declared | 5/11 | `src/nova/tests/fixtures/nova.py:L1273–L1294` |
| `IsolatedExecutorFixture._raise_on_green_pool` | method | (self, pool) | private | not declared | 5/26 | `src/nova/tests/fixtures/nova.py:L1296–L1321` |
| `SpawnIsSynchronousFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1324–L1343` |
| `SpawnIsSynchronousFixture.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/fixtures/nova.py:L1327–L1343` |
| `SpawnIsSynchronousFixture.setUp.spawn` | function | (func, *args, **kwargs) | public | `executor.submit(func, *args, **kwargs)` (src/nova/tests/fixtures/nova.py:L1333) | — | `src/nova/tests/fixtures/nova.py:L1332–L1333` |
| `SpawnIsSynchronousFixture.setUp.spawn_on` | function | (executor_type, func, *args, **kwargs) | public | `executor.submit(func, *args, **kwargs)` (src/nova/tests/fixtures/nova.py:L1338) | — | `src/nova/tests/fixtures/nova.py:L1337–L1338` |
| `BannedDBSchemaOperations` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1346–L1367` |
| `BannedDBSchemaOperations.__init__` | method | (self, banned_resources=None) | public | not declared | 2/3 | `src/nova/tests/fixtures/nova.py:L1349–L1351` |
| `BannedDBSchemaOperations._explode` | method | (resource, op) | private | not declared | 1/4 | `src/nova/tests/fixtures/nova.py:L1354–L1357` |
| `BannedDBSchemaOperations.setUp` | method | (self) | public | not declared | 2/9 | `src/nova/tests/fixtures/nova.py:L1359–L1367` |
| `ForbidNewLegacyNotificationFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1370–L1391` |
| `ForbidNewLegacyNotificationFixture.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/tests/fixtures/nova.py:L1373–L1375` |
| `ForbidNewLegacyNotificationFixture.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/fixtures/nova.py:L1377–L1386` |
| `ForbidNewLegacyNotificationFixture.cleanup` | method | (self) | public | not declared | 1/4 | `src/nova/tests/fixtures/nova.py:L1388–L1391` |
| `AllServicesCurrent` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1394–L1406` |
| `AllServicesCurrent.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/fixtures/nova.py:L1395–L1403` |
| `AllServicesCurrent._fake_minimum` | method | (self, *args, **kwargs) | private | `service_obj.SERVICE_VERSION` (src/nova/tests/fixtures/nova.py:L1406) | 1/2 | `src/nova/tests/fixtures/nova.py:L1405–L1406` |
| `_NoopConductor` | class | — | unexported | not declared | — | `src/nova/tests/fixtures/nova.py:L1409–L1413` |
| `_NoopConductor.__getattr__` | method | (self, key) | public | `_noop_rpc` (src/nova/tests/fixtures/nova.py:L1413) | 1/3 | `src/nova/tests/fixtures/nova.py:L1410–L1413` |
| `_NoopConductor.__getattr__._noop_rpc` | function | (*args, **kwargs) | private | `None` (src/nova/tests/fixtures/nova.py:L1412) | — | `src/nova/tests/fixtures/nova.py:L1411–L1412` |
| `NoopConductorFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1416–L1424` |
| `NoopConductorFixture.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/fixtures/nova.py:L1419–L1424` |
| `EventReporterStub` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1427–L1433` |
| `EventReporterStub.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/fixtures/nova.py:L1429–L1433` |
| `UnHelperfulClientChannel` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1436–L1440` |
| `UnHelperfulClientChannel.__init__` | method | (self, context) | public | not declared | 1/4 | `src/nova/tests/fixtures/nova.py:L1437–L1440` |
| `PrivsepNoHelperFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1443–L1459` |
| `PrivsepNoHelperFixture.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/fixtures/nova.py:L1454–L1459` |
| `PrivsepFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1462–L1470` |
| `PrivsepFixture.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/fixtures/nova.py:L1467–L1470` |
| `CGroupsFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1473–L1541` |
| `CGroupsFixture.__init__` | method | (self, version=1) | public | not declared | 1/4 | `src/nova/tests/fixtures/nova.py:L1496–L1500` |
| `CGroupsFixture.version` | method | (self) | public | `self._version` (src/nova/tests/fixtures/nova.py:L1504) | 1/2 | `src/nova/tests/fixtures/nova.py:L1503–L1504` |
| `CGroupsFixture.version` | method | (self, value) | public | not declared | 1/3 | `src/nova/tests/fixtures/nova.py:L1507–L1509` |
| `CGroupsFixture.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/fixtures/nova.py:L1511–L1517` |
| `CGroupsFixture._update_mocks` | method | (self) | private | `` (src/nova/tests/fixtures/nova.py:L1521); `` (src/nova/tests/fixtures/nova.py:L1524); `` (src/nova/tests/fixtures/nova.py:L1529); `` (src/nova/tests/fixtures/nova.py:L1534); `` (src/nova/tests/fixtures/nova.py:L1539) | 6/18 | `src/nova/tests/fixtures/nova.py:L1519–L1541` |
| `NoopQuotaDriverFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1544–L1564` |
| `NoopQuotaDriverFixture.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/fixtures/nova.py:L1555–L1564` |
| `DownCellFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1567–L1679` |
| `DownCellFixture.__init__` | method | (self, down_cell_mappings=None) | public | not declared | 1/2 | `src/nova/tests/fixtures/nova.py:L1591–L1592` |
| `DownCellFixture.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/fixtures/nova.py:L1594–L1679` |
| `DownCellFixture.setUp.stub_scatter_gather_cells` | function | (ctxt, cell_mappings, timeout, fn, *args, **kwargs) | public | `dict(list(ret1.items()) + list(ret2.items()))` (src/nova/tests/fixtures/nova.py:L1651) | — | `src/nova/tests/fixtures/nova.py:L1597–L1651` |
| `DownCellFixture.setUp.stub_scatter_gather_cells.wrap` | function | (cell_uuid, thing) | public | `multi_cell_list.RecordWrapper(ctxt, sort_ctx, thing)` (src/nova/tests/fixtures/nova.py:L1622) | — | `src/nova/tests/fixtures/nova.py:L1617–L1622` |
| `DownCellFixture.setUp.stub_target_cell` | function | (ctxt, cell_mapping) | public | not declared | — | `src/nova/tests/fixtures/nova.py:L1654–L1674` |
| `AvailabilityZoneFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1682–L1722` |
| `AvailabilityZoneFixture.__init__` | method | (self, zones) | public | not declared | 1/2 | `src/nova/tests/fixtures/nova.py:L1693–L1694` |
| `AvailabilityZoneFixture.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/fixtures/nova.py:L1696–L1722` |
| `AvailabilityZoneFixture.setUp.fake_get_availability_zones` | function | (ctxt, hostapi, get_only_available=False, with_hosts=False, services=None) | public | `self.zones, []` (src/nova/tests/fixtures/nova.py:L1704); `self.zones` (src/nova/tests/fixtures/nova.py:L1705) | — | `src/nova/tests/fixtures/nova.py:L1699–L1705` |
| `AvailabilityZoneFixture.setUp.fake_get_instance_availability_zone` | function | (ctxt, instance) | public | `requested_az` (src/nova/tests/fixtures/nova.py:L1716); `instance.availability_zone or CONF.default_availability_zone` (src/nova/tests/fixtures/nova.py:L1719) | — | `src/nova/tests/fixtures/nova.py:L1710–L1719` |
| `KSAFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1725–L1737` |
| `KSAFixture.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/fixtures/nova.py:L1730–L1737` |
| `OpenStackSDKFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1740–L1763` |
| `OpenStackSDKFixture.setUp` | method | (self) | public | not declared | 1/12 | `src/nova/tests/fixtures/nova.py:L1745–L1763` |
| `OpenStackSDKFixture.setUp.fake_make_proxy` | function | (self, instance) | public | `instance.config.get_session_client( self.service_type, allow_version_hack=True, )` (src/nova/tests/fixtures/nova.py:L1754); `real_make_proxy(self, instance)` (src/nova/tests/fixtures/nova.py:L1758) | — | `src/nova/tests/fixtures/nova.py:L1752–L1758` |
| `HostNameWeigher` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1766–L1782` |
| `HostNameWeigher.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/tests/fixtures/nova.py:L1774–L1775` |
| `HostNameWeigher.get_weights` | method | (self) | public | not declared | 1/2 | `src/nova/tests/fixtures/nova.py:L1777–L1778` |
| `HostNameWeigher._weigh_object` | method | (self, host_state, weight_properties) | private | `self.weights.get(host_state.host, 0)` (src/nova/tests/fixtures/nova.py:L1782) | 1/2 | `src/nova/tests/fixtures/nova.py:L1780–L1782` |
| `HostNameWeigherFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1785–L1812` |
| `HostNameWeigherFixture.__init__` | method | (self, weights=None) | public | not declared | 2/5 | `src/nova/tests/fixtures/nova.py:L1792–L1801` |
| `HostNameWeigherFixture.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/fixtures/nova.py:L1803–L1812` |
| `GenericPoisonFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1815–L1852` |
| `GenericPoisonFixture.POISON_THESE` | constant | — | public | not declared | — | `src/nova/tests/fixtures/nova.py:L1816–L1825` |
| `GenericPoisonFixture.setUp` | method | (self) | public | not declared | 5/16 | `src/nova/tests/fixtures/nova.py:L1827–L1852` |
| `GenericPoisonFixture.setUp.poison_configure` | function | (method, reason) | public | `fail` (src/nova/tests/fixtures/nova.py:L1832) | — | `src/nova/tests/fixtures/nova.py:L1828–L1832` |
| `GenericPoisonFixture.setUp.poison_configure.fail` | function | (*a, **k) | public | not declared | — | `src/nova/tests/fixtures/nova.py:L1829–L1831` |
| `PropagateTestCaseIdToChildEventlets` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1855–L1910` |
| `PropagateTestCaseIdToChildEventlets.__init__` | method | (self, test_case_id) | public | not declared | 1/2 | `src/nova/tests/fixtures/nova.py:L1865–L1866` |
| `PropagateTestCaseIdToChildEventlets.setUp` | method | (self) | public | `` (src/nova/tests/fixtures/nova.py:L1873) | 2/12 | `src/nova/tests/fixtures/nova.py:L1868–L1910` |
| `PropagateTestCaseIdToChildEventlets.setUp.wrapped_spawn` | function | (func, *args, **kwargs) | public | `orig_spawn(test_case_id_wrapper, *args, **kwargs)` (src/nova/tests/fixtures/nova.py:L1904) | — | `src/nova/tests/fixtures/nova.py:L1883–L1904` |
| `PropagateTestCaseIdToChildEventlets.setUp.wrapped_spawn.test_case_id_wrapper` | function | (*args, **kwargs) | public | `func(*args, **kwargs)` (src/nova/tests/fixtures/nova.py:L1900) | — | `src/nova/tests/fixtures/nova.py:L1895–L1900` |
| `ReaderWriterLock` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1913–L1948` |
| `ReaderWriterLock.__init__` | method | (self, *a, **kw) | public | not declared | 2/9 | `src/nova/tests/fixtures/nova.py:L1939–L1948` |
| `SysFsPoisonFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L1951–L2007` |
| `SysFsPoisonFixture.inject_poison` | method | (self, module_name, function_name) | public | `` (src/nova/tests/fixtures/nova.py:L1972) | 3/12 | `src/nova/tests/fixtures/nova.py:L1953–L1995` |
| `SysFsPoisonFixture.inject_poison.toxic_wrapper` | function | (*args, **kwargs) | public | `orig_f(*args, **kwargs)` (src/nova/tests/fixtures/nova.py:L1993) | — | `src/nova/tests/fixtures/nova.py:L1976–L1993` |
| `SysFsPoisonFixture.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/fixtures/nova.py:L1997–L2007` |
| `ImportModulePoisonFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L2010–L2057` |
| `ImportModulePoisonFixture.ForbiddenModules` | class | — | public | not declared | — | `src/nova/tests/fixtures/nova.py:L2022–L2035` |
| `ImportModulePoisonFixture.ForbiddenModules.__init__` | method | (self, test, modules) | public | not declared | 1/4 | `src/nova/tests/fixtures/nova.py:L2023–L2026` |
| `ImportModulePoisonFixture.ForbiddenModules.find_spec` | method | (self, fullname, path, target=None) | public | not declared | 2/8 | `src/nova/tests/fixtures/nova.py:L2028–L2035` |
| `ImportModulePoisonFixture.__init__` | method | (self, module_names) | public | not declared | 2/6 | `src/nova/tests/fixtures/nova.py:L2037–L2042` |
| `ImportModulePoisonFixture.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/fixtures/nova.py:L2044–L2047` |
| `ImportModulePoisonFixture.cleanup` | method | (self) | public | not declared | 2/4 | `src/nova/tests/fixtures/nova.py:L2049–L2057` |
| `ComputeNodeIdFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L2060–L2074` |
| `ComputeNodeIdFixture.setUp` | method | (self) | public | not declared | 1/13 | `src/nova/tests/fixtures/nova.py:L2061–L2074` |
| `GreenThreadPoolShutdownWait` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L2077–L2109` |
| `GreenThreadPoolShutdownWait.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/fixtures/nova.py:L2104–L2109` |
| `UnifiedLimitsFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L2112–L2216` |
| `UnifiedLimitsFixture.setUp` | method | (self) | public | not declared | 1/28 | `src/nova/tests/fixtures/nova.py:L2121–L2166` |
| `UnifiedLimitsFixture.setUp.fake_get_sdk_adapter` | function | (service_type, admin, **kwargs) | public | `self.mock_sdk_adapter` (src/nova/tests/fixtures/nova.py:L2128); `real_get_sdk_adapter(service_type, admin, **kwargs)` (src/nova/tests/fixtures/nova.py:L2129) | — | `src/nova/tests/fixtures/nova.py:L2126–L2129` |
| `UnifiedLimitsFixture.setUp.fake_services` | function | (*a, **kw) | public | `iter([mock.Mock(id=None)])` (src/nova/tests/fixtures/nova.py:L2157) | — | `src/nova/tests/fixtures/nova.py:L2156–L2157` |
| `UnifiedLimitsFixture.setUp.fake_regions` | function | (*a, **kw) | public | `iter([mock.Mock(id=None)])` (src/nova/tests/fixtures/nova.py:L2160) | — | `src/nova/tests/fixtures/nova.py:L2159–L2160` |
| `UnifiedLimitsFixture.registered_limits` | method | (self, region_id=None, resource_name=None, service_id=None) | public | not declared | 8/11 | `src/nova/tests/fixtures/nova.py:L2168–L2178` |
| `UnifiedLimitsFixture.limits` | method | (self, project_id=None, region_id=None, resource_name=None, service_id=None) | public | not declared | 11/15 | `src/nova/tests/fixtures/nova.py:L2180–L2194` |
| `UnifiedLimitsFixture.create_registered_limit` | method | (self, **attrs) | public | not declared | 1/9 | `src/nova/tests/fixtures/nova.py:L2196–L2204` |
| `UnifiedLimitsFixture.create_limit` | method | (self, **attrs) | public | not declared | 1/11 | `src/nova/tests/fixtures/nova.py:L2206–L2216` |
| `RPCPollerCleanupFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L2219–L2248` |
| `RPCPollerCleanupFixture.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/fixtures/nova.py:L2220–L2234` |
| `RPCPollerCleanupFixture.setUp.wrapped_start` | function | (_self, *args, **kwargs) | public | `orig_start(_self, *args, **kwargs)` (src/nova/tests/fixtures/nova.py:L2228) | — | `src/nova/tests/fixtures/nova.py:L2225–L2228` |
| `RPCPollerCleanupFixture._check_listener_stopped` | method | (listener, stack) | private | not declared | 2/12 | `src/nova/tests/fixtures/nova.py:L2237–L2248` |
| `DelayingExecutorWrapperCleanupFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L2251–L2287` |
| `DelayingExecutorWrapperCleanupFixture.setUp` | method | (self) | public | not declared | 1/12 | `src/nova/tests/fixtures/nova.py:L2252–L2270` |
| `DelayingExecutorWrapperCleanupFixture.setUp.wrapped_init` | function | (executor_wrapper, delay, executor) | public | not declared | — | `src/nova/tests/fixtures/nova.py:L2260–L2264` |
| `DelayingExecutorWrapperCleanupFixture._check_wrapper_stopped` | method | (wrapper, stack) | private | not declared | 2/15 | `src/nova/tests/fixtures/nova.py:L2273–L2287` |
| `NoSleepRetryDecoratorFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L2290–L2302` |
| `NoSleepRetryDecoratorFixture.setUp` | method | (self) | public | not declared | 2/12 | `src/nova/tests/fixtures/nova.py:L2291–L2302` |
| `WaitableEvent` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L2305–L2324` |
| `WaitableEvent.__init__` | method | (self) | public | not declared | 1/4 | `src/nova/tests/fixtures/nova.py:L2308–L2311` |
| `WaitableEvent.wait` | method | (self, timeout=None) | public | `super().wait(timeout=timeout)` (src/nova/tests/fixtures/nova.py:L2317) | 2/8 | `src/nova/tests/fixtures/nova.py:L2313–L2320` |
| `WaitableEvent.waiter_count` | method | (self) | public | `self._waiters` (src/nova/tests/fixtures/nova.py:L2324) | 1/3 | `src/nova/tests/fixtures/nova.py:L2322–L2324` |
| `InterceptMethodFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/nova.py:L2327–L2374` |
| `InterceptMethodFixture.DEFAULT_TIMEOUT` | constant | — | public | not declared | — | `src/nova/tests/fixtures/nova.py:L2352–L2352` |
| `InterceptMethodFixture.__init__` | method | (self, target, method_name, side_effect=None, timeout=None) | public | not declared | 2/8 | `src/nova/tests/fixtures/nova.py:L2354–L2361` |
| `InterceptMethodFixture.setUp` | method | (self) | public | not declared | 2/7 | `src/nova/tests/fixtures/nova.py:L2363–L2374` |
| `InterceptMethodFixture.setUp._blocking` | function | (*args, **kwargs) | private | `side_effect(*args, **kwargs)` (src/nova/tests/fixtures/nova.py:L2371) | — | `src/nova/tests/fixtures/nova.py:L2368–L2371` |
| `BannedDBSchemaOperations._explode` | staticmethod | — | private | not declared | — | `src/nova/tests/fixtures/nova.py:L1353–L1357` |
| `CGroupsFixture.version` | property | — | public | not declared | — | `src/nova/tests/fixtures/nova.py:L1502–L1504` |
| `RPCPollerCleanupFixture._check_listener_stopped` | staticmethod | — | private | not declared | — | `src/nova/tests/fixtures/nova.py:L2236–L2248` |
| `DelayingExecutorWrapperCleanupFixture._check_wrapper_stopped` | staticmethod | — | private | not declared | — | `src/nova/tests/fixtures/nova.py:L2272–L2287` |

## Dependencies

- `import collections` (src/nova/tests/fixtures/nova.py:L19)
- `contextlib`: imports `contextmanager` (src/nova/tests/fixtures/nova.py:L20)
- `import copy` (src/nova/tests/fixtures/nova.py:L21)
- `import functools` (src/nova/tests/fixtures/nova.py:L22)
- `importlib.abc`: imports `MetaPathFinder` (src/nova/tests/fixtures/nova.py:L23)
- `import logging as std_logging` (src/nova/tests/fixtures/nova.py:L24)
- `import os` (src/nova/tests/fixtures/nova.py:L25)
- `import sqlite3` (src/nova/tests/fixtures/nova.py:L26)
- `import sys` (src/nova/tests/fixtures/nova.py:L27)
- `import tempfile` (src/nova/tests/fixtures/nova.py:L28)
- `import threading` (src/nova/tests/fixtures/nova.py:L29)
- `import traceback` (src/nova/tests/fixtures/nova.py:L30)
- `unittest`: imports `mock` (src/nova/tests/fixtures/nova.py:L31)
- `import warnings` (src/nova/tests/fixtures/nova.py:L32)
- `import fixtures` (src/nova/tests/fixtures/nova.py:L34)
- `import futurist` (src/nova/tests/fixtures/nova.py:L35)
- `openstack.cloud`: imports `_utils` (src/nova/tests/fixtures/nova.py:L36)
- `openstack`: imports `service_description` (src/nova/tests/fixtures/nova.py:L37)
- `oslo_concurrency`: imports `lockutils` (src/nova/tests/fixtures/nova.py:L38)
- `oslo_config`: imports `cfg` (src/nova/tests/fixtures/nova.py:L39)
- `oslo_db`: imports `exception as db_exc` (src/nova/tests/fixtures/nova.py:L40)
- `oslo_db.sqlalchemy`: imports `enginefacade` (src/nova/tests/fixtures/nova.py:L41)
- `oslo_db.sqlalchemy`: imports `test_fixtures as db_fixtures` (src/nova/tests/fixtures/nova.py:L42)
- `oslo_log`: imports `log as logging` (src/nova/tests/fixtures/nova.py:L43)
- `import oslo_messaging as messaging` (src/nova/tests/fixtures/nova.py:L44)
- `oslo_messaging`: imports `conffixture as messaging_conffixture` (src/nova/tests/fixtures/nova.py:L45)
- `oslo_privsep`: imports `daemon as privsep_daemon` (src/nova/tests/fixtures/nova.py:L46)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/fixtures/nova.py:L47)
- `oslo_utils`: imports `strutils` (src/nova/tests/fixtures/nova.py:L48)
- `requests`: imports `adapters` (src/nova/tests/fixtures/nova.py:L49)
- `sqlalchemy`: imports `exc as sqla_exc` (src/nova/tests/fixtures/nova.py:L50)
- `wsgi_intercept`: imports `interceptor` (src/nova/tests/fixtures/nova.py:L51)
- `nova.api.openstack`: imports `wsgi_app` (src/nova/tests/fixtures/nova.py:L53)
- `nova.api`: imports `wsgi` (src/nova/tests/fixtures/nova.py:L54)
- `nova.compute`: imports `multi_cell_list` (src/nova/tests/fixtures/nova.py:L55)
- `nova.compute`: imports `rpcapi as compute_rpcapi` (src/nova/tests/fixtures/nova.py:L56)
- `nova`: imports `context` (src/nova/tests/fixtures/nova.py:L57)
- `nova.db.api`: imports `api as api_db_api` (src/nova/tests/fixtures/nova.py:L58)
- `nova.db.main`: imports `api as main_db_api` (src/nova/tests/fixtures/nova.py:L59)
- `nova.db`: imports `migration` (src/nova/tests/fixtures/nova.py:L60)
- `nova`: imports `exception` (src/nova/tests/fixtures/nova.py:L61)
- `nova`: imports `objects` (src/nova/tests/fixtures/nova.py:L62)
- `nova.objects`: imports `base as obj_base` (src/nova/tests/fixtures/nova.py:L63)
- `nova.objects`: imports `service as service_obj` (src/nova/tests/fixtures/nova.py:L64)
- `import nova.privsep` (src/nova/tests/fixtures/nova.py:L65)
- `nova`: imports `quota as nova_quota` (src/nova/tests/fixtures/nova.py:L66)
- `nova`: imports `rpc` (src/nova/tests/fixtures/nova.py:L67)
- `nova.scheduler`: imports `weights` (src/nova/tests/fixtures/nova.py:L68)
- `nova`: imports `service` (src/nova/tests/fixtures/nova.py:L69)
- `nova.tests.functional.api`: imports `client` (src/nova/tests/fixtures/nova.py:L70)
- `nova`: imports `thread_pool_factory` (src/nova/tests/fixtures/nova.py:L71)
- `nova`: imports `utils` (src/nova/tests/fixtures/nova.py:L72)
- `nova.virt`: imports `node` (src/nova/tests/fixtures/nova.py:L73)
- `import sys` (src/nova/tests/fixtures/nova.py:L1207)
- `import nova.virt.libvirt.host` (src/nova/tests/fixtures/nova.py:L1212)
- `import importlib` (src/nova/tests/fixtures/nova.py:L1954)

## Side Effects

- **network**: from openstack.cloud import _utils (src/nova/tests/fixtures/nova.py:L36)
- **file-io**: fd, path = tempfile.mkstemp( (src/nova/tests/fixtures/nova.py:L92)
- **file-io**: abs_path = os.path.abspath(path) (src/nova/tests/fixtures/nova.py:L97)
- **network**: self._wrap_get_client)) (src/nova/tests/fixtures/nova.py:L679)
- **process-spawn**: 'oslo_privsep.daemon.RootwrapClientChannel', (src/nova/tests/fixtures/nova.py:L1458)
- **process-spawn**: nova.privsep.sys_admin_pctxt, 'client_mode', False)) (src/nova/tests/fixtures/nova.py:L1470)
- **network**: """Lets us initialize an openstack.connection.Connection by stubbing the (src/nova/tests/fixtures/nova.py:L1726)
- **network**: 'openstack.proxy.Proxy.get_endpoint')) (src/nova/tests/fixtures/nova.py:L1748)
- **network**: real_get_sdk_adapter = utils.get_sdk_adapter (src/nova/tests/fixtures/nova.py:L2124)
- **network**: 'nova.utils.get_sdk_adapter', fake_get_sdk_adapter)) (src/nova/tests/fixtures/nova.py:L2132)
- **network**: 'oslo_messaging._drivers.base.' (src/nova/tests/fixtures/nova.py:L2232)
- **global-mutation**: CONF = cfg.CONF (src/nova/tests/fixtures/nova.py:L75)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/fixtures/nova.py:L76)
- **global-mutation**: DB_SCHEMA = collections.defaultdict(str) (src/nova/tests/fixtures/nova.py:L78)
- **global-mutation**: PROJECT_ID = '6f70656e737461636b20342065766572' (src/nova/tests/fixtures/nova.py:L79)
- **global-mutation**: POISON_THESE = ( (src/nova/tests/fixtures/nova.py:L1816)
- **global-mutation**: DEFAULT_TIMEOUT = 60 (src/nova/tests/fixtures/nova.py:L2352)

## Security Surface

- **entry-point** (`env`): if os.environ.get('OS_DEBUG') in ('True', 'true', '1', 'yes'): (src/nova/tests/fixtures/nova.py:L214)
- **sink** (`db-write`): 'This key is deprecated. Please update your policy ' (src/nova/tests/fixtures/nova.py:L876)
- **privilege** (`crypto-key`): 'keystoneauth1.session.TCPKeepAliveAdapter.init_poolmanager', (src/nova/tests/fixtures/nova.py:L1088)
- **entry-point** (`env`): strutils.bool_from_string(os.getenv( (src/nova/tests/fixtures/nova.py:L1305)
- **privilege** (`privsep-entrypoint`): nova.privsep.sys_admin_pctxt, 'client_mode', False)) (src/nova/tests/fixtures/nova.py:L1470)
- **privilege** (`crypto-key`): 'keystoneauth1.loading.load_auth_from_conf_options')).mock (src/nova/tests/fixtures/nova.py:L1733)
- **privilege** (`crypto-key`): 'keystoneauth1.loading.load_session_from_conf_options')).mock (src/nova/tests/fixtures/nova.py:L1735)
- **sink** (`db-write`): sys.meta_path.insert(0, self.meta_path_finder) (src/nova/tests/fixtures/nova.py:L2047)

