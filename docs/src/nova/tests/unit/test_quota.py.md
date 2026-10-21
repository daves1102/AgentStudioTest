# src/nova/tests/unit/test_quota.py

## Overview

This file implements the `test_quota` module, defining 11 classs, 2 constants, 18 functions, 117 methods, 16 imports, 2 side effects, 1 security surface entry.

Lines: total 2387, code 2060, comment 101, blank 226

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/test_quota.py:L36–L36` |
| `_get_fake_get_usages` | function | (updates=None) | unexported | `fake_get_usages` (src/nova/tests/unit/test_quota.py:L54) | 2/10 | `src/nova/tests/unit/test_quota.py:L39–L54` |
| `_get_fake_get_usages.fake_get_usages` | function | (*a, **k) | public | `usages` (src/nova/tests/unit/test_quota.py:L52) | — | `src/nova/tests/unit/test_quota.py:L51–L52` |
| `QuotaIntegrationTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_quota.py:L57–L246` |
| `QuotaIntegrationTestCase.REQUIRES_LOCKING` | constant | — | public | not declared | — | `src/nova/tests/unit/test_quota.py:L59–L59` |
| `QuotaIntegrationTestCase.setUp` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/test_quota.py:L61–L85` |
| `QuotaIntegrationTestCase.setUp.fake_validate_networks` | function | (context, requested_networks, num_instances) | public | `num_instances` (src/nova/tests/unit/test_quota.py:L80) | — | `src/nova/tests/unit/test_quota.py:L79–L80` |
| `QuotaIntegrationTestCase._create_instance` | method | (self, flavor_name='m1.large') | private | `inst` (src/nova/tests/unit/test_quota.py:L108) | 1/17 | `src/nova/tests/unit/test_quota.py:L87–L108` |
| `QuotaIntegrationTestCase.test_too_many_instances` | method | (self) | public | not declared | 3/17 | `src/nova/tests/unit/test_quota.py:L110–L126` |
| `QuotaIntegrationTestCase.test_too_many_cores` | method | (self) | public | not declared | 2/16 | `src/nova/tests/unit/test_quota.py:L128–L143` |
| `QuotaIntegrationTestCase.test_many_cores_with_unlimited_quota` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/test_quota.py:L145–L151` |
| `QuotaIntegrationTestCase.test_too_many_metadata_items` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/test_quota.py:L153–L161` |
| `QuotaIntegrationTestCase._create_with_injected_files` | method | (self, files) | private | not declared | 1/6 | `src/nova/tests/unit/test_quota.py:L163–L168` |
| `QuotaIntegrationTestCase.test_no_injected_files` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_quota.py:L170–L173` |
| `QuotaIntegrationTestCase.test_max_injected_files` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/test_quota.py:L175–L179` |
| `QuotaIntegrationTestCase.test_too_many_injected_files` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/test_quota.py:L181–L186` |
| `QuotaIntegrationTestCase.test_max_injected_file_content_bytes` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/test_quota.py:L188–L192` |
| `QuotaIntegrationTestCase.test_too_many_injected_file_content_bytes` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/test_quota.py:L194–L199` |
| `QuotaIntegrationTestCase.test_max_injected_file_path_bytes` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/test_quota.py:L201–L205` |
| `QuotaIntegrationTestCase.test_too_many_injected_file_path_bytes` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/test_quota.py:L207–L212` |
| `QuotaIntegrationTestCase._test_with_server_group_members` | method | (self) | private | `exc` (src/nova/tests/unit/test_quota.py:L241) | 1/23 | `src/nova/tests/unit/test_quota.py:L214–L241` |
| `QuotaIntegrationTestCase.test_with_server_group_members` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_quota.py:L243–L246` |
| `UnifiedLimitsIntegrationTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_quota.py:L249–L298` |
| `UnifiedLimitsIntegrationTestCase.setUp` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/test_quota.py:L263–L277` |
| `UnifiedLimitsIntegrationTestCase.test_too_many_instances` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_quota.py:L279–L280` |
| `UnifiedLimitsIntegrationTestCase.test_too_many_cores` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_quota.py:L282–L283` |
| `UnifiedLimitsIntegrationTestCase.test_no_injected_files` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_quota.py:L285–L286` |
| `UnifiedLimitsIntegrationTestCase.test_max_injected_files` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_quota.py:L288–L289` |
| `UnifiedLimitsIntegrationTestCase.test_max_injected_file_content_bytes` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_quota.py:L291–L292` |
| `UnifiedLimitsIntegrationTestCase.test_max_injected_file_path_bytes` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_quota.py:L294–L295` |
| `UnifiedLimitsIntegrationTestCase.test_with_server_group_members` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_quota.py:L297–L298` |
| `FakeContext` | class | — | exported | not declared | — | `src/nova/tests/unit/test_quota.py:L302–L315` |
| `FakeContext.__init__` | method | (self, project_id, quota_class) | public | not declared | 1/8 | `src/nova/tests/unit/test_quota.py:L303–L310` |
| `FakeContext.elevated` | method | (self) | public | `elevated` (src/nova/tests/unit/test_quota.py:L315) | 1/4 | `src/nova/tests/unit/test_quota.py:L312–L315` |
| `FakeDriver` | class | — | exported | not declared | — | `src/nova/tests/unit/test_quota.py:L318–L360` |
| `FakeDriver.__init__` | method | (self, by_project=None, by_user=None, by_class=None, reservations=None) | public | not declared | 5/7 | `src/nova/tests/unit/test_quota.py:L319–L325` |
| `FakeDriver.get_defaults` | method | (self, context, resources) | public | `resources` (src/nova/tests/unit/test_quota.py:L329) | 1/3 | `src/nova/tests/unit/test_quota.py:L327–L329` |
| `FakeDriver.get_class_quotas` | method | (self, context, resources, quota_class) | public | `resources` (src/nova/tests/unit/test_quota.py:L334) | 1/4 | `src/nova/tests/unit/test_quota.py:L331–L334` |
| `FakeDriver.get_user_quotas` | method | (self, context, resources, project_id, user_id, quota_class=None, usages=True) | public | `resources` (src/nova/tests/unit/test_quota.py:L341) | 1/6 | `src/nova/tests/unit/test_quota.py:L336–L341` |
| `FakeDriver.get_project_quotas` | method | (self, context, resources, project_id, quota_class=None, usages=True, remains=False) | public | `resources` (src/nova/tests/unit/test_quota.py:L349) | 1/7 | `src/nova/tests/unit/test_quota.py:L343–L349` |
| `FakeDriver.limit_check` | method | (self, context, resources, values, project_id=None, user_id=None) | public | not declared | 1/4 | `src/nova/tests/unit/test_quota.py:L351–L354` |
| `FakeDriver.limit_check_project_and_user` | method | (self, context, resources, project_values=None, user_values=None, project_id=None, user_id=None) | public | not declared | 1/5 | `src/nova/tests/unit/test_quota.py:L356–L360` |
| `BaseResourceTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_quota.py:L363–L423` |
| `BaseResourceTestCase.test_no_flag` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_quota.py:L364–L369` |
| `BaseResourceTestCase.test_with_flag` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_quota.py:L371–L378` |
| `BaseResourceTestCase.test_with_flag_no_quota` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_quota.py:L380–L386` |
| `BaseResourceTestCase.test_valid_method_call_check_invalid_input` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_quota.py:L388–L393` |
| `BaseResourceTestCase.test_valid_method_call_check_invalid_method` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_quota.py:L395–L400` |
| `BaseResourceTestCase.test_valid_method_call_check_multiple` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_quota.py:L402–L413` |
| `BaseResourceTestCase.test_valid_method_call_check_wrong_method` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_quota.py:L415–L423` |
| `QuotaEngineTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_quota.py:L426–L589` |
| `QuotaEngineTestCase.test_init` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_quota.py:L427–L429` |
| `QuotaEngineTestCase.test_init_override_obj` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_quota.py:L431–L433` |
| `QuotaEngineTestCase.test_init_with_flag_set` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_quota.py:L435–L446` |
| `QuotaEngineTestCase._get_quota_engine` | method | (self, driver, resources=None) | private | `quota.QuotaEngine(quota_driver=driver, resources=resources)` (src/nova/tests/unit/test_quota.py:L455) | 2/8 | `src/nova/tests/unit/test_quota.py:L448–L455` |
| `QuotaEngineTestCase.test_get_defaults` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_quota.py:L457–L466` |
| `QuotaEngineTestCase.test_get_class_quotas` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_quota.py:L468–L478` |
| `QuotaEngineTestCase.test_get_user_quotas` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/test_quota.py:L480–L498` |
| `QuotaEngineTestCase.test_get_project_quotas` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/test_quota.py:L500–L516` |
| `QuotaEngineTestCase.test_count_as_dict_no_resource` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_quota.py:L518–L524` |
| `QuotaEngineTestCase.test_count_as_dict_wrong_resource` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_quota.py:L526–L532` |
| `QuotaEngineTestCase.test_count_as_dict` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/test_quota.py:L534–L549` |
| `QuotaEngineTestCase.test_count_as_dict.fake_count_as_dict` | function | (context, *args, **kwargs) | public | `{'project': {'test_resource5': 5}}` (src/nova/tests/unit/test_quota.py:L538) | — | `src/nova/tests/unit/test_quota.py:L535–L538` |
| `QuotaEngineTestCase.test_limit_check` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/test_quota.py:L551–L565` |
| `QuotaEngineTestCase.test_limit_check_project_and_user` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/test_quota.py:L567–L582` |
| `QuotaEngineTestCase.test_resources` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_quota.py:L584–L589` |
| `DbQuotaDriverTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_quota.py:L592–L1896` |
| `DbQuotaDriverTestCase.setUp` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/test_quota.py:L593–L612` |
| `DbQuotaDriverTestCase.test_get_defaults` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/test_quota.py:L614–L634` |
| `DbQuotaDriverTestCase._stub_quota_class_get_default` | method | (self) | private | not declared | 1/3 | `src/nova/tests/unit/test_quota.py:L636–L646` |
| `DbQuotaDriverTestCase._stub_quota_class_get_default.fake_qcgd` | function | (cls, context) | public | `dict( instances=5, ram=25 * 1024, metadata_items=64, injected_file_content_bytes=5 * 1024, )` (src/nova/tests/unit/test_quota.py:L640) | — | `src/nova/tests/unit/test_quota.py:L638–L645` |
| `DbQuotaDriverTestCase._stub_quota_class_get_all_by_name` | method | (self) | private | not declared | 1/3 | `src/nova/tests/unit/test_quota.py:L648–L659` |
| `DbQuotaDriverTestCase._stub_quota_class_get_all_by_name.fake_qcgabn` | function | (cls, context, quota_class) | public | `dict( instances=5, ram=25 * 1024, metadata_items=64, injected_file_content_bytes=5 * 1024, )` (src/nova/tests/unit/test_quota.py:L653) | — | `src/nova/tests/unit/test_quota.py:L650–L658` |
| `DbQuotaDriverTestCase.test_get_class_quotas` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/test_quota.py:L661–L682` |
| `DbQuotaDriverTestCase._stub_get_by_project_and_user` | method | (self) | private | not declared | 1/7 | `src/nova/tests/unit/test_quota.py:L684–L708` |
| `DbQuotaDriverTestCase._stub_get_by_project_and_user.fake_qgabpau` | function | (context, project_id, user_id) | public | `dict( cores=10, injected_files=2, injected_file_path_bytes=127, )` (src/nova/tests/unit/test_quota.py:L689) | — | `src/nova/tests/unit/test_quota.py:L685–L693` |
| `DbQuotaDriverTestCase._stub_get_by_project_and_user.fake_qgabp` | function | (context, project_id) | public | `{ 'cores': 10, 'injected_files': 2, 'injected_file_path_bytes': 127, }` (src/nova/tests/unit/test_quota.py:L698) | — | `src/nova/tests/unit/test_quota.py:L695–L702` |
| `DbQuotaDriverTestCase._get_fake_countable_resources` | method | (self) | private | `resources` (src/nova/tests/unit/test_quota.py:L742) | 1/26 | `src/nova/tests/unit/test_quota.py:L710–L742` |
| `DbQuotaDriverTestCase._get_fake_countable_resources.fake_instances_cores_ram_count` | function | (*a, **k) | public | `{'project': {'instances': 2, 'cores': 4, 'ram': 1024}, 'user': {'instances': 1, 'cores': 2, 'ram': 512}}` (src/nova/tests/unit/test_quota.py:L713) | — | `src/nova/tests/unit/test_quota.py:L712–L714` |
| `DbQuotaDriverTestCase._get_fake_countable_resources.fake_server_group_count` | function | (*a, **k) | public | `{'project': {'server_groups': 5}, 'user': {'server_groups': 3}}` (src/nova/tests/unit/test_quota.py:L717) | — | `src/nova/tests/unit/test_quota.py:L716–L718` |
| `DbQuotaDriverTestCase.test_get_usages_for_project` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/test_quota.py:L744–L757` |
| `DbQuotaDriverTestCase.test_get_usages_for_user` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/test_quota.py:L759–L772` |
| `DbQuotaDriverTestCase.test_get_user_quotas` | method | (self, mock_get_usages) | public | not declared | 1/72 | `src/nova/tests/unit/test_quota.py:L776–L848` |
| `DbQuotaDriverTestCase._stub_get_by_project_and_user_specific` | method | (self) | private | not declared | 1/3 | `src/nova/tests/unit/test_quota.py:L850–L859` |
| `DbQuotaDriverTestCase._stub_get_by_project_and_user_specific.fake_quota_get` | function | (context, project_id, resource, user_id=None) | public | `dict( test_resource=dict(in_use=20), )` (src/nova/tests/unit/test_quota.py:L856) | — | `src/nova/tests/unit/test_quota.py:L851–L858` |
| `DbQuotaDriverTestCase._stub_get_by_project` | method | (self) | private | not declared | 1/7 | `src/nova/tests/unit/test_quota.py:L861–L883` |
| `DbQuotaDriverTestCase._stub_get_by_project.fake_qgabp` | function | (context, project_id) | public | `dict( cores=10, injected_files=2, injected_file_path_bytes=127, )` (src/nova/tests/unit/test_quota.py:L865) | — | `src/nova/tests/unit/test_quota.py:L862–L869` |
| `DbQuotaDriverTestCase._stub_get_by_project.fake_quota_get_all` | function | (context, project_id) | public | `[ models.ProjectUserQuota(resource='instances', hard_limit=5), models.ProjectUserQuota(resource='cores', hard_limit=2), ]` (src/nova/tests/unit/test_quota.py:L874) | — | `src/nova/tests/unit/test_quota.py:L871–L877` |
| `DbQuotaDriverTestCase.test_get_project_quotas` | method | (self, mock_get_usages) | public | not declared | 1/71 | `src/nova/tests/unit/test_quota.py:L887–L958` |
| `DbQuotaDriverTestCase.test_get_project_quotas_with_remains` | method | (self, mock_get_usages) | public | not declared | 1/86 | `src/nova/tests/unit/test_quota.py:L962–L1048` |
| `DbQuotaDriverTestCase.test_get_user_quotas_alt_context_no_class` | method | (self, mock_get_usages) | public | not declared | 1/71 | `src/nova/tests/unit/test_quota.py:L1052–L1123` |
| `DbQuotaDriverTestCase.test_get_project_quotas_alt_context_no_class` | method | (self, mock_get_usages) | public | not declared | 1/70 | `src/nova/tests/unit/test_quota.py:L1127–L1197` |
| `DbQuotaDriverTestCase.test_get_user_quotas_alt_context_with_class` | method | (self, mock_get_usages) | public | not declared | 1/73 | `src/nova/tests/unit/test_quota.py:L1201–L1274` |
| `DbQuotaDriverTestCase.test_get_project_quotas_alt_context_with_class` | method | (self, mock_get_usages) | public | not declared | 1/72 | `src/nova/tests/unit/test_quota.py:L1278–L1350` |
| `DbQuotaDriverTestCase.test_get_user_quotas_no_usages` | method | (self) | public | not declared | 1/54 | `src/nova/tests/unit/test_quota.py:L1352–L1406` |
| `DbQuotaDriverTestCase.test_get_project_quotas_no_usages` | method | (self) | public | not declared | 1/54 | `src/nova/tests/unit/test_quota.py:L1408–L1462` |
| `DbQuotaDriverTestCase._stub_get_settable_quotas` | method | (self) | private | not declared | 1/13 | `src/nova/tests/unit/test_quota.py:L1464–L1525` |
| `DbQuotaDriverTestCase._stub_get_settable_quotas.fake_quota_get_all_by_project` | function | (context, project_id) | public | `{'floating_ips': -1}` (src/nova/tests/unit/test_quota.py:L1468) | — | `src/nova/tests/unit/test_quota.py:L1466–L1468` |
| `DbQuotaDriverTestCase._stub_get_settable_quotas.fake_get_project_quotas` | function | (dbdrv, context, resources, project_id, quota_class=None, usages=True, remains=False, project_quotas=None) | public | `result` (src/nova/tests/unit/test_quota.py:L1494) | — | `src/nova/tests/unit/test_quota.py:L1470–L1494` |
| `DbQuotaDriverTestCase._stub_get_settable_quotas.fake_process_quotas_in_get_user_quotas` | function | (dbdrv, context, resources, project_id, quotas, quota_class=None, usages=None, remains=False) | public | `result` (src/nova/tests/unit/test_quota.py:L1512) | — | `src/nova/tests/unit/test_quota.py:L1496–L1512` |
| `DbQuotaDriverTestCase._stub_get_settable_quotas.fake_qgabpau` | function | (context, project_id, user_id) | public | `{'instances': 2, 'cores': -1}` (src/nova/tests/unit/test_quota.py:L1516) | — | `src/nova/tests/unit/test_quota.py:L1514–L1516` |
| `DbQuotaDriverTestCase.test_get_settable_quotas_with_user` | method | (self) | public | not declared | 1/69 | `src/nova/tests/unit/test_quota.py:L1527–L1596` |
| `DbQuotaDriverTestCase.test_get_settable_quotas_without_user` | method | (self) | public | not declared | 1/67 | `src/nova/tests/unit/test_quota.py:L1598–L1665` |
| `DbQuotaDriverTestCase.test_get_settable_quotas_by_user_with_unlimited_value` | method | (self) | public | not declared | 1/69 | `src/nova/tests/unit/test_quota.py:L1667–L1736` |
| `DbQuotaDriverTestCase._stub_get_project_quotas` | method | (self) | private | not declared | 1/4 | `src/nova/tests/unit/test_quota.py:L1738–L1747` |
| `DbQuotaDriverTestCase._stub_get_project_quotas.fake_get_project_quotas` | function | (dbdrv, context, resources, project_id, quota_class=None, usages=True, remains=False, project_quotas=None) | public | `{k: dict(limit=v.default) for k, v in resources.items()}` (src/nova/tests/unit/test_quota.py:L1744) | — | `src/nova/tests/unit/test_quota.py:L1739–L1744` |
| `DbQuotaDriverTestCase.test_get_quotas_unknown` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_quota.py:L1749–L1755` |
| `DbQuotaDriverTestCase.test_limit_check_under` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_quota.py:L1757–L1763` |
| `DbQuotaDriverTestCase.test_limit_check_over` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_quota.py:L1765–L1771` |
| `DbQuotaDriverTestCase.test_limit_check_project_overs` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_quota.py:L1773–L1780` |
| `DbQuotaDriverTestCase.test_limit_check_unlimited` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_quota.py:L1782–L1787` |
| `DbQuotaDriverTestCase.test_limit_check` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_quota.py:L1789–L1793` |
| `DbQuotaDriverTestCase.test_limit_check_project_and_user_no_values` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_quota.py:L1795–L1799` |
| `DbQuotaDriverTestCase.test_limit_check_project_and_user_under` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/test_quota.py:L1801–L1813` |
| `DbQuotaDriverTestCase.test_limit_check_project_and_user_over_project` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_quota.py:L1815–L1826` |
| `DbQuotaDriverTestCase.test_limit_check_project_and_user_over_user` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_quota.py:L1828–L1840` |
| `DbQuotaDriverTestCase.test_limit_check_project_and_user_overs` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/test_quota.py:L1842–L1854` |
| `DbQuotaDriverTestCase.test_limit_check_project_and_user_unlimited` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/test_quota.py:L1856–L1868` |
| `DbQuotaDriverTestCase.test_limit_check_project_and_user` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/test_quota.py:L1870–L1880` |
| `DbQuotaDriverTestCase.test_limit_check_project_and_user_zero_values` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/test_quota.py:L1882–L1896` |
| `NoopQuotaDriverTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_quota.py:L1899–L1976` |
| `NoopQuotaDriverTestCase.setUp` | method | (self) | public | not declared | 2/22 | `src/nova/tests/unit/test_quota.py:L1900–L1924` |
| `NoopQuotaDriverTestCase.test_get_defaults` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_quota.py:L1926–L1929` |
| `NoopQuotaDriverTestCase.test_get_class_quotas` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_quota.py:L1931–L1935` |
| `NoopQuotaDriverTestCase.test_get_project_quotas` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_quota.py:L1937–L1941` |
| `NoopQuotaDriverTestCase.test_get_user_quotas` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_quota.py:L1943–L1948` |
| `NoopQuotaDriverTestCase.test_get_project_quotas_no_usages` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_quota.py:L1950–L1955` |
| `NoopQuotaDriverTestCase.test_get_user_quotas_no_usages` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_quota.py:L1957–L1963` |
| `NoopQuotaDriverTestCase.test_get_settable_quotas_with_user` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_quota.py:L1965–L1970` |
| `NoopQuotaDriverTestCase.test_get_settable_quotas_without_user` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_quota.py:L1972–L1976` |
| `UnifiedLimitsDriverTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_quota.py:L1979–L2103` |
| `UnifiedLimitsDriverTestCase.setUp` | method | (self) | public | not declared | 1/59 | `src/nova/tests/unit/test_quota.py:L1980–L2041` |
| `UnifiedLimitsDriverTestCase.test_get_defaults` | method | (self, mock_default) | public | not declared | 1/5 | `src/nova/tests/unit/test_quota.py:L2044–L2049` |
| `UnifiedLimitsDriverTestCase.test_get_class_quotas` | method | (self, mock_default) | public | not declared | 1/6 | `src/nova/tests/unit/test_quota.py:L2052–L2057` |
| `UnifiedLimitsDriverTestCase.test_get_project_quotas` | method | (self, mock_count, mock_proj, mock_kcount) | public | not declared | 1/8 | `src/nova/tests/unit/test_quota.py:L2062–L2069` |
| `UnifiedLimitsDriverTestCase.test_get_project_quotas_no_usages` | method | (self, mock_count, mock_proj) | public | not declared | 1/7 | `src/nova/tests/unit/test_quota.py:L2073–L2080` |
| `UnifiedLimitsDriverTestCase.test_get_user_quotas` | method | (self, mock_count, mock_proj, mock_kcount) | public | not declared | 1/8 | `src/nova/tests/unit/test_quota.py:L2085–L2092` |
| `UnifiedLimitsDriverTestCase.test_get_user_quotas_no_usages` | method | (self, mock_count, mock_proj) | public | not declared | 1/7 | `src/nova/tests/unit/test_quota.py:L2096–L2103` |
| `QuotaCountTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_quota.py:L2107–L2289` |
| `QuotaCountTestCase.test_cores_ram_count_placement` | method | (self, mock_get_usages) | public | not declared | 1/8 | `src/nova/tests/unit/test_quota.py:L2110–L2117` |
| `QuotaCountTestCase.test_instances_cores_ram_count_api_db_placement` | method | (self, mock_placement_count, mock_get_im_count) | public | not declared | 1/18 | `src/nova/tests/unit/test_quota.py:L2121–L2143` |
| `QuotaCountTestCase.test_instances_cores_ram_count` | method | (self, quota_from_placement, uid_qfd_populated, mock_api_db_placement_count, mock_legacy_count, mock_uid_qfd_populated, mock_warn_log) | public | not declared | 4/31 | `src/nova/tests/unit/test_quota.py:L2154–L2210` |
| `QuotaCountTestCase.test_user_id_queued_for_delete_populated_cache_by_project` | method | (self, mock_api_db_placement_count, mock_legacy_count, mock_uid_qfd_populated) | public | not declared | 1/28 | `src/nova/tests/unit/test_quota.py:L2215–L2255` |
| `QuotaCountTestCase.test_user_id_queued_for_delete_populated_cache_all` | method | (self, mock_api_db_placement_count, mock_legacy_icr_count, mock_api_db_sgm_count, mock_legacy_sgm_count, mock_uid_qfd_populated) | public | not declared | 1/19 | `src/nova/tests/unit/test_quota.py:L2262–L2289` |
| `LegacyGroupMemberQuotaTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_quota.py:L2292–L2387` |
| `LegacyGroupMemberQuotaTestCase.test_no_cells_no_build_reqs` | method | (self, mock_get_cell_mappings, mock_inst_get, mock_build_req_get) | public | not declared | 1/15 | `src/nova/tests/unit/test_quota.py:L2296–L2312` |
| `LegacyGroupMemberQuotaTestCase.test_no_cells_just_build_reqs` | method | (self, mock_get_cell_mappings, mock_inst_get, mock_build_req_get) | public | not declared | 1/19 | `src/nova/tests/unit/test_quota.py:L2317–L2337` |
| `LegacyGroupMemberQuotaTestCase.test_cells_and_build_reqs` | method | (self, mock_get_cell_mappings, mock_inst_get, mock_build_req_get) | public | not declared | 1/36 | `src/nova/tests/unit/test_quota.py:L2342–L2387` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/test_quota.py:L17)
- `import ddt` (src/nova/tests/unit/test_quota.py:L19)
- `oslo_db.sqlalchemy`: imports `enginefacade` (src/nova/tests/unit/test_quota.py:L20)
- `oslo_limit`: imports `fixture as limit_fixture` (src/nova/tests/unit/test_quota.py:L21)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/test_quota.py:L22)
- `nova.compute`: imports `api as compute` (src/nova/tests/unit/test_quota.py:L24)
- `import nova.conf` (src/nova/tests/unit/test_quota.py:L25)
- `nova`: imports `context` (src/nova/tests/unit/test_quota.py:L26)
- `nova.db.main`: imports `models` (src/nova/tests/unit/test_quota.py:L27)
- `nova`: imports `exception` (src/nova/tests/unit/test_quota.py:L28)
- `nova.limit`: imports `local as local_limit` (src/nova/tests/unit/test_quota.py:L29)
- `nova.limit`: imports `placement as placement_limit` (src/nova/tests/unit/test_quota.py:L30)
- `nova`: imports `objects` (src/nova/tests/unit/test_quota.py:L31)
- `nova`: imports `quota` (src/nova/tests/unit/test_quota.py:L32)
- `nova`: imports `test` (src/nova/tests/unit/test_quota.py:L33)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/test_quota.py:L34)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/test_quota.py:L36)
- **global-mutation**: REQUIRES_LOCKING = True (src/nova/tests/unit/test_quota.py:L59)

## Security Surface

- **sink** (`db-write`): usages.update(updates) (src/nova/tests/unit/test_quota.py:L49)

