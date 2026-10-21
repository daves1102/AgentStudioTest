# src/nova/tests/functional/test_server_group.py

## Overview

This file implements the `test_server_group` module, defining 12 classs, 4 constants, 22 fields, 1 function, 69 methods, 14 imports, 4 side effects.

Lines: total 1159, code 790, comment 145, blank 224

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `PROJECT_ID_ALT` | constant | — | exported | not declared | — | `src/nova/tests/functional/test_server_group.py:L34–L34` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/test_server_group.py:L36–L36` |
| `ServerGroupTestBase` | class | — | exported | not declared | — | `src/nova/tests/functional/test_server_group.py:L39–L97` |
| `ServerGroupTestBase.REQUIRES_LOCKING` | constant | — | public | not declared | — | `src/nova/tests/functional/test_server_group.py:L41–L41` |
| `ServerGroupTestBase.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_group.py:L42–L42` |
| `ServerGroupTestBase._enabled_filters` | field | — | private | not declared | — | `src/nova/tests/functional/test_server_group.py:L44–L46` |
| `ServerGroupTestBase.anti_affinity` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_group.py:L48–L48` |
| `ServerGroupTestBase.affinity` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_group.py:L49–L49` |
| `ServerGroupTestBase._get_weight_classes` | method | (self) | private | `[]` (src/nova/tests/functional/test_server_group.py:L52) | 1/2 | `src/nova/tests/functional/test_server_group.py:L51–L52` |
| `ServerGroupTestBase.setUp` | method | (self) | public | not declared | 1/20 | `src/nova/tests/functional/test_server_group.py:L54–L78` |
| `ServerGroupTestBase._boot_a_server_to_group` | method | (self, group, expected_status='ACTIVE', flavor=None, az=None) | private | `found_server` (src/nova/tests/functional/test_server_group.py:L97) | 2/15 | `src/nova/tests/functional/test_server_group.py:L80–L97` |
| `ServerGroupFakeDriver` | class | — | exported | not declared | — | `src/nova/tests/functional/test_server_group.py:L100–L111` |
| `ServerGroupFakeDriver.vcpus` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_group.py:L106–L106` |
| `ServerGroupFakeDriver.memory_mb` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_group.py:L110–L110` |
| `ServerGroupFakeDriver.local_gb` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_group.py:L111–L111` |
| `_fake_load_compute_driver` | function | (virtapi, compute_driver=None) | unexported | `ServerGroupFakeDriver(virtapi)` (src/nova/tests/functional/test_server_group.py:L117) | 1/2 | `src/nova/tests/functional/test_server_group.py:L116–L117` |
| `ServerGroupTestV21` | class | — | exported | not declared | — | `src/nova/tests/functional/test_server_group.py:L120–L586` |
| `ServerGroupTestV21.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_server_group.py:L122–L138` |
| `ServerGroupTestV21.test_get_no_groups` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_server_group.py:L140–L142` |
| `ServerGroupTestV21.test_create_and_delete_groups` | method | (self) | public | not declared | 3/22 | `src/nova/tests/functional/test_server_group.py:L144–L169` |
| `ServerGroupTestV21.test_create_wrong_policy` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_server_group.py:L171–L178` |
| `ServerGroupTestV21.test_get_groups_all_projects` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/test_server_group.py:L180–L210` |
| `ServerGroupTestV21.test_create_duplicated_policy` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_server_group.py:L212–L218` |
| `ServerGroupTestV21.test_create_multiple_policies` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_server_group.py:L220–L225` |
| `ServerGroupTestV21._boot_servers_to_group` | method | (self, group, flavor=None) | private | `servers` (src/nova/tests/functional/test_server_group.py:L233) | 2/7 | `src/nova/tests/functional/test_server_group.py:L227–L233` |
| `ServerGroupTestV21.test_boot_servers_with_affinity` | method | (self) | public | not declared | 2/8 | `src/nova/tests/functional/test_server_group.py:L235–L243` |
| `ServerGroupTestV21.test_boot_servers_with_affinity_overquota` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/test_server_group.py:L245–L270` |
| `ServerGroupTestV21.test_boot_servers_with_affinity_no_valid_host` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_server_group.py:L272–L285` |
| `ServerGroupTestV21.test_boot_servers_with_anti_affinity` | method | (self) | public | not declared | 2/8 | `src/nova/tests/functional/test_server_group.py:L287–L295` |
| `ServerGroupTestV21.test_boot_server_with_anti_affinity_no_valid_host` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_server_group.py:L297–L306` |
| `ServerGroupTestV21._rebuild_with_group` | method | (self, group) | private | `[servers[0], rebuilt_server]` (src/nova/tests/functional/test_server_group.py:L320) | 1/10 | `src/nova/tests/functional/test_server_group.py:L308–L320` |
| `ServerGroupTestV21.test_rebuild_with_affinity` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_server_group.py:L322–L326` |
| `ServerGroupTestV21.test_rebuild_with_anti_affinity` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_server_group.py:L328–L332` |
| `ServerGroupTestV21._migrate_with_group_no_valid_host` | method | (self, group) | private | not declared | 1/8 | `src/nova/tests/functional/test_server_group.py:L334–L345` |
| `ServerGroupTestV21.test_migrate_with_group_no_valid_host` | method | (self) | public | not declared | 2/3 | `src/nova/tests/functional/test_server_group.py:L347–L349` |
| `ServerGroupTestV21.test_migrate_with_anti_affinity` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_server_group.py:L351–L364` |
| `ServerGroupTestV21.test_migrate_with_anti_affinity_confirm_updates_scheduler` | method | (self) | public | not declared | 3/20 | `src/nova/tests/functional/test_server_group.py:L366–L400` |
| `ServerGroupTestV21.test_resize_to_same_host_with_anti_affinity` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/test_server_group.py:L402–L415` |
| `ServerGroupTestV21._get_compute_service_by_host_name` | method | (self, host_name) | private | `host` (src/nova/tests/functional/test_server_group.py:L429) | 3/12 | `src/nova/tests/functional/test_server_group.py:L417–L429` |
| `ServerGroupTestV21._set_forced_down` | method | (self, service, forced_down) | private | not declared | 1/4 | `src/nova/tests/functional/test_server_group.py:L431–L435` |
| `ServerGroupTestV21.test_evacuate_with_anti_affinity` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/test_server_group.py:L437–L459` |
| `ServerGroupTestV21.test_evacuate_with_anti_affinity_no_valid_host` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_server_group.py:L461–L477` |
| `ServerGroupTestV21.test_evacuate_with_affinity_no_valid_host` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_server_group.py:L479–L495` |
| `ServerGroupTestV21.test_soft_affinity_not_supported` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_server_group.py:L497–L504` |
| `ServerGroupTestV21.test_failed_count_with_affinity_violation` | method | (self, mock_host_passes) | public | not declared | 2/27 | `src/nova/tests/functional/test_server_group.py:L508–L548` |
| `ServerGroupTestV21.test_failed_count_with_anti_affinity_violation` | method | (self, mock_host_passes) | public | not declared | 2/23 | `src/nova/tests/functional/test_server_group.py:L552–L586` |
| `ServerGroupAffinityConfTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_server_group.py:L589–L602` |
| `ServerGroupAffinityConfTest._enabled_filters` | field | — | private | not declared | — | `src/nova/tests/functional/test_server_group.py:L591–L591` |
| `ServerGroupAffinityConfTest.test_affinity_no_filter` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_server_group.py:L594–L602` |
| `ServerGroupAntiAffinityConfTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_server_group.py:L605–L618` |
| `ServerGroupAntiAffinityConfTest._enabled_filters` | field | — | private | not declared | — | `src/nova/tests/functional/test_server_group.py:L607–L607` |
| `ServerGroupAntiAffinityConfTest.test_anti_affinity_no_filter` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_server_group.py:L610–L618` |
| `ServerGroupSoftAffinityConfTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_server_group.py:L621–L640` |
| `ServerGroupSoftAffinityConfTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_group.py:L622–L622` |
| `ServerGroupSoftAffinityConfTest.soft_affinity` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_group.py:L623–L624` |
| `ServerGroupSoftAffinityConfTest._get_weight_classes` | method | (self) | private | `['nova.scheduler.weights.affinity.' 'ServerGroupSoftAntiAffinityWeigher']` (src/nova/tests/functional/test_server_group.py:L628) | 1/3 | `src/nova/tests/functional/test_server_group.py:L626–L629` |
| `ServerGroupSoftAffinityConfTest.test_soft_affinity_no_filter` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_server_group.py:L632–L640` |
| `ServerGroupSoftAntiAffinityConfTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_server_group.py:L643–L662` |
| `ServerGroupSoftAntiAffinityConfTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_group.py:L644–L644` |
| `ServerGroupSoftAntiAffinityConfTest.soft_anti_affinity` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_group.py:L645–L646` |
| `ServerGroupSoftAntiAffinityConfTest._get_weight_classes` | method | (self) | private | `['nova.scheduler.weights.affinity.' 'ServerGroupSoftAffinityWeigher']` (src/nova/tests/functional/test_server_group.py:L650) | 1/3 | `src/nova/tests/functional/test_server_group.py:L648–L651` |
| `ServerGroupSoftAntiAffinityConfTest.test_soft_anti_affinity_no_filter` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_server_group.py:L654–L662` |
| `ServerGroupTestV215` | class | — | exported | not declared | — | `src/nova/tests/functional/test_server_group.py:L665–L910` |
| `ServerGroupTestV215.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_group.py:L666–L666` |
| `ServerGroupTestV215.soft_anti_affinity` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_group.py:L668–L669` |
| `ServerGroupTestV215.soft_affinity` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_group.py:L670–L671` |
| `ServerGroupTestV215.setUp` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/test_server_group.py:L673–L685` |
| `ServerGroupTestV215._get_weight_classes` | method | (self) | private | `['nova.scheduler.weights.affinity.' 'ServerGroupSoftAffinityWeigher', 'nova.scheduler.weights.affinity.' 'ServerGroupSoftAntiAffinityWeigher']` (src/nova/tests/functional/test_server_group.py:L688) | 1/5 | `src/nova/tests/functional/test_server_group.py:L687–L691` |
| `ServerGroupTestV215.test_evacuate_with_anti_affinity` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/test_server_group.py:L693–L716` |
| `ServerGroupTestV215.test_evacuate_with_anti_affinity_no_valid_host` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_server_group.py:L718–L734` |
| `ServerGroupTestV215.test_evacuate_with_affinity_no_valid_host` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_server_group.py:L736–L752` |
| `ServerGroupTestV215._check_group_format` | method | (self, group, created_group) | private | not declared | 1/4 | `src/nova/tests/functional/test_server_group.py:L754–L757` |
| `ServerGroupTestV215.test_create_and_delete_groups` | method | (self) | public | not declared | 3/23 | `src/nova/tests/functional/test_server_group.py:L759–L787` |
| `ServerGroupTestV215.test_boot_servers_with_soft_affinity` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_server_group.py:L789–L798` |
| `ServerGroupTestV215.test_boot_servers_with_soft_affinity_no_resource_on_first_host` | method | (self) | public | not declared | 2/12 | `src/nova/tests/functional/test_server_group.py:L800–L818` |
| `ServerGroupTestV215.test_boot_servers_with_soft_anti_affinity` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_server_group.py:L820–L829` |
| `ServerGroupTestV215.test_boot_servers_with_soft_anti_affinity_one_available_host` | method | (self) | public | not declared | 2/9 | `src/nova/tests/functional/test_server_group.py:L831–L840` |
| `ServerGroupTestV215.test_rebuild_with_soft_affinity` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_server_group.py:L842–L846` |
| `ServerGroupTestV215.test_rebuild_with_soft_anti_affinity` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_server_group.py:L848–L852` |
| `ServerGroupTestV215._migrate_with_soft_affinity_policies` | method | (self, group) | private | `[migrated_server['OS-EXT-SRV-ATTR:host'], servers[0]['OS-EXT-SRV-ATTR:host']]` (src/nova/tests/functional/test_server_group.py:L863) | 1/9 | `src/nova/tests/functional/test_server_group.py:L854–L864` |
| `ServerGroupTestV215.test_migrate_with_soft_affinity` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_server_group.py:L866–L869` |
| `ServerGroupTestV215.test_migrate_with_soft_anti_affinity` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_server_group.py:L871–L874` |
| `ServerGroupTestV215._evacuate_with_soft_anti_affinity_policies` | method | (self, group) | private | `[evacuated_server['OS-EXT-SRV-ATTR:host'], servers[0]['OS-EXT-SRV-ATTR:host']]` (src/nova/tests/functional/test_server_group.py:L894) | 1/12 | `src/nova/tests/functional/test_server_group.py:L876–L895` |
| `ServerGroupTestV215.test_evacuate_with_soft_affinity` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_server_group.py:L897–L901` |
| `ServerGroupTestV215.test_evacuate_with_soft_anti_affinity` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_server_group.py:L903–L907` |
| `ServerGroupTestV215.test_soft_affinity_not_supported` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_server_group.py:L909–L910` |
| `ServerGroupTestV264` | class | — | exported | not declared | — | `src/nova/tests/functional/test_server_group.py:L913–L953` |
| `ServerGroupTestV264.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_group.py:L914–L914` |
| `ServerGroupTestV264.anti_affinity` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_group.py:L915–L915` |
| `ServerGroupTestV264.affinity` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_group.py:L916–L916` |
| `ServerGroupTestV264.soft_anti_affinity` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_group.py:L917–L918` |
| `ServerGroupTestV264.soft_affinity` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_group.py:L919–L919` |
| `ServerGroupTestV264._check_group_format` | method | (self, group, created_group) | private | not declared | 1/5 | `src/nova/tests/functional/test_server_group.py:L921–L925` |
| `ServerGroupTestV264.test_boot_server_with_anti_affinity_rules` | method | (self) | public | not declared | 3/21 | `src/nova/tests/functional/test_server_group.py:L927–L953` |
| `ServerGroupTestV295` | class | — | exported | not declared | — | `src/nova/tests/functional/test_server_group.py:L956–L1001` |
| `ServerGroupTestV295.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_group.py:L957–L957` |
| `ServerGroupTestV295._evacuate_with_soft_anti_affinity_policies` | method | (self, group) | private | `[evacuated_server['OS-EXT-SRV-ATTR:host'], servers[0]['OS-EXT-SRV-ATTR:host']]` (src/nova/tests/functional/test_server_group.py:L976) | 1/11 | `src/nova/tests/functional/test_server_group.py:L959–L977` |
| `ServerGroupTestV295.test_evacuate_with_anti_affinity` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/test_server_group.py:L979–L1001` |
| `ServerGroupTestMultiCell` | class | — | exported | not declared | — | `src/nova/tests/functional/test_server_group.py:L1004–L1073` |
| `ServerGroupTestMultiCell.NUMBER_OF_CELLS` | constant | — | public | not declared | — | `src/nova/tests/functional/test_server_group.py:L1006–L1006` |
| `ServerGroupTestMultiCell.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_server_group.py:L1008–L1020` |
| `ServerGroupTestMultiCell._create_aggregate` | method | (self, name) | private | not declared | 1/3 | `src/nova/tests/functional/test_server_group.py:L1022–L1024` |
| `ServerGroupTestMultiCell._add_host_to_aggregate` | method | (self, agg, host) | private | not declared | 1/3 | `src/nova/tests/functional/test_server_group.py:L1026–L1033` |
| `ServerGroupTestMultiCell._set_az_aggregate` | method | (self, agg, az) | private | not declared | 1/10 | `src/nova/tests/functional/test_server_group.py:L1035–L1049` |
| `ServerGroupTestMultiCell.test_boot_servers_with_affinity` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_server_group.py:L1051–L1073` |
| `TestAntiAffinityLiveMigration` | class | — | exported | not declared | — | `src/nova/tests/functional/test_server_group.py:L1076–L1159` |
| `TestAntiAffinityLiveMigration.setUp` | method | (self) | public | not declared | 2/14 | `src/nova/tests/functional/test_server_group.py:L1079–L1097` |
| `TestAntiAffinityLiveMigration.test_serial_no_valid_host_then_pass_with_third_host` | method | (self) | public | not declared | 3/36 | `src/nova/tests/functional/test_server_group.py:L1099–L1159` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/functional/test_server_group.py:L16)
- `oslo_config`: imports `cfg` (src/nova/tests/functional/test_server_group.py:L18)
- `nova.compute`: imports `instance_actions` (src/nova/tests/functional/test_server_group.py:L20)
- `nova`: imports `context` (src/nova/tests/functional/test_server_group.py:L21)
- `nova.db.main`: imports `api as db` (src/nova/tests/functional/test_server_group.py:L22)
- `nova`: imports `objects` (src/nova/tests/functional/test_server_group.py:L23)
- `nova`: imports `test` (src/nova/tests/functional/test_server_group.py:L24)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/test_server_group.py:L25)
- `nova.tests.fixtures`: imports `notifications as notifications_fixtures` (src/nova/tests/functional/test_server_group.py:L26)
- `nova.tests.functional.api`: imports `client` (src/nova/tests/functional/test_server_group.py:L27)
- `nova.tests.functional`: imports `fixtures as func_fixtures` (src/nova/tests/functional/test_server_group.py:L28)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_server_group.py:L29)
- `nova`: imports `utils` (src/nova/tests/functional/test_server_group.py:L30)
- `nova.virt`: imports `fake` (src/nova/tests/functional/test_server_group.py:L31)

## Side Effects

- **global-mutation**: PROJECT_ID_ALT = "616c6c796f7572626173656172656f73" (src/nova/tests/functional/test_server_group.py:L34)
- **global-mutation**: CONF = cfg.CONF (src/nova/tests/functional/test_server_group.py:L36)
- **global-mutation**: REQUIRES_LOCKING = True (src/nova/tests/functional/test_server_group.py:L41)
- **global-mutation**: NUMBER_OF_CELLS = 2 (src/nova/tests/functional/test_server_group.py:L1006)

