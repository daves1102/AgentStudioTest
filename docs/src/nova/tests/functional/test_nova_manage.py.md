# src/nova/tests/functional/test_nova_manage.py

## Overview

This file implements the `test_nova_manage` module, defining 15 classs, 6 constants, 5 fields, 5 functions, 96 methods, 6 staticmethods, 27 imports, 9 side effects, 23 security surface entries.

Lines: total 2935, code 2056, comment 452, blank 427

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L43–L43` |
| `INCOMPLETE_CONSUMER_ID` | constant | — | exported | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L44–L44` |
| `NovaManageDBIronicTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L47–L177` |
| `NovaManageDBIronicTest.setUp` | method | (self) | public | not declared | 6/120 | `src/nova/tests/functional/test_nova_manage.py:L48–L177` |
| `TestIronicComputeNodeMove` | class | — | exported | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L180–L227` |
| `TestIronicComputeNodeMove.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_nova_manage.py:L183–L188` |
| `TestIronicComputeNodeMove.test_ironic_compute_node_move_success` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/test_nova_manage.py:L190–L207` |
| `TestIronicComputeNodeMove.test_ironic_compute_node_move_raise_not_forced_down` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_nova_manage.py:L209–L215` |
| `TestIronicComputeNodeMove.test_ironic_compute_node_move_raise_forced_down` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_nova_manage.py:L217–L227` |
| `NovaManageCellV2Test` | class | — | exported | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L230–L311` |
| `NovaManageCellV2Test.setUp` | method | (self) | public | not declared | 1/28 | `src/nova/tests/functional/test_nova_manage.py:L231–L260` |
| `NovaManageCellV2Test.test_delete_host` | method | (self) | public | not declared | 3/13 | `src/nova/tests/functional/test_nova_manage.py:L262–L280` |
| `NovaManageCellV2Test.test_delete_cell_force_unmaps_computes` | method | (self) | public | not declared | 2/18 | `src/nova/tests/functional/test_nova_manage.py:L282–L311` |
| `TestNovaManageVolumeAttachmentRefresh` | class | — | exported | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L314–L573` |
| `TestNovaManageVolumeAttachmentRefresh.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L320–L320` |
| `TestNovaManageVolumeAttachmentRefresh.setUp` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/test_nova_manage.py:L322–L337` |
| `TestNovaManageVolumeAttachmentRefresh._assert_instance_actions` | method | (self, server) | private | not declared | 1/8 | `src/nova/tests/functional/test_nova_manage.py:L339–L346` |
| `TestNovaManageVolumeAttachmentRefresh.test_refresh` | method | (self) | public | not declared | 1/36 | `src/nova/tests/functional/test_nova_manage.py:L348–L404` |
| `TestNovaManageVolumeAttachmentRefresh.test_refresh_rpcapi_remove_volume_connection_rollback` | method | (self) | public | not declared | 1/33 | `src/nova/tests/functional/test_nova_manage.py:L406–L450` |
| `TestNovaManageVolumeAttachmentRefresh.test_refresh_cinder_attachment_update_rollback` | method | (self) | public | not declared | 1/38 | `src/nova/tests/functional/test_nova_manage.py:L452–L505` |
| `TestNovaManageVolumeAttachmentRefresh.test_refresh_pre_cinderv3_without_attachment_id` | method | (self) | public | not declared | 1/27 | `src/nova/tests/functional/test_nova_manage.py:L507–L550` |
| `TestNovaManageVolumeAttachmentRefresh.test_show_multiattach_volume` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/test_nova_manage.py:L552–L573` |
| `TestNovaManagePlacementHealAllocations` | class | — | exported | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L576–L1148` |
| `TestNovaManagePlacementHealAllocations.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L581–L581` |
| `TestNovaManagePlacementHealAllocations.NUMBER_OF_CELLS` | constant | — | public | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L583–L583` |
| `TestNovaManagePlacementHealAllocations.setUp` | method | (self) | public | not declared | 3/14 | `src/nova/tests/functional/test_nova_manage.py:L585–L600` |
| `TestNovaManagePlacementHealAllocations._boot_and_remove_allocations` | method | (self, flavor, hostname, volume_backed=False) | private | `server, rp_uuid` (src/nova/tests/functional/test_nova_manage.py:L652) | 3/34 | `src/nova/tests/functional/test_nova_manage.py:L602–L652` |
| `TestNovaManagePlacementHealAllocations._assert_healed` | method | (self, server, rp_uuid) | private | not declared | 1/7 | `src/nova/tests/functional/test_nova_manage.py:L654–L660` |
| `TestNovaManagePlacementHealAllocations.test_heal_allocations_paging` | method | (self) | public | not declared | 3/19 | `src/nova/tests/functional/test_nova_manage.py:L662–L696` |
| `TestNovaManagePlacementHealAllocations.test_heal_allocations_paging_max_count_more_than_num_instances` | method | (self) | public | not declared | 3/12 | `src/nova/tests/functional/test_nova_manage.py:L698–L712` |
| `TestNovaManagePlacementHealAllocations.test_heal_allocations_paging_more_instances_remain` | method | (self) | public | not declared | 3/16 | `src/nova/tests/functional/test_nova_manage.py:L714–L739` |
| `TestNovaManagePlacementHealAllocations.test_heal_allocations_unlimited` | method | (self) | public | not declared | 3/12 | `src/nova/tests/functional/test_nova_manage.py:L741–L755` |
| `TestNovaManagePlacementHealAllocations.test_heal_allocations_shelved` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/test_nova_manage.py:L757–L777` |
| `TestNovaManagePlacementHealAllocations.test_heal_allocations_task_in_progress` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/test_nova_manage.py:L779–L802` |
| `TestNovaManagePlacementHealAllocations.test_heal_allocations_task_in_progress.fake_pause_instance` | function | (_self, ctxt, instance, *a, **kw) | public | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L786–L787` |
| `TestNovaManagePlacementHealAllocations.test_heal_allocations_ignore_deleted_server` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_nova_manage.py:L804–L815` |
| `TestNovaManagePlacementHealAllocations.test_heal_allocations_update_sentinel_consumer` | method | (self) | public | not declared | 1/41 | `src/nova/tests/functional/test_nova_manage.py:L817–L875` |
| `TestNovaManagePlacementHealAllocations.test_heal_allocations_dry_run` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_nova_manage.py:L877–L889` |
| `TestNovaManagePlacementHealAllocations.test_heal_allocations_specific_instance` | method | (self) | public | not declared | 1/38 | `src/nova/tests/functional/test_nova_manage.py:L891–L948` |
| `TestNovaManagePlacementHealAllocations.test_heal_allocations_specific_cell` | method | (self) | public | not declared | 1/23 | `src/nova/tests/functional/test_nova_manage.py:L950–L987` |
| `TestNovaManagePlacementHealAllocations.test_heal_allocations_force_allocation` | method | (self) | public | not declared | 1/72 | `src/nova/tests/functional/test_nova_manage.py:L989–L1102` |
| `TestNovaManagePlacementHealAllocations.test_instance_with_vgpu_is_blocked` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/test_nova_manage.py:L1104–L1125` |
| `TestNovaManagePlacementHealAllocations.test_instance_with_cyborg_dev_profile_is_blocked` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/test_nova_manage.py:L1127–L1148` |
| `TestNovaManagePlacementHealPortAllocations` | class | — | exported | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L1151–L1717` |
| `TestNovaManagePlacementHealPortAllocations.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_nova_manage.py:L1155–L1167` |
| `TestNovaManagePlacementHealPortAllocations.setUp.print_stdout_on_fail` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L1163–L1165` |
| `TestNovaManagePlacementHealPortAllocations._add_resource_request_to_a_bound_port` | method | (self, port_id, resource_request) | private | not declared | 1/3 | `src/nova/tests/functional/test_nova_manage.py:L1169–L1175` |
| `TestNovaManagePlacementHealPortAllocations._get_default_resource_request` | method | (port_uuid) | private | `{ "resources": { orc.NET_BW_IGR_KILOBIT_PER_SEC: 1000, orc.NET_BW_EGR_KILOBIT_PER_SEC: 1000}, "required": ["CUSTOM_PHYSNET2", "CUSTOM_VNIC_TYPE_NORMAL"] }` (src/nova/tests/functional/test_nova_manage.py:L1179) | 1/7 | `src/nova/tests/functional/test_nova_manage.py:L1178–L1184` |
| `TestNovaManagePlacementHealPortAllocations._create_server_with_missing_port_alloc` | method | (self, ports, resource_request=None) | private | `server, updated_ports` (src/nova/tests/functional/test_nova_manage.py:L1207) | 5/15 | `src/nova/tests/functional/test_nova_manage.py:L1186–L1207` |
| `TestNovaManagePlacementHealPortAllocations._get_resource_request` | method | (self, port) | private | `res_req` (src/nova/tests/functional/test_nova_manage.py:L1211) | 1/3 | `src/nova/tests/functional/test_nova_manage.py:L1209–L1211` |
| `TestNovaManagePlacementHealPortAllocations._assert_placement_updated` | method | (self, server, ports) | private | not declared | 3/19 | `src/nova/tests/functional/test_nova_manage.py:L1213–L1240` |
| `TestNovaManagePlacementHealPortAllocations._assert_port_updated` | method | (self, port_uuid) | private | not declared | 1/6 | `src/nova/tests/functional/test_nova_manage.py:L1242–L1247` |
| `TestNovaManagePlacementHealPortAllocations._assert_ports_updated` | method | (self, ports) | private | not declared | 2/3 | `src/nova/tests/functional/test_nova_manage.py:L1249–L1251` |
| `TestNovaManagePlacementHealPortAllocations._assert_placement_not_updated` | method | (self, server) | private | not declared | 1/5 | `src/nova/tests/functional/test_nova_manage.py:L1253–L1257` |
| `TestNovaManagePlacementHealPortAllocations._assert_port_not_updated` | method | (self, port_uuid) | private | not declared | 1/4 | `src/nova/tests/functional/test_nova_manage.py:L1259–L1262` |
| `TestNovaManagePlacementHealPortAllocations._assert_ports_not_updated` | method | (self, ports) | private | not declared | 2/3 | `src/nova/tests/functional/test_nova_manage.py:L1264–L1266` |
| `TestNovaManagePlacementHealPortAllocations.test_heal_port_allocation_only` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_nova_manage.py:L1268–L1290` |
| `TestNovaManagePlacementHealPortAllocations.test_heal_port_allocation_dry_run` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/test_nova_manage.py:L1292–L1309` |
| `TestNovaManagePlacementHealPortAllocations.test_no_healing_is_needed` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/test_nova_manage.py:L1311–L1340` |
| `TestNovaManagePlacementHealPortAllocations.test_skip_heal_port_allocation` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_nova_manage.py:L1342–L1359` |
| `TestNovaManagePlacementHealPortAllocations.test_skip_heal_port_allocation_but_heal_the_rest` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/test_nova_manage.py:L1361–L1392` |
| `TestNovaManagePlacementHealPortAllocations.test_heal_port_allocation_and_project_id` | method | (self) | public | not declared | 1/26 | `src/nova/tests/functional/test_nova_manage.py:L1394–L1431` |
| `TestNovaManagePlacementHealPortAllocations.test_heal_allocation_create_allocation_with_port_allocation` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/test_nova_manage.py:L1433–L1460` |
| `TestNovaManagePlacementHealPortAllocations._get_too_big_resource_request` | method | — | private | `{ "resources": { orc.NET_BW_IGR_KILOBIT_PER_SEC: 100000000000, orc.NET_BW_EGR_KILOBIT_PER_SEC: 1000}, "required": ["CUSTOM_PHYSNET2", "CUSTOM_VNIC_TYPE_NORMAL"] }` (src/nova/tests/functional/test_nova_manage.py:L1466) | 1/8 | `src/nova/tests/functional/test_nova_manage.py:L1463–L1472` |
| `TestNovaManagePlacementHealPortAllocations.test_heal_port_allocation_not_enough_resources_for_port` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_nova_manage.py:L1474–L1491` |
| `TestNovaManagePlacementHealPortAllocations._get_ambiguous_resource_request` | method | — | private | `{ "resources": { orc.NET_BW_IGR_KILOBIT_PER_SEC: 1000, orc.NET_BW_EGR_KILOBIT_PER_SEC: 1000}, "required": ["CUSTOM_PHYSNET2", "CUSTOM_VNIC_TYPE_DIRECT"] }` (src/nova/tests/functional/test_nova_manage.py:L1495) | 1/8 | `src/nova/tests/functional/test_nova_manage.py:L1494–L1501` |
| `TestNovaManagePlacementHealPortAllocations.test_heal_port_allocation_ambiguous_candidates` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/test_nova_manage.py:L1503–L1530` |
| `TestNovaManagePlacementHealPortAllocations.test_heal_port_allocation_neutron_unavailable_during_port_query` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/test_nova_manage.py:L1532–L1550` |
| `TestNovaManagePlacementHealPortAllocations.test_heal_port_allocation_neutron_unavailable` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/test_nova_manage.py:L1552–L1571` |
| `TestNovaManagePlacementHealPortAllocations.test_heal_multiple_port_allocations_rollback_success` | method | (self) | public | not declared | 1/20 | `src/nova/tests/functional/test_nova_manage.py:L1573–L1610` |
| `TestNovaManagePlacementHealPortAllocations.test_heal_multiple_port_allocations_rollback_success.fake_update_port` | function | (*args, **kwargs) | public | `orig_update_port(*args, **kwargs)` (src/nova/tests/functional/test_nova_manage.py:L1588) | — | `src/nova/tests/functional/test_nova_manage.py:L1585–L1591` |
| `TestNovaManagePlacementHealPortAllocations.test_heal_multiple_port_allocations_rollback_fails` | method | (self) | public | not declared | 1/32 | `src/nova/tests/functional/test_nova_manage.py:L1612–L1674` |
| `TestNovaManagePlacementHealPortAllocations.test_heal_multiple_port_allocations_rollback_fails.fake_update_port` | function | (port_id, *args, **kwargs) | public | `orig_update_port(port_id, *args, **kwargs)` (src/nova/tests/functional/test_nova_manage.py:L1630) | — | `src/nova/tests/functional/test_nova_manage.py:L1625–L1635` |
| `TestNovaManagePlacementHealPortAllocations.test_heal_port_allocation_placement_unavailable_during_a_c` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/test_nova_manage.py:L1676–L1693` |
| `TestNovaManagePlacementHealPortAllocations.test_heal_port_allocation_placement_unavailable_during_update` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/test_nova_manage.py:L1695–L1717` |
| `TestNovaManagePlacementHealPortAllocationsExtended` | class | — | exported | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L1720–L1746` |
| `TestNovaManagePlacementHealPortAllocationsExtended.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_nova_manage.py:L1730–L1733` |
| `TestNovaManagePlacementHealPortAllocationsExtended._get_resource_request` | method | (self, port) | private | `res_req[0]` (src/nova/tests/functional/test_nova_manage.py:L1739) | 1/4 | `src/nova/tests/functional/test_nova_manage.py:L1735–L1739` |
| `TestNovaManagePlacementHealPortAllocationsExtended._assert_port_updated` | method | (self, port_uuid) | private | not declared | 1/6 | `src/nova/tests/functional/test_nova_manage.py:L1741–L1746` |
| `TestNovaManagePlacementHealPortAllocationsMultiGroup` | class | — | exported | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L1749–L1884` |
| `TestNovaManagePlacementHealPortAllocationsMultiGroup.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_nova_manage.py:L1757–L1760` |
| `TestNovaManagePlacementHealPortAllocationsMultiGroup._get_default_resource_request` | method | (port_uuid) | private | `{ "request_groups": [ { "id": g1, "resources": { orc.NET_BW_IGR_KILOBIT_PER_SEC: 1000, orc.NET_BW_EGR_KILOBIT_PER_SEC: 1000}, "required": [ "CUSTOM_PHYSNET2", "CUSTOM_VNIC_TYPE_NORMAL" ] }, { "id": g2` (src/nova/tests/functional/test_nova_manage.py:L1767) | 1/24 | `src/nova/tests/functional/test_nova_manage.py:L1763–L1787` |
| `TestNovaManagePlacementHealPortAllocationsMultiGroup._get_too_big_resource_request` | method | — | private | `{ "request_groups": [ { "id": uuids.g1, "resources": { orc.NET_BW_IGR_KILOBIT_PER_SEC: 10000000000000, orc.NET_BW_EGR_KILOBIT_PER_SEC: 1000}, "required": [ "CUSTOM_PHYSNET2", "CUSTOM_VNIC_TYPE_NORMAL"` (src/nova/tests/functional/test_nova_manage.py:L1793) | 1/22 | `src/nova/tests/functional/test_nova_manage.py:L1790–L1813` |
| `TestNovaManagePlacementHealPortAllocationsMultiGroup._get_ambiguous_resource_request` | method | — | private | `{ "request_groups": [ { "id": uuids.g1, "resources": { orc.NET_BW_IGR_KILOBIT_PER_SEC: 1000, orc.NET_BW_EGR_KILOBIT_PER_SEC: 1000}, "required": [ "CUSTOM_PHYSNET2", "CUSTOM_VNIC_TYPE_DIRECT" ] }, ], "` (src/nova/tests/functional/test_nova_manage.py:L1820) | 1/15 | `src/nova/tests/functional/test_nova_manage.py:L1816–L1833` |
| `TestNovaManagePlacementHealPortAllocationsMultiGroup._assert_placement_updated` | method | (self, server, ports) | private | not declared | 6/28 | `src/nova/tests/functional/test_nova_manage.py:L1835–L1871` |
| `TestNovaManagePlacementHealPortAllocationsMultiGroup._assert_port_updated` | method | (self, port_uuid) | private | not declared | 1/12 | `src/nova/tests/functional/test_nova_manage.py:L1873–L1884` |
| `TestNovaManagePlacementSyncAggregates` | class | — | exported | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L1887–L1970` |
| `TestNovaManagePlacementSyncAggregates.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L1892–L1892` |
| `TestNovaManagePlacementSyncAggregates.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_nova_manage.py:L1894–L1906` |
| `TestNovaManagePlacementSyncAggregates._create_aggregate` | method | (self, name) | private | `self.admin_api.post_aggregate({'aggregate': {'name': name}})` (src/nova/tests/functional/test_nova_manage.py:L1909) | 1/2 | `src/nova/tests/functional/test_nova_manage.py:L1908–L1909` |
| `TestNovaManagePlacementSyncAggregates.test_sync_aggregates` | method | (self) | public | not declared | 3/34 | `src/nova/tests/functional/test_nova_manage.py:L1911–L1970` |
| `TestNovaManagePlacementAudit` | class | — | exported | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L1973–L2119` |
| `TestNovaManagePlacementAudit.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L1978–L1978` |
| `TestNovaManagePlacementAudit.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_nova_manage.py:L1980–L1995` |
| `TestNovaManagePlacementAudit.test_audit_orphaned_allocation_from_instance_delete` | method | (self) | public | not declared | 1/30 | `src/nova/tests/functional/test_nova_manage.py:L1997–L2044` |
| `TestNovaManagePlacementAudit.test_audit_orphaned_allocations_from_confirmed_resize` | method | (self) | public | not declared | 1/49 | `src/nova/tests/functional/test_nova_manage.py:L2046–L2119` |
| `TestDBArchiveDeletedRows` | class | — | exported | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L2122–L2163` |
| `TestDBArchiveDeletedRows.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_nova_manage.py:L2125–L2130` |
| `TestDBArchiveDeletedRows.test_archive_instance_group_members` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/test_nova_manage.py:L2132–L2163` |
| `TestDBArchiveDeletedRowsTaskLog` | class | — | exported | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L2166–L2260` |
| `TestDBArchiveDeletedRowsTaskLog.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_nova_manage.py:L2171–L2182` |
| `TestDBArchiveDeletedRowsTaskLog.test_archive_task_logs` | method | (self) | public | not declared | 3/23 | `src/nova/tests/functional/test_nova_manage.py:L2184–L2236` |
| `TestDBArchiveDeletedRowsTaskLog.test_archive_before` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/test_nova_manage.py:L2238–L2260` |
| `TestDBArchiveDeletedRowsMultiCell` | class | — | exported | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L2263–L2360` |
| `TestDBArchiveDeletedRowsMultiCell.NUMBER_OF_CELLS` | constant | — | public | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L2266–L2266` |
| `TestDBArchiveDeletedRowsMultiCell.setUp` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/test_nova_manage.py:L2268–L2292` |
| `TestDBArchiveDeletedRowsMultiCell.test_archive_deleted_rows` | method | (self) | public | not declared | 10/54 | `src/nova/tests/functional/test_nova_manage.py:L2294–L2360` |
| `TestDBArchiveDeletedRowsMultiCellTaskLog` | class | — | exported | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L2363–L2473` |
| `TestDBArchiveDeletedRowsMultiCellTaskLog.NUMBER_OF_CELLS` | constant | — | public | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L2368–L2368` |
| `TestDBArchiveDeletedRowsMultiCellTaskLog.setUp` | method | (self) | public | not declared | 1/21 | `src/nova/tests/functional/test_nova_manage.py:L2370–L2400` |
| `TestDBArchiveDeletedRowsMultiCellTaskLog.test_archive_task_logs` | method | (self) | public | not declared | 5/40 | `src/nova/tests/functional/test_nova_manage.py:L2402–L2473` |
| `TestNovaManageLimits` | class | — | exported | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L2476–L2935` |
| `TestNovaManageLimits.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L2479–L2479` |
| `TestNovaManageLimits.NUMBER_OF_CELLS` | constant | — | public | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L2480–L2480` |
| `TestNovaManageLimits.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_nova_manage.py:L2482–L2493` |
| `TestNovaManageLimits.test_migrate_to_unified_limits_no_db_access` | method | (self, mock_get_defaults) | public | not declared | 1/4 | `src/nova/tests/functional/test_nova_manage.py:L2496–L2499` |
| `TestNovaManageLimits.test_migrate_to_unified_limits_unexpected_error` | method | (self, mock_sdk) | public | not declared | 1/14 | `src/nova/tests/functional/test_nova_manage.py:L2502–L2534` |
| `TestNovaManageLimits.test_migrate_to_unified_limits_already_exists` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/test_nova_manage.py:L2536–L2562` |
| `TestNovaManageLimits.test_migrate_to_unified_limits` | method | (self) | public | not declared | 5/96 | `src/nova/tests/functional/test_nova_manage.py:L2564–L2705` |
| `TestNovaManageLimits._add_to_inventory` | method | (self, resource, trait=None) | private | not declared | 3/11 | `src/nova/tests/functional/test_nova_manage.py:L2707–L2718` |
| `TestNovaManageLimits._create_flavor_and_add_to_inventory` | method | (self, resource) | private | `flavor_id` (src/nova/tests/functional/test_nova_manage.py:L2726) | 1/6 | `src/nova/tests/functional/test_nova_manage.py:L2720–L2726` |
| `TestNovaManageLimits.test_migrate_to_unified_limits_flavor_scanning` | method | (self) | public | not declared | 4/34 | `src/nova/tests/functional/test_nova_manage.py:L2728–L2790` |
| `TestNovaManageLimits.test_migrate_to_unified_limits_flavor_scanning_resource_request` | method | (self) | public | not declared | 1/20 | `src/nova/tests/functional/test_nova_manage.py:L2792–L2820` |
| `TestNovaManageLimits.test_migrate_to_unified_limits_flavor_scanning_project` | method | (self) | public | not declared | 2/18 | `src/nova/tests/functional/test_nova_manage.py:L2822–L2854` |
| `TestNovaManageLimits.test_migrate_to_unified_limits_no_embedded_flavor_scan` | method | (self) | public | not declared | 3/21 | `src/nova/tests/functional/test_nova_manage.py:L2859–L2896` |
| `TestNovaManageLimits.test_migrate_to_unified_limits_flavor_scanning_down_cell` | method | (self) | public | not declared | 2/20 | `src/nova/tests/functional/test_nova_manage.py:L2898–L2935` |
| `TestNovaManageLimits.test_migrate_to_unified_limits_flavor_scanning_down_cell.fake_get_instance_objects_sorted` | function | (*args, **kwargs) | public | `instances, [uuids.down_cell]` (src/nova/tests/functional/test_nova_manage.py:L2906) | — | `src/nova/tests/functional/test_nova_manage.py:L2903–L2906` |
| `TestNovaManagePlacementHealPortAllocations._get_default_resource_request` | staticmethod | — | private | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L1177–L1184` |
| `TestNovaManagePlacementHealPortAllocations._get_too_big_resource_request` | staticmethod | — | private | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L1462–L1472` |
| `TestNovaManagePlacementHealPortAllocations._get_ambiguous_resource_request` | staticmethod | — | private | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L1493–L1501` |
| `TestNovaManagePlacementHealPortAllocationsMultiGroup._get_default_resource_request` | staticmethod | — | private | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L1762–L1787` |
| `TestNovaManagePlacementHealPortAllocationsMultiGroup._get_too_big_resource_request` | staticmethod | — | private | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L1789–L1813` |
| `TestNovaManagePlacementHealPortAllocationsMultiGroup._get_ambiguous_resource_request` | staticmethod | — | private | not declared | — | `src/nova/tests/functional/test_nova_manage.py:L1815–L1833` |

## Dependencies

- `import collections` (src/nova/tests/functional/test_nova_manage.py:L14)
- `import datetime` (src/nova/tests/functional/test_nova_manage.py:L15)
- `io`: imports `StringIO` (src/nova/tests/functional/test_nova_manage.py:L16)
- `import os.path` (src/nova/tests/functional/test_nova_manage.py:L17)
- `unittest`: imports `mock` (src/nova/tests/functional/test_nova_manage.py:L18)
- `import fixtures` (src/nova/tests/functional/test_nova_manage.py:L20)
- `neutronclient.common`: imports `exceptions as neutron_client_exc` (src/nova/tests/functional/test_nova_manage.py:L21)
- `import os_resource_classes as orc` (src/nova/tests/functional/test_nova_manage.py:L22)
- `oslo_db`: imports `exception as oslo_db_exc` (src/nova/tests/functional/test_nova_manage.py:L23)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/functional/test_nova_manage.py:L24)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/test_nova_manage.py:L25)
- `oslo_utils`: imports `timeutils` (src/nova/tests/functional/test_nova_manage.py:L26)
- `nova.cmd`: imports `manage` (src/nova/tests/functional/test_nova_manage.py:L28)
- `nova.compute`: imports `instance_list as list_instances` (src/nova/tests/functional/test_nova_manage.py:L29)
- `nova`: imports `config` (src/nova/tests/functional/test_nova_manage.py:L30)
- `nova`: imports `context` (src/nova/tests/functional/test_nova_manage.py:L31)
- `nova`: imports `exception` (src/nova/tests/functional/test_nova_manage.py:L32)
- `nova.network`: imports `constants` (src/nova/tests/functional/test_nova_manage.py:L33)
- `nova`: imports `objects` (src/nova/tests/functional/test_nova_manage.py:L34)
- `nova`: imports `test` (src/nova/tests/functional/test_nova_manage.py:L35)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/test_nova_manage.py:L36)
- `nova.tests.functional.api`: imports `client as api_client` (src/nova/tests/functional/test_nova_manage.py:L37)
- `nova.tests.functional`: imports `fixtures as func_fixtures` (src/nova/tests/functional/test_nova_manage.py:L38)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_nova_manage.py:L39)
- `nova.tests.functional`: imports `test_servers_resource_request as test_res_req` (src/nova/tests/functional/test_nova_manage.py:L40)
- `nova`: imports `utils as nova_utils` (src/nova/tests/functional/test_nova_manage.py:L41)
- `import sys` (src/nova/tests/functional/test_nova_manage.py:L1164)

## Side Effects

- **file-io**: self.connector_path = os.path.join(self.tmpdir, 'fake_connector') (src/nova/tests/functional/test_nova_manage.py:L335)
- **file-io**: with open(self.connector_path, 'w') as fh: (src/nova/tests/functional/test_nova_manage.py:L336)
- **network**: @mock.patch('nova.utils.get_sdk_adapter') (src/nova/tests/functional/test_nova_manage.py:L2501)
- **global-mutation**: CONF = config.CONF (src/nova/tests/functional/test_nova_manage.py:L43)
- **global-mutation**: INCOMPLETE_CONSUMER_ID = '00000000-0000-0000-0000-000000000000' (src/nova/tests/functional/test_nova_manage.py:L44)
- **global-mutation**: NUMBER_OF_CELLS = 2 (src/nova/tests/functional/test_nova_manage.py:L583)
- **global-mutation**: NUMBER_OF_CELLS = 2 (src/nova/tests/functional/test_nova_manage.py:L2266)
- **global-mutation**: NUMBER_OF_CELLS = 2 (src/nova/tests/functional/test_nova_manage.py:L2368)
- **global-mutation**: NUMBER_OF_CELLS = 2 (src/nova/tests/functional/test_nova_manage.py:L2480)

## Security Surface

- **sink** (`file-write`): with open(self.connector_path, 'w') as fh: (src/nova/tests/functional/test_nova_manage.py:L336)
- **sink** (`db-write`): self.assertIn('[dry-run] Update allocations for instance %s' (src/nova/tests/functional/test_nova_manage.py:L862)
- **sink** (`db-write`): 3. update the allocations to change MEMORY_MB to not match the flavor (src/nova/tests/functional/test_nova_manage.py:L995)
- **sink** (`db-write`): '[dry-run] Update allocations for instance', (src/nova/tests/functional/test_nova_manage.py:L1073)
- **sink** (`file-write`): sys.stderr.write(self.output.getvalue()) (src/nova/tests/functional/test_nova_manage.py:L1165)
- **sink** (`db-write`): '[dry-run] Update allocations for instance', (src/nova/tests/functional/test_nova_manage.py:L1304)
- **sink** (`db-write`): 'Unable to update ports with allocations', (src/nova/tests/functional/test_nova_manage.py:L1569)
- **sink** (`db-write`): """Test neutron port update rollback happy case. Try to heal two ports (src/nova/tests/functional/test_nova_manage.py:L1574)
- **sink** (`db-write`): and make the second port update to fail in neutron. Assert that the (src/nova/tests/functional/test_nova_manage.py:L1575)
- **sink** (`db-write`): first port update rolled back successfully. (src/nova/tests/functional/test_nova_manage.py:L1576)
- **sink** (`db-write`): update = [] (src/nova/tests/functional/test_nova_manage.py:L1583)
- **sink** (`db-write`): if len(update) == 0 or len(update) > 1: (src/nova/tests/functional/test_nova_manage.py:L1586)
- **sink** (`db-write`): update.append(True) (src/nova/tests/functional/test_nova_manage.py:L1587)
- **sink** (`db-write`): if len(update) == 1: (src/nova/tests/functional/test_nova_manage.py:L1589)
- **sink** (`db-write`): update.append(True) (src/nova/tests/functional/test_nova_manage.py:L1590)
- **sink** (`db-write`): 'Rolling back port update', (src/nova/tests/functional/test_nova_manage.py:L1605)
- **sink** (`db-write`): 'Unable to update ports with allocations', (src/nova/tests/functional/test_nova_manage.py:L1608)
- **sink** (`db-write`): """Test neutron port update rollback error case. Try to heal three (src/nova/tests/functional/test_nova_manage.py:L1613)
- **sink** (`db-write`): ports and make the last port update to fail in neutron. Also make the (src/nova/tests/functional/test_nova_manage.py:L1614)
- **sink** (`db-write`): rollback of the second port update to fail. (src/nova/tests/functional/test_nova_manage.py:L1615)
- **sink** (`db-write`): 'Rolling back port update', (src/nova/tests/functional/test_nova_manage.py:L1660)
- **sink** (`db-write`): 'Failed to update neutron ports with allocation keys and the ' (src/nova/tests/functional/test_nova_manage.py:L1663)
- **sink** (`db-write`): 'Rolling back port update', (src/nova/tests/functional/test_nova_manage.py:L1715)

