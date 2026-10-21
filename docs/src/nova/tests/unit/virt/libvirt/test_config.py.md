# src/nova/tests/unit/virt/libvirt/test_config.py

## Overview

This file implements the `test_config` module, defining 53 classs, 2 fields, 236 methods, 12 imports, 6 side effects.

Lines: total 5110, code 4339, comment 66, blank 705

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LibvirtConfigUtiltest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L31–L36` |
| `LibvirtConfigUtiltest.test_make_parse_alias` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_config.py:L32–L36` |
| `LibvirtConfigBaseTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L39–L40` |
| `LibvirtConfigTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L43–L112` |
| `LibvirtConfigTest.test_config_plain` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_config.py:L45–L49` |
| `LibvirtConfigTest.test_config_ns` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_config.py:L51–L57` |
| `LibvirtConfigTest.test_config_text` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_config.py:L59–L65` |
| `LibvirtConfigTest.test_config_text_unicode` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_config.py:L67–L72` |
| `LibvirtConfigTest.test_config_text_node_name_attr` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_config.py:L74–L79` |
| `LibvirtConfigTest.test_config_parse` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_config.py:L81–L84` |
| `LibvirtConfigTest.test_config_parse_error_xml_logged` | method | (self, mock_debug) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_config.py:L87–L95` |
| `LibvirtConfigTest.test_parse_on_off_str` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_config.py:L97–L102` |
| `LibvirtConfigTest.test_get_yes_no_str` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_config.py:L104–L107` |
| `LibvirtConfigTest.test_get_on_off_str` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_config.py:L109–L112` |
| `LibvirtConfigCapsTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L115–L278` |
| `LibvirtConfigCapsTest.test_config_host` | method | (self) | public | not declared | 1/47 | `src/nova/tests/unit/virt/libvirt/test_config.py:L117–L167` |
| `LibvirtConfigCapsTest.test_config_host_numa_cell_no_memory_caps` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_config.py:L169–L179` |
| `LibvirtConfigCapsTest.test_config_host_numa_cell_no_cpus_caps` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_config.py:L181–L189` |
| `LibvirtConfigCapsTest.test_config_guest` | method | (self) | public | not declared | 3/84 | `src/nova/tests/unit/virt/libvirt/test_config.py:L191–L278` |
| `LibvirtConfigGuestTimerTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L281–L309` |
| `LibvirtConfigGuestTimerTest.test_config_platform` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_config.py:L282–L289` |
| `LibvirtConfigGuestTimerTest.test_config_pit` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_config.py:L291–L299` |
| `LibvirtConfigGuestTimerTest.test_config_hpet` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_config.py:L301–L309` |
| `LibvirtConfigGuestClockTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L312–L370` |
| `LibvirtConfigGuestClockTest.test_config_utc` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_config.py:L313–L319` |
| `LibvirtConfigGuestClockTest.test_config_localtime` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_config.py:L321–L328` |
| `LibvirtConfigGuestClockTest.test_config_timezone` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_config.py:L330–L338` |
| `LibvirtConfigGuestClockTest.test_config_variable` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_config.py:L340–L348` |
| `LibvirtConfigGuestClockTest.test_config_timers` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_config.py:L350–L370` |
| `LibvirtConfigCPUFeatureTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L373–L401` |
| `LibvirtConfigCPUFeatureTest.test_config_simple` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_config.py:L375–L381` |
| `LibvirtConfigCPUFeatureTest.test_config_parse_require` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_config.py:L383–L391` |
| `LibvirtConfigCPUFeatureTest.test_config_parse_disable` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_config.py:L393–L401` |
| `LibvirtConfigGuestCPUFeatureTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L404–L422` |
| `LibvirtConfigGuestCPUFeatureTest.test_config_simple` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_config.py:L406–L413` |
| `LibvirtConfigGuestCPUFeatureTest.test_config_simple_pcid` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_config.py:L415–L422` |
| `LibvirtConfigGuestCPUNUMATest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L425–L465` |
| `LibvirtConfigGuestCPUNUMATest.test_parse_dom` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_config.py:L427–L438` |
| `LibvirtConfigGuestCPUNUMATest.test_config_simple` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_config.py:L440–L465` |
| `LibvirtConfigCPUTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L468–L576` |
| `LibvirtConfigCPUTest.test_config_simple` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_config.py:L470–L479` |
| `LibvirtConfigCPUTest.test_config_complex` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_config.py:L481–L499` |
| `LibvirtConfigCPUTest.test_only_uniq_cpu_featues` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_config.py:L501–L521` |
| `LibvirtConfigCPUTest.test_config_topology` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_config.py:L523–L536` |
| `LibvirtConfigCPUTest.test_config_maxphysaddr` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_config.py:L538–L549` |
| `LibvirtConfigCPUTest.test_parse_dom_emulate` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_config.py:L551–L562` |
| `LibvirtConfigCPUTest.test_parse_dom_passthrough` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_config.py:L564–L576` |
| `LibvirtConfigGuestCPUTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L579–L684` |
| `LibvirtConfigGuestCPUTest.test_config_simple` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_config.py:L581–L590` |
| `LibvirtConfigGuestCPUTest.test_config_complex` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_config.py:L592–L611` |
| `LibvirtConfigGuestCPUTest.test_config_host` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_config.py:L613–L621` |
| `LibvirtConfigGuestCPUTest.test_config_host_with_numa` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/virt/libvirt/test_config.py:L623–L655` |
| `LibvirtConfigGuestCPUTest.test_config_host_with_maxphysaddr_emulate` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_config.py:L657–L670` |
| `LibvirtConfigGuestCPUTest.test_config_host_with_maxphysaddr_passthrough` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_config.py:L672–L684` |
| `LibvirtConfigGuestSMBIOSTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L687–L695` |
| `LibvirtConfigGuestSMBIOSTest.test_config_simple` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_config.py:L689–L695` |
| `LibvirtConfigGuestSysinfoTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L698–L767` |
| `LibvirtConfigGuestSysinfoTest.test_config_simple` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_config.py:L700–L706` |
| `LibvirtConfigGuestSysinfoTest.test_config_bios` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_config.py:L708–L721` |
| `LibvirtConfigGuestSysinfoTest.test_config_system` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_config.py:L723–L744` |
| `LibvirtConfigGuestSysinfoTest.test_config_mixed` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_config.py:L746–L767` |
| `LibvirtConfigGuestDiskTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L771–L1511` |
| `LibvirtConfigGuestDiskTest.test_config_file` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_config.py:L773–L785` |
| `LibvirtConfigGuestDiskTest.test_config_file_parse` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_config.py:L787–L802` |
| `LibvirtConfigGuestDiskTest.test_config_file_readonly` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_config.py:L804–L818` |
| `LibvirtConfigGuestDiskTest.test_config_file_parse_readonly` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_config.py:L820–L836` |
| `LibvirtConfigGuestDiskTest.test_config_file_shareable` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_config.py:L838–L852` |
| `LibvirtConfigGuestDiskTest.test_config_file_parse_shareable` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_config.py:L854–L870` |
| `LibvirtConfigGuestDiskTest.test_config_file_serial` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_config.py:L872–L886` |
| `LibvirtConfigGuestDiskTest.test_config_file_serial_parse` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_config.py:L888–L900` |
| `LibvirtConfigGuestDiskTest.test_config_file_discard` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_config.py:L902–L921` |
| `LibvirtConfigGuestDiskTest.test_config_file_discard_parse` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_config.py:L923–L936` |
| `LibvirtConfigGuestDiskTest.test_config_file_io` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_config.py:L938–L957` |
| `LibvirtConfigGuestDiskTest.test_config_file_io_parse` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_config.py:L959–L972` |
| `LibvirtConfigGuestDiskTest.test_config_boot_order` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_config.py:L974–L995` |
| `LibvirtConfigGuestDiskTest.test_config_mirror_parse` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_config.py:L997–L1013` |
| `LibvirtConfigGuestDiskTest.test_config_disk_encryption_format` | method | (self, encryption) | public | not declared | 3/46 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1016–L1063` |
| `LibvirtConfigGuestDiskTest.test_config_disk_encryption_parse` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1065–L1085` |
| `LibvirtConfigGuestDiskTest.test_config_boot_order_parse` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1087–L1099` |
| `LibvirtConfigGuestDiskTest.test_config_block` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1101–L1118` |
| `LibvirtConfigGuestDiskTest.test_config_block_serial` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1120–L1139` |
| `LibvirtConfigGuestDiskTest.test_config_block_lun_no_serial` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1141–L1160` |
| `LibvirtConfigGuestDiskTest.test_config_block_lun_no_blockio` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1162–L1185` |
| `LibvirtConfigGuestDiskTest.test_config_block_parse` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1187–L1201` |
| `LibvirtConfigGuestDiskTest.test_config_network` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1203–L1219` |
| `LibvirtConfigGuestDiskTest.test_config_network_parse` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1221–L1238` |
| `LibvirtConfigGuestDiskTest.test_config_network_no_name` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1240–L1259` |
| `LibvirtConfigGuestDiskTest.test_config_network_multihost` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1261–L1283` |
| `LibvirtConfigGuestDiskTest.test_config_network_auth` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1285–L1308` |
| `LibvirtConfigGuestDiskTest.test_config_iotune` | method | (self) | public | not declared | 1/41 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1310–L1353` |
| `LibvirtConfigGuestDiskTest.test_config_blockio` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1355–L1370` |
| `LibvirtConfigGuestDiskTest.test_config_disk_device_address` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1372–L1387` |
| `LibvirtConfigGuestDiskTest.test_config_disk_device_address_no_format` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1389–L1408` |
| `LibvirtConfigGuestDiskTest.test_config_disk_device_address_drive` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1410–L1420` |
| `LibvirtConfigGuestDiskTest.test_config_disk_device_address_drive_added` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1422–L1439` |
| `LibvirtConfigGuestDiskTest.test_config_disk_device_address_pci` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1441–L1451` |
| `LibvirtConfigGuestDiskTest.test_config_disk_device_address_pci_added` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1453–L1475` |
| `LibvirtConfigGuestDiskTest.test_config_disk_device_address_type_virtio_mmio` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1477–L1492` |
| `LibvirtConfigGuestDiskTest.test_config_disk_device_address_type_ccw` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1494–L1511` |
| `LibvirtConfigGuestSnapshotDiskTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L1514–L1543` |
| `LibvirtConfigGuestSnapshotDiskTest.test_config_file` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1516–L1528` |
| `LibvirtConfigGuestSnapshotDiskTest.test_config_file_parse` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1530–L1543` |
| `LibvirtConfigGuestDiskBackingStoreTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L1546–L1604` |
| `LibvirtConfigGuestDiskBackingStoreTest.test_config_file_parse` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1548–L1572` |
| `LibvirtConfigGuestDiskBackingStoreTest.test_config_network_parse` | method | (self) | public | not declared | 1/29 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1574–L1604` |
| `LibvirtConfigGuestFilesysTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L1607–L1723` |
| `LibvirtConfigGuestFilesysTest.test_config_mount` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1609–L1620` |
| `LibvirtConfigGuestFilesysTest.test_config_virtiofs` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1622–L1636` |
| `LibvirtConfigGuestFilesysTest.test_config_block` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1638–L1649` |
| `LibvirtConfigGuestFilesysTest.test_config_file` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1651–L1665` |
| `LibvirtConfigGuestFilesysTest.test_parse_mount` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1667–L1678` |
| `LibvirtConfigGuestFilesysTest.test_parse_virtiofs` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1680–L1694` |
| `LibvirtConfigGuestFilesysTest.test_parse_block` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1696–L1707` |
| `LibvirtConfigGuestFilesysTest.test_parse_file` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1709–L1723` |
| `LibvirtConfigGuestInputTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L1726–L1741` |
| `LibvirtConfigGuestInputTest.test_config_tablet` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1728–L1733` |
| `LibvirtConfigGuestInputTest.test_config_input` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1735–L1741` |
| `LibvirtConfigGuestGraphicsTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L1744–L1849` |
| `LibvirtConfigGuestGraphicsTest.test_config_graphics_vnc` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1746–L1756` |
| `LibvirtConfigGuestGraphicsTest.test_config_graphics_spice` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1758–L1768` |
| `LibvirtConfigGuestGraphicsTest.test_config_graphics_spice_compression` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1770–L1792` |
| `LibvirtConfigGuestGraphicsTest.test_config_graphics_spice_secure` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1794–L1815` |
| `LibvirtConfigGuestGraphicsTest.test_config_graphics_spice_secure_compression` | method | (self) | public | not declared | 1/30 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1817–L1849` |
| `LibvirtConfigGuestHostdev` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L1852–L1879` |
| `LibvirtConfigGuestHostdev.test_config_pci_guest_host_dev` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1854–L1863` |
| `LibvirtConfigGuestHostdev.test_parse_GuestHostdev` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1865–L1871` |
| `LibvirtConfigGuestHostdev.test_parse_GuestHostdev_non_pci` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1873–L1879` |
| `LibvirtConfigGuestHostdevPCI` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L1882–L1943` |
| `LibvirtConfigGuestHostdevPCI.expected` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L1884–L1891` |
| `LibvirtConfigGuestHostdevPCI.test_config_guest_hostdev_pci` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1893–L1900` |
| `LibvirtConfigGuestHostdevPCI.test_parse_guest_hostdev_pci` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1902–L1912` |
| `LibvirtConfigGuestHostdevPCI.test_parse_guest_hostdev_usb` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1914–L1925` |
| `LibvirtConfigGuestHostdevPCI.test_config_alias_parse` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1927–L1943` |
| `LibvirtConfigGuestHostdevMDEV` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L1946–L1971` |
| `LibvirtConfigGuestHostdevMDEV.expected` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L1948–L1955` |
| `LibvirtConfigGuestHostdevMDEV.test_config_guest_hostdev_mdev` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1957–L1961` |
| `LibvirtConfigGuestHostdevMDEV.test_parse_guest_hostdev_mdev` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1963–L1971` |
| `LibvirtConfigGuestCharDeviceLog` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L1974–L1988` |
| `LibvirtConfigGuestCharDeviceLog.test_config_log` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1976–L1988` |
| `LibvirtConfigGuestSerialTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L1991–L2032` |
| `LibvirtConfigGuestSerialTest.test_config_file` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_config.py:L1993–L2002` |
| `LibvirtConfigGuestSerialTest.test_config_serial_port` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2004–L2014` |
| `LibvirtConfigGuestSerialTest.test_config_log` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2016–L2032` |
| `LibvirtConfigGuestConsoleTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L2035–L2083` |
| `LibvirtConfigGuestConsoleTest.test_config_pty` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2036–L2042` |
| `LibvirtConfigGuestConsoleTest.test_config_target_type` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2044–L2054` |
| `LibvirtConfigGuestConsoleTest.test_config_target_port` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2056–L2065` |
| `LibvirtConfigGuestConsoleTest.test_config_log` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2067–L2083` |
| `LibvirtConfigGuestChannelTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L2086–L2120` |
| `LibvirtConfigGuestChannelTest.test_config_spice_minimal` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2087–L2095` |
| `LibvirtConfigGuestChannelTest.test_config_spice_full` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2097–L2106` |
| `LibvirtConfigGuestChannelTest.test_config_qga_full` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2108–L2120` |
| `LibvirtConfigGuestInterfaceTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L2123–L2617` |
| `LibvirtConfigGuestInterfaceTest.test_config_ethernet` | method | (self) | public | not declared | 1/29 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2124–L2156` |
| `LibvirtConfigGuestInterfaceTest.test_config_ethernet_with_mtu` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2158–L2192` |
| `LibvirtConfigGuestInterfaceTest._get_virtio_interface` | method | (self) | private | `obj` (src/nova/tests/unit/virt/libvirt/test_config.py:L2200) | 1/7 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2194–L2200` |
| `LibvirtConfigGuestInterfaceTest.test_config_driver_packed_options` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2202–L2220` |
| `LibvirtConfigGuestInterfaceTest.test_config_driver_options` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2222–L2240` |
| `LibvirtConfigGuestInterfaceTest.test_config_bridge` | method | (self) | public | not declared | 1/33 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2242–L2278` |
| `LibvirtConfigGuestInterfaceTest.test_config_bridge_with_mtu` | method | (self) | public | not declared | 1/35 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2280–L2318` |
| `LibvirtConfigGuestInterfaceTest.test_config_bridge_ovs` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2320–L2346` |
| `LibvirtConfigGuestInterfaceTest.test_config_bridge_ovs_with_mtu` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2348–L2376` |
| `LibvirtConfigGuestInterfaceTest.test_config_8021Qbh` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2378–L2401` |
| `LibvirtConfigGuestInterfaceTest.test_config_direct` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2403–L2423` |
| `LibvirtConfigGuestInterfaceTest.test_config_8021Qbh_hostdev` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2425–L2450` |
| `LibvirtConfigGuestInterfaceTest.test_config_hw_veb_hostdev` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2452–L2476` |
| `LibvirtConfigGuestInterfaceTest.test_config_vhostuser` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2478–L2498` |
| `LibvirtConfigGuestInterfaceTest.test_config_vhostuser_ensure_driver_never_set` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2500–L2524` |
| `LibvirtConfigGuestInterfaceTest.test_config_vhostuser_queue_size` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2526–L2549` |
| `LibvirtConfigGuestInterfaceTest.test_config_interface_address` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2551–L2566` |
| `LibvirtConfigGuestInterfaceTest.test_config_interface_address_type_virtio_mmio` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2568–L2583` |
| `LibvirtConfigGuestInterfaceTest.test_config_interface_address_type_ccw` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2585–L2602` |
| `LibvirtConfigGuestInterfaceTest.test_config_interface_alias` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2604–L2617` |
| `LibvirtConfigGuestFeatureTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L2620–L2697` |
| `LibvirtConfigGuestFeatureTest.test_feature_hyperv_relaxed` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2622–L2631` |
| `LibvirtConfigGuestFeatureTest.test_feature_hyperv_all` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2633–L2666` |
| `LibvirtConfigGuestFeatureTest.test_feature_pmu` | method | (self) | public | not declared | 3/9 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2668–L2682` |
| `LibvirtConfigGuestFeatureTest.test_feature_ioapic` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2684–L2689` |
| `LibvirtConfigGuestFeatureTest.test_feature_tcg` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2691–L2697` |
| `LibvirtConfigGuestTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L2700–L3284` |
| `LibvirtConfigGuestTest.test_launch_security` | method | (self) | public | not declared | 1/29 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2702–L2745` |
| `LibvirtConfigGuestTest.test_config_lxc` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2747–L2783` |
| `LibvirtConfigGuestTest.test_config_lxc_with_idmap` | method | (self) | public | not declared | 1/44 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2785–L2832` |
| `LibvirtConfigGuestTest.test_config_kvm` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2834–L2841` |
| `LibvirtConfigGuestTest.test_config_uefi` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2843–L2875` |
| `LibvirtConfigGuestTest._test_config_uefi_autoconfigure` | method | (self, secure=False, stateless=None) | private | `obj.to_xml()` (src/nova/tests/unit/virt/libvirt/test_config.py:L2891) | 1/14 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2877–L2891` |
| `LibvirtConfigGuestTest.test_config_uefi_autoconfigure` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2893–L2912` |
| `LibvirtConfigGuestTest.test_config_uefi_autoconfigure_secure` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2914–L2933` |
| `LibvirtConfigGuestTest.test_config_uefi_autoconfigure_stateless` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2935–L2954` |
| `LibvirtConfigGuestTest.test_config_boot_menu` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2956–L2977` |
| `LibvirtConfigGuestTest.test_config_perf` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/test_config.py:L2979–L3003` |
| `LibvirtConfigGuestTest.test_config_machine_type` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3005–L3025` |
| `LibvirtConfigGuestTest.test_config_guest_iothreads` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3027–L3037` |
| `LibvirtConfigGuestTest.test_ConfigGuest_parse_devices` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3039–L3059` |
| `LibvirtConfigGuestTest.test_ConfigGuest_parse_devices_wrong_type` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3061–L3071` |
| `LibvirtConfigGuestTest.test_ConfigGuest_parse_cpu` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3073–L3085` |
| `LibvirtConfigGuestTest.test_ConfigGuest_parse_perf` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3087–L3098` |
| `LibvirtConfigGuestTest.test_ConfigGuest_parse_os` | method | (self) | public | not declared | 1/143 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3100–L3252` |
| `LibvirtConfigGuestTest.test_ConfigGuest_parse_basic_props` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3254–L3284` |
| `LibvirtConfigGuestSnapshotTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L3287–L3376` |
| `LibvirtConfigGuestSnapshotTest.test_config_snapshot` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3289–L3298` |
| `LibvirtConfigGuestSnapshotTest.test_config_snapshot_with_disks` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3300–L3327` |
| `LibvirtConfigGuestSnapshotTest.test_config_snapshot_with_network_disks` | method | (self) | public | not declared | 1/30 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3329–L3361` |
| `LibvirtConfigGuestSnapshotTest.test_config_alias_parse` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3363–L3376` |
| `LibvirtConfigNodeDeviceTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L3379–L3721` |
| `LibvirtConfigNodeDeviceTest.test_config_virt_usb_device` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3381–L3400` |
| `LibvirtConfigNodeDeviceTest.test_config_virt_device` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3402–L3437` |
| `LibvirtConfigNodeDeviceTest.test_config_phy_device` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3439–L3471` |
| `LibvirtConfigNodeDeviceTest.test_config_non_device` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3473–L3500` |
| `LibvirtConfigNodeDeviceTest.test_config_fail_device` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3502–L3530` |
| `LibvirtConfigNodeDeviceTest.test_config_2cap_device` | method | (self) | public | not declared | 1/33 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3532–L3566` |
| `LibvirtConfigNodeDeviceTest.test_config_net_device` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3568–L3600` |
| `LibvirtConfigNodeDeviceTest.test_config_mdev_device` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3602–L3622` |
| `LibvirtConfigNodeDeviceTest.test_config_mdev_device_uuid` | method | (self) | public | not declared | 1/35 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3624–L3660` |
| `LibvirtConfigNodeDeviceTest.test_config_vdpa_device` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3662–L3680` |
| `LibvirtConfigNodeDeviceTest.test_config_mtty_device` | method | (self) | public | not declared | 1/40 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3682–L3721` |
| `LibvirtConfigNodeDevicePciCapTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L3724–L3918` |
| `LibvirtConfigNodeDevicePciCapTest.test_config_device_pci_cap` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3726–L3758` |
| `LibvirtConfigNodeDevicePciCapTest.test_config_device_pci_2cap` | method | (self) | public | not declared | 1/38 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3760–L3799` |
| `LibvirtConfigNodeDevicePciCapTest.test_config_device_pci_mdev_capable` | method | (self) | public | not declared | 1/36 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3801–L3838` |
| `LibvirtConfigNodeDevicePciCapTest.test_config_device_pci_vpd` | method | (self) | public | not declared | 1/75 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3840–L3918` |
| `LibvirtConfigNodeDevicePciSubFunctionCap` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L3921–L3934` |
| `LibvirtConfigNodeDevicePciSubFunctionCap.test_config_device_pci_subfunction` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3923–L3934` |
| `LibvirtConfigGuestVideoTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L3937–L3969` |
| `LibvirtConfigGuestVideoTest.test_config_video_driver` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3939–L3947` |
| `LibvirtConfigGuestVideoTest.test_config_video_driver_virtio` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3949–L3957` |
| `LibvirtConfigGuestVideoTest.test_config_video_driver_vram_heads` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3959–L3969` |
| `LibvirtConfigGuestSeclabel` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L3972–L3990` |
| `LibvirtConfigGuestSeclabel.test_config_seclabel_config` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3974–L3979` |
| `LibvirtConfigGuestSeclabel.test_config_seclabel_baselabel` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3981–L3990` |
| `LibvirtConfigGuestRngTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L3993–L4015` |
| `LibvirtConfigGuestRngTest.test_config_rng_driver` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_config.py:L3995–L4002` |
| `LibvirtConfigGuestRngTest.test_config_rng_driver_with_rate` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4004–L4015` |
| `LibvirtConfigGuestControllerTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L4018–L4036` |
| `LibvirtConfigGuestControllerTest.test_config_guest_contoller` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4020–L4028` |
| `LibvirtConfigGuestControllerTest.test_config_guest_usb_host_controller` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4030–L4036` |
| `LibvirtConfigGuestWatchdogTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L4039–L4051` |
| `LibvirtConfigGuestWatchdogTest.test_config_watchdog` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4040–L4045` |
| `LibvirtConfigGuestWatchdogTest.test_config_watchdog_default_action` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4047–L4051` |
| `LibvirtConfigGuestCPUTuneTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L4054–L4160` |
| `LibvirtConfigGuestCPUTuneTest.test_config_cputune_timeslice` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4056–L4068` |
| `LibvirtConfigGuestCPUTuneTest.test_config_cputune_vcpus` | method | (self) | public | not declared | 1/38 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4070–L4111` |
| `LibvirtConfigGuestCPUTuneTest.test_config_cputune_vcpus_iothread` | method | (self) | public | not declared | 1/43 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4113–L4160` |
| `LibvirtConfigGuestMemoryBackingTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L4163–L4202` |
| `LibvirtConfigGuestMemoryBackingTest.test_config_memory_backing_none` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4164–L4168` |
| `LibvirtConfigGuestMemoryBackingTest.test_config_memory_backing_all` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4170–L4187` |
| `LibvirtConfigGuestMemoryBackingTest.test_config_memory_backing_source_all` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4189–L4202` |
| `LibvirtConfigGuestMemoryTuneTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L4205–L4226` |
| `LibvirtConfigGuestMemoryTuneTest.test_config_memory_backing_none` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4206–L4210` |
| `LibvirtConfigGuestMemoryTuneTest.test_config_memory_backing_all` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4212–L4226` |
| `LibvirtConfigGuestNUMATuneTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L4229–L4275` |
| `LibvirtConfigGuestNUMATuneTest.test_config_numa_tune_none` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4230–L4234` |
| `LibvirtConfigGuestNUMATuneTest.test_config_numa_tune_memory` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4236–L4248` |
| `LibvirtConfigGuestNUMATuneTest.test_config_numa_tune_memnodes` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4250–L4275` |
| `LibvirtConfigGuestMetadataNovaTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L4278–L4677` |
| `LibvirtConfigGuestMetadataNovaTest.test_config_metadata_flavor_extra_specs` | method | (self) | public | not declared | 1/81 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4280–L4366` |
| `LibvirtConfigGuestMetadataNovaTest.test_config_metadata_from_image` | method | (self) | public | not declared | 1/104 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4368–L4479` |
| `LibvirtConfigGuestMetadataNovaTest.test_config_metadata_from_volume_image` | method | (self) | public | not declared | 1/100 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4481–L4588` |
| `LibvirtConfigGuestMetadataNovaTest.test_config_metadata_from_volume_no_image` | method | (self) | public | not declared | 1/80 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4590–L4677` |
| `LibvirtConfigGuestIDMap` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L4680–L4733` |
| `LibvirtConfigGuestIDMap.test_config_id_map_parse_start_not_int` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4681–L4685` |
| `LibvirtConfigGuestIDMap.test_config_id_map_parse_target_not_int` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4687–L4691` |
| `LibvirtConfigGuestIDMap.test_config_id_map_parse_count_not_int` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4693–L4697` |
| `LibvirtConfigGuestIDMap.test_config_uid_map` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4699–L4706` |
| `LibvirtConfigGuestIDMap.test_config_uid_map_parse` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4708–L4715` |
| `LibvirtConfigGuestIDMap.test_config_gid_map` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4717–L4724` |
| `LibvirtConfigGuestIDMap.test_config_gid_map_parse` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4726–L4733` |
| `LibvirtConfigMemoryBalloonTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L4736–L4760` |
| `LibvirtConfigMemoryBalloonTest.test_config_memory_balloon_period` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4738–L4749` |
| `LibvirtConfigMemoryBalloonTest.test_config_memory_balloon_no_period` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4751–L4760` |
| `LibvirtConfigSecretTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L4763–L4841` |
| `LibvirtConfigSecretTest.test_config_secret_volume` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4765–L4784` |
| `LibvirtConfigSecretTest.test_config_secret_ceph` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4786–L4803` |
| `LibvirtConfigSecretTest.test_config_secret_vtpm` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4805–L4822` |
| `LibvirtConfigSecretTest.test_config_secret_iscsi` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4824–L4841` |
| `LibvirtConfigGuestVPMEMTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L4844–L4866` |
| `LibvirtConfigGuestVPMEMTest.test_config_vpmem` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4845–L4866` |
| `LibvirtConfigGuestIOMMUTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L4869–L4888` |
| `LibvirtConfigGuestIOMMUTest.test_config_iommu` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4871–L4888` |
| `LibvirtConfigDomainCapsVideoModelsTests` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L4891–L4912` |
| `LibvirtConfigDomainCapsVideoModelsTests.test_parse_video_model` | method | (self) | public | not declared | 2/19 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4893–L4912` |
| `LibvirtConfigDomainCapsDiskBusesTests` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L4915–L4942` |
| `LibvirtConfigDomainCapsDiskBusesTests.test_parse_disk_buses` | method | (self) | public | not declared | 2/25 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4917–L4942` |
| `LibvirtConfigDomainCapsDevicesTests` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L4945–L5018` |
| `LibvirtConfigDomainCapsDevicesTests.test_parse_domain_caps_devices` | method | (self) | public | not declared | 2/67 | `src/nova/tests/unit/virt/libvirt/test_config.py:L4947–L5018` |
| `LibvirtConfigDomainCapsOSTests` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L5021–L5062` |
| `LibvirtConfigDomainCapsOSTests.test_parse_domain_caps_os` | method | (self) | public | not declared | 1/38 | `src/nova/tests/unit/virt/libvirt/test_config.py:L5023–L5062` |
| `LibvirtConfigTPMTest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_config.py:L5065–L5110` |
| `LibvirtConfigTPMTest.test_config_tpm_tis_1_2` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_config.py:L5067–L5080` |
| `LibvirtConfigTPMTest.test_config_tpm_tis_2_0` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_config.py:L5082–L5095` |
| `LibvirtConfigTPMTest.test_config_tpm_crb_2_0` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_config.py:L5097–L5110` |

## Dependencies

- `import ddt` (src/nova/tests/unit/virt/libvirt/test_config.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/test_config.py:L16)
- `lxml`: imports `etree` (src/nova/tests/unit/virt/libvirt/test_config.py:L18)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/virt/libvirt/test_config.py:L19)
- `oslo_utils`: imports `units` (src/nova/tests/unit/virt/libvirt/test_config.py:L20)
- `nova`: imports `exception` (src/nova/tests/unit/virt/libvirt/test_config.py:L22)
- `nova.objects`: imports `fields as obj_fields` (src/nova/tests/unit/virt/libvirt/test_config.py:L23)
- `nova`: imports `test` (src/nova/tests/unit/virt/libvirt/test_config.py:L24)
- `nova.tests.fixtures`: imports `libvirt_data as fake_libvirt_data` (src/nova/tests/unit/virt/libvirt/test_config.py:L25)
- `nova.virt`: imports `driver` (src/nova/tests/unit/virt/libvirt/test_config.py:L26)
- `nova.virt`: imports `hardware` (src/nova/tests/unit/virt/libvirt/test_config.py:L27)
- `nova.virt.libvirt`: imports `config` (src/nova/tests/unit/virt/libvirt/test_config.py:L28)

## Side Effects

- **syscall**: def test_config_mount(self): (src/nova/tests/unit/virt/libvirt/test_config.py:L1609)
- **syscall**: def test_parse_mount(self): (src/nova/tests/unit/virt/libvirt/test_config.py:L1667)
- **network**: <nova:instance xmlns:nova='http://openstack.org/xmlns/libvirt/nova/1.1'> (src/nova/tests/unit/virt/libvirt/test_config.py:L4331)
- **network**: <nova:instance xmlns:nova='http://openstack.org/xmlns/libvirt/nova/1.1'> (src/nova/tests/unit/virt/libvirt/test_config.py:L4434)
- **network**: <nova:instance xmlns:nova='http://openstack.org/xmlns/libvirt/nova/1.1'> (src/nova/tests/unit/virt/libvirt/test_config.py:L4544)
- **network**: <nova:instance xmlns:nova='http://openstack.org/xmlns/libvirt/nova/1.1'> (src/nova/tests/unit/virt/libvirt/test_config.py:L4642)

## Notes

- KB `sideEffects` entries at L1609, L1667 have targets that appear to be code fragments rather than resource paths; documented as recorded.

