# src/nova/tests/unit/virt/libvirt/test_migration.py

## Overview

This file implements the `test_migration` module, defining 2 classs, 5 functions, 78 methods, 20 imports.

Lines: total 1927, code 1717, comment 35, blank 175

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_normalize` | function | (xml_str) | unexported | `etree.tostring( etree.fromstring(xml_str), pretty_print=True, encoding="unicode", ).strip()` (src/nova/tests/unit/virt/libvirt/test_migration.py:L40) | 1/6 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L39–L44` |
| `UtilityMigrationTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_migration.py:L47–L1525` |
| `UtilityMigrationTestCase.test_graphics_listen_addrs` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L49–L56` |
| `UtilityMigrationTestCase.test_graphics_listen_addrs_empty` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L58–L61` |
| `UtilityMigrationTestCase.test_graphics_listen_addrs_spice` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L63–L69` |
| `UtilityMigrationTestCase.test_graphics_listen_addrs_vnc` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L71–L77` |
| `UtilityMigrationTestCase._test_get_updated_guest_xml` | method | (self, data, check_cpu_shared_set, mock_volume, mock_serial, mock_graphics, mock_perf_events_xml, mock_memory_backing, mock_update_cpu_shared_set, mock_remove_cpu_shared_set, mock_tostring) | private | not declared | 2/21 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L87–L108` |
| `UtilityMigrationTestCase.test_get_updated_guest_xml` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L110–L112` |
| `UtilityMigrationTestCase.test_get_updated_guest_xml_dst_cpu_shared_set_info_unset` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L114–L123` |
| `UtilityMigrationTestCase.test_get_updated_guest_xml_dst_cpu_shared_set_info_unset.check_cpu_shared_set` | function | (mock_update_cpu_shared_set, mock_remove_cpu_shared_set) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_migration.py:L117–L121` |
| `UtilityMigrationTestCase.test_get_updated_guest_xml_dst_cpu_shared_set_info_set_to_none` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L125–L132` |
| `UtilityMigrationTestCase.test_get_updated_guest_xml_dst_cpu_shared_set_info_set_to_none.set_dst_cpu_shared_set_info` | function | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_migration.py:L128–L129` |
| `UtilityMigrationTestCase.test_get_updated_guest_xml_dst_cpu_shared_set_info_set_to_empty` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L134–L144` |
| `UtilityMigrationTestCase.test_get_updated_guest_xml_dst_cpu_shared_set_info_set_to_empty.check_cpu_shared_set` | function | (mock_update_cpu_shared_set, mock_remove_cpu_shared_set) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_migration.py:L138–L142` |
| `UtilityMigrationTestCase.test_get_updated_guest_xml_dst_cpu_shared_set_info_set` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L146–L156` |
| `UtilityMigrationTestCase.test_get_updated_guest_xml_dst_cpu_shared_set_info_set.check_cpu_shared_set` | function | (mock_update_cpu_shared_set, mock_remove_cpu_shared_set) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_migration.py:L150–L154` |
| `UtilityMigrationTestCase.test_update_quota_xml` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L158–L176` |
| `UtilityMigrationTestCase.test_update_quota_xml_empty_cputune` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L178–L190` |
| `UtilityMigrationTestCase.test_update_device_resources_xml_vpmem` | method | (self) | public | not declared | 1/57 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L192–L254` |
| `UtilityMigrationTestCase.test_update_mdev_xml` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L256–L271` |
| `UtilityMigrationTestCase.test_update_mdev_xml_fails_on_notfound_mdev` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L273–L288` |
| `UtilityMigrationTestCase.test_update_pci_dev_xml` | method | (self) | public | not declared | 1/35 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L290–L325` |
| `UtilityMigrationTestCase.test_update_pci_dev_xml_with_2_hostdevs` | method | (self) | public | not declared | 1/57 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L327–L384` |
| `UtilityMigrationTestCase.test_update_pci_dev_xml_with_2_hostdevs_second_one_not_in_map` | method | (self) | public | not declared | 1/56 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L386–L442` |
| `UtilityMigrationTestCase.test_update_pci_dev_xml_fails_not_found_src_address` | method | (self) | public | not declared | 1/30 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L444–L475` |
| `UtilityMigrationTestCase.test_update_cpu_shared_set_xml` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L477–L494` |
| `UtilityMigrationTestCase.test_remove_cpu_shared_set_xml` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L496–L513` |
| `UtilityMigrationTestCase.test_update_numa_xml` | method | (self) | public | not declared | 1/43 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L515–L560` |
| `UtilityMigrationTestCase.test_update_numa_xml_pre_existing_instance_without_iothreads` | method | (self) | public | not declared | 1/41 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L562–L605` |
| `UtilityMigrationTestCase.test_update_numa_xml_no_updates` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L607–L631` |
| `UtilityMigrationTestCase.test_update_serial_xml_serial` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L633–L650` |
| `UtilityMigrationTestCase.test_update_serial_xml_console` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L652–L674` |
| `UtilityMigrationTestCase.test_update_serial_xml_without_ports` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L676–L698` |
| `UtilityMigrationTestCase.test_update_graphics` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L700–L719` |
| `UtilityMigrationTestCase.test_update_rbd_xml` | method | (self, mock_rbd_driver) | public | not declared | 1/30 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L722–L753` |
| `UtilityMigrationTestCase.test_update_rbd_xml_non_rbd_image_type` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L755–L771` |
| `UtilityMigrationTestCase.test_update_rbd_xml_skips_serial_disk` | method | (self, mock_rbd_driver) | public | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L774–L797` |
| `UtilityMigrationTestCase.test_update_rbd_xml_skips_ua_alias_disk` | method | (self, mock_rbd_driver) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L800–L822` |
| `UtilityMigrationTestCase.test_update_rbd_xml_skips_non_rbd_protocol` | method | (self, mock_rbd_driver) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L825–L846` |
| `UtilityMigrationTestCase.test_update_volume_xml` | method | (self) | public | not declared | 1/54 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L848–L902` |
| `UtilityMigrationTestCase.test_update_volume_xml_keeps_address` | method | (self) | public | not declared | 1/70 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L904–L975` |
| `UtilityMigrationTestCase.test_update_volume_xml_add_encryption` | method | (self) | public | not declared | 1/92 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L977–L1069` |
| `UtilityMigrationTestCase.test_update_volume_xml_update_encryption` | method | (self) | public | not declared | 1/75 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1071–L1146` |
| `UtilityMigrationTestCase.test_update_perf_events_xml` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1148–L1164` |
| `UtilityMigrationTestCase.test_update_perf_events_xml_add_new_events` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1166–L1176` |
| `UtilityMigrationTestCase.test_update_perf_events_xml_add_new_events1` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1178–L1193` |
| `UtilityMigrationTestCase.test_update_perf_events_xml_remove_all_events` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1195–L1210` |
| `UtilityMigrationTestCase.test_update_memory_backing_xml_remove` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1212–L1229` |
| `UtilityMigrationTestCase.test_update_memory_backing_xml_add` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1231–L1246` |
| `UtilityMigrationTestCase.test_update_memory_backing_xml_keep` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1248–L1271` |
| `UtilityMigrationTestCase._test_update_vif_xml` | method | (self, conf, original_xml, expected_xml) | private | not declared | 1/26 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1273–L1302` |
| `UtilityMigrationTestCase.test_update_vif_xml_to_vhostuser` | method | (self) | public | not declared | 1/37 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1304–L1345` |
| `UtilityMigrationTestCase.test_update_vif_xml_to_bridge_without_mtu` | method | (self) | public | not declared | 1/39 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1347–L1389` |
| `UtilityMigrationTestCase.test_update_vif_xml_to_bridge_with_mtu` | method | (self) | public | not declared | 1/41 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1391–L1435` |
| `UtilityMigrationTestCase.test_update_vif_xml_no_mac_address_in_xml` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1437–L1460` |
| `UtilityMigrationTestCase.test_update_vif_xml_no_matching_vif` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1462–L1484` |
| `UtilityMigrationTestCase.test_update_vif_xml_lower_case_mac` | method | (self) | public | not declared | 1/37 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1486–L1525` |
| `MigrationMonitorTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1528–L1927` |
| `MigrationMonitorTestCase.setUp` | method | (self) | public | not declared | 1/53 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1529–L1584` |
| `MigrationMonitorTestCase.test_live_migration_find_type_active` | method | (self, mock_active) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1587–L1589` |
| `MigrationMonitorTestCase.test_live_migration_find_type_inactive` | method | (self, mock_active) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1592–L1594` |
| `MigrationMonitorTestCase.test_live_migration_find_type_no_domain` | method | (self, mock_active) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1597–L1604` |
| `MigrationMonitorTestCase.test_live_migration_find_type_bad_err` | method | (self, mock_active) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1607–L1614` |
| `MigrationMonitorTestCase.test_live_migration_find_type_no_logging` | method | (self, mock_active, _mock_log) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1619–L1622` |
| `MigrationMonitorTestCase.test_live_migration_abort_too_long` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1624–L1627` |
| `MigrationMonitorTestCase.test_live_migration_abort_no_comp_timeout` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1629–L1632` |
| `MigrationMonitorTestCase.test_live_migration_abort_still_working` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1634–L1637` |
| `MigrationMonitorTestCase.test_live_migration_update_downtime_no_steps` | method | (self, mock_dt) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1641–L1647` |
| `MigrationMonitorTestCase.test_live_migration_update_downtime_too_early` | method | (self, mock_dt) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1651–L1661` |
| `MigrationMonitorTestCase.test_live_migration_update_downtime_step1` | method | (self, mock_dt) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1665–L1675` |
| `MigrationMonitorTestCase.test_live_migration_update_downtime_nostep1` | method | (self, mock_dt) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1679–L1689` |
| `MigrationMonitorTestCase.test_live_migration_update_downtime_step2` | method | (self, mock_dt) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1693–L1702` |
| `MigrationMonitorTestCase.test_live_migration_update_downtime_err` | method | (self, mock_dt) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1706–L1720` |
| `MigrationMonitorTestCase.test_live_migration_save_stats` | method | (self, mock_isave, mock_msave) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1724–L1747` |
| `MigrationMonitorTestCase.test_live_migration_run_tasks_empty_tasks` | method | (self, mock_pause, mock_postcopy) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1751–L1765` |
| `MigrationMonitorTestCase.test_live_migration_run_tasks_no_tasks` | method | (self, mock_pause, mock_postcopy) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1769–L1782` |
| `MigrationMonitorTestCase.test_live_migration_run_tasks_no_force_complete` | method | (self, mock_pause, mock_postcopy) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1786–L1802` |
| `MigrationMonitorTestCase.test_live_migration_run_tasks_force_complete` | method | (self, mock_pause, mock_postcopy) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1806–L1822` |
| `MigrationMonitorTestCase.test_live_migration_run_tasks_force_complete_postcopy_running` | method | (self, mock_pause, mock_postcopy) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1826–L1841` |
| `MigrationMonitorTestCase.test_live_migration_run_tasks_force_complete_postcopy` | method | (self, mock_pause, mock_postcopy, mock_msave) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1846–L1861` |
| `MigrationMonitorTestCase.test_live_migration_recover_tasks_resume` | method | (self, mock_ps, mock_resume) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1866–L1873` |
| `MigrationMonitorTestCase.test_live_migration_recover_tasks_no_resume` | method | (self, mock_ps, mock_resume) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1878–L1886` |
| `MigrationMonitorTestCase.test_live_migration_recover_tasks_empty_tasks` | method | (self, mock_resume) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1889–L1895` |
| `MigrationMonitorTestCase.test_live_migration_recover_tasks_no_pause` | method | (self, mock_resume) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1898–L1906` |
| `MigrationMonitorTestCase.test_live_migration_downtime_steps` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_migration.py:L1908–L1927` |

## Dependencies

- `collections`: imports `deque` (src/nova/tests/unit/virt/libvirt/test_migration.py:L15)
- `import copy` (src/nova/tests/unit/virt/libvirt/test_migration.py:L16)
- `import textwrap` (src/nova/tests/unit/virt/libvirt/test_migration.py:L17)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/test_migration.py:L18)
- `lxml`: imports `etree` (src/nova/tests/unit/virt/libvirt/test_migration.py:L20)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/virt/libvirt/test_migration.py:L21)
- `oslo_utils`: imports `units` (src/nova/tests/unit/virt/libvirt/test_migration.py:L22)
- `nova.compute`: imports `power_state` (src/nova/tests/unit/virt/libvirt/test_migration.py:L24)
- `nova`: imports `exception` (src/nova/tests/unit/virt/libvirt/test_migration.py:L25)
- `nova.network`: imports `model as network_model` (src/nova/tests/unit/virt/libvirt/test_migration.py:L26)
- `nova`: imports `objects` (src/nova/tests/unit/virt/libvirt/test_migration.py:L27)
- `nova.storage`: imports `rbd_utils` (src/nova/tests/unit/virt/libvirt/test_migration.py:L28)
- `nova`: imports `test` (src/nova/tests/unit/virt/libvirt/test_migration.py:L29)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/virt/libvirt/test_migration.py:L30)
- `nova.tests.fixtures`: imports `libvirt as fakelibvirt` (src/nova/tests/unit/virt/libvirt/test_migration.py:L31)
- `nova.tests.unit.virt.libvirt`: imports `test_driver` (src/nova/tests/unit/virt/libvirt/test_migration.py:L32)
- `nova.virt.libvirt`: imports `config as vconfig` (src/nova/tests/unit/virt/libvirt/test_migration.py:L33)
- `nova.virt.libvirt`: imports `guest as libvirt_guest` (src/nova/tests/unit/virt/libvirt/test_migration.py:L34)
- `nova.virt.libvirt`: imports `host` (src/nova/tests/unit/virt/libvirt/test_migration.py:L35)
- `nova.virt.libvirt`: imports `migration` (src/nova/tests/unit/virt/libvirt/test_migration.py:L36)

