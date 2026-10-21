# src/nova/virt/libvirt/host.py

## Overview

This file implements the `host` module, defining 4 classs, 1 classmethod, 6 constants, 5 functions, 118 methods, 14 propertys, 10 staticmethods, 1 variable, 34 imports, 13 side effects, 8 security surface entries.

Lines: total 2340, code 1740, comment 222, blank 378

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `libvirt` | variable | — | exported | not declared | — | `src/nova/virt/libvirt/host.py:L71–L71` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/host.py:L73–L73` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/host.py:L74–L74` |
| `HV_DRIVER_QEMU` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/host.py:L78–L78` |
| `SEV_KERNEL_PARAM_FILE` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/host.py:L80–L80` |
| `MIN_QEMU_SEV_ES_VERSION` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/host.py:L82–L82` |
| `MISC_CONTROL_GROUP_CAPACITY_FILE` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/host.py:L84–L84` |
| `LibvirtEventHandler` | class | — | exported | not declared | — | `src/nova/virt/libvirt/host.py:L87–L105` |
| `LibvirtEventHandler.__init__` | method | (self, conn_event_handler=None, lifecycle_event_handler=None) | public | not declared | 1/3 | `src/nova/virt/libvirt/host.py:L88–L90` |
| `LibvirtEventHandler._queue_event` | method | (self, event) | private | not declared | 1/2 | `src/nova/virt/libvirt/host.py:L92–L93` |
| `LibvirtEventHandler.start` | method | (self) | public | not declared | 1/2 | `src/nova/virt/libvirt/host.py:L95–L96` |
| `LibvirtEventHandler.create` | method | (cls, conn_event_handler=None, lifecycle_event_handler=None) | public | `_ThreadingLibvirtEventHandler( conn_event_handler, lifecycle_event_handler)` (src/nova/virt/libvirt/host.py:L101); `_EventletLibvirtEventHandler( conn_event_handler, lifecycle_event_handler)` (src/nova/virt/libvirt/host.py:L104) | 2/7 | `src/nova/virt/libvirt/host.py:L99–L105` |
| `_EventletLibvirtEventHandler` | class | — | unexported | not declared | — | `src/nova/virt/libvirt/host.py:L108–L235` |
| `_EventletLibvirtEventHandler.__init__` | method | (self, conn_event_handler=None, lifecycle_event_handler=None) | public | not declared | 1/12 | `src/nova/virt/libvirt/host.py:L109–L131` |
| `_EventletLibvirtEventHandler.start` | method | (self) | public | not declared | 1/9 | `src/nova/virt/libvirt/host.py:L133–L149` |
| `_EventletLibvirtEventHandler._queue_event` | method | (self, event) | private | `` (src/nova/virt/libvirt/host.py:L160) | 2/7 | `src/nova/virt/libvirt/host.py:L151–L168` |
| `_EventletLibvirtEventHandler._native_thread` | method | (self) | private | not declared | 2/3 | `src/nova/virt/libvirt/host.py:L170–L184` |
| `_EventletLibvirtEventHandler._dispatch_thread` | method | (self) | private | not declared | 2/3 | `src/nova/virt/libvirt/host.py:L186–L195` |
| `_EventletLibvirtEventHandler._dispatch_events` | method | (self) | private | `` (src/nova/virt/libvirt/host.py:L210); `` (src/nova/virt/libvirt/host.py:L217); `` (src/nova/virt/libvirt/host.py:L230) | 9/25 | `src/nova/virt/libvirt/host.py:L197–L235` |
| `_ThreadingLibvirtEventHandler` | class | — | unexported | not declared | — | `src/nova/virt/libvirt/host.py:L238–L282` |
| `_ThreadingLibvirtEventHandler.__init__` | method | (self, conn_event_handler=None, lifecycle_event_handler=None) | public | not declared | 1/4 | `src/nova/virt/libvirt/host.py:L239–L243` |
| `_ThreadingLibvirtEventHandler.start` | method | (self) | public | not declared | 1/6 | `src/nova/virt/libvirt/host.py:L245–L255` |
| `_ThreadingLibvirtEventHandler._queue_event` | method | (self, event) | private | not declared | 4/8 | `src/nova/virt/libvirt/host.py:L257–L271` |
| `_ThreadingLibvirtEventHandler._native_thread` | method | (self) | private | not declared | 2/3 | `src/nova/virt/libvirt/host.py:L273–L282` |
| `Host` | class | — | exported | not declared | — | `src/nova/virt/libvirt/host.py:L285–L2340` |
| `Host.__init__` | method | (self, uri, read_only=False, conn_event_handler=None, lifecycle_event_handler=None) | public | not declared | 1/34 | `src/nova/virt/libvirt/host.py:L287–L337` |
| `Host._get_libvirt_proxy_classes` | method | (libvirt_module) | private | `tuple([cls[1] for cls in classes if cls[0].startswith("vir")])` (src/nova/virt/libvirt/host.py:L350) | 3/3 | `src/nova/virt/libvirt/host.py:L340–L350` |
| `Host._wrap_libvirt_proxy` | method | (self, obj) | private | `utils.tpool_wrap(obj, autowrap=self._libvirt_proxy_classes)` (src/nova/virt/libvirt/host.py:L362) | 1/2 | `src/nova/virt/libvirt/host.py:L352–L362` |
| `Host._conn_event_thread` | method | (self) | private | not declared | 2/3 | `src/nova/virt/libvirt/host.py:L364–L370` |
| `Host._dispatch_conn_event` | method | (self) | private | not declared | 3/8 | `src/nova/virt/libvirt/host.py:L372–L382` |
| `Host._event_device_removed_callback` | method | (conn, dom, dev, opaque) | private | not declared | 1/5 | `src/nova/virt/libvirt/host.py:L385–L396` |
| `Host._event_device_removal_failed_callback` | method | (conn, dom, dev, opaque) | private | not declared | 1/5 | `src/nova/virt/libvirt/host.py:L399–L410` |
| `Host._event_lifecycle_callback` | method | (conn, dom, event, detail, opaque) | private | not declared | 10/28 | `src/nova/virt/libvirt/host.py:L413–L461` |
| `Host._close_callback` | method | (self, conn, reason, opaque) | private | not declared | 1/3 | `src/nova/virt/libvirt/host.py:L463–L465` |
| `Host._test_connection` | method | (conn) | private | `True` (src/nova/virt/libvirt/host.py:L471); `False` (src/nova/virt/libvirt/host.py:L478) | 4/12 | `src/nova/virt/libvirt/host.py:L468–L479` |
| `Host._connect_auth_cb` | method | (creds, opaque) | private | `0` (src/nova/virt/libvirt/host.py:L484) | 2/6 | `src/nova/virt/libvirt/host.py:L482–L487` |
| `Host._connect` | method | (self, uri, read_only) | private | `self._libvirt_proxy.openAuth(uri, auth, flags)` (src/nova/virt/libvirt/host.py:L502) | 2/13 | `src/nova/virt/libvirt/host.py:L489–L502` |
| `Host._connection_closed` | method | (self, conn, *args, **kwargs) | private | not declared | 2/5 | `src/nova/virt/libvirt/host.py:L504–L511` |
| `Host._event_emit_delayed` | method | (self, event) | private | not declared | 5/18 | `src/nova/virt/libvirt/host.py:L513–L539` |
| `Host._event_emit` | method | (self, event) | private | not declared | 2/3 | `src/nova/virt/libvirt/host.py:L541–L543` |
| `Host._init_events` | method | (self) | private | not declared | 1/2 | `src/nova/virt/libvirt/host.py:L545–L558` |
| `Host._get_new_connection` | method | (self) | private | `wrapped_conn` (src/nova/virt/libvirt/host.py:L596) | 3/31 | `src/nova/virt/libvirt/host.py:L560–L596` |
| `Host._queue_conn_event_handler` | method | (self, *args, **kwargs) | private | `` (src/nova/virt/libvirt/host.py:L600) | 2/5 | `src/nova/virt/libvirt/host.py:L598–L605` |
| `Host._queue_conn_event_handler.handler` | function | — | public | `self._conn_event_handler(*args, **kwargs)` (src/nova/virt/libvirt/host.py:L603) | — | `src/nova/virt/libvirt/host.py:L602–L603` |
| `Host._get_connection` | method | (self) | private | `self._wrapped_conn` (src/nova/virt/libvirt/host.py:L638) | 7/21 | `src/nova/virt/libvirt/host.py:L607–L638` |
| `Host.get_connection` | method | (self) | public | `conn` (src/nova/virt/libvirt/host.py:L661) | 2/14 | `src/nova/virt/libvirt/host.py:L640–L661` |
| `Host._libvirt_error_handler` | method | (context, err) | private | not declared | 1/2 | `src/nova/virt/libvirt/host.py:L664–L666` |
| `Host.initialize` | method | (self) | public | `` (src/nova/virt/libvirt/host.py:L670) | 2/6 | `src/nova/virt/libvirt/host.py:L668–L678` |
| `Host.cleanup` | method | (self) | public | not declared | 3/5 | `src/nova/virt/libvirt/host.py:L680–L695` |
| `Host._version_check` | method | (self, lv_ver=None, hv_ver=None, hv_type=None, op=operator.lt) | private | `False` (src/nova/virt/libvirt/host.py:L709); `False` (src/nova/virt/libvirt/host.py:L715); `False` (src/nova/virt/libvirt/host.py:L720); `True` (src/nova/virt/libvirt/host.py:L722); `False` (src/nova/virt/libvirt/host.py:L724) | 8/21 | `src/nova/virt/libvirt/host.py:L697–L724` |
| `Host.has_min_version` | method | (self, lv_ver=None, hv_ver=None, hv_type=None) | public | `self._version_check( lv_ver=lv_ver, hv_ver=hv_ver, hv_type=hv_type, op=operator.lt)` (src/nova/virt/libvirt/host.py:L727) | 1/3 | `src/nova/virt/libvirt/host.py:L726–L728` |
| `Host.has_version` | method | (self, lv_ver=None, hv_ver=None, hv_type=None) | public | `self._version_check( lv_ver=lv_ver, hv_ver=hv_ver, hv_type=hv_type, op=operator.ne)` (src/nova/virt/libvirt/host.py:L731) | 1/3 | `src/nova/virt/libvirt/host.py:L730–L732` |
| `Host.get_guest` | method | (self, instance) | public | `libvirt_guest.Guest(self._get_domain(instance))` (src/nova/virt/libvirt/host.py:L746) | 1/2 | `src/nova/virt/libvirt/host.py:L734–L746` |
| `Host._get_domain` | method | (self, instance) | private | `conn.lookupByUUIDString(instance.uuid)` (src/nova/virt/libvirt/host.py:L762) | 3/14 | `src/nova/virt/libvirt/host.py:L748–L773` |
| `Host.list_guests` | method | (self, only_running=True) | public | `[libvirt_guest.Guest(dom) for dom in domains]` (src/nova/virt/libvirt/host.py:L785) | 2/3 | `src/nova/virt/libvirt/host.py:L775–L785` |
| `Host.list_instance_domains` | method | (self, only_running=True) | public | `doms` (src/nova/virt/libvirt/host.py:L813) | 4/10 | `src/nova/virt/libvirt/host.py:L787–L813` |
| `Host.get_available_cpus` | method | (self) | public | `{cpu for cpu in range(cpus)}` (src/nova/virt/libvirt/host.py:L821) | 2/3 | `src/nova/virt/libvirt/host.py:L815–L821` |
| `Host.get_online_cpus` | method | (self) | public | `online_cpus` (src/nova/virt/libvirt/host.py:L835) | 3/7 | `src/nova/virt/libvirt/host.py:L823–L835` |
| `Host.get_cpu_model_names` | method | (self) | public | `self.get_connection().getCPUModelNames(arch)` (src/nova/virt/libvirt/host.py:L843) | 1/3 | `src/nova/virt/libvirt/host.py:L837–L843` |
| `Host._log_host_capabilities` | method | (xmlstr) | private | not declared | 1/2 | `src/nova/virt/libvirt/host.py:L846–L850` |
| `Host.get_capabilities` | method | (self) | public | `self._caps` (src/nova/virt/libvirt/host.py:L863); `self._caps` (src/nova/virt/libvirt/host.py:L898) | 8/30 | `src/nova/virt/libvirt/host.py:L852–L898` |
| `Host.get_domain_capabilities` | method | (self) | public | `self._domain_caps` (src/nova/virt/libvirt/host.py:L975); `self._domain_caps` (src/nova/virt/libvirt/host.py:L1005) | 6/17 | `src/nova/virt/libvirt/host.py:L900–L1005` |
| `Host._get_machine_types` | method | (self, arch, domain) | private | `mtypes` (src/nova/virt/libvirt/host.py:L1024) | 1/7 | `src/nova/virt/libvirt/host.py:L1007–L1024` |
| `Host._add_to_domain_capabilities` | method | (self, emulator_bin, arch, domain_caps, machine_type, virt_type) | private | `` (src/nova/virt/libvirt/host.py:L1072) | 6/33 | `src/nova/virt/libvirt/host.py:L1026–L1095` |
| `Host._get_domain_capabilities` | method | (self, emulator_bin=None, arch=None, machine_type=None, virt_type=None, flags=0) | private | `caps` (src/nova/virt/libvirt/host.py:L1110) | 1/14 | `src/nova/virt/libvirt/host.py:L1097–L1110` |
| `Host.get_driver_type` | method | (self) | public | `self.get_connection().getType()` (src/nova/virt/libvirt/host.py:L1119) | 1/2 | `src/nova/virt/libvirt/host.py:L1112–L1119` |
| `Host.get_version` | method | (self) | public | `self.get_connection().getVersion()` (src/nova/virt/libvirt/host.py:L1128) | 1/2 | `src/nova/virt/libvirt/host.py:L1121–L1128` |
| `Host.get_hostname` | method | (self) | public | `self._hostname` (src/nova/virt/libvirt/host.py:L1139) | 3/9 | `src/nova/virt/libvirt/host.py:L1130–L1139` |
| `Host.get_node_uuid` | method | (self) | public | `self._node_uuid` (src/nova/virt/libvirt/host.py:L1145) | 2/4 | `src/nova/virt/libvirt/host.py:L1141–L1145` |
| `Host.find_secret` | method | (self, usage_type, usage_id) | public | `conn.secretLookupByUsage(usage_type_const, usage_id)` (src/nova/virt/libvirt/host.py:L1167); `None` (src/nova/virt/libvirt/host.py:L1170) | 7/18 | `src/nova/virt/libvirt/host.py:L1147–L1170` |
| `Host.create_secret` | method | (self, usage_type, usage_id, password=None, uuid=None, ephemeral=None, private=None) | public | `secret` (src/nova/virt/libvirt/host.py:L1214) | 9/35 | `src/nova/virt/libvirt/host.py:L1172–L1217` |
| `Host.delete_secret` | method | (self, usage_type, usage_id) | public | not declared | 2/4 | `src/nova/virt/libvirt/host.py:L1219–L1227` |
| `Host._get_hardware_info` | method | (self) | private | `self.get_connection().getInfo()` (src/nova/virt/libvirt/host.py:L1234) | 1/2 | `src/nova/virt/libvirt/host.py:L1229–L1234` |
| `Host.get_memory_mb_total` | method | (self) | public | `CONF.libvirt.file_backed_memory` (src/nova/virt/libvirt/host.py:L1242); `self._get_hardware_info()[1]` (src/nova/virt/libvirt/host.py:L1244) | 2/5 | `src/nova/virt/libvirt/host.py:L1236–L1244` |
| `Host._sum_domain_memory_mb` | method | (self) | private | `used // units.Ki` (src/nova/virt/libvirt/host.py:L1260) | 3/12 | `src/nova/virt/libvirt/host.py:L1246–L1260` |
| `Host._get_avail_memory_kb` | method | — | private | `avail` (src/nova/virt/libvirt/host.py:L1272) | 1/8 | `src/nova/virt/libvirt/host.py:L1263–L1272` |
| `Host.get_memory_mb_used` | method | (self) | public | `self._sum_domain_memory_mb()` (src/nova/virt/libvirt/host.py:L1282); `(self.get_memory_mb_total() - (self._get_avail_memory_kb() // units.Ki))` (src/nova/virt/libvirt/host.py:L1284) | 2/6 | `src/nova/virt/libvirt/host.py:L1274–L1285` |
| `Host.get_cpu_stats` | method | (self) | public | `stats` (src/nova/virt/libvirt/host.py:L1294) | 1/5 | `src/nova/virt/libvirt/host.py:L1287–L1294` |
| `Host._check_machine_type` | method | (self, caps, mach_type) | private | not declared | 4/11 | `src/nova/virt/libvirt/host.py:L1296–L1313` |
| `Host.write_instance_config` | method | (self, xml) | public | `libvirt_guest.Guest(domain)` (src/nova/virt/libvirt/host.py:L1323) | 1/3 | `src/nova/virt/libvirt/host.py:L1315–L1323` |
| `Host.device_lookup_by_name` | method | (self, name) | public | `self.get_connection().nodeDeviceLookupByName(name)` (src/nova/virt/libvirt/host.py:L1331) | 1/2 | `src/nova/virt/libvirt/host.py:L1325–L1331` |
| `Host.device_create` | method | (self, conf) | public | `self.get_connection().nodeDeviceCreateXML(device_xml, flags=0)` (src/nova/virt/libvirt/host.py:L1343) | 1/3 | `src/nova/virt/libvirt/host.py:L1333–L1343` |
| `Host.device_define` | method | (self, conf) | public | `self.get_connection().nodeDeviceDefineXML(device_xml, flags=0)` (src/nova/virt/libvirt/host.py:L1355) | 1/3 | `src/nova/virt/libvirt/host.py:L1345–L1355` |
| `Host.device_start` | method | (self, dev) | public | not declared | 2/6 | `src/nova/virt/libvirt/host.py:L1357–L1368` |
| `Host.device_set_autostart` | method | (self, dev, autostart=True) | public | not declared | 2/7 | `src/nova/virt/libvirt/host.py:L1370–L1384` |
| `Host._get_pcinet_info` | method | (self, dev, net_devs) | private | `None` (src/nova/virt/libvirt/host.py:L1394); `cfgdev.pci_capability.features` (src/nova/virt/libvirt/host.py:L1398) | 3/12 | `src/nova/virt/libvirt/host.py:L1386–L1398` |
| `Host._get_vf_parent_pci_vpd_info` | method | (self, vf_device, parent_pf_name, candidate_devs) | private | `None` (src/nova/virt/libvirt/host.py:L1418); `cfgdev.pci_capability.vpd_capability` (src/nova/virt/libvirt/host.py:L1423) | 4/16 | `src/nova/virt/libvirt/host.py:L1400–L1423` |
| `Host._get_vpd_card_serial_number` | method | (dev) | private | `None` (src/nova/virt/libvirt/host.py:L1435); `vpd_cap.card_serial_number` (src/nova/virt/libvirt/host.py:L1436) | 2/10 | `src/nova/virt/libvirt/host.py:L1426–L1436` |
| `Host._get_pf_details` | method | (self, device, pci_address) | private | `{}` (src/nova/virt/libvirt/host.py:L1440); `{ 'mac_address': pci_utils.get_mac_by_pci_address(pci_address) }` (src/nova/virt/libvirt/host.py:L1443); `{}` (src/nova/virt/libvirt/host.py:L1450) | 3/12 | `src/nova/virt/libvirt/host.py:L1438–L1450` |
| `Host._get_pcidev_info` | method | (self, devname, dev, net_devs, vdpa_devs, pci_devs) | private | `device` (src/nova/virt/libvirt/host.py:L1655) | 1/34 | `src/nova/virt/libvirt/host.py:L1452–L1655` |
| `Host._get_pcidev_info._get_device_type` | function | (cfgdev, pci_address, device, net_devs, vdpa_devs) | private | `{ 'dev_type': fields.PciDeviceType.SRIOV_PF, }` (src/nova/virt/libvirt/host.py:L1479); `result` (src/nova/virt/libvirt/host.py:L1517); `{'dev_type': fields.PciDeviceType.STANDARD}` (src/nova/virt/libvirt/host.py:L1519) | — | `src/nova/virt/libvirt/host.py:L1462–L1519` |
| `Host._get_pcidev_info._get_vpd_details` | function | (device_dict, device, pci_devs) | private | `vpd_info` (src/nova/virt/libvirt/host.py:L1553); `vpd_info` (src/nova/virt/libvirt/host.py:L1563) | — | `src/nova/virt/libvirt/host.py:L1521–L1563` |
| `Host._get_pcidev_info._get_sriov_netdev_details` | function | (device_dict, device) | private | `sriov_info` (src/nova/virt/libvirt/host.py:L1573); `{}` (src/nova/virt/libvirt/host.py:L1588); `sriov_info` (src/nova/virt/libvirt/host.py:L1594) | — | `src/nova/virt/libvirt/host.py:L1565–L1594` |
| `Host._get_pcidev_info._get_device_capabilities` | function | (device_dict, device, pci_devs, net_devs) | private | `{'capabilities': caps}` (src/nova/virt/libvirt/host.py:L1625); `caps` (src/nova/virt/libvirt/host.py:L1627) | — | `src/nova/virt/libvirt/host.py:L1596–L1627` |
| `Host.get_vdpa_nodedev_by_address` | method | (self, pci_address) | public | `cfgdev` (src/nova/virt/libvirt/host.py:L1685) | 10/23 | `src/nova/virt/libvirt/host.py:L1657–L1685` |
| `Host.get_vdpa_device_path` | method | (self, pci_address) | public | `nodedev.vdpa_capability.dev_path` (src/nova/virt/libvirt/host.py:L1697) | 1/5 | `src/nova/virt/libvirt/host.py:L1687–L1697` |
| `Host.list_pci_devices` | method | (self, flags=0) | public | `self._list_devices("pci", flags=flags)` (src/nova/virt/libvirt/host.py:L1704) | 1/2 | `src/nova/virt/libvirt/host.py:L1699–L1704` |
| `Host.list_mdev_capable_devices` | method | (self, flags=0) | public | `self._list_devices("mdev_types", flags=flags)` (src/nova/virt/libvirt/host.py:L1711) | 1/2 | `src/nova/virt/libvirt/host.py:L1706–L1711` |
| `Host.list_mediated_devices` | method | (self, flags=0) | public | `self._list_devices("mdev", flags=flags)` (src/nova/virt/libvirt/host.py:L1718) | 1/2 | `src/nova/virt/libvirt/host.py:L1713–L1718` |
| `Host._list_devices` | method | (self, cap, flags=0) | private | `self.get_connection().listDevices(cap, flags)` (src/nova/virt/libvirt/host.py:L1726); `[]` (src/nova/virt/libvirt/host.py:L1733) | 3/12 | `src/nova/virt/libvirt/host.py:L1720–L1735` |
| `Host.list_all_devices` | method | (self, flags=0) | public | `alldevs` (src/nova/virt/libvirt/host.py:L1749); `[]` (src/nova/virt/libvirt/host.py:L1752) | 4/11 | `src/nova/virt/libvirt/host.py:L1737–L1752` |
| `Host.compare_cpu` | method | (self, xmlDesc, flags=0) | public | `self.get_connection().compareCPU(xmlDesc, flags)` (src/nova/virt/libvirt/host.py:L1756) | 1/2 | `src/nova/virt/libvirt/host.py:L1754–L1756` |
| `Host.compare_hypervisor_cpu` | method | (self, xmlDesc, flags=0) | public | `self.get_connection().compareHypervisorCPU( emulator, arch, machine, virttype, xmlDesc, flags)` (src/nova/virt/libvirt/host.py:L1771) | 1/7 | `src/nova/virt/libvirt/host.py:L1758–L1772` |
| `Host.is_cpu_control_policy_capable` | method | (self) | public | `self._has_cgroupsv1_cpu_controller() or \ self._has_cgroupsv2_cpu_controller()` (src/nova/virt/libvirt/host.py:L1780) | 2/3 | `src/nova/virt/libvirt/host.py:L1774–L1781` |
| `Host._has_cgroupsv1_cpu_controller` | method | (self) | private | `True` (src/nova/virt/libvirt/host.py:L1793); `False` (src/nova/virt/libvirt/host.py:L1795); `False` (src/nova/virt/libvirt/host.py:L1800) | 4/17 | `src/nova/virt/libvirt/host.py:L1783–L1800` |
| `Host._has_cgroupsv2_cpu_controller` | method | (self) | private | `True` (src/nova/virt/libvirt/host.py:L1811); `False` (src/nova/virt/libvirt/host.py:L1813); `False` (src/nova/virt/libvirt/host.py:L1818) | 4/17 | `src/nova/virt/libvirt/host.py:L1802–L1818` |
| `Host.get_canonical_machine_type` | method | (self, arch, machine) | public | `machine` (src/nova/virt/libvirt/host.py:L1840); `guest.domains[domain].aliases[machine]['canonical']` (src/nova/virt/libvirt/host.py:L1843) | 6/11 | `src/nova/virt/libvirt/host.py:L1820–L1846` |
| `Host._check_file_backed_memory_support` | method | (self) | private | `False` (src/nova/virt/libvirt/host.py:L1850); `True` (src/nova/virt/libvirt/host.py:L1876) | 5/21 | `src/nova/virt/libvirt/host.py:L1848–L1876` |
| `Host.has_hyperthreading` | method | (self) | public | `self._has_hyperthreading` (src/nova/virt/libvirt/host.py:L1885); `self._has_hyperthreading` (src/nova/virt/libvirt/host.py:L1896) | 6/9 | `src/nova/virt/libvirt/host.py:L1879–L1896` |
| `Host.supports_uefi` | method | (self) | public | `self._supports_uefi` (src/nova/virt/libvirt/host.py:L1908); `True` (src/nova/virt/libvirt/host.py:L1920); `False` (src/nova/virt/libvirt/host.py:L1924) | 4/15 | `src/nova/virt/libvirt/host.py:L1899–L1924` |
| `Host.supports_virtio_fs` | method | (self) | public | `CONF.libvirt.virt_type in ('qemu', 'kvm')` (src/nova/virt/libvirt/host.py:L1928) | 1/2 | `src/nova/virt/libvirt/host.py:L1927–L1928` |
| `Host.supports_mem_backing_file` | method | (self) | public | `self._check_file_backed_memory_support()` (src/nova/virt/libvirt/host.py:L1932) | 1/2 | `src/nova/virt/libvirt/host.py:L1931–L1932` |
| `Host.supports_secure_boot` | method | (self) | public | `self._supports_secure_boot` (src/nova/virt/libvirt/host.py:L1944); `True` (src/nova/virt/libvirt/host.py:L1959); `False` (src/nova/virt/libvirt/host.py:L1963) | 4/18 | `src/nova/virt/libvirt/host.py:L1935–L1963` |
| `Host.supports_vtpm` | method | (self) | public | `(_tpm.supported and 'emulator' in _tpm.backend_models)` (src/nova/virt/libvirt/host.py:L1973); `False` (src/nova/virt/libvirt/host.py:L1975) | 3/7 | `src/nova/virt/libvirt/host.py:L1966–L1975` |
| `Host.tpm_versions` | method | (self) | public | `None` (src/nova/virt/libvirt/host.py:L1988); `_tpm.backend_versions` (src/nova/virt/libvirt/host.py:L1989); `[]` (src/nova/virt/libvirt/host.py:L1991) | 3/9 | `src/nova/virt/libvirt/host.py:L1978–L1991` |
| `Host.tpm_models` | method | (self) | public | `_tpm.models` (src/nova/virt/libvirt/host.py:L2001); `[]` (src/nova/virt/libvirt/host.py:L2003) | 2/7 | `src/nova/virt/libvirt/host.py:L1994–L2003` |
| `Host._kernel_supports_amd_sev` | method | (self, model='sev') | private | `False` (src/nova/virt/libvirt/host.py:L2012); `strutils.bool_from_string(content)` (src/nova/virt/libvirt/host.py:L2017) | 2/9 | `src/nova/virt/libvirt/host.py:L2005–L2017` |
| `Host.supports_amd_sev` | method | (self) | public | `self._supports_amd_sev` (src/nova/virt/libvirt/host.py:L2032); `self._supports_amd_sev` (src/nova/virt/libvirt/host.py:L2038); `self._supports_amd_sev` (src/nova/virt/libvirt/host.py:L2042); `self._supports_amd_sev` (src/nova/virt/libvirt/host.py:L2047); `self._supports_amd_sev` (src/nova/virt/libvirt/host.py:L2059); `self._supports_amd_sev` (src/nova/virt/libvirt/host.py:L2062) | 9/28 | `src/nova/virt/libvirt/host.py:L2020–L2062` |
| `Host.supports_amd_sev_es` | method | (self) | public | `self._supports_amd_sev_es` (src/nova/virt/libvirt/host.py:L2075); `self._supports_amd_sev_es` (src/nova/virt/libvirt/host.py:L2079); `self._supports_amd_sev_es` (src/nova/virt/libvirt/host.py:L2083); `self._supports_amd_sev_es` (src/nova/virt/libvirt/host.py:L2087); `False` (src/nova/virt/libvirt/host.py:L2092); `self._supports_amd_sev_es` (src/nova/virt/libvirt/host.py:L2096) | 6/19 | `src/nova/virt/libvirt/host.py:L2065–L2096` |
| `Host.supports_amd_sev_snp` | method | (self) | public | `self._supports_amd_sev_snp` (src/nova/virt/libvirt/host.py:L2109); `self._supports_amd_sev_snp` (src/nova/virt/libvirt/host.py:L2113); `self._supports_amd_sev_snp` (src/nova/virt/libvirt/host.py:L2117); `self._supports_amd_sev_snp` (src/nova/virt/libvirt/host.py:L2122); `self._supports_amd_sev_snp` (src/nova/virt/libvirt/host.py:L2134); `self._supports_amd_sev_snp` (src/nova/virt/libvirt/host.py:L2140) | 10/30 | `src/nova/virt/libvirt/host.py:L2099–L2140` |
| `Host.supports_intel_tdx` | method | (self) | public | `self._supports_intel_tdx` (src/nova/virt/libvirt/host.py:L2158); `self._supports_intel_tdx` (src/nova/virt/libvirt/host.py:L2164); `self._supports_intel_tdx` (src/nova/virt/libvirt/host.py:L2176); `self._supports_intel_tdx` (src/nova/virt/libvirt/host.py:L2190); `self._supports_intel_tdx` (src/nova/virt/libvirt/host.py:L2193) | 8/29 | `src/nova/virt/libvirt/host.py:L2143–L2193` |
| `Host._get_cgroup_tdx_capacity` | method | (self) | private | `None` (src/nova/virt/libvirt/host.py:L2207); `int(parts[1])` (src/nova/virt/libvirt/host.py:L2216); `None` (src/nova/virt/libvirt/host.py:L2221); `None` (src/nova/virt/libvirt/host.py:L2223) | 6/20 | `src/nova/virt/libvirt/host.py:L2195–L2223` |
| `Host._get_tdx_capacity` | method | (self) | private | `0` (src/nova/virt/libvirt/host.py:L2243); `conf_capacity` (src/nova/virt/libvirt/host.py:L2244); `conf_capacity` (src/nova/virt/libvirt/host.py:L2253); `cgroup_capacity` (src/nova/virt/libvirt/host.py:L2255) | 5/20 | `src/nova/virt/libvirt/host.py:L2225–L2255` |
| `Host.max_intel_tdx_guests` | method | (self) | public | `0` (src/nova/virt/libvirt/host.py:L2262); `self._max_intel_tdx_guests` (src/nova/virt/libvirt/host.py:L2265) | 3/6 | `src/nova/virt/libvirt/host.py:L2258–L2265` |
| `Host.supports_mem_encryption` | method | (self) | public | `self.supports_amd_sev or self.supports_intel_tdx` (src/nova/virt/libvirt/host.py:L2279) | 2/2 | `src/nova/virt/libvirt/host.py:L2268–L2279` |
| `Host.get_mem_encryption_inventories` | method | (self) | public | `inventories` (src/nova/virt/libvirt/host.py:L2307) | 4/20 | `src/nova/virt/libvirt/host.py:L2281–L2307` |
| `Host._get_mem_encryption_slots_amd_sev` | method | (self) | private | `self._max_sev_guests` (src/nova/virt/libvirt/host.py:L2311); `0` (src/nova/virt/libvirt/host.py:L2313) | 2/5 | `src/nova/virt/libvirt/host.py:L2309–L2313` |
| `Host._get_mem_encryption_traits_amd_sev` | method | (self) | private | `[ot.HW_CPU_X86_AMD_SEV]` (src/nova/virt/libvirt/host.py:L2316) | 1/2 | `src/nova/virt/libvirt/host.py:L2315–L2316` |
| `Host._get_mem_encryption_slots_amd_sev_es` | method | (self) | private | `self._max_sev_es_guests` (src/nova/virt/libvirt/host.py:L2320); `0` (src/nova/virt/libvirt/host.py:L2322) | 2/5 | `src/nova/virt/libvirt/host.py:L2318–L2322` |
| `Host._get_mem_encryption_traits_amd_sev_es` | method | (self) | private | `[ot.HW_CPU_X86_AMD_SEV_ES]` (src/nova/virt/libvirt/host.py:L2325) | 1/2 | `src/nova/virt/libvirt/host.py:L2324–L2325` |
| `Host._get_mem_encryption_slots_amd_sev_snp` | method | (self) | private | `self._max_sev_es_guests` (src/nova/virt/libvirt/host.py:L2329); `0` (src/nova/virt/libvirt/host.py:L2331) | 2/5 | `src/nova/virt/libvirt/host.py:L2327–L2331` |
| `Host._get_mem_encryption_traits_amd_sev_snp` | method | (self) | private | `[ot.HW_CPU_X86_AMD_SEV_SNP]` (src/nova/virt/libvirt/host.py:L2334) | 1/2 | `src/nova/virt/libvirt/host.py:L2333–L2334` |
| `Host._get_mem_encryption_slots_intel_tdx` | method | (self) | private | `self.max_intel_tdx_guests` (src/nova/virt/libvirt/host.py:L2337) | 1/2 | `src/nova/virt/libvirt/host.py:L2336–L2337` |
| `Host._get_mem_encryption_traits_intel_tdx` | method | (self) | private | `[ot.HW_CPU_X86_INTEL_TDX]` (src/nova/virt/libvirt/host.py:L2340) | 1/2 | `src/nova/virt/libvirt/host.py:L2339–L2340` |
| `LibvirtEventHandler.create` | classmethod | — | public | not declared | — | `src/nova/virt/libvirt/host.py:L98–L105` |
| `Host._get_libvirt_proxy_classes` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/host.py:L339–L350` |
| `Host._event_device_removed_callback` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/host.py:L384–L396` |
| `Host._event_device_removal_failed_callback` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/host.py:L398–L410` |
| `Host._event_lifecycle_callback` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/host.py:L412–L461` |
| `Host._test_connection` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/host.py:L467–L479` |
| `Host._connect_auth_cb` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/host.py:L481–L487` |
| `Host._libvirt_error_handler` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/host.py:L663–L666` |
| `Host._log_host_capabilities` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/host.py:L845–L850` |
| `Host._get_avail_memory_kb` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/host.py:L1262–L1272` |
| `Host._get_vpd_card_serial_number` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/host.py:L1425–L1436` |
| `Host.has_hyperthreading` | property | — | public | not declared | — | `src/nova/virt/libvirt/host.py:L1878–L1896` |
| `Host.supports_uefi` | property | — | public | not declared | — | `src/nova/virt/libvirt/host.py:L1898–L1924` |
| `Host.supports_virtio_fs` | property | — | public | not declared | — | `src/nova/virt/libvirt/host.py:L1926–L1928` |
| `Host.supports_mem_backing_file` | property | — | public | not declared | — | `src/nova/virt/libvirt/host.py:L1930–L1932` |
| `Host.supports_secure_boot` | property | — | public | not declared | — | `src/nova/virt/libvirt/host.py:L1934–L1963` |
| `Host.supports_vtpm` | property | — | public | not declared | — | `src/nova/virt/libvirt/host.py:L1965–L1975` |
| `Host.tpm_versions` | property | — | public | not declared | — | `src/nova/virt/libvirt/host.py:L1977–L1991` |
| `Host.tpm_models` | property | — | public | not declared | — | `src/nova/virt/libvirt/host.py:L1993–L2003` |
| `Host.supports_amd_sev` | property | — | public | not declared | — | `src/nova/virt/libvirt/host.py:L2019–L2062` |
| `Host.supports_amd_sev_es` | property | — | public | not declared | — | `src/nova/virt/libvirt/host.py:L2064–L2096` |
| `Host.supports_amd_sev_snp` | property | — | public | not declared | — | `src/nova/virt/libvirt/host.py:L2098–L2140` |
| `Host.supports_intel_tdx` | property | — | public | not declared | — | `src/nova/virt/libvirt/host.py:L2142–L2193` |
| `Host.max_intel_tdx_guests` | property | — | public | not declared | — | `src/nova/virt/libvirt/host.py:L2257–L2265` |
| `Host.supports_mem_encryption` | property | — | public | not declared | — | `src/nova/virt/libvirt/host.py:L2267–L2279` |

## Dependencies

- `collections.abc`: imports `Callable` (src/nova/virt/libvirt/host.py:L30)
- `collections.abc`: imports `Mapping` (src/nova/virt/libvirt/host.py:L31)
- `collections`: imports `defaultdict` (src/nova/virt/libvirt/host.py:L32)
- `import inspect` (src/nova/virt/libvirt/host.py:L33)
- `import operator` (src/nova/virt/libvirt/host.py:L34)
- `import os` (src/nova/virt/libvirt/host.py:L35)
- `import queue` (src/nova/virt/libvirt/host.py:L36)
- `import threading` (src/nova/virt/libvirt/host.py:L37)
- `import typing as ty` (src/nova/virt/libvirt/host.py:L38)
- `lxml`: imports `etree` (src/nova/virt/libvirt/host.py:L40)
- `import os_traits as ot` (src/nova/virt/libvirt/host.py:L41)
- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/host.py:L42)
- `oslo_utils`: imports `excutils` (src/nova/virt/libvirt/host.py:L43)
- `oslo_utils`: imports `strutils` (src/nova/virt/libvirt/host.py:L44)
- `oslo_utils`: imports `units` (src/nova/virt/libvirt/host.py:L45)
- `oslo_utils`: imports `versionutils` (src/nova/virt/libvirt/host.py:L46)
- `nova.compute`: imports `utils as compute_utils` (src/nova/virt/libvirt/host.py:L48)
- `import nova.conf` (src/nova/virt/libvirt/host.py:L49)
- `nova`: imports `context as nova_context` (src/nova/virt/libvirt/host.py:L50)
- `nova`: imports `exception` (src/nova/virt/libvirt/host.py:L51)
- `nova.i18n`: imports `_` (src/nova/virt/libvirt/host.py:L52)
- `nova.objects`: imports `fields` (src/nova/virt/libvirt/host.py:L53)
- `nova.pci`: imports `utils as pci_utils` (src/nova/virt/libvirt/host.py:L54)
- `nova`: imports `rpc` (src/nova/virt/libvirt/host.py:L55)
- `nova`: imports `thread_pool_factory` (src/nova/virt/libvirt/host.py:L56)
- `nova`: imports `utils` (src/nova/virt/libvirt/host.py:L57)
- `nova.virt`: imports `event as virtevent` (src/nova/virt/libvirt/host.py:L58)
- `nova.virt.libvirt`: imports `config as vconfig` (src/nova/virt/libvirt/host.py:L59)
- `nova.virt.libvirt`: imports `event as libvirtevent` (src/nova/virt/libvirt/host.py:L60)
- `nova.virt.libvirt`: imports `guest as libvirt_guest` (src/nova/virt/libvirt/host.py:L61)
- `nova.virt.libvirt`: imports `migration as libvirt_migrate` (src/nova/virt/libvirt/host.py:L62)
- `nova.virt.libvirt`: imports `utils as libvirt_utils` (src/nova/virt/libvirt/host.py:L63)
- `import nova.virt.node` (src/nova/virt/libvirt/host.py:L64)
- `import libvirt` (src/nova/virt/libvirt/host.py:L69)

## Side Effects

- **file-io**: with open('/proc/meminfo') as fp: (src/nova/virt/libvirt/host.py:L1264)
- **file-io**: with open("/proc/self/mounts", "r") as fd: (src/nova/virt/libvirt/host.py:L1787)
- **file-io**: with open("/sys/fs/cgroup/cgroup.controllers", "r") as fd: (src/nova/virt/libvirt/host.py:L1806)
- **file-io**: if not os.path.exists(kernel_param_file): (src/nova/virt/libvirt/host.py:L2010)
- **file-io**: with open(kernel_param_file) as f: (src/nova/virt/libvirt/host.py:L2014)
- **file-io**: if not os.path.exists(capacity_file): (src/nova/virt/libvirt/host.py:L2205)
- **file-io**: with open(capacity_file) as f: (src/nova/virt/libvirt/host.py:L2209)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/libvirt/host.py:L73)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/host.py:L74)
- **global-mutation**: HV_DRIVER_QEMU = "QEMU" (src/nova/virt/libvirt/host.py:L78)
- **global-mutation**: SEV_KERNEL_PARAM_FILE = '/sys/module/kvm_amd/parameters/%s' (src/nova/virt/libvirt/host.py:L80)
- **global-mutation**: MIN_QEMU_SEV_ES_VERSION = (8, 0, 0) (src/nova/virt/libvirt/host.py:L82)
- **global-mutation**: MISC_CONTROL_GROUP_CAPACITY_FILE = '/sys/fs/cgroup/misc.capacity' (src/nova/virt/libvirt/host.py:L84)

## Security Surface

- **sink** (`file-write`): self._event_notify_send.write(c) (src/nova/virt/libvirt/host.py:L167)
- **sink** (`db-write`): mtypes.update(domain.aliases.keys()) (src/nova/virt/libvirt/host.py:L1020)
- **sink** (`db-write`): sriov_info.update({ (src/nova/virt/libvirt/host.py:L1580)
- **sink** (`db-write`): sriov_info.update({'vf_num': vf_num}) (src/nova/virt/libvirt/host.py:L1593)
- **sink** (`db-write`): device.update( (src/nova/virt/libvirt/host.py:L1650)
- **sink** (`db-write`): device.update(_get_device_capabilities(device, dev, (src/nova/virt/libvirt/host.py:L1652)
- **sink** (`db-write`): device.update(self._get_pf_details(device, address)) (src/nova/virt/libvirt/host.py:L1654)
- **sink** (`db-write`): inv.update( (src/nova/virt/libvirt/host.py:L2295)

