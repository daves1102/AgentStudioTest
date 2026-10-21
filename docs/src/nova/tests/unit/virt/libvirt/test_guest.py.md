# src/nova/tests/unit/virt/libvirt/test_guest.py

## Overview

This file implements the `test_guest` module, defining 3 classs, 95 methods, 9 imports.

Lines: total 1181, code 989, comment 27, blank 165

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `GuestTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_guest.py:L30–L814` |
| `GuestTestCase.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L32–L43` |
| `GuestTestCase.test_repr` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L45–L49` |
| `GuestTestCase.test_create` | method | (self, mock_define) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L52–L54` |
| `GuestTestCase.test_create_exception` | method | (self, mock_define, mock_log) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L58–L65` |
| `GuestTestCase.test_launch` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L67–L69` |
| `GuestTestCase.test_launch_and_pause` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L71–L74` |
| `GuestTestCase.test_launch_exception` | method | (self, mock_safe_decode, mock_log) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L78–L85` |
| `GuestTestCase.test_shutdown` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L87–L90` |
| `GuestTestCase.test_get_interfaces` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L92–L103` |
| `GuestTestCase.test_get_interfaces_exception` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L105–L107` |
| `GuestTestCase.test_poweroff` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L109–L111` |
| `GuestTestCase.test_resume` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L113–L115` |
| `GuestTestCase.test_time_sync_no_errors` | method | (self, time_mock) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L118–L123` |
| `GuestTestCase.test_get_vcpus_info` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L125–L132` |
| `GuestTestCase.test_delete_configuration` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L134–L138` |
| `GuestTestCase.test_delete_configuration_with_keep_vtpm_true` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L140–L145` |
| `GuestTestCase.test_delete_configuration_keep_nvram` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L147–L151` |
| `GuestTestCase.test_delete_configuration_exception` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L153–L158` |
| `GuestTestCase.test_attach_device` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L160–L165` |
| `GuestTestCase.test_attach_device_persistent` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L167–L172` |
| `GuestTestCase.test_attach_device_live` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L174–L179` |
| `GuestTestCase.test_attach_device_persistent_live` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L181–L187` |
| `GuestTestCase.test_detach_device` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L189–L194` |
| `GuestTestCase.test_detach_device_persistent` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L196–L201` |
| `GuestTestCase.test_detach_device_live` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L203–L208` |
| `GuestTestCase.test_detach_device_persistent_live` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L210–L216` |
| `GuestTestCase.test_get_xml_desc` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L218–L220` |
| `GuestTestCase.test_get_xml_desc_dump_inactive` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L222–L225` |
| `GuestTestCase.test_get_xml_desc_dump_sensitive` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L227–L230` |
| `GuestTestCase.test_get_xml_desc_dump_inactive_dump_sensitive` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L232–L236` |
| `GuestTestCase.test_get_xml_desc_dump_migratable` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L238–L241` |
| `GuestTestCase.test_has_persistent_configuration` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L243–L246` |
| `GuestTestCase.test_save_memory_state` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L248–L250` |
| `GuestTestCase.test_get_block_device` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L252–L256` |
| `GuestTestCase.test_set_user_password` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L258–L260` |
| `GuestTestCase.test_get_config` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L262–L268` |
| `GuestTestCase.test_get_device_by_alias` | method | (self) | public | not declared | 1/79 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L270–L351` |
| `GuestTestCase.test_get_device_by_alias_from_persistent_config` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L353–L365` |
| `GuestTestCase.test_get_devices` | method | (self) | public | not declared | 1/108 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L367–L485` |
| `GuestTestCase.test_get_interface_by_cfg_persistent_domain` | method | (self) | public | not declared | 1/43 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L487–L532` |
| `GuestTestCase.test_get_interface_by_cfg_vhostuser` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L534–L560` |
| `GuestTestCase.test_get_interface_by_cfg_hostdev_pci` | method | (self) | public | not declared | 1/35 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L562–L598` |
| `GuestTestCase.test_get_info` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L600–L606` |
| `GuestTestCase.test_get_power_state` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L608–L611` |
| `GuestTestCase.test_is_active_when_domain_is_active` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L613–L615` |
| `GuestTestCase.test_is_active_when_domain_not_active` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L617–L619` |
| `GuestTestCase.test_freeze_filesystems` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L621–L623` |
| `GuestTestCase.test_thaw_filesystems` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L625–L627` |
| `GuestTestCase._conf_snapshot` | method | (self) | private | `conf` (src/nova/tests/unit/virt/libvirt/test_guest.py:L632) | 1/4 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L629–L632` |
| `GuestTestCase.test_snapshot` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L634–L638` |
| `GuestTestCase.test_snapshot_no_metadata` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L640–L646` |
| `GuestTestCase.test_snapshot_disk_only` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L648–L653` |
| `GuestTestCase.test_snapshot_reuse_ext` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L655–L660` |
| `GuestTestCase.test_snapshot_quiesce` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L662–L667` |
| `GuestTestCase.test_snapshot_all` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L669–L680` |
| `GuestTestCase.test_pause` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L682–L684` |
| `GuestTestCase.test_migrate_v3` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L686–L696` |
| `GuestTestCase.test_abort_job` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L698–L700` |
| `GuestTestCase.test_migrate_configure_max_downtime` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L702–L704` |
| `GuestTestCase.test_set_metadata` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L706–L712` |
| `GuestTestCase.test_set_metadata_persistent` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L714–L720` |
| `GuestTestCase.test_set_metadata_device_live` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L722–L728` |
| `GuestTestCase.test_set_metadata_persistent_live` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L730–L737` |
| `GuestTestCase.test_get_disk_xml` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L739–L781` |
| `GuestTestCase.test_get_disk_xml_from_persistent_config` | method | (self) | public | not declared | 1/29 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L783–L814` |
| `GuestBlockTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_guest.py:L817–L964` |
| `GuestBlockTestCase.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L819–L828` |
| `GuestBlockTestCase.test_abort_job` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L830–L832` |
| `GuestBlockTestCase.test_abort_job_async` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L834–L837` |
| `GuestBlockTestCase.test_abort_job_pivot` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L839–L842` |
| `GuestBlockTestCase.test_get_job_info` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L844–L856` |
| `GuestBlockTestCase.test_resize` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L858–L860` |
| `GuestBlockTestCase.test_rebase` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L862–L865` |
| `GuestBlockTestCase.test_rebase_shallow` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L867–L870` |
| `GuestBlockTestCase.test_rebase_reuse_ext` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L872–L876` |
| `GuestBlockTestCase.test_rebase_copy` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L878–L882` |
| `GuestBlockTestCase.test_rebase_relative` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L884–L888` |
| `GuestBlockTestCase.test_rebase_copy_dev` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L890–L894` |
| `GuestBlockTestCase.test_commit` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L896–L899` |
| `GuestBlockTestCase.test_commit_relative` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L901–L905` |
| `GuestBlockTestCase.test_is_job_complete_cur_end_zeros` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L907–L914` |
| `GuestBlockTestCase.test_is_job_complete_current_lower_than_end` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L916–L923` |
| `GuestBlockTestCase.test_is_job_complete_not_ready` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L925–L936` |
| `GuestBlockTestCase.test_is_job_complete_ready` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L938–L950` |
| `GuestBlockTestCase.test_is_job_complete_no_job` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L952–L955` |
| `GuestBlockTestCase.test_is_job_complete_exception` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L957–L960` |
| `GuestBlockTestCase.test_blockStats` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L962–L964` |
| `JobInfoTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_guest.py:L967–L1181` |
| `JobInfoTestCase.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L969–L981` |
| `JobInfoTestCase.test_job_stats` | method | (self, mock_stats, mock_info) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L985–L1006` |
| `JobInfoTestCase.test_job_info_no_support` | method | (self, mock_stats, mock_info) | public | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L1010–L1037` |
| `JobInfoTestCase.test_job_info_attr_error` | method | (self, mock_stats, mock_info) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L1041–L1065` |
| `JobInfoTestCase.test_job_stats_no_domain` | method | (self, mock_stats, mock_info) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L1069–L1086` |
| `JobInfoTestCase.test_job_info_no_domain` | method | (self, mock_stats, mock_info) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L1090–L1112` |
| `JobInfoTestCase.test_job_stats_operation_invalid` | method | (self, mock_stats, mock_info) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L1116–L1133` |
| `JobInfoTestCase.test_job_info_operation_invalid` | method | (self, mock_stats, mock_info) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L1137–L1159` |
| `JobInfoTestCase.test_job_stats_no_ram` | method | (self, mock_stats, mock_info) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_guest.py:L1163–L1181` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/test_guest.py:L17)
- `oslo_utils`: imports `encodeutils` (src/nova/tests/unit/virt/libvirt/test_guest.py:L19)
- `nova`: imports `context` (src/nova/tests/unit/virt/libvirt/test_guest.py:L21)
- `nova`: imports `test` (src/nova/tests/unit/virt/libvirt/test_guest.py:L22)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/virt/libvirt/test_guest.py:L23)
- `nova.tests.fixtures`: imports `libvirt as fakelibvirt` (src/nova/tests/unit/virt/libvirt/test_guest.py:L24)
- `nova.virt.libvirt`: imports `config as vconfig` (src/nova/tests/unit/virt/libvirt/test_guest.py:L25)
- `nova.virt.libvirt`: imports `guest as libvirt_guest` (src/nova/tests/unit/virt/libvirt/test_guest.py:L26)
- `nova.virt.libvirt`: imports `host` (src/nova/tests/unit/virt/libvirt/test_guest.py:L27)

