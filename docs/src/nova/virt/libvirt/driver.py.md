# src/nova/virt/libvirt/driver.py

## Overview

This file implements the `driver` module, defining 5 classs, 32 constants, 2 fields, 21 functions, 430 methods, 2 propertys, 28 staticmethods, 3 variables, 111 imports, 154 side effects, 70 security surface entries.

Lines: total 14026, code 10031, comment 2179, blank 1816

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `libvirt` | variable | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L145–L145` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L147–L147` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L148–L148` |
| `MAX_CONSOLE_BYTES` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L150–L150` |
| `VALID_DISK_CACHEMODES` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L151–L153` |
| `DISABLE_PREFIX` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L156–L156` |
| `DISABLE_REASON_UNDEFINED` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L158–L158` |
| `CONSOLE` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L161–L161` |
| `GuestNumaConfig` | variable | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L163–L164` |
| `InjectionInfo` | class | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L167–L173` |
| `InjectionInfo.__slots__` | field | — | public | not declared | — | `src/nova/virt/libvirt/driver.py:L169–L169` |
| `InjectionInfo.__repr__` | method | (self) | public | `('InjectionInfo(network_info=%r, files=%r, ' 'admin_pass=<SANITIZED>)') % (self.network_info, self.files)` (src/nova/virt/libvirt/driver.py:L172) | 1/3 | `src/nova/virt/libvirt/driver.py:L171–L173` |
| `VOLUME_DRIVERS` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L181–L197` |
| `MIN_LIBVIRT_VERSION` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L206–L206` |
| `MIN_QEMU_VERSION` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L207–L207` |
| `NEXT_MIN_LIBVIRT_VERSION` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L208–L208` |
| `NEXT_MIN_QEMU_VERSION` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L209–L209` |
| `MIN_LIBVIRT_VIOMMU_VIRTIO_MODEL` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L212–L212` |
| `MIN_VIRTUOZZO_VERSION` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L215–L215` |
| `NO_COMPRESSION_TYPES` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L218–L218` |
| `QEMU_MAX_SERIAL_PORTS` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L221–L221` |
| `ALLOWED_QEMU_SERIAL_PORTS` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L223–L223` |
| `VGPU_RESOURCE_SEMAPHORE` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L225–L225` |
| `MIN_MDEV_LIVEMIG_LIBVIRT_VERSION` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L228–L228` |
| `MIN_MDEV_LIVEMIG_QEMU_VERSION` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L229–L229` |
| `LIBVIRT_PERF_EVENT_PREFIX` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L231–L231` |
| `MIN_LIBVIRT_MAXPHYSADDR` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L234–L234` |
| `MIN_LIBVIRT_STATELESS_FIRMWARE` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L237–L237` |
| `MIN_IGB_LIBVIRT_VERSION` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L240–L240` |
| `MIN_IGB_QEMU_VERSION` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L241–L241` |
| `MIN_VFIO_PCI_VARIANT_LIBVIRT_VERSION` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L244–L244` |
| `MIN_VFIO_PCI_VARIANT_QEMU_VERSION` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L245–L245` |
| `MIN_VIRTIO_SOUND_LIBVIRT_VERSION` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L248–L248` |
| `MIN_VIRTIO_SOUND_QEMU_VERSION` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L249–L249` |
| `MIN_MULTIFD_WITH_POSTCOPY_QEMU_VERSION` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L252–L252` |
| `MIN_VERSION_INT_FOR_KEEP_TPM` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L255–L255` |
| `REGISTER_IMAGE_PROPERTY_DEFAULTS` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L257–L265` |
| `DetachableDevice` | variable | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L269–L271` |
| `AsyncDeviceEventsHandler` | class | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L274–L411` |
| `AsyncDeviceEventsHandler.Waiter` | class | — | public | not declared | — | `src/nova/virt/libvirt/driver.py:L286–L316` |
| `AsyncDeviceEventsHandler.Waiter.__init__` | method | (self, instance_uuid, device_name, event_types) | public | not declared | 1/11 | `src/nova/virt/libvirt/driver.py:L287–L297` |
| `AsyncDeviceEventsHandler.Waiter.matches` | method | (self, event) | public | `( self.instance_uuid == event.uuid and self.device_name == event.dev and isinstance(event, tuple(self.event_types)))` (src/nova/virt/libvirt/driver.py:L303) | 3/5 | `src/nova/virt/libvirt/driver.py:L299–L306` |
| `AsyncDeviceEventsHandler.Waiter.wait` | method | (self, timeout) | public | `self.threading_event.wait(timeout)` (src/nova/virt/libvirt/driver.py:L309) | 1/2 | `src/nova/virt/libvirt/driver.py:L308–L309` |
| `AsyncDeviceEventsHandler.Waiter.__repr__` | method | (self) | public | `( "AsyncDeviceEventsHandler.Waiter(" f"instance_uuid={self.instance_uuid}, " f"device_name={self.device_name}, " f"event_types={self.event_types})")` (src/nova/virt/libvirt/driver.py:L312) | 1/6 | `src/nova/virt/libvirt/driver.py:L311–L316` |
| `AsyncDeviceEventsHandler.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/virt/libvirt/driver.py:L318–L322` |
| `AsyncDeviceEventsHandler.create_waiter` | method | (self, instance_uuid, device_name, event_types) | public | `waiter` (src/nova/virt/libvirt/driver.py:L347) | 1/11 | `src/nova/virt/libvirt/driver.py:L324–L347` |
| `AsyncDeviceEventsHandler.delete_waiter` | method | (self, token) | public | not declared | 1/3 | `src/nova/virt/libvirt/driver.py:L349–L356` |
| `AsyncDeviceEventsHandler.wait` | method | (self, token, timeout) | public | `token.result` (src/nova/virt/libvirt/driver.py:L373) | 1/7 | `src/nova/virt/libvirt/driver.py:L358–L373` |
| `AsyncDeviceEventsHandler.notify_waiters` | method | (self, event) | public | `dispatched` (src/nova/virt/libvirt/driver.py:L389) | 3/9 | `src/nova/virt/libvirt/driver.py:L375–L389` |
| `AsyncDeviceEventsHandler.cleanup_waiters` | method | (self, instance_uuid) | public | not declared | 4/12 | `src/nova/virt/libvirt/driver.py:L391–L411` |
| `GetDeviceConfFunction` | class | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L414–L418` |
| `GetDeviceConfFunction.__call__` | method | (self, from_persistent_config=..., **kwargs) | public | not declared | 1/4 | `src/nova/virt/libvirt/driver.py:L415–L418` |
| `LibvirtDriver` | class | — | exported | not declared | — | `src/nova/virt/libvirt/driver.py:L421–L14026` |
| `LibvirtDriver.__init__` | method | (self, virtapi, read_only=False) | public | not declared | 6/93 | `src/nova/virt/libvirt/driver.py:L422–L592` |
| `LibvirtDriver._discover_vpmems` | method | (self, vpmem_conf) | private | `{}, {}` (src/nova/virt/libvirt/driver.py:L609); `vpmems_by_name, vpmems_by_rc` (src/nova/virt/libvirt/driver.py:L645) | 1/5 | `src/nova/virt/libvirt/driver.py:L594–L645` |
| `LibvirtDriver._get_vpmems_on_host` | method | (self) | private | `{}` (src/nova/virt/libvirt/driver.py:L657); `vpmems_host` (src/nova/virt/libvirt/driver.py:L672) | 5/20 | `src/nova/virt/libvirt/driver.py:L647–L672` |
| `LibvirtDriver.disk_cachemode` | method | (self) | public | `self._disk_cachemode` (src/nova/virt/libvirt/driver.py:L713) | 3/6 | `src/nova/virt/libvirt/driver.py:L675–L713` |
| `LibvirtDriver._set_cache_mode` | method | (self, conf) | private | `` (src/nova/virt/libvirt/driver.py:L721) | 5/21 | `src/nova/virt/libvirt/driver.py:L715–L746` |
| `LibvirtDriver._do_quality_warnings` | method | (self) | private | not declared | 3/19 | `src/nova/virt/libvirt/driver.py:L748–L773` |
| `LibvirtDriver._handle_conn_event` | method | (self, enabled, reason) | private | not declared | 1/4 | `src/nova/virt/libvirt/driver.py:L775–L778` |
| `LibvirtDriver._init_host_topology` | method | (self) | private | not declared | 2/5 | `src/nova/virt/libvirt/driver.py:L780–L792` |
| `LibvirtDriver.init_host` | method | (self, host) | public | not declared | 21/84 | `src/nova/virt/libvirt/driver.py:L794–L930` |
| `LibvirtDriver._check_pci_whitelist` | method | (self) | private | not declared | 6/17 | `src/nova/virt/libvirt/driver.py:L932–L951` |
| `LibvirtDriver._update_host_specific_capabilities` | method | (self) | private | not declared | 1/20 | `src/nova/virt/libvirt/driver.py:L953–L980` |
| `LibvirtDriver.process_instances_at_startup` | method | (self, context, instances) | public | `instances` (src/nova/virt/libvirt/driver.py:L987) | 1/6 | `src/nova/virt/libvirt/driver.py:L982–L987` |
| `LibvirtDriver._validate_pinning_configuration` | method | (self, instances) | private | `` (src/nova/virt/libvirt/driver.py:L991) | 18/57 | `src/nova/virt/libvirt/driver.py:L989–L1068` |
| `LibvirtDriver._validate_vtpm_configuration` | method | (self, instances) | private | `` (src/nova/virt/libvirt/driver.py:L1075) | 5/18 | `src/nova/virt/libvirt/driver.py:L1070–L1091` |
| `LibvirtDriver._validate_mem_encryption_configuration` | method | (self, instances) | private | not declared | 6/27 | `src/nova/virt/libvirt/driver.py:L1093–L1124` |
| `LibvirtDriver._register_all_undefined_instance_details` | method | (self, context, instances) | private | not declared | 3/12 | `src/nova/virt/libvirt/driver.py:L1126–L1142` |
| `LibvirtDriver._register_undefined_instance_details` | method | (self, context, instance) | private | `` (src/nova/virt/libvirt/driver.py:L1157) | 8/39 | `src/nova/virt/libvirt/driver.py:L1144–L1194` |
| `LibvirtDriver._find_default_for_image_property` | method | (self, instance, image_property, disk_info, guest_config) | private | `libvirt_utils.get_machine_type(instance.image_meta)` (src/nova/virt/libvirt/driver.py:L1204); `disk_info.get('disk_bus')` (src/nova/virt/libvirt/driver.py:L1207); `disk_info.get('cdrom_bus')` (src/nova/virt/libvirt/driver.py:L1210); `default_input_bus` (src/nova/virt/libvirt/driver.py:L1215); `default_pointer_model` (src/nova/virt/libvirt/driver.py:L1224); `self._get_video_type(instance.image_meta)` (src/nova/virt/libvirt/driver.py:L1227); `self.vif_driver.get_vif_model(instance.image_meta)` (src/nova/virt/libvirt/driver.py:L1230); `None` (src/nova/virt/libvirt/driver.py:L1232) | 13/28 | `src/nova/virt/libvirt/driver.py:L1196–L1232` |
| `LibvirtDriver._prepare_cpu_flag` | method | (self, flag) | private | `cpu_feature` (src/nova/virt/libvirt/driver.py:L1251) | 2/10 | `src/nova/virt/libvirt/driver.py:L1234–L1251` |
| `LibvirtDriver._check_cpu_compatibility` | method | (self) | private | `` (src/nova/virt/libvirt/driver.py:L1266) | 11/36 | `src/nova/virt/libvirt/driver.py:L1253–L1294` |
| `LibvirtDriver._check_vtpm_support` | method | (self) | private | `` (src/nova/virt/libvirt/driver.py:L1301) | 6/29 | `src/nova/virt/libvirt/driver.py:L1296–L1334` |
| `LibvirtDriver._check_multipath` | method | (self) | private | `` (src/nova/virt/libvirt/driver.py:L1338) | 4/13 | `src/nova/virt/libvirt/driver.py:L1336–L1350` |
| `LibvirtDriver._start_inactive_mediated_devices` | method | (self) | private | not declared | 4/11 | `src/nova/virt/libvirt/driver.py:L1352–L1369` |
| `LibvirtDriver._check_my_ip` | method | (self) | private | not declared | 2/6 | `src/nova/virt/libvirt/driver.py:L1371–L1376` |
| `LibvirtDriver._check_cpu_set_configuration` | method | (self) | private | `` (src/nova/virt/libvirt/driver.py:L1388); `` (src/nova/virt/libvirt/driver.py:L1404) | 11/52 | `src/nova/virt/libvirt/driver.py:L1378–L1440` |
| `LibvirtDriver._prepare_migration_flags` | method | (self) | private | `(live_migration_flags, block_migration_flags)` (src/nova/virt/libvirt/driver.py:L1464) | 1/9 | `src/nova/virt/libvirt/driver.py:L1442–L1464` |
| `LibvirtDriver._handle_live_migration_tunnelled` | method | (self, migration_flags) | private | `migration_flags` (src/nova/virt/libvirt/driver.py:L1483) | 2/4 | `src/nova/virt/libvirt/driver.py:L1480–L1483` |
| `LibvirtDriver._handle_native_tls` | method | (self, migration_flags) | private | `migration_flags` (src/nova/virt/libvirt/driver.py:L1488) | 2/4 | `src/nova/virt/libvirt/driver.py:L1485–L1488` |
| `LibvirtDriver._handle_live_migration_post_copy` | method | (self, migration_flags) | private | `migration_flags` (src/nova/virt/libvirt/driver.py:L1493) | 2/4 | `src/nova/virt/libvirt/driver.py:L1490–L1493` |
| `LibvirtDriver._handle_live_migration_auto_converge` | method | (self, migration_flags) | private | `migration_flags` (src/nova/virt/libvirt/driver.py:L1502) | 3/8 | `src/nova/virt/libvirt/driver.py:L1495–L1502` |
| `LibvirtDriver._handle_live_migration_parallel` | method | (self, migration_flags) | private | `migration_flags` (src/nova/virt/libvirt/driver.py:L1507) | 2/4 | `src/nova/virt/libvirt/driver.py:L1504–L1507` |
| `LibvirtDriver._parse_migration_flags` | method | (self) | private | not declared | 1/25 | `src/nova/virt/libvirt/driver.py:L1509–L1539` |
| `LibvirtDriver._get_connection` | method | (self) | private | `self._host.get_connection()` (src/nova/virt/libvirt/driver.py:L1550) | 1/2 | `src/nova/virt/libvirt/driver.py:L1549–L1550` |
| `LibvirtDriver._conn` | field | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L1552–L1552` |
| `LibvirtDriver._uri` | method | — | private | `uri` (src/nova/virt/libvirt/driver.py:L1562) | 6/8 | `src/nova/virt/libvirt/driver.py:L1555–L1562` |
| `LibvirtDriver._live_migration_uri` | method | (dest) | private | `uri % dest` (src/nova/virt/libvirt/driver.py:L1577); `uri % str_format` (src/nova/virt/libvirt/driver.py:L1587) | 4/19 | `src/nova/virt/libvirt/driver.py:L1565–L1587` |
| `LibvirtDriver._migrate_uri` | method | (dest) | private | `uri` (src/nova/virt/libvirt/driver.py:L1601) | 2/7 | `src/nova/virt/libvirt/driver.py:L1590–L1601` |
| `LibvirtDriver.cleanup_host` | method | (self, host) | public | not declared | 1/2 | `src/nova/virt/libvirt/driver.py:L1603–L1606` |
| `LibvirtDriver.instance_exists` | method | (self, instance) | public | `True` (src/nova/virt/libvirt/driver.py:L1612); `False` (src/nova/virt/libvirt/driver.py:L1614) | 2/6 | `src/nova/virt/libvirt/driver.py:L1608–L1614` |
| `LibvirtDriver.list_instances` | method | (self) | public | `names` (src/nova/virt/libvirt/driver.py:L1621) | 2/5 | `src/nova/virt/libvirt/driver.py:L1616–L1621` |
| `LibvirtDriver.list_instance_uuids` | method | (self) | public | `uuids` (src/nova/virt/libvirt/driver.py:L1628) | 2/5 | `src/nova/virt/libvirt/driver.py:L1623–L1628` |
| `LibvirtDriver.plug_vifs` | method | (self, instance, network_info) | public | not declared | 2/3 | `src/nova/virt/libvirt/driver.py:L1630–L1633` |
| `LibvirtDriver._unplug_vifs` | method | (self, instance, network_info, ignore_errors) | private | not declared | 4/7 | `src/nova/virt/libvirt/driver.py:L1635–L1642` |
| `LibvirtDriver.unplug_vifs` | method | (self, instance, network_info) | public | not declared | 1/2 | `src/nova/virt/libvirt/driver.py:L1644–L1645` |
| `LibvirtDriver._teardown_container` | method | (self, instance) | private | not declared | 1/9 | `src/nova/virt/libvirt/driver.py:L1647–L1655` |
| `LibvirtDriver._destroy` | method | (self, instance) | private | not declared | 17/56 | `src/nova/virt/libvirt/driver.py:L1657–L1760` |
| `LibvirtDriver._destroy._wait_for_destroy` | function | (expected_domid) | private | not declared | — | `src/nova/virt/libvirt/driver.py:L1719–L1746` |
| `LibvirtDriver.destroy` | method | (self, context, instance, network_info, block_device_info=None, destroy_disks=True, destroy_secrets=True) | public | not declared | 1/6 | `src/nova/virt/libvirt/driver.py:L1762–L1769` |
| `LibvirtDriver._delete_guest_configuration` | method | (self, guest, keep_vtpm, keep_nvram) | private | not declared | 3/9 | `src/nova/virt/libvirt/driver.py:L1771–L1790` |
| `LibvirtDriver._undefine_domain` | method | (self, instance, keep_vtpm=False, keep_nvram=False) | private | not declared | 4/21 | `src/nova/virt/libvirt/driver.py:L1792–L1812` |
| `LibvirtDriver.cleanup` | method | (self, context, instance, network_info, block_device_info=None, destroy_disks=True, migrate_data=None, destroy_vifs=True, destroy_secrets=True) | public | `self._cleanup( context, instance, network_info, block_device_info=block_device_info, destroy_vifs=destroy_vifs, cleanup_instance_dir=cleanup_instance_dir, cleanup_instance_disks=cleanup_instance_disks` (src/nova/virt/libvirt/driver.py:L1858) | 7/23 | `src/nova/virt/libvirt/driver.py:L1814–L1864` |
| `LibvirtDriver._cleanup` | method | (self, context, instance, network_info, block_device_info=None, destroy_vifs=True, cleanup_instance_dir=False, cleanup_instance_disks=False, destroy_secrets=True) | private | not declared | 17/53 | `src/nova/virt/libvirt/driver.py:L1866–L1965` |
| `LibvirtDriver._cleanup_ephemeral_encryption_secrets` | method | (self, context, instance, block_device_info) | private | not declared | 5/20 | `src/nova/virt/libvirt/driver.py:L1967–L1995` |
| `LibvirtDriver.cleanup_lingering_instance_resources` | method | (self, instance) | public | not declared | 3/8 | `src/nova/virt/libvirt/driver.py:L1997–L2009` |
| `LibvirtDriver._cleanup_vpmems` | method | (self, vpmems) | private | not declared | 3/7 | `src/nova/virt/libvirt/driver.py:L2011–L2017` |
| `LibvirtDriver._get_serial_ports_from_guest` | method | (self, guest, mode=None) | private | not declared | 4/11 | `src/nova/virt/libvirt/driver.py:L2019–L2037` |
| `LibvirtDriver._get_scsi_controller_next_unit` | method | (self, guest) | private | `max(ret) + 1 if ret else 0` (src/nova/virt/libvirt/driver.py:L2048) | 3/8 | `src/nova/virt/libvirt/driver.py:L2039–L2048` |
| `LibvirtDriver._cleanup_rbd` | method | (self, instance) | private | not declared | 3/7 | `src/nova/virt/libvirt/driver.py:L2050–L2060` |
| `LibvirtDriver._cleanup_lvm` | method | (self, instance, block_device_info) | private | not declared | 5/9 | `src/nova/virt/libvirt/driver.py:L2062–L2073` |
| `LibvirtDriver._lvm_disks` | method | (self, instance) | private | `[]` (src/nova/virt/libvirt/driver.py:L2080); `disks` (src/nova/virt/libvirt/driver.py:L2093); `[]` (src/nova/virt/libvirt/driver.py:L2094) | 5/13 | `src/nova/virt/libvirt/driver.py:L2075–L2094` |
| `LibvirtDriver._lvm_disks.belongs_to_instance` | function | (disk) | public | `disk.startswith(pattern)` (src/nova/virt/libvirt/driver.py:L2084) | — | `src/nova/virt/libvirt/driver.py:L2083–L2084` |
| `LibvirtDriver._lvm_disks.fullpath` | function | (name) | public | `os.path.join(vg, name)` (src/nova/virt/libvirt/driver.py:L2087) | — | `src/nova/virt/libvirt/driver.py:L2086–L2087` |
| `LibvirtDriver.get_volume_connector` | method | (self, instance) | public | `connector.get_connector_properties( root_helper, CONF.my_block_storage_ip, CONF.libvirt.volume_use_multipath, enforce_multipath=True, host=CONF.host)` (src/nova/virt/libvirt/driver.py:L2098) | 1/7 | `src/nova/virt/libvirt/driver.py:L2096–L2102` |
| `LibvirtDriver._cleanup_resize_vtpm` | method | (self, context, instance) | private | not declared | 3/12 | `src/nova/virt/libvirt/driver.py:L2104–L2124` |
| `LibvirtDriver._cleanup_resize` | method | (self, context, instance, network_info) | private | not declared | 9/23 | `src/nova/virt/libvirt/driver.py:L2127–L2169` |
| `LibvirtDriver._get_volume_driver` | method | (self, connection_info) | private | `self.volume_drivers.get(driver_type)` (src/nova/virt/libvirt/driver.py:L2195); `_cache_volume_driver(driver_type)` (src/nova/virt/libvirt/driver.py:L2219) | 3/11 | `src/nova/virt/libvirt/driver.py:L2171–L2219` |
| `LibvirtDriver._get_volume_driver._cache_volume_driver` | function | (driver_type) | private | `self.volume_drivers.get(driver_type)` (src/nova/virt/libvirt/driver.py:L2201); `self.volume_drivers.get(driver_type)` (src/nova/virt/libvirt/driver.py:L2207) | — | `src/nova/virt/libvirt/driver.py:L2198–L2216` |
| `LibvirtDriver._connect_volume` | method | (self, context, connection_info, instance, encryption=None) | private | not declared | 2/11 | `src/nova/virt/libvirt/driver.py:L2221–L2232` |
| `LibvirtDriver._should_disconnect_target` | method | (self, context, instance, multiattach, vol_driver, volume_id) | private | `True` (src/nova/virt/libvirt/driver.py:L2246); `True` (src/nova/virt/libvirt/driver.py:L2255); `(False if connection_count > 1 else True)` (src/nova/virt/libvirt/driver.py:L2277) | 7/16 | `src/nova/virt/libvirt/driver.py:L2234–L2277` |
| `LibvirtDriver._disconnect_volume` | method | (self, context, connection_info, instance, encryption=None, destroy_secrets=True, force=False) | private | not declared | 2/19 | `src/nova/virt/libvirt/driver.py:L2279–L2297` |
| `LibvirtDriver._extend_volume` | method | (self, connection_info, instance, requested_size) | private | `vol_driver.extend_volume(connection_info, instance, requested_size)` (src/nova/virt/libvirt/driver.py:L2301) | 1/4 | `src/nova/virt/libvirt/driver.py:L2299–L2302` |
| `LibvirtDriver._allow_native_luksv1` | method | (self, encryption=None) | private | `provider == encryptors.LUKS` (src/nova/virt/libvirt/driver.py:L2313) | 3/7 | `src/nova/virt/libvirt/driver.py:L2304–L2313` |
| `LibvirtDriver._get_volume_config` | method | (self, connection_info, disk_info) | private | `conf` (src/nova/virt/libvirt/driver.py:L2319) | 1/5 | `src/nova/virt/libvirt/driver.py:L2315–L2319` |
| `LibvirtDriver._get_volume_encryptor` | method | (self, connection_info, encryption) | private | `encryptors.get_volume_encryptor(root_helper=root_helper, keymgr=key_manager.API(CONF), connection_info=connection_info, **encryption)` (src/nova/virt/libvirt/driver.py:L2323) | 1/6 | `src/nova/virt/libvirt/driver.py:L2321–L2326` |
| `LibvirtDriver._get_volume_encryption` | method | (self, context, connection_info) | private | `encryption` (src/nova/virt/libvirt/driver.py:L2336) | 2/7 | `src/nova/virt/libvirt/driver.py:L2328–L2336` |
| `LibvirtDriver._attach_encryptor` | method | (self, context, connection_info, encryption) | private | `` (src/nova/virt/libvirt/driver.py:L2355) | 8/26 | `src/nova/virt/libvirt/driver.py:L2338–L2392` |
| `LibvirtDriver._detach_encryptor` | method | (self, context, connection_info, encryption, destroy_secrets=True) | private | `` (src/nova/virt/libvirt/driver.py:L2409); `self._host.delete_secret('volume', volume_id)` (src/nova/virt/libvirt/driver.py:L2410); `` (src/nova/virt/libvirt/driver.py:L2424) | 8/16 | `src/nova/virt/libvirt/driver.py:L2394–L2429` |
| `LibvirtDriver._check_discard_for_attach_volume` | method | (self, conf, instance) | private | not declared | 3/10 | `src/nova/virt/libvirt/driver.py:L2431–L2446` |
| `LibvirtDriver.attach_volume` | method | (self, context, connection_info, instance, mountpoint, disk_bus=None, device_type=None, encryption=None) | public | not declared | 7/38 | `src/nova/virt/libvirt/driver.py:L2448–L2503` |
| `LibvirtDriver._swap_volume` | method | (self, guest, disk_dev, conf, resize_to) | private | not declared | 8/28 | `src/nova/virt/libvirt/driver.py:L2505–L2567` |
| `LibvirtDriver.swap_volume` | method | (self, context, old_connection_info, new_connection_info, instance, mountpoint, resize_to) | public | not declared | 7/26 | `src/nova/virt/libvirt/driver.py:L2569–L2607` |
| `LibvirtDriver._get_existing_domain_xml` | method | (self, instance, network_info, block_device_info=None, share_info=None) | private | `xml` (src/nova/virt/libvirt/driver.py:L2624) | 2/16 | `src/nova/virt/libvirt/driver.py:L2609–L2624` |
| `LibvirtDriver.emit_event` | method | (self, event) | public | not declared | 4/23 | `src/nova/virt/libvirt/driver.py:L2626–L2656` |
| `LibvirtDriver._detach_with_retry` | method | (self, guest, instance_uuid, get_device_conf_func, device_name) | private | `` (src/nova/virt/libvirt/driver.py:L2705) | 11/39 | `src/nova/virt/libvirt/driver.py:L2658–L2740` |
| `LibvirtDriver._detach_from_persistent` | method | (self, guest, instance_uuid, persistent_dev, get_device_conf_func, device_name) | private | not declared | 2/27 | `src/nova/virt/libvirt/driver.py:L2742–L2772` |
| `LibvirtDriver._detach_from_live_with_retry` | method | (self, guest, instance_uuid, live_dev, get_device_conf_func, device_name) | private | `` (src/nova/virt/libvirt/driver.py:L2800) | 3/36 | `src/nova/virt/libvirt/driver.py:L2774–L2815` |
| `LibvirtDriver._detach_from_live_and_wait_for_event` | method | (self, dev, guest, instance_uuid, device_name) | private | not declared | 5/40 | `src/nova/virt/libvirt/driver.py:L2817–L2895` |
| `LibvirtDriver._detach_sync` | method | (dev, guest, instance_uuid, device_name, persistent, live) | private | `` (src/nova/virt/libvirt/driver.py:L2971); `` (src/nova/virt/libvirt/driver.py:L2978) | 9/44 | `src/nova/virt/libvirt/driver.py:L2898–L2983` |
| `LibvirtDriver._get_guest_disk_device` | method | (self, guest, disk_dev, volume_uuid=None, from_persistent_config=False) | private | `dev` (src/nova/virt/libvirt/driver.py:L3001); `dev` (src/nova/virt/libvirt/driver.py:L3013) | 5/19 | `src/nova/virt/libvirt/driver.py:L2985–L3013` |
| `LibvirtDriver.detach_volume` | method | (self, context, connection_info, instance, mountpoint, encryption=None) | public | not declared | 3/24 | `src/nova/virt/libvirt/driver.py:L3015–L3050` |
| `LibvirtDriver._resize_attached_volume` | method | (self, new_size, block_device, instance) | private | not declared | 1/5 | `src/nova/virt/libvirt/driver.py:L3052–L3056` |
| `LibvirtDriver._resize_attached_encrypted_volume` | method | (self, context, original_new_size, block_device, instance, connection_info, encryption) | private | not declared | 8/41 | `src/nova/virt/libvirt/driver.py:L3058–L3118` |
| `LibvirtDriver.extend_volume` | method | (self, context, connection_info, instance, requested_size) | public | not declared | 11/49 | `src/nova/virt/libvirt/driver.py:L3120–L3178` |
| `LibvirtDriver.attach_interface` | method | (self, context, instance, image_meta, vif) | public | not declared | 4/35 | `src/nova/virt/libvirt/driver.py:L3180–L3228` |
| `LibvirtDriver.detach_interface` | method | (self, context, instance, vif) | public | not declared | 4/29 | `src/nova/virt/libvirt/driver.py:L3230–L3269` |
| `LibvirtDriver._create_snapshot_metadata` | method | (self, image_meta, instance, img_fmt, snp_name) | private | `metadata` (src/nova/virt/libvirt/driver.py:L3293) | 3/20 | `src/nova/virt/libvirt/driver.py:L3271–L3293` |
| `LibvirtDriver.snapshot` | method | (self, context, instance, image_id, update_task_state) | public | not declared | 24/124 | `src/nova/virt/libvirt/driver.py:L3295–L3467` |
| `LibvirtDriver._needs_suspend_resume_for_snapshot` | method | (self, live_snapshot, current_power_state) | private | `False` (src/nova/virt/libvirt/driver.py:L3476); `False` (src/nova/virt/libvirt/driver.py:L3480); `current_power_state in (power_state.RUNNING, power_state.PAUSED)` (src/nova/virt/libvirt/driver.py:L3483) | 3/10 | `src/nova/virt/libvirt/driver.py:L3469–L3483` |
| `LibvirtDriver._suspend_guest_for_snapshot` | method | (self, context, live_snapshot, current_power_state, instance) | private | not declared | 2/11 | `src/nova/virt/libvirt/driver.py:L3485–L3495` |
| `LibvirtDriver._resume_guest_after_snapshot` | method | (self, context, live_snapshot, original_power_state, instance, guest) | private | `` (src/nova/virt/libvirt/driver.py:L3508) | 2/22 | `src/nova/virt/libvirt/driver.py:L3497–L3522` |
| `LibvirtDriver._can_set_admin_password` | method | (self, image_meta) | private | not declared | 4/6 | `src/nova/virt/libvirt/driver.py:L3524–L3530` |
| `LibvirtDriver._save_instance_password_if_sshkey_present` | method | (self, instance, new_pass) | private | not declared | 4/7 | `src/nova/virt/libvirt/driver.py:L3532–L3540` |
| `LibvirtDriver.set_admin_password` | method | (self, instance, new_pass) | public | not declared | 5/23 | `src/nova/virt/libvirt/driver.py:L3542–L3568` |
| `LibvirtDriver._can_quiesce` | method | (self, instance, image_meta) | private | not declared | 3/6 | `src/nova/virt/libvirt/driver.py:L3570–L3576` |
| `LibvirtDriver._requires_quiesce` | method | (self, image_meta) | private | `image_meta.properties.get('os_require_quiesce', False)` (src/nova/virt/libvirt/driver.py:L3579) | 1/2 | `src/nova/virt/libvirt/driver.py:L3578–L3579` |
| `LibvirtDriver._set_quiesced` | method | (self, context, instance, image_meta, quiesced) | private | not declared | 4/20 | `src/nova/virt/libvirt/driver.py:L3581–L3601` |
| `LibvirtDriver.quiesce` | method | (self, context, instance, image_meta) | public | not declared | 1/2 | `src/nova/virt/libvirt/driver.py:L3603–L3608` |
| `LibvirtDriver.unquiesce` | method | (self, context, instance, image_meta) | public | not declared | 1/2 | `src/nova/virt/libvirt/driver.py:L3610–L3612` |
| `LibvirtDriver._live_snapshot` | method | (self, context, instance, guest, disk_path, out_path, source_format, image_format, image_meta) | private | not declared | 9/49 | `src/nova/virt/libvirt/driver.py:L3614–L3695` |
| `LibvirtDriver._volume_snapshot_update_status` | method | (self, context, snapshot_id, status) | private | not declared | 2/8 | `src/nova/virt/libvirt/driver.py:L3697–L3718` |
| `LibvirtDriver._volume_snapshot_create` | method | (self, context, instance, guest, volume_id, new_file) | private | `` (src/nova/virt/libvirt/driver.py:L3824) | 18/91 | `src/nova/virt/libvirt/driver.py:L3720–L3848` |
| `LibvirtDriver._volume_refresh_connection_info` | method | (self, context, instance, volume_id) | private | not declared | 2/7 | `src/nova/virt/libvirt/driver.py:L3850–L3857` |
| `LibvirtDriver.volume_snapshot_create` | method | (self, context, instance, volume_id, create_info) | public | not declared | 5/30 | `src/nova/virt/libvirt/driver.py:L3859–L3913` |
| `LibvirtDriver.volume_snapshot_create._wait_for_snapshot` | function | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L3904–L3910` |
| `LibvirtDriver._rebase_with_qemu_img` | method | (source_path, rebase_base) | private | not declared | 3/18 | `src/nova/virt/libvirt/driver.py:L3916–L3959` |
| `LibvirtDriver._volume_snapshot_delete` | method | (self, context, instance, volume_id, snapshot_id, delete_info=None) | private | not declared | 23/104 | `src/nova/virt/libvirt/driver.py:L3961–L4153` |
| `LibvirtDriver._volume_snapshot_delete._get_snap_dev` | function | (filename, backing_store) | private | `my_dev + '[0]'` (src/nova/virt/libvirt/driver.py:L4049); `my_snap_dev` (src/nova/virt/libvirt/driver.py:L4068) | — | `src/nova/virt/libvirt/driver.py:L4031–L4068` |
| `LibvirtDriver.volume_snapshot_delete` | method | (self, context, instance, volume_id, snapshot_id, delete_info) | public | not declared | 2/14 | `src/nova/virt/libvirt/driver.py:L4155–L4169` |
| `LibvirtDriver.reboot` | method | (self, context, instance, network_info, reboot_type, block_device_info=None, bad_volumes_callback=None, accel_info=None, share_info=None) | public | `` (src/nova/virt/libvirt/driver.py:L4188); `self._hard_reboot(context, instance, network_info, share_info, block_device_info, accel_info )` (src/nova/virt/libvirt/driver.py:L4193) | 4/22 | `src/nova/virt/libvirt/driver.py:L4171–L4195` |
| `LibvirtDriver._soft_reboot` | method | (self, instance) | private | `True` (src/nova/virt/libvirt/driver.py:L4235); `True` (src/nova/virt/libvirt/driver.py:L4239); `False` (src/nova/virt/libvirt/driver.py:L4241) | 5/25 | `src/nova/virt/libvirt/driver.py:L4197–L4241` |
| `LibvirtDriver._hard_reboot` | method | (self, context, instance, network_info, share_info, block_device_info=None, accel_info=None) | private | not declared | 14/74 | `src/nova/virt/libvirt/driver.py:L4243–L4394` |
| `LibvirtDriver._hard_reboot._wait_for_reboot` | function | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L4380–L4387` |
| `LibvirtDriver.pause` | method | (self, instance) | public | not declared | 1/2 | `src/nova/virt/libvirt/driver.py:L4396–L4398` |
| `LibvirtDriver.unpause` | method | (self, instance) | public | not declared | 1/4 | `src/nova/virt/libvirt/driver.py:L4400–L4404` |
| `LibvirtDriver._clean_shutdown` | method | (self, instance, timeout, retry_interval) | private | `True` (src/nova/virt/libvirt/driver.py:L4427); `True` (src/nova/virt/libvirt/driver.py:L4432); `True` (src/nova/virt/libvirt/driver.py:L4452); `False` (src/nova/virt/libvirt/driver.py:L4481) | 8/44 | `src/nova/virt/libvirt/driver.py:L4406–L4481` |
| `LibvirtDriver.power_off` | method | (self, instance, timeout=0, retry_interval=0) | public | not declared | 2/4 | `src/nova/virt/libvirt/driver.py:L4483–L4487` |
| `LibvirtDriver.power_on` | method | (self, context, instance, network_info, block_device_info=None, accel_info=None, share_info=None) | public | not declared | 1/4 | `src/nova/virt/libvirt/driver.py:L4489–L4496` |
| `LibvirtDriver._get_share_driver_manager` | method | (self, host, protocol) | private | `nfs.LibvirtNFSVolumeDriver(host)` (src/nova/virt/libvirt/driver.py:L4500); `cephfs.LibvirtCEPHFSVolumeDriver(host)` (src/nova/virt/libvirt/driver.py:L4502) | 3/7 | `src/nova/virt/libvirt/driver.py:L4498–L4504` |
| `LibvirtDriver._get_share_connection_info` | method | (self, share_mapping) | private | `connection_info` (src/nova/virt/libvirt/driver.py:L4521) | 4/16 | `src/nova/virt/libvirt/driver.py:L4506–L4521` |
| `LibvirtDriver._get_share_mount_path` | method | (self, instance, share_mapping) | private | `mount_path` (src/nova/virt/libvirt/driver.py:L4529) | 1/6 | `src/nova/virt/libvirt/driver.py:L4523–L4529` |
| `LibvirtDriver.mount_share` | method | (self, context, instance, share_mapping) | public | not declared | 2/14 | `src/nova/virt/libvirt/driver.py:L4531–L4545` |
| `LibvirtDriver.umount_share` | method | (self, context, instance, share_mapping) | public | `drv.disconnect_volume( self._get_share_connection_info(share_mapping), instance )` (src/nova/virt/libvirt/driver.py:L4552) | 2/14 | `src/nova/virt/libvirt/driver.py:L4547–L4561` |
| `LibvirtDriver.is_share_mounted` | method | (self, share_mapping) | public | `filesystem.is_mounted(mount_path)` (src/nova/virt/libvirt/driver.py:L4571) | 1/6 | `src/nova/virt/libvirt/driver.py:L4563–L4571` |
| `LibvirtDriver.trigger_crash_dump` | method | (self, instance) | public | not declared | 4/15 | `src/nova/virt/libvirt/driver.py:L4573–L4590` |
| `LibvirtDriver.suspend` | method | (self, context, instance) | public | not declared | 1/11 | `src/nova/virt/libvirt/driver.py:L4592–L4604` |
| `LibvirtDriver.resume` | method | (self, context, instance, network_info, block_device_info=None, share_info=None) | public | not declared | 2/29 | `src/nova/virt/libvirt/driver.py:L4606–L4641` |
| `LibvirtDriver.resume_state_on_host_boot` | method | (self, context, instance, network_info, share_info, block_device_info=None) | public | `` (src/nova/virt/libvirt/driver.py:L4658) | 3/16 | `src/nova/virt/libvirt/driver.py:L4643–L4667` |
| `LibvirtDriver.rescue` | method | (self, context, instance, network_info, image_meta, rescue_password, block_device_info, share_info) | public | not declared | 10/70 | `src/nova/virt/libvirt/driver.py:L4669–L4801` |
| `LibvirtDriver.unrescue` | method | (self, context, instance) | public | not declared | 7/23 | `src/nova/virt/libvirt/driver.py:L4803–L4829` |
| `LibvirtDriver.poll_rebooting_instances` | method | (self, timeout, instances) | public | not declared | 1/2 | `src/nova/virt/libvirt/driver.py:L4831–L4832` |
| `LibvirtDriver._get_or_create_encryption_secret` | method | (context, instance, driver_bdm) | private | `secret_uuid, secret, created` (src/nova/virt/libvirt/driver.py:L4869) | 3/17 | `src/nova/virt/libvirt/driver.py:L4835–L4869` |
| `LibvirtDriver._add_ephemeral_encryption_driver_bdm_attrs` | method | (self, context, instance, block_device_info) | private | `block_device_info` (src/nova/virt/libvirt/driver.py:L4958) | 20/65 | `src/nova/virt/libvirt/driver.py:L4871–L4958` |
| `LibvirtDriver.spawn` | method | (self, context, instance, image_meta, injected_files, admin_password, allocations, network_info=None, block_device_info=None, power_on=True, accel_info=None) | public | not declared | 6/46 | `src/nova/virt/libvirt/driver.py:L4960–L5037` |
| `LibvirtDriver.spawn._wait_for_boot` | function | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L5020–L5026` |
| `LibvirtDriver._get_console_output_file` | method | (self, instance, console_log) | private | `log_data` (src/nova/virt/libvirt/driver.py:L5060) | 4/16 | `src/nova/virt/libvirt/driver.py:L5039–L5060` |
| `LibvirtDriver.get_console_output` | method | (self, context, instance) | public | `""` (src/nova/virt/libvirt/driver.py:L5090); `self._get_console_output_file(instance, console_path)` (src/nova/virt/libvirt/driver.py:L5109) | 7/28 | `src/nova/virt/libvirt/driver.py:L5062–L5109` |
| `LibvirtDriver.get_host_ip_addr` | method | (self) | public | `addr` (src/nova/virt/libvirt/driver.py:L5120) | 2/5 | `src/nova/virt/libvirt/driver.py:L5111–L5120` |
| `LibvirtDriver.get_vnc_console` | method | (self, context, instance) | public | `ctype.ConsoleVNC(host=host, port=port)` (src/nova/virt/libvirt/driver.py:L5139) | 1/5 | `src/nova/virt/libvirt/driver.py:L5122–L5139` |
| `LibvirtDriver.get_vnc_console.get_vnc_port_for_instance` | function | (instance_name) | public | `graphic.get('port')` (src/nova/virt/libvirt/driver.py:L5131) | — | `src/nova/virt/libvirt/driver.py:L5123–L5134` |
| `LibvirtDriver.get_spice_console` | method | (self, context, instance) | public | `ctype.ConsoleSpice(host=host, port=ports[0], tlsPort=ports[1])` (src/nova/virt/libvirt/driver.py:L5158) | 1/5 | `src/nova/virt/libvirt/driver.py:L5141–L5158` |
| `LibvirtDriver.get_spice_console.get_spice_ports_for_instance` | function | (instance_name) | public | `(graphic.get('port'), graphic.get('tlsPort'))` (src/nova/virt/libvirt/driver.py:L5150) | — | `src/nova/virt/libvirt/driver.py:L5142–L5153` |
| `LibvirtDriver.get_serial_console` | method | (self, context, instance) | public | `ctype.ConsoleSerial(host=hostname, port=port)` (src/nova/virt/libvirt/driver.py:L5164) | 2/6 | `src/nova/virt/libvirt/driver.py:L5160–L5165` |
| `LibvirtDriver._create_ephemeral` | method | (target, ephemeral_size, fs_label, os_type, is_block_dev=False, context=None, specified_fs=None, vm_mode=None) | private | `` (src/nova/virt/libvirt/driver.py:L5179) | 4/15 | `src/nova/virt/libvirt/driver.py:L5168–L5185` |
| `LibvirtDriver._create_swap` | method | (target, swap_mb, context=None) | private | not declared | 1/3 | `src/nova/virt/libvirt/driver.py:L5188–L5191` |
| `LibvirtDriver._refresh_nfs_swap_cache` | method | (swap_path) | private | not declared | 2/7 | `src/nova/virt/libvirt/driver.py:L5194–L5207` |
| `LibvirtDriver._get_console_log_path` | method | (instance) | private | `os.path.join(libvirt_utils.get_instance_path(instance), 'console.log')` (src/nova/virt/libvirt/driver.py:L5211) | 1/3 | `src/nova/virt/libvirt/driver.py:L5210–L5212` |
| `LibvirtDriver._ensure_console_log_for_instance` | method | (self, instance) | private | not declared | 3/10 | `src/nova/virt/libvirt/driver.py:L5214–L5244` |
| `LibvirtDriver._get_disk_config_image_type` | method | — | private | `'rbd' if CONF.libvirt.images_type == 'rbd' else 'raw'` (src/nova/virt/libvirt/driver.py:L5251) | 2/2 | `src/nova/virt/libvirt/driver.py:L5247–L5251` |
| `LibvirtDriver._is_booted_from_volume` | method | (block_device_info) | private | `bool(block_device.get_root_bdm(block_device_mapping))` (src/nova/virt/libvirt/driver.py:L5262) | 1/4 | `src/nova/virt/libvirt/driver.py:L5254–L5262` |
| `LibvirtDriver._inject_data` | method | (self, disk, instance, injection_info) | private | not declared | 9/36 | `src/nova/virt/libvirt/driver.py:L5264–L5317` |
| `LibvirtDriver._get_fs_label_ephemeral` | method | (index) | private | `f'ephemeral{index}'` (src/nova/virt/libvirt/driver.py:L5324) | 1/2 | `src/nova/virt/libvirt/driver.py:L5320–L5324` |
| `LibvirtDriver._create_image` | method | (self, context, instance, disk_mapping, injection_info=None, suffix='', disk_images=None, block_device_info=None, fallback_from_host=None, ignore_bdi_for_swap=False) | private | `(created_instance_dir, created_disks)` (src/nova/virt/libvirt/driver.py:L5502) | 23/119 | `src/nova/virt/libvirt/driver.py:L5329–L5502` |
| `LibvirtDriver._create_image.image` | function | (fname, image_type=CONF.libvirt.images_type, disk_info_mapping=None) | public | `self.image_backend.by_name( instance, fname + suffix, image_type, disk_info_mapping=disk_info_mapping)` (src/nova/virt/libvirt/driver.py:L5339) | — | `src/nova/virt/libvirt/driver.py:L5336–L5341` |
| `LibvirtDriver._create_image.raw` | function | (fname, disk_info_mapping=None) | public | `image( fname, image_type='raw', disk_info_mapping=disk_info_mapping)` (src/nova/virt/libvirt/driver.py:L5344) | — | `src/nova/virt/libvirt/driver.py:L5343–L5345` |
| `LibvirtDriver._create_and_inject_local_root` | method | (self, context, instance, disk_mapping, booted_from_volume, suffix, disk_images, injection_info, fallback_from_host) | private | `created_disks` (src/nova/virt/libvirt/driver.py:L5575) | 10/34 | `src/nova/virt/libvirt/driver.py:L5504–L5575` |
| `LibvirtDriver._create_and_inject_local_root.clone_fallback_to_fetch` | function | (context, target, image_id, trusted_certs=None) | public | not declared | — | `src/nova/virt/libvirt/driver.py:L5530–L5553` |
| `LibvirtDriver._needs_rebase_original_qcow2_image` | method | (self, instance, backend) | private | `False` (src/nova/virt/libvirt/driver.py:L5579); `True` (src/nova/virt/libvirt/driver.py:L5581); `True` (src/nova/virt/libvirt/driver.py:L5589); `False` (src/nova/virt/libvirt/driver.py:L5590) | 5/11 | `src/nova/virt/libvirt/driver.py:L5577–L5590` |
| `LibvirtDriver._rebase_original_qcow2_image` | method | (self, context, instance, backend) | private | `` (src/nova/virt/libvirt/driver.py:L5601) | 3/20 | `src/nova/virt/libvirt/driver.py:L5592–L5624` |
| `LibvirtDriver._create_configdrive` | method | (self, context, instance, injection_info, rescue=False) | private | not declared | 8/41 | `src/nova/virt/libvirt/driver.py:L5626–L5689` |
| `LibvirtDriver._detach_pci_devices` | method | (self, guest, pci_devs) | private | not declared | 10/27 | `src/nova/virt/libvirt/driver.py:L5691–L5720` |
| `LibvirtDriver._attach_pci_devices` | method | (self, guest, pci_devs) | private | not declared | 3/8 | `src/nova/virt/libvirt/driver.py:L5722–L5730` |
| `LibvirtDriver._has_direct_passthrough_port` | method | (network_info) | private | `True` (src/nova/virt/libvirt/driver.py:L5737); `False` (src/nova/virt/libvirt/driver.py:L5738) | 3/6 | `src/nova/virt/libvirt/driver.py:L5733–L5738` |
| `LibvirtDriver._attach_direct_passthrough_ports` | method | (self, context, instance, guest, network_info=None) | private | `` (src/nova/virt/libvirt/driver.py:L5745) | 6/19 | `src/nova/virt/libvirt/driver.py:L5740–L5759` |
| `LibvirtDriver._detach_direct_passthrough_ports` | method | (self, context, instance, guest) | private | `` (src/nova/virt/libvirt/driver.py:L5767) | 11/33 | `src/nova/virt/libvirt/driver.py:L5764–L5829` |
| `LibvirtDriver._update_compute_provider_status` | method | (self, context, service) | private | not declared | 4/12 | `src/nova/virt/libvirt/driver.py:L5831–L5850` |
| `LibvirtDriver._set_host_enabled` | method | (self, enabled, disable_reason=DISABLE_REASON_UNDEFINED) | private | not declared | 10/36 | `src/nova/virt/libvirt/driver.py:L5852–L5906` |
| `LibvirtDriver._check_emulation_arch` | method | (self, image_meta) | private | `arch` (src/nova/virt/libvirt/driver.py:L5943) | 2/7 | `src/nova/virt/libvirt/driver.py:L5908–L5943` |
| `LibvirtDriver._get_cpu_model_mapping` | method | (self, model) | private | `model` (src/nova/virt/libvirt/driver.py:L5964); `self.cpu_models_mapping.get(model.lower())` (src/nova/virt/libvirt/driver.py:L5978) | 5/19 | `src/nova/virt/libvirt/driver.py:L5945–L5978` |
| `LibvirtDriver._get_guest_cpu_model_config` | method | (self, flavor=None, arch=None) | private | `vconfig.LibvirtConfigGuestCPU()` (src/nova/virt/libvirt/driver.py:L6015); `None` (src/nova/virt/libvirt/driver.py:L6025); `cpu` (src/nova/virt/libvirt/driver.py:L6062) | 21/47 | `src/nova/virt/libvirt/driver.py:L5982–L6062` |
| `LibvirtDriver._get_guest_cpu_config_maxphysaddr` | method | (self, flavor, image_meta) | private | `None` (src/nova/virt/libvirt/driver.py:L6071); `maxphysaddr` (src/nova/virt/libvirt/driver.py:L6079) | 5/12 | `src/nova/virt/libvirt/driver.py:L6064–L6079` |
| `LibvirtDriver._match_cpu_model_by_flags` | method | (self, models, flags) | private | `model` (src/nova/virt/libvirt/driver.py:L6084); `model` (src/nova/virt/libvirt/driver.py:L6094) | 6/17 | `src/nova/virt/libvirt/driver.py:L6081–L6098` |
| `LibvirtDriver._get_guest_cpu_config` | method | (self, flavor, image_meta, guest_cpu_numa_config, instance_numa_topology) | private | `None` (src/nova/virt/libvirt/driver.py:L6106); `cpu` (src/nova/virt/libvirt/driver.py:L6135) | 6/23 | `src/nova/virt/libvirt/driver.py:L6100–L6135` |
| `LibvirtDriver._get_guest_disk_config` | method | (self, instance, name, disk_mapping, flavor, image_type=None, boot_order=None) | private | `conf` (src/nova/virt/libvirt/driver.py:L6173) | 8/25 | `src/nova/virt/libvirt/driver.py:L6137–L6173` |
| `LibvirtDriver._get_guest_fs_config` | method | (self, instance, name, image_type=CONF.libvirt.images_type) | private | `disk.libvirt_fs_info("/", "ploop")` (src/nova/virt/libvirt/driver.py:L6179) | 1/5 | `src/nova/virt/libvirt/driver.py:L6175–L6179` |
| `LibvirtDriver._get_guest_storage_config` | method | (self, context, instance, image_meta, disk_info, rescue, block_device_info, flavor, os_type) | private | `devices` (src/nova/virt/libvirt/driver.py:L6317) | 25/93 | `src/nova/virt/libvirt/driver.py:L6181–L6317` |
| `LibvirtDriver._get_guest_storage_config._get_ephemeral_devices` | function | — | private | `eph_devices` (src/nova/virt/libvirt/driver.py:L6222) | — | `src/nova/virt/libvirt/driver.py:L6212–L6222` |
| `LibvirtDriver._get_scsi_controller` | method | (image_meta) | private | `scsi_controller` (src/nova/virt/libvirt/driver.py:L6328) | 2/8 | `src/nova/virt/libvirt/driver.py:L6320–L6328` |
| `LibvirtDriver._get_host_sysinfo_serial_hardware` | method | (self) | private | `caps.host.uuid` (src/nova/virt/libvirt/driver.py:L6338) | 1/3 | `src/nova/virt/libvirt/driver.py:L6330–L6338` |
| `LibvirtDriver._get_host_sysinfo_serial_os` | method | (self) | private | `str(uuid.UUID(lines[0]))` (src/nova/virt/libvirt/driver.py:L6361) | 3/10 | `src/nova/virt/libvirt/driver.py:L6340–L6361` |
| `LibvirtDriver._get_host_sysinfo_serial_auto` | method | (self) | private | `self._get_host_sysinfo_serial_os()` (src/nova/virt/libvirt/driver.py:L6365); `self._get_host_sysinfo_serial_hardware()` (src/nova/virt/libvirt/driver.py:L6367) | 2/5 | `src/nova/virt/libvirt/driver.py:L6363–L6367` |
| `LibvirtDriver._get_guest_config_sysinfo` | method | (self, instance) | private | `sysinfo` (src/nova/virt/libvirt/driver.py:L6384) | 2/12 | `src/nova/virt/libvirt/driver.py:L6369–L6384` |
| `LibvirtDriver._set_managed_mode` | method | (self, pcidev, managed) | private | not declared | 4/7 | `src/nova/virt/libvirt/driver.py:L6386–L6393` |
| `LibvirtDriver._get_guest_pci_device` | method | (self, pci_device) | private | `dev` (src/nova/virt/libvirt/driver.py:L6403) | 1/7 | `src/nova/virt/libvirt/driver.py:L6395–L6403` |
| `LibvirtDriver._get_guest_config_meta` | method | (self, dmeta) | private | `meta` (src/nova/virt/libvirt/driver.py:L6453) | 4/38 | `src/nova/virt/libvirt/driver.py:L6405–L6453` |
| `LibvirtDriver._create_idmaps` | method | (klass, map_strings) | private | `idmaps` (src/nova/virt/libvirt/driver.py:L6471) | 5/16 | `src/nova/virt/libvirt/driver.py:L6456–L6471` |
| `LibvirtDriver._get_guest_idmaps` | method | (self) | private | `id_maps` (src/nova/virt/libvirt/driver.py:L6483) | 5/11 | `src/nova/virt/libvirt/driver.py:L6473–L6483` |
| `LibvirtDriver._update_guest_cputune` | method | (self, guest, flavor) | private | `` (src/nova/virt/libvirt/driver.py:L6496) | 10/16 | `src/nova/virt/libvirt/driver.py:L6485–L6504` |
| `LibvirtDriver._get_cpu_numa_config_from_instance` | method | (self, instance_numa_topology, wants_hugepages) | private | `guest_cpu_numa` (src/nova/virt/libvirt/driver.py:L6530) | 4/13 | `src/nova/virt/libvirt/driver.py:L6506–L6530` |
| `LibvirtDriver._wants_hugepages` | method | (self, host_topology, instance_topology) | private | `False` (src/nova/virt/libvirt/driver.py:L6538); `True` (src/nova/virt/libvirt/driver.py:L6550); `False` (src/nova/virt/libvirt/driver.py:L6552) | 7/12 | `src/nova/virt/libvirt/driver.py:L6532–L6552` |
| `LibvirtDriver._get_cell_pairs` | method | (self, guest_cpu_numa_config, host_topology) | private | `cell_pairs` (src/nova/virt/libvirt/driver.py:L6564) | 4/7 | `src/nova/virt/libvirt/driver.py:L6554–L6564` |
| `LibvirtDriver._get_pin_cpuset` | method | (self, vcpu, inst_cell, host_cell) | private | `pin_cpuset` (src/nova/virt/libvirt/driver.py:L6587) | 3/8 | `src/nova/virt/libvirt/driver.py:L6566–L6587` |
| `LibvirtDriver._get_emulatorpin_cpuset` | method | (self, vcpu, object_numa_cell, vcpus_rt, emulator_threads_policy, pin_cpuset) | private | `emulatorpin_cpuset` (src/nova/virt/libvirt/driver.py:L6633) | 8/26 | `src/nova/virt/libvirt/driver.py:L6589–L6633` |
| `LibvirtDriver._get_guest_iothread` | method | (self) | private | `1` (src/nova/virt/libvirt/driver.py:L6636) | 1/2 | `src/nova/virt/libvirt/driver.py:L6635–L6636` |
| `LibvirtDriver._get_guest_numa_config` | method | (self, instance_numa_topology, flavor, image_meta) | private | `GuestNumaConfig(shared_cpus, None, None, None)` (src/nova/virt/libvirt/driver.py:L6694); `GuestNumaConfig(shared_cpus, None, guest_cpu_numa_config, None)` (src/nova/virt/libvirt/driver.py:L6699); `GuestNumaConfig(None, guest_cpu_tune, guest_cpu_numa_config, guest_numa_tune)` (src/nova/virt/libvirt/driver.py:L6786) | 13/62 | `src/nova/virt/libvirt/driver.py:L6638–L6787` |
| `LibvirtDriver._get_guest_os_type` | method | (self) | private | `ret` (src/nova/virt/libvirt/driver.py:L6795) | 2/6 | `src/nova/virt/libvirt/driver.py:L6789–L6795` |
| `LibvirtDriver._set_guest_for_rescue` | method | (self, rescue, guest, inst_path, root_device_name) | private | not declared | 4/10 | `src/nova/virt/libvirt/driver.py:L6797–L6806` |
| `LibvirtDriver._set_guest_for_inst_kernel` | method | (self, instance, guest, inst_path, root_device_name, image_meta) | private | not declared | 4/11 | `src/nova/virt/libvirt/driver.py:L6808–L6821` |
| `LibvirtDriver._set_clock` | method | (self, guest, os_type, image_meta) | private | not declared | 3/10 | `src/nova/virt/libvirt/driver.py:L6823–L6837` |
| `LibvirtDriver._set_kvm_timers` | method | (self, clk, os_type, image_meta) | private | not declared | 4/26 | `src/nova/virt/libvirt/driver.py:L6839–L6875` |
| `LibvirtDriver._set_features` | method | (self, guest, os_type, image_meta, flavor) | private | not declared | 16/49 | `src/nova/virt/libvirt/driver.py:L6877–L6950` |
| `LibvirtDriver._check_number_of_serial_console` | method | (self, num_ports) | private | not declared | 3/8 | `src/nova/virt/libvirt/driver.py:L6952–L6959` |
| `LibvirtDriver._video_model_supported` | method | (self, model) | private | `model in fields.VideoModel.ALL` (src/nova/virt/libvirt/driver.py:L6962) | 1/2 | `src/nova/virt/libvirt/driver.py:L6961–L6962` |
| `LibvirtDriver._add_video_driver` | method | (self, guest, image_meta, flavor) | private | `video` (src/nova/virt/libvirt/driver.py:L6979) | 5/12 | `src/nova/virt/libvirt/driver.py:L6964–L6979` |
| `LibvirtDriver._get_video_type` | method | (self, image_meta) | private | `video_type` (src/nova/virt/libvirt/driver.py:L6994); `'vga'` (src/nova/virt/libvirt/driver.py:L6998); `'virtio'` (src/nova/virt/libvirt/driver.py:L7011); `'vga'` (src/nova/virt/libvirt/driver.py:L7022); `'virtio'` (src/nova/virt/libvirt/driver.py:L7027); `'virtio'` (src/nova/virt/libvirt/driver.py:L7029); `None` (src/nova/virt/libvirt/driver.py:L7033) | 9/32 | `src/nova/virt/libvirt/driver.py:L6981–L7033` |
| `LibvirtDriver._add_qga_device` | method | (self, guest, instance) | private | not declared | 1/7 | `src/nova/virt/libvirt/driver.py:L7035–L7041` |
| `LibvirtDriver._add_rng_device` | method | (self, guest, flavor, image_meta) | private | `` (src/nova/virt/libvirt/driver.py:L7048) | 5/16 | `src/nova/virt/libvirt/driver.py:L7043–L7060` |
| `LibvirtDriver._add_vtpm_device` | method | (self, guest, flavor, instance, image_meta) | private | `None` (src/nova/virt/libvirt/driver.py:L7073) | 3/16 | `src/nova/virt/libvirt/driver.py:L7062–L7081` |
| `LibvirtDriver._add_sound_device` | method | (self, guest, flavor, instance, image_meta) | private | `None` (src/nova/virt/libvirt/driver.py:L7094) | 2/12 | `src/nova/virt/libvirt/driver.py:L7083–L7097` |
| `LibvirtDriver._add_redirected_usb_ports` | method | (self, guest, flavor, instance, image_meta) | private | not declared | 2/10 | `src/nova/virt/libvirt/driver.py:L7099–L7109` |
| `LibvirtDriver._set_qemu_guest_agent` | method | (self, guest, flavor, instance, image_meta) | private | not declared | 2/5 | `src/nova/virt/libvirt/driver.py:L7111–L7116` |
| `LibvirtDriver._get_guest_memory_backing_config` | method | (self, inst_topology, numatune, flavor, image_meta) | private | `membacking` (src/nova/virt/libvirt/driver.py:L7181) | 17/51 | `src/nova/virt/libvirt/driver.py:L7118–L7181` |
| `LibvirtDriver._get_memory_backing_hugepages_support` | method | (self, inst_topology, numatune) | private | `pages` (src/nova/virt/libvirt/driver.py:L7216) | 9/22 | `src/nova/virt/libvirt/driver.py:L7183–L7216` |
| `LibvirtDriver._get_flavor` | method | (self, ctxt, instance, flavor) | private | `flavor` (src/nova/virt/libvirt/driver.py:L7220); `instance.flavor` (src/nova/virt/libvirt/driver.py:L7221) | 2/4 | `src/nova/virt/libvirt/driver.py:L7218–L7221` |
| `LibvirtDriver._check_secure_boot_support` | method | (self, arch, machine_type, firmware_type) | private | `False` (src/nova/virt/libvirt/driver.py:L7231); `False` (src/nova/virt/libvirt/driver.py:L7235); `False` (src/nova/virt/libvirt/driver.py:L7242); `True` (src/nova/virt/libvirt/driver.py:L7244) | 5/16 | `src/nova/virt/libvirt/driver.py:L7223–L7244` |
| `LibvirtDriver._get_supported_perf_events` | method | (self) | private | `[]` (src/nova/virt/libvirt/driver.py:L7248); `supported_events` (src/nova/virt/libvirt/driver.py:L7268) | 5/18 | `src/nova/virt/libvirt/driver.py:L7246–L7268` |
| `LibvirtDriver._copy_guest_firmware_elements` | method | (self, old_guest, guest) | private | not declared | 9/35 | `src/nova/virt/libvirt/driver.py:L7270–L7313` |
| `LibvirtDriver._configure_guest_by_virt_type` | method | (self, guest, instance, image_meta, flavor, old_guest=None) | private | `None` (src/nova/virt/libvirt/driver.py:L7423) | 19/72 | `src/nova/virt/libvirt/driver.py:L7315–L7423` |
| `LibvirtDriver._conf_non_lxc` | method | (self, guest, root_device_name, rescue, instance, inst_path, image_meta, disk_info) | private | not declared | 3/18 | `src/nova/virt/libvirt/driver.py:L7425–L7442` |
| `LibvirtDriver._create_consoles` | method | (self, guest_cfg, instance, flavor, image_meta) | private | not declared | 4/15 | `src/nova/virt/libvirt/driver.py:L7444–L7470` |
| `LibvirtDriver._is_mipsel_guest` | method | (self, image_meta) | private | `self._check_emulation_arch(image_meta) in archs` (src/nova/virt/libvirt/driver.py:L7474) | 1/3 | `src/nova/virt/libvirt/driver.py:L7472–L7474` |
| `LibvirtDriver._is_s390x_guest` | method | (self, image_meta) | private | `self._check_emulation_arch(image_meta) in archs` (src/nova/virt/libvirt/driver.py:L7478) | 1/3 | `src/nova/virt/libvirt/driver.py:L7476–L7478` |
| `LibvirtDriver._is_ppc64_guest` | method | (self, image_meta) | private | `self._check_emulation_arch(image_meta) in archs` (src/nova/virt/libvirt/driver.py:L7482) | 1/3 | `src/nova/virt/libvirt/driver.py:L7480–L7482` |
| `LibvirtDriver._is_aarch64_guest` | method | (self, image_meta) | private | `self._check_emulation_arch(image_meta) == arch` (src/nova/virt/libvirt/driver.py:L7486) | 1/3 | `src/nova/virt/libvirt/driver.py:L7484–L7486` |
| `LibvirtDriver._is_x86_guest` | method | (self, image_meta) | private | `self._check_emulation_arch(image_meta) in archs` (src/nova/virt/libvirt/driver.py:L7490) | 1/3 | `src/nova/virt/libvirt/driver.py:L7488–L7490` |
| `LibvirtDriver._create_consoles_qemu_kvm` | method | (self, guest_cfg, instance, flavor, image_meta) | private | not declared | 3/14 | `src/nova/virt/libvirt/driver.py:L7492–L7505` |
| `LibvirtDriver._create_consoles_s390x` | method | (self, guest_cfg, instance, flavor, image_meta) | private | not declared | 3/12 | `src/nova/virt/libvirt/driver.py:L7507–L7518` |
| `LibvirtDriver._create_pty_device` | method | (self, guest_cfg, char_dev_cls, target_type=None, log_path=None) | private | not declared | 1/9 | `src/nova/virt/libvirt/driver.py:L7520–L7531` |
| `LibvirtDriver._serial_ports_already_defined` | method | (self, instance) | private | `True` (src/nova/virt/libvirt/driver.py:L7539); `False` (src/nova/virt/libvirt/driver.py:L7545) | 3/11 | `src/nova/virt/libvirt/driver.py:L7533–L7545` |
| `LibvirtDriver._create_serial_consoles` | method | (self, guest_cfg, num_ports, char_dev_cls, log_path) | private | not declared | 3/14 | `src/nova/virt/libvirt/driver.py:L7547–L7562` |
| `LibvirtDriver._cpu_config_to_vcpu_model` | method | (self, cpu_config, vcpu_model) | private | `` (src/nova/virt/libvirt/driver.py:L7577); `vcpu_model` (src/nova/virt/libvirt/driver.py:L7600) | 5/22 | `src/nova/virt/libvirt/driver.py:L7564–L7600` |
| `LibvirtDriver._vcpu_model_to_cpu_config` | method | (self, vcpu_model) | private | `cpu_config` (src/nova/virt/libvirt/driver.py:L7627) | 4/18 | `src/nova/virt/libvirt/driver.py:L7602–L7627` |
| `LibvirtDriver._guest_needs_usb` | method | (self, guest, image_meta) | private | `True` (src/nova/virt/libvirt/driver.py:L7633); `True` (src/nova/virt/libvirt/driver.py:L7638); `True` (src/nova/virt/libvirt/driver.py:L7642); `False` (src/nova/virt/libvirt/driver.py:L7644) | 7/11 | `src/nova/virt/libvirt/driver.py:L7629–L7644` |
| `LibvirtDriver._guest_add_usb_root_controller` | method | (self, guest, flavor, image_meta) | private | not declared | 4/18 | `src/nova/virt/libvirt/driver.py:L7646–L7676` |
| `LibvirtDriver._guest_add_pcie_root_ports` | method | (self, guest) | private | not declared | 2/6 | `src/nova/virt/libvirt/driver.py:L7678–L7693` |
| `LibvirtDriver._guest_needs_pcie` | method | (self, guest) | private | `False` (src/nova/virt/libvirt/driver.py:L7705); `True` (src/nova/virt/libvirt/driver.py:L7714); `True` (src/nova/virt/libvirt/driver.py:L7721); `False` (src/nova/virt/libvirt/driver.py:L7723) | 7/16 | `src/nova/virt/libvirt/driver.py:L7695–L7723` |
| `LibvirtDriver._get_guest_config` | method | (self, instance, network_info, image_meta, disk_info, rescue=None, block_device_info=None, context=None, mdevs=None, accel_info=None, share_info=None, old_guest=None) | private | `guest` (src/nova/virt/libvirt/driver.py:L7884) | 18/109 | `src/nova/virt/libvirt/driver.py:L7725–L7884` |
| `LibvirtDriver._get_ordered_vpmems` | method | (self, instance, flavor) | private | `ordered_vpmems` (src/nova/virt/libvirt/driver.py:L7892) | 2/7 | `src/nova/virt/libvirt/driver.py:L7886–L7892` |
| `LibvirtDriver._get_vpmems` | method | (self, instance, prefix=None) | private | `vpmems` (src/nova/virt/libvirt/driver.py:L7899) | 2/6 | `src/nova/virt/libvirt/driver.py:L7894–L7899` |
| `LibvirtDriver._guest_add_vpmems` | method | (self, guest, vpmems) | private | not declared | 2/13 | `src/nova/virt/libvirt/driver.py:L7901–L7917` |
| `LibvirtDriver._get_mem_encryption_config` | method | (self, flavor, image_meta) | private | `None` (src/nova/virt/libvirt/driver.py:L7940); `hardware.get_mem_encryption_constraint(flavor, image_meta, mach_type)` (src/nova/virt/libvirt/driver.py:L7943) | 2/6 | `src/nova/virt/libvirt/driver.py:L7919–L7944` |
| `LibvirtDriver._guest_configure_mem_encryption` | method | (self, instance, guest, model) | private | not declared | 3/14 | `src/nova/virt/libvirt/driver.py:L7946–L7959` |
| `LibvirtDriver._guest_configure_sev_mem_encryption` | method | (self, instance, guest, model) | private | not declared | 4/11 | `src/nova/virt/libvirt/driver.py:L7961–L7972` |
| `LibvirtDriver._guest_configure_tdx_mem_encryption` | method | (self, guest) | private | not declared | 1/4 | `src/nova/virt/libvirt/driver.py:L7974–L7983` |
| `LibvirtDriver._guest_add_mdevs` | method | (self, guest, chosen_mdevs) | private | not declared | 2/5 | `src/nova/virt/libvirt/driver.py:L7985–L7989` |
| `LibvirtDriver._allocate_cyborg_mdevs` | method | (self, accel_info) | private | `mdevs` (src/nova/virt/libvirt/driver.py:L8020) | 5/25 | `src/nova/virt/libvirt/driver.py:L7991–L8020` |
| `LibvirtDriver._warn_if_nova_managed` | method | (self, attach_handle_info) | private | not declared | 3/14 | `src/nova/virt/libvirt/driver.py:L8022–L8044` |
| `LibvirtDriver._guest_add_spice_channel` | method | (guest) | private | not declared | 4/9 | `src/nova/virt/libvirt/driver.py:L8047–L8055` |
| `LibvirtDriver._guest_add_memory_balloon` | method | (guest) | private | not declared | 3/11 | `src/nova/virt/libvirt/driver.py:L8058–L8069` |
| `LibvirtDriver._guest_add_watchdog_action` | method | (guest, flavor, image_meta) | private | not declared | 4/12 | `src/nova/virt/libvirt/driver.py:L8072–L8086` |
| `LibvirtDriver._guest_add_pci_devices` | method | (self, guest, instance) | private | not declared | 4/11 | `src/nova/virt/libvirt/driver.py:L8088–L8100` |
| `LibvirtDriver._guest_add_accel_pci_devices` | method | (self, guest, accel_info) | private | not declared | 2/9 | `src/nova/virt/libvirt/driver.py:L8102–L8112` |
| `LibvirtDriver._guest_add_video_device` | method | (guest) | private | `False` (src/nova/virt/libvirt/driver.py:L8117); `add_video_driver` (src/nova/virt/libvirt/driver.py:L8145) | 4/23 | `src/nova/virt/libvirt/driver.py:L8115–L8145` |
| `LibvirtDriver._get_pointer_bus_and_model` | method | (self, guest, image_meta) | private | `None, None` (src/nova/virt/libvirt/driver.py:L8165); `None, None` (src/nova/virt/libvirt/driver.py:L8175); `None, None` (src/nova/virt/libvirt/driver.py:L8189); `pointer_model, pointer_bus` (src/nova/virt/libvirt/driver.py:L8191) | 8/31 | `src/nova/virt/libvirt/driver.py:L8147–L8191` |
| `LibvirtDriver._guest_add_pointer_device` | method | (self, guest, image_meta) | private | `pointer` (src/nova/virt/libvirt/driver.py:L8214) | 3/13 | `src/nova/virt/libvirt/driver.py:L8193–L8214` |
| `LibvirtDriver._guest_add_keyboard_device` | method | (self, guest, image_meta) | private | `None` (src/nova/virt/libvirt/driver.py:L8228); `keyboard` (src/nova/virt/libvirt/driver.py:L8238) | 3/12 | `src/nova/virt/libvirt/driver.py:L8216–L8238` |
| `LibvirtDriver._get_iommu_model` | method | (self, guest, image_meta, flavor) | private | `None` (src/nova/virt/libvirt/driver.py:L8250); `model` (src/nova/virt/libvirt/driver.py:L8289) | 16/46 | `src/nova/virt/libvirt/driver.py:L8240–L8289` |
| `LibvirtDriver._guest_add_iommu_device` | method | (self, guest, image_meta, flavor) | private | `` (src/nova/virt/libvirt/driver.py:L8300); `` (src/nova/virt/libvirt/driver.py:L8306) | 5/23 | `src/nova/virt/libvirt/driver.py:L8291–L8323` |
| `LibvirtDriver._get_existing_guest_config` | method | (self, instance) | private | `guest_config` (src/nova/virt/libvirt/driver.py:L8338) | 2/14 | `src/nova/virt/libvirt/driver.py:L8325–L8338` |
| `LibvirtDriver._get_guest_xml` | method | (self, context, instance, network_info, disk_info, image_meta, rescue=None, block_device_info=None, mdevs=None, accel_info=None, share_info=None, old_guest=None) | private | `xml` (src/nova/virt/libvirt/driver.py:L8370) | 1/25 | `src/nova/virt/libvirt/driver.py:L8340–L8370` |
| `LibvirtDriver.get_info` | method | (self, instance, use_cache=True) | public | `guest.get_info(self._host)` (src/nova/virt/libvirt/driver.py:L8386) | 1/3 | `src/nova/virt/libvirt/driver.py:L8372–L8386` |
| `LibvirtDriver._create_domain_setup_lxc` | method | (self, context, instance, image_meta, block_device_info) | private | not declared | 6/27 | `src/nova/virt/libvirt/driver.py:L8388–L8422` |
| `LibvirtDriver._create_domain_cleanup_lxc` | method | (self, instance) | private | not declared | 3/13 | `src/nova/virt/libvirt/driver.py:L8424–L8442` |
| `LibvirtDriver._lxc_disk_handler` | method | (self, context, instance, image_meta, block_device_info) | private | `` (src/nova/virt/libvirt/driver.py:L8458) | 3/11 | `src/nova/virt/libvirt/driver.py:L8445–L8466` |
| `LibvirtDriver._get_or_create_secret_for_vtpm` | method | (self, context, instance) | private | `libvirt_secret, security` (src/nova/virt/libvirt/driver.py:L8502) | 3/18 | `src/nova/virt/libvirt/driver.py:L8468–L8502` |
| `LibvirtDriver._create_guest` | method | (self, context, xml, instance, power_on=True, pause=False, post_xml_callback=None) | private | `guest` (src/nova/virt/libvirt/driver.py:L8538) | 9/27 | `src/nova/virt/libvirt/driver.py:L8504–L8541` |
| `LibvirtDriver._neutron_failed_callback` | method | (self, event_name, instance) | private | not declared | 2/7 | `src/nova/virt/libvirt/driver.py:L8543–L8549` |
| `LibvirtDriver._get_neutron_events` | method | (self, network_info) | private | `[('network-vif-plugged', vif['id']) for vif in network_info if vif.get('active', True) is False and vif['vnic_type'] != network_model.VNIC_TYPE_REMOTE_MANAGED]` (src/nova/virt/libvirt/driver.py:L8557) | 4/4 | `src/nova/virt/libvirt/driver.py:L8551–L8559` |
| `LibvirtDriver._create_guest_with_network` | method | (self, context, xml, instance, network_info, block_device_info, power_on=True, vifs_already_plugged=False, post_xml_callback=None, external_events=None, cleanup_instance_dir=False, cleanup_instance_disks=False) | private | `guest` (src/nova/virt/libvirt/driver.py:L8632) | 11/60 | `src/nova/virt/libvirt/driver.py:L8561–L8632` |
| `LibvirtDriver._get_pcpu_available` | method | (self) | private | `set()` (src/nova/virt/libvirt/driver.py:L8640); `dedicated_cpus` (src/nova/virt/libvirt/driver.py:L8656) | 4/16 | `src/nova/virt/libvirt/driver.py:L8634–L8656` |
| `LibvirtDriver._get_vcpu_available` | method | (self) | private | `set()` (src/nova/virt/libvirt/driver.py:L8676); `online_cpus` (src/nova/virt/libvirt/driver.py:L8678); `shared_cpus` (src/nova/virt/libvirt/driver.py:L8695) | 6/23 | `src/nova/virt/libvirt/driver.py:L8658–L8695` |
| `LibvirtDriver._get_local_gb_info` | method | — | private | `info` (src/nova/virt/libvirt/driver.py:L8718) | 4/11 | `src/nova/virt/libvirt/driver.py:L8698–L8718` |
| `LibvirtDriver._get_vcpu_used` | method | (self) | private | `total` (src/nova/virt/libvirt/driver.py:L8761) | 3/10 | `src/nova/virt/libvirt/driver.py:L8720–L8761` |
| `LibvirtDriver._is_virtual_mdev` | method | (self, device_address) | private | `device_address in self.virtual_mdevs` (src/nova/virt/libvirt/driver.py:L8773) | 1/2 | `src/nova/virt/libvirt/driver.py:L8763–L8773` |
| `LibvirtDriver._validate_device_address` | method | (self, device_address) | private | not declared | 3/12 | `src/nova/virt/libvirt/driver.py:L8775–L8801` |
| `LibvirtDriver._get_supported_vgpu_types` | method | (self) | private | `[]` (src/nova/virt/libvirt/driver.py:L8805); `enabled_mdev_types` (src/nova/virt/libvirt/driver.py:L8850) | 9/39 | `src/nova/virt/libvirt/driver.py:L8803–L8850` |
| `LibvirtDriver._get_device_address` | method | (self, libvirt_name) | private | `libvirt_name` (src/nova/virt/libvirt/driver.py:L8867); `None` (src/nova/virt/libvirt/driver.py:L8878); `device_address` (src/nova/virt/libvirt/driver.py:L8879) | 3/14 | `src/nova/virt/libvirt/driver.py:L8852–L8879` |
| `LibvirtDriver._get_vgpu_type_per_pgpu` | method | (self, device_address) | private | `` (src/nova/virt/libvirt/driver.py:L8889); `` (src/nova/virt/libvirt/driver.py:L8893); `mdev_type or self.pgpu_type_default` (src/nova/virt/libvirt/driver.py:L8898) | 4/8 | `src/nova/virt/libvirt/driver.py:L8881–L8898` |
| `LibvirtDriver._get_resource_class_for_device` | method | (self, device_address) | private | `orc.VGPU` (src/nova/virt/libvirt/driver.py:L8910); `mdev_class` (src/nova/virt/libvirt/driver.py:L8913) | 2/6 | `src/nova/virt/libvirt/driver.py:L8900–L8913` |
| `LibvirtDriver._get_supported_mdev_resource_classes` | method | (self) | private | `self.mdev_classes` (src/nova/virt/libvirt/driver.py:L8916) | 1/2 | `src/nova/virt/libvirt/driver.py:L8915–L8916` |
| `LibvirtDriver._count_mediated_devices` | method | (self, enabled_mdev_types) | private | `counts_per_parent` (src/nova/virt/libvirt/driver.py:L8939) | 3/9 | `src/nova/virt/libvirt/driver.py:L8918–L8939` |
| `LibvirtDriver._count_mdev_capable_devices` | method | (self, enabled_mdev_types) | private | `counts_per_dev` (src/nova/virt/libvirt/driver.py:L8966) | 4/13 | `src/nova/virt/libvirt/driver.py:L8941–L8966` |
| `LibvirtDriver._get_gpu_inventories` | method | (self) | private | `{}` (src/nova/virt/libvirt/driver.py:L8987); `inventories` (src/nova/virt/libvirt/driver.py:L9037) | 7/37 | `src/nova/virt/libvirt/driver.py:L8968–L9037` |
| `LibvirtDriver._get_instance_capabilities` | method | (self) | private | `instance_caps` (src/nova/virt/libvirt/driver.py:L9064) | 4/14 | `src/nova/virt/libvirt/driver.py:L9039–L9064` |
| `LibvirtDriver._get_cpu_info` | method | (self) | private | `cpu_info` (src/nova/virt/libvirt/driver.py:L9099) | 3/22 | `src/nova/virt/libvirt/driver.py:L9066–L9099` |
| `LibvirtDriver._get_pci_passthrough_devices` | method | (self) | private | `jsonutils.dumps(pci_info)` (src/nova/virt/libvirt/driver.py:L9160) | 7/30 | `src/nova/virt/libvirt/driver.py:L9103–L9160` |
| `LibvirtDriver._get_pci_passthrough_devices._safe_list_caps` | function | (dev) | private | `dev.listCaps()` (src/nova/virt/libvirt/driver.py:L9136); `[]` (src/nova/virt/libvirt/driver.py:L9138) | — | `src/nova/virt/libvirt/driver.py:L9134–L9138` |
| `LibvirtDriver._get_mdev_capabilities_for_dev` | method | (self, devname, types=None) | private | `device` (src/nova/virt/libvirt/driver.py:L9195) | 6/23 | `src/nova/virt/libvirt/driver.py:L9162–L9195` |
| `LibvirtDriver._get_mdev_capable_devices` | method | (self, types=None) | private | `mdev_capable_devices` (src/nova/virt/libvirt/driver.py:L9212) | 4/9 | `src/nova/virt/libvirt/driver.py:L9197–L9212` |
| `LibvirtDriver._get_mediated_device_information` | method | (self, devname) | private | `device` (src/nova/virt/libvirt/driver.py:L9267) | 8/36 | `src/nova/virt/libvirt/driver.py:L9214–L9267` |
| `LibvirtDriver._get_mediated_devices` | method | (self, types=None) | private | `mediated_devices` (src/nova/virt/libvirt/driver.py:L9283) | 5/8 | `src/nova/virt/libvirt/driver.py:L9269–L9283` |
| `LibvirtDriver._get_mdev_types_from_uuids` | method | (self, mdev_uuids) | private | `{mdev['uuid']: mdev['type'] for mdev in inst_dev_infos}` (src/nova/virt/libvirt/driver.py:L9296) | 2/5 | `src/nova/virt/libvirt/driver.py:L9285–L9296` |
| `LibvirtDriver._get_all_assigned_mediated_devices` | method | (self, instance=None) | private | `allocated_mdevs` (src/nova/virt/libvirt/driver.py:L9329); `allocated_mdevs` (src/nova/virt/libvirt/driver.py:L9338) | 10/21 | `src/nova/virt/libvirt/driver.py:L9298–L9338` |
| `LibvirtDriver._vgpu_allocations` | method | (self, allocations) | private | `{}` (src/nova/virt/libvirt/driver.py:L9350); `vgpu_allocations` (src/nova/virt/libvirt/driver.py:L9359) | 7/12 | `src/nova/virt/libvirt/driver.py:L9341–L9359` |
| `LibvirtDriver._get_existing_mdevs_not_assigned` | method | (self, parent, requested_types=None) | private | `available_mdevs` (src/nova/virt/libvirt/driver.py:L9386) | 5/14 | `src/nova/virt/libvirt/driver.py:L9361–L9386` |
| `LibvirtDriver._create_mdev` | method | (self, dev_name, mdev_type, uuid=None) | private | `uuid` (src/nova/virt/libvirt/driver.py:L9412) | 3/18 | `src/nova/virt/libvirt/driver.py:L9388–L9412` |
| `LibvirtDriver._create_new_mediated_device` | method | (self, parent, uuid=None) | private | `chosen_mdev` (src/nova/virt/libvirt/driver.py:L9445) | 7/22 | `src/nova/virt/libvirt/driver.py:L9414–L9449` |
| `LibvirtDriver._allocate_mdevs` | method | (self, allocations) | private | `chosen_mdevs` (src/nova/virt/libvirt/driver.py:L9539) | 10/46 | `src/nova/virt/libvirt/driver.py:L9452–L9539` |
| `LibvirtDriver._detach_mediated_devices` | method | (self, guest) | private | not declared | 4/15 | `src/nova/virt/libvirt/driver.py:L9541–L9555` |
| `LibvirtDriver._attach_mediated_devices` | method | (self, guest, devs) | private | not declared | 4/11 | `src/nova/virt/libvirt/driver.py:L9557–L9567` |
| `LibvirtDriver._get_mdevs_from_guest_config` | method | (self, xml) | private | `devs` (src/nova/virt/libvirt/driver.py:L9587) | 3/8 | `src/nova/virt/libvirt/driver.py:L9569–L9587` |
| `LibvirtDriver._has_numa_support` | method | (self) | private | `True` (src/nova/virt/libvirt/driver.py:L9598); `True` (src/nova/virt/libvirt/driver.py:L9601); `False` (src/nova/virt/libvirt/driver.py:L9603) | 4/11 | `src/nova/virt/libvirt/driver.py:L9589–L9603` |
| `LibvirtDriver._get_host_numa_topology` | method | (self) | private | `` (src/nova/virt/libvirt/driver.py:L9607); `` (src/nova/virt/libvirt/driver.py:L9613); `objects.NUMATopology(cells=cells)` (src/nova/virt/libvirt/driver.py:L9742) | 18/63 | `src/nova/virt/libvirt/driver.py:L9605–L9742` |
| `LibvirtDriver._get_host_numa_topology._get_reserved_memory_for_cell` | function | (self, cell_id, page_size) | private | `cell.get(page_size, 0)` (src/nova/virt/libvirt/driver.py:L9635) | — | `src/nova/virt/libvirt/driver.py:L9633–L9635` |
| `LibvirtDriver._get_host_numa_topology._get_physnet_numa_affinity` | function | — | private | `affinities` (src/nova/virt/libvirt/driver.py:L9661) | — | `src/nova/virt/libvirt/driver.py:L9637–L9661` |
| `LibvirtDriver._get_host_numa_topology._get_tunnel_numa_affinity` | function | — | private | `affinities` (src/nova/virt/libvirt/driver.py:L9674) | — | `src/nova/virt/libvirt/driver.py:L9663–L9674` |
| `LibvirtDriver.get_all_volume_usage` | method | (self, context, compute_host_bdms) | public | `vol_usage` (src/nova/virt/libvirt/driver.py:L9777) | 5/26 | `src/nova/virt/libvirt/driver.py:L9744–L9777` |
| `LibvirtDriver.block_stats` | method | (self, instance, disk_id) | public | `dev.blockStats()` (src/nova/virt/libvirt/driver.py:L9784) | 3/17 | `src/nova/virt/libvirt/driver.py:L9779–L9796` |
| `LibvirtDriver.update_provider_tree` | method | (self, provider_tree, nodename, allocations=None) | public | not declared | 8/67 | `src/nova/virt/libvirt/driver.py:L9798–L9941` |
| `LibvirtDriver._update_provider_tree_for_vpmems` | method | (self, provider_tree, nodename, inventory, resources) | private | not declared | 4/21 | `src/nova/virt/libvirt/driver.py:L9943–L9966` |
| `LibvirtDriver._update_provider_tree_for_memory_encryption` | method | (self, provider_tree, nodename, allocations) | private | `` (src/nova/virt/libvirt/driver.py:L9993) | 6/23 | `src/nova/virt/libvirt/driver.py:L9968–L10013` |
| `LibvirtDriver._is_reshape_needed_memory_encryption_on_root` | method | (provider_tree, nodename) | private | `orc.MEM_ENCRYPTION_CONTEXT in root_node.inventory` (src/nova/virt/libvirt/driver.py:L10032) | 1/3 | `src/nova/virt/libvirt/driver.py:L10016–L10032` |
| `LibvirtDriver._ensure_memory_encryption_providers` | method | (self, inventories_dict, provider_tree, nodename) | private | `me_rps` (src/nova/virt/libvirt/driver.py:L10078) | 5/19 | `src/nova/virt/libvirt/driver.py:L10034–L10078` |
| `LibvirtDriver._reshape_memory_encryption_resources` | method | (self, allocations, root_node, me_rps) | private | not declared | 4/10 | `src/nova/virt/libvirt/driver.py:L10080–L10089` |
| `LibvirtDriver._reshape_memory_encryption_allocations` | method | (self, rp_uuid, root_node, consumer_uuid, alloc_data, resources, me_rps) | private | not declared | 4/24 | `src/nova/virt/libvirt/driver.py:L10091–L10135` |
| `LibvirtDriver._get_memory_encryption_inventories` | method | (self) | private | `inventories` (src/nova/virt/libvirt/driver.py:L10169) | 3/16 | `src/nova/virt/libvirt/driver.py:L10137–L10169` |
| `LibvirtDriver.static_traits` | method | (self) | public | `self._static_traits` (src/nova/virt/libvirt/driver.py:L10174); `self._static_traits` (src/nova/virt/libvirt/driver.py:L10193) | 3/18 | `src/nova/virt/libvirt/driver.py:L10172–L10193` |
| `LibvirtDriver._is_reshape_needed_vgpu_on_root` | method | (provider_tree, nodename) | private | `orc.VGPU in root_node.inventory` (src/nova/virt/libvirt/driver.py:L10211) | 1/3 | `src/nova/virt/libvirt/driver.py:L10196–L10211` |
| `LibvirtDriver._ensure_pgpu_providers` | method | (self, inventories_dict, provider_tree, nodename) | private | `pgpu_rps` (src/nova/virt/libvirt/driver.py:L10266) | 5/20 | `src/nova/virt/libvirt/driver.py:L10213–L10266` |
| `LibvirtDriver._assert_is_root_provider` | method | (rc_name, rp_uuid, root_node, consumer_uuid, alloc_data) | private | not declared | 2/14 | `src/nova/virt/libvirt/driver.py:L10269–L10301` |
| `LibvirtDriver._get_assigned_mdevs_for_reshape` | method | (self, instance_uuid, rp_uuid, alloc_data) | private | `mdevs` (src/nova/virt/libvirt/driver.py:L10337) | 2/14 | `src/nova/virt/libvirt/driver.py:L10303–L10337` |
| `LibvirtDriver._count_vgpus_per_pgpu` | method | (self, mdev_uuids) | private | `vgpu_count_per_pgpu` (src/nova/virt/libvirt/driver.py:L10354) | 2/8 | `src/nova/virt/libvirt/driver.py:L10339–L10354` |
| `LibvirtDriver._check_vgpu_allocations_match_real_use` | method | (vgpu_count_per_pgpu, expected_usage, rp_uuid, consumer_uuid, alloc_data) | private | not declared | 2/13 | `src/nova/virt/libvirt/driver.py:L10357–L10386` |
| `LibvirtDriver._reshape_vgpu_allocations` | method | (self, rp_uuid, root_node, consumer_uuid, alloc_data, resources, pgpu_rps) | private | not declared | 3/21 | `src/nova/virt/libvirt/driver.py:L10388–L10436` |
| `LibvirtDriver._reshape_gpu_resources` | method | (self, allocations, root_node, pgpu_rps) | private | not declared | 4/13 | `src/nova/virt/libvirt/driver.py:L10438–L10481` |
| `LibvirtDriver._update_provider_tree_for_vgpu` | method | (self, provider_tree, nodename, allocations=None) | private | `` (src/nova/virt/libvirt/driver.py:L10508) | 5/18 | `src/nova/virt/libvirt/driver.py:L10483–L10538` |
| `LibvirtDriver._update_provider_tree_for_pcpu` | method | (self, provider_tree, nodename, allocations=None) | private | `` (src/nova/virt/libvirt/driver.py:L10585); `` (src/nova/virt/libvirt/driver.py:L10592); `` (src/nova/virt/libvirt/driver.py:L10600); `` (src/nova/virt/libvirt/driver.py:L10607) | 19/55 | `src/nova/virt/libvirt/driver.py:L10540–L10687` |
| `LibvirtDriver.get_available_resource` | method | (self, nodename) | public | `data` (src/nova/virt/libvirt/driver.py:L10743) | 2/27 | `src/nova/virt/libvirt/driver.py:L10689–L10743` |
| `LibvirtDriver.check_instance_shared_storage_local` | method | (self, context, instance) | public | `None` (src/nova/virt/libvirt/driver.py:L10762); `None` (src/nova/virt/libvirt/driver.py:L10767); `{"filename": tmp_file}` (src/nova/virt/libvirt/driver.py:L10775) | 3/13 | `src/nova/virt/libvirt/driver.py:L10745–L10775` |
| `LibvirtDriver.check_instance_shared_storage_remote` | method | (self, context, data) | public | `os.path.exists(data['filename'])` (src/nova/virt/libvirt/driver.py:L10778) | 1/2 | `src/nova/virt/libvirt/driver.py:L10777–L10778` |
| `LibvirtDriver.check_instance_shared_storage_cleanup` | method | (self, context, data) | public | not declared | 1/2 | `src/nova/virt/libvirt/driver.py:L10780–L10781` |
| `LibvirtDriver.check_can_live_migrate_destination` | method | (self, context, instance, src_compute_info, dst_compute_info, block_migration=False, disk_over_commit=False) | public | `data` (src/nova/virt/libvirt/driver.py:L10867) | 15/51 | `src/nova/virt/libvirt/driver.py:L10783–L10867` |
| `LibvirtDriver.check_source_migrate_data_at_dest` | method | (self, ctxt, instance, migrate_data, migration, limits, allocs) | public | `migrate_data` (src/nova/virt/libvirt/driver.py:L10925) | 10/41 | `src/nova/virt/libvirt/driver.py:L10869–L10925` |
| `LibvirtDriver.post_claim_migrate_data` | method | (self, context, instance, migrate_data, claim) | public | `migrate_data` (src/nova/virt/libvirt/driver.py:L10930) | 1/4 | `src/nova/virt/libvirt/driver.py:L10927–L10930` |
| `LibvirtDriver._get_resources` | method | (self, instance, prefix=None) | private | `resources` (src/nova/virt/libvirt/driver.py:L10941) | 6/10 | `src/nova/virt/libvirt/driver.py:L10932–L10941` |
| `LibvirtDriver._get_vpmem_resources` | method | (self, resources) | private | `vpmem_resources` (src/nova/virt/libvirt/driver.py:L10949) | 4/7 | `src/nova/virt/libvirt/driver.py:L10943–L10949` |
| `LibvirtDriver._get_ordered_vpmem_resources` | method | (self, resources, flavor) | private | `ordered_vpmem_resources` (src/nova/virt/libvirt/driver.py:L10961) | 4/11 | `src/nova/virt/libvirt/driver.py:L10951–L10961` |
| `LibvirtDriver._sorted_migrating_resources` | method | (self, instance, flavor) | private | `` (src/nova/virt/libvirt/driver.py:L10971); `ordered_resources_obj` (src/nova/virt/libvirt/driver.py:L10977) | 2/10 | `src/nova/virt/libvirt/driver.py:L10963–L10977` |
| `LibvirtDriver._get_live_migrate_numa_info` | method | (self, instance_numa_topology, flavor, image_meta) | private | `info` (src/nova/virt/libvirt/driver.py:L11018) | 6/19 | `src/nova/virt/libvirt/driver.py:L10979–L11018` |
| `LibvirtDriver.cleanup_live_migration_destination_check` | method | (self, context, dest_check_data) | public | not declared | 1/4 | `src/nova/virt/libvirt/driver.py:L11020–L11027` |
| `LibvirtDriver.check_can_live_migrate_source` | method | (self, context, instance, dest_check_data, block_device_info=None) | public | `dest_check_data` (src/nova/virt/libvirt/driver.py:L11118) | 12/52 | `src/nova/virt/libvirt/driver.py:L11029–L11118` |
| `LibvirtDriver._add_vtpm_secret_to_live_migrate_data` | method | (self, instance, dest_check_data) | private | `` (src/nova/virt/libvirt/driver.py:L11124) | 4/18 | `src/nova/virt/libvirt/driver.py:L11120–L11149` |
| `LibvirtDriver._host_can_support_mdev_live_migration` | method | (self) | private | `self._host.has_min_version( lv_ver=MIN_MDEV_LIVEMIG_LIBVIRT_VERSION, hv_ver=MIN_MDEV_LIVEMIG_QEMU_VERSION, hv_type=host.HV_DRIVER_QEMU, )` (src/nova/virt/libvirt/driver.py:L11152) | 1/6 | `src/nova/virt/libvirt/driver.py:L11151–L11156` |
| `LibvirtDriver._assert_source_can_live_migrate_mdevs` | method | (self, instance, dest_check_data) | private | not declared | 5/19 | `src/nova/virt/libvirt/driver.py:L11158–L11185` |
| `LibvirtDriver._is_shared_block_storage` | method | (self, instance, dest_check_data, block_device_info=None) | private | `True` (src/nova/virt/libvirt/driver.py:L11204); `True` (src/nova/virt/libvirt/driver.py:L11210); `True` (src/nova/virt/libvirt/driver.py:L11215); `False` (src/nova/virt/libvirt/driver.py:L11217) | 8/14 | `src/nova/virt/libvirt/driver.py:L11187–L11217` |
| `LibvirtDriver._assert_dest_node_has_enough_disk` | method | (self, context, instance, available_mb, disk_over_commit, block_device_info) | private | not declared | 6/23 | `src/nova/virt/libvirt/driver.py:L11219–L11256` |
| `LibvirtDriver._compare_cpu` | method | (self, guest_cpu, host_cpu_str, instance) | private | `` (src/nova/virt/libvirt/driver.py:L11282); `` (src/nova/virt/libvirt/driver.py:L11323) | 9/47 | `src/nova/virt/libvirt/driver.py:L11258–L11331` |
| `LibvirtDriver._create_shared_storage_test_file` | method | (self, instance) | private | `os.path.basename(tmp_file)` (src/nova/virt/libvirt/driver.py:L11341) | 1/8 | `src/nova/virt/libvirt/driver.py:L11333–L11341` |
| `LibvirtDriver._check_shared_storage_test_file` | method | (self, filename, instance) | private | `exists` (src/nova/virt/libvirt/driver.py:L11364) | 2/11 | `src/nova/virt/libvirt/driver.py:L11343–L11364` |
| `LibvirtDriver._cleanup_shared_storage_test_file` | method | (self, filename) | private | not declared | 1/3 | `src/nova/virt/libvirt/driver.py:L11366–L11369` |
| `LibvirtDriver.live_migration` | method | (self, context, instance, dest, post_method, recover_method, block_migration=False, migrate_data=None) | public | not declared | 2/8 | `src/nova/virt/libvirt/driver.py:L11371–L11400` |
| `LibvirtDriver.live_migration_abort` | method | (self, instance) | public | not declared | 2/9 | `src/nova/virt/libvirt/driver.py:L11402–L11417` |
| `LibvirtDriver._verify_serial_console_is_disabled` | method | (self) | private | not declared | 2/7 | `src/nova/virt/libvirt/driver.py:L11419–L11426` |
| `LibvirtDriver._detach_direct_passthrough_vifs` | method | (self, context, migrate_data, instance) | private | not declared | 6/10 | `src/nova/virt/libvirt/driver.py:L11428–L11446` |
| `LibvirtDriver._live_migration_operation` | method | (self, context, instance, dest, block_migration, migrate_data, guest, device_names) | private | not declared | 16/66 | `src/nova/virt/libvirt/driver.py:L11448–L11626` |
| `LibvirtDriver._live_migration_copy_disk_paths` | method | (self, context, instance, guest) | private | `(disk_paths, device_names)` (src/nova/virt/libvirt/driver.py:L11667) | 8/25 | `src/nova/virt/libvirt/driver.py:L11628–L11667` |
| `LibvirtDriver._live_migration_data_gb` | method | (self, instance, disk_paths) | private | `ram_gb + disk_gb` (src/nova/virt/libvirt/driver.py:L11704) | 5/16 | `src/nova/virt/libvirt/driver.py:L11669–L11704` |
| `LibvirtDriver._get_migration_flags` | method | (self, is_block_migration) | private | `self._block_migration_flags` (src/nova/virt/libvirt/driver.py:L11708); `self._live_migration_flags` (src/nova/virt/libvirt/driver.py:L11709) | 2/4 | `src/nova/virt/libvirt/driver.py:L11706–L11709` |
| `LibvirtDriver._live_migration_monitor` | method | (self, context, instance, guest, dest, post_method, recover_method, block_migration, migrate_data, future, disk_paths) | private | not declared | 16/119 | `src/nova/virt/libvirt/driver.py:L11711–L11881` |
| `LibvirtDriver._clear_empty_migration` | method | (self, instance) | private | not declared | 2/6 | `src/nova/virt/libvirt/driver.py:L11883–L11888` |
| `LibvirtDriver._live_migration` | method | (self, context, instance, dest, post_method, recover_method, block_migration, migrate_data) | private | not declared | 6/38 | `src/nova/virt/libvirt/driver.py:L11890–L11963` |
| `LibvirtDriver._is_post_copy_enabled` | method | (self, migration_flags) | private | `(migration_flags & libvirt.VIR_MIGRATE_POSTCOPY) != 0` (src/nova/virt/libvirt/driver.py:L11966) | 1/2 | `src/nova/virt/libvirt/driver.py:L11965–L11966` |
| `LibvirtDriver.live_migration_force_complete` | method | (self, instance) | public | not declared | 2/6 | `src/nova/virt/libvirt/driver.py:L11968–L11973` |
| `LibvirtDriver._try_fetch_image` | method | (self, context, path, image_id, instance, fallback_from_host=None) | private | not declared | 3/15 | `src/nova/virt/libvirt/driver.py:L11975–L11989` |
| `LibvirtDriver._fetch_instance_kernel_ramdisk` | method | (self, context, instance, fallback_from_host=None) | private | not declared | 5/17 | `src/nova/virt/libvirt/driver.py:L11991–L12014` |
| `LibvirtDriver._reattach_instance_vifs` | method | (self, context, instance, network_info) | private | not declared | 4/11 | `src/nova/virt/libvirt/driver.py:L12016–L12036` |
| `LibvirtDriver.rollback_live_migration_at_source` | method | (self, context, instance, migrate_data) | public | not declared | 6/7 | `src/nova/virt/libvirt/driver.py:L12038–L12051` |
| `LibvirtDriver.rollback_live_migration_at_destination` | method | (self, context, instance, network_info, block_device_info, destroy_disks=True, migrate_data=None) | public | not declared | 13/37 | `src/nova/virt/libvirt/driver.py:L12053–L12097` |
| `LibvirtDriver._pre_live_migration_plug_vifs` | method | (self, instance, network_info, migrate_data) | private | not declared | 7/26 | `src/nova/virt/libvirt/driver.py:L12099–L12127` |
| `LibvirtDriver.pre_live_migration` | method | (self, context, instance, block_device_info, network_info, disk_info, migrate_data) | public | `migrate_data` (src/nova/virt/libvirt/driver.py:L12259) | 19/93 | `src/nova/virt/libvirt/driver.py:L12129–L12259` |
| `LibvirtDriver._try_fetch_image_cache` | method | (self, image, fetch_func, context, filename, image_id, instance, size, fallback_from_host=None) | private | not declared | 9/34 | `src/nova/virt/libvirt/driver.py:L12261–L12316` |
| `LibvirtDriver._try_fetch_image_cache.copy_from_host` | function | (target) | public | not declared | — | `src/nova/virt/libvirt/driver.py:L12280–L12284` |
| `LibvirtDriver._create_images_and_backing` | method | (self, context, instance, instance_dir, disk_info, fallback_from_host=None) | private | `` (src/nova/virt/libvirt/driver.py:L12339) | 10/43 | `src/nova/virt/libvirt/driver.py:L12318–L12392` |
| `LibvirtDriver.post_live_migration` | method | (self, context, instance, block_device_info, migrate_data=None) | public | not declared | 5/16 | `src/nova/virt/libvirt/driver.py:L12394–L12416` |
| `LibvirtDriver.post_live_migration_at_source` | method | (self, context, instance, network_info) | public | not declared | 1/3 | `src/nova/virt/libvirt/driver.py:L12418–L12426` |
| `LibvirtDriver._qemu_monitor_announce_self` | method | (self, instance) | private | `` (src/nova/virt/libvirt/driver.py:L12435) | 5/25 | `src/nova/virt/libvirt/driver.py:L12428–L12466` |
| `LibvirtDriver.post_live_migration_at_destination` | method | (self, context, instance, network_info, block_migration=False, block_device_info=None) | public | not declared | 2/11 | `src/nova/virt/libvirt/driver.py:L12468–L12489` |
| `LibvirtDriver._get_instance_disk_info_from_config` | method | (self, guest_config, block_device_info) | private | `disk_info` (src/nova/virt/libvirt/driver.py:L12603) | 22/84 | `src/nova/virt/libvirt/driver.py:L12491–L12603` |
| `LibvirtDriver._get_instance_disk_info` | method | (self, instance, block_device_info) | private | `self._get_instance_disk_info_from_config(config, block_device_info)` (src/nova/virt/libvirt/driver.py:L12620) | 2/16 | `src/nova/virt/libvirt/driver.py:L12605–L12621` |
| `LibvirtDriver.get_instance_disk_info` | method | (self, instance, block_device_info=None) | public | `jsonutils.dumps( self._get_instance_disk_info(instance, block_device_info))` (src/nova/virt/libvirt/driver.py:L12625) | 1/4 | `src/nova/virt/libvirt/driver.py:L12623–L12626` |
| `LibvirtDriver._get_disk_over_committed_size_total` | method | (self) | private | `disk_over_committed_size` (src/nova/virt/libvirt/driver.py:L12634); `disk_over_committed_size` (src/nova/virt/libvirt/driver.py:L12717) | 17/66 | `src/nova/virt/libvirt/driver.py:L12628–L12717` |
| `LibvirtDriver.get_available_nodes` | method | (self, refresh=False) | public | `[self._host.get_hostname()]` (src/nova/virt/libvirt/driver.py:L12720) | 1/2 | `src/nova/virt/libvirt/driver.py:L12719–L12720` |
| `LibvirtDriver.get_nodenames_by_uuid` | method | (self, refresh=False) | public | `{self._host.get_node_uuid(): self._host.get_hostname()}` (src/nova/virt/libvirt/driver.py:L12723) | 1/2 | `src/nova/virt/libvirt/driver.py:L12722–L12723` |
| `LibvirtDriver.get_host_cpu_stats` | method | (self) | public | `self._host.get_cpu_stats()` (src/nova/virt/libvirt/driver.py:L12727) | 1/2 | `src/nova/virt/libvirt/driver.py:L12725–L12727` |
| `LibvirtDriver.get_host_uptime` | method | (self) | public | `out` (src/nova/virt/libvirt/driver.py:L12732) | 1/3 | `src/nova/virt/libvirt/driver.py:L12729–L12732` |
| `LibvirtDriver.manage_image_cache` | method | (self, context, all_instances) | public | not declared | 1/2 | `src/nova/virt/libvirt/driver.py:L12734–L12736` |
| `LibvirtDriver._cleanup_remote_migration` | method | (self, dest, inst_base, inst_base_resize, shared_storage=False) | private | not declared | 4/10 | `src/nova/virt/libvirt/driver.py:L12738–L12748` |
| `LibvirtDriver.cache_image` | method | (self, context, image_id) | public | `False` (src/nova/virt/libvirt/driver.py:L12766); `True` (src/nova/virt/libvirt/driver.py:L12783) | 3/17 | `src/nova/virt/libvirt/driver.py:L12750–L12783` |
| `LibvirtDriver._get_disk_size_reserved_for_image_cache` | method | (self) | private | `0` (src/nova/virt/libvirt/driver.py:L12792); `compute_utils.convert_mb_to_ceil_gb( self.image_cache_manager.get_disk_usage() / 1024.0 / 1024.0)` (src/nova/virt/libvirt/driver.py:L12794) | 2/5 | `src/nova/virt/libvirt/driver.py:L12785–L12795` |
| `LibvirtDriver._is_path_shared_with` | method | (self, dest, path) | private | `shared_path` (src/nova/virt/libvirt/driver.py:L12817) | 4/15 | `src/nova/virt/libvirt/driver.py:L12797–L12817` |
| `LibvirtDriver.migrate_disk_and_power_off` | method | (self, context, instance, dest, flavor, network_info, block_device_info=None, timeout=0, retry_interval=0) | public | `jsonutils.dumps(disk_info)` (src/nova/virt/libvirt/driver.py:L12938) | 15/75 | `src/nova/virt/libvirt/driver.py:L12819–L12938` |
| `LibvirtDriver._wait_for_running` | method | (self, instance) | private | not declared | 2/5 | `src/nova/virt/libvirt/driver.py:L12940–L12945` |
| `LibvirtDriver._disk_raw_to_qcow2` | method | (path) | private | not declared | 1/4 | `src/nova/virt/libvirt/driver.py:L12948–L12952` |
| `LibvirtDriver._finish_migration_vtpm` | method | (self, context, instance) | private | not declared | 7/24 | `src/nova/virt/libvirt/driver.py:L12954–L12994` |
| `LibvirtDriver.finish_migration` | method | (self, context, migration, instance, disk_info, network_info, image_meta, resize_instance, allocations, block_device_info=None, power_on=True, share_info=None) | public | not declared | 6/52 | `src/nova/virt/libvirt/driver.py:L12996–L13107` |
| `LibvirtDriver._cleanup_failed_instance_base` | method | (self, inst_base) | private | not declared | 3/6 | `src/nova/virt/libvirt/driver.py:L13109–L13117` |
| `LibvirtDriver._finish_revert_migration_vtpm` | method | (self, context, instance) | private | not declared | 4/16 | `src/nova/virt/libvirt/driver.py:L13119–L13145` |
| `LibvirtDriver.finish_revert_migration` | method | (self, context, instance, network_info, migration, block_device_info=None, power_on=True, share_info=None) | public | not declared | 4/42 | `src/nova/virt/libvirt/driver.py:L13147–L13206` |
| `LibvirtDriver.confirm_migration` | method | (self, context, migration, instance, network_info) | public | not declared | 1/2 | `src/nova/virt/libvirt/driver.py:L13208–L13210` |
| `LibvirtDriver._get_io_devices` | method | (xml_doc) | private | `result` (src/nova/virt/libvirt/driver.py:L13219); `result` (src/nova/virt/libvirt/driver.py:L13228) | 7/15 | `src/nova/virt/libvirt/driver.py:L13213–L13228` |
| `LibvirtDriver.get_diagnostics` | method | (self, instance) | public | `output` (src/nova/virt/libvirt/driver.py:L13288) | 9/42 | `src/nova/virt/libvirt/driver.py:L13230–L13288` |
| `LibvirtDriver.get_instance_diagnostics` | method | (self, instance) | public | `diags` (src/nova/virt/libvirt/driver.py:L13373) | 9/57 | `src/nova/virt/libvirt/driver.py:L13290–L13373` |
| `LibvirtDriver._prepare_device_bus` | method | (dev) | private | `bus` (src/nova/virt/libvirt/driver.py:L13394) | 9/17 | `src/nova/virt/libvirt/driver.py:L13376–L13394` |
| `LibvirtDriver._build_interface_metadata` | method | (self, dev, vifs_to_expose, vlans_by_mac, trusted_by_mac) | private | `None` (src/nova/virt/libvirt/driver.py:L13412); `device` (src/nova/virt/libvirt/driver.py:L13423) | 6/18 | `src/nova/virt/libvirt/driver.py:L13396–L13423` |
| `LibvirtDriver._build_disk_metadata` | method | (self, dev, tagged_bdms) | private | `None` (src/nova/virt/libvirt/driver.py:L13436); `device` (src/nova/virt/libvirt/driver.py:L13446) | 3/12 | `src/nova/virt/libvirt/driver.py:L13425–L13446` |
| `LibvirtDriver._build_share_metadata` | method | (self, dev, shares) | private | `device` (src/nova/virt/libvirt/driver.py:L13462); `None` (src/nova/virt/libvirt/driver.py:L13465) | 4/10 | `src/nova/virt/libvirt/driver.py:L13448–L13465` |
| `LibvirtDriver._build_hostdev_metadata` | method | (self, dev, vifs_to_expose, vlans_by_mac) | private | `None` (src/nova/virt/libvirt/driver.py:L13487); `None` (src/nova/virt/libvirt/driver.py:L13492); `device` (src/nova/virt/libvirt/driver.py:L13501) | 7/22 | `src/nova/virt/libvirt/driver.py:L13467–L13501` |
| `LibvirtDriver._build_device_metadata` | method | (self, context, instance) | private | `dev_meta` (src/nova/virt/libvirt/driver.py:L13553) | 14/40 | `src/nova/virt/libvirt/driver.py:L13503–L13553` |
| `LibvirtDriver._build_device_metadata._get_device_name` | function | (bdm) | private | `block_device.strip_dev(bdm.device_name)` (src/nova/virt/libvirt/driver.py:L13508) | — | `src/nova/virt/libvirt/driver.py:L13507–L13508` |
| `LibvirtDriver.instance_on_disk` | method | (self, instance) | public | `shared_instance_path or shared_block_storage` (src/nova/virt/libvirt/driver.py:L13566) | 2/8 | `src/nova/virt/libvirt/driver.py:L13555–L13566` |
| `LibvirtDriver.inject_network_info` | method | (self, instance, nw_info) | public | not declared | 1/2 | `src/nova/virt/libvirt/driver.py:L13568–L13569` |
| `LibvirtDriver.delete_instance_files` | method | (self, instance) | public | `False` (src/nova/virt/libvirt/driver.py:L13624); `True` (src/nova/virt/libvirt/driver.py:L13627) | 11/36 | `src/nova/virt/libvirt/driver.py:L13571–L13627` |
| `LibvirtDriver.default_root_device_name` | method | (self, instance, image_meta, root_bdm) | public | `block_device.prepend_dev(root_info['dev'])` (src/nova/virt/libvirt/driver.py:L13637) | 1/9 | `src/nova/virt/libvirt/driver.py:L13629–L13637` |
| `LibvirtDriver.default_device_names_for_instance` | method | (self, instance, root_device_name, *block_device_lists) | public | not declared | 3/17 | `src/nova/virt/libvirt/driver.py:L13639–L13658` |
| `LibvirtDriver.get_device_name_for_instance` | method | (self, instance, bdms, block_device_obj) | public | `block_device.prepend_dev(disk_info['dev'])` (src/nova/virt/libvirt/driver.py:L13678) | 2/15 | `src/nova/virt/libvirt/driver.py:L13660–L13678` |
| `LibvirtDriver.is_supported_fs_format` | method | (self, fs_type) | public | `fs_type in [nova.privsep.fs.FS_FORMAT_EXT2, nova.privsep.fs.FS_FORMAT_EXT3, nova.privsep.fs.FS_FORMAT_EXT4, nova.privsep.fs.FS_FORMAT_XFS]` (src/nova/virt/libvirt/driver.py:L13681) | 1/5 | `src/nova/virt/libvirt/driver.py:L13680–L13684` |
| `LibvirtDriver._is_supported_mem_encryption_model` | method | (self, me_model) | private | `self._host.supports_amd_sev` (src/nova/virt/libvirt/driver.py:L13688); `self._host.supports_amd_sev_es` (src/nova/virt/libvirt/driver.py:L13690); `self._host.supports_amd_sev_snp` (src/nova/virt/libvirt/driver.py:L13692); `self._host.supports_intel_tdx` (src/nova/virt/libvirt/driver.py:L13694) | 5/11 | `src/nova/virt/libvirt/driver.py:L13686–L13696` |
| `LibvirtDriver._get_tpm_traits` | method | (self) | private | `{ ot.COMPUTE_SECURITY_TPM_2_0: False, ot.COMPUTE_SECURITY_TPM_1_2: False, ot.COMPUTE_SECURITY_TPM_TIS: False, ot.COMPUTE_SECURITY_TPM_CRB: False, }` (src/nova/virt/libvirt/driver.py:L13701); `tr` (src/nova/virt/libvirt/driver.py:L13738) | 6/34 | `src/nova/virt/libvirt/driver.py:L13698–L13738` |
| `LibvirtDriver._get_vif_model_traits` | method | (self) | private | `{ f'COMPUTE_NET_VIF_MODEL_{model.replace("-", "_").upper()}': model in supported_models for model in all_models }` (src/nova/virt/libvirt/driver.py:L13764) | 5/17 | `src/nova/virt/libvirt/driver.py:L13740–L13767` |
| `LibvirtDriver._get_iommu_model_traits` | method | (self) | private | `{ f'COMPUTE_VIOMMU_MODEL_{model.replace("-", "_").upper()}': model in supported_models for model in fields.VIOMMUModel.ALL }` (src/nova/virt/libvirt/driver.py:L13788) | 5/13 | `src/nova/virt/libvirt/driver.py:L13769–L13791` |
| `LibvirtDriver._get_storage_bus_traits` | method | (self) | private | `{ f'COMPUTE_STORAGE_BUS_{bus.replace("-", "_").upper()}': bus in supported_buses for bus in all_buses }` (src/nova/virt/libvirt/driver.py:L13823) | 5/20 | `src/nova/virt/libvirt/driver.py:L13793–L13826` |
| `LibvirtDriver._get_video_model_traits` | method | (self) | private | `{ f'COMPUTE_GRAPHICS_MODEL_{model.replace("-", "_").upper()}': model in supported_models for model in all_models }` (src/nova/virt/libvirt/driver.py:L13847) | 4/13 | `src/nova/virt/libvirt/driver.py:L13828–L13850` |
| `LibvirtDriver._get_packed_virtqueue_traits` | method | (self) | private | `{ot.COMPUTE_NET_VIRTIO_PACKED: True}` (src/nova/virt/libvirt/driver.py:L13858) | 1/2 | `src/nova/virt/libvirt/driver.py:L13852–L13858` |
| `LibvirtDriver._get_cpu_traits` | method | (self) | private | `traits` (src/nova/virt/libvirt/driver.py:L13871) | 1/6 | `src/nova/virt/libvirt/driver.py:L13860–L13871` |
| `LibvirtDriver._get_cpu_feature_traits` | method | (self) | private | `{}` (src/nova/virt/libvirt/driver.py:L13893); `libvirt_utils.cpu_features_to_traits(host_features)` (src/nova/virt/libvirt/driver.py:L13901); `libvirt_utils.cpu_features_to_traits(features)` (src/nova/virt/libvirt/driver.py:L13936) | 10/32 | `src/nova/virt/libvirt/driver.py:L13873–L13936` |
| `LibvirtDriver._get_cpu_feature_traits._resolve_features` | function | (cpu) | private | `feature_names` (src/nova/virt/libvirt/driver.py:L13911) | — | `src/nova/virt/libvirt/driver.py:L13903–L13911` |
| `LibvirtDriver._get_cpu_arch_traits` | method | (self) | private | `{trait: trait in ot.get_traits(prefix='HW_ARCH_')}` (src/nova/virt/libvirt/driver.py:L13944) | 1/4 | `src/nova/virt/libvirt/driver.py:L13938–L13944` |
| `LibvirtDriver._get_cpu_emulation_arch_traits` | method | (self) | private | `traits` (src/nova/virt/libvirt/driver.py:L13958) | 3/8 | `src/nova/virt/libvirt/driver.py:L13946–L13958` |
| `LibvirtDriver._get_guest_baseline_cpu_features` | method | (self, xml_str) | private | `self._host.get_connection().baselineCPU( [xml_str], libvirt.VIR_CONNECT_BASELINE_CPU_EXPAND_FEATURES)` (src/nova/virt/libvirt/driver.py:L13973); `None` (src/nova/virt/libvirt/driver.py:L13984) | 3/15 | `src/nova/virt/libvirt/driver.py:L13960–L13984` |
| `LibvirtDriver._guest_add_virtiofs_for_share` | method | (self, guest, instance, share_info) | private | not declared | 3/10 | `src/nova/virt/libvirt/driver.py:L13986–L13996` |
| `LibvirtDriver._get_sound_model_traits` | method | (self) | private | `{ 'COMPUTE_SOUND_MODEL_SB16': True, 'COMPUTE_SOUND_MODEL_ES1370': True, 'COMPUTE_SOUND_MODEL_PCSPK': True, 'COMPUTE_SOUND_MODEL_AC97': True, 'COMPUTE_SOUND_MODEL_ICH6': True, 'COMPUTE_SOUND_MODEL_ICH9` (src/nova/virt/libvirt/driver.py:L14017) | 3/17 | `src/nova/virt/libvirt/driver.py:L13998–L14026` |
| `LibvirtDriver.disk_cachemode` | property | — | public | not declared | — | `src/nova/virt/libvirt/driver.py:L674–L713` |
| `LibvirtDriver._uri` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L1554–L1562` |
| `LibvirtDriver._live_migration_uri` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L1564–L1587` |
| `LibvirtDriver._migrate_uri` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L1589–L1601` |
| `LibvirtDriver._detach_sync` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L2897–L2983` |
| `LibvirtDriver._rebase_with_qemu_img` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L3915–L3959` |
| `LibvirtDriver._get_or_create_encryption_secret` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L4834–L4869` |
| `LibvirtDriver._create_ephemeral` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L5167–L5185` |
| `LibvirtDriver._create_swap` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L5187–L5191` |
| `LibvirtDriver._refresh_nfs_swap_cache` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L5193–L5207` |
| `LibvirtDriver._get_console_log_path` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L5209–L5212` |
| `LibvirtDriver._get_disk_config_image_type` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L5246–L5251` |
| `LibvirtDriver._is_booted_from_volume` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L5253–L5262` |
| `LibvirtDriver._get_fs_label_ephemeral` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L5319–L5324` |
| `LibvirtDriver._has_direct_passthrough_port` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L5732–L5738` |
| `LibvirtDriver._get_scsi_controller` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L6319–L6328` |
| `LibvirtDriver._create_idmaps` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L6455–L6471` |
| `LibvirtDriver._guest_add_spice_channel` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L8046–L8055` |
| `LibvirtDriver._guest_add_memory_balloon` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L8057–L8069` |
| `LibvirtDriver._guest_add_watchdog_action` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L8071–L8086` |
| `LibvirtDriver._guest_add_video_device` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L8114–L8145` |
| `LibvirtDriver._get_local_gb_info` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L8697–L8718` |
| `LibvirtDriver._is_reshape_needed_memory_encryption_on_root` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L10015–L10032` |
| `LibvirtDriver.static_traits` | property | — | public | not declared | — | `src/nova/virt/libvirt/driver.py:L10171–L10193` |
| `LibvirtDriver._is_reshape_needed_vgpu_on_root` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L10195–L10211` |
| `LibvirtDriver._assert_is_root_provider` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L10268–L10301` |
| `LibvirtDriver._check_vgpu_allocations_match_real_use` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L10356–L10386` |
| `LibvirtDriver._disk_raw_to_qcow2` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L12947–L12952` |
| `LibvirtDriver._get_io_devices` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L13212–L13228` |
| `LibvirtDriver._prepare_device_bus` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/driver.py:L13375–L13394` |

## Dependencies

- `import binascii` (src/nova/virt/libvirt/driver.py:L27)
- `import collections` (src/nova/virt/libvirt/driver.py:L28)
- `collections.abc`: imports `Callable` (src/nova/virt/libvirt/driver.py:L29)
- `collections`: imports `deque` (src/nova/virt/libvirt/driver.py:L30)
- `import contextlib` (src/nova/virt/libvirt/driver.py:L31)
- `import copy` (src/nova/virt/libvirt/driver.py:L32)
- `import errno` (src/nova/virt/libvirt/driver.py:L33)
- `import functools` (src/nova/virt/libvirt/driver.py:L34)
- `import glob` (src/nova/virt/libvirt/driver.py:L35)
- `import grp` (src/nova/virt/libvirt/driver.py:L36)
- `import itertools` (src/nova/virt/libvirt/driver.py:L37)
- `import operator` (src/nova/virt/libvirt/driver.py:L38)
- `import os` (src/nova/virt/libvirt/driver.py:L39)
- `import pwd` (src/nova/virt/libvirt/driver.py:L40)
- `import random` (src/nova/virt/libvirt/driver.py:L41)
- `import shutil` (src/nova/virt/libvirt/driver.py:L42)
- `import sys` (src/nova/virt/libvirt/driver.py:L43)
- `import tempfile` (src/nova/virt/libvirt/driver.py:L44)
- `import threading` (src/nova/virt/libvirt/driver.py:L45)
- `import time` (src/nova/virt/libvirt/driver.py:L46)
- `import typing as ty` (src/nova/virt/libvirt/driver.py:L47)
- `import uuid` (src/nova/virt/libvirt/driver.py:L48)
- `castellan`: imports `key_manager` (src/nova/virt/libvirt/driver.py:L50)
- `copy`: imports `deepcopy` (src/nova/virt/libvirt/driver.py:L51)
- `lxml`: imports `etree` (src/nova/virt/libvirt/driver.py:L52)
- `os_brick`: imports `encryptors` (src/nova/virt/libvirt/driver.py:L53)
- `os_brick.encryptors`: imports `luks as luks_encryptor` (src/nova/virt/libvirt/driver.py:L54)
- `os_brick`: imports `exception as brick_exception` (src/nova/virt/libvirt/driver.py:L55)
- `os_brick.initiator`: imports `connector` (src/nova/virt/libvirt/driver.py:L56)
- `os_brick.initiator`: imports `linuxscsi` (src/nova/virt/libvirt/driver.py:L57)
- `import os_resource_classes as orc` (src/nova/virt/libvirt/driver.py:L58)
- `import os_traits as ot` (src/nova/virt/libvirt/driver.py:L59)
- `oslo_concurrency`: imports `processutils` (src/nova/virt/libvirt/driver.py:L60)
- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/driver.py:L61)
- `oslo_serialization`: imports `base64` (src/nova/virt/libvirt/driver.py:L62)
- `oslo_serialization`: imports `jsonutils` (src/nova/virt/libvirt/driver.py:L63)
- `oslo_service`: imports `loopingcall` (src/nova/virt/libvirt/driver.py:L64)
- `oslo_utils`: imports `excutils` (src/nova/virt/libvirt/driver.py:L65)
- `oslo_utils`: imports `fileutils` (src/nova/virt/libvirt/driver.py:L66)
- `oslo_utils`: imports `importutils` (src/nova/virt/libvirt/driver.py:L67)
- `oslo_utils`: imports `netutils as oslo_netutils` (src/nova/virt/libvirt/driver.py:L68)
- `oslo_utils`: imports `strutils` (src/nova/virt/libvirt/driver.py:L69)
- `oslo_utils`: imports `timeutils` (src/nova/virt/libvirt/driver.py:L70)
- `oslo_utils`: imports `units` (src/nova/virt/libvirt/driver.py:L71)
- `oslo_utils`: imports `uuidutils` (src/nova/virt/libvirt/driver.py:L72)
- `nova.api.metadata`: imports `base as instance_metadata` (src/nova/virt/libvirt/driver.py:L74)
- `nova.api.metadata`: imports `password` (src/nova/virt/libvirt/driver.py:L75)
- `nova`: imports `block_device` (src/nova/virt/libvirt/driver.py:L76)
- `nova.compute`: imports `power_state` (src/nova/virt/libvirt/driver.py:L77)
- `nova.compute`: imports `provider_tree` (src/nova/virt/libvirt/driver.py:L78)
- `nova.compute`: imports `task_states` (src/nova/virt/libvirt/driver.py:L79)
- `nova.compute`: imports `utils as compute_utils` (src/nova/virt/libvirt/driver.py:L80)
- `nova.compute`: imports `vm_states` (src/nova/virt/libvirt/driver.py:L81)
- `import nova.conf` (src/nova/virt/libvirt/driver.py:L82)
- `nova.console`: imports `serial as serial_console` (src/nova/virt/libvirt/driver.py:L83)
- `nova.console`: imports `type as ctype` (src/nova/virt/libvirt/driver.py:L84)
- `nova`: imports `context as nova_context` (src/nova/virt/libvirt/driver.py:L85)
- `nova`: imports `crypto` (src/nova/virt/libvirt/driver.py:L86)
- `nova`: imports `exception` (src/nova/virt/libvirt/driver.py:L87)
- `nova`: imports `filesystem` (src/nova/virt/libvirt/driver.py:L88)
- `nova.i18n`: imports `_` (src/nova/virt/libvirt/driver.py:L89)
- `nova.image`: imports `glance` (src/nova/virt/libvirt/driver.py:L90)
- `nova.network`: imports `model as network_model` (src/nova/virt/libvirt/driver.py:L91)
- `nova.network`: imports `neutron` (src/nova/virt/libvirt/driver.py:L92)
- `nova`: imports `objects` (src/nova/virt/libvirt/driver.py:L93)
- `nova.objects`: imports `diagnostics as diagnostics_obj` (src/nova/virt/libvirt/driver.py:L94)
- `nova.objects`: imports `fields` (src/nova/virt/libvirt/driver.py:L95)
- `nova.objects`: imports `migrate_data as migrate_data_obj` (src/nova/virt/libvirt/driver.py:L96)
- `nova.pci`: imports `utils as pci_utils` (src/nova/virt/libvirt/driver.py:L97)
- `nova.pci`: imports `whitelist` (src/nova/virt/libvirt/driver.py:L98)
- `import nova.privsep.libvirt` (src/nova/virt/libvirt/driver.py:L99)
- `import nova.privsep.path` (src/nova/virt/libvirt/driver.py:L100)
- `import nova.privsep.utils` (src/nova/virt/libvirt/driver.py:L101)
- `nova.storage`: imports `rbd_utils` (src/nova/virt/libvirt/driver.py:L102)
- `nova`: imports `thread_pool_factory` (src/nova/virt/libvirt/driver.py:L103)
- `nova`: imports `utils` (src/nova/virt/libvirt/driver.py:L104)
- `nova`: imports `version` (src/nova/virt/libvirt/driver.py:L105)
- `nova.virt`: imports `block_device as driver_block_device` (src/nova/virt/libvirt/driver.py:L106)
- `nova.virt`: imports `configdrive` (src/nova/virt/libvirt/driver.py:L107)
- `nova.virt.disk`: imports `api as disk_api` (src/nova/virt/libvirt/driver.py:L108)
- `nova.virt.disk.vfs`: imports `guestfs` (src/nova/virt/libvirt/driver.py:L109)
- `nova.virt`: imports `driver` (src/nova/virt/libvirt/driver.py:L110)
- `nova.virt`: imports `event as virtevent` (src/nova/virt/libvirt/driver.py:L111)
- `nova.virt`: imports `hardware` (src/nova/virt/libvirt/driver.py:L112)
- `nova.virt.image`: imports `model as imgmodel` (src/nova/virt/libvirt/driver.py:L113)
- `nova.virt`: imports `images` (src/nova/virt/libvirt/driver.py:L114)
- `nova.virt.libvirt`: imports `blockinfo` (src/nova/virt/libvirt/driver.py:L115)
- `nova.virt.libvirt`: imports `config as vconfig` (src/nova/virt/libvirt/driver.py:L116)
- `nova.virt.libvirt.cpu`: imports `api as libvirt_cpu` (src/nova/virt/libvirt/driver.py:L117)
- `nova.virt.libvirt`: imports `designer` (src/nova/virt/libvirt/driver.py:L118)
- `nova.virt.libvirt`: imports `event as libvirtevent` (src/nova/virt/libvirt/driver.py:L119)
- `nova.virt.libvirt`: imports `guest as libvirt_guest` (src/nova/virt/libvirt/driver.py:L120)
- `nova.virt.libvirt`: imports `host` (src/nova/virt/libvirt/driver.py:L121)
- `nova.virt.libvirt`: imports `imagebackend` (src/nova/virt/libvirt/driver.py:L122)
- `nova.virt.libvirt`: imports `imagecache` (src/nova/virt/libvirt/driver.py:L123)
- `nova.virt.libvirt`: imports `instancejobtracker` (src/nova/virt/libvirt/driver.py:L124)
- `nova.virt.libvirt`: imports `migration as libvirt_migrate` (src/nova/virt/libvirt/driver.py:L125)
- `nova.virt.libvirt.storage`: imports `dmcrypt` (src/nova/virt/libvirt/driver.py:L126)
- `nova.virt.libvirt.storage`: imports `lvm` (src/nova/virt/libvirt/driver.py:L127)
- `nova.virt.libvirt`: imports `utils as libvirt_utils` (src/nova/virt/libvirt/driver.py:L128)
- `nova.virt.libvirt`: imports `vif as libvirt_vif` (src/nova/virt/libvirt/driver.py:L129)
- `nova.virt.libvirt.volume`: imports `cephfs` (src/nova/virt/libvirt/driver.py:L130)
- `nova.virt.libvirt.volume`: imports `fs` (src/nova/virt/libvirt/driver.py:L131)
- `nova.virt.libvirt.volume`: imports `mount` (src/nova/virt/libvirt/driver.py:L132)
- `nova.virt.libvirt.volume`: imports `nfs` (src/nova/virt/libvirt/driver.py:L133)
- `nova.virt.libvirt.volume`: imports `remotefs` (src/nova/virt/libvirt/driver.py:L134)
- `nova.virt.libvirt.volume`: imports `volume` (src/nova/virt/libvirt/driver.py:L135)
- `nova.virt`: imports `netutils` (src/nova/virt/libvirt/driver.py:L136)
- `nova.volume`: imports `cinder` (src/nova/virt/libvirt/driver.py:L137)
- `nova`: imports `vtpm` (src/nova/virt/libvirt/driver.py:L138)
- `import libvirt` (src/nova/virt/libvirt/driver.py:L143)

## Side Effects

- **process-spawn**: import nova.privsep.libvirt (src/nova/virt/libvirt/driver.py:L99)
- **process-spawn**: import nova.privsep.path (src/nova/virt/libvirt/driver.py:L100)
- **process-spawn**: import nova.privsep.utils (src/nova/virt/libvirt/driver.py:L101)
- **process-spawn**: output = nova.privsep.libvirt.get_pmem_namespaces() (src/nova/virt/libvirt/driver.py:L650)
- **process-spawn**: if not nova.privsep.utils.supports_direct_io(CONF.instances_path): (src/nova/virt/libvirt/driver.py:L711)
- **network**: 'For more information, see: https://docs.openstack.org/' (src/nova/virt/libvirt/driver.py:L770)
- **file-io**: container_dir = os.path.join(inst_path, 'rootfs') (src/nova/virt/libvirt/driver.py:L1649)
- **process-spawn**: nova.privsep.libvirt.cleanup_vpmem(vpmem.devpath) (src/nova/virt/libvirt/driver.py:L2014)
- **file-io**: vg = os.path.join('/dev', CONF.libvirt.images_volume_group) (src/nova/virt/libvirt/driver.py:L2078)
- **file-io**: if not os.path.exists(vg): (src/nova/virt/libvirt/driver.py:L2079)
- **file-io**: return os.path.join(vg, name) (src/nova/virt/libvirt/driver.py:L2087)
- **file-io**: while os.path.exists(target) and attempts < 5: (src/nova/virt/libvirt/driver.py:L2143)
- **file-io**: shutil.rmtree(target, ignore_errors=True) (src/nova/virt/libvirt/driver.py:L2144)
- **file-io**: if os.path.exists(target): (src/nova/virt/libvirt/driver.py:L2145)
- **file-io**: fileutils.ensure_tree(snapshot_directory) (src/nova/virt/libvirt/driver.py:L3405)
- **file-io**: out_path = os.path.join(tmpdir, snapshot_name) (src/nova/virt/libvirt/driver.py:L3408)
- **process-spawn**: nova.privsep.path.chown(disk_delta, uid=os.getuid()) (src/nova/virt/libvirt/driver.py:L3683)
- **file-io**: fileutils.delete_if_exists(disk_delta) (src/nova/virt/libvirt/driver.py:L3695)
- **file-io**: new_file_path = os.path.join(os.path.dirname(current_file), (src/nova/virt/libvirt/driver.py:L3765)
- **file-io**: if os.path.isabs(backing_file): (src/nova/virt/libvirt/driver.py:L3942)
- **file-io**: backing_file_name = os.path.basename(rebase_base) (src/nova/virt/libvirt/driver.py:L3948)
- **file-io**: volume_path = os.path.dirname(source_path) (src/nova/virt/libvirt/driver.py:L3949)
- **file-io**: backing_file_abs = os.path.join(volume_path, backing_file_name) (src/nova/virt/libvirt/driver.py:L3950)
- **file-io**: fileutils.ensure_tree(instance_dir) (src/nova/virt/libvirt/driver.py:L4275)
- **file-io**: unrescue_xml_path = os.path.join(instance_dir, 'unrescue.xml') (src/nova/virt/libvirt/driver.py:L4708)
- **file-io**: with open(unrescue_xml_path, 'w') as f: (src/nova/virt/libvirt/driver.py:L4709)
- **file-io**: unrescue_xml_path = os.path.join(instance_dir, 'unrescue.xml') (src/nova/virt/libvirt/driver.py:L4810)
- **file-io**: rescue_files = os.path.join(instance_dir, "*.rescue") (src/nova/virt/libvirt/driver.py:L4817)
- **file-io**: if os.path.isdir(rescue_file): (src/nova/virt/libvirt/driver.py:L4819)
- **file-io**: shutil.rmtree(rescue_file) (src/nova/virt/libvirt/driver.py:L4820)
- **file-io**: while bytes_to_read > 0 and os.path.exists(path): (src/nova/virt/libvirt/driver.py:L5045)
- **process-spawn**: read_log_data, remaining = nova.privsep.path.last_bytes( (src/nova/virt/libvirt/driver.py:L5046)
- **file-io**: if not os.path.exists(console_path): (src/nova/virt/libvirt/driver.py:L5087)
- **process-spawn**: data = nova.privsep.libvirt.readpty(console_path) (src/nova/virt/libvirt/driver.py:L5095)
- **process-spawn**: nova.privsep.path.writefile(console_log, 'a+', data) (src/nova/virt/libvirt/driver.py:L5103)
- **process-spawn**: nova.privsep.fs.unprivileged_mkfs('swap', target) (src/nova/virt/libvirt/driver.py:L5191)
- **file-io**: updated for subsequent os.path.exists() calls. (src/nova/virt/libvirt/driver.py:L5200)
- **file-io**: fd = os.open(swap_path, os.O_CREAT | os.O_EXCL | os.O_WRONLY) (src/nova/virt/libvirt/driver.py:L5203)
- **file-io**: return os.path.join(libvirt_utils.get_instance_path(instance), (src/nova/virt/libvirt/driver.py:L5211)
- **file-io**: if os.path.exists(instance_dir): (src/nova/virt/libvirt/driver.py:L5351)
- **file-io**: fileutils.ensure_tree(libvirt_utils.get_instance_path(instance)) (src/nova/virt/libvirt/driver.py:L5357)
- **process-spawn**: os_type_with_default = nova.privsep.fs.get_fs_type_for_os_type( (src/nova/virt/libvirt/driver.py:L5424)
- **process-spawn**: file_extension = nova.privsep.fs.get_file_extension_for_os_type( (src/nova/virt/libvirt/driver.py:L5428)
- **file-io**: base_backing_fname = os.path.join(base_dir, root_fname) (src/nova/virt/libvirt/driver.py:L5606)
- **file-io**: config_disk_local_path = os.path.join( (src/nova/virt/libvirt/driver.py:L5665)
- **file-io**: fs.source_dir = os.path.join( (src/nova/virt/libvirt/driver.py:L6227)
- **file-io**: if not os.path.exists("/etc/machine-id"): (src/nova/virt/libvirt/driver.py:L6349)
- **file-io**: with open("/etc/machine-id") as f: (src/nova/virt/libvirt/driver.py:L6353)
- **file-io**: if os.path.exists("/etc/machine-id"): (src/nova/virt/libvirt/driver.py:L6364)
- **file-io**: guest.os_kernel = os.path.join(inst_path, "kernel.rescue") (src/nova/virt/libvirt/driver.py:L6801)
- **file-io**: guest.os_initrd = os.path.join(inst_path, "ramdisk.rescue") (src/nova/virt/libvirt/driver.py:L6806)
- **file-io**: guest.os_kernel = os.path.join(inst_path, "kernel") (src/nova/virt/libvirt/driver.py:L6811)
- **file-io**: guest.os_initrd = os.path.join(inst_path, "ramdisk") (src/nova/virt/libvirt/driver.py:L6816)
- **file-io**: if (rng_path and not os.path.exists(rng_path)): (src/nova/virt/libvirt/driver.py:L7057)
- **file-io**: elif loader and not os.path.exists(loader): (src/nova/virt/libvirt/driver.py:L7288)
- **file-io**: elif nvram_template and not os.path.exists(nvram_template): (src/nova/virt/libvirt/driver.py:L7293)
- **file-io**: container_dir = os.path.join(inst_path, 'rootfs') (src/nova/virt/libvirt/driver.py:L8408)
- **file-io**: fileutils.ensure_tree(container_dir) (src/nova/virt/libvirt/driver.py:L8409)
- **file-io**: container_dir = os.path.join(inst_path, 'rootfs') (src/nova/virt/libvirt/driver.py:L8426)
- **file-io**: if not os.path.exists( (src/nova/virt/libvirt/driver.py:L8795)
- **file-io**: if not os.path.exists(dirpath): (src/nova/virt/libvirt/driver.py:L10766)
- **file-io**: fd, tmp_file = tempfile.mkstemp(dir=dirpath) (src/nova/virt/libvirt/driver.py:L10769)
- **file-io**: return os.path.exists(data['filename']) (src/nova/virt/libvirt/driver.py:L10778)
- **file-io**: fileutils.delete_if_exists(data["filename"]) (src/nova/virt/libvirt/driver.py:L10781)
- **file-io**: fd, tmp_file = tempfile.mkstemp(dir=dirpath) (src/nova/virt/libvirt/driver.py:L11336)
- **network**: LOG.debug("Creating tmpfile %s to notify to other " (src/nova/virt/libvirt/driver.py:L11337)
- **file-io**: return os.path.basename(tmp_file) (src/nova/virt/libvirt/driver.py:L11341)
- **file-io**: tmp_file = os.path.join(CONF.instances_path, filename) (src/nova/virt/libvirt/driver.py:L11356)
- **file-io**: if not os.path.exists(tmp_file): (src/nova/virt/libvirt/driver.py:L11357)
- **file-io**: tmp_file = os.path.join(CONF.instances_path, filename) (src/nova/virt/libvirt/driver.py:L11368)
- **file-io**: kernel_path = os.path.join(instance_dir, 'kernel') (src/nova/virt/libvirt/driver.py:L11996)
- **file-io**: if not os.path.exists(kernel_path): (src/nova/virt/libvirt/driver.py:L12000)
- **file-io**: ramdisk_path = os.path.join(instance_dir, 'ramdisk') (src/nova/virt/libvirt/driver.py:L12006)
- **file-io**: if not os.path.exists(ramdisk_path): (src/nova/virt/libvirt/driver.py:L12010)
- **file-io**: if os.path.exists(instance_dir): (src/nova/virt/libvirt/driver.py:L12090)
- **file-io**: shutil.rmtree(instance_dir) (src/nova/virt/libvirt/driver.py:L12091)
- **file-io**: if os.path.exists(instance_dir): (src/nova/virt/libvirt/driver.py:L12145)
- **file-io**: image_file = os.path.basename(info['path']) (src/nova/virt/libvirt/driver.py:L12158)
- **file-io**: image_path = os.path.join(instance_dir, image_file) (src/nova/virt/libvirt/driver.py:L12159)
- **file-io**: image_disk_info_path = os.path.join(instance_dir, (src/nova/virt/libvirt/driver.py:L12165)
- **file-io**: with open(image_disk_info_path, 'w') as f: (src/nova/virt/libvirt/driver.py:L12167)
- **file-io**: base = os.path.basename(info['path']) (src/nova/virt/libvirt/driver.py:L12345)
- **file-io**: instance_disk = os.path.join(instance_dir, base) (src/nova/virt/libvirt/driver.py:L12348)
- **file-io**: if not info['backing_file'] and not os.path.exists(instance_disk): (src/nova/virt/libvirt/driver.py:L12349)
- **file-io**: cache_name = os.path.basename(info['backing_file']) (src/nova/virt/libvirt/driver.py:L12354)
- **file-io**: fp = os.path.join(dirpath, f) (src/nova/virt/libvirt/driver.py:L12565)
- **file-io**: dk_size += os.path.getsize(fp) (src/nova/virt/libvirt/driver.py:L12566)
- **file-io**: virt_size = os.path.getsize(path) (src/nova/virt/libvirt/driver.py:L12581)
- **file-io**: if os.path.exists(inst_base_resize): (src/nova/virt/libvirt/driver.py:L12742)
- **file-io**: shutil.rmtree(inst_base, ignore_errors=True) (src/nova/virt/libvirt/driver.py:L12743)
- **file-io**: cache_dir = os.path.join(CONF.instances_path, (src/nova/virt/libvirt/driver.py:L12751)
- **file-io**: path = os.path.join(cache_dir, (src/nova/virt/libvirt/driver.py:L12753)
- **file-io**: if os.path.exists(path): (src/nova/virt/libvirt/driver.py:L12755)
- **process-spawn**: nova.privsep.path.utime(path) (src/nova/virt/libvirt/driver.py:L12765)
- **file-io**: if not os.path.isdir(cache_dir): (src/nova/virt/libvirt/driver.py:L12770)
- **file-io**: fileutils.ensure_tree(cache_dir) (src/nova/virt/libvirt/driver.py:L12771)
- **file-io**: tmp_path = os.path.join(path, tmp_file) (src/nova/virt/libvirt/driver.py:L12806)
- **file-io**: if os.path.exists(tmp_path): (src/nova/virt/libvirt/driver.py:L12810)
- **file-io**: fileutils.ensure_tree(inst_base) (src/nova/virt/libvirt/driver.py:L12890)
- **file-io**: fname = os.path.basename(img_path) (src/nova/virt/libvirt/driver.py:L12900)
- **file-io**: from_path = os.path.join(inst_base_resize, fname) (src/nova/virt/libvirt/driver.py:L12901)
- **file-io**: src_disk_info_path = os.path.join(inst_base_resize, 'disk.info') (src/nova/virt/libvirt/driver.py:L12919)
- **file-io**: if os.path.exists(src_disk_info_path): (src/nova/virt/libvirt/driver.py:L12920)
- **file-io**: dst_disk_info_path = os.path.join(inst_base, 'disk.info') (src/nova/virt/libvirt/driver.py:L12921)
- **file-io**: swtpm_dir = os.path.join(inst_base, 'swtpm', instance.uuid) (src/nova/virt/libvirt/driver.py:L12973)
- **file-io**: if os.path.exists(swtpm_dir): (src/nova/virt/libvirt/driver.py:L12980)
- **file-io**: shutil.rmtree(swtpm_dir) (src/nova/virt/libvirt/driver.py:L12985)
- **file-io**: if copy_swtpm_dir and os.path.exists(swtpm_dir): (src/nova/virt/libvirt/driver.py:L12989)
- **file-io**: disk_name = os.path.basename(path) (src/nova/virt/libvirt/driver.py:L13037)
- **file-io**: shutil.rmtree(inst_base) (src/nova/virt/libvirt/driver.py:L13114)
- **file-io**: swtpm_dir = os.path.join(inst_base, 'swtpm', instance.uuid) (src/nova/virt/libvirt/driver.py:L13138)
- **file-io**: if os.path.exists(swtpm_dir): (src/nova/virt/libvirt/driver.py:L13139)
- **file-io**: if os.path.exists(inst_base_resize): (src/nova/virt/libvirt/driver.py:L13167)
- **file-io**: if os.path.exists(p): (src/nova/virt/libvirt/driver.py:L13599)
- **file-io**: if not remaining_path and os.path.exists(target_del): (src/nova/virt/libvirt/driver.py:L13607)
- **file-io**: shutil.rmtree(target_del) (src/nova/virt/libvirt/driver.py:L13614)
- **file-io**: if remaining_path and os.path.exists(remaining_path): (src/nova/virt/libvirt/driver.py:L13621)
- **process-spawn**: return fs_type in [nova.privsep.fs.FS_FORMAT_EXT2, (src/nova/virt/libvirt/driver.py:L13681)
- **process-spawn**: nova.privsep.fs.FS_FORMAT_EXT3, (src/nova/virt/libvirt/driver.py:L13682)
- **process-spawn**: nova.privsep.fs.FS_FORMAT_EXT4, (src/nova/virt/libvirt/driver.py:L13683)
- **process-spawn**: nova.privsep.fs.FS_FORMAT_XFS] (src/nova/virt/libvirt/driver.py:L13684)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/driver.py:L147)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/libvirt/driver.py:L148)
- **global-mutation**: MAX_CONSOLE_BYTES = 100 * units.Ki (src/nova/virt/libvirt/driver.py:L150)
- **global-mutation**: VALID_DISK_CACHEMODES = [ (src/nova/virt/libvirt/driver.py:L151)
- **global-mutation**: DISABLE_PREFIX = 'AUTO: ' (src/nova/virt/libvirt/driver.py:L156)
- **global-mutation**: DISABLE_REASON_UNDEFINED = None (src/nova/virt/libvirt/driver.py:L158)
- **global-mutation**: CONSOLE = "console=tty0 console=ttyS0 console=hvc0" (src/nova/virt/libvirt/driver.py:L161)
- **global-mutation**: VOLUME_DRIVERS = { (src/nova/virt/libvirt/driver.py:L181)
- **global-mutation**: MIN_LIBVIRT_VERSION = (8, 0, 0) (src/nova/virt/libvirt/driver.py:L206)
- **global-mutation**: MIN_QEMU_VERSION = (6, 2, 0) (src/nova/virt/libvirt/driver.py:L207)
- **global-mutation**: NEXT_MIN_LIBVIRT_VERSION = (10, 0, 0) (src/nova/virt/libvirt/driver.py:L208)
- **global-mutation**: NEXT_MIN_QEMU_VERSION = (8, 2, 2) (src/nova/virt/libvirt/driver.py:L209)
- **global-mutation**: MIN_LIBVIRT_VIOMMU_VIRTIO_MODEL = (8, 3, 0) (src/nova/virt/libvirt/driver.py:L212)
- **global-mutation**: MIN_VIRTUOZZO_VERSION = (7, 0, 0) (src/nova/virt/libvirt/driver.py:L215)
- **global-mutation**: NO_COMPRESSION_TYPES = ('qcow2',) (src/nova/virt/libvirt/driver.py:L218)
- **global-mutation**: QEMU_MAX_SERIAL_PORTS = 4 (src/nova/virt/libvirt/driver.py:L221)
- **global-mutation**: ALLOWED_QEMU_SERIAL_PORTS = QEMU_MAX_SERIAL_PORTS - 1 (src/nova/virt/libvirt/driver.py:L223)
- **global-mutation**: VGPU_RESOURCE_SEMAPHORE = 'vgpu_resources' (src/nova/virt/libvirt/driver.py:L225)
- **global-mutation**: MIN_MDEV_LIVEMIG_LIBVIRT_VERSION = (8, 6, 0) (src/nova/virt/libvirt/driver.py:L228)
- **global-mutation**: MIN_MDEV_LIVEMIG_QEMU_VERSION = (8, 1, 0) (src/nova/virt/libvirt/driver.py:L229)
- **global-mutation**: LIBVIRT_PERF_EVENT_PREFIX = 'VIR_PERF_PARAM_' (src/nova/virt/libvirt/driver.py:L231)
- **global-mutation**: MIN_LIBVIRT_MAXPHYSADDR = (8, 7, 0) (src/nova/virt/libvirt/driver.py:L234)
- **global-mutation**: MIN_LIBVIRT_STATELESS_FIRMWARE = (8, 6, 0) (src/nova/virt/libvirt/driver.py:L237)
- **global-mutation**: MIN_IGB_LIBVIRT_VERSION = (9, 3, 0) (src/nova/virt/libvirt/driver.py:L240)
- **global-mutation**: MIN_IGB_QEMU_VERSION = (8, 0, 0) (src/nova/virt/libvirt/driver.py:L241)
- **global-mutation**: MIN_VFIO_PCI_VARIANT_LIBVIRT_VERSION = (10, 0, 0) (src/nova/virt/libvirt/driver.py:L244)
- **global-mutation**: MIN_VFIO_PCI_VARIANT_QEMU_VERSION = (8, 2, 2) (src/nova/virt/libvirt/driver.py:L245)
- **global-mutation**: MIN_VIRTIO_SOUND_LIBVIRT_VERSION = (10, 4, 0) (src/nova/virt/libvirt/driver.py:L248)
- **global-mutation**: MIN_VIRTIO_SOUND_QEMU_VERSION = (8, 2, 0) (src/nova/virt/libvirt/driver.py:L249)
- **global-mutation**: MIN_MULTIFD_WITH_POSTCOPY_QEMU_VERSION = (10, 1, 0) (src/nova/virt/libvirt/driver.py:L252)
- **global-mutation**: MIN_VERSION_INT_FOR_KEEP_TPM = (8, 9, 0) (src/nova/virt/libvirt/driver.py:L255)
- **global-mutation**: REGISTER_IMAGE_PROPERTY_DEFAULTS = [ (src/nova/virt/libvirt/driver.py:L257)
- **global-mutation**: SHUTDOWN_STATES = [power_state.SHUTDOWN, (src/nova/virt/libvirt/driver.py:L4419)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.libvirt (src/nova/virt/libvirt/driver.py:L99)
- **privilege** (`privsep-entrypoint`): import nova.privsep.path (src/nova/virt/libvirt/driver.py:L100)
- **privilege** (`privsep-entrypoint`): import nova.privsep.utils (src/nova/virt/libvirt/driver.py:L101)
- **privilege** (`privsep-entrypoint`): output = nova.privsep.libvirt.get_pmem_namespaces() (src/nova/virt/libvirt/driver.py:L650)
- **privilege** (`privsep-entrypoint`): if not nova.privsep.utils.supports_direct_io(CONF.instances_path): (src/nova/virt/libvirt/driver.py:L711)
- **sink** (`db-write`): """Update driver capabilities based on capabilities of the host.""" (src/nova/virt/libvirt/driver.py:L954)
- **sink** (`db-write`): self.capabilities.update({ (src/nova/virt/libvirt/driver.py:L957)
- **sink** (`db-write`): self.capabilities.update({ (src/nova/virt/libvirt/driver.py:L970)
- **sink** (`db-write`): self.capabilities.update({ (src/nova/virt/libvirt/driver.py:L978)
- **sink** (`db-write`): "'vcpu_pin_set'; you should update these " (src/nova/virt/libvirt/driver.py:L1064)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.cleanup_vpmem(vpmem.devpath) (src/nova/virt/libvirt/driver.py:L2014)
- **sink** (`db-write`): `from_persistent_config` to select which domain config to query (src/nova/virt/libvirt/driver.py:L2685)
- **sink** (`db-write`): self._image_api.update(context, image_id, metadata, (src/nova/virt/libvirt/driver.py:L3378)
- **sink** (`db-write`): self._image_api.update(context, (src/nova/virt/libvirt/driver.py:L3444)
- **sink** (`db-write`): instance.system_metadata.update( (src/nova/virt/libvirt/driver.py:L3538)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.chown(disk_delta, uid=os.getuid()) (src/nova/virt/libvirt/driver.py:L3683)
- **sink** (`db-write`): """Send a snapshot status update to Cinder. (src/nova/virt/libvirt/driver.py:L3698)
- **sink** (`db-write`): a failure occurs sending the update. (src/nova/virt/libvirt/driver.py:L3704)
- **sink** (`file-write`): with open(unrescue_xml_path, 'w') as f: (src/nova/virt/libvirt/driver.py:L4709)
- **sink** (`file-write`): f.write(unrescue_xml) (src/nova/virt/libvirt/driver.py:L4710)
- **privilege** (`privsep-entrypoint`): read_log_data, remaining = nova.privsep.path.last_bytes( (src/nova/virt/libvirt/driver.py:L5046)
- **privilege** (`privsep-entrypoint`): data = nova.privsep.libvirt.readpty(console_path) (src/nova/virt/libvirt/driver.py:L5095)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.writefile(console_log, 'a+', data) (src/nova/virt/libvirt/driver.py:L5103)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.unprivileged_mkfs('swap', target) (src/nova/virt/libvirt/driver.py:L5191)
- **privilege** (`privsep-entrypoint`): os_type_with_default = nova.privsep.fs.get_fs_type_for_os_type( (src/nova/virt/libvirt/driver.py:L5424)
- **privilege** (`privsep-entrypoint`): file_extension = nova.privsep.fs.get_file_extension_for_os_type( (src/nova/virt/libvirt/driver.py:L5428)
- **sink** (`db-write`): LOG.warning('Cannot update service status on host "%s" ' (src/nova/virt/libvirt/driver.py:L5896)
- **sink** (`db-write`): LOG.warning('Cannot update service status on host "%s" ' (src/nova/virt/libvirt/driver.py:L5899)
- **sink** (`db-write`): guest_cpu_tune.emulatorpin.cpuset.update(emu_pin_cpuset) (src/nova/virt/libvirt/driver.py:L6750)
- **sink** (`db-write`): """Update VirtCPUModel object according to libvirt CPU config. (src/nova/virt/libvirt/driver.py:L7565)
- **sink** (`db-write`): LOG.debug("Skipping to update %s as the available count of " (src/nova/virt/libvirt/driver.py:L9011)
- **sink** (`db-write`): inventories[dev_name].update({ (src/nova/virt/libvirt/driver.py:L9026)
- **sink** (`db-write`): device["types"].update({cap['type']: { (src/nova/virt/libvirt/driver.py:L9190)
- **sink** (`db-write`): """Update a ProviderTree object with current resource provider, (src/nova/virt/libvirt/driver.py:L9799)
- **sink** (`db-write`): """Update resources and inventory for vpmems in provider tree.""" (src/nova/virt/libvirt/driver.py:L9945)
- **sink** (`db-write`): :param provider_tree: The ProviderTree to update. (src/nova/virt/libvirt/driver.py:L9978)
- **sink** (`db-write`): :param provider_tree: The ProviderTree to update. (src/nova/virt/libvirt/driver.py:L10056)
- **sink** (`db-write`): """Update existing MEM_ENCRYPTION_CONTEXT allocations by moving them (src/nova/virt/libvirt/driver.py:L10094)
- **sink** (`db-write`): traits.update(self._get_cpu_traits()) (src/nova/virt/libvirt/driver.py:L10177)
- **sink** (`db-write`): traits.update(self._get_packed_virtqueue_traits()) (src/nova/virt/libvirt/driver.py:L10178)
- **sink** (`db-write`): traits.update(self._get_storage_bus_traits()) (src/nova/virt/libvirt/driver.py:L10179)
- **sink** (`db-write`): traits.update(self._get_video_model_traits()) (src/nova/virt/libvirt/driver.py:L10180)
- **sink** (`db-write`): traits.update(self._get_vif_model_traits()) (src/nova/virt/libvirt/driver.py:L10181)
- **sink** (`db-write`): traits.update(self._get_iommu_model_traits()) (src/nova/virt/libvirt/driver.py:L10182)
- **sink** (`db-write`): traits.update(self._get_tpm_traits()) (src/nova/virt/libvirt/driver.py:L10183)
- **sink** (`db-write`): traits.update(self._get_sound_model_traits()) (src/nova/virt/libvirt/driver.py:L10184)
- **sink** (`db-write`): :param provider_tree: The ProviderTree to update. (src/nova/virt/libvirt/driver.py:L10231)
- **sink** (`db-write`): """Update existing VGPU allocations by moving them from the root node (src/nova/virt/libvirt/driver.py:L10391)
- **sink** (`db-write`): :param provider_tree: The ProviderTree to update. (src/nova/virt/libvirt/driver.py:L10493)
- **sink** (`db-write`): :param provider_tree: The ProviderTree to update. (src/nova/virt/libvirt/driver.py:L10549)
- **sink** (`db-write`): update resources info (e.g. vpmems) in the new xml which is used for (src/nova/virt/libvirt/driver.py:L10966)
- **sink** (`db-write`): :returns: A LibvirtLiveMigrateNUMAInfo object indicating how to update (src/nova/virt/libvirt/driver.py:L10990)
- **sink** (`file-write`): with open(image_disk_info_path, 'w') as f: (src/nova/virt/libvirt/driver.py:L12167)
- **sink** (`file-write`): f.write(jsonutils.dumps(image_disk_info)) (src/nova/virt/libvirt/driver.py:L12168)
- **sink** (`db-write`): update network switches. This is best effort. (src/nova/virt/libvirt/driver.py:L12432)
- **sink** (`db-write`): self.image_cache_manager.update(context, all_instances) (src/nova/virt/libvirt/driver.py:L12736)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.utime(path) (src/nova/virt/libvirt/driver.py:L12765)
- **privilege** (`privsep-entrypoint`): return fs_type in [nova.privsep.fs.FS_FORMAT_EXT2, (src/nova/virt/libvirt/driver.py:L13681)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.FS_FORMAT_EXT3, (src/nova/virt/libvirt/driver.py:L13682)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.FS_FORMAT_EXT4, (src/nova/virt/libvirt/driver.py:L13683)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.FS_FORMAT_XFS] (src/nova/virt/libvirt/driver.py:L13684)
- **sink** (`db-write`): tr.update({ (src/nova/virt/libvirt/driver.py:L13718)
- **sink** (`db-write`): tr.update({ (src/nova/virt/libvirt/driver.py:L13723)
- **sink** (`db-write`): tr.update({ (src/nova/virt/libvirt/driver.py:L13729)
- **sink** (`db-write`): tr.update({ (src/nova/virt/libvirt/driver.py:L13732)
- **sink** (`db-write`): tr.update({ (src/nova/virt/libvirt/driver.py:L13735)
- **sink** (`db-write`): supported_buses.update( (src/nova/virt/libvirt/driver.py:L13814)
- **sink** (`db-write`): supported_models.update( (src/nova/virt/libvirt/driver.py:L13842)
- **sink** (`db-write`): traits.update(self._get_cpu_arch_traits()) (src/nova/virt/libvirt/driver.py:L13868)
- **sink** (`db-write`): traits.update(self._get_cpu_emulation_arch_traits()) (src/nova/virt/libvirt/driver.py:L13869)

