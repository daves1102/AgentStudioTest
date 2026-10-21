# src/nova/tests/functional/libvirt/test_pci_sriov_servers.py

## Overview

This file implements the `test_pci_sriov_servers` module, defining 14 classs, 1 classmethod, 43 constants, 9 fields, 16 functions, 160 methods, 2 staticmethods, 28 imports, 87 side effects, 6 security surface entries.

Lines: total 7209, code 5653, comment 634, blank 922

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L47–L47` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L48–L48` |
| `PciPlacementHealingFixture` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L51–L94` |
| `PciPlacementHealingFixture.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L60–L65` |
| `PciPlacementHealingFixture.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L67–L88` |
| `PciPlacementHealingFixture.setUp.wrapped_update` | function | (provider_tree, nodename, pci_tracker, allocations, same_host) | public | `updated` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L80) | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L72–L80` |
| `PciPlacementHealingFixture.last_healing` | method | (self, hostname) | public | `before, after` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L93); `None` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L94) | 4/5 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L90–L94` |
| `_PCIServersTestBase` | class | — | unexported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L97–L310` |
| `_PCIServersTestBase.ADDITIONAL_FILTERS` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L99–L99` |
| `_PCIServersTestBase.PCI_RC` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L101–L101` |
| `_PCIServersTestBase.setUp` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L103–L122` |
| `_PCIServersTestBase.assertPCIDeviceCounts` | method | (self, hostname, total, free) | public | not declared | 3/7 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L124–L131` |
| `_PCIServersTestBase.assert_no_pci_healing` | method | (self, hostname) | public | not declared | 3/17 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L133–L149` |
| `_PCIServersTestBase._get_rp_by_name` | method | (self, name, rps) | private | `rp` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L154) | 3/5 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L151–L155` |
| `_PCIServersTestBase.assert_placement_pci_inventory` | method | (self, hostname, inventories, traits) | public | not declared | 6/38 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L157–L204` |
| `_PCIServersTestBase.assert_placement_pci_usages` | method | (self, hostname, usages) | public | not declared | 2/12 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L206–L218` |
| `_PCIServersTestBase.assert_placement_pci_allocations` | method | (self, allocations) | public | not declared | 3/27 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L220–L246` |
| `_PCIServersTestBase.assert_placement_pci_allocations_on_host` | method | (self, hostname, allocations) | public | not declared | 3/30 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L248–L281` |
| `_PCIServersTestBase.assert_placement_pci_view` | method | (self, hostname, inventories, traits, usages=None, allocations=None) | public | not declared | 3/10 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L283–L294` |
| `_PCIServersTestBase._to_list_of_json_str` | method | (list) | private | `[jsonutils.dumps(x) for x in list]` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L298) | 2/2 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L297–L298` |
| `_PCIServersTestBase._move_allocation` | method | (allocations, from_uuid, to_uuid) | private | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L301–L303` |
| `_PCIServersTestBase._move_server_allocation` | method | (self, allocations, server_uuid, revert=False) | private | not declared | 2/6 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L305–L310` |
| `_PCIServersWithMigrationTestBase` | class | — | unexported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L313–L350` |
| `_PCIServersWithMigrationTestBase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L315–L320` |
| `_PCIServersWithMigrationTestBase._migrate_stub` | method | (self, domain, destination, params, flags) | private | not declared | 1/14 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L322–L350` |
| `SRIOVServersTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L354–L3926` |
| `SRIOVServersTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L358–L358` |
| `SRIOVServersTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L359–L359` |
| `SRIOVServersTest.VFS_ALIAS_NAME` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L361–L361` |
| `SRIOVServersTest.PFS_ALIAS_NAME` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L362–L362` |
| `SRIOVServersTest.PCI_DEVICE_SPEC` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L364–L375` |
| `SRIOVServersTest.PCI_ALIAS` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L379–L391` |
| `SRIOVServersTest.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L393–L400` |
| `SRIOVServersTest._disable_sriov_in_pf` | method | (self, pci_info) | private | not declared | 5/9 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L402–L414` |
| `SRIOVServersTest._verify_guest_xml` | method | (self, xml, expected_managed) | private | not declared | 1/13 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L416–L433` |
| `SRIOVServersTest._run_create_server_test` | method | (self, pci_info, expected_managed, device_spec=None, libvirt_version=None, qemu_version=None) | private | not declared | 3/34 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L435–L480` |
| `SRIOVServersTest.test_create_server_with_VF` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L482–L494` |
| `SRIOVServersTest.test_create_server_with_VF_and_managed_set_to_yes` | method | (self) | public | not declared | 1/20 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L496–L515` |
| `SRIOVServersTest.test_create_server_with_VF_and_managed_set_to_no` | method | (self) | public | not declared | 1/20 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L517–L536` |
| `SRIOVServersTest.test_create_server_with_VF_and_managed_not_set` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L538–L554` |
| `SRIOVServersTest.test_start_compute_with_live_migratable_fails_version` | method | (self) | public | not declared | 2/29 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L556–L589` |
| `SRIOVServersTest.test_create_server_with_PF` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L591–L603` |
| `SRIOVServersTest.test_create_server_with_PF_no_VF` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L605–L622` |
| `SRIOVServersTest.test_create_server_with_VF_no_PF` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L624–L641` |
| `SRIOVServersTest.test_create_server_with_neutron` | method | (self) | public | not declared | 1/33 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L643–L700` |
| `SRIOVServersTest.test_create_server_with_neutron.fake_create` | function | (cls, xml, host) | public | `orig_create(xml, host)` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L661) | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L650–L661` |
| `SRIOVServersTest.test_live_migrate_server_with_PF` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L702–L731` |
| `SRIOVServersTest.test_live_migrate_server_with_VF_legacy` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L733–L764` |
| `SRIOVServersTest.test_live_migrate_VF_success` | method | (self) | public | not declared | 3/58 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L766–L839` |
| `SRIOVServersTest.test_live_migrate_VF_fails_lm_requested_no_lm_dev` | method | (self) | public | not declared | 3/55 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L841–L909` |
| `SRIOVServersTest.test_live_migrate_VF_fails_non_lm_requested` | method | (self) | public | not declared | 3/63 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L911–L990` |
| `SRIOVServersTest.test_live_migrate_VF_fails_non_lm_requested_only_lm_dev` | method | (self) | public | not declared | 3/55 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L992–L1060` |
| `SRIOVServersTest.test_live_migrate_VF_fails_lm_requested_dev_unspecified` | method | (self) | public | not declared | 3/54 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1062–L1130` |
| `SRIOVServersTest.test_live_migrate_VF_fails_non_lm_requested_dev_unspecified` | method | (self) | public | not declared | 3/54 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1132–L1200` |
| `SRIOVServersTest.test_live_migrate_VF_fails_lm_requested_unspecified_lm_dev` | method | (self) | public | not declared | 3/62 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1202–L1280` |
| `SRIOVServersTest.test_live_migrate_VF_fails_lm_requested_unspecified_no_lm_dev` | method | (self) | public | not declared | 3/62 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1282–L1359` |
| `SRIOVServersTest.test_live_migrate_VF_fails_lm_requested_unspecif_unspecif_lm_dev` | method | (self) | public | not declared | 3/61 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1361–L1438` |
| `SRIOVServersTest.test_live_migrate_VF_success_3_VF` | method | (self) | public | not declared | 3/64 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1440–L1532` |
| `SRIOVServersTest.test_live_migrate_VF_fails_dest_no_lm_dev` | method | (self) | public | not declared | 3/80 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1534–L1630` |
| `SRIOVServersTest.test_live_migrate_VF_fails_dest_unspecified_lm_dev` | method | (self) | public | not declared | 3/79 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1632–L1727` |
| `SRIOVServersTest.test_live_migrate_VF_fails_alias_mismatch_dev_prod_id` | method | (self) | public | not declared | 3/72 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1729–L1815` |
| `SRIOVServersTest.test_live_migrate_VF_success_2_aliases` | method | (self) | public | not declared | 3/86 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1817–L1914` |
| `SRIOVServersTest.test_live_migrate_VF_fails_with_pci_in_placement_no_lm` | method | (self) | public | not declared | 3/85 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1916–L2021` |
| `SRIOVServersTest.test_live_migrate_VF_success_with_pci_in_placement` | method | (self) | public | not declared | 3/94 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L2023–L2129` |
| `SRIOVServersTest.test_live_migrate_VF_success_with_pip_3_dev_2_requested` | method | (self) | public | not declared | 3/94 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L2131–L2252` |
| `SRIOVServersTest.test_live_migrate_VF_success_with_pip_2_aliases` | method | (self) | public | not declared | 3/160 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L2254–L2425` |
| `SRIOVServersTest.test_live_migrate_VF_mixed_mode_success` | method | (self, mock_pf) | public | not declared | 3/166 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L2431–L2625` |
| `SRIOVServersTest.test_live_migrate_VF_mixed_mode_fails_lm_requested_no_lm_dev` | method | (self, mock_pf) | public | not declared | 3/123 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L2631–L2770` |
| `SRIOVServersTest.test_live_migrate_VF_mixed_mode_fails_non_lm_requested` | method | (self, mock_pf) | public | not declared | 3/150 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L2776–L2950` |
| `SRIOVServersTest.test_live_migrate_VF_mixed_mode_and_pip_success` | method | (self, mock_pf) | public | not declared | 3/196 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L2956–L3183` |
| `SRIOVServersTest._get_xml` | method | (self, compute, server) | private | `xml` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3191) | 1/7 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3185–L3191` |
| `SRIOVServersTest._assertDeviceAddressesPresent` | method | (self, xml_src, xml_dst) | private | not declared | 2/7 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3193–L3202` |
| `SRIOVServersTest._get_hostdev_addresses` | method | (self, xml) | private | `addresses` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3219) | 2/14 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3204–L3219` |
| `SRIOVServersTest._assertDeviceAddressesMapped` | method | (self, xml_src, xml_dst) | private | not declared | 2/8 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3221–L3232` |
| `SRIOVServersTest._get_hostdev_alias_to_addresses` | method | (self, xml) | private | `alias_addresses_map` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3257) | 3/21 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3234–L3257` |
| `SRIOVServersTest._test_move_operation_with_neutron` | method | (self, move_operation, expect_fail=False) | private | not declared | 6/103 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3259–L3408` |
| `SRIOVServersTest.test_unshelve_server_with_neutron` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3410–L3417` |
| `SRIOVServersTest.test_unshelve_server_with_neutron.move_operation` | function | (source_server) | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3411–L3416` |
| `SRIOVServersTest.test_cold_migrate_server_with_neutron` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3419–L3427` |
| `SRIOVServersTest.test_cold_migrate_server_with_neutron.move_operation` | function | (source_server) | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3420–L3426` |
| `SRIOVServersTest.test_cold_migrate_and_rever_server_with_neutron` | method | (self) | public | not declared | 6/114 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3429–L3590` |
| `SRIOVServersTest.test_evacuate_server_with_neutron` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3592–L3599` |
| `SRIOVServersTest.test_evacuate_server_with_neutron.move_operation` | function | (source_server) | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3593–L3598` |
| `SRIOVServersTest.test_live_migrate_server_with_neutron` | method | (self) | public | not declared | 1/112 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3601–L3752` |
| `SRIOVServersTest.test_get_server_diagnostics_server_with_VF` | method | (self) | public | not declared | 3/28 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3754–L3792` |
| `SRIOVServersTest.test_create_server_after_change_in_nonsriov_pf_to_sriov_pf` | method | (self) | public | not declared | 2/31 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3794–L3846` |
| `SRIOVServersTest.test_change_bound_port_vnic_type_kills_compute_at_restart` | method | (self) | public | not declared | 1/34 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3848–L3926` |
| `SRIOVServersTest.test_change_bound_port_vnic_type_kills_compute_at_restart.fake_get_ifname_by_pci_address` | function | (pci_addr, pf_interface=False) | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3891–L3905` |
| `SRIOVAttachDetachTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3929–L4040` |
| `SRIOVAttachDetachTest.PCI_ALIAS` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3931–L3931` |
| `SRIOVAttachDetachTest.PCI_DEVICE_SPEC` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3933–L3944` |
| `SRIOVAttachDetachTest.setUp` | method | (self) | public | not declared | 2/11 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3946–L3962` |
| `SRIOVAttachDetachTest._get_attached_port_ids` | method | (self, instance_uuid) | private | `[ attachment['port_id'] for attachment in self.api.get_port_interfaces(instance_uuid)]` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3965) | 2/4 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3964–L3967` |
| `SRIOVAttachDetachTest._detach_port` | method | (self, instance_uuid, port_id) | private | not declared | 1/4 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3969–L3972` |
| `SRIOVAttachDetachTest._attach_port` | method | (self, instance_uuid, port_id) | private | not declared | 1/6 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3974–L3979` |
| `SRIOVAttachDetachTest._test_detach_attach` | method | (self, first_port_id, second_port_id) | private | not declared | 1/29 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3981–L4026` |
| `SRIOVAttachDetachTest.test_detach_attach_direct` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4028–L4030` |
| `SRIOVAttachDetachTest.test_detach_macvtap` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4032–L4035` |
| `SRIOVAttachDetachTest.test_detach_direct_physical` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4037–L4040` |
| `VDPAServersTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4043–L4606` |
| `VDPAServersTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4046–L4046` |
| `VDPAServersTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4047–L4047` |
| `VDPAServersTest.PCI_DEVICE_SPEC` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4052–L4063` |
| `VDPAServersTest.PCI_ALIAS` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4065–L4065` |
| `VDPAServersTest.NUM_PFS` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4067–L4067` |
| `VDPAServersTest.NUM_VFS` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4068–L4068` |
| `VDPAServersTest.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4070–L4076` |
| `VDPAServersTest.start_vdpa_compute` | method | (self, hostname='compute-0') | public | `super().start_compute(hostname=hostname, pci_info=pci_info, vdpa_info=vdpa_info)` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4116) | 2/36 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4078–L4117` |
| `VDPAServersTest.create_vdpa_port` | method | (self) | public | `vdpa_port` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4138) | 1/18 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4119–L4138` |
| `VDPAServersTest.test_create_server` | method | (self) | public | not declared | 1/25 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4140–L4199` |
| `VDPAServersTest.test_create_server.fake_create` | function | (cls, xml, host) | public | `orig_create(xml, host)` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4161) | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4145–L4161` |
| `VDPAServersTest._create_port_and_server` | method | (self) | private | `vdpa_port, server` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4205) | 1/4 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4201–L4205` |
| `VDPAServersTest._test_common` | method | (self, op, *args, **kwargs) | private | not declared | 1/9 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4207–L4218` |
| `VDPAServersTest.test_attach_interface_service_version_61` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4222–L4229` |
| `VDPAServersTest.test_attach_interface` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4231–L4251` |
| `VDPAServersTest.test_detach_interface_service_version_61` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4255–L4262` |
| `VDPAServersTest.test_detach_interface` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4264–L4274` |
| `VDPAServersTest.test_shelve_offload` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4276–L4295` |
| `VDPAServersTest.test_unshelve_to_same_host` | method | (self) | public | not declared | 1/21 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4297–L4320` |
| `VDPAServersTest.test_unshelve_to_different_host` | method | (self) | public | not declared | 1/31 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4322–L4360` |
| `VDPAServersTest.test_evacuate` | method | (self) | public | not declared | 1/29 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4362–L4402` |
| `VDPAServersTest.test_resize_same_host` | method | (self) | public | not declared | 1/20 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4404–L4431` |
| `VDPAServersTest.test_resize_different_host` | method | (self) | public | not declared | 1/31 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4433–L4467` |
| `VDPAServersTest.test_resize_revert` | method | (self) | public | not declared | 1/31 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4469–L4506` |
| `VDPAServersTest.test_cold_migrate` | method | (self) | public | not declared | 1/28 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4508–L4541` |
| `VDPAServersTest.test_suspend_and_resume_service_version_62` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4545–L4552` |
| `VDPAServersTest.test_suspend_and_resume` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4554–L4564` |
| `VDPAServersTest.test_live_migrate_service_version_62` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4568–L4575` |
| `VDPAServersTest.test_live_migrate` | method | (self) | public | not declared | 1/23 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4577–L4606` |
| `PCIServersTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4609–L5686` |
| `PCIServersTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4611–L4611` |
| `PCIServersTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4612–L4612` |
| `PCIServersTest.ALIAS_NAME` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4614–L4614` |
| `PCIServersTest.PCI_DEVICE_SPEC` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4615–L4620` |
| `PCIServersTest.PCI_ALIAS` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4621–L4627` |
| `PCIServersTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4629–L4632` |
| `PCIServersTest.test_create_server_with_pci_dev_and_numa` | method | (self) | public | not declared | 1/24 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4634–L4668` |
| `PCIServersTest.test_create_server_with_pci_dev_and_numa_fails` | method | (self) | public | not declared | 1/27 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4670–L4714` |
| `PCIServersTest.test_live_migrate_server_with_pci` | method | (self) | public | not declared | 1/46 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4716–L4779` |
| `PCIServersTest.test_resize_pci_to_vanilla` | method | (self) | public | not declared | 1/51 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4781–L4839` |
| `PCIServersTest.test_resize_vanilla_to_pci` | method | (self) | public | not declared | 1/52 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4841–L4903` |
| `PCIServersTest.test_resize_from_one_dev_to_two` | method | (self) | public | not declared | 1/116 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4905–L5040` |
| `PCIServersTest.test_same_host_resize_with_pci` | method | (self) | public | not declared | 1/100 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5042–L5167` |
| `PCIServersTest._confirm_resize` | method | (self, server, host='host1') | private | not declared | 1/5 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5169–L5179` |
| `PCIServersTest.test_cold_migrate_server_with_pci` | method | (self) | public | not declared | 3/111 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5181–L5343` |
| `PCIServersTest.test_cold_migrate_server_with_pci.fake_create` | function | (cls, xml, host) | public | `orig_create(xml, host)` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5199) | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5185–L5199` |
| `PCIServersTest.test_request_two_pci_but_host_has_one` | method | (self) | public | not declared | 2/22 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5345–L5372` |
| `PCIServersTest._create_two_computes` | method | (self) | private | `( test_compute0_placement_pci_view, test_compute1_placement_pci_view, )` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5402) | 1/30 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5374–L5405` |
| `PCIServersTest._create_two_computes_and_an_instance_on_the_first` | method | (self) | private | `( server, test_compute0_placement_pci_view, test_compute1_placement_pci_view, )` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5427) | 1/21 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5407–L5431` |
| `PCIServersTest.test_evacuate` | method | (self) | public | not declared | 1/71 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5433–L5517` |
| `PCIServersTest.test_unshelve_after_offload` | method | (self) | public | not declared | 1/33 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5519–L5564` |
| `PCIServersTest.test_reschedule` | method | (self) | public | not declared | 2/41 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5566–L5625` |
| `PCIServersTest.test_reschedule.fake_guest_create` | function | (*args, **kwargs) | public | `orig_guest_create(*args, **kwargs)` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5590) | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5581–L5590` |
| `PCIServersTest.test_multi_create` | method | (self) | public | not declared | 4/52 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5627–L5686` |
| `PCIResourceRequestReschedulingTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5689–L5742` |
| `PCIResourceRequestReschedulingTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5692–L5692` |
| `PCIResourceRequestReschedulingTest.PFS_ALIAS_NAME` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5694–L5694` |
| `PCIResourceRequestReschedulingTest.PCI_DEVICE_SPEC` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5695–L5700` |
| `PCIResourceRequestReschedulingTest.PCI_ALIAS` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5701–L5708` |
| `PCIResourceRequestReschedulingTest.test_boot_reschedule_with_proper_pci_device_count` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5710–L5742` |
| `PCIResourceRequestReschedulingTest.test_boot_reschedule_with_proper_pci_device_count.validate_group_policy` | function | (manager, instance, *args, **kwargs) | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5723–L5730` |
| `PCIServersWithPreferredNUMATest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5745–L5843` |
| `PCIServersWithPreferredNUMATest.ALIAS_NAME` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5747–L5747` |
| `PCIServersWithPreferredNUMATest.PCI_DEVICE_SPEC` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5748–L5753` |
| `PCIServersWithPreferredNUMATest.PCI_ALIAS` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5754–L5762` |
| `PCIServersWithPreferredNUMATest.expected_state` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5763–L5763` |
| `PCIServersWithPreferredNUMATest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5765–L5768` |
| `PCIServersWithPreferredNUMATest.test_create_server_with_pci_dev_and_numa` | method | (self) | public | not declared | 2/46 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5770–L5843` |
| `PCIServersWithRequiredNUMATest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5846–L6018` |
| `PCIServersWithRequiredNUMATest.ALIAS_NAME` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5848–L5848` |
| `PCIServersWithRequiredNUMATest.PCI_ALIAS` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5849–L5857` |
| `PCIServersWithRequiredNUMATest.expected_state` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5858–L5858` |
| `PCIServersWithRequiredNUMATest.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5860–L5866` |
| `PCIServersWithRequiredNUMATest.test_create_server_with_pci_dev_and_numa` | method | (self) | public | not declared | 1/39 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5868–L5933` |
| `PCIServersWithRequiredNUMATest.test_create_server_with_pci_dev_and_numa_placement_conflict` | method | (self) | public | not declared | 1/65 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5935–L6018` |
| `PCIServersWithSRIOVAffinityPoliciesTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6022–L6201` |
| `PCIServersWithSRIOVAffinityPoliciesTest.ALIAS_NAME` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6024–L6024` |
| `PCIServersWithSRIOVAffinityPoliciesTest.PCI_DEVICE_SPEC` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6025–L6030` |
| `PCIServersWithSRIOVAffinityPoliciesTest.PCI_ALIAS` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6033–L6041` |
| `PCIServersWithSRIOVAffinityPoliciesTest._test_policy` | method | (self, pci_numa_node, status, policy) | private | not declared | 2/16 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6047–L6070` |
| `PCIServersWithSRIOVAffinityPoliciesTest.test_create_server_with_sriov_numa_affinity_policy_preferred` | method | (self, pci_numa_node, status) | public | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6075–L6083` |
| `PCIServersWithSRIOVAffinityPoliciesTest.test_create_server_with_sriov_numa_affinity_policy_legacy` | method | (self, pci_numa_node, status) | public | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6091–L6100` |
| `PCIServersWithSRIOVAffinityPoliciesTest.test_create_server_with_sriov_numa_affinity_policy_required` | method | (self, pci_numa_node, status) | public | not declared | 1/13 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6107–L6132` |
| `PCIServersWithSRIOVAffinityPoliciesTest.test_socket_policy_pass` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6134–L6153` |
| `PCIServersWithSRIOVAffinityPoliciesTest.test_socket_policy_fail` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6155–L6175` |
| `PCIServersWithSRIOVAffinityPoliciesTest.test_socket_policy_multi_numa_pass` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6177–L6201` |
| `PCIServersWithPortNUMAPoliciesTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6205–L6434` |
| `PCIServersWithPortNUMAPoliciesTest.ALIAS_NAME` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6207–L6207` |
| `PCIServersWithPortNUMAPoliciesTest.PCI_DEVICE_SPEC` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6208–L6219` |
| `PCIServersWithPortNUMAPoliciesTest.PCI_ALIAS` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6222–L6230` |
| `PCIServersWithPortNUMAPoliciesTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6232–L6240` |
| `PCIServersWithPortNUMAPoliciesTest._create_port_with_policy` | method | (self, policy) | private | `port_id` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6251) | 1/9 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6242–L6251` |
| `PCIServersWithPortNUMAPoliciesTest._test_policy` | method | (self, pci_numa_node, status, policy) | private | not declared | 2/21 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6257–L6286` |
| `PCIServersWithPortNUMAPoliciesTest.test_create_server_with_sriov_numa_affinity_policy_preferred` | method | (self, pci_numa_node, status) | public | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6291–L6299` |
| `PCIServersWithPortNUMAPoliciesTest.test_create_server_with_sriov_numa_affinity_policy_legacy` | method | (self, pci_numa_node, status) | public | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6307–L6316` |
| `PCIServersWithPortNUMAPoliciesTest.test_create_server_with_sriov_numa_affinity_policy_required` | method | (self, pci_numa_node, status) | public | not declared | 1/13 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6323–L6348` |
| `PCIServersWithPortNUMAPoliciesTest.test_socket_policy_pass` | method | (self) | public | not declared | 1/20 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6350–L6374` |
| `PCIServersWithPortNUMAPoliciesTest.test_socket_policy_fail` | method | (self) | public | not declared | 1/23 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6376–L6403` |
| `PCIServersWithPortNUMAPoliciesTest.test_socket_policy_multi_numa_pass` | method | (self) | public | not declared | 1/22 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6405–L6434` |
| `RemoteManagedServersTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6437–L6997` |
| `RemoteManagedServersTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6439–L6439` |
| `RemoteManagedServersTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6440–L6440` |
| `RemoteManagedServersTest.PCI_DEVICE_SPEC` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6442–L6471` |
| `RemoteManagedServersTest.PCI_ALIAS` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6473–L6473` |
| `RemoteManagedServersTest.NUM_PFS` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6475–L6475` |
| `RemoteManagedServersTest.NUM_VFS` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6476–L6476` |
| `RemoteManagedServersTest.vf_ratio` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6477–L6477` |
| `RemoteManagedServersTest.FAKE_LIBVIRT_VERSION` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6480–L6480` |
| `RemoteManagedServersTest.setUp` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6482–L6502` |
| `RemoteManagedServersTest._get_pci_function_number` | method | (cls, pci_addr) | private | `int(slot, 16) + int(function, 16) - cls.NUM_PFS` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6513) | 1/3 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6505–L6513` |
| `RemoteManagedServersTest.start_compute` | method | (self, hostname='test_compute0', host_info=None, pci_info=None, mdev_info=None, vdpa_info=None, libvirt_version=None, qemu_version=None) | public | `super().start_compute( hostname=hostname, host_info=host_info, pci_info=pci_info, mdev_info=mdev_info, vdpa_info=vdpa_info, libvirt_version=libvirt_version or self.FAKE_LIBVIRT_VERSION)` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6606) | 5/89 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6515–L6609` |
| `RemoteManagedServersTest.create_remote_managed_tunnel_port` | method | (self) | public | `dpu_tunnel_port` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6629) | 1/18 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6611–L6629` |
| `RemoteManagedServersTest.create_remote_managed_physnet_port` | method | (self) | public | `dpu_physnet_port` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6649) | 1/18 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6631–L6649` |
| `RemoteManagedServersTest.test_create_server_physnet` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6651–L6681` |
| `RemoteManagedServersTest.test_create_server_tunnel` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6683–L6711` |
| `RemoteManagedServersTest._test_common` | method | (self, op, *args, **kwargs) | private | not declared | 1/5 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6713–L6717` |
| `RemoteManagedServersTest.test_attach_interface` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6719–L6739` |
| `RemoteManagedServersTest.test_detach_interface` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6741–L6746` |
| `RemoteManagedServersTest.test_shelve` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6748–L6753` |
| `RemoteManagedServersTest.test_suspend` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6755–L6761` |
| `RemoteManagedServersTest._test_move_operation_with_neutron` | method | (self, move_operation, dpu_port) | private | not declared | 2/73 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6763–L6844` |
| `RemoteManagedServersTest.test_unshelve_server_with_neutron` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6846–L6875` |
| `RemoteManagedServersTest.test_unshelve_server_with_neutron.move_operation` | function | (source_server) | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6847–L6853` |
| `RemoteManagedServersTest.test_cold_migrate_server_with_neutron` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6877–L6904` |
| `RemoteManagedServersTest.test_cold_migrate_server_with_neutron.move_operation` | function | (source_server) | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6878–L6901` |
| `RemoteManagedServersTest.test_cold_migrate_server_with_neutron_revert` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6906–L6935` |
| `RemoteManagedServersTest.test_cold_migrate_server_with_neutron_revert.move_operation` | function | (source_server) | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6907–L6932` |
| `RemoteManagedServersTest.test_evacuate_server_with_neutron` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6937–L6966` |
| `RemoteManagedServersTest.test_evacuate_server_with_neutron.move_operation` | function | (source_server) | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6938–L6944` |
| `RemoteManagedServersTest.test_live_migrate_server_with_neutron` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6968–L6997` |
| `RemoteManagedServersTest.test_live_migrate_server_with_neutron.move_operation` | function | (source_server) | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6974–L6975` |
| `TestPackNUMACellsWithPCIDevices` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L7000–L7209` |
| `TestPackNUMACellsWithPCIDevices.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L7013–L7013` |
| `TestPackNUMACellsWithPCIDevices.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L7014–L7014` |
| `TestPackNUMACellsWithPCIDevices.PCI_DEVICE_SPEC` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L7016–L7019` |
| `TestPackNUMACellsWithPCIDevices.PCI_ALIAS` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L7020–L7025` |
| `TestPackNUMACellsWithPCIDevices.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L7027–L7038` |
| `TestPackNUMACellsWithPCIDevices._start_compute_with_pci` | method | (self, pci_numa_node) | private | not declared | 3/25 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L7040–L7077` |
| `TestPackNUMACellsWithPCIDevices.test_scheduler_and_claim_agree_on_non_pci_vm_placement` | method | (self) | public | not declared | 1/27 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L7079–L7145` |
| `TestPackNUMACellsWithPCIDevices.test_scheduler_and_claim_agree_on_non_pci_vm_placement.spy_numa_fit` | function | (*args, **kwargs) | public | `result` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L7111) | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L7108–L7111` |
| `TestPackNUMACellsWithPCIDevices.test_non_pci_vm_pack_sequential_avoids_pci_node` | method | (self) | public | not declared | 3/16 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L7147–L7173` |
| `TestPackNUMACellsWithPCIDevices.test_pci_vm_lands_on_pci_numa_node_with_pack` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L7175–L7209` |
| `_PCIServersTestBase._to_list_of_json_str` | staticmethod | — | private | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L296–L298` |
| `_PCIServersTestBase._move_allocation` | staticmethod | — | private | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L300–L303` |
| `RemoteManagedServersTest._get_pci_function_number` | classmethod | — | private | not declared | — | `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6504–L6513` |

## Dependencies

- `import copy` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L16)
- `import pprint` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L17)
- `unittest`: imports `mock` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L18)
- `urllib`: imports `parse as urlparse` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L19)
- `import ddt` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L21)
- `import fixtures` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L22)
- `lxml`: imports `etree` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L23)
- `oslo_config`: imports `cfg` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L24)
- `oslo_log`: imports `log as logging` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L25)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L26)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L27)
- `oslo_utils`: imports `units` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L28)
- `oslo_utils`: imports `versionutils` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L29)
- `import nova` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L31)
- `nova.compute`: imports `pci_placement_translator` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L32)
- `nova`: imports `context` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L33)
- `nova`: imports `exception` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L34)
- `nova.network`: imports `constants` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L35)
- `nova`: imports `objects` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L36)
- `nova.objects`: imports `fields` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L37)
- `nova.objects`: imports `instance` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L38)
- `nova.pci.utils`: imports `parse_address` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L39)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L40)
- `nova.tests.fixtures`: imports `libvirt as fakelibvirt` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L41)
- `nova.tests.functional.api`: imports `client` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L42)
- `nova.tests.functional.libvirt`: imports `base` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L43)
- `nova.virt`: imports `hardware` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L44)
- `nova.virt.libvirt`: imports `driver` (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L45)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L47)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L48)
- **global-mutation**: ADDITIONAL_FILTERS = ['NUMATopologyFilter', 'PciPassthroughFilter'] (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L99)
- **global-mutation**: PCI_RC = f"CUSTOM_PCI_{fakelibvirt.PCI_VEND_ID}_{fakelibvirt.PCI_PROD_ID}" (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L101)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L358)
- **global-mutation**: VFS_ALIAS_NAME = 'vfs' (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L361)
- **global-mutation**: PFS_ALIAS_NAME = 'pfs' (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L362)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L364)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L379)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L771)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L779)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L846)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L854)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L916)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L924)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L997)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1005)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1068)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1075)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1138)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1145)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1208)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1216)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1287)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1295)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1367)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1374)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1444)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1458)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1540)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1565)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1638)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1662)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1735)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1760)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1818)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1843)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1922)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L1937)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L2024)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L2039)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L2132)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L2147)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L2255)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L2282)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L2437)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L2462)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L2638)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L2663)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L2781)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L2806)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L2963)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L2989)
- **global-mutation**: PCI_ALIAS = [] (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3931)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3933)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4046)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4052)
- **global-mutation**: PCI_ALIAS = [] (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4065)
- **global-mutation**: NUM_PFS = 1 (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4067)
- **global-mutation**: NUM_VFS = 4 (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4068)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4611)
- **global-mutation**: ALIAS_NAME = 'a1' (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4614)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4615)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L4621)
- **global-mutation**: PFS_ALIAS_NAME = 'pfs' (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5694)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5695)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5701)
- **global-mutation**: ALIAS_NAME = 'a1' (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5747)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5748)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5754)
- **global-mutation**: ALIAS_NAME = 'a1' (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5848)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5849)
- **global-mutation**: ALIAS_NAME = 'a1' (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6024)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6025)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6033)
- **global-mutation**: ALIAS_NAME = 'a1' (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6207)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6208)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6222)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6439)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps(x) for x in ( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6442)
- **global-mutation**: PCI_ALIAS = [] (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6473)
- **global-mutation**: NUM_PFS = 1 (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6475)
- **global-mutation**: NUM_VFS = 4 (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6476)
- **global-mutation**: FAKE_LIBVIRT_VERSION = 8_000_000  # 8.0.0 (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L6480)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L7013)
- **global-mutation**: PCI_DEVICE_SPEC = [jsonutils.dumps({ (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L7016)
- **global-mutation**: PCI_ALIAS = [jsonutils.dumps({ (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L7020)

## Security Surface

- **sink** (`db-write`): extra_spec.update({'hw:cpu_policy': 'dedicated'}) (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L2473)
- **sink** (`db-write`): extra_spec.update({'hw:cpu_policy': 'dedicated'}) (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L2674)
- **sink** (`db-write`): extra_spec.update({'hw:cpu_policy': 'dedicated'}) (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L2817)
- **sink** (`db-write`): extra_spec.update({'hw:cpu_policy': 'dedicated'}) (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3002)
- **sink** (`db-write`): alias_addresses_map.update( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L3246)
- **sink** (`db-write`): body.update( (src/nova/tests/functional/libvirt/test_pci_sriov_servers.py:L5656)

