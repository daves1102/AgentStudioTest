# src/nova/tests/functional/test_report_client.py

## Overview

This file implements the `test_report_client` module, defining 2 classs, 1 constant, 2 functions, 25 methods, 1 staticmethod, 19 imports, 172 side effects, 4 security surface entries.

Lines: total 1585, code 1200, comment 258, blank 127

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/test_report_client.py:L41–L41` |
| `VersionCheckingReportClient` | class | — | exported | not declared | — | `src/nova/tests/functional/test_report_client.py:L44–L85` |
| `VersionCheckingReportClient._check_microversion` | method | (kwargs) | private | `` (src/nova/tests/functional/test_report_client.py:L56) | 3/16 | `src/nova/tests/functional/test_report_client.py:L53–L69` |
| `VersionCheckingReportClient.get` | method | (self, *args, **kwargs) | public | `super(VersionCheckingReportClient, self).get(*args, **kwargs)` (src/nova/tests/functional/test_report_client.py:L73) | 1/3 | `src/nova/tests/functional/test_report_client.py:L71–L73` |
| `VersionCheckingReportClient.put` | method | (self, *args, **kwargs) | public | `super(VersionCheckingReportClient, self).put(*args, **kwargs)` (src/nova/tests/functional/test_report_client.py:L77) | 1/3 | `src/nova/tests/functional/test_report_client.py:L75–L77` |
| `VersionCheckingReportClient.post` | method | (self, *args, **kwargs) | public | `super(VersionCheckingReportClient, self).post(*args, **kwargs)` (src/nova/tests/functional/test_report_client.py:L81) | 1/3 | `src/nova/tests/functional/test_report_client.py:L79–L81` |
| `VersionCheckingReportClient.delete` | method | (self, *args, **kwargs) | public | `super(VersionCheckingReportClient, self).delete(*args, **kwargs)` (src/nova/tests/functional/test_report_client.py:L85) | 1/3 | `src/nova/tests/functional/test_report_client.py:L83–L85` |
| `SchedulerReportClientTests` | class | — | exported | not declared | — | `src/nova/tests/functional/test_report_client.py:L92–L1585` |
| `SchedulerReportClientTests.setUp` | method | (self) | public | not declared | 1/28 | `src/nova/tests/functional/test_report_client.py:L94–L125` |
| `SchedulerReportClientTests.compute_node_to_inventory_dict` | method | (self) | public | `result` (src/nova/tests/functional/test_report_client.py:L158) | 4/32 | `src/nova/tests/functional/test_report_client.py:L127–L158` |
| `SchedulerReportClientTests.test_client_report_smoke` | method | (self) | public | not declared | 1/84 | `src/nova/tests/functional/test_report_client.py:L160–L284` |
| `SchedulerReportClientTests.test_global_request_id` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/test_report_client.py:L286–L306` |
| `SchedulerReportClientTests.test_global_request_id.fake_request` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/functional/test_report_client.py:L289–L291` |
| `SchedulerReportClientTests.test_get_provider_tree_with_nested_and_aggregates` | method | (self) | public | not declared | 3/111 | `src/nova/tests/functional/test_report_client.py:L308–L458` |
| `SchedulerReportClientTests.test__set_inventory_reserved_eq_total` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/test_report_client.py:L460–L480` |
| `SchedulerReportClientTests.test_set_inventory_for_provider` | method | (self) | public | not declared | 1/210 | `src/nova/tests/functional/test_report_client.py:L482–L721` |
| `SchedulerReportClientTests.test_update_from_provider_tree` | method | (self) | public | not declared | 2/148 | `src/nova/tests/functional/test_report_client.py:L723–L945` |
| `SchedulerReportClientTests.test_update_from_provider_tree.assert_ptrees_equal` | function | — | public | not declared | — | `src/nova/tests/functional/test_report_client.py:L731–L744` |
| `SchedulerReportClientTests.test_non_tree_aggregate_membership` | method | (self) | public | not declared | 1/29 | `src/nova/tests/functional/test_report_client.py:L947–L1003` |
| `SchedulerReportClientTests.test_alloc_cands_smoke` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_report_client.py:L1005–L1011` |
| `SchedulerReportClientTests._set_up_provider_tree` | method | (self) | private | `ret` (src/nova/tests/functional/test_report_client.py:L1112) | 1/64 | `src/nova/tests/functional/test_report_client.py:L1013–L1112` |
| `SchedulerReportClientTests.assertProviderTree` | method | (self, expected_dict, actual_tree) | public | not declared | 5/20 | `src/nova/tests/functional/test_report_client.py:L1114–L1146` |
| `SchedulerReportClientTests._set_up_provider_tree_allocs` | method | (self) | private | `ret` (src/nova/tests/functional/test_report_client.py:L1191) | 1/41 | `src/nova/tests/functional/test_report_client.py:L1148–L1191` |
| `SchedulerReportClientTests.assertAllocations` | method | (self, expected, actual) | public | not declared | 4/10 | `src/nova/tests/functional/test_report_client.py:L1193–L1209` |
| `SchedulerReportClientTests.test_allocation_candidates_mappings` | method | (self) | public | not declared | 2/18 | `src/nova/tests/functional/test_report_client.py:L1211–L1235` |
| `SchedulerReportClientTests.test_allocation_candidates_root_traits` | method | (self, data) | public | not declared | 1/15 | `src/nova/tests/functional/test_report_client.py:L1270–L1292` |
| `SchedulerReportClientTests.test_get_allocations_for_provider_tree` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_report_client.py:L1294–L1313` |
| `SchedulerReportClientTests.test_reshape` | method | (self) | public | not declared | 5/41 | `src/nova/tests/functional/test_report_client.py:L1315–L1383` |
| `SchedulerReportClientTests.test_update_from_provider_tree_reshape` | method | (self) | public | not declared | 15/109 | `src/nova/tests/functional/test_report_client.py:L1385–L1540` |
| `SchedulerReportClientTests.test_update_from_provider_tree_reshape_conflict_retry` | method | (self) | public | not declared | 4/31 | `src/nova/tests/functional/test_report_client.py:L1542–L1585` |
| `VersionCheckingReportClient._check_microversion` | staticmethod | — | private | not declared | — | `src/nova/tests/functional/test_report_client.py:L52–L69` |

## Dependencies

- `import copy` (src/nova/tests/functional/test_report_client.py:L14)
- `unittest`: imports `mock` (src/nova/tests/functional/test_report_client.py:L15)
- `import ddt` (src/nova/tests/functional/test_report_client.py:L17)
- `keystoneauth1`: imports `exceptions as kse` (src/nova/tests/functional/test_report_client.py:L18)
- `import microversion_parse` (src/nova/tests/functional/test_report_client.py:L19)
- `import os_resource_classes as orc` (src/nova/tests/functional/test_report_client.py:L20)
- `import os_traits as ot` (src/nova/tests/functional/test_report_client.py:L21)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/test_report_client.py:L22)
- `nova.cmd`: imports `status` (src/nova/tests/functional/test_report_client.py:L24)
- `nova.compute`: imports `provider_tree` (src/nova/tests/functional/test_report_client.py:L25)
- `nova.compute`: imports `utils as compute_utils` (src/nova/tests/functional/test_report_client.py:L26)
- `nova`: imports `conf` (src/nova/tests/functional/test_report_client.py:L27)
- `nova`: imports `context` (src/nova/tests/functional/test_report_client.py:L28)
- `nova`: imports `exception` (src/nova/tests/functional/test_report_client.py:L33)
- `nova`: imports `objects` (src/nova/tests/functional/test_report_client.py:L34)
- `nova.scheduler.client`: imports `report` (src/nova/tests/functional/test_report_client.py:L35)
- `nova.scheduler`: imports `utils` (src/nova/tests/functional/test_report_client.py:L36)
- `nova`: imports `test` (src/nova/tests/functional/test_report_client.py:L37)
- `nova.tests.functional`: imports `fixtures as func_fixtures` (src/nova/tests/functional/test_report_client.py:L38)

## Side Effects

- **network**: rp = self.client._get_resource_provider(self.context, (src/nova/tests/functional/test_report_client.py:L168)
- **network**: rps = self.client.get_providers_in_tree(self.context, (src/nova/tests/functional/test_report_client.py:L171)
- **network**: ptree = self.client.get_provider_tree_and_ensure_root( (src/nova/tests/functional/test_report_client.py:L176)
- **network**: self.client._ensure_resource_provider( (src/nova/tests/functional/test_report_client.py:L181)
- **network**: self.client.set_inventory_for_provider( (src/nova/tests/functional/test_report_client.py:L183)
- **network**: rp = self.client._get_resource_provider(self.context, (src/nova/tests/functional/test_report_client.py:L188)
- **network**: rps = self.client.get_providers_in_tree(self.context, (src/nova/tests/functional/test_report_client.py:L191)
- **network**: [], self.client._get_sharing_providers(self.context, (src/nova/tests/functional/test_report_client.py:L198)
- **network**: self.client._provider_tree.have_aggregates_changed( (src/nova/tests/functional/test_report_client.py:L201)
- **network**: self.client._provider_tree.have_traits_changed( (src/nova/tests/functional/test_report_client.py:L204)
- **network**: resp = self.client.get(inventory_url) (src/nova/tests/functional/test_report_client.py:L211)
- **network**: ptree = self.client.get_provider_tree_and_ensure_root( (src/nova/tests/functional/test_report_client.py:L217)
- **network**: self.client.put_allocations( (src/nova/tests/functional/test_report_client.py:L233)
- **network**: resp = self.client.get('/allocations/%s' % self.instance_uuid) (src/nova/tests/functional/test_report_client.py:L237)
- **network**: resp = self.client.get('/resource_providers/%s/usages' % (src/nova/tests/functional/test_report_client.py:L243)
- **network**: self.client.delete_allocation_for_instance( (src/nova/tests/functional/test_report_client.py:L250)
- **network**: resp = self.client.get('/resource_providers/%s/usages' % (src/nova/tests/functional/test_report_client.py:L254)
- **network**: self.client._refresh_and_get_inventory(self.context, (src/nova/tests/functional/test_report_client.py:L261)
- **network**: self.client.set_inventory_for_provider( (src/nova/tests/functional/test_report_client.py:L269)
- **network**: resp = self.client.get(inventory_url) (src/nova/tests/functional/test_report_client.py:L274)
- **network**: ptree = self.client.get_provider_tree_and_ensure_root( (src/nova/tests/functional/test_report_client.py:L279)
- **network**: with mock.patch.object(self.client._client, 'request', (src/nova/tests/functional/test_report_client.py:L293)
- **network**: self.client._delete_provider(self.compute_uuid, (src/nova/tests/functional/test_report_client.py:L295)
- **network**: self.client.post('/resource_providers', payload, (src/nova/tests/functional/test_report_client.py:L300)
- **network**: self.client.put('/resource_providers/%s' % self.compute_uuid, (src/nova/tests/functional/test_report_client.py:L302)
- **network**: self.client.get('/resource_providers/%s' % self.compute_uuid, (src/nova/tests/functional/test_report_client.py:L305)
- **network**: self.client._ensure_resource_provider( (src/nova/tests/functional/test_report_client.py:L322)
- **network**: self.client.set_inventory_for_provider( (src/nova/tests/functional/test_report_client.py:L324)
- **network**: self.client.set_aggregates_for_provider( (src/nova/tests/functional/test_report_client.py:L328)
- **network**: self.client._ensure_resource_provider( (src/nova/tests/functional/test_report_client.py:L336)
- **network**: self.client.set_inventory_for_provider( (src/nova/tests/functional/test_report_client.py:L339)
- **network**: self.client.set_aggregates_for_provider(self.context, uuid, (src/nova/tests/functional/test_report_client.py:L359)
- **network**: self.client.set_traits_for_provider( (src/nova/tests/functional/test_report_client.py:L362)
- **network**: self.client._ensure_resource_provider(self.context, uuid, (src/nova/tests/functional/test_report_client.py:L369)
- **network**: self.client.set_inventory_for_provider( (src/nova/tests/functional/test_report_client.py:L371)
- **network**: self.client.set_traits_for_provider( (src/nova/tests/functional/test_report_client.py:L383)
- **network**: self.client.set_aggregates_for_provider(self.context, uuid, (src/nova/tests/functional/test_report_client.py:L388)
- **network**: self.client._ensure_resource_provider(self.context, uuids.sip, (src/nova/tests/functional/test_report_client.py:L392)
- **network**: self.client.set_inventory_for_provider( (src/nova/tests/functional/test_report_client.py:L394)
- **network**: self.client.set_traits_for_provider( (src/nova/tests/functional/test_report_client.py:L406)
- **network**: self.client.set_aggregates_for_provider(self.context, uuids.sip, (src/nova/tests/functional/test_report_client.py:L410)
- **network**: self.client._ensure_resource_provider(self.context, uuids.sbw, (src/nova/tests/functional/test_report_client.py:L414)
- **network**: self.client.set_inventory_for_provider( (src/nova/tests/functional/test_report_client.py:L416)
- **network**: self.client.set_traits_for_provider( (src/nova/tests/functional/test_report_client.py:L428)
- **network**: self.client.set_aggregates_for_provider(self.context, uuids.sbw, (src/nova/tests/functional/test_report_client.py:L431)
- **network**: prov_tree = self.client.get_provider_tree_and_ensure_root( (src/nova/tests/functional/test_report_client.py:L435)
- **network**: self.client._ensure_resource_provider(self.context, uuids.cn) (src/nova/tests/functional/test_report_client.py:L462)
- **network**: self.client.set_inventory_for_provider( (src/nova/tests/functional/test_report_client.py:L475)
- **network**: self.client._get_inventory( (src/nova/tests/functional/test_report_client.py:L479)
- **network**: self.client.set_inventory_for_provider, (src/nova/tests/functional/test_report_client.py:L497)
- **network**: self.assertIsNone(self.client._get_inventory( (src/nova/tests/functional/test_report_client.py:L499)
- **network**: self.client._ensure_resource_provider(self.context, uuids.cn) (src/nova/tests/functional/test_report_client.py:L503)
- **network**: self.client._get_inventory( (src/nova/tests/functional/test_report_client.py:L507)
- **network**: self.client.set_inventory_for_provider( (src/nova/tests/functional/test_report_client.py:L511)
- **network**: self.client._get_inventory( (src/nova/tests/functional/test_report_client.py:L515)
- **network**: self.client.set_inventory_for_provider( (src/nova/tests/functional/test_report_client.py:L537)
- **network**: self.client._get_inventory( (src/nova/tests/functional/test_report_client.py:L541)
- **network**: self.client.get('/resource_classes/CUSTOM_BANDWIDTH', (src/nova/tests/functional/test_report_client.py:L546)
- **network**: self.client.set_inventory_for_provider( (src/nova/tests/functional/test_report_client.py:L574)
- **network**: self.client._get_inventory( (src/nova/tests/functional/test_report_client.py:L578)
- **network**: self.client.get('/resource_classes/CUSTOM_BANDWIDTH', (src/nova/tests/functional/test_report_client.py:L582)
- **network**: self.client.set_inventory_for_provider, (src/nova/tests/functional/test_report_client.py:L597)
- **network**: self.client.get('/resource_classes/BOGUS')) (src/nova/tests/functional/test_report_client.py:L600)
- **network**: self.client._get_inventory( (src/nova/tests/functional/test_report_client.py:L603)
- **network**: gen = self.client._provider_tree.data(uuids.cn).generation (src/nova/tests/functional/test_report_client.py:L617)
- **network**: self.client.put( (src/nova/tests/functional/test_report_client.py:L619)
- **network**: self.client._get_inventory( (src/nova/tests/functional/test_report_client.py:L625)
- **network**: self.client.set_inventory_for_provider, (src/nova/tests/functional/test_report_client.py:L650)
- **network**: self.client._get_inventory( (src/nova/tests/functional/test_report_client.py:L655)
- **network**: self.client._refresh_and_get_inventory(self.context, uuids.cn) (src/nova/tests/functional/test_report_client.py:L658)
- **network**: self.client.set_inventory_for_provider( (src/nova/tests/functional/test_report_client.py:L660)
- **network**: self.client._get_inventory( (src/nova/tests/functional/test_report_client.py:L664)
- **network**: self.client.put_allocations( (src/nova/tests/functional/test_report_client.py:L676)
- **network**: self.client._refresh_and_get_inventory(self.context, uuids.cn) (src/nova/tests/functional/test_report_client.py:L690)
- **network**: self.client.set_inventory_for_provider(self.context, uuids.cn, (src/nova/tests/functional/test_report_client.py:L694)
- **network**: self.client._get_inventory( (src/nova/tests/functional/test_report_client.py:L698)
- **network**: self.client.set_inventory_for_provider(self.context, uuids.cn, (src/nova/tests/functional/test_report_client.py:L704)
- **network**: self.client._get_inventory( (src/nova/tests/functional/test_report_client.py:L708)
- **network**: self.client.delete('/allocations/' + uuids.consumer) (src/nova/tests/functional/test_report_client.py:L712)
- **network**: self.client._refresh_and_get_inventory(self.context, uuids.cn) (src/nova/tests/functional/test_report_client.py:L714)
- **network**: self.client.set_inventory_for_provider( (src/nova/tests/functional/test_report_client.py:L716)
- **network**: self.client._get_inventory( (src/nova/tests/functional/test_report_client.py:L720)
- **network**: uuids = set(self.client._provider_tree.get_provider_uuids()) (src/nova/tests/functional/test_report_client.py:L732)
- **network**: cdata = self.client._provider_tree.data(uuid) (src/nova/tests/functional/test_report_client.py:L735)
- **network**: [], self.client._provider_tree.get_provider_uuids()) (src/nova/tests/functional/test_report_client.py:L751)
- **network**: self.client.update_from_provider_tree(self.context, new_tree) (src/nova/tests/functional/test_report_client.py:L753)
- **network**: self.client.update_from_provider_tree(self.context, new_tree) (src/nova/tests/functional/test_report_client.py:L758)
- **network**: self.client.update_from_provider_tree(self.context, new_tree) (src/nova/tests/functional/test_report_client.py:L778)
- **network**: self.client.update_from_provider_tree(self.context, new_tree) (src/nova/tests/functional/test_report_client.py:L821)
- **network**: self.client.update_from_provider_tree, self.context, new_tree) (src/nova/tests/functional/test_report_client.py:L839)
- **network**: self.assertIsNone(self.client._get_inventory( (src/nova/tests/functional/test_report_client.py:L841)
- **network**: self.client._provider_tree.get_provider_uuids()) (src/nova/tests/functional/test_report_client.py:L846)
- **network**: set(self.client._association_refresh_time)) (src/nova/tests/functional/test_report_client.py:L851)
- **network**: self.client.update_from_provider_tree, self.context, new_tree) (src/nova/tests/functional/test_report_client.py:L872)
- **network**: self.client.get_provider_traits( (src/nova/tests/functional/test_report_client.py:L875)
- **network**: self.assertFalse(self.client._provider_tree.exists(uuids.root)) (src/nova/tests/functional/test_report_client.py:L878)
- **network**: self.client.update_from_provider_tree(self.context, new_tree) (src/nova/tests/functional/test_report_client.py:L886)
- **network**: gen = self.client._provider_tree.data(uuids.ssp).generation (src/nova/tests/functional/test_report_client.py:L890)
- **network**: self.assertTrue(self.client.put( (src/nova/tests/functional/test_report_client.py:L891)
- **network**: self.client.update_from_provider_tree, self.context, new_tree) (src/nova/tests/functional/test_report_client.py:L904)
- **network**: self.client.update_from_provider_tree(self.context, new_tree) (src/nova/tests/functional/test_report_client.py:L907)
- **network**: self.client.update_from_provider_tree, (src/nova/tests/functional/test_report_client.py:L920)
- **network**: self.client.get_provider_by_name(self.context, 'ssp') (src/nova/tests/functional/test_report_client.py:L924)
- **network**: self.client.update_from_provider_tree(self.context, new_tree) (src/nova/tests/functional/test_report_client.py:L931)
- **network**: self.client.update_from_provider_tree(self.context, new_tree) (src/nova/tests/functional/test_report_client.py:L937)
- **network**: resp = self.client.get('/resource_providers/%s' % uuid) (src/nova/tests/functional/test_report_client.py:L944)
- **network**: ptree = self.client.get_provider_tree_and_ensure_root( (src/nova/tests/functional/test_report_client.py:L959)
- **network**: self.client._provider_tree.remove(self.compute_uuid) (src/nova/tests/functional/test_report_client.py:L965)
- **network**: [], self.client._provider_tree.get_provider_uuids()) (src/nova/tests/functional/test_report_client.py:L967)
- **network**: aggs = self.client._get_provider_aggregates( (src/nova/tests/functional/test_report_client.py:L971)
- **network**: self.client.aggregate_add_host( (src/nova/tests/functional/test_report_client.py:L977)
- **network**: [], self.client._provider_tree.get_provider_uuids()) (src/nova/tests/functional/test_report_client.py:L984)
- **network**: aggs = self.client._get_provider_aggregates( (src/nova/tests/functional/test_report_client.py:L985)
- **network**: self.client.aggregate_remove_host( (src/nova/tests/functional/test_report_client.py:L991)
- **network**: [], self.client._provider_tree.get_provider_uuids()) (src/nova/tests/functional/test_report_client.py:L994)
- **network**: aggs = self.client._get_provider_aggregates( (src/nova/tests/functional/test_report_client.py:L995)
- **network**: self.client.aggregate_remove_host( (src/nova/tests/functional/test_report_client.py:L1000)
- **network**: [], self.client._provider_tree.get_provider_uuids()) (src/nova/tests/functional/test_report_client.py:L1003)
- **network**: self.client.get_allocation_candidates( (src/nova/tests/functional/test_report_client.py:L1010)
- **network**: ptree = self.client.get_provider_tree_and_ensure_root( (src/nova/tests/functional/test_report_client.py:L1040)
- **network**: self.client.update_from_provider_tree(self.context, ptree) (src/nova/tests/functional/test_report_client.py:L1092)
- **network**: resp = self.client.post( (src/nova/tests/functional/test_report_client.py:L1096)
- **network**: resp = self.client.put( (src/nova/tests/functional/test_report_client.py:L1099)
- **network**: self.client.put( (src/nova/tests/functional/test_report_client.py:L1105)
- **network**: self.client.put('/allocations/' + uuids.cn_inst1, ret[uuids.cn_inst1], (src/nova/tests/functional/test_report_client.py:L1174)
- **network**: self.client.put('/allocations/' + uuids.cn_inst2, ret[uuids.cn_inst2], (src/nova/tests/functional/test_report_client.py:L1176)
- **network**: self.client.put( (src/nova/tests/functional/test_report_client.py:L1179)
- **network**: acs = self.client.get_allocation_candidates( (src/nova/tests/functional/test_report_client.py:L1225)
- **network**: self.client.set_traits_for_provider( (src/nova/tests/functional/test_report_client.py:L1284)
- **network**: acs, _, ver = self.client.get_allocation_candidates( (src/nova/tests/functional/test_report_client.py:L1288)
- **network**: self.client.get_allocations_for_provider_tree, (src/nova/tests/functional/test_report_client.py:L1298)
- **network**: self.assertEqual({}, self.client.get_allocations_for_provider_tree( (src/nova/tests/functional/test_report_client.py:L1304)
- **network**: actual = self.client.get_allocations_for_provider_tree( (src/nova/tests/functional/test_report_client.py:L1311)
- **network**: self.client._reshape, self.context, {}, {}) (src/nova/tests/functional/test_report_client.py:L1321)
- **network**: self.client._reshape(self.context, {}, {}) (src/nova/tests/functional/test_report_client.py:L1326)
- **network**: self.client.clear_provider_cache() (src/nova/tests/functional/test_report_client.py:L1351)
- **network**: ptree = self.client.get_provider_tree_and_ensure_root( (src/nova/tests/functional/test_report_client.py:L1353)
- **network**: allocs = self.client.get_allocations_for_provider_tree( (src/nova/tests/functional/test_report_client.py:L1365)
- **network**: resp = self.client._reshape(self.context, inventories, allocs) (src/nova/tests/functional/test_report_client.py:L1371)
- **network**: self.client._reshape, (src/nova/tests/functional/test_report_client.py:L1379)
- **network**: ptree = self.client.get_provider_tree_and_ensure_root( (src/nova/tests/functional/test_report_client.py:L1392)
- **network**: allocs = self.client.get_allocations_for_provider_tree( (src/nova/tests/functional/test_report_client.py:L1394)
- **network**: self.client.update_from_provider_tree(self.context, ptree, (src/nova/tests/functional/test_report_client.py:L1398)
- **network**: self.client.clear_provider_cache() (src/nova/tests/functional/test_report_client.py:L1411)
- **network**: ptree = self.client.get_provider_tree_and_ensure_root( (src/nova/tests/functional/test_report_client.py:L1413)
- **network**: allocs = self.client.get_allocations_for_provider_tree( (src/nova/tests/functional/test_report_client.py:L1415)
- **network**: self.client.update_from_provider_tree(self.context, ptree, (src/nova/tests/functional/test_report_client.py:L1419)
- **network**: ptree = self.client.get_provider_tree_and_ensure_root( (src/nova/tests/functional/test_report_client.py:L1428)
- **network**: allocs = self.client.get_allocations_for_provider_tree( (src/nova/tests/functional/test_report_client.py:L1430)
- **network**: self.client.update_from_provider_tree(self.context, ptree, (src/nova/tests/functional/test_report_client.py:L1446)
- **network**: ptree = self.client.get_provider_tree_and_ensure_root( (src/nova/tests/functional/test_report_client.py:L1451)
- **network**: allocs = self.client.get_allocations_for_provider_tree( (src/nova/tests/functional/test_report_client.py:L1453)
- **network**: self.client.update_from_provider_tree, self.context, ptree, (src/nova/tests/functional/test_report_client.py:L1494)
- **network**: self.client.update_from_provider_tree(self.context, ptree, (src/nova/tests/functional/test_report_client.py:L1512)
- **network**: ptree = self.client.get_provider_tree_and_ensure_root( (src/nova/tests/functional/test_report_client.py:L1516)
- **network**: allocs = self.client.get_allocations_for_provider_tree( (src/nova/tests/functional/test_report_client.py:L1518)
- **network**: self.client.update_from_provider_tree(self.context, ptree, (src/nova/tests/functional/test_report_client.py:L1533)
- **network**: ptree = self.client.get_provider_tree_and_ensure_root( (src/nova/tests/functional/test_report_client.py:L1535)
- **network**: allocs = self.client.get_allocations_for_provider_tree( (src/nova/tests/functional/test_report_client.py:L1537)
- **network**: ptree = self.client.get_provider_tree_and_ensure_root( (src/nova/tests/functional/test_report_client.py:L1545)
- **network**: allocs = self.client.get_allocations_for_provider_tree( (src/nova/tests/functional/test_report_client.py:L1547)
- **network**: self.client.update_from_provider_tree, (src/nova/tests/functional/test_report_client.py:L1574)
- **network**: self.assertEqual(0, len(self.client._provider_tree.roots)) (src/nova/tests/functional/test_report_client.py:L1585)
- **global-mutation**: CONF = conf.CONF (src/nova/tests/functional/test_report_client.py:L41)
- **global-mutation**: MOTSUC_BANDWIDTH={ (src/nova/tests/functional/test_report_client.py:L829)
- **global-mutation**: CUSTOM_BANDWIDTH={ (src/nova/tests/functional/test_report_client.py:L857)
- **global-mutation**: SRIOV_NET_VF={'total': 2}) (src/nova/tests/functional/test_report_client.py:L1043)
- **global-mutation**: CUSTOM_PCPU={'total': 8}, (src/nova/tests/functional/test_report_client.py:L1057)
- **global-mutation**: SRIOV_NET_VF={'total': 4}) (src/nova/tests/functional/test_report_client.py:L1058)
- **global-mutation**: CUSTOM_FOO={'total': 10}), (src/nova/tests/functional/test_report_client.py:L1361)
- **global-mutation**: CUSTOM_FOO={'total': 10})) (src/nova/tests/functional/test_report_client.py:L1438)
- **global-mutation**: CUSTOM_FOO={'total': 10})) (src/nova/tests/functional/test_report_client.py:L1559)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as kse (src/nova/tests/functional/test_report_client.py:L18)
- **sink** (`db-write`): msgre = (".*update conflict: Inventory for 'SRIOV_NET_VF' on " (src/nova/tests/functional/test_report_client.py:L691)
- **sink** (`db-write`): req_spec.root_required.update(data['root_required']) (src/nova/tests/functional/test_report_client.py:L1281)
- **sink** (`db-write`): req_spec.root_forbidden.update(data['root_forbidden']) (src/nova/tests/functional/test_report_client.py:L1282)

