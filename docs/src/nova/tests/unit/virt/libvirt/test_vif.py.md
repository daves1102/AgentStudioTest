# src/nova/tests/unit/virt/libvirt/test_vif.py

## Overview

This file implements the `test_vif` module, defining 1 class, 1 constant, 47 fields, 103 methods, 20 imports, 17 side effects, 16 security surface entries.

Lines: total 1835, code 1555, comment 30, blank 250

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L38–L38` |
| `LibvirtVifTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L41–L1835` |
| `LibvirtVifTestCase.gateway_bridge_4` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L43–L43` |
| `LibvirtVifTestCase.dns_bridge_4` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L44–L44` |
| `LibvirtVifTestCase.ips_bridge_4` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L45–L45` |
| `LibvirtVifTestCase.subnet_bridge_4` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L46–L51` |
| `LibvirtVifTestCase.gateway_bridge_6` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L53–L53` |
| `LibvirtVifTestCase.subnet_bridge_6` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L54–L58` |
| `LibvirtVifTestCase.network_bridge` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L60–L65` |
| `LibvirtVifTestCase.vif_bridge` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L67–L75` |
| `LibvirtVifTestCase.network_ovs` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L77–L82` |
| `LibvirtVifTestCase.network_ivs` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L84–L89` |
| `LibvirtVifTestCase.vif_agilio_ovs` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L91–L97` |
| `LibvirtVifTestCase.vif_agilio_ovs_direct` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L99–L106` |
| `LibvirtVifTestCase.vif_agilio_ovs_forwarder` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L108–L118` |
| `LibvirtVifTestCase.vif_ovs` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L120–L126` |
| `LibvirtVifTestCase.vif_ovs_direct` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L128–L135` |
| `LibvirtVifTestCase.vif_ovs_filter_cap` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L137–L144` |
| `LibvirtVifTestCase.vif_ovs_legacy` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L146–L151` |
| `LibvirtVifTestCase.vif_ivs` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L153–L158` |
| `LibvirtVifTestCase.vif_none` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L160–L165` |
| `LibvirtVifTestCase.network_8021` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L167–L173` |
| `LibvirtVifTestCase.vif_8021qbh` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L175–L186` |
| `LibvirtVifTestCase.vif_hw_veb` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L188–L198` |
| `LibvirtVifTestCase.vif_hw_veb_arq` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L200–L210` |
| `LibvirtVifTestCase.vif_hw_veb_trusted` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L212–L223` |
| `LibvirtVifTestCase.vif_hostdev_physical` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L225–L233` |
| `LibvirtVifTestCase.vif_hw_veb_macvtap` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L235–L244` |
| `LibvirtVifTestCase.vif_8021qbg` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L246–L255` |
| `LibvirtVifTestCase.network_midonet` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L257–L261` |
| `LibvirtVifTestCase.network_vrouter` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L263–L267` |
| `LibvirtVifTestCase.vif_vrouter` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L269–L273` |
| `LibvirtVifTestCase.vif_vrouter_direct` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L275–L281` |
| `LibvirtVifTestCase.vif_vrouter_forwarder` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L283–L292` |
| `LibvirtVifTestCase.vif_contrail_vrouter` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L294–L301` |
| `LibvirtVifTestCase.vif_ib_hostdev` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L303–L312` |
| `LibvirtVifTestCase.vif_midonet` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L314–L318` |
| `LibvirtVifTestCase.vif_tap` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L320–L323` |
| `LibvirtVifTestCase.vif_iovisor` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L325–L330` |
| `LibvirtVifTestCase.vif_vhostuser` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L332–L339` |
| `LibvirtVifTestCase.vif_vhostuser_ovs` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L341–L349` |
| `LibvirtVifTestCase.vif_vhostuser_no_path` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L351–L355` |
| `LibvirtVifTestCase.vif_macvtap_vlan` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L357–L365` |
| `LibvirtVifTestCase.vif_macvtap_flat` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L367–L374` |
| `LibvirtVifTestCase.vif_macvtap_exception` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L376–L379` |
| `LibvirtVifTestCase.instance` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L381–L383` |
| `LibvirtVifTestCase.flavor_1vcpu` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L385–L385` |
| `LibvirtVifTestCase.flavor_2vcpu` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L387–L387` |
| `LibvirtVifTestCase.bandwidth` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_vif.py:L389–L396` |
| `LibvirtVifTestCase.setup_os_vif_objects` | method | (self) | public | not declared | 1/87 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L398–L495` |
| `LibvirtVifTestCase.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L497–L510` |
| `LibvirtVifTestCase._get_node` | method | (self, xml) | private | `ret[0]` (src/nova/tests/unit/virt/libvirt/test_vif.py:L516) | 1/5 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L512–L516` |
| `LibvirtVifTestCase._assertMacEquals` | method | (self, node, vif) | private | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L518–L520` |
| `LibvirtVifTestCase._assertTypeEquals` | method | (self, node, type, attr, source, br_want, managed_want=None) | private | not declared | 2/8 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L522–L529` |
| `LibvirtVifTestCase._assertTypeAndMacEquals` | method | (self, node, type, attr, source, vif, br_want=None, managed_want=None) | private | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L531–L534` |
| `LibvirtVifTestCase._assertModel` | method | (self, xml, model_want=None, driver_want=None) | private | not declared | 3/14 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L536–L549` |
| `LibvirtVifTestCase._assertTypeAndPciEquals` | method | (self, node, type, vif) | private | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L551–L553` |
| `LibvirtVifTestCase._assertPciEqual` | method | (self, node, vif, type=None) | private | not declared | 2/12 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L555–L567` |
| `LibvirtVifTestCase._assertQueueSizeEquals` | method | (self, node, rx_want, tx_want) | private | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L569–L573` |
| `LibvirtVifTestCase._assertXmlEqual` | method | (self, expectedXmlstr, actualXmlstr) | private | not declared | 2/5 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L575–L579` |
| `LibvirtVifTestCase._get_conf` | method | (self) | private | `conf` (src/nova/tests/unit/virt/libvirt/test_vif.py:L588) | 1/8 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L581–L588` |
| `LibvirtVifTestCase._get_instance_xml` | method | (self, driver, vif, image_meta=None, flavor=None) | private | `conf.to_xml()` (src/nova/tests/unit/virt/libvirt/test_vif.py:L614) | 3/21 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L590–L614` |
| `LibvirtVifTestCase._test_virtio_multiqueue` | method | (self, vcpus, want_queues) | private | not declared | 1/27 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L616–L645` |
| `LibvirtVifTestCase.test_virtio_multiqueue` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L647–L648` |
| `LibvirtVifTestCase.test_virtio_multiqueue_in_kernel_2` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L650–L653` |
| `LibvirtVifTestCase.test_virtio_multiqueue_in_kernel_3` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L655–L658` |
| `LibvirtVifTestCase.test_virtio_multiqueue_in_kernel_4` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L660–L663` |
| `LibvirtVifTestCase.test_virtio_multiqueue_in_kernel_2_max_queues` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L665–L669` |
| `LibvirtVifTestCase.test_virtio_multiqueue_in_kernel_3_max_queues` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L671–L675` |
| `LibvirtVifTestCase.test_virtio_multiqueue_in_kernel_4_max_queues` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L677–L681` |
| `LibvirtVifTestCase.test_vhostuser_os_vif_multiqueue` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L683–L709` |
| `LibvirtVifTestCase._test_virtio_packed_config` | method | (self, image_meta, flavor) | private | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L711–L719` |
| `LibvirtVifTestCase.test_image_packed_config` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L721–L730` |
| `LibvirtVifTestCase.test_flavor_packed_config` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L732–L741` |
| `LibvirtVifTestCase._test_virtio_config_queue_sizes` | method | (self, vnic_type=network_model.VNIC_TYPE_NORMAL) | private | `v, conf` (src/nova/tests/unit/virt/libvirt/test_vif.py:L751) | 1/9 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L743–L751` |
| `LibvirtVifTestCase.test_virtio_vhost_queue_sizes` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L753–L756` |
| `LibvirtVifTestCase.test_virtio_vhost_queue_sizes_vnic_type_direct` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L758–L762` |
| `LibvirtVifTestCase.test_virtio_vhost_queue_sizes_vnic_type_direct_physical` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L764–L768` |
| `LibvirtVifTestCase.test_virtio_vhost_queue_sizes_vnic_type_macvtap` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L770–L774` |
| `LibvirtVifTestCase.test_virtio_vhost_queue_sizes_vnic_type_virtio_forwarder` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L776–L780` |
| `LibvirtVifTestCase.test_virtio_vhostuser_osvif_queue_sizes` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L782–L786` |
| `LibvirtVifTestCase.test_multiple_nics` | method | (self) | public | not declared | 3/31 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L788–L822` |
| `LibvirtVifTestCase.test_model_novirtio` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L824–L831` |
| `LibvirtVifTestCase.test_model_kvm` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L833–L840` |
| `LibvirtVifTestCase.test_model_parallels` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L842–L849` |
| `LibvirtVifTestCase.test_model_kvm_qemu_parallels_custom` | method | (self) | public | not declared | 5/32 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L851–L883` |
| `LibvirtVifTestCase.test_model_with_osinfo` | method | (self, mock_set) | public | not declared | 1/28 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L886–L913` |
| `LibvirtVifTestCase._test_model_sriov` | method | (self, vnic_type, mock_set) | private | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L917–L934` |
| `LibvirtVifTestCase.test_model_sriov_direct` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L936–L937` |
| `LibvirtVifTestCase.test_model_accelerator_direct` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L939–L940` |
| `LibvirtVifTestCase.test_model_qemu` | method | (self) | public | not declared | 2/31 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L942–L980` |
| `LibvirtVifTestCase.test_generic_driver_none` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L982–L987` |
| `LibvirtVifTestCase._check_bridge_driver` | method | (self, d, vif, br_want) | private | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L989–L993` |
| `LibvirtVifTestCase.test_generic_driver_bridge` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L995–L999` |
| `LibvirtVifTestCase._test_hw_veb_op` | method | (self, op, vlan) | private | not declared | 3/25 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1001–L1025` |
| `LibvirtVifTestCase.test_plug_hw_veb` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1027–L1031` |
| `LibvirtVifTestCase.test_unplug_hw_veb` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1033–L1035` |
| `LibvirtVifTestCase.test_plug_hw_veb_trusted` | method | (self, mset_vf_trusted) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1038–L1041` |
| `LibvirtVifTestCase.test_unplug_hw_veb_trusted` | method | (self, mset_vf_trusted) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1044–L1047` |
| `LibvirtVifTestCase.test_unplug_iovisor` | method | (self, mock_unplug) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1051–L1053` |
| `LibvirtVifTestCase.test_plug_iovisor` | method | (self, mock_create_tap_dev, mock_plug, device_exists) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1058–L1067` |
| `LibvirtVifTestCase.test_direct_plug_with_port_filter_cap_no_nova_firewall` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1069–L1075` |
| `LibvirtVifTestCase.test_ib_hostdev_driver` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1077–L1083` |
| `LibvirtVifTestCase.test_midonet_ethernet_vif_driver` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1085–L1091` |
| `LibvirtVifTestCase.test_tap_ethernet_vif_driver` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1093–L1099` |
| `LibvirtVifTestCase.test_plug_tap_kvm_virtio` | method | (self, mock_create_tap_dev, mock_set_mtu, mock_device_exists) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1104–L1129` |
| `LibvirtVifTestCase.test_plug_tap_mq_ignored_1vcpu` | method | (self, mock_create_tap_dev, mock_set_mtu, mock_device_exists) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1134–L1147` |
| `LibvirtVifTestCase.test_plug_tap_mq_ignored_virt_type` | method | (self, mock_create_tap_dev, mock_set_mtu, mock_device_exists) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1152–L1170` |
| `LibvirtVifTestCase.test_plug_tap_mq_ignored_vif_model` | method | (self, mock_create_tap_dev, mock_set_mtu, mock_device_exists) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1175–L1190` |
| `LibvirtVifTestCase.test_unplug_tap` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1192–L1194` |
| `LibvirtVifTestCase.test_generic_8021qbh_driver` | method | (self) | public | not declared | 3/17 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1196–L1213` |
| `LibvirtVifTestCase.test_hw_veb_driver` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1215–L1224` |
| `LibvirtVifTestCase.test_hostdev_physical_driver` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1226–L1232` |
| `LibvirtVifTestCase.test_hw_veb_driver_macvtap` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1234–L1247` |
| `LibvirtVifTestCase.test_driver_macvtap_vlan` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1249–L1258` |
| `LibvirtVifTestCase.test_driver_macvtap_flat` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1260–L1269` |
| `LibvirtVifTestCase.test_driver_macvtap_exception` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1271–L1279` |
| `LibvirtVifTestCase.test_hw_veb_driver_arq` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1281–L1290` |
| `LibvirtVifTestCase.test_macvtap_plug_vlan` | method | (self, ensure_vlan_mock) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1293–L1296` |
| `LibvirtVifTestCase.test_macvtap_plug_flat` | method | (self, ensure_vlan_mock) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1299–L1302` |
| `LibvirtVifTestCase.test_generic_iovisor_driver` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1304–L1310` |
| `LibvirtVifTestCase.test_generic_8021qbg_driver` | method | (self) | public | not declared | 6/38 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1312–L1352` |
| `LibvirtVifTestCase.test_vhostuser_driver` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1354–L1368` |
| `LibvirtVifTestCase.test_vhostuser_driver_queue_sizes` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1370–L1376` |
| `LibvirtVifTestCase.test_vhostuser_driver_no_path` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1378–L1384` |
| `LibvirtVifTestCase.test_vhostuser_driver_ovs` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1386–L1401` |
| `LibvirtVifTestCase.test_ovs_direct` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1403–L1410` |
| `LibvirtVifTestCase.test_agilio_ovs_direct` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1412–L1419` |
| `LibvirtVifTestCase.test_agilio_ovs_forwarder` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1421–L1436` |
| `LibvirtVifTestCase.test_ivs_ethernet_driver` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1438–L1446` |
| `LibvirtVifTestCase.test_vrouter` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1448–L1455` |
| `LibvirtVifTestCase.test_vrouter_direct` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1457–L1465` |
| `LibvirtVifTestCase.test_vrouter_forwarder` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1467–L1483` |
| `LibvirtVifTestCase.test_contrail_vrouter` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1485–L1501` |
| `LibvirtVifTestCase._test_osvif_plug` | method | (self, fail, mock_plug, mock_convert_vif, mock_convert_inst) | private | not declared | 2/14 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1506–L1521` |
| `LibvirtVifTestCase.test_osvif_plug_normal` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1523–L1524` |
| `LibvirtVifTestCase.test_osvif_plug_fail` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1526–L1527` |
| `LibvirtVifTestCase.test_osvif_plug_multiqueue_with_create_tap` | method | (self, mock_plug, mock_convert_vif, mock_convert_inst) | public | not declared | 3/35 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1532–L1577` |
| `LibvirtVifTestCase.test_osvif_plug_multiqueue_without_create_tap` | method | (self, mock_plug, mock_convert_vif, mock_convert_inst) | public | not declared | 3/36 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1582–L1628` |
| `LibvirtVifTestCase._test_osvif_unplug` | method | (self, fail, mock_unplug, mock_convert_vif, mock_convert_inst) | private | not declared | 2/14 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1633–L1648` |
| `LibvirtVifTestCase.test_osvif_unplug_normal` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1650–L1651` |
| `LibvirtVifTestCase.test_osvif_unplug_fail` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1653–L1654` |
| `LibvirtVifTestCase._test_config_os_vif` | method | (self, os_vif_model, vif_model, expected_xml, mock_convert_vif, mock_convert_inst) | private | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1658–L1668` |
| `LibvirtVifTestCase.test_config_os_vif_vhostuser` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1670–L1683` |
| `LibvirtVifTestCase.test_config_os_vif_agilio_ovs_fallthrough` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1685–L1701` |
| `LibvirtVifTestCase.test_config_os_vif_agilio_ovs_forwarder` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1703–L1716` |
| `LibvirtVifTestCase.test_config_os_vif_agilio_ovs_direct` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1718–L1731` |
| `LibvirtVifTestCase.test_config_os_vif_ovs` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1733–L1749` |
| `LibvirtVifTestCase.test_config_os_vif_ovs_hybrid` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1751–L1768` |
| `LibvirtVifTestCase.test_config_os_vif_ovs_with_create_tap` | method | (self) | public | not declared | 2/30 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1770–L1808` |
| `LibvirtVifTestCase.test_config_os_vif_hostdevice_ethernet` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1810–L1823` |
| `LibvirtVifTestCase.test_config_os_vif_hostdevice_generic` | method | (self, mock_convert_vif, mock_convert_inst) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_vif.py:L1827–L1835` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/test_vif.py:L15)
- `import fixtures` (src/nova/tests/unit/virt/libvirt/test_vif.py:L17)
- `lxml`: imports `etree` (src/nova/tests/unit/virt/libvirt/test_vif.py:L18)
- `import os_vif` (src/nova/tests/unit/virt/libvirt/test_vif.py:L19)
- `os_vif`: imports `exception as osv_exception` (src/nova/tests/unit/virt/libvirt/test_vif.py:L20)
- `os_vif`: imports `objects as osv_objects` (src/nova/tests/unit/virt/libvirt/test_vif.py:L21)
- `os_vif.objects`: imports `fields as osv_fields` (src/nova/tests/unit/virt/libvirt/test_vif.py:L22)
- `oslo_concurrency`: imports `processutils` (src/nova/tests/unit/virt/libvirt/test_vif.py:L23)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/virt/libvirt/test_vif.py:L24)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/virt/libvirt/test_vif.py:L25)
- `nova`: imports `exception` (src/nova/tests/unit/virt/libvirt/test_vif.py:L27)
- `nova.network`: imports `model as network_model` (src/nova/tests/unit/virt/libvirt/test_vif.py:L28)
- `nova`: imports `objects` (src/nova/tests/unit/virt/libvirt/test_vif.py:L29)
- `nova.pci`: imports `utils as pci_utils` (src/nova/tests/unit/virt/libvirt/test_vif.py:L30)
- `nova`: imports `test` (src/nova/tests/unit/virt/libvirt/test_vif.py:L31)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/virt/libvirt/test_vif.py:L32)
- `nova.tests.fixtures`: imports `libvirt as fakelibvirt` (src/nova/tests/unit/virt/libvirt/test_vif.py:L33)
- `nova.tests.unit.virt`: imports `fakelibosinfo` (src/nova/tests/unit/virt/libvirt/test_vif.py:L34)
- `nova.virt.libvirt`: imports `config as vconfig` (src/nova/tests/unit/virt/libvirt/test_vif.py:L35)
- `nova.virt.libvirt`: imports `vif` (src/nova/tests/unit/virt/libvirt/test_vif.py:L36)

## Side Effects

- **process-spawn**: @mock.patch('nova.privsep.libvirt.unplug_plumgrid_vif', (src/nova/tests/unit/virt/libvirt/test_vif.py:L1049)
- **process-spawn**: @mock.patch('nova.privsep.linux_net.device_exists') (src/nova/tests/unit/virt/libvirt/test_vif.py:L1055)
- **process-spawn**: @mock.patch('nova.privsep.libvirt.plug_plumgrid_vif') (src/nova/tests/unit/virt/libvirt/test_vif.py:L1056)
- **process-spawn**: @mock.patch('nova.privsep.linux_net.create_tap_dev') (src/nova/tests/unit/virt/libvirt/test_vif.py:L1057)
- **process-spawn**: @mock.patch('nova.privsep.linux_net.device_exists', return_value=True) (src/nova/tests/unit/virt/libvirt/test_vif.py:L1101)
- **process-spawn**: @mock.patch('nova.privsep.linux_net.set_device_mtu') (src/nova/tests/unit/virt/libvirt/test_vif.py:L1102)
- **process-spawn**: @mock.patch('nova.privsep.linux_net.create_tap_dev') (src/nova/tests/unit/virt/libvirt/test_vif.py:L1103)
- **process-spawn**: @mock.patch('nova.privsep.linux_net.device_exists', return_value=True) (src/nova/tests/unit/virt/libvirt/test_vif.py:L1131)
- **process-spawn**: @mock.patch('nova.privsep.linux_net.set_device_mtu') (src/nova/tests/unit/virt/libvirt/test_vif.py:L1132)
- **process-spawn**: @mock.patch('nova.privsep.linux_net.create_tap_dev') (src/nova/tests/unit/virt/libvirt/test_vif.py:L1133)
- **process-spawn**: @mock.patch('nova.privsep.linux_net.device_exists', return_value=True) (src/nova/tests/unit/virt/libvirt/test_vif.py:L1149)
- **process-spawn**: @mock.patch('nova.privsep.linux_net.set_device_mtu') (src/nova/tests/unit/virt/libvirt/test_vif.py:L1150)
- **process-spawn**: @mock.patch('nova.privsep.linux_net.create_tap_dev') (src/nova/tests/unit/virt/libvirt/test_vif.py:L1151)
- **process-spawn**: @mock.patch('nova.privsep.linux_net.device_exists', return_value=True) (src/nova/tests/unit/virt/libvirt/test_vif.py:L1172)
- **process-spawn**: @mock.patch('nova.privsep.linux_net.set_device_mtu') (src/nova/tests/unit/virt/libvirt/test_vif.py:L1173)
- **process-spawn**: @mock.patch('nova.privsep.linux_net.create_tap_dev') (src/nova/tests/unit/virt/libvirt/test_vif.py:L1174)
- **global-mutation**: CONF = cfg.CONF (src/nova/tests/unit/virt/libvirt/test_vif.py:L38)

## Security Surface

- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.libvirt.unplug_plumgrid_vif', (src/nova/tests/unit/virt/libvirt/test_vif.py:L1049)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.linux_net.device_exists') (src/nova/tests/unit/virt/libvirt/test_vif.py:L1055)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.libvirt.plug_plumgrid_vif') (src/nova/tests/unit/virt/libvirt/test_vif.py:L1056)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.linux_net.create_tap_dev') (src/nova/tests/unit/virt/libvirt/test_vif.py:L1057)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.linux_net.device_exists', return_value=True) (src/nova/tests/unit/virt/libvirt/test_vif.py:L1101)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.linux_net.set_device_mtu') (src/nova/tests/unit/virt/libvirt/test_vif.py:L1102)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.linux_net.create_tap_dev') (src/nova/tests/unit/virt/libvirt/test_vif.py:L1103)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.linux_net.device_exists', return_value=True) (src/nova/tests/unit/virt/libvirt/test_vif.py:L1131)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.linux_net.set_device_mtu') (src/nova/tests/unit/virt/libvirt/test_vif.py:L1132)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.linux_net.create_tap_dev') (src/nova/tests/unit/virt/libvirt/test_vif.py:L1133)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.linux_net.device_exists', return_value=True) (src/nova/tests/unit/virt/libvirt/test_vif.py:L1149)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.linux_net.set_device_mtu') (src/nova/tests/unit/virt/libvirt/test_vif.py:L1150)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.linux_net.create_tap_dev') (src/nova/tests/unit/virt/libvirt/test_vif.py:L1151)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.linux_net.device_exists', return_value=True) (src/nova/tests/unit/virt/libvirt/test_vif.py:L1172)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.linux_net.set_device_mtu') (src/nova/tests/unit/virt/libvirt/test_vif.py:L1173)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.linux_net.create_tap_dev') (src/nova/tests/unit/virt/libvirt/test_vif.py:L1174)

