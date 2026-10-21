# src/nova/quota.py

## Overview

This file implements the `quota` module, defining 7 classs, 6 constants, 1 field, 13 functions, 43 methods, 3 propertys, 14 imports, 7 side effects, 4 security surface entries.

Lines: total 1468, code 1070, comment 174, blank 224

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/quota.py:L36–L36` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/quota.py:L37–L37` |
| `UID_QFD_POPULATED_CACHE_BY_PROJECT` | constant | — | exported | not declared | — | `src/nova/quota.py:L40–L40` |
| `UID_QFD_POPULATED_CACHE_ALL` | constant | — | exported | not declared | — | `src/nova/quota.py:L44–L44` |
| `DbQuotaDriver` | class | — | exported | not declared | — | `src/nova/quota.py:L47–L617` |
| `DbQuotaDriver.UNLIMITED_VALUE` | constant | — | public | not declared | — | `src/nova/quota.py:L52–L52` |
| `DbQuotaDriver.get_reserved` | method | (self) | public | `0` (src/nova/quota.py:L56) | 1/2 | `src/nova/quota.py:L54–L56` |
| `DbQuotaDriver.get_defaults` | method | (self, context, resources) | public | `quotas` (src/nova/quota.py:L76) | 2/7 | `src/nova/quota.py:L58–L76` |
| `DbQuotaDriver.get_class_quotas` | method | (self, context, resources, quota_class) | public | `quotas` (src/nova/quota.py:L95) | 2/8 | `src/nova/quota.py:L78–L95` |
| `DbQuotaDriver._process_quotas` | method | (self, context, resources, project_id, quotas, quota_class=None, usages=None, remains=False) | private | `modified_quotas` (src/nova/quota.py:L144) | 9/30 | `src/nova/quota.py:L97–L144` |
| `DbQuotaDriver._get_usages` | method | (self, context, resources, project_id, user_id=None) | private | `usages` (src/nova/quota.py:L205) | 8/25 | `src/nova/quota.py:L146–L205` |
| `DbQuotaDriver.get_user_quotas` | method | (self, context, resources, project_id, user_id, quota_class=None, usages=True, project_quotas=None, user_quotas=None) | public | `self._process_quotas(context, resources, project_id, user_quotas, quota_class, usages=user_usages)` (src/nova/quota.py:L243) | 6/21 | `src/nova/quota.py:L207–L245` |
| `DbQuotaDriver.get_project_quotas` | method | (self, context, resources, project_id, quota_class=None, usages=True, remains=False, project_quotas=None) | public | `self._process_quotas(context, resources, project_id, project_quotas, quota_class, usages=project_usages, remains=remains)` (src/nova/quota.py:L271) | 3/12 | `src/nova/quota.py:L247–L274` |
| `DbQuotaDriver._is_unlimited_value` | method | (self, v) | private | `v <= self.UNLIMITED_VALUE` (src/nova/quota.py:L280) | 1/2 | `src/nova/quota.py:L276–L280` |
| `DbQuotaDriver._sum_quota_values` | method | (self, v1, v2) | private | `self.UNLIMITED_VALUE` (src/nova/quota.py:L288); `v1 + v2` (src/nova/quota.py:L289) | 3/4 | `src/nova/quota.py:L282–L289` |
| `DbQuotaDriver._sub_quota_values` | method | (self, v1, v2) | private | `self.UNLIMITED_VALUE` (src/nova/quota.py:L297); `v1 - v2` (src/nova/quota.py:L298) | 3/4 | `src/nova/quota.py:L291–L298` |
| `DbQuotaDriver.get_settable_quotas` | method | (self, context, resources, project_id, user_id=None) | public | `settable_quotas` (src/nova/quota.py:L349) | 4/28 | `src/nova/quota.py:L300–L349` |
| `DbQuotaDriver._get_quotas` | method | (self, context, resources, keys, project_id=None, user_id=None, project_quotas=None) | private | `{k: v['limit'] for k, v in quotas.items()}` (src/nova/quota.py:L398) | 6/25 | `src/nova/quota.py:L351–L398` |
| `DbQuotaDriver.limit_check` | method | (self, context, resources, values, project_id=None, user_id=None) | public | not declared | 15/30 | `src/nova/quota.py:L400–L465` |
| `DbQuotaDriver.limit_check_project_and_user` | method | (self, context, resources, project_values=None, user_values=None, project_id=None, user_id=None) | public | not declared | 29/71 | `src/nova/quota.py:L467–L617` |
| `NoopQuotaDriver` | class | — | exported | not declared | — | `src/nova/quota.py:L620–L780` |
| `NoopQuotaDriver.get_reserved` | method | (self) | public | `-1` (src/nova/quota.py:L628) | 1/2 | `src/nova/quota.py:L626–L628` |
| `NoopQuotaDriver.get_defaults` | method | (self, context, resources) | public | `quotas` (src/nova/quota.py:L639) | 2/5 | `src/nova/quota.py:L630–L639` |
| `NoopQuotaDriver.get_class_quotas` | method | (self, context, resources, quota_class) | public | `quotas` (src/nova/quota.py:L653) | 2/5 | `src/nova/quota.py:L641–L653` |
| `NoopQuotaDriver._get_noop_quotas` | method | (self, resources, usages=None, remains=False) | private | `quotas` (src/nova/quota.py:L664) | 4/10 | `src/nova/quota.py:L655–L664` |
| `NoopQuotaDriver.get_user_quotas` | method | (self, context, resources, project_id, user_id, quota_class=None, usages=True) | public | `self._get_noop_quotas(resources, usages=usages)` (src/nova/quota.py:L683) | 1/4 | `src/nova/quota.py:L666–L683` |
| `NoopQuotaDriver.get_project_quotas` | method | (self, context, resources, project_id, quota_class=None, usages=True, remains=False) | public | `self._get_noop_quotas(resources, usages=usages, remains=remains)` (src/nova/quota.py:L703) | 1/4 | `src/nova/quota.py:L685–L703` |
| `NoopQuotaDriver.get_settable_quotas` | method | (self, context, resources, project_id, user_id=None) | public | `quotas` (src/nova/quota.py:L718) | 2/6 | `src/nova/quota.py:L705–L718` |
| `NoopQuotaDriver.limit_check` | method | (self, context, resources, values, project_id=None, user_id=None) | public | not declared | 1/3 | `src/nova/quota.py:L720–L748` |
| `NoopQuotaDriver.limit_check_project_and_user` | method | (self, context, resources, project_values=None, user_values=None, project_id=None, user_id=None) | public | not declared | 1/4 | `src/nova/quota.py:L750–L780` |
| `UnifiedLimitsDriver` | class | — | exported | not declared | — | `src/nova/quota.py:L783–L868` |
| `UnifiedLimitsDriver.get_reserved` | method | (self) | public | `0` (src/nova/quota.py:L793) | 1/2 | `src/nova/quota.py:L791–L793` |
| `UnifiedLimitsDriver.get_class_quotas` | method | (self, context, resources, quota_class) | public | `self.get_defaults(context, resources)` (src/nova/quota.py:L804) | 1/2 | `src/nova/quota.py:L795–L804` |
| `UnifiedLimitsDriver.get_defaults` | method | (self, context, resources) | public | `quotas` (src/nova/quota.py:L820) | 3/10 | `src/nova/quota.py:L806–L820` |
| `UnifiedLimitsDriver.get_project_quotas` | method | (self, context, resources, project_id, quota_class=None, usages=True, remains=False) | public | `project_quotas` (src/nova/quota.py:L863) | 9/28 | `src/nova/quota.py:L822–L863` |
| `UnifiedLimitsDriver.get_user_quotas` | method | (self, context, resources, project_id, user_id, quota_class=None, usages=True) | public | `self.get_project_quotas(context, resources, project_id, quota_class, usages)` (src/nova/quota.py:L867) | 1/4 | `src/nova/quota.py:L865–L868` |
| `BaseResource` | class | — | exported | not declared | — | `src/nova/quota.py:L871–L889` |
| `BaseResource.__init__` | method | (self, name, flag=None) | public | not declared | 1/3 | `src/nova/quota.py:L874–L884` |
| `BaseResource.default` | method | (self) | public | `CONF.quota[self.flag] if self.flag else -1` (src/nova/quota.py:L889) | 2/2 | `src/nova/quota.py:L887–L889` |
| `AbsoluteResource` | class | — | exported | not declared | — | `src/nova/quota.py:L892–L894` |
| `AbsoluteResource.valid_method` | field | — | public | not declared | — | `src/nova/quota.py:L894–L894` |
| `CountableResource` | class | — | exported | not declared | — | `src/nova/quota.py:L897–L952` |
| `CountableResource.__init__` | method | (self, name, count_as_dict, flag=None) | public | not declared | 1/3 | `src/nova/quota.py:L902–L952` |
| `QuotaEngine` | class | — | exported | not declared | — | `src/nova/quota.py:L955–L1157` |
| `QuotaEngine.__init__` | method | (self, quota_driver=None, resources=None) | public | not declared | 3/8 | `src/nova/quota.py:L958–L974` |
| `QuotaEngine._driver` | method | (self) | private | `self.__driver_override` (src/nova/quota.py:L979); `self.__driver` (src/nova/quota.py:L989) | 3/8 | `src/nova/quota.py:L977–L989` |
| `QuotaEngine.get_defaults` | method | (self, context) | public | `self._driver.get_defaults(context, self._resources)` (src/nova/quota.py:L997) | 1/2 | `src/nova/quota.py:L991–L997` |
| `QuotaEngine.get_class_quotas` | method | (self, context, quota_class) | public | `self._driver.get_class_quotas(context, self._resources, quota_class)` (src/nova/quota.py:L1007) | 1/3 | `src/nova/quota.py:L999–L1008` |
| `QuotaEngine.get_user_quotas` | method | (self, context, project_id, user_id, quota_class=None, usages=True) | public | `self._driver.get_user_quotas(context, self._resources, project_id, user_id, quota_class=quota_class, usages=usages)` (src/nova/quota.py:L1023) | 1/6 | `src/nova/quota.py:L1010–L1026` |
| `QuotaEngine.get_project_quotas` | method | (self, context, project_id, quota_class=None, usages=True, remains=False) | public | `self._driver.get_project_quotas(context, self._resources, project_id, quota_class=quota_class, usages=usages, remains=remains)` (src/nova/quota.py:L1042) | 1/7 | `src/nova/quota.py:L1028–L1046` |
| `QuotaEngine.get_settable_quotas` | method | (self, context, project_id, user_id=None) | public | `self._driver.get_settable_quotas(context, self._resources, project_id, user_id=user_id)` (src/nova/quota.py:L1057) | 1/4 | `src/nova/quota.py:L1048–L1059` |
| `QuotaEngine.count_as_dict` | method | (self, context, resource, *args, **kwargs) | public | `res.count_as_dict(context, *args, **kwargs)` (src/nova/quota.py:L1084) | 3/5 | `src/nova/quota.py:L1061–L1084` |
| `QuotaEngine.limit_check` | method | (self, context, project_id=None, user_id=None, **values) | public | `self._driver.limit_check(context, self._resources, values, project_id=project_id, user_id=user_id)` (src/nova/quota.py:L1116) | 1/3 | `src/nova/quota.py:L1088–L1117` |
| `QuotaEngine.limit_check_project_and_user` | method | (self, context, project_values=None, user_values=None, project_id=None, user_id=None) | public | `self._driver.limit_check_project_and_user( context, self._resources, project_values=project_values, user_values=user_values, project_id=project_id, user_id=user_id)` (src/nova/quota.py:L1148) | 1/6 | `src/nova/quota.py:L1119–L1150` |
| `QuotaEngine.resources` | method | (self) | public | `sorted(self._resources.keys())` (src/nova/quota.py:L1154) | 1/2 | `src/nova/quota.py:L1153–L1154` |
| `QuotaEngine.get_reserved` | method | (self) | public | `self._driver.get_reserved()` (src/nova/quota.py:L1157) | 1/2 | `src/nova/quota.py:L1156–L1157` |
| `_user_id_queued_for_delete_populated` | function | (context, project_id=None) | unexported | `not context.session.query(query.exists()).scalar()` (src/nova/quota.py:L1200) | 2/12 | `src/nova/quota.py:L1161–L1200` |
| `_keypair_get_count_by_user` | function | (context, user_id) | unexported | `{'user': {'key_pairs': count}}` (src/nova/quota.py:L1205) | 1/3 | `src/nova/quota.py:L1203–L1205` |
| `_server_group_count_members_by_user_legacy` | function | (context, group, user_id) | unexported | `{'user': {'server_group_members': len(instance_uuids)}}` (src/nova/quota.py:L1233) | 3/12 | `src/nova/quota.py:L1208–L1233` |
| `_server_group_count_members_by_user_legacy.group_member_uuids` | function | (cctxt) | public | `{inst.uuid for inst in objects.InstanceList.get_by_filters( cctxt, filters, expected_attrs=[])}` (src/nova/quota.py:L1212) | — | `src/nova/quota.py:L1211–L1213` |
| `is_qfd_populated` | function | (context) | exported | `UID_QFD_POPULATED_CACHE_ALL` (src/nova/quota.py:L1264) | 2/8 | `src/nova/quota.py:L1236–L1264` |
| `_server_group_count_members_by_user` | function | (context, group, user_id) | unexported | `{'user': {'server_group_members': count}}` (src/nova/quota.py:L1287); `_server_group_count_members_by_user_legacy(context, group, user_id)` (src/nova/quota.py:L1291) | 2/9 | `src/nova/quota.py:L1267–L1292` |
| `_instances_cores_ram_count_legacy` | function | (context, project_id, user_id=None) | unexported | `total_counts` (src/nova/quota.py:L1338) | 8/21 | `src/nova/quota.py:L1295–L1338` |
| `_cores_ram_count_placement` | function | (context, project_id, user_id=None) | unexported | `report.report_client_singleton().get_usages_counts_for_quota( context, project_id, user_id=user_id)` (src/nova/quota.py:L1342) | 1/3 | `src/nova/quota.py:L1341–L1343` |
| `_instances_cores_ram_count_api_db_placement` | function | (context, project_id, user_id=None) | unexported | `total_counts` (src/nova/quota.py:L1359) | 2/11 | `src/nova/quota.py:L1346–L1359` |
| `_instances_cores_ram_count` | function | (context, project_id, user_id=None) | unexported | `_instances_cores_ram_count_api_db_placement(context, project_id, user_id=user_id)` (src/nova/quota.py:L1392); `_instances_cores_ram_count_legacy(context, project_id, user_id=user_id)` (src/nova/quota.py:L1397) | 6/20 | `src/nova/quota.py:L1362–L1398` |
| `_server_group_count` | function | (context, project_id, user_id=None) | unexported | `objects.InstanceGroupList.get_counts(context, project_id, user_id=user_id)` (src/nova/quota.py:L1413) | 1/3 | `src/nova/quota.py:L1401–L1414` |
| `QUOTAS` | constant | — | exported | not declared | — | `src/nova/quota.py:L1417–L1447` |
| `_valid_method_call_check_resource` | function | (name, method, resources) | unexported | not declared | 3/6 | `src/nova/quota.py:L1450–L1456` |
| `_valid_method_call_check_resources` | function | (resource_values, method, resources) | unexported | not declared | 2/3 | `src/nova/quota.py:L1459–L1468` |
| `BaseResource.default` | property | — | public | not declared | — | `src/nova/quota.py:L886–L889` |
| `QuotaEngine._driver` | property | — | private | not declared | — | `src/nova/quota.py:L976–L989` |
| `QuotaEngine.resources` | property | — | public | not declared | — | `src/nova/quota.py:L1152–L1154` |

## Dependencies

- `import copy` (src/nova/quota.py:L19)
- `oslo_log`: imports `log as logging` (src/nova/quota.py:L21)
- `oslo_utils`: imports `importutils` (src/nova/quota.py:L22)
- `sqlalchemy`: imports `sql` (src/nova/quota.py:L23)
- `import nova.conf` (src/nova/quota.py:L25)
- `nova`: imports `context as nova_context` (src/nova/quota.py:L26)
- `nova.db.api`: imports `api as api_db_api` (src/nova/quota.py:L27)
- `nova.db.api`: imports `models as api_models` (src/nova/quota.py:L28)
- `nova.db.main`: imports `api as main_db_api` (src/nova/quota.py:L29)
- `nova`: imports `exception` (src/nova/quota.py:L30)
- `nova.limit`: imports `local as local_limit` (src/nova/quota.py:L31)
- `nova.limit`: imports `placement as placement_limit` (src/nova/quota.py:L32)
- `nova`: imports `objects` (src/nova/quota.py:L33)
- `nova.scheduler.client`: imports `report` (src/nova/quota.py:L34)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/quota.py:L36)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/quota.py:L37)
- **global-mutation**: UID_QFD_POPULATED_CACHE_BY_PROJECT = set() (src/nova/quota.py:L40)
- **global-mutation**: UID_QFD_POPULATED_CACHE_ALL = False (src/nova/quota.py:L44)
- **global-mutation**: UNLIMITED_VALUE = -1 (src/nova/quota.py:L52)
- **global-mutation**: UID_QFD_POPULATED_CACHE_ALL = _user_id_queued_for_delete_populated( (src/nova/quota.py:L1261)
- **global-mutation**: QUOTAS = QuotaEngine( (src/nova/quota.py:L1417)

## Security Surface

- **sink** (`db-write`): modified_quotas[resource.name].update( (src/nova/quota.py:L125)
- **sink** (`db-write`): modified_quotas[resource.name].update(remains=limit) (src/nova/quota.py:L131)
- **sink** (`db-write`): total_counts['project'].update(cores_ram_counts['project']) (src/nova/quota.py:L1356)
- **sink** (`db-write`): total_counts['user'].update(cores_ram_counts['user']) (src/nova/quota.py:L1358)

