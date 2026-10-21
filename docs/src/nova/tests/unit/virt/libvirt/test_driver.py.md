# src/nova/tests/unit/virt/libvirt/test_driver.py

## Overview

This file implements the `test_driver` module, defining 49 classs, 5 constants, 11 fields, 124 functions, 1410 methods, 1 property, 12 variables, 103 imports, 188 side effects, 77 security surface entries.

Lines: total 33880, code 28374, comment 1443, blank 4063

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L121–L121` |
| `_real_sleep` | variable | — | unexported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L123–L123` |
| `sleep_zero` | function | (*args, **kwargs) | exported | `_real_sleep(0)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L127) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L126–L127` |
| `_fake_network_info` | variable | — | unexported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L130–L130` |
| `_fake_NodeDevXml` | variable | — | unexported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L134–L134` |
| `_fake_NodeDevXml_parents` | variable | — | unexported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L135–L135` |
| `_fake_NodeDevXml_children` | variable | — | unexported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L136–L136` |
| `_fake_cpu_info` | variable | — | unexported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L138–L148` |
| `_fake_cpu_info_aarch64` | variable | — | unexported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L150–L160` |
| `eph_default_ext` | variable | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L162–L162` |
| `_fake_qemu64_cpu_feature` | variable | — | unexported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L164–L195` |
| `_fake_sandy_bridge_cpu_feature` | variable | — | unexported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L197–L238` |
| `_fake_broadwell_cpu_feature` | variable | — | unexported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L240–L297` |
| `eph_name` | function | (size) | exported | `('ephemeral_%(size)s_%(ext)s' % {'size': size, 'ext': eph_default_ext})` (src/nova/tests/unit/virt/libvirt/test_driver.py:L301) | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L300–L302` |
| `fake_disk_info_byname` | function | (instance, type='qcow2') | exported | `disk_info` (src/nova/tests/unit/virt/libvirt/test_driver.py:L363) | 6/41 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L305–L363` |
| `fake_disk_info_byname.instance_path` | function | (name) | public | `os.path.join(instance_dir, name)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L318) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L317–L318` |
| `fake_diagnostics_object` | function | (with_cpus=False, with_disks=False, with_nic=False) | exported | `fake_diagnostics.fake_diagnostics_obj(**diag_dict)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L403) | 6/34 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L366–L403` |
| `fake_disk_info_json` | function | (instance, type='qcow2') | exported | `jsonutils.dumps(disk_info.values())` (src/nova/tests/unit/virt/libvirt/test_driver.py:L416) | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L406–L416` |
| `get_injection_info` | function | (network_info=None, admin_pass=None, files=None) | exported | `libvirt_driver.InjectionInfo( network_info=network_info, admin_pass=admin_pass, files=files)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L420) | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L419–L421` |
| `_concurrency` | function | (signal, wait, done, target, is_block_dev=False) | unexported | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L424–L427` |
| `FakeVirtDomain` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L430–L529` |
| `FakeVirtDomain.__init__` | method | (self, fake_xml=None, uuidstr=None, id=None, name=None, info=None) | public | not declared | 4/23 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L432–L454` |
| `FakeVirtDomain.name` | method | (self) | public | `"fake-domain %s" % self` (src/nova/tests/unit/virt/libvirt/test_driver.py:L458); `self.domname` (src/nova/tests/unit/virt/libvirt/test_driver.py:L460) | 2/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L456–L460` |
| `FakeVirtDomain.ID` | method | (self) | public | `self.id` (src/nova/tests/unit/virt/libvirt/test_driver.py:L463) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L462–L463` |
| `FakeVirtDomain.info` | method | (self) | public | `self._info` (src/nova/tests/unit/virt/libvirt/test_driver.py:L466) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L465–L466` |
| `FakeVirtDomain.create` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L468–L469` |
| `FakeVirtDomain.managedSave` | method | (self, *args) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L471–L472` |
| `FakeVirtDomain.createWithFlags` | method | (self, launch_flags) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L474–L475` |
| `FakeVirtDomain.XMLDesc` | method | (self, flags) | public | `self._fake_dom_xml` (src/nova/tests/unit/virt/libvirt/test_driver.py:L478) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L477–L478` |
| `FakeVirtDomain.UUIDString` | method | (self) | public | `self.uuidstr` (src/nova/tests/unit/virt/libvirt/test_driver.py:L481) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L480–L481` |
| `FakeVirtDomain.attachDeviceFlags` | method | (self, xml, flags) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L483–L484` |
| `FakeVirtDomain.attachDevice` | method | (self, xml) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L486–L487` |
| `FakeVirtDomain.detachDeviceFlags` | method | (self, xml, flags) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L489–L490` |
| `FakeVirtDomain.snapshotCreateXML` | method | (self, xml, flags) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L492–L493` |
| `FakeVirtDomain.blockCommit` | method | (self, disk, base, top, bandwidth=0, flags=0) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L495–L496` |
| `FakeVirtDomain.blockRebase` | method | (self, disk, base, bandwidth=0, flags=0) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L498–L499` |
| `FakeVirtDomain.blockJobInfo` | method | (self, path, flags) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L501–L502` |
| `FakeVirtDomain.blockJobAbort` | method | (self, path, flags) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L504–L505` |
| `FakeVirtDomain.resume` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L507–L508` |
| `FakeVirtDomain.destroy` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L510–L511` |
| `FakeVirtDomain.fsFreeze` | method | (self, disks=None, flags=0) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L513–L514` |
| `FakeVirtDomain.fsThaw` | method | (self, disks=None, flags=0) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L516–L517` |
| `FakeVirtDomain.isActive` | method | (self) | public | `True` (src/nova/tests/unit/virt/libvirt/test_driver.py:L520) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L519–L520` |
| `FakeVirtDomain.isPersistent` | method | (self) | public | `True` (src/nova/tests/unit/virt/libvirt/test_driver.py:L523) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L522–L523` |
| `FakeVirtDomain.undefine` | method | (self) | public | `True` (src/nova/tests/unit/virt/libvirt/test_driver.py:L526) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L525–L526` |
| `FakeVirtDomain.setMetadata` | method | (self, metadata_type, metadata, key, uri, flags=0) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L528–L529` |
| `CacheConcurrencyTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L532–L640` |
| `CacheConcurrencyTestCase.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L533–L557` |
| `CacheConcurrencyTestCase.setUp.fake_exists` | function | (fname) | public | `True` (src/nova/tests/unit/virt/libvirt/test_driver.py:L550); `False` (src/nova/tests/unit/virt/libvirt/test_driver.py:L551) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L546–L551` |
| `CacheConcurrencyTestCase._fake_instance` | method | (self, uuid) | private | `objects.Instance(id=1, uuid=uuid)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L560) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L559–L560` |
| `CacheConcurrencyTestCase.test_same_fname_concurrency` | method | (self) | public | not declared | 2/30 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L562–L598` |
| `CacheConcurrencyTestCase.test_different_fname_concurrency` | method | (self) | public | not declared | 4/33 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L600–L640` |
| `FakeInvalidVolumeDriver` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L643–L645` |
| `FakeInvalidVolumeDriver.__init__` | method | (self, *args, **kwargs) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L644–L645` |
| `FakeConfigGuestDisk` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L648–L651` |
| `FakeConfigGuestDisk.__init__` | method | (self, *args, **kwargs) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L649–L651` |
| `FakeConfigGuest` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L654–L656` |
| `FakeConfigGuest.__init__` | method | (self, *args, **kwargs) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L655–L656` |
| `FakeNodeDevice` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L659–L664` |
| `FakeNodeDevice.__init__` | method | (self, fakexml) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L660–L661` |
| `FakeNodeDevice.XMLDesc` | method | (self, flags) | public | `self.xml` (src/nova/tests/unit/virt/libvirt/test_driver.py:L664) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L663–L664` |
| `_create_test_instance` | function | (image_ref='155d900f-4e14-4e4c-a73d-069cbf4541e6', system_metadata=None) | unexported | `{ 'id': 1, 'uuid': uuids.instance, 'memory_kb': '1024000', 'basepath': '/some/path', 'bridge_name': 'br100', 'display_name': "Acme webserver", 'vcpus': 2, 'project_id': 'fake', 'bridge': 'br101', 'ima` (src/nova/tests/unit/virt/libvirt/test_driver.py:L683) | 2/55 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L667–L721` |
| `LibvirtConnTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L725–L23857` |
| `LibvirtConnTestCase.REQUIRES_LOCKING` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L728–L728` |
| `LibvirtConnTestCase._EPHEMERAL_20_DEFAULT` | field | — | private | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L730–L730` |
| `LibvirtConnTestCase.setUp` | method | (self) | public | not declared | 1/45 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L732–L786` |
| `LibvirtConnTestCase.relpath` | method | (self, path) | public | `os.path.relpath(path, CONF.instances_path)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L789) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L788–L789` |
| `LibvirtConnTestCase.tearDown` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L791–L792` |
| `LibvirtConnTestCase.test_driver_capabilities` | method | (self) | public | not declared | 1/50 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L794–L843` |
| `LibvirtConnTestCase.test_driver_capabilities_mem_backing_file` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L848–L862` |
| `LibvirtConnTestCase.test_driver_capabilities_qcow2_with_rbd` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L864–L876` |
| `LibvirtConnTestCase.test_driver_capabilities_qcow2_with_lvm` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L878–L890` |
| `LibvirtConnTestCase.test_driver_capabilities_ploop_with_virtuozzo` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L892–L902` |
| `LibvirtConnTestCase.test_driver_capabilities_vtpm` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L904–L911` |
| `LibvirtConnTestCase.test_driver_capabilities_secure_boot` | method | (self, mock_supports) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L918–L926` |
| `LibvirtConnTestCase.test_init_host_topology` | method | (self, mock_get_cpu_dedicated_set, _) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L932–L936` |
| `LibvirtConnTestCase.test_driver_capabilities_virtio_fs` | method | (self, mock_supports) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L943–L951` |
| `LibvirtConnTestCase.test_driver_raises_on_non_linux_platform` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L953–L957` |
| `LibvirtConnTestCase.create_fake_libvirt_mock` | method | (self, **kwargs) | public | not declared | 2/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L959–L975` |
| `LibvirtConnTestCase.create_fake_libvirt_mock.FakeLibvirtDriver` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L963–L965` |
| `LibvirtConnTestCase.create_fake_libvirt_mock.FakeLibvirtDriver.defineXML` | method | (self, xml) | public | `FakeVirtDomain()` (src/nova/tests/unit/virt/libvirt/test_driver.py:L965) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L964–L965` |
| `LibvirtConnTestCase.fake_lookup` | method | (self, instance_name) | public | `FakeVirtDomain()` (src/nova/tests/unit/virt/libvirt/test_driver.py:L978) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L977–L978` |
| `LibvirtConnTestCase.fake_execute` | method | (self, *args, **kwargs) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L980–L981` |
| `LibvirtConnTestCase._create_service` | method | (self, **kwargs) | private | `objects.Service(**service_ref)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L990) | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L983–L990` |
| `LibvirtConnTestCase._get_pause_flag` | method | (self, drvr, network_info, power_on=True, vifs_already_plugged=False) | private | `bool(events)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L1003) | 5/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L992–L1003` |
| `LibvirtConnTestCase.test_public_api_signatures` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1005–L1008` |
| `LibvirtConnTestCase.test_static_traits` | method | (self, mock_version, mock_vif_traits, mock_video_traits, mock_storage_traits, mock_cpu_traits, mock_sound_traits) | public | not declared | 3/58 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1016–L1088` |
| `LibvirtConnTestCase.test_static_traits_invalid_trait` | method | (self, mock_vif_traits, mock_video_traits, mock_storage_traits, mock_cpu_traits, mock_sound_traits, mock_log) | public | not declared | 1/47 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1096–L1146` |
| `LibvirtConnTestCase.test_min_version_start_ok` | method | (self, mock_version) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1152–L1155` |
| `LibvirtConnTestCase.test_min_version_start_abort` | method | (self, mock_version) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1158–L1163` |
| `LibvirtConnTestCase.test_next_min_version_deprecation_warning` | method | (self, mock_warning, mock_get_libversion) | public | not declared | 4/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1172–L1194` |
| `LibvirtConnTestCase.test_next_min_qemu_version_deprecation_warning` | method | (self, mock_warning, mock_get_libversion) | public | not declared | 4/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1203–L1225` |
| `LibvirtConnTestCase.test_qemu_multifd_with_postcopy_version_ok` | method | (self, mock_gv) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1233–L1238` |
| `LibvirtConnTestCase.test_next_min_version_ok` | method | (self, mock_warning, mock_get_libversion) | public | not declared | 4/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1247–L1269` |
| `LibvirtConnTestCase.test_next_min_qemu_version_ok` | method | (self, mock_warning, mock_get_libversion) | public | not declared | 4/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1278–L1300` |
| `LibvirtConnTestCase.test_libvirt_has_virtio_sound_but_not_qemu` | method | (self, mock_version) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1303–L1314` |
| `LibvirtConnTestCase.test_libvirt_has_virtio_sound_but_not_qemu._fake_has_min_version` | function | (lv_ver=None, hv_ver=None, hv_type=None) | private | `True` (src/nova/tests/unit/virt/libvirt/test_driver.py:L1306); `False` (src/nova/tests/unit/virt/libvirt/test_driver.py:L1307) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1304–L1307` |
| `LibvirtConnTestCase.test_libvirt_no_virtio_sound` | method | (self, mock_version) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1317–L1328` |
| `LibvirtConnTestCase.test_libvirt_no_virtio_sound._fake_has_min_version` | function | (lv_ver=None, hv_ver=None, hv_type=None) | private | `False` (src/nova/tests/unit/virt/libvirt/test_driver.py:L1320); `False` (src/nova/tests/unit/virt/libvirt/test_driver.py:L1321) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1318–L1321` |
| `LibvirtConnTestCase.test_libvirt_has_virtio_sound` | method | (self, mock_version) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1331–L1341` |
| `LibvirtConnTestCase.test_libvirt_has_virtio_sound._fake_has_min_version` | function | (lv_ver=None, hv_ver=None, hv_type=None) | private | `True` (src/nova/tests/unit/virt/libvirt/test_driver.py:L1334); `True` (src/nova/tests/unit/virt/libvirt/test_driver.py:L1335) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1332–L1335` |
| `LibvirtConnTestCase.test_min_version_ppc_ok` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1346–L1350` |
| `LibvirtConnTestCase.test_min_version_s390_ok` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1355–L1359` |
| `LibvirtConnTestCase.test_file_backed_memory_support_called` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1364–L1369` |
| `LibvirtConnTestCase.test_min_version_file_backed_ok` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1371–L1376` |
| `LibvirtConnTestCase.test_min_version_file_backed_bad_ram_allocation_ratio` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1378–L1384` |
| `LibvirtConnTestCase.test__check_file_backed_memory_support__has_reserved` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1386–L1400` |
| `LibvirtConnTestCase.test__prepare_cpu_flag` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1405–L1431` |
| `LibvirtConnTestCase.test__check_cpu_compatibility_start_ok` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1436–L1441` |
| `LibvirtConnTestCase.test__check_cpu_compatibility_none_models` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1443–L1448` |
| `LibvirtConnTestCase.test__check_cpu_compatibility_none_mode` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1450–L1455` |
| `LibvirtConnTestCase.test__check_cpu_compatibility_advance_model` | method | (self, mocked_compare) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1459–L1466` |
| `LibvirtConnTestCase.test__check_cpu_compatibility_skip_compare_at_init` | method | (self, mocked_compare) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1472–L1482` |
| `LibvirtConnTestCase.test__check_cpu_compatibility_with_flag` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1487–L1493` |
| `LibvirtConnTestCase.test__check_cpu_compatibility_advance_flag` | method | (self, mocked_compare) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1497–L1505` |
| `LibvirtConnTestCase.test__check_cpu_compatibility_wrong_flag` | method | (self, mocked_compare) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1509–L1519` |
| `LibvirtConnTestCase.test__check_cpu_compatibility_enabled_and_disabled_flags` | method | (self, mocked_compare) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1523–L1534` |
| `LibvirtConnTestCase.test__check_cpu_compatibility_invalid_virt_type` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1536–L1545` |
| `LibvirtConnTestCase.test__check_cpu_compatibility_aarch64_qemu_custom_start_OK` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1550–L1565` |
| `LibvirtConnTestCase.test__check_vtpm_support_non_qemu` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1570–L1577` |
| `LibvirtConnTestCase.test__check_vtpm_support_unsupported` | method | (self, mock_version) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1580–L1592` |
| `LibvirtConnTestCase.test__check_vtpm_support_unsupported_no_emulator` | method | (self, mock_version) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1599–L1611` |
| `LibvirtConnTestCase.test__check_vtpm_support_invalid_user` | method | (self, mock_getpwnam, mock_version) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1619–L1640` |
| `LibvirtConnTestCase.test__check_vtpm_support_invalid_group` | method | (self, mock_getgrnam, mock_getpwnam, mock_version) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1649–L1670` |
| `LibvirtConnTestCase.test__check_vtpm_support` | method | (self, mock_getgrnam, mock_getpwnam) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1681–L1690` |
| `LibvirtConnTestCase.test_keep_tpm_supported` | method | (self, mock_version) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1696–L1703` |
| `LibvirtConnTestCase.test_keep_tpm_unsupported` | method | (self, mock_version) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1709–L1723` |
| `LibvirtConnTestCase.test_keep_tpm_unsupported.version_check` | function | (lv_ver=None, **kwargs) | public | `False` (src/nova/tests/unit/virt/libvirt/test_driver.py:L1712); `True` (src/nova/tests/unit/virt/libvirt/test_driver.py:L1713) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1710–L1713` |
| `LibvirtConnTestCase.test__check_multipath_misconfiguration` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1725–L1737` |
| `LibvirtConnTestCase.test__check_multipath_disabled` | method | (self, is_multipath_running) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1740–L1743` |
| `LibvirtConnTestCase.test__check_multipath_optional` | method | (self, is_multipath_running) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1746–L1750` |
| `LibvirtConnTestCase.test__check_multipath_enforced` | method | (self, is_multipath_running) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1753–L1759` |
| `LibvirtConnTestCase.test__check_multipath_enforced_missing` | method | (self, is_multipath_running) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1762–L1776` |
| `LibvirtConnTestCase.test_check_cpu_set_configuration__no_configuration` | method | (self, mock_log) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1779–L1789` |
| `LibvirtConnTestCase.test_check_cpu_set_configuration__cpu_shared_set_cpu_dedicated_set` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1791–L1804` |
| `LibvirtConnTestCase.test_check_cpu_set_configuration__reserved_host_cpus_cpu_shared_set` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1806–L1821` |
| `LibvirtConnTestCase.test_check_cpu_set_configuration__vcpu_pin_set` | method | (self, mock_log) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1824–L1840` |
| `LibvirtConnTestCase.test_check_cpu_set_configuration__vcpu_pin_set_cpu_shared_set` | method | (self, mock_log) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1843–L1859` |
| `LibvirtConnTestCase.test_check_cpu_set_configuration__vcpu_pin_set_cpu_dedicated_set` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1861–L1876` |
| `LibvirtConnTestCase._do_test_parse_migration_flags` | method | (self, lm_expected=None, bm_expected=None) | private | not declared | 3/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1878–L1886` |
| `LibvirtConnTestCase.test_parse_live_migration_flags_default` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1888–L1893` |
| `LibvirtConnTestCase.test_parse_live_migration_flags` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1895–L1900` |
| `LibvirtConnTestCase.test_parse_block_migration_flags_default` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1902–L1908` |
| `LibvirtConnTestCase.test_parse_block_migration_flags` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1910–L1916` |
| `LibvirtConnTestCase.test_live_migration_tunnelled_true` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1918–L1931` |
| `LibvirtConnTestCase.test_live_migration_with_native_tls` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1933–L1946` |
| `LibvirtConnTestCase.test_live_migration_permit_postcopy_true` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1948–L1961` |
| `LibvirtConnTestCase.test_live_migration_permit_auto_converge_true` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1963–L1976` |
| `LibvirtConnTestCase.test_live_migration_parallel_connections_enabled` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1978–L1991` |
| `LibvirtConnTestCase.test_live_migration_permit_auto_converge_and_post_copy_true` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L1993–L2007` |
| `LibvirtConnTestCase.test_live_migration_permit_postcopy_false` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2009–L2019` |
| `LibvirtConnTestCase.test_live_migration_permit_autoconverge_false` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2021–L2031` |
| `LibvirtConnTestCase.test_set_admin_password` | method | (self, mock_get_guest, ver, mock_image) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2037–L2048` |
| `LibvirtConnTestCase.test_set_admin_password_saves_sysmeta` | method | (self, mock_get_guest, ver, mock_image, mock_encrypt, mock_convert, mock_encode, mock_save) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2058–L2081` |
| `LibvirtConnTestCase.test_set_admin_password_parallels` | method | (self, mock_get_guest) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2084–L2093` |
| `LibvirtConnTestCase.test_qemu_announce_self` | method | (self, mock_get_guest) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2097–L2110` |
| `LibvirtConnTestCase.test_set_admin_password_windows` | method | (self, mock_get_guest, ver, mock_image) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2116–L2129` |
| `LibvirtConnTestCase.test_set_admin_password_image` | method | (self, mock_get_guest, ver, mock_image) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2135–L2148` |
| `LibvirtConnTestCase.test_set_admin_password_bad_hyp` | method | (self, mock_svc, mock_image) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2153–L2160` |
| `LibvirtConnTestCase.test_set_admin_password_guest_agent_not_running` | method | (self, mock_svc) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2164–L2169` |
| `LibvirtConnTestCase.test_set_admin_password_error` | method | (self, mock_get_guest, ver, mock_image) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2175–L2190` |
| `LibvirtConnTestCase.test_set_admin_password_error_with_unicode` | method | (self, mock_get_guest, ver, mock_image) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2196–L2210` |
| `LibvirtConnTestCase.test_set_admin_password_not_implemented` | method | (self, mock_get_guest, ver, mock_image) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2216–L2232` |
| `LibvirtConnTestCase.test_set_host_enabled_with_disable` | method | (self, mock_svc, mock_save) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2239–L2250` |
| `LibvirtConnTestCase.test_set_host_enabled_with_enable` | method | (self, mock_svc, mock_save) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2257–L2269` |
| `LibvirtConnTestCase.test_set_host_enabled_with_enable_state_enabled` | method | (self, mock_svc, mock_save) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2276–L2287` |
| `LibvirtConnTestCase.test_set_host_enabled_with_disable_state_disabled` | method | (self, mock_svc, mock_save) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2294–L2305` |
| `LibvirtConnTestCase.test_set_host_enabled_swallows_exceptions` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2307–L2316` |
| `LibvirtConnTestCase.test_update_compute_provider_status` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2318–L2327` |
| `LibvirtConnTestCase.test_update_compute_provider_status_swallows_exceptions` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2329–L2357` |
| `LibvirtConnTestCase.test_versioned_notification` | method | (self, mock_notify, mock_get) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2361–L2376` |
| `LibvirtConnTestCase.test_device_metadata` | method | (self, mock_version) | public | not declared | 1/275 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2379–L2668` |
| `LibvirtConnTestCase.test_detach_pci_devices` | method | (self, mocked_get_xml_desc, mock_conn) | public | not declared | 1/38 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2672–L2713` |
| `LibvirtConnTestCase.test_detach_pci_devices_timeout` | method | (self, mocked_get_xml_desc, mock_conn) | public | not declared | 1/29 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2717–L2748` |
| `LibvirtConnTestCase.test_get_connector` | method | (self, fake_get_connector) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2751–L2775` |
| `LibvirtConnTestCase.test_get_connector_storage_ip` | method | (self, fake_get_connector) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2778–L2792` |
| `LibvirtConnTestCase.test_lifecycle_event_registration` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2797–L2825` |
| `LibvirtConnTestCase.test_lifecycle_event_registration.fake_registerErrorHandler` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2800–L2801` |
| `LibvirtConnTestCase.test_lifecycle_event_registration.fake_get_host_capabilities` | function | (**args) | public | `caps` (src/nova/tests/unit/virt/libvirt/test_driver.py:L2811) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2803–L2811` |
| `LibvirtConnTestCase.test_lifecycle_event_registration.test_init_host` | function | (get_host_capabilities, register_error_handler) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2817–L2819` |
| `LibvirtConnTestCase.test_sanitize_log_to_xml` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2827–L2853` |
| `LibvirtConnTestCase.test_sanitize_log_to_xml.fake_debug` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2835–L2837` |
| `LibvirtConnTestCase.test_get_guest_config_meta_with_no_port` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2855–L2862` |
| `LibvirtConnTestCase.test_get_guest_config_meta_with_multiple_ports` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2864–L2893` |
| `LibvirtConnTestCase.test_get_guest_config_meta_building_image_id` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2895–L2906` |
| `LibvirtConnTestCase.test_get_guest_config_meta_no_base_image_ref_image_id` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2908–L2919` |
| `LibvirtConnTestCase.test_get_guest_config_meta_unshelve_image_id` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2921–L2935` |
| `LibvirtConnTestCase.test_get_guest_config_meta_from_image` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2937–L2961` |
| `LibvirtConnTestCase.test_get_guest_config_meta_from_image_unshelved` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2963–L2989` |
| `LibvirtConnTestCase.test_get_guest_config_meta_from_volume_image` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L2991–L3014` |
| `LibvirtConnTestCase.test_get_guest_config_meta_from_volume_no_image` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3016–L3033` |
| `LibvirtConnTestCase.test_get_guest_config` | method | (self, time_mock) | public | not declared | 7/106 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3036–L3157` |
| `LibvirtConnTestCase.test_get_guest_config_no_pcie_ports` | method | (self, time_mock) | public | not declared | 5/49 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3160–L3219` |
| `LibvirtConnTestCase.test_get_guest_config_q35` | method | (self) | public | not declared | 7/65 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3222–L3299` |
| `LibvirtConnTestCase.test_get_guest_config_records_machine_type_in_instance` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3308–L3334` |
| `LibvirtConnTestCase.test_get_guest_config_missing_ownership_info` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3336–L3365` |
| `LibvirtConnTestCase.test_get_guest_config_lxc` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3367–L3392` |
| `LibvirtConnTestCase.test_get_guest_config_lxc_with_id_maps` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3394–L3425` |
| `LibvirtConnTestCase.test_post_claim_migrate_data` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3427–L3448` |
| `LibvirtConnTestCase.test_get_live_migrate_numa_info` | method | (self) | public | not declared | 1/39 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3451–L3500` |
| `LibvirtConnTestCase.test_get_live_migrate_numa_info_empty` | method | (self, _) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3503–L3512` |
| `LibvirtConnTestCase.test_get_guest_config_numa_host_instance_fits` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3515–L3548` |
| `LibvirtConnTestCase.test_get_guest_config_numa_host_instance_no_fit` | method | (self) | public | not declared | 1/30 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3553–L3585` |
| `LibvirtConnTestCase.test_get_guest_config_flavor_extra_specs` | method | (self) | public | not declared | 1/35 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3587–L3621` |
| `LibvirtConnTestCase._test_get_guest_memory_backing_config` | method | (self, host_topology, inst_topology, numatune) | private | `drvr._get_guest_memory_backing_config( inst_topology, numatune, flavor, image_meta)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L3633) | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3623–L3634` |
| `LibvirtConnTestCase.test_get_guest_memory_backing_config_large_success` | method | (self, mock_version) | public | not declared | 1/28 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3638–L3667` |
| `LibvirtConnTestCase.test_get_guest_memory_backing_config_smallest` | method | (self, mock_version) | public | not declared | 1/26 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3671–L3698` |
| `LibvirtConnTestCase.test_get_guest_memory_backing_config_realtime` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3700–L3717` |
| `LibvirtConnTestCase.test_get_guest_memory_backing_config_locked_flavor` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3719–L3731` |
| `LibvirtConnTestCase.test_get_guest_memory_backing_config_locked_image_meta` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3733–L3752` |
| `LibvirtConnTestCase.test_get_guest_memory_backing_config_realtime_invalid_share` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3754–L3780` |
| `LibvirtConnTestCase.test_get_guest_config_memory_encryption` | method | (self, model) | public | not declared | 4/44 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3784–L3838` |
| `LibvirtConnTestCase._test_get_mem_encryption_config` | method | (self, expected=None, host_sev_enabled=False, enc_extra_spec=None, enc_image_prop=None, hw_machine_type=None, hw_firmware_type=None) | private | not declared | 6/26 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3840–L3870` |
| `LibvirtConnTestCase.test_get_mem_encryption_config_no_host_support` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3872–L3873` |
| `LibvirtConnTestCase.test_get_mem_encryption_config_host_support_no_flavor_image` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3875–L3876` |
| `LibvirtConnTestCase.test_get_mem_encryption_config_no_host_support_flavor_requested` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3878–L3879` |
| `LibvirtConnTestCase.test_get_mem_encryption_config_no_host_support_image_requested` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3881–L3882` |
| `LibvirtConnTestCase.test_get_mem_encryption_config_host_support_flavor_requested` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3884–L3889` |
| `LibvirtConnTestCase.test_get_mem_encryption_config_host_support_force_no_machine_type` | method | (self, fake_machine_type, mock_log) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3894–L3902` |
| `LibvirtConnTestCase.test_get_mem_encryption_config_host_support_image_requested` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3904–L3909` |
| `LibvirtConnTestCase.test_get_mem_encryption_config_host_extra_spec_image_conflict` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3914–L3922` |
| `LibvirtConnTestCase.test_get_mem_encryption_config_host_extra_spec_no_uefi` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3924–L3931` |
| `LibvirtConnTestCase.test_get_mem_encryption_config_host_extra_spec_no_machine_type` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3933–L3942` |
| `LibvirtConnTestCase.test_get_mem_encryption_config_host_extra_spec_pc` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3944–L3953` |
| `LibvirtConnTestCase._setup_mem_enc_guest` | method | (self, model=None, direct_kernel_boot=False) | private | `drvr._get_guest_config(instance_ref, _fake_network_info(self), image_meta, disk_info, context=ctxt)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L4001) | 5/44 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L3955–L4004` |
| `LibvirtConnTestCase.test_get_guest_config_sev` | method | (self, sev_model, sev_policy) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L4012–L4021` |
| `LibvirtConnTestCase.test_get_guest_config_sev_snp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L4023–L4030` |
| `LibvirtConnTestCase.test_get_guest_config_sev_snp_direct_kernel_boot` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L4032–L4040` |
| `LibvirtConnTestCase.test_get_guest_config_tdx` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L4042–L4047` |
| `LibvirtConnTestCase.test_get_guest_config_invalid_mem_enc_model` | method | (self, fake_me_model) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L4051–L4056` |
| `LibvirtConnTestCase._setup_fake_domain_caps` | method | (self, fake_domain_caps) | private | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L4058–L4064` |
| `LibvirtConnTestCase.test__get_cpu_emulation_arch_traits` | method | (self, fake_domain_caps) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L4067–L4074` |
| `LibvirtConnTestCase.test_get_guest_memory_backing_config_file_backed` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L4076–L4084` |
| `LibvirtConnTestCase.test_get_guest_memory_backing_config_file_backed_hugepages` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L4086–L4114` |
| `LibvirtConnTestCase.test_get_guest_config_numa_host_instance_pci_no_numa_info` | method | (self) | public | not declared | 1/46 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L4117–L4166` |
| `LibvirtConnTestCase.test_get_guest_config_numa_host_instance_2pci_no_fit` | method | (self) | public | not declared | 1/55 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L4171–L4227` |
| `LibvirtConnTestCase._test_get_guest_config_numa_unsupported` | method | (self, fake_lib_version, fake_version, fake_type, fake_arch, exception_class, pagesize, mock_host, mock_caps, mock_lib_version, mock_version, mock_type) | private | not declared | 1/35 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L4234–L4272` |
| `LibvirtConnTestCase.test_get_guest_config_numa_other_arch_qemu` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L4274–L4285` |
| `LibvirtConnTestCase.test_get_guest_config_numa_host_instance_fit_w_cpu_pinset` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L4288–L4324` |
| `LibvirtConnTestCase.test_get_guest_config_non_numa_host_instance_topo` | method | (self) | public | not declared | 2/43 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L4327–L4372` |
| `LibvirtConnTestCase.test_get_guest_config_numa_host_instance_topo` | method | (self) | public | not declared | 4/71 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L4375–L4454` |
| `LibvirtConnTestCase.test_get_guest_config_numa_host_instance_topo_reordered` | method | (self) | public | not declared | 4/66 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L4457–L4530` |
| `LibvirtConnTestCase.test_get_guest_config_numa_host_instance_topo_cpu_pinning` | method | (self) | public | not declared | 4/68 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L4533–L4609` |
| `LibvirtConnTestCase.test_get_guest_config_numa_host_instance_cpu_mixed` | method | (self) | public | not declared | 4/81 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L4612–L4727` |
| `LibvirtConnTestCase.test_get_guest_config_numa_host_instance_cpu_mixed_isolated_emu` | method | (self) | public | not declared | 4/68 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L4730–L4816` |
| `LibvirtConnTestCase.test_get_guest_config_numa_host_instance_cpu_mixed_realtime` | method | (self) | public | not declared | 5/85 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L4819–L4942` |
| `LibvirtConnTestCase.test_get_guest_config_numa_host_mempages_shared` | method | (self) | public | not declared | 5/64 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L4945–L5016` |
| `LibvirtConnTestCase.test_get_guest_config_numa_host_instance_cpu_pinning_realtime` | method | (self) | public | not declared | 5/80 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5019–L5113` |
| `LibvirtConnTestCase.test_get_guest_config_numa_host_instance_isolated_emulthreads` | method | (self) | public | not declared | 1/48 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5116–L5169` |
| `LibvirtConnTestCase.test_get_guest_config_iothreads_instance` | method | (self) | public | not declared | 1/37 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5172–L5213` |
| `LibvirtConnTestCase.test_get_guest_config_iothreadpin_matches_emulatorpin` | method | (self) | public | not declared | 1/51 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5216–L5272` |
| `LibvirtConnTestCase.test_get_guest_config_iothreadpin_shared_emulator_threads` | method | (self) | public | not declared | 1/50 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5275–L5330` |
| `LibvirtConnTestCase.test_get_guest_config_iothreadpin_numa_topology` | method | (self) | public | not declared | 1/48 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5333–L5385` |
| `LibvirtConnTestCase.test_get_guest_config_numa_host_instance_shared_emulthreads_err` | method | (self) | public | not declared | 1/44 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5387–L5436` |
| `LibvirtConnTestCase.test_get_guest_config_numa_host_instance_shared_emulator_threads` | method | (self) | public | not declared | 1/48 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5439–L5492` |
| `LibvirtConnTestCase.test_get_cpu_numa_config_from_instance` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5494–L5512` |
| `LibvirtConnTestCase.test_get_cpu_numa_config_from_instance_none` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5514–L5517` |
| `LibvirtConnTestCase.test_get_memnode_numa_config_from_instance` | method | (self, mock_numa) | public | not declared | 1/44 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5521–L5566` |
| `LibvirtConnTestCase.test_does_not_want_hugepages` | method | (self, mock_caps, mock_numa) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5571–L5596` |
| `LibvirtConnTestCase.test_does_want_hugepages` | method | (self, mock_caps, mock_numa) | public | not declared | 2/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5601–L5607` |
| `LibvirtConnTestCase._test_does_want_hugepages` | method | (self, mock_caps, mock_numa, architecture) | private | not declared | 2/31 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5609–L5643` |
| `LibvirtConnTestCase.test_get_guest_config_clock` | method | (self) | public | not declared | 3/40 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5646–L5687` |
| `LibvirtConnTestCase.test_get_guest_config_clock_hpet_false` | method | (self) | public | not declared | 3/42 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5690–L5733` |
| `LibvirtConnTestCase.test_get_guest_config_clock_hpet_true` | method | (self) | public | not declared | 3/43 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5736–L5780` |
| `LibvirtConnTestCase.test_get_guest_config_clock_hpet_invalid` | method | (self) | public | not declared | 3/42 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5783–L5828` |
| `LibvirtConnTestCase.test_get_guest_config_windows_timer` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5830–L5866` |
| `LibvirtConnTestCase._test_get_guest_config_windows_hyperv` | method | (self, flavor=None, image_meta=None, hvid_hidden=False) | private | not declared | 5/36 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5870–L5909` |
| `LibvirtConnTestCase.test_get_guest_config_apic_workaround` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5913–L5940` |
| `LibvirtConnTestCase.test_get_guest_config_windows_hyperv_feature2` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5942–L5943` |
| `LibvirtConnTestCase.test_get_guest_config_windows_hyperv_all_hide_flv` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5945–L5956` |
| `LibvirtConnTestCase.test_get_guest_config_windows_hyperv_all_hide_flv_old` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5958–L5969` |
| `LibvirtConnTestCase.test_get_guest_config_windows_hyperv_all_hide_img` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5971–L5980` |
| `LibvirtConnTestCase.test_get_guest_config_windows_hyperv_all_hide_flv_img` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5982–L5997` |
| `LibvirtConnTestCase.test_get_guest_config_with_two_nics` | method | (self) | public | not declared | 1/45 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L5999–L6044` |
| `LibvirtConnTestCase.test_get_guest_config_with_uefi` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6046–L6070` |
| `LibvirtConnTestCase.test_get_guest_config_with_uefi_old_guest` | method | (self, mock_exists) | public | not declared | 1/34 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6073–L6112` |
| `LibvirtConnTestCase.test_get_guest_config_with_uefi_old_guest_loader_not_found` | method | (self, mock_exists) | public | not declared | 1/36 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6115–L6158` |
| `LibvirtConnTestCase.test_get_guest_config_with_uefi_old_guest_loader_not_found.mock_func` | function | (path) | public | `path != 'LOADER'` (src/nova/tests/unit/virt/libvirt/test_driver.py:L6141) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6140–L6141` |
| `LibvirtConnTestCase.test_get_guest_config_with_uefi_old_guest_nvram_not_found` | method | (self, mock_exists) | public | not declared | 1/36 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6161–L6204` |
| `LibvirtConnTestCase.test_get_guest_config_with_uefi_old_guest_nvram_not_found.mock_func` | function | (path) | public | `path != 'NVRAM_TEMPLATE'` (src/nova/tests/unit/virt/libvirt/test_driver.py:L6187) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6186–L6187` |
| `LibvirtConnTestCase.test_get_guest_config_with_uefi_and_stateless_firmware` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6206–L6234` |
| `LibvirtConnTestCase.test_get_guest_config_with_secure_boot_required` | method | (self, host_has_support) | public | not declared | 2/35 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6237–L6276` |
| `LibvirtConnTestCase.test_get_guest_config_with_secure_boot_optional` | method | (self, host_has_support) | public | not declared | 2/34 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6279–L6316` |
| `LibvirtConnTestCase.test_get_guest_config_with_secure_boot_old_guest` | method | (self, mock_exists, smm) | public | not declared | 3/47 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6320–L6371` |
| `LibvirtConnTestCase.test_get_guest_config_with_uefi_old_guest_sb_changed` | method | (self, mock_exists) | public | not declared | 1/43 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6374–L6423` |
| `LibvirtConnTestCase.test_get_guest_config_with_block_device` | method | (self) | public | not declared | 1/39 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6425–L6465` |
| `LibvirtConnTestCase.test_get_guest_config_lxc_with_attached_volume` | method | (self) | public | not declared | 1/48 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6467–L6516` |
| `LibvirtConnTestCase.test_get_guest_config_with_configdrive` | method | (self) | public | not declared | 2/22 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6519–L6553` |
| `LibvirtConnTestCase.test_get_guest_config_default_with_virtio_scsi_bus` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6555–L6556` |
| `LibvirtConnTestCase.test_get_guest_config_rbd_with_virtio_scsi_bus` | method | (self, mock_get_mon_addrs) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6562–L6566` |
| `LibvirtConnTestCase._test_get_guest_config_with_virtio_scsi_bus` | method | (self) | private | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6568–L6590` |
| `LibvirtConnTestCase.test_get_guest_config_with_virtio_scsi_bus_bdm` | method | (self) | public | not declared | 1/47 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6592–L6640` |
| `LibvirtConnTestCase.test_get_guest_config_one_scsi_volume_with_configdrive` | method | (self) | public | not declared | 1/52 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6642–L6713` |
| `LibvirtConnTestCase.test_get_guest_config_boot_from_volume_with_configdrive` | method | (self) | public | not declared | 1/56 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6715–L6794` |
| `LibvirtConnTestCase._get_guest_config_with_graphics` | method | (self) | private | `cfg` (src/nova/tests/unit/virt/libvirt/test_driver.py:L6806) | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6796–L6806` |
| `LibvirtConnTestCase.test_get_guest_config_with_vnc` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6808–L6842` |
| `LibvirtConnTestCase.test_get_guest_config_with_vnc_and_tablet` | method | (self) | public | not declared | 1/33 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6844–L6879` |
| `LibvirtConnTestCase.test_get_guest_config_with_spice_and_tablet` | method | (self) | public | not declared | 1/38 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6881–L6921` |
| `LibvirtConnTestCase.test_get_guest_config_with_spice_and_agent` | method | (self) | public | not declared | 4/53 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6924–L6986` |
| `LibvirtConnTestCase.test_get_guest_config_with_spice_compression` | method | (self) | public | not declared | 1/41 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L6988–L7031` |
| `LibvirtConnTestCase.test_get_guest_config_with_spice_secure` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7033–L7067` |
| `LibvirtConnTestCase.test_create_serial_console_devices_based_on_arch` | method | (self, mock_get_port_number, mock_acquire_port, mock_ports, mock_guest) | public | not declared | 2/24 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7075–L7101` |
| `LibvirtConnTestCase.test_create_serial_console_devices_with_limit_exceeded_based_on_arch` | method | (self, mock_get_port_number, mock_ports, mock_guest) | public | not declared | 1/32 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7108–L7144` |
| `LibvirtConnTestCase.test_get_guest_config_serial_console` | method | (self, acquire_port) | public | not declared | 1/32 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7147–L7183` |
| `LibvirtConnTestCase.test_get_guest_config_serial_console_through_flavor` | method | (self) | public | not declared | 1/37 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7185–L7226` |
| `LibvirtConnTestCase.test_get_guest_config_serial_console_invalid_flavor` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7228–L7244` |
| `LibvirtConnTestCase.test_get_guest_config_serial_console_image_and_flavor` | method | (self) | public | not declared | 1/39 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7246–L7288` |
| `LibvirtConnTestCase.test_guest_config_char_device_logd` | method | (self, mock_get_number_serial_ports, mock_acquire_port, mock_host_has_min_version) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7294–L7330` |
| `LibvirtConnTestCase.test_guest_config_char_device_logd._test_consoles` | function | (arch_to_mock, serial_enabled, expected_device_type, expected_device_cls, virt_type='qemu') | private | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7300–L7325` |
| `LibvirtConnTestCase.test_get_guest_config_serial_console_through_port_rng_exhausted` | method | (self, acquire_port) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7333–L7350` |
| `LibvirtConnTestCase.test_serial_console_release_port` | method | (self, mock_get_serial_ports_from_guest, mock_get_guest, mock_get_info, mock_release_port) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7357–L7374` |
| `LibvirtConnTestCase.test_get_serial_ports_from_guest` | method | (self, mock_get_xml_desc) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7377–L7384` |
| `LibvirtConnTestCase.test_get_serial_ports_from_guest_bind_only` | method | (self, mock_get_xml_desc) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7387–L7392` |
| `LibvirtConnTestCase.test_get_serial_ports_from_guest_connect_only` | method | (self, mock_get_xml_desc) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7395–L7401` |
| `LibvirtConnTestCase.test_get_serial_ports_from_guest_on_s390` | method | (self, mock_get_xml_desc) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7404–L7412` |
| `LibvirtConnTestCase._test_get_serial_ports_from_guest` | method | (self, mode, mock_get_xml_desc, dev_name='serial') | private | `drvr._get_serial_ports_from_guest(guest, mode=mode)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L7438) | 1/23 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7414–L7438` |
| `LibvirtConnTestCase.test_get_scsi_controller_next_unit_from_guest` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7440–L7458` |
| `LibvirtConnTestCase.test_get_scsi_controller_next_unit_from_guest_no_scsi` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7460–L7473` |
| `LibvirtConnTestCase._test_get_scsi_controller_next_unit_from_guest` | method | (self, xml, expect_num, mock_get_xml_desc) | private | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7476–L7484` |
| `LibvirtConnTestCase.test_get_guest_config_with_type_kvm_on_s390` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7487–L7506` |
| `LibvirtConnTestCase._get_guest_config_via_fake_api` | method | (self, instance) | private | `drvr._get_guest_config(instance, [], image_meta, disk_info)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L7514) | 1/48 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7508–L7559` |
| `LibvirtConnTestCase.test_get_guest_config_with_watchdog_action_image_meta` | method | (self) | public | not declared | 1/33 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7561–L7597` |
| `LibvirtConnTestCase._test_guest_add_pointer_device` | method | (self, image_meta) | private | `drvr._guest_add_pointer_device(guest, image_meta)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L7604) | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7599–L7604` |
| `LibvirtConnTestCase.test_guest_add_pointer_device` | method | (self) | public | not declared | 1/30 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7606–L7652` |
| `LibvirtConnTestCase.test_guest_add_pointer_device__fail_with_spice_agent` | method | (self, mock_warn) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7655–L7671` |
| `LibvirtConnTestCase.test_guest_add_pointer_device__fail_with_non_hvm` | method | (self, mock_warn) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7674–L7689` |
| `LibvirtConnTestCase._test_guest_add_keyboard_device` | method | (self, image_meta, arch=None) | private | `drvr._guest_add_keyboard_device(guest, image_meta)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L7700) | 2/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7691–L7700` |
| `LibvirtConnTestCase.test_guest_add_keyboard_device` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7702–L7731` |
| `LibvirtConnTestCase.test_get_guest_config_with_watchdog_action_flavor` | method | (self) | public | not declared | 1/33 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7733–L7771` |
| `LibvirtConnTestCase.test_get_guest_config_with_watchdog_overrides_flavor` | method | (self) | public | not declared | 1/35 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7773–L7812` |
| `LibvirtConnTestCase.test_get_guest_config_with_video_driver_image_meta` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7814–L7848` |
| `LibvirtConnTestCase.test_get_guest_config_with_qga_through_image_meta` | method | (self) | public | not declared | 1/36 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7850–L7888` |
| `LibvirtConnTestCase.test_get_guest_config_with_vtpm` | method | (self) | public | not declared | 1/41 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7890–L7933` |
| `LibvirtConnTestCase.test_get_guest_config_with_sound_model` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7935–L7970` |
| `LibvirtConnTestCase.test_get_guest_config_with_video_driver_vram` | method | (self) | public | not declared | 1/40 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L7972–L8015` |
| `LibvirtConnTestCase._test_add_video_driver` | method | (self, model) | private | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8017–L8038` |
| `LibvirtConnTestCase.test__add_video_driver` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8040–L8041` |
| `LibvirtConnTestCase.test__video_model_supported` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8043–L8049` |
| `LibvirtConnTestCase.test__add_video_driver_gop` | method | (self, _supports_gop_video) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8052–L8057` |
| `LibvirtConnTestCase.test__add_video_driver_none` | method | (self, _supports_none_video) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8060–L8065` |
| `LibvirtConnTestCase.test_create_guest_with_network__unmount_fs_if_error_during_lxc_create` | method | (self, mock_get_inst_path, mock_ensure_tree, mock_setup_container, mock_get_info, mock_teardown) | public | not declared | 1/29 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8072–L8105` |
| `LibvirtConnTestCase.test_video_driver_flavor_limit_not_set` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8107–L8130` |
| `LibvirtConnTestCase.test_video_driver_ram_above_flavor_limit` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8132–L8156` |
| `LibvirtConnTestCase.test_get_guest_config_without_qga_through_image_meta` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8158–L8192` |
| `LibvirtConnTestCase.test_get_guest_config_with_rng_device` | method | (self) | public | not declared | 1/33 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8194–L8230` |
| `LibvirtConnTestCase.test_get_guest_config_with_rng_not_allowed` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8232–L8262` |
| `LibvirtConnTestCase.test_get_guest_config_with_rng_limits` | method | (self) | public | not declared | 1/35 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8264–L8302` |
| `LibvirtConnTestCase.test_get_guest_config_with_rng_backend` | method | (self, mock_path) | public | not declared | 1/39 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8305–L8347` |
| `LibvirtConnTestCase.test_get_guest_config_with_rng_dev_not_present` | method | (self, mock_path) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8350–L8371` |
| `LibvirtConnTestCase.test_get_guest_config_with_cpu_quota` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8373–L8391` |
| `LibvirtConnTestCase.test_get_guest_config_with_hiding_hypervisor_id` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8393–L8415` |
| `LibvirtConnTestCase.test_get_guest_config_with_hiding_hypervisor_id_flavor_extra_specs` | method | (self) | public | not declared | 2/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8417–L8440` |
| `LibvirtConnTestCase.test_get_guest_config_with_hiding_hypervisor_id_img_and_flavor` | method | (self) | public | not declared | 2/22 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8442–L8467` |
| `LibvirtConnTestCase.test_get_guest_config_with_hiding_hypervisor_id_img_or_flavor` | method | (self) | public | not declared | 3/39 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8469–L8517` |
| `LibvirtConnTestCase.test_get_guest_config_without_hiding_hypervisor_id` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8519–L8541` |
| `LibvirtConnTestCase.test_get_guest_config_without_hiding_hypervisor_id_flavor_extra_specs` | method | (self) | public | not declared | 2/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8543–L8565` |
| `LibvirtConnTestCase.test_get_guest_config_with_pmu` | method | (self) | public | not declared | 7/32 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8567–L8606` |
| `LibvirtConnTestCase.test_get_guest_config_with_pmu_unset` | method | (self) | public | not declared | 3/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8608–L8627` |
| `LibvirtConnTestCase.test_get_guest_config_with_pmu_non_qemu_kvm` | method | (self) | public | not declared | 4/29 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8629–L8664` |
| `LibvirtConnTestCase._test_get_guest_config_disk_cachemodes` | method | (self, images_type) | private | not declared | 6/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8666–L8689` |
| `LibvirtConnTestCase.test_get_guest_config_disk_cachemodes_file` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8691–L8693` |
| `LibvirtConnTestCase.test_get_guest_config_disk_cachemodes_block` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8695–L8698` |
| `LibvirtConnTestCase.test_get_guest_config_disk_cachemodes_network` | method | (self, mock_get_mon_addrs, mock_rados, mock_rbd) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8704–L8707` |
| `LibvirtConnTestCase.test_get_guest_config_with_bogus_cpu_quota` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8709–L8725` |
| `LibvirtConnTestCase.test_get_update_guest_cputune` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8727–L8737` |
| `LibvirtConnTestCase._create_fake_service_compute` | method | (self) | private | `(service_ref, compute_ref)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L8766) | 1/27 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8739–L8766` |
| `LibvirtConnTestCase._setup_instance_and_pci_device` | method | (self, compute_ref, pci_address, managed=None) | private | `instance, image_meta` (src/nova/tests/unit/virt/libvirt/test_driver.py:L8798) | 2/27 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8768–L8798` |
| `LibvirtConnTestCase._assert_pci_device_config` | method | (self, cfg, expected_managed, expected_function) | private | not declared | 4/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8800–L8818` |
| `LibvirtConnTestCase._test_get_guest_config_with_pci` | method | (self, pci_address, managed, expected_managed, expected_function) | private | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8820–L8835` |
| `LibvirtConnTestCase.test_get_guest_config_with_pci_passthrough_kvm` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8837–L8838` |
| `LibvirtConnTestCase.test_get_guest_config_with_pci_passthrough_kvm_managed_yes` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8840–L8842` |
| `LibvirtConnTestCase.test_get_guest_config_with_pci_passthrough_kvm_managed_no` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8844–L8846` |
| `LibvirtConnTestCase.test_log_in_set_managed_node` | method | (self, mock_log) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8849–L8865` |
| `LibvirtConnTestCase.test_log_in_set_managed_node.PciDevice` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8854–L8855` |
| `LibvirtConnTestCase.test_get_guest_config_os_command_line_through_image_meta` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8867–L8888` |
| `LibvirtConnTestCase.test_get_guest_config_os_command_line_without_kernel_id` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8890–L8908` |
| `LibvirtConnTestCase.test_get_guest_config_os_command_empty` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8910–L8933` |
| `LibvirtConnTestCase.test_get_guest_config_armv7` | method | (self, mock_numa, mock_storage) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8938–L8954` |
| `LibvirtConnTestCase.test_get_guest_config_aarch64` | method | (self, mock_numa, mock_storage) | public | not declared | 5/26 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8959–L8990` |
| `LibvirtConnTestCase.test_get_guest_config_aarch64_with_graphics` | method | (self, mock_numa, mock_storage) | public | not declared | 6/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L8995–L9016` |
| `LibvirtConnTestCase._get_guest_config_machine_type_through_image_meta` | method | (self, mach_type) | private | `drvr._get_guest_config( instance_ref, _fake_network_info(self), image_meta, disk_info)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L9031) | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9018–L9032` |
| `LibvirtConnTestCase.test_get_guest_config_machine_type_through_image_meta` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9035–L9038` |
| `LibvirtConnTestCase.test_get_guest_config_machine_type_through_image_meta_sev` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9041–L9045` |
| `LibvirtConnTestCase.test_get_guest_config_machine_type_from_config` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9048–L9151` |
| `LibvirtConnTestCase.test_get_guest_config_machine_type_from_config.fake_getCapabilities` | function | — | public | `""" <capabilities> <host> <uuid>cef19ce0-0ca2-11df-855d-b19fbce37686</uuid> <cpu> <arch>x86_64</arch> <model>Penryn</model> <vendor>Intel</vendor> <topology sockets='1' cores='2' threads='1'/> <featur` (src/nova/tests/unit/virt/libvirt/test_driver.py:L9054) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9053–L9067` |
| `LibvirtConnTestCase.test_get_guest_config_machine_type_from_config.fake_baselineCPU` | function | (cpu, flag) | public | `"""<cpu mode='custom' match='exact'> <model fallback='allow'>Penryn</model> <vendor>Intel</vendor> <feature policy='require' name='xtpr'/> </cpu> """` (src/nova/tests/unit/virt/libvirt/test_driver.py:L9070) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9069–L9075` |
| `LibvirtConnTestCase.test_get_guest_config_machine_type_from_config.fake_getCPUModelNames` | function | (arch) | public | `[ '486', 'pentium', 'pentium2', 'pentium3', 'pentiumpro', 'coreduo', 'n270', 'core2duo', 'qemu32', 'kvm32', 'cpu64-rhel5', 'cpu64-rhel6', 'qemu64', 'kvm64', 'Conroe', 'Penryn', 'Nehalem', 'Nehalem-IBR` (src/nova/tests/unit/virt/libvirt/test_driver.py:L9078) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9077–L9126` |
| `LibvirtConnTestCase.test_get_guest_config_machine_type_from_config.fake_getCPUMap` | function | — | public | `(2, [True, True], 2)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L9129) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9128–L9129` |
| `LibvirtConnTestCase._test_get_guest_config_ppc64` | method | (self, device_index) | private | not declared | 2/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9153–L9174` |
| `LibvirtConnTestCase.test_get_guest_config_ppc64_through_image_meta_vnc_enabled` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9177–L9179` |
| `LibvirtConnTestCase.test_get_guest_config_ppc64_through_image_meta_spice_enabled` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9182–L9187` |
| `LibvirtConnTestCase._test_get_guest_config_bootmenu` | method | (self, image_meta, extra_specs) | private | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9189–L9197` |
| `LibvirtConnTestCase.test_get_guest_config_bootmenu_via_image_meta` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9199–L9203` |
| `LibvirtConnTestCase.test_get_guest_config_bootmenu_via_extra_specs` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9205–L9209` |
| `LibvirtConnTestCase.test_get_guest_cpu_config_none` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9211–L9229` |
| `LibvirtConnTestCase.test_get_guest_cpu_config_default_kvm` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9231–L9252` |
| `LibvirtConnTestCase.test_get_guest_cpu_config_default_lxc` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9254–L9269` |
| `LibvirtConnTestCase.test_get_guest_cpu_config_automatic` | method | (self) | public | not declared | 2/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9272–L9294` |
| `LibvirtConnTestCase.test_get_guest_cpu_config_manual` | method | (self) | public | not declared | 2/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9296–L9313` |
| `LibvirtConnTestCase.test_get_guest_cpu_config_custom` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9315–L9334` |
| `LibvirtConnTestCase.test_get_guest_cpu_config_qemu_custom_aarch64` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9336–L9350` |
| `LibvirtConnTestCase.test_get_x86_64_hw_emulated_architecture_aarch64` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9352–L9364` |
| `LibvirtConnTestCase.test_get_x86_64_hw_emulated_architecture_ppc64` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9366–L9377` |
| `LibvirtConnTestCase.test_get_guest_cpu_config_custom_with_extra_flags` | method | (self, mock_warn) | public | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9380–L9404` |
| `LibvirtConnTestCase.test_get_guest_cpu_config_custom_with_extra_flags_upper_case` | method | (self, mock_warn) | public | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9407–L9433` |
| `LibvirtConnTestCase.test_get_guest_cpu_config_custom_with_multiple_extra_flags` | method | (self, mock_warn) | public | not declared | 2/26 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9436–L9462` |
| `LibvirtConnTestCase.test_get_guest_cpu_config_custom_flags_enabled_and_disabled` | method | (self, mock_warn) | public | not declared | 2/34 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9465–L9499` |
| `LibvirtConnTestCase.test_get_guest_cpu_config_custom_upper_cpu_model` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9501–L9519` |
| `LibvirtConnTestCase.test_get_guest_cpu_config_custom_without_traits` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9521–L9539` |
| `LibvirtConnTestCase.test_get_guest_cpu_config_custom_with_traits` | method | (self, mocked_baseline) | public | not declared | 1/26 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9542–L9570` |
| `LibvirtConnTestCase.test_get_guest_cpu_config_custom_with_traits_multi_models` | method | (self, mocked_baseline) | public | not declared | 1/27 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9573–L9602` |
| `LibvirtConnTestCase.test_get_guest_cpu_config_custom_with_traits_none_model` | method | (self, mocked_baseline) | public | not declared | 1/25 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9605–L9632` |
| `LibvirtConnTestCase.test_get_guest_cpu_config_custom_with_progressive_model` | method | (self, mocked_baseline) | public | not declared | 1/34 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9635–L9681` |
| `LibvirtConnTestCase.test_get_guest_cpu_config_host_model_with_extra_flags` | method | (self, mock_warn) | public | not declared | 2/23 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9684–L9709` |
| `LibvirtConnTestCase.test_get_guest_cpu_config_host_passthrough_with_extra_flags` | method | (self) | public | not declared | 2/23 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9711–L9737` |
| `LibvirtConnTestCase.test_get_guest_cpu_config_maxphysaddr_passthrough_flavor_espec` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9739–L9756` |
| `LibvirtConnTestCase.test_get_guest_cpu_config_maxphysaddr_emulate_flavor_espec` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9758–L9776` |
| `LibvirtConnTestCase.test_get_guest_cpu_config_maxphysaddr_passthrough_image_meta` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9778–L9796` |
| `LibvirtConnTestCase.test_get_guest_cpu_config_maxphysaddr_emulate_image_meta` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9798–L9817` |
| `LibvirtConnTestCase.test_get_guest_cpu_topology` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9819–L9838` |
| `LibvirtConnTestCase.test_get_guest_iommu_not_enabled` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9840–L9853` |
| `LibvirtConnTestCase.test_get_guest_iommu_config_model` | method | (self) | public | not declared | 3/31 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9855–L9888` |
| `LibvirtConnTestCase.test_get_guest_iommu_config_model_auto` | method | (self, has_min_version) | public | not declared | 3/31 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9891–L9924` |
| `LibvirtConnTestCase.test_get_guest_iommu_config_model_auto_intel` | method | (self, has_min_version) | public | not declared | 3/30 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9927–L9959` |
| `LibvirtConnTestCase.test_get_guest_iommu_config_model_auto_aarch64` | method | (self, has_min_version) | public | not declared | 3/32 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9962–L9995` |
| `LibvirtConnTestCase.test_get_guest_iommu_config_not_support_machine_type` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L9997–L10016` |
| `LibvirtConnTestCase.test_get_guest_iommu_config_not_support_architecture` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10018–L10038` |
| `LibvirtConnTestCase.test_get_guest_memory_balloon_config_by_default` | method | (self) | public | not declared | 3/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10040–L10055` |
| `LibvirtConnTestCase.test_get_guest_memory_balloon_config_disable` | method | (self) | public | not declared | 3/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10057–L10074` |
| `LibvirtConnTestCase.test_get_guest_memory_balloon_config_period_value` | method | (self) | public | not declared | 3/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10076–L10092` |
| `LibvirtConnTestCase.test_get_guest_memory_balloon_config_qemu` | method | (self) | public | not declared | 3/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10094–L10110` |
| `LibvirtConnTestCase.test_get_guest_memory_balloon_config_lxc` | method | (self) | public | not declared | 3/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10112–L10128` |
| `LibvirtConnTestCase.test_get_guest_usb_controller` | method | (self) | public | not declared | 9/45 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10131–L10194` |
| `LibvirtConnTestCase.test_get_supported_perf_events` | method | (self, mock_log) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10200–L10208` |
| `LibvirtConnTestCase.test_xml_and_uri_no_ramdisk_no_kernel` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10210–L10213` |
| `LibvirtConnTestCase.test_xml_and_uri_no_ramdisk` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10215–L10219` |
| `LibvirtConnTestCase.test_xml_and_uri_no_kernel` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10221–L10225` |
| `LibvirtConnTestCase.test_xml_and_uri` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10227–L10232` |
| `LibvirtConnTestCase.test_xml_and_uri_rescue` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10234–L10239` |
| `LibvirtConnTestCase.test_xml_and_uri_rescue_no_kernel_no_ramdisk` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10241–L10244` |
| `LibvirtConnTestCase.test_xml_and_uri_rescue_no_kernel` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10246–L10250` |
| `LibvirtConnTestCase.test_xml_and_uri_rescue_no_ramdisk` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10252–L10256` |
| `LibvirtConnTestCase.test_xml_uuid` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10258–L10259` |
| `LibvirtConnTestCase.test_lxc_container_and_uri` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10261–L10263` |
| `LibvirtConnTestCase.test_xml_disk_prefix` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10265–L10267` |
| `LibvirtConnTestCase.test_xml_user_specified_disk_prefix` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10269–L10271` |
| `LibvirtConnTestCase.test_xml_disk_driver` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10273–L10275` |
| `LibvirtConnTestCase.test_xml_disk_bus_virtio` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10277–L10281` |
| `LibvirtConnTestCase.test_xml_disk_bus_ide` | method | (self) | public | not declared | 2/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10284–L10303` |
| `LibvirtConnTestCase.test_xml_disk_bus_sata` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10305–L10317` |
| `LibvirtConnTestCase.test_xml_disk_bus_ide_and_virtio` | method | (self) | public | not declared | 2/33 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10320–L10355` |
| `LibvirtConnTestCase.test_instance_exists` | method | (self, mock_get_guest) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10358–L10367` |
| `LibvirtConnTestCase.test_list_instances` | method | (self, mock_list) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10370–L10384` |
| `LibvirtConnTestCase.test_list_instance_uuids` | method | (self, mock_list) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10387–L10401` |
| `LibvirtConnTestCase.test_get_pcpu_available` | method | (self, get_online_cpus) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10405–L10414` |
| `LibvirtConnTestCase.test_get_pcpu_available__cpu_dedicated_set_unset` | method | (self, get_online_cpus) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10418–L10428` |
| `LibvirtConnTestCase.test_get_pcpu_available__cpu_dedicated_set_invalid` | method | (self, get_online_cpus) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10432–L10441` |
| `LibvirtConnTestCase.test_get_pcpu_available_for_power_mgmt` | method | (self, get_available_cpus) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10445–L10455` |
| `LibvirtConnTestCase.test_get_pcpu_available__cpu_dedicated_set_invalid_for_pm` | method | (self, get_available_cpus) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10459–L10469` |
| `LibvirtConnTestCase.test_get_vcpu_available` | method | (self, get_online_cpus) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10473–L10482` |
| `LibvirtConnTestCase.test_get_vcpu_available__with_cpu_shared_set` | method | (self, get_online_cpus) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10486–L10495` |
| `LibvirtConnTestCase.test_get_vcpu_available__with_vcpu_pin_set` | method | (self, get_online_cpus) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10499–L10508` |
| `LibvirtConnTestCase.test_get_vcpu_available__with_cpu_dedicated_set` | method | (self, get_online_cpus) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10512–L10521` |
| `LibvirtConnTestCase.test_get_vcpu_available__cpu_shared_set_invalid` | method | (self, get_online_cpus) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10525–L10533` |
| `LibvirtConnTestCase.test_get_vcpu_available__vcpu_pin_set_invalid` | method | (self, get_online_cpus) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10537–L10545` |
| `LibvirtConnTestCase.test_quiesce` | method | (self, mock_has_min_version) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10548–L10556` |
| `LibvirtConnTestCase.test_unquiesce` | method | (self, mock_has_min_version) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10559–L10569` |
| `LibvirtConnTestCase.test_set_quiesced_agent_connection_fails` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10571–L10589` |
| `LibvirtConnTestCase.test_create_snapshot_metadata` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10591–L10630` |
| `LibvirtConnTestCase.test_get_volume_driver` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10632–L10639` |
| `LibvirtConnTestCase.test_get_volume_driver_unknown` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10641–L10650` |
| `LibvirtConnTestCase._fake_libvirt_config_guest_disk` | method | (self) | private | `fake_config` (src/nova/tests/unit/virt/libvirt/test_driver.py:L10664) | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10652–L10664` |
| `LibvirtConnTestCase.test_get_volume_config` | method | (self, mock_set_cache_mode, mock_get_config) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10668–L10688` |
| `LibvirtConnTestCase.test_connect_volume_encryption_success` | method | (self, mock_attach_encryptor, mock_get_volume_driver) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10692–L10716` |
| `LibvirtConnTestCase.test_connect_volume_encryption_fail` | method | (self, mock_attach_encryptor, mock_get_volume_driver) | public | not declared | 1/25 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10720–L10748` |
| `LibvirtConnTestCase.test_connect_volume_luks` | method | (self, mock_is_volume_luks, mock_host, mock_get_volume_encryptor, mock_allow_native_luksv1, mock_get_volume_encryption, mock_get_key_mgr) | public | not declared | 1/43 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10756–L10815` |
| `LibvirtConnTestCase.test_disconnect_volume_luks` | method | (self, mock_get_volume_encryptor) | public | not declared | 1/34 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10818–L10861` |
| `LibvirtConnTestCase.test_disconnect_multiattach_single_connection` | method | (self, mock_volume_get, mock_get_volume_driver, mock_get_instances, mock_detach_encryptor) | public | not declared | 1/31 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10867–L10902` |
| `LibvirtConnTestCase.test_disconnect_multiattach_multi_connection` | method | (self, mock_volume_get, mock_get_volume_driver, mock_get_instances, mock_detach_encryptor) | public | not declared | 1/31 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10908–L10943` |
| `LibvirtConnTestCase.test_attach_invalid_volume_type` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10945–L10955` |
| `LibvirtConnTestCase.test_attach_blockio_invalid_hypervisor` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10957–L10971` |
| `LibvirtConnTestCase._test_check_discard` | method | (self, mock_log, driver_discard=None, bus=None, should_log=False) | private | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10973–L10981` |
| `LibvirtConnTestCase.test_check_discard_for_attach_volume_no_unmap` | method | (self, mock_log) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10984–L10986` |
| `LibvirtConnTestCase.test_check_discard_for_attach_volume_blk_controller` | method | (self, mock_log) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10989–L10991` |
| `LibvirtConnTestCase.test_check_discard_for_attach_volume_valid_controller` | method | (self, mock_log) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10994–L10996` |
| `LibvirtConnTestCase.test_check_discard_for_attach_volume_blk_controller_no_unmap` | method | (self, mock_log) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L10999–L11002` |
| `LibvirtConnTestCase.test_attach_volume_with_exception` | method | (self, mock_get_info) | public | not declared | 1/38 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11005–L11045` |
| `LibvirtConnTestCase.test_attach_volume_with_vir_domain_affect_live_flag` | method | (self, mock_get_domain, mock_get_info, get_image) | public | not declared | 2/51 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11050–L11104` |
| `LibvirtConnTestCase.test_detach_volume_with_vir_domain_affect_live_flag` | method | (self, mock_get_domain, use_alias=True) | public | not declared | 4/69 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11107–L11193` |
| `LibvirtConnTestCase.test_detach_volume_with_vir_domain_affect_live_flag_legacy` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11195–L11197` |
| `LibvirtConnTestCase.test_detach_volume_disk_not_found` | method | (self, mock_get_domain, mock_disconnect_volume) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11201–L11224` |
| `LibvirtConnTestCase.test_detach_volume_disk_not_found_encryption` | method | (self, mock_get_domain, mock_disconnect_volume, mock_get_encryptor) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11229–L11253` |
| `LibvirtConnTestCase.test_detach_volume_order_with_encryptors` | method | (self, mock_get_guest, mock_get_encryptor, mock_get_volume_driver, mock_detach_with_retry) | public | not declared | 1/47 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11260–L11312` |
| `LibvirtConnTestCase.test_extend_volume` | method | (self) | public | not declared | 2/28 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11314–L11346` |
| `LibvirtConnTestCase.test_extend_volume_with_volume_driver_without_support` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11348–L11365` |
| `LibvirtConnTestCase.test_extend_volume_with_new_size_none` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11367–L11387` |
| `LibvirtConnTestCase.test_extend_volume_disk_not_found` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11389–L11409` |
| `LibvirtConnTestCase.test_extend_volume_with_instance_not_found` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11411–L11432` |
| `LibvirtConnTestCase.test_extend_volume_with_libvirt_error` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11434–L11462` |
| `LibvirtConnTestCase.test_extend_volume_with_no_device_path_attribute` | method | (self) | public | not declared | 2/34 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11464–L11501` |
| `LibvirtConnTestCase.test_extend_volume_no_disk_found_by_serial` | method | (self) | public | not declared | 1/35 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11503–L11540` |
| `LibvirtConnTestCase.test_extend_volume_luksv1_unknown_path` | method | (self, mock_get_encryption_metadata) | public | not declared | 1/29 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11543–L11580` |
| `LibvirtConnTestCase.test_extend_volume_luksv1_DiskNotFound` | method | (self, mock_qemu_img_info, mock_get_encryption_metadata) | public | not declared | 1/28 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11584–L11620` |
| `LibvirtConnTestCase.test_extend_volume_luksv1_block` | method | (self, mock_qemu_img_info, mock_get_encryption_metadata) | public | not declared | 1/35 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11624–L11673` |
| `LibvirtConnTestCase.test_extend_volume_luksv1_rbd` | method | (self, mock_qemu_img_info, mock_get_encryption_metadata) | public | not declared | 1/45 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11677–L11735` |
| `LibvirtConnTestCase.test_extend_volume_os_brick_block` | method | (self, mock_get_encryption_metadata, mock_get_encryptor) | public | not declared | 1/34 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11739–L11790` |
| `LibvirtConnTestCase.test_use_encryptor_connection_info_incomplete` | method | (self, mock_get_encryptor, mock_get_metadata) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11794–L11804` |
| `LibvirtConnTestCase.test_attach_encryptor_unencrypted_volume_meta_missing` | method | (self, mock_get_encryptor, mock_get_metadata) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11808–L11823` |
| `LibvirtConnTestCase.test_attach_encryptor_unencrypted_volume_meta_provided` | method | (self, mock_get_encryptor, mock_get_metadata) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11827–L11840` |
| `LibvirtConnTestCase.test_attach_encryptor_encrypted_volume_meta_missing` | method | (self, mock_get_encryptor, mock_get_metadata) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11844–L11864` |
| `LibvirtConnTestCase.test_attach_encryptor_encrypted_volume_meta_provided` | method | (self, mock_get_encryptor, mock_get_metadata) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11868–L11887` |
| `LibvirtConnTestCase.test_attach_encryptor_encrypted_native_luks_serial` | method | (self, mock_get_encryptor, mock_get_metadata, mock_get_key_mgr) | public | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11892–L11922` |
| `LibvirtConnTestCase.test_attach_encryptor_secret_exists` | method | (self, mock_key_manager_api) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11925–L11937` |
| `LibvirtConnTestCase.test_detach_encryptor_connection_info_incomplete` | method | (self, mock_get_encryptor, mock_get_metadata) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11941–L11951` |
| `LibvirtConnTestCase.test_detach_encryptor_unencrypted_volume_meta_missing` | method | (self, mock_get_encryptor, mock_get_metadata) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11955–L11970` |
| `LibvirtConnTestCase.test_detach_encryptor_unencrypted_volume_meta_provided` | method | (self, mock_get_encryptor, mock_get_metadata) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11974–L11987` |
| `LibvirtConnTestCase.test_detach_encryptor_encrypted_volume_meta_missing` | method | (self, mock_get_encryptor, mock_get_metadata) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L11991–L12015` |
| `LibvirtConnTestCase.test_detach_encryptor_encrypted_volume_meta_provided` | method | (self, mock_get_encryptor, mock_get_metadata) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12019–L12044` |
| `LibvirtConnTestCase.test_detach_encryptor_native_luks_device_path_secret_missing` | method | (self, mock_get_encryptor, mock_find_secret) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12048–L12064` |
| `LibvirtConnTestCase.test_detach_encryptor_skip_secret_removal` | method | (self, mock_delete_secret) | public | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12068–L12094` |
| `LibvirtConnTestCase.test_allow_native_luksv1` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12096–L12111` |
| `LibvirtConnTestCase.test_multi_nic` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12113–L12127` |
| `LibvirtConnTestCase._check_xml_and_container` | method | (self, instance) | private | not declared | 2/26 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12129–L12161` |
| `LibvirtConnTestCase._check_xml_and_disk_prefix` | method | (self, instance, prefix) | private | not declared | 4/32 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12163–L12203` |
| `LibvirtConnTestCase._check_xml_and_disk_prefix._get_prefix` | function | (p, default) | private | `p + 'a'` (src/nova/tests/unit/virt/libvirt/test_driver.py:L12169); `default` (src/nova/tests/unit/virt/libvirt/test_driver.py:L12170) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12167–L12170` |
| `LibvirtConnTestCase._check_xml_and_disk_driver` | method | (self, image_meta) | private | not declared | 3/32 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12205–L12254` |
| `LibvirtConnTestCase._check_xml_and_disk_driver.os_open_stub` | function | (path, flags, *args, **kwargs) | public | `os_open(path, flags, *args, **kwargs)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L12215) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12209–L12215` |
| `LibvirtConnTestCase._check_xml_and_disk_driver.connection_supports_direct_io_stub` | function | (dirpath) | public | `directio_supported` (src/nova/tests/unit/virt/libvirt/test_driver.py:L12220) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12219–L12220` |
| `LibvirtConnTestCase._check_xml_and_disk_bus` | method | (self, image_meta, block_device_info, wantConfig) | private | not declared | 2/25 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12256–L12285` |
| `LibvirtConnTestCase._check_xml_and_uuid` | method | (self, image_meta) | private | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12287–L12300` |
| `LibvirtConnTestCase._check_xml_and_uri` | method | (self, instance, mock_serial, expect_ramdisk=False, expect_kernel=False, rescue=None) | private | not declared | 16/135 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12304–L12468` |
| `LibvirtConnTestCase.test_check_can_live_migrate_dest_all_pass_with_block_migration` | method | (self, mock_cpu, mock_test_file) | public | not declared | 1/27 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12476–L12508` |
| `LibvirtConnTestCase.test_check_can_live_migrate_dest_all_pass_with_over_commit` | method | (self, mock_cpu, mock_test_file) | public | not declared | 1/28 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12516–L12549` |
| `LibvirtConnTestCase.test_check_can_live_migrate_dest_all_pass_no_block_migration` | method | (self, mock_cpu, mock_test_file) | public | not declared | 1/27 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12557–L12587` |
| `LibvirtConnTestCase.test_check_can_live_migrate_dest_fills_listen_addrs` | method | (self, mock_cpu, mock_test_file) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12596–L12619` |
| `LibvirtConnTestCase.test_check_can_live_migrate_dest_ensure_serial_adds_not_set` | method | (self, mock_cpu, mock_test_file) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12629–L12640` |
| `LibvirtConnTestCase.test_check_can_live_migrate_guest_cpu_none_model` | method | (self, mock_cpu, mock_test_file) | public | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12649–L12674` |
| `LibvirtConnTestCase.test_check_can_live_migrate_guest_cpu_none_model_skip_compare` | method | (self, mock_cpu, mock_test_file) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12683–L12693` |
| `LibvirtConnTestCase.test_check_can_live_migrate_dest_numa_lm` | method | (self, mock_cpu, mock_test_file) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12702–L12712` |
| `LibvirtConnTestCase.test_check_can_live_migrate_dest_numa_lm_no_instance_numa` | method | (self, mock_cpu, mock_test_file) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12721–L12729` |
| `LibvirtConnTestCase.test_check_can_live_migrate_dest_mdev_lm` | method | (self, mock_cpu, mock_test_file, mock_can_sup_mdev_lm) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12740–L12751` |
| `LibvirtConnTestCase.test_check_can_live_migrate_dest_mdev_lm_no_host_support` | method | (self, mock_cpu, mock_test_file, mock_can_sup_mdev_lm) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12762–L12773` |
| `LibvirtConnTestCase.test_check_can_live_migrate_dest_no_instance_cpu_info` | method | (self, mock_cpu, mock_test_file) | public | not declared | 1/30 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12781–L12815` |
| `LibvirtConnTestCase.test_check_can_live_migrate_dest_file_backed` | method | (self, mock_cpu, mock_test_file) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12823–L12846` |
| `LibvirtConnTestCase.test_check_can_live_migrate_dest_incompatible_cpu_raises` | method | (self, mock_cpu) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12849–L12860` |
| `LibvirtConnTestCase.test_check_can_live_migrate_dest_create_dummy_vif` | method | (self, mock_cpu, mock_test_file) | public | not declared | 2/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12870–L12882` |
| `LibvirtConnTestCase.test_check_source_migrate_data_at_dest_no_src_mdevs` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12884–L12897` |
| `LibvirtConnTestCase.test_check_source_migrate_data_at_dest_types_not_supported` | method | (self, mock_get) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12901–L12919` |
| `LibvirtConnTestCase.test_check_source_migrate_data_at_dest_types_missing_mdevs` | method | (self, mock_get, mock_alloc, mock_gmtfu) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12927–L12952` |
| `LibvirtConnTestCase.test_check_source_migrate_data_at_dest_types_claim_mdevs` | method | (self, mock_get, mock_alloc, mock_gmtfu) | public | not declared | 1/27 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12960–L12986` |
| `LibvirtConnTestCase._test_host_can_support_mdev_lm` | method | (self, mock_getversion, mock_getlibversion, old_libvirt, old_qemu, expected) | private | not declared | 3/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L12990–L13005` |
| `LibvirtConnTestCase.test_host_can_support_mdev_lm` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13007–L13009` |
| `LibvirtConnTestCase.test_host_can_support_mdev_lm_old_libvirt` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13011–L13013` |
| `LibvirtConnTestCase.test_host_can_support_mdev_lm_old_qemu` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13015–L13017` |
| `LibvirtConnTestCase.test_host_can_support_mdev_lm_both_old` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13019–L13021` |
| `LibvirtConnTestCase.test_compare_cpu_compatible_host_cpu` | method | (self, mock_vconfig, mock_compare) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13025–L13031` |
| `LibvirtConnTestCase.test_compare_cpu_handles_not_supported_error_gracefully` | method | (self, mock_vconfig, mock_compare) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13035–L13048` |
| `LibvirtConnTestCase.test_compare_cpu_host_aarch64` | method | (self, mock_compare, mock_caps) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13052–L13071` |
| `LibvirtConnTestCase.test_compare_cpu_compatible_guest_cpu` | method | (self, mock_vcpu_to_cpu, mock_compare) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13076–L13083` |
| `LibvirtConnTestCase.test_compare_cpu_virt_type_qemu` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13085–L13090` |
| `LibvirtConnTestCase.test_compare_cpu_invalid_cpuinfo_raises` | method | (self, mock_vconfig, mock_compare) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13094–L13102` |
| `LibvirtConnTestCase.test_compare_cpu_incompatible_cpu_raises` | method | (self, mock_vconfig, mock_compare) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13106–L13114` |
| `LibvirtConnTestCase.test_check_can_live_migrate_dest_cleanup_works_correctly` | method | (self, mock_clean) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13118–L13130` |
| `LibvirtConnTestCase.test_check_shared_storage_test_file_exists` | method | (self, mock_utime, mock_path_exists) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13134–L13141` |
| `LibvirtConnTestCase.test_check_shared_storage_test_file_does_not_exist` | method | (self, mock_utime, mock_path_exists) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13145–L13152` |
| `LibvirtConnTestCase._test_can_live_migrate_source` | method | (self, mock_is_shared, mock_check_shared, mock_get_all_assigned_mdevs, mock_assert_src_can_lv_mdevs, mock_get_types, block_migration=False, is_shared_block_storage=False, is_shared_instance_path=False, disk_available_mb=1024, exception=None, numa_lm=True, instance_mdevs=False, assert_can_lv_mdevs=True) | private | `(instance, dest_check_data)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L13215); `(instance, dest_check_data)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L13236) | 12/64 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13164–L13236` |
| `LibvirtConnTestCase.test_check_can_live_migrate_source_block_migration` | method | (self, mock_assert_dest) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13240–L13246` |
| `LibvirtConnTestCase.test_check_can_live_migrate_source_numa_lm` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13248–L13252` |
| `LibvirtConnTestCase.test_check_can_live_migrate_source_shared_block_storage` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13254–L13255` |
| `LibvirtConnTestCase.test_check_can_live_migrate_source_shared_instance_path` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13257–L13258` |
| `LibvirtConnTestCase.test_check_can_live_migrate_source_non_shared_fails` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13260–L13262` |
| `LibvirtConnTestCase.test_check_can_live_migrate_source_shared_block_migration_fails` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13264–L13267` |
| `LibvirtConnTestCase.test_check_can_live_migrate_shared_path_block_migration_fails` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13269–L13272` |
| `LibvirtConnTestCase.test_check_can_live_migrate_non_shared_non_block_migration_fails` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13274–L13276` |
| `LibvirtConnTestCase.test_check_can_live_migrate_source_with_dest_not_enough_disk` | method | (self, mock_get_bdi) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13280–L13286` |
| `LibvirtConnTestCase.test_check_can_live_migrate_source_mdev_lm` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13288–L13291` |
| `LibvirtConnTestCase.test_check_can_live_migrate_source_mdev_lm_fails` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13293–L13299` |
| `LibvirtConnTestCase.test_assert_source_can_lv_mdevs_fails_due_to_src` | method | (self, mock_host) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13303–L13311` |
| `LibvirtConnTestCase.test_assert_source_can_lv_mdevs_fails_due_to_dest` | method | (self, mock_host) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13315–L13322` |
| `LibvirtConnTestCase.test_assert_source_can_lv_mdevs_works` | method | (self, mock_host) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13326–L13333` |
| `LibvirtConnTestCase.test_check_can_live_migrate_source_bm_with_bdm_tunnelled_error` | method | (self, mock_check, mock_shared_block, mock_enough, mock_min_version) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13342–L13361` |
| `LibvirtConnTestCase._test_check_can_live_migrate_source_block_migration_none` | method | (self, block_migrate, is_shared_instance_path, is_share_block, mock_check, mock_shared_block, mock_enough, mock_version) | private | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13370–L13385` |
| `LibvirtConnTestCase.test_check_can_live_migrate_source_block_migration_none_shared1` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13387–L13391` |
| `LibvirtConnTestCase.test_check_can_live_migrate_source_block_migration_none_shared2` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13393–L13397` |
| `LibvirtConnTestCase.test_check_can_live_migrate_source_block_migration_none_no_share` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13399–L13403` |
| `LibvirtConnTestCase.test_check_can_live_migration_source_disk_over_commit_none` | method | (self, mock_check, mock_shared_block, mock_disk_check) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13411–L13426` |
| `LibvirtConnTestCase.test_check_can_live_migrate_source_vtpm` | method | (self, security, mock_find) | public | not declared | 2/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13434–L13461` |
| `LibvirtConnTestCase.test_check_can_live_migrate_source_vtpm_legacy` | method | (self, mock_find) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13468–L13484` |
| `LibvirtConnTestCase.test_check_can_live_migrate_source_no_vtpm` | method | (self, mock_find) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13491–L13502` |
| `LibvirtConnTestCase._is_shared_block_storage_test_create_mocks` | method | (self, disks) | private | `(mock_stat, mock_get_size, mock_qemu_img_info, mock_lookup)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L13548) | 3/37 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13504–L13548` |
| `LibvirtConnTestCase._is_shared_block_storage_test_create_mocks.mock_lookup_side_effect` | function | (name) | public | `mock_virDomain` (src/nova/tests/unit/virt/libvirt/test_driver.py:L13537) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13536–L13537` |
| `LibvirtConnTestCase.test_is_shared_block_storage_rbd` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13550–L13562` |
| `LibvirtConnTestCase.test_is_shared_block_storage_lvm` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13564–L13579` |
| `LibvirtConnTestCase.test_is_shared_block_storage_qcow2` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13581–L13596` |
| `LibvirtConnTestCase.test_is_shared_block_storage_rbd_only_source` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13598–L13612` |
| `LibvirtConnTestCase.test_is_shared_block_storage_rbd_only_dest` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13614–L13628` |
| `LibvirtConnTestCase.test_is_shared_block_storage_volume_backed` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13630–L13647` |
| `LibvirtConnTestCase.test_is_shared_block_storage_volume_backed_with_disk` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13649–L13679` |
| `LibvirtConnTestCase.test_is_shared_block_storage_nfs` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13681–L13697` |
| `LibvirtConnTestCase.test_live_migration_update_graphics_xml` | method | (self, mock_xml, mock_migrateToURI3, mock_min_version, mock_metadata, mock_save) | public | not declared | 1/55 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13706–L13769` |
| `LibvirtConnTestCase.test_live_migration_parallels_no_new_xml` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13771–L13797` |
| `LibvirtConnTestCase.test_live_migration_parallels_no_migrate_disks` | method | (self, mock_copy_disk_paths, mock_monitor, mock_running, mock_guest, mock_thread) | public | not declared | 1/26 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13806–L13831` |
| `LibvirtConnTestCase.test_live_migration_update_volume_xml` | method | (self, mock_xml, mock_updated_guest_xml, mock_migrateToURI3) | public | not declared | 1/57 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13837–L13901` |
| `LibvirtConnTestCase.test_live_migration_update_vifs_xml` | method | (self) | public | not declared | 1/51 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13903–L13998` |
| `LibvirtConnTestCase.test_live_migration_update_vifs_xml.fake_get_updated_guest_xml` | function | (instance, guest, migrate_data, get_volume_config, get_vif_config=None, new_resources=None) | public | `fake_xml` (src/nova/tests/unit/virt/libvirt/test_driver.py:L13936) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13927–L13936` |
| `LibvirtConnTestCase.test_live_migration_update_vifs_xml._test_normal` | function | (migrate, has_min_version, get_updated_guest_xml, detach) | private | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13943–L13950` |
| `LibvirtConnTestCase.test_live_migration_update_vifs_xml._test_direct` | function | (migrate, has_min_version, get_updated_guest_xml, detach) | private | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13970–L13977` |
| `LibvirtConnTestCase.test_live_migration_update_vifs_xml._test_mix` | function | (migrate, has_min_version, get_updated_guest_xml, detach) | private | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L13990–L13996` |
| `LibvirtConnTestCase.test_live_migration_with_valid_target_connect_addr` | method | (self, mock_xml, mock_updated_guest_xml, mock_migrateToURI3, mock_min_version) | public | not declared | 1/50 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14005–L14061` |
| `LibvirtConnTestCase.test_update_volume_xml` | method | (self) | public | not declared | 1/60 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14063–L14127` |
| `LibvirtConnTestCase.test_live_migration_uri` | method | (self) | public | not declared | 4/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14129–L14152` |
| `LibvirtConnTestCase.test_live_migration_uri_ipv6` | method | (self) | public | not declared | 4/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14154–L14175` |
| `LibvirtConnTestCase.test_live_migration_uri_forced` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14177–L14185` |
| `LibvirtConnTestCase.test_live_migration_scheme` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14187–L14192` |
| `LibvirtConnTestCase.test_live_migration_scheme_does_not_override_uri` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14194–L14200` |
| `LibvirtConnTestCase.test_migrate_uri` | method | (self) | public | not declared | 3/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14202–L14213` |
| `LibvirtConnTestCase.test_migrate_uri_forced_live_migration_uri` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14215–L14223` |
| `LibvirtConnTestCase.test_migrate_uri_forced_live_migration_inboud_addr` | method | (self) | public | not declared | 2/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14225–L14237` |
| `LibvirtConnTestCase.test_migrate_uri_forced_live_migration_inboud_addr_ipv6` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14239–L14249` |
| `LibvirtConnTestCase.test_update_volume_xml_no_serial` | method | (self) | public | not declared | 1/72 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14251–L14327` |
| `LibvirtConnTestCase.test_update_volume_xml_no_connection_info` | method | (self) | public | not declared | 1/41 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14329–L14370` |
| `LibvirtConnTestCase.test_live_migration_update_serial_console_xml` | method | (self, mock_xml, mock_migrateToURI3, mock_get, mock_min_version) | public | not declared | 1/49 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14377–L14433` |
| `LibvirtConnTestCase.test_live_migration_fails_without_serial_console_address` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14435–L14460` |
| `LibvirtConnTestCase.test_live_migration_uses_migrateToURI3` | method | (self, mock_old_xml, mock_new_xml, mock_migrateToURI3, mock_min_version) | public | not declared | 1/30 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14468–L14503` |
| `LibvirtConnTestCase._test_live_migration_block_migration_flags` | method | (self, device_names, expected_flags, mock_old_xml, mock_min_version, mock_migrateToURI3) | private | not declared | 2/33 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14509–L14546` |
| `LibvirtConnTestCase.test_live_migration_block_migration_with_devices` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14548–L14557` |
| `LibvirtConnTestCase.test_live_migration_block_migration_all_filtered` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14559–L14567` |
| `LibvirtConnTestCase.test_block_live_migration_tunnelled_migrateToURI3` | method | (self, mock_old_xml, mock_new_xml, mock_migrateToURI3, mock_min_version) | public | not declared | 1/33 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14574–L14614` |
| `LibvirtConnTestCase.test_block_live_parallel_connections` | method | (self, mock_old_xml, mock_new_xml, mock_migrateToURI3, mock_min_version) | public | not declared | 1/37 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14621–L14662` |
| `LibvirtConnTestCase.test_live_migration_paused_instance_postcopy` | method | (self, mock_new_xml, mock_migrateToURI3, mock_min_version) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14668–L14689` |
| `LibvirtConnTestCase.test_block_live_migration_native_tls` | method | (self, mock_old_xml, mock_new_xml, mock_migrateToURI3, mock_min_version) | public | not declared | 1/35 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14696–L14735` |
| `LibvirtConnTestCase.test_live_migration_raises_exception` | method | (self, mock_xml, mock_migrateToURI3, mock_min_version) | public | not declared | 1/33 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14741–L14779` |
| `LibvirtConnTestCase.test_rollback_live_migration_at_dest_not_shared` | method | (self, mock_destroy, mock_get_instance_path, mock_exist, mock_shutil) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14785–L14806` |
| `LibvirtConnTestCase.test_rollback_live_migration_at_dest_shared` | method | (self, mock_destroy, mock_get_instance_path, mock_exist, mock_shutil) | public | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14812–L14843` |
| `LibvirtConnTestCase.test_rollback_live_migration_at_dest_shared.fake_destroy` | function | (ctxt, instance, network_info, block_device_info=None, destroy_disks=True) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14818–L14822` |
| `LibvirtConnTestCase.test_live_migration_copy_disk_paths_tunnelled` | method | (self, mock_xml) | public | not declared | 1/40 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14846–L14887` |
| `LibvirtConnTestCase.test_live_migration_copy_disk_paths_selective_block_migration` | method | (self, mock_xml, mock_get_instance, mock_block_device_info, mock_version, mock_conn) | public | not declared | 1/88 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14894–L14981` |
| `LibvirtConnTestCase.test_live_migration_data_gb_plain` | method | (self, mock_paths) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14985–L14991` |
| `LibvirtConnTestCase.test_live_migration_data_gb_block` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14993–L15020` |
| `LibvirtConnTestCase.test_live_migration_data_gb_block.fake_stat` | function | (path) | public | `StatResult(10 * units.Gi)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L15007); `StatResult(1.5 * units.Gi)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L15009) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14997–L15011` |
| `LibvirtConnTestCase.test_live_migration_data_gb_block.fake_stat.StatResult` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14998–L15004` |
| `LibvirtConnTestCase.test_live_migration_data_gb_block.fake_stat.StatResult.__init__` | method | (self, size) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L14999–L15000` |
| `LibvirtConnTestCase.test_live_migration_data_gb_block.fake_stat.StatResult.st_size` | method | (self) | public | `self._size` (src/nova/tests/unit/virt/libvirt/test_driver.py:L15004) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15003–L15004` |
| `LibvirtConnTestCase.EXPECT_SUCCESS` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15022–L15022` |
| `LibvirtConnTestCase.EXPECT_FAILURE` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15023–L15023` |
| `LibvirtConnTestCase.EXPECT_ABORT` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15024–L15024` |
| `LibvirtConnTestCase._test_live_migration_monitoring` | method | (self, job_info_records, time_records, expect_result, mock_pause, mock_abort, mock_running, mock_save, mock_mig_save, mock_job_info, mock_conn, mock_sleep, mock_time, mock_postcopy_switch, current_mig_status=None, expected_mig_status=None, scheduled_action=None, scheduled_action_executed=False, block_migration=False, expected_switch=False) | private | not declared | 11/86 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15037–L15153` |
| `LibvirtConnTestCase._test_live_migration_monitoring.fake_job_info` | function | — | public | `rec` (src/nova/tests/unit/virt/libvirt/test_driver.py:L15081); `rec` (src/nova/tests/unit/virt/libvirt/test_driver.py:L15082) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15064–L15082` |
| `LibvirtConnTestCase._test_live_migration_monitoring.fake_time` | function | — | public | `time_records[0]` (src/nova/tests/unit/virt/libvirt/test_driver.py:L15086); `int( datetime.datetime(2001, 1, 20, 20, 1, 0) .strftime('%s'))` (src/nova/tests/unit/virt/libvirt/test_driver.py:L15088) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15084–L15090` |
| `LibvirtConnTestCase.test_live_migration_monitor_success` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15155–L15173` |
| `LibvirtConnTestCase.test_live_migration_handle_pause_normal` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15175–L15198` |
| `LibvirtConnTestCase.test_live_migration_handle_pause_on_start` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15200–L15224` |
| `LibvirtConnTestCase.test_live_migration_handle_pause_on_finish` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15226–L15250` |
| `LibvirtConnTestCase.test_live_migration_handle_pause_on_cancel` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15252–L15276` |
| `LibvirtConnTestCase.test_live_migration_handle_pause_on_failure` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15278–L15300` |
| `LibvirtConnTestCase.test_live_migration_handle_postcopy_normal` | method | (self, mock_postcopy_enabled) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15304–L15329` |
| `LibvirtConnTestCase.test_live_migration_handle_postcopy_on_start` | method | (self, mock_postcopy_enabled) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15333–L15359` |
| `LibvirtConnTestCase.test_live_migration_handle_postcopy_on_finish` | method | (self, mock_postcopy_enabled) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15363–L15389` |
| `LibvirtConnTestCase.test_live_migration_handle_postcopy_on_cancel` | method | (self, mock_postcopy_enabled) | public | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15393–L15419` |
| `LibvirtConnTestCase.test_live_migration_handle_pause_on_postcopy` | method | (self, mock_postcopy_enabled) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15423–L15448` |
| `LibvirtConnTestCase.test_live_migration_handle_postcopy_on_postcopy` | method | (self, mock_postcopy_enabled) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15452–L15477` |
| `LibvirtConnTestCase.test_live_migration_handle_postcopy_on_failure` | method | (self, mock_postcopy_enabled) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15481–L15505` |
| `LibvirtConnTestCase.test_live_migration_monitor_success_race` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15507–L15526` |
| `LibvirtConnTestCase.test_live_migration_monitor_failed` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15528–L15545` |
| `LibvirtConnTestCase.test_live_migration_monitor_failed_race` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15547–L15565` |
| `LibvirtConnTestCase.test_live_migration_monitor_cancelled` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15567–L15586` |
| `LibvirtConnTestCase.test_live_migration_monitor_downtime` | method | (self, mock_downtime_steps, mock_set_downtime) | public | not declared | 1/35 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15590–L15635` |
| `LibvirtConnTestCase.test_live_migration_monitor_completion` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15637–L15666` |
| `LibvirtConnTestCase.test_live_migration_monitor_force_complete_postcopy` | method | (self, mock_postcopy_enabled) | public | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15670–L15698` |
| `LibvirtConnTestCase._test_live_migration_main` | method | (self, mock_abort, mock_copy_disk_path, mock_running, mock_guest, mock_monitor, mock_spawn, mock_conn, mon_side_effect=None) | private | not declared | 2/35 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15708–L15751` |
| `LibvirtConnTestCase._test_live_migration_main.fake_post` | function | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15726–L15727` |
| `LibvirtConnTestCase._test_live_migration_main.fake_recover` | function | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15729–L15730` |
| `LibvirtConnTestCase.test_live_migration_main` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15753–L15754` |
| `LibvirtConnTestCase.test_live_migration_main_monitoring_failed` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15756–L15757` |
| `LibvirtConnTestCase._test_live_migration_monitor_job_stats_exception` | method | (self, exc, mock_copy_disk_paths, mock_get_guest, mock_spawn, expect_success=True) | private | not declared | 2/33 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15764–L15804` |
| `LibvirtConnTestCase.test_live_migration_monitor_job_stats_no_domain` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15806–L15812` |
| `LibvirtConnTestCase.test_live_migration_monitor_job_stats_op_invalid` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15814–L15820` |
| `LibvirtConnTestCase.test_live_migration_monitor_job_stats_no_ram_info_set` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15822–L15829` |
| `LibvirtConnTestCase.test_live_migration_monitor_job_stats_internal_error` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15831–L15838` |
| `LibvirtConnTestCase._do_test_create_images_and_backing` | method | (self, disk_type, mock_fetch, mock_create, mock_exists) | private | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15844–L15863` |
| `LibvirtConnTestCase.test_create_images_and_backing_qcow2` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15865–L15866` |
| `LibvirtConnTestCase.test_create_images_and_backing_raw` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15868–L15869` |
| `LibvirtConnTestCase.test_create_images_and_backing_images_not_exist_no_fallback` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15871–L15892` |
| `LibvirtConnTestCase.test_create_images_and_backing_images_not_exist_fallback` | method | (self, mock_utime, mock_create_cow_image) | public | not declared | 1/73 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15896–L15979` |
| `LibvirtConnTestCase.test_create_images_and_backing_images_not_exist_fallback.fake_copy_image` | function | (src, dest, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15924–L15931` |
| `LibvirtConnTestCase.test_create_images_backing_images_and_fallback_not_exist` | method | (self) | public | not declared | 1/55 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15983–L16040` |
| `LibvirtConnTestCase.test_create_images_and_backing_images_exist` | method | (self, mock_fetch_image) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16045–L16069` |
| `LibvirtConnTestCase.test_create_images_and_backing_ephemeral_gets_created` | method | (self, mock_create_cow_image, mock_utime, mock_detect) | public | not declared | 2/55 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16074–L16142` |
| `LibvirtConnTestCase.test_create_images_and_backing_disk_info_none` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16144–L16153` |
| `LibvirtConnTestCase.test_create_images_and_backing_parallels` | method | (self, mock_fetch) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16157–L16164` |
| `LibvirtConnTestCase._migrate_data_to_dict` | method | (self, migrate_data) | private | `primitive` (src/nova/tests/unit/virt/libvirt/test_driver.py:L16170) | 2/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16166–L16170` |
| `LibvirtConnTestCase._generate_target_ret` | method | (self, target_connect_addr=None) | private | `self._migrate_data_to_dict(objects.LibvirtLiveMigrateData( block_migration=False, instance_relative_path='foo', is_shared_block_storage=False, is_shared_instance_path=False, serial_listen_ports=[], su` (src/nova/tests/unit/virt/libvirt/test_driver.py:L16173) | 1/29 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16172–L16200` |
| `LibvirtConnTestCase.test_pre_live_migration_works_correctly_mocked` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16202–L16203` |
| `LibvirtConnTestCase.test_pre_live_migration_with_transport_ip` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16205–L16210` |
| `LibvirtConnTestCase._test_pre_live_migration_works_correctly_mocked` | method | (self, mock_file_open, mock_connect, mock_plug, target_ret=None) | private | not declared | 4/71 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16216–L16300` |
| `LibvirtConnTestCase._test_pre_live_migration_works_correctly_mocked.FakeNetworkInfo` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16259–L16261` |
| `LibvirtConnTestCase._test_pre_live_migration_works_correctly_mocked.FakeNetworkInfo.fixed_ips` | method | (self) | public | `["test_ip_addr"]` (src/nova/tests/unit/virt/libvirt/test_driver.py:L16261) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16260–L16261` |
| `LibvirtConnTestCase.test_pre_live_migration_block_with_config_drive_success` | method | (self, mock_required_by, block_device_info_get_mapping) | public | not declared | 1/25 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16304–L16333` |
| `LibvirtConnTestCase.test_pre_live_migration_block_with_config_drive_mocked_with_vfat` | method | (self, mock_open, mock_block_device_info_get_mapping) | public | not declared | 1/32 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16339–L16373` |
| `LibvirtConnTestCase._test_pre_live_migration_volume_backed` | method | (self, encrypted_volumes=False) | private | not declared | 7/116 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16375–L16512` |
| `LibvirtConnTestCase.test_pre_live_migration_volume_backed` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16514–L16515` |
| `LibvirtConnTestCase.test_pre_live_migration_volume_backed_encrypted` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16517–L16518` |
| `LibvirtConnTestCase.test_pre_live_migration_plug_vifs_retry_fails` | method | (self, mock_plug, mock_sleep) | public | not declared | 3/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16524–L16548` |
| `LibvirtConnTestCase.test_pre_live_migration_plug_vifs_retry_works` | method | (self, mock_plug, mock_sleep) | public | not declared | 3/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16553–L16578` |
| `LibvirtConnTestCase.test_pre_live_migration_plug_vifs_with_dest_port_bindings` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16580–L16603` |
| `LibvirtConnTestCase.test_pre_live_migration_image_not_created_with_shared_storage` | method | (self) | public | not declared | 2/50 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16605–L16658` |
| `LibvirtConnTestCase.test_pre_live_migration_image_not_created_with_shared_storage._to_obj` | function | (d) | private | `migrate_data_obj.LibvirtLiveMigrateData(**d)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L16635) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16634–L16635` |
| `LibvirtConnTestCase.test_pre_live_migration_with_not_shared_instance_path` | method | (self, mock_file_open) | public | not declared | 1/30 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16662–L16697` |
| `LibvirtConnTestCase.test_pre_live_migration_with_not_shared_instance_path.check_instance_dir` | function | (context, instance, instance_dir, disk_info, fallback_from_host=False) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16674–L16677` |
| `LibvirtConnTestCase.test_pre_live_migration_recreate_disk_info` | method | (self) | public | not declared | 1/36 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16699–L16738` |
| `LibvirtConnTestCase.test_pre_live_migration_with_perf_events` | method | (self, mock_file_open) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16742–L16761` |
| `LibvirtConnTestCase.test_get_instance_disk_info_works_correctly` | method | (self, mock_get_disk_backing_file, mock_qemu_img_info, mock_get_size, mock_stat) | public | not declared | 1/41 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16768–L16817` |
| `LibvirtConnTestCase.test_get_instance_disk_info_works_correctly.fake_lookup` | function | (_uuid) | public | `vdmock` (src/nova/tests/unit/virt/libvirt/test_driver.py:L16794) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16792–L16794` |
| `LibvirtConnTestCase.test_post_live_migration` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16819–L16852` |
| `LibvirtConnTestCase.test_post_live_migration._test` | function | (_disconnect_volume, block_device_info_get_mapping) | private | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16844–L16850` |
| `LibvirtConnTestCase.test_post_live_migration_exception_swallowed` | method | (self, mock_get_bdm, mock_disconnect_volume) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16856–L16880` |
| `LibvirtConnTestCase.test_get_instance_disk_info_excludes_volumes` | method | (self, mock_get_disk_backing_file, mock_qemu_img_info, mock_get_size, mock_stat) | public | not declared | 1/50 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16887–L16945` |
| `LibvirtConnTestCase.test_get_instance_disk_info_excludes_volumes.fake_lookup` | function | (_uuid) | public | `vdmock` (src/nova/tests/unit/virt/libvirt/test_driver.py:L16919) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16917–L16919` |
| `LibvirtConnTestCase.test_get_instance_disk_info_no_bdinfo_passed` | method | (self, mock_get_size, mock_stat) | public | not declared | 1/32 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16949–L16992` |
| `LibvirtConnTestCase.test_get_instance_disk_info_no_bdinfo_passed.fake_lookup` | function | (_uuid) | public | `vdmock` (src/nova/tests/unit/virt/libvirt/test_driver.py:L16976) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16974–L16976` |
| `LibvirtConnTestCase.test_spawn_with_network_info` | method | (self, power_on=True) | public | not declared | 3/45 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16998–L17128` |
| `LibvirtConnTestCase.test_spawn_with_network_info.fake_getLibVersion` | function | — | public | `fakelibvirt.FAKE_LIBVIRT_VERSION` (src/nova/tests/unit/virt/libvirt/test_driver.py:L17000) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L16999–L17000` |
| `LibvirtConnTestCase.test_spawn_with_network_info.fake_getCapabilities` | function | — | public | `""" <capabilities> <host> <uuid>cef19ce0-0ca2-11df-855d-b19fbce37686</uuid> <cpu> <arch>x86_64</arch> <model>Penryn</model> <vendor>Intel</vendor> <topology sockets='1' cores='2' threads='1'/> <featur` (src/nova/tests/unit/virt/libvirt/test_driver.py:L17003) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17002–L17016` |
| `LibvirtConnTestCase.test_spawn_with_network_info.fake_baselineCPU` | function | (cpu, flag) | public | `"""<cpu mode='custom' match='exact'> <model fallback='allow'>Penryn</model> <vendor>Intel</vendor> <feature policy='require' name='xtpr'/> </cpu> """` (src/nova/tests/unit/virt/libvirt/test_driver.py:L17019) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17018–L17024` |
| `LibvirtConnTestCase.test_spawn_with_network_info.fake_getCPUModelNames` | function | (arch) | public | `[ '486', 'pentium', 'pentium2', 'pentium3', 'pentiumpro', 'coreduo', 'n270', 'core2duo', 'qemu32', 'kvm32', 'cpu64-rhel5', 'cpu64-rhel6', 'qemu64', 'kvm64', 'Conroe', 'Penryn', 'Nehalem', 'Nehalem-IBR` (src/nova/tests/unit/virt/libvirt/test_driver.py:L17027) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17026–L17075` |
| `LibvirtConnTestCase.test_spawn_with_network_info.fake_getCPUMap` | function | — | public | `(2, [True, True], 2)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L17078) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17077–L17078` |
| `LibvirtConnTestCase.test_spawn_power_on_false` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17131–L17132` |
| `LibvirtConnTestCase._test_spawn_accels` | method | (self, accel_info, mock_get_disk_info) | private | `instance` (src/nova/tests/unit/virt/libvirt/test_driver.py:L17155) | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17135–L17155` |
| `LibvirtConnTestCase.test_spawn_accels_no_accel_info` | method | (self, mock_get_guest_xml) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17161–L17168` |
| `LibvirtConnTestCase.test_spawn_accels_with_accel_info` | method | (self, mock_get_guest_xml) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17174–L17181` |
| `LibvirtConnTestCase.test_spawn_with_config_drive` | method | (self, mock_instance_metadata, mock_build_device_metadata, mock_mkisofs, mock_get_info, mock_create_guest_with_network, mock_get_guest_xml) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17195–L17231` |
| `LibvirtConnTestCase.test_spawn_with_config_drive.fake_create_guest_with_network` | function | (context, xml, instance, network_info, block_device_info, power_on=True, vifs_already_plugged=False, post_xml_callback=None, external_events=None, cleanup_instance_dir=False, cleanup_instance_disks=False) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17209–L17217` |
| `LibvirtConnTestCase.test_spawn_without_image_meta` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17236–L17258` |
| `LibvirtConnTestCase._test_spawn_disks` | method | (self, image_ref, block_device_info) | private | `sorted(backend.created_disks.keys())` (src/nova/tests/unit/virt/libvirt/test_driver.py:L17292) | 1/22 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17263–L17292` |
| `LibvirtConnTestCase.test_spawn_from_volume_no_image_ref` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17294–L17303` |
| `LibvirtConnTestCase.test_spawn_from_volume_with_image_ref` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17305–L17315` |
| `LibvirtConnTestCase.test_spawn_from_image` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17317–L17321` |
| `LibvirtConnTestCase.test_spawn_lxc_from_volume` | method | (self) | public | not declared | 1/69 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17326–L17414` |
| `LibvirtConnTestCase.test_spawn_lxc_from_volume.check_setup_container` | function | (image, container_dir=None) | public | `'/dev/nbd1'` (src/nova/tests/unit/virt/libvirt/test_driver.py:L17333) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17330–L17333` |
| `LibvirtConnTestCase.test_spawn_lxc_from_volume._connect_volume_side_effect` | function | (ctxt, connection_info, instance) | private | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17361–L17362` |
| `LibvirtConnTestCase.test_spawn_lxc_from_volume._get` | function | (key, opt=None) | private | `bdm.get(key, opt)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L17365) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17364–L17365` |
| `LibvirtConnTestCase.test_spawn_lxc_from_volume.getitem` | function | (key) | public | `bdm[key]` (src/nova/tests/unit/virt/libvirt/test_driver.py:L17368) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17367–L17368` |
| `LibvirtConnTestCase.test_spawn_lxc_from_volume.setitem` | function | (key, val) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17370–L17371` |
| `LibvirtConnTestCase.test_spawn_with_pci_devices` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17419–L17461` |
| `LibvirtConnTestCase.test_spawn_with_pci_devices.FakeLibvirtPciDevice` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17420–L17425` |
| `LibvirtConnTestCase.test_spawn_with_pci_devices.FakeLibvirtPciDevice.detach` | method | (self) | public | `None` (src/nova/tests/unit/virt/libvirt/test_driver.py:L17422) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17421–L17422` |
| `LibvirtConnTestCase.test_spawn_with_pci_devices.FakeLibvirtPciDevice.reset` | method | (self) | public | `None` (src/nova/tests/unit/virt/libvirt/test_driver.py:L17425) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17424–L17425` |
| `LibvirtConnTestCase.test_spawn_with_pci_devices.fake_node_device_lookup_by_name` | function | (address) | public | `FakeLibvirtPciDevice()` (src/nova/tests/unit/virt/libvirt/test_driver.py:L17433) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17427–L17433` |
| `LibvirtConnTestCase.test_spawn_with_vtpm` | method | (self, mock_get_info, mock_create_guest, mock_get_vtpm, mock_ensure_vtpm) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17474–L17498` |
| `LibvirtConnTestCase._test_create_image_plain` | method | (self, os_type='', filename='', mkfs=False) | private | not declared | 2/35 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17500–L17540` |
| `LibvirtConnTestCase.test_create_image_plain_os_type_blank` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17542–L17545` |
| `LibvirtConnTestCase.test_create_image_plain_os_type_none` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17547–L17550` |
| `LibvirtConnTestCase.test_create_image_plain_os_type_set_no_fs` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17552–L17555` |
| `LibvirtConnTestCase.test_create_image_plain_os_type_set_with_fs` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17557–L17563` |
| `LibvirtConnTestCase.test_create_image_initrd` | method | (self) | public | not declared | 3/44 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17565–L17619` |
| `LibvirtConnTestCase.test_injection_info_is_sanitized` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17621–L17627` |
| `LibvirtConnTestCase.test_create_configdrive` | method | (self, mock_make_drive, mock_instance_metadata, mock_build_device_metadata) | public | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17633–L17660` |
| `LibvirtConnTestCase.test_create_image_with_swap` | method | (self, expected, flavor_size=None, bdi_size=None, legacy=False) | public | not declared | 4/29 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17667–L17703` |
| `LibvirtConnTestCase.test_refresh_nfs_swap_cache_file_exists` | method | (self, mock_open) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17707–L17711` |
| `LibvirtConnTestCase.test_refresh_nfs_swap_cache_stale` | method | (self, mock_unlink, mock_close, mock_open) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17716–L17724` |
| `LibvirtConnTestCase.test_refresh_nfs_swap_cache_error` | method | (self, mock_open) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17728–L17732` |
| `LibvirtConnTestCase.test_create_image_swap_calls_nfs_cache_refresh` | method | (self, mock_refresh) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17735–L17754` |
| `LibvirtConnTestCase.test_create_vz_container_with_swap` | method | (self, mock_cache) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17757–L17769` |
| `LibvirtConnTestCase.test_create_image_not_exist_no_fallback` | method | (self, mock_cache) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17773–L17782` |
| `LibvirtConnTestCase.test_create_image_not_exist_fallback` | method | (self, mock_cache) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17785–L17811` |
| `LibvirtConnTestCase.test_create_image_not_exist_fallback.side_effect` | function | (fetch_func, filename, size=None, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17787–L17795` |
| `LibvirtConnTestCase.test_create_image_not_exist_fallback.side_effect.second_call` | function | (fetch_func, filename, size=None, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17788–L17792` |
| `LibvirtConnTestCase.test_create_image_with_ephemerals` | method | (self, mock_get_ext) | public | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17814–L17839` |
| `LibvirtConnTestCase.test_create_image_resize_snap_backend` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17841–L17856` |
| `LibvirtConnTestCase.test_create_ephemeral_specified_fs` | method | (self, fake_mkfs) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17859–L17865` |
| `LibvirtConnTestCase.test_create_ephemeral_specified_fs_not_valid` | method | (self, mock_create_cow_image, mock_fetch_image, mock_utime, mock_detect) | public | not declared | 1/31 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17871–L17902` |
| `LibvirtConnTestCase.test_create_ephemeral_default` | method | (self, fake_mkfs) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17905–L17910` |
| `LibvirtConnTestCase.test_create_ephemeral_with_conf` | method | (self, fake_mkfs) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17913–L17919` |
| `LibvirtConnTestCase.test_create_ephemeral_with_arbitrary` | method | (self, fake_mkfs) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17922–L17930` |
| `LibvirtConnTestCase.test_create_ephemeral_with_ext3` | method | (self, fake_mkfs) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17933–L17941` |
| `LibvirtConnTestCase.test_create_ephemeral_parallels` | method | (self, mock_create_ploop) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17944–L17953` |
| `LibvirtConnTestCase.test_create_swap_default` | method | (self, mock_create_image, mock_mkfs) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17957–L17960` |
| `LibvirtConnTestCase.test_ensure_console_log_for_instance_pass` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17962–L17971` |
| `LibvirtConnTestCase.test_ensure_console_log_for_instance_pass_w_permissions` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17973–L17983` |
| `LibvirtConnTestCase.test_ensure_console_log_for_instance_fail` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L17985–L17996` |
| `LibvirtConnTestCase.test_get_console_output_file` | method | (self, mock_last_bytes) | public | not declared | 2/33 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18000–L18040` |
| `LibvirtConnTestCase.test_get_console_output_file.fake_lookup` | function | (id) | public | `FakeVirtDomain(fake_dom_xml)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L18025) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18024–L18025` |
| `LibvirtConnTestCase.test_get_console_output_tcp` | method | (self, mock_last_bytes) | public | not declared | 2/32 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18047–L18088` |
| `LibvirtConnTestCase.test_get_console_output_tcp.fake_lookup` | function | (id) | public | `FakeVirtDomain(fake_dom_xml)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L18073) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18072–L18073` |
| `LibvirtConnTestCase.test_get_console_output_file_missing` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18090–L18125` |
| `LibvirtConnTestCase.test_get_console_output_file_missing.fake_lookup` | function | (id) | public | `FakeVirtDomain(fake_dom_xml)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L18115) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18114–L18115` |
| `LibvirtConnTestCase.test_get_console_output_pty` | method | (self, mocked_readfile, mocked_writefile, mocked_last_bytes, mocked_path_exists) | public | not declared | 2/34 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18132–L18174` |
| `LibvirtConnTestCase.test_get_console_output_pty.fake_lookup` | function | (id) | public | `FakeVirtDomain(fake_dom_xml)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L18158) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18157–L18158` |
| `LibvirtConnTestCase.test_get_console_output_pty_not_available` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18176–L18198` |
| `LibvirtConnTestCase.test_get_console_output_pty_not_available.fake_lookup` | function | (id) | public | `FakeVirtDomain(fake_dom_xml)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L18192) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18191–L18192` |
| `LibvirtConnTestCase.test_get_console_output_not_available` | method | (self, mock_get_xml, get_domain) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18202–L18221` |
| `LibvirtConnTestCase.test_get_console_output_logrotate` | method | (self, mock_get_xml, get_domain) | public | not declared | 1/33 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18225–L18293` |
| `LibvirtConnTestCase.test_get_console_output_logrotate.mock_path_exists` | function | (path) | public | `os.path.basename(path) in fake_files` (src/nova/tests/unit/virt/libvirt/test_driver.py:L18234) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18233–L18234` |
| `LibvirtConnTestCase.test_get_console_output_logrotate.fake_open` | function | (path, mode) | public | `io.BytesIO(b'uvwxyz')` (src/nova/tests/unit/virt/libvirt/test_driver.py:L18238); `io.BytesIO(b'klmnopqrst')` (src/nova/tests/unit/virt/libvirt/test_driver.py:L18240); `io.BytesIO(b'abcdefghij')` (src/nova/tests/unit/virt/libvirt/test_driver.py:L18242) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18236–L18243` |
| `LibvirtConnTestCase.test_get_console_output_logrotate._get_logd_output` | function | (bytes_to_read) | private | `log_data` (src/nova/tests/unit/virt/libvirt/test_driver.py:L18279) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18264–L18279` |
| `LibvirtConnTestCase.test_get_host_ip_addr` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18295–L18298` |
| `LibvirtConnTestCase.test_get_host_ip_addr_defaults_to_my_ip` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18300–L18304` |
| `LibvirtConnTestCase.test_get_host_ip_addr_override_via_migration_inbound_addr` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18306–L18312` |
| `LibvirtConnTestCase.test_get_host_ip_addr_override_via_migration_inbound_addr_template` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18314–L18321` |
| `LibvirtConnTestCase.test_check_my_ip` | method | (self, mock_log) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18324–L18334` |
| `LibvirtConnTestCase.test_init_host_checks_ip` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18339–L18343` |
| `LibvirtConnTestCase.test_conn_event_handler` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18345–L18365` |
| `LibvirtConnTestCase.test_command_with_broken_connection` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18367–L18389` |
| `LibvirtConnTestCase.test_service_resume_after_broken_connection` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18394–L18414` |
| `LibvirtConnTestCase.test_immediate_delete` | method | (self, mock_save, mock_get, mock_delete, mock_cleanup_async_detach) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18423–L18434` |
| `LibvirtConnTestCase._test_destroy_removes_disk` | method | (self, mock_undefine_domain, mock_mapping, mock_disconnect_volume, mock_delete_instance_files, mock_destroy, mock_inst_save, mock_inst_obj_load_attr, mock_get_by_uuid, volume_fail=False) | private | not declared | 2/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18444–L18461` |
| `LibvirtConnTestCase.test_destroy_removes_disk` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18463–L18464` |
| `LibvirtConnTestCase.test_destroy_removes_disk_volume_fails` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18466–L18467` |
| `LibvirtConnTestCase.test_destroy_not_removes_disk` | method | (self, mock_undefine_domain, mock_destroy, mock_unplug_vifs) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18472–L18480` |
| `LibvirtConnTestCase.test_destroy_lxc_calls_teardown_container` | method | (self, mock_get_domain, mock_teardown_container, mock_cleanup) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18485–L18509` |
| `LibvirtConnTestCase.test_destroy_lxc_calls_teardown_container.destroy_side_effect` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18491–L18492` |
| `LibvirtConnTestCase.test_destroy_lxc_calls_teardown_container_when_no_domain` | method | (self, mock_get_domain, mock_teardown_container, mock_cleanup) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18514–L18530` |
| `LibvirtConnTestCase.test_reboot_different_ids` | method | (self, mock_get) | public | not declared | 1/27 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18533–L18569` |
| `LibvirtConnTestCase.test_reboot_different_ids.FakeLoopingCall` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18534–L18539` |
| `LibvirtConnTestCase.test_reboot_different_ids.FakeLoopingCall.start` | method | (self, *a, **k) | public | `self` (src/nova/tests/unit/virt/libvirt/test_driver.py:L18536) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18535–L18536` |
| `LibvirtConnTestCase.test_reboot_different_ids.FakeLoopingCall.wait` | method | (self) | public | `None` (src/nova/tests/unit/virt/libvirt/test_driver.py:L18539) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18538–L18539` |
| `LibvirtConnTestCase.test_reboot_same_ids` | method | (self, mock_get_domain, mock_hard_reboot, mock_sleep, mock_loopingcall) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18575–L18605` |
| `LibvirtConnTestCase.test_reboot_same_ids.FakeLoopingCall` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18577–L18582` |
| `LibvirtConnTestCase.test_reboot_same_ids.FakeLoopingCall.start` | method | (self, *a, **k) | public | `self` (src/nova/tests/unit/virt/libvirt/test_driver.py:L18579) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18578–L18579` |
| `LibvirtConnTestCase.test_reboot_same_ids.FakeLoopingCall.wait` | method | (self) | public | `None` (src/nova/tests/unit/virt/libvirt/test_driver.py:L18582) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18581–L18582` |
| `LibvirtConnTestCase.test_reboot_same_ids.fake_hard_reboot` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18596–L18597` |
| `LibvirtConnTestCase.test_soft_reboot_libvirt_exception` | method | (self, mock_get_domain, mock_hard_reboot) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18609–L18627` |
| `LibvirtConnTestCase._test_resume_state_on_host_boot_with_state` | method | (self, state, mock_get_domain, mock_hard_reboot) | private | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18631–L18650` |
| `LibvirtConnTestCase.test_resume_state_on_host_boot_with_running_state` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18652–L18653` |
| `LibvirtConnTestCase.test_resume_state_on_host_boot_with_suspended_state` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18655–L18656` |
| `LibvirtConnTestCase.test_resume_state_on_host_boot_with_paused_state` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18658–L18659` |
| `LibvirtConnTestCase.test_resume_state_on_host_boot_with_nostate` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18661–L18662` |
| `LibvirtConnTestCase.test_resume_state_on_host_boot_with_shutdown_state` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18664–L18665` |
| `LibvirtConnTestCase.test_resume_state_on_host_boot_with_crashed_state` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18667–L18668` |
| `LibvirtConnTestCase.test_resume_state_on_host_boot_with_instance_not_found_on_driver` | method | (self, mock_get_domain, mock_hard_reboot) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18672–L18686` |
| `LibvirtConnTestCase.test_hard_reboot` | method | (self, mock_get_guest, mock_get_mdev, mock_destroy, mock_get_disk_info, mock_get_guest_xml, mock_create_guest_with_network, mock_get_info, mock_metadata, mock_save) | public | not declared | 3/61 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18702–L18782` |
| `LibvirtConnTestCase.test_hard_reboot_with_share_info` | method | (self, mock_get_guest, mock_get_mdev, mock_destroy, mock_get_disk_info, mock_get_guest_xml, mock_create_guest_with_network, mock_get_info, mock_attach, mock_metadata, mock_save) | public | not declared | 3/71 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18799–L18893` |
| `LibvirtConnTestCase._mount_or_umount_share` | method | (self, protocol, func, side_effect=False) | private | not declared | 8/56 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18895–L18953` |
| `LibvirtConnTestCase.test_mount_nfs_share` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18955–L18958` |
| `LibvirtConnTestCase.test_mount_nfs_share_fails` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18960–L18965` |
| `LibvirtConnTestCase.test_umount_nfs_share` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18967–L18970` |
| `LibvirtConnTestCase.test_umount_nfs_share_fails` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18972–L18977` |
| `LibvirtConnTestCase.test_mount_cephfs_share` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18979–L18982` |
| `LibvirtConnTestCase.test_mount_cephfs_share_fails` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18984–L18989` |
| `LibvirtConnTestCase.test_umount_cephfs_share` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18991–L18994` |
| `LibvirtConnTestCase.test_umount_cephfs_share_fails` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L18996–L19001` |
| `LibvirtConnTestCase.test_is_share_mounted` | method | (self, mock_is_mounted) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19004–L19018` |
| `LibvirtConnTestCase.test_is_share_mounted_not_mounted` | method | (self, mock_is_mounted) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19021–L19028` |
| `LibvirtConnTestCase.test_hard_reboot_wait_for_plug` | method | (self, mock_get_guest_xml, mock_create_guest_with_network, mock_get_info, mock_metadata, mock_save) | public | not declared | 1/31 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19042–L19074` |
| `LibvirtConnTestCase.test_hard_reboot_does_not_call_glance_show` | method | (self, mock_get_mdev, mock_destroy, mock_get_disk_info, mock_get_guest_config, mock_get_instance_path, mock_get_instance_disk_info, mock_create_images_and_backing, mock_create_domand_and_network, mock_looping_call, mock_ensure_tree, mock_metadata, mock_save) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19093–L19127` |
| `LibvirtConnTestCase.test_suspend` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19129–L19161` |
| `LibvirtConnTestCase.test_suspend.suspend` | function | (mock_get_guest, mock_detach_pci_devices, mock_detach_direct_passthrough_ports, mock_detach_mediated_devices, mock_get_instance_disk_info, mock_delete_volume) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19145–L19159` |
| `LibvirtConnTestCase._test_clean_shutdown` | method | (self, mock_get_domain, mock_sleep, seconds_to_shutdown, timeout, retry_interval, shutdown_attempts, succeeds) | private | not declared | 4/29 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19165–L19199` |
| `LibvirtConnTestCase.test_clean_shutdown_first_time` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19201–L19206` |
| `LibvirtConnTestCase.test_clean_shutdown_with_retry` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19208–L19213` |
| `LibvirtConnTestCase.test_clean_shutdown_failure` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19215–L19220` |
| `LibvirtConnTestCase.test_clean_shutdown_no_wait` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19222–L19227` |
| `LibvirtConnTestCase.test_attach_direct_passthrough_ports` | method | (self, mock_get_image_metadata, mock_ID, mock_attachDevice) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19233–L19246` |
| `LibvirtConnTestCase.test_attach_direct_physical_passthrough_ports` | method | (self, mock_get_image_metadata, mock_ID, mock_attachDevice) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19252–L19265` |
| `LibvirtConnTestCase.test_attach_direct_passthrough_ports_with_info_cache` | method | (self, mock_get_image_metadata, mock_ID, mock_attachDevice) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19271–L19286` |
| `LibvirtConnTestCase._test_detach_direct_passthrough_ports` | method | (self, vif_type, detach_device=True, vnic_type=network_model.VNIC_TYPE_DIRECT) | private | not declared | 2/34 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19291–L19336` |
| `LibvirtConnTestCase.test_detach_direct_passthrough_ports_ovs_hw_offload` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19338–L19341` |
| `LibvirtConnTestCase.test_detach_direct_passthrough_ports_sriov_nic_agent` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19343–L19348` |
| `LibvirtConnTestCase.test_detach_direct_physical_passthrough_ports_sriov_nic_agent` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19350–L19354` |
| `LibvirtConnTestCase.test_detach_direct_passthrough_ports_infiniband` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19356–L19359` |
| `LibvirtConnTestCase.test_detach_duplicate_mac_direct_passthrough_ports` | method | (self, mock_detachDeviceFlags, mock_has_min_version) | public | not declared | 3/41 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19363–L19414` |
| `LibvirtConnTestCase.test_resume` | method | (self) | public | not declared | 1/59 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19416–L19476` |
| `LibvirtConnTestCase.test_destroy_undefines` | method | (self, mock_save, mock_delete_instance_files, mock_get_info, mock_get_domain) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19482–L19495` |
| `LibvirtConnTestCase.test_cleanup_rbd` | method | (self, mock_rados, mock_rbd, mock_connect, mock_disconnect, mock_destroy_volume) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19502–L19517` |
| `LibvirtConnTestCase.test_cleanup_rbd_resize_reverting` | method | (self, mock_rados, mock_rbd, mock_connect, mock_disconnect, mock_destroy_volume) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19524–L19538` |
| `LibvirtConnTestCase.test_destroy_undefines_no_undefine_flags` | method | (self, mock_save) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19541–L19560` |
| `LibvirtConnTestCase.test_destroy_undefines_no_attribute_with_managed_save` | method | (self, mock_save) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19563–L19584` |
| `LibvirtConnTestCase.test_destroy_undefines_no_attribute_no_managed_save` | method | (self, mock_save) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19587–L19608` |
| `LibvirtConnTestCase.test_destroy_removes_nvram_host_support_uefi` | method | (self, mock_save, mock_image) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19612–L19636` |
| `LibvirtConnTestCase.test_destroy_removes_nvram_host_and_guest_support_uefi` | method | (self, mock_save, mock_image) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19640–L19664` |
| `LibvirtConnTestCase.test_destroy_timed_out` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19666–L19682` |
| `LibvirtConnTestCase.test_private_destroy_not_found` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19684–L19703` |
| `LibvirtConnTestCase.test_private_destroy_lxc_processes_refused_to_die` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19705–L19727` |
| `LibvirtConnTestCase.test_private_destroy_processes_refused_to_die_still_raises` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19729–L19745` |
| `LibvirtConnTestCase.test_VIR_ERR_SYSTEM_ERROR_during_destroy` | method | (self, mock_warning) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19748–L19771` |
| `LibvirtConnTestCase.test_undefine_domain_with_not_found_instance` | method | (self, mock_get_domain, mock_get_error) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19777–L19787` |
| `LibvirtConnTestCase.test_undefine_domain_handles_libvirt_errors` | method | (self, mock_get) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19790–L19809` |
| `LibvirtConnTestCase.test_undefine_domain_disarms_keep_vtpm_if_not_supported` | method | (self, mock_get) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19812–L19835` |
| `LibvirtConnTestCase.test_undefine_domain_passes_keep_vtpm_if_supported` | method | (self, mock_get) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19838–L19859` |
| `LibvirtConnTestCase.test_undefine_domain_passes_keep_nvram_if_supported` | method | (self, mock_get) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19862–L19877` |
| `LibvirtConnTestCase.test_disk_over_committed_size_total` | method | (self, mock_get, mock_bdms, mock_list) | public | not declared | 2/45 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19882–L19946` |
| `LibvirtConnTestCase.test_disk_over_committed_size_total.DiagFakeDomain` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19885–L19900` |
| `LibvirtConnTestCase.test_disk_over_committed_size_total.DiagFakeDomain.__init__` | method | (self, name) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19886–L19888` |
| `LibvirtConnTestCase.test_disk_over_committed_size_total.DiagFakeDomain.ID` | method | (self) | public | `1` (src/nova/tests/unit/virt/libvirt/test_driver.py:L19891) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19890–L19891` |
| `LibvirtConnTestCase.test_disk_over_committed_size_total.DiagFakeDomain.name` | method | (self) | public | `self._name` (src/nova/tests/unit/virt/libvirt/test_driver.py:L19894) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19893–L19894` |
| `LibvirtConnTestCase.test_disk_over_committed_size_total.DiagFakeDomain.UUIDString` | method | (self) | public | `self._uuid` (src/nova/tests/unit/virt/libvirt/test_driver.py:L19897) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19896–L19897` |
| `LibvirtConnTestCase.test_disk_over_committed_size_total.DiagFakeDomain.XMLDesc` | method | (self, flags) | public | `"<domain><name>%s</name></domain>" % self._name` (src/nova/tests/unit/virt/libvirt/test_driver.py:L19900) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19899–L19900` |
| `LibvirtConnTestCase.test_disk_over_committed_size_total.get_info` | function | (cfg, block_device_info) | public | `fake_disks.get(cfg.name)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L19923) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19922–L19923` |
| `LibvirtConnTestCase.test_disk_over_committed_size_total_eperm` | method | (self, mock_get, mock_bdms, mock_list) | public | not declared | 4/68 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19951–L20056` |
| `LibvirtConnTestCase.test_disk_over_committed_size_total_eperm.DiagFakeDomain` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19954–L19969` |
| `LibvirtConnTestCase.test_disk_over_committed_size_total_eperm.DiagFakeDomain.__init__` | method | (self, name) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19955–L19957` |
| `LibvirtConnTestCase.test_disk_over_committed_size_total_eperm.DiagFakeDomain.ID` | method | (self) | public | `1` (src/nova/tests/unit/virt/libvirt/test_driver.py:L19960) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19959–L19960` |
| `LibvirtConnTestCase.test_disk_over_committed_size_total_eperm.DiagFakeDomain.name` | method | (self) | public | `self._name` (src/nova/tests/unit/virt/libvirt/test_driver.py:L19963) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19962–L19963` |
| `LibvirtConnTestCase.test_disk_over_committed_size_total_eperm.DiagFakeDomain.UUIDString` | method | (self) | public | `self._uuid` (src/nova/tests/unit/virt/libvirt/test_driver.py:L19966) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19965–L19966` |
| `LibvirtConnTestCase.test_disk_over_committed_size_total_eperm.DiagFakeDomain.XMLDesc` | method | (self, flags) | public | `"<domain><name>%s</name></domain>" % self._name` (src/nova/tests/unit/virt/libvirt/test_driver.py:L19969) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L19968–L19969` |
| `LibvirtConnTestCase.test_disk_over_committed_size_total_eperm.side_effect` | function | (cfg, block_device_info) | public | `fake_disks.get(cfg.name)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L20022) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20006–L20022` |
| `LibvirtConnTestCase.test_disk_over_committed_size_total_bdm_not_found` | method | (self, mock_get, mock_bdms, mock_get_disk_info, mock_list_domains) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20064–L20074` |
| `LibvirtConnTestCase.test_disk_over_committed_size_total_disk_not_found_ignore_task_state` | method | (self, mock_get, mock_bdms, mock_get_disk_info, mock_list_domains) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20087–L20097` |
| `LibvirtConnTestCase.test_disk_over_committed_size_total_disk_not_found_ignore_vmstate` | method | (self, mock_get, mock_bdms, mock_get_disk_info, mock_list_domains) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20110–L20120` |
| `LibvirtConnTestCase.test_get_instance_disk_info_from_config_block_devices` | method | (self, mock_disk_api, mock_get_volume_size) | public | not declared | 1/25 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20125–L20157` |
| `LibvirtConnTestCase.test_get_instance_disk_info_from_config_raw_files` | method | (self, mock_getsize, mock_stat) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20161–L20186` |
| `LibvirtConnTestCase.test_get_instance_disk_info_from_config_negative` | method | (self, mock_backing_file, mock_disk_info) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20191–L20214` |
| `LibvirtConnTestCase.test_cpu_info` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20216–L20266` |
| `LibvirtConnTestCase.test_cpu_info.get_host_capabilities_stub` | function | (self) | public | `caps` (src/nova/tests/unit/virt/libvirt/test_driver.py:L20253) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20219–L20253` |
| `LibvirtConnTestCase.test_get_pci_passthrough_devices` | method | (self, mock_list) | public | not declared | 6/68 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20271–L20348` |
| `LibvirtConnTestCase._test_get_host_numa_topology` | method | (self) | private | `got_topo` (src/nova/tests/unit/virt/libvirt/test_driver.py:L20403) | 2/41 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20352–L20403` |
| `LibvirtConnTestCase.test_get_host_numa_topology` | method | (self) | public | not declared | 1/35 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20405–L20452` |
| `LibvirtConnTestCase.test_get_host_numa_topology__vcpu_pin_set_fallback` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20454–L20481` |
| `LibvirtConnTestCase.test_get_host_numa_topology__no_cpu_configuration` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20483–L20508` |
| `LibvirtConnTestCase.test_get_host_numa_topology__only_shared_cpus` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20510–L20536` |
| `LibvirtConnTestCase.test_get_host_numa_topology_empty` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20538–L20552` |
| `LibvirtConnTestCase.test_get_host_numa_topology_missing_network_metadata` | method | (self, mock_version) | public | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20555–L20585` |
| `LibvirtConnTestCase._test_get_host_numa_topology_invalid_network_affinity` | method | (self, group_name, mock_version) | private | not declared | 2/26 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20588–L20621` |
| `LibvirtConnTestCase.test_get_host_numa_topology_invalid_physical_network_affinity` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20623–L20630` |
| `LibvirtConnTestCase.test_get_host_numa_topology_invalid_tunnel_network_affinity` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20632–L20639` |
| `LibvirtConnTestCase.test_diagnostic_vcpus_exception` | method | (self) | public | not declared | 1/62 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20641–L20719` |
| `LibvirtConnTestCase.test_diagnostic_vcpus_exception.DiagFakeDomain` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20662–L20680` |
| `LibvirtConnTestCase.test_diagnostic_vcpus_exception.DiagFakeDomain.__init__` | method | (self) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20664–L20665` |
| `LibvirtConnTestCase.test_diagnostic_vcpus_exception.DiagFakeDomain.vcpus` | method | (self) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20667–L20668` |
| `LibvirtConnTestCase.test_diagnostic_vcpus_exception.DiagFakeDomain.blockStats` | method | (self, path) | public | `(169, 688640, 0, 0, 1)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L20671) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20670–L20671` |
| `LibvirtConnTestCase.test_diagnostic_vcpus_exception.DiagFakeDomain.interfaceStats` | method | (self, path) | public | `(4408, 82, 0, 0, 0, 0, 0, 0)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L20674) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20673–L20674` |
| `LibvirtConnTestCase.test_diagnostic_vcpus_exception.DiagFakeDomain.memoryStats` | method | (self) | public | `{'actual': 220160, 'rss': 200164}` (src/nova/tests/unit/virt/libvirt/test_driver.py:L20677) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20676–L20677` |
| `LibvirtConnTestCase.test_diagnostic_vcpus_exception.DiagFakeDomain.maxMemory` | method | (self) | public | `280160` (src/nova/tests/unit/virt/libvirt/test_driver.py:L20680) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20679–L20680` |
| `LibvirtConnTestCase.test_diagnostic_blockstats_exception` | method | (self) | public | not declared | 1/56 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20721–L20800` |
| `LibvirtConnTestCase.test_diagnostic_blockstats_exception.DiagFakeDomain` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20742–L20767` |
| `LibvirtConnTestCase.test_diagnostic_blockstats_exception.DiagFakeDomain.__init__` | method | (self) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20744–L20745` |
| `LibvirtConnTestCase.test_diagnostic_blockstats_exception.DiagFakeDomain.vcpus` | method | (self) | public | `([(0, 1, 15340000000, 0), (1, 1, 1640000000, 0), (2, 1, 3040000000, 0), (3, 1, 1420000000, 0)], [(True, False), (True, False), (True, False), (True, False)])` (src/nova/tests/unit/virt/libvirt/test_driver.py:L20748) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20747–L20755` |
| `LibvirtConnTestCase.test_diagnostic_blockstats_exception.DiagFakeDomain.blockStats` | method | (self, path) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20757–L20758` |
| `LibvirtConnTestCase.test_diagnostic_blockstats_exception.DiagFakeDomain.interfaceStats` | method | (self, path) | public | `(4408, 82, 0, 0, 0, 0, 0, 0)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L20761) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20760–L20761` |
| `LibvirtConnTestCase.test_diagnostic_blockstats_exception.DiagFakeDomain.memoryStats` | method | (self) | public | `{'actual': 220160, 'rss': 200164}` (src/nova/tests/unit/virt/libvirt/test_driver.py:L20764) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20763–L20764` |
| `LibvirtConnTestCase.test_diagnostic_blockstats_exception.DiagFakeDomain.maxMemory` | method | (self) | public | `280160` (src/nova/tests/unit/virt/libvirt/test_driver.py:L20767) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20766–L20767` |
| `LibvirtConnTestCase.test_diagnostic_interfacestats_exception` | method | (self) | public | not declared | 1/58 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20802–L20883` |
| `LibvirtConnTestCase.test_diagnostic_interfacestats_exception.DiagFakeDomain` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20823–L20848` |
| `LibvirtConnTestCase.test_diagnostic_interfacestats_exception.DiagFakeDomain.__init__` | method | (self) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20825–L20826` |
| `LibvirtConnTestCase.test_diagnostic_interfacestats_exception.DiagFakeDomain.vcpus` | method | (self) | public | `([(0, 1, 15340000000, 0), (1, 1, 1640000000, 0), (2, 1, 3040000000, 0), (3, 1, 1420000000, 0)], [(True, False), (True, False), (True, False), (True, False)])` (src/nova/tests/unit/virt/libvirt/test_driver.py:L20829) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20828–L20836` |
| `LibvirtConnTestCase.test_diagnostic_interfacestats_exception.DiagFakeDomain.blockStats` | method | (self, path) | public | `(169, 688640, 0, 0, 1)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L20839) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20838–L20839` |
| `LibvirtConnTestCase.test_diagnostic_interfacestats_exception.DiagFakeDomain.interfaceStats` | method | (self, path) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20841–L20842` |
| `LibvirtConnTestCase.test_diagnostic_interfacestats_exception.DiagFakeDomain.memoryStats` | method | (self) | public | `{'actual': 220160, 'rss': 200164}` (src/nova/tests/unit/virt/libvirt/test_driver.py:L20845) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20844–L20845` |
| `LibvirtConnTestCase.test_diagnostic_interfacestats_exception.DiagFakeDomain.maxMemory` | method | (self) | public | `280160` (src/nova/tests/unit/virt/libvirt/test_driver.py:L20848) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20847–L20848` |
| `LibvirtConnTestCase.test_diagnostic_memorystats_exception` | method | (self) | public | not declared | 1/65 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20885–L20973` |
| `LibvirtConnTestCase.test_diagnostic_memorystats_exception.DiagFakeDomain` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20906–L20931` |
| `LibvirtConnTestCase.test_diagnostic_memorystats_exception.DiagFakeDomain.__init__` | method | (self) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20908–L20909` |
| `LibvirtConnTestCase.test_diagnostic_memorystats_exception.DiagFakeDomain.vcpus` | method | (self) | public | `([(0, 1, 15340000000, 0), (1, 1, 1640000000, 0), (2, 1, 3040000000, 0), (3, 1, 1420000000, 0)], [(True, False), (True, False), (True, False), (True, False)])` (src/nova/tests/unit/virt/libvirt/test_driver.py:L20912) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20911–L20919` |
| `LibvirtConnTestCase.test_diagnostic_memorystats_exception.DiagFakeDomain.blockStats` | method | (self, path) | public | `(169, 688640, 0, 0, 1)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L20922) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20921–L20922` |
| `LibvirtConnTestCase.test_diagnostic_memorystats_exception.DiagFakeDomain.interfaceStats` | method | (self, path) | public | `(4408, 82, 0, 0, 0, 0, 0, 0)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L20925) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20924–L20925` |
| `LibvirtConnTestCase.test_diagnostic_memorystats_exception.DiagFakeDomain.memoryStats` | method | (self) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20927–L20928` |
| `LibvirtConnTestCase.test_diagnostic_memorystats_exception.DiagFakeDomain.maxMemory` | method | (self) | public | `280160` (src/nova/tests/unit/virt/libvirt/test_driver.py:L20931) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20930–L20931` |
| `LibvirtConnTestCase.test_diagnostic_full` | method | (self) | public | not declared | 1/67 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20975–L21065` |
| `LibvirtConnTestCase.test_diagnostic_full.DiagFakeDomain` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20996–L21021` |
| `LibvirtConnTestCase.test_diagnostic_full.DiagFakeDomain.__init__` | method | (self) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L20998–L20999` |
| `LibvirtConnTestCase.test_diagnostic_full.DiagFakeDomain.vcpus` | method | (self) | public | `([(0, 1, 15340000000, 0), (1, 1, 1640000000, 0), (2, 1, 3040000000, 0), (3, 1, 1420000000, 0)], [(True, False), (True, False), (True, False), (True, False)])` (src/nova/tests/unit/virt/libvirt/test_driver.py:L21002) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21001–L21009` |
| `LibvirtConnTestCase.test_diagnostic_full.DiagFakeDomain.blockStats` | method | (self, path) | public | `(169, 688640, 0, 0, 1)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L21012) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21011–L21012` |
| `LibvirtConnTestCase.test_diagnostic_full.DiagFakeDomain.interfaceStats` | method | (self, path) | public | `(4408, 82, 0, 0, 0, 0, 0, 0)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L21015) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21014–L21015` |
| `LibvirtConnTestCase.test_diagnostic_full.DiagFakeDomain.memoryStats` | method | (self) | public | `{'actual': 220160, 'rss': 200164}` (src/nova/tests/unit/virt/libvirt/test_driver.py:L21018) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21017–L21018` |
| `LibvirtConnTestCase.test_diagnostic_full.DiagFakeDomain.maxMemory` | method | (self) | public | `280160` (src/nova/tests/unit/virt/libvirt/test_driver.py:L21021) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21020–L21021` |
| `LibvirtConnTestCase.test_diagnostic_full_with_multiple_interfaces` | method | (self, mock_get_domain) | public | not declared | 1/94 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21068–L21189` |
| `LibvirtConnTestCase.test_diagnostic_full_with_multiple_interfaces.DiagFakeDomain` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21098–L21123` |
| `LibvirtConnTestCase.test_diagnostic_full_with_multiple_interfaces.DiagFakeDomain.__init__` | method | (self) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21100–L21101` |
| `LibvirtConnTestCase.test_diagnostic_full_with_multiple_interfaces.DiagFakeDomain.vcpus` | method | (self) | public | `([(0, 1, 15340000000, 0), (1, 1, 1640000000, 0), (2, 1, 3040000000, 0), (3, 1, 1420000000, 0)], [(True, False), (True, False), (True, False), (True, False)])` (src/nova/tests/unit/virt/libvirt/test_driver.py:L21104) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21103–L21111` |
| `LibvirtConnTestCase.test_diagnostic_full_with_multiple_interfaces.DiagFakeDomain.blockStats` | method | (self, path) | public | `(169, 688640, 0, 0, 1)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L21114) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21113–L21114` |
| `LibvirtConnTestCase.test_diagnostic_full_with_multiple_interfaces.DiagFakeDomain.interfaceStats` | method | (self, path) | public | `(4408, 82, 0, 0, 0, 0, 0, 0)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L21117) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21116–L21117` |
| `LibvirtConnTestCase.test_diagnostic_full_with_multiple_interfaces.DiagFakeDomain.memoryStats` | method | (self) | public | `{'actual': 220160, 'rss': 200164}` (src/nova/tests/unit/virt/libvirt/test_driver.py:L21120) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21119–L21120` |
| `LibvirtConnTestCase.test_diagnostic_full_with_multiple_interfaces.DiagFakeDomain.maxMemory` | method | (self) | public | `280160` (src/nova/tests/unit/virt/libvirt/test_driver.py:L21123) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21122–L21123` |
| `LibvirtConnTestCase.test_diagnostic_full_with_multiple_interfaces.fake_get_domain` | function | (self) | public | `DiagFakeDomain()` (src/nova/tests/unit/virt/libvirt/test_driver.py:L21126) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21125–L21126` |
| `LibvirtConnTestCase.test_failing_vcpu_count` | method | (self, mock_list) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21192–L21223` |
| `LibvirtConnTestCase.test_failing_vcpu_count.DiagFakeDomain` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21198–L21215` |
| `LibvirtConnTestCase.test_failing_vcpu_count.DiagFakeDomain.__init__` | method | (self, vcpus) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21199–L21200` |
| `LibvirtConnTestCase.test_failing_vcpu_count.DiagFakeDomain.vcpus` | method | (self) | public | `([[1, 2, 3, 4]] * self._vcpus, [True] * self._vcpus)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L21206) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21202–L21206` |
| `LibvirtConnTestCase.test_failing_vcpu_count.DiagFakeDomain.ID` | method | (self) | public | `1` (src/nova/tests/unit/virt/libvirt/test_driver.py:L21209) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21208–L21209` |
| `LibvirtConnTestCase.test_failing_vcpu_count.DiagFakeDomain.name` | method | (self) | public | `"instance000001"` (src/nova/tests/unit/virt/libvirt/test_driver.py:L21212) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21211–L21212` |
| `LibvirtConnTestCase.test_failing_vcpu_count.DiagFakeDomain.UUIDString` | method | (self) | public | `"19479fee-07a5-49bb-9138-d3738280d63c"` (src/nova/tests/unit/virt/libvirt/test_driver.py:L21215) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21214–L21215` |
| `LibvirtConnTestCase.test_get_instance_capabilities` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21225–L21261` |
| `LibvirtConnTestCase.test_get_instance_capabilities.get_host_capabilities_stub` | function | (self) | public | `caps` (src/nova/tests/unit/virt/libvirt/test_driver.py:L21252) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21228–L21252` |
| `LibvirtConnTestCase.test_set_cache_mode` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21263–L21270` |
| `LibvirtConnTestCase.test_set_cache_mode_shareable` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21272–L21282` |
| `LibvirtConnTestCase._make_fake_conf` | method | (self, cache=None) | private | `fake_conf` (src/nova/tests/unit/virt/libvirt/test_driver.py:L21294) | 2/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21284–L21294` |
| `LibvirtConnTestCase.test_set_cache_mode_driver_io_writeback` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21296–L21302` |
| `LibvirtConnTestCase.test_set_cache_mode_driver_io_writethrough` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21304–L21310` |
| `LibvirtConnTestCase.test_set_cache_mode_driver_io_unsafe` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21312–L21318` |
| `LibvirtConnTestCase.test_without_set_cache_mode_driver_io` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21320–L21327` |
| `LibvirtConnTestCase.test_set_cache_mode_invalid_mode` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21329–L21336` |
| `LibvirtConnTestCase.test_set_cache_mode_invalid_object` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21338–L21345` |
| `LibvirtConnTestCase._test_shared_storage_detection` | method | (self, is_same, mock_exists, mock_unlink) | private | `result` (src/nova/tests/unit/virt/libvirt/test_driver.py:L21368) | 2/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21349–L21368` |
| `LibvirtConnTestCase.test_shared_storage_detection_same_host` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21370–L21371` |
| `LibvirtConnTestCase.test_shared_storage_detection_different_host` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21373–L21374` |
| `LibvirtConnTestCase.test_shared_storage_detection_easy` | method | (self, mock_get, mock_exec, mock_exists, mock_unlink) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21381–L21388` |
| `LibvirtConnTestCase.test_shared_storage_detection_same_host_migration_inbound_addr` | method | (self, mock_exec, mock_exists, mock_unlink) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21393–L21402` |
| `LibvirtConnTestCase.test_shared_storage_detection_migration_inbound_addr` | method | (self, mock_exists) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21405–L21425` |
| `LibvirtConnTestCase.test_store_pid_remove_pid` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21427–L21434` |
| `LibvirtConnTestCase.test_get_domain_info_with_more_return` | method | (self, mock_get_domain) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21437–L21451` |
| `LibvirtConnTestCase.test_create_guest__with_callback` | method | (self, mock_guest_create, mock_get_vtpm) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21455–L21471` |
| `LibvirtConnTestCase.test_create_guest__no_launch` | method | (self, mock_guest_create, mock_get_vtpm) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21475–L21486` |
| `LibvirtConnTestCase.test_create_guest__with_vtpm_support_but_no_request` | method | (self, mock_guest_create, mock_get_vtpm, mock_image_meta, mock_secret) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21494–L21517` |
| `LibvirtConnTestCase.test_create_guest__with_vtpm` | method | (self, mock_guest_create, mock_get_vtpm, mock_image_meta, mock_secret, mock_host) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21526–L21553` |
| `LibvirtConnTestCase.test_create_guest__with_vtpm_error` | method | (self, mock_guest_create, mock_get_vtpm, mock_image_meta, mock_secret, mock_host) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21562–L21592` |
| `LibvirtConnTestCase.test_get_or_create_secret_for_vtpm_host_security_found` | method | (self, mock_secret, mock_host) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21596–L21613` |
| `LibvirtConnTestCase.test_get_or_create_secret_for_vtpm_host_security_not_found` | method | (self, mock_secret, mock_host) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21617–L21641` |
| `LibvirtConnTestCase.test_get_or_create_secret_for_vtpm_security_deployment` | method | (self, mock_ensure_secret, mock_get_ctxt) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21645–L21659` |
| `LibvirtConnTestCase.test_create_guest_with_network__lxc` | method | (self, mock_get_inst_path, mock_ensure_tree, mock_setup_container, mock_get_info, mock_clean) | public | not declared | 1/37 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21666–L21705` |
| `LibvirtConnTestCase.test_create_guest_with_network__lxc_id_maps` | method | (self, mock_get_inst_path, mock_ensure_tree, mock_setup_container, mock_chown, mock_get_info, mock_clean) | public | not declared | 1/43 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21713–L21769` |
| `LibvirtConnTestCase.test_create_guest_with_network__lxc_id_maps.chown_side_effect` | function | (path, id_maps) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21720–L21729` |
| `LibvirtConnTestCase.test_create_guest_with_network__lxc_not_running` | method | (self, mock_get_inst_path, mock_ensure_tree, mock_setup_container, mock_get_info, mock_teardown) | public | not declared | 1/38 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21776–L21816` |
| `LibvirtConnTestCase.test_get_vnc_console` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21818–L21836` |
| `LibvirtConnTestCase.test_get_vnc_console.fake_lookup` | function | (_uuid) | public | `vdmock` (src/nova/tests/unit/virt/libvirt/test_driver.py:L21830) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21828–L21830` |
| `LibvirtConnTestCase.test_get_vnc_console_unavailable` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21838–L21854` |
| `LibvirtConnTestCase.test_get_vnc_console_unavailable.fake_lookup` | function | (_uuid) | public | `vdmock` (src/nova/tests/unit/virt/libvirt/test_driver.py:L21848) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21846–L21848` |
| `LibvirtConnTestCase.test_get_spice_console` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21856–L21874` |
| `LibvirtConnTestCase.test_get_spice_console.fake_lookup` | function | (_uuid) | public | `vdmock` (src/nova/tests/unit/virt/libvirt/test_driver.py:L21868) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21866–L21868` |
| `LibvirtConnTestCase.test_get_spice_console_unavailable` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21876–L21892` |
| `LibvirtConnTestCase.test_get_spice_console_unavailable.fake_lookup` | function | (_uuid) | public | `vdmock` (src/nova/tests/unit/virt/libvirt/test_driver.py:L21886) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21884–L21886` |
| `LibvirtConnTestCase.test_detach_volume_with_instance_not_found` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21894–L21912` |
| `LibvirtConnTestCase._test_attach_detach_interface_get_config` | method | (self, method_name) | private | not declared | 4/37 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21914–L21962` |
| `LibvirtConnTestCase.test_attach_interface_get_config` | method | (self, mock_lock) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21965–L21971` |
| `LibvirtConnTestCase.test_detach_interface_get_config` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21973–L21977` |
| `LibvirtConnTestCase.test_default_root_device_name` | method | (self, mock_get_disk, mock_get_root) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L21981–L22000` |
| `LibvirtConnTestCase.test_default_device_names_for_instance` | method | (self, save_mock) | public | not declared | 1/34 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22003–L22042` |
| `LibvirtConnTestCase._test_get_device_name_for_instance` | method | (self, new_bdm, expected_dev) | private | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22044–L22051` |
| `LibvirtConnTestCase.test_get_device_name_for_instance_simple` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22053–L22060` |
| `LibvirtConnTestCase.test_get_device_name_for_instance_suggested` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22062–L22069` |
| `LibvirtConnTestCase.test_get_device_name_for_instance_bus` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22071–L22078` |
| `LibvirtConnTestCase.test_get_device_name_for_instance_device_type` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22080–L22087` |
| `LibvirtConnTestCase.test_is_supported_fs_format` | method | (self) | public | not declared | 3/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22089–L22101` |
| `LibvirtConnTestCase.test_is_supported_mem_encryption_model_unsupported` | method | (self, model) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22108–L22113` |
| `LibvirtConnTestCase.test_is_supported_mem_encryption_model_supported` | method | (self, model) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22120–L22125` |
| `LibvirtConnTestCase.test_is_supported_mem_encryption_invalid_model` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22127–L22135` |
| `LibvirtConnTestCase.test_post_live_migration_at_destination` | method | (self, mock_get_guest, mock_write_instance_config, mock_get_interfaces, mock_attach, mock_image_meta) | public | not declared | 1/29 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22143–L22177` |
| `LibvirtConnTestCase.test_create_guest_with_network__propagates_exceptions` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22179–L22199` |
| `LibvirtConnTestCase.test_create_guest_with_network__without_pause` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22201–L22221` |
| `LibvirtConnTestCase.test_create_guest_with_network__without_pause.fake_lxc_disk_handler` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22205–L22206` |
| `LibvirtConnTestCase._test_create_guest_with_network__events` | method | (self, neutron_failure=None, power_on=True) | private | not declared | 8/33 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22223–L22290` |
| `LibvirtConnTestCase._test_create_guest_with_network__events.wait_timeout` | function | (*args, **kwargs) | public | `event` (src/nova/tests/unit/virt/libvirt/test_driver.py:L22236) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22228–L22236` |
| `LibvirtConnTestCase._test_create_guest_with_network__events.fake_prepare` | function | (instance, name, tag) | public | `m` (src/nova/tests/unit/virt/libvirt/test_driver.py:L22244) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22238–L22244` |
| `LibvirtConnTestCase._test_create_guest_with_network__events.test_create` | function | (cleanup, create, plug_vifs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22261–L22275` |
| `LibvirtConnTestCase.test_create_guest_with_network__events_neutron` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22292–L22293` |
| `LibvirtConnTestCase.test_create_guest_with_network_events_neutron_power_off` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22295–L22297` |
| `LibvirtConnTestCase.test_create_guest_with_network__events_nowait` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22299–L22301` |
| `LibvirtConnTestCase.test_create_guest_with_network__events_failed_nonfatal_timeout` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22303–L22305` |
| `LibvirtConnTestCase.test_create_guest_with_network__events_failed_fatal_timeout` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22307–L22310` |
| `LibvirtConnTestCase.test_create_guest_with_network__events_failed_nonfatal_error` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22312–L22314` |
| `LibvirtConnTestCase.test_create_guest_with_network__events_failed_fatal_error` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22316–L22319` |
| `LibvirtConnTestCase.test_create_guest_with_network__with_other_error` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22321–L22339` |
| `LibvirtConnTestCase.test_create_guest_with_network__with_other_error.the_test` | function | (mock_cleanup, mock_create, mock_plug) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22327–L22338` |
| `LibvirtConnTestCase.test_create_guest_with_network__fatal_timeout_cleans_vtpm_secret` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22341–L22357` |
| `LibvirtConnTestCase.test_create_guest_with_network__fatal_timeout_cleans_vtpm_secret._test` | function | (mock_delete_secret, mock_cleanup, mock_create, mock_plug) | private | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22348–L22356` |
| `LibvirtConnTestCase.test_create_guest_with_network__other_error_cleans_vtpm_secret` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22359–L22374` |
| `LibvirtConnTestCase.test_create_guest_with_network__other_error_cleans_vtpm_secret._test` | function | (mock_delete_secret, mock_cleanup, mock_create, mock_plug) | private | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22366–L22373` |
| `LibvirtConnTestCase.test_create_guest_with_network__with_bdm` | method | (self, get_info_from_bdm, get_encryption_metadata) | public | not declared | 1/46 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22378–L22432` |
| `LibvirtConnTestCase.test_create_guest_with_network__with_bdm.fake_getitem` | function | (*args, **kwargs) | public | `fake_bdm.get(args[0])` (src/nova/tests/unit/virt/libvirt/test_driver.py:L22409) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22406–L22409` |
| `LibvirtConnTestCase.test_get_guest_storage_config` | method | (self) | public | not declared | 1/42 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22434–L22478` |
| `LibvirtConnTestCase.test_get_neutron_events` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22480–L22485` |
| `LibvirtConnTestCase.test_get_neutron_events_remote_managed` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22487–L22502` |
| `LibvirtConnTestCase.test_unplug_vifs_ignores_errors` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22504–L22509` |
| `LibvirtConnTestCase.test_unplug_vifs_reports_errors` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22511–L22517` |
| `LibvirtConnTestCase.test_cleanup_pass_with_no_connection_info` | method | (self, undefine, unplug) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22521–L22530` |
| `LibvirtConnTestCase.test_cleanup_pass_with_no_mount_device` | method | (self, undefine, unplug) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22534–L22544` |
| `LibvirtConnTestCase.test_cleanup_wants_vif_errors_ignored` | method | (self, undefine, unplug) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22548–L22558` |
| `LibvirtConnTestCase.test_cleanup_pass` | method | (self, mock_unplug, mock_get_mapping, mock_delete_files, mock_delete_vtpm, mock_undefine) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22567–L22588` |
| `LibvirtConnTestCase.test_cleanup_preserves_tpm_if_not_destroying_disks` | method | (self, mock_unplug, mock_get_mapping, mock_delete_files, mock_delete_vtpm, mock_undefine) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22597–L22615` |
| `LibvirtConnTestCase.test_cleanup_instance_marked_deleted` | method | (self, mock_unplug, mock_get_mapping, mock_delete_files, mock_delete_vtpm, mock_undefine) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22624–L22641` |
| `LibvirtConnTestCase.test_cleanup_migrate_data_shared_block_storage` | method | (self, _undefine_domain, save, delete_instance_files) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22647–L22664` |
| `LibvirtConnTestCase.test_cleanup_migrate_data_block_storage_and_share_instance_dir` | method | (self, _undefine_domain, save, delete_instance_files) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22670–L22683` |
| `LibvirtConnTestCase.test_cleanup_instance_dir_with_rbd_workaround` | method | (self, _undefine_domain, save, delete_instance_files) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22689–L22703` |
| `LibvirtConnTestCase.test_cleanup_destroy_secrets` | method | (self, mock_disconnect_volume) | public | not declared | 1/43 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22710–L22758` |
| `LibvirtConnTestCase.test_cleanup_disconnect_volume` | method | (self, mock_vol_driver) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22770–L22804` |
| `LibvirtConnTestCase.test_swap_volume_native_luks_blocked` | method | (self, mock_allow_native_luksv1, mock_get_encryption) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22808–L22827` |
| `LibvirtConnTestCase.test_swap_volume_copy` | method | (self, mock_write_instance_config) | public | not declared | 1/26 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22830–L22868` |
| `LibvirtConnTestCase.test_swap_volume_copy_failure` | method | (self, mock_write_instance_config) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22871–L22901` |
| `LibvirtConnTestCase.test_swap_volume` | method | (self, get_guest, connect_volume, get_volume_config, swap_volume, disconnect_volume) | public | not declared | 1/37 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22908–L22947` |
| `LibvirtConnTestCase.test_swap_volume_disconnect_new_volume_on_copy_error` | method | (self, write_config, get_guest, get_disk, get_volume_config, connect_volume, disconnect_volume, copy, get_volume_encryption) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22957–L22979` |
| `LibvirtConnTestCase.test_swap_volume_disconnect_new_volume_on_pivot_error` | method | (self, write_config, get_guest, get_disk, get_volume_config, connect_volume, disconnect_volume, abort_job, is_job_complete, get_volume_encryption) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L22990–L23014` |
| `LibvirtConnTestCase._test_live_snapshot` | method | (self, mock_chown, mock_is_job_complete, mock_delete, can_quiesce=False, require_quiesce=False) | private | not declared | 4/59 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23019–L23087` |
| `LibvirtConnTestCase.test_live_snapshot` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23089–L23090` |
| `LibvirtConnTestCase.test_live_snapshot_with_quiesce` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23092–L23093` |
| `LibvirtConnTestCase.test_live_snapshot_with_require_quiesce` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23095–L23096` |
| `LibvirtConnTestCase.test_live_snapshot_with_require_quiesce_fails` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23098–L23101` |
| `LibvirtConnTestCase.test_live_migration_hostname_valid` | method | (self, mock_lm) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23104–L23110` |
| `LibvirtConnTestCase.test_live_migration_hostname_invalid` | method | (self, mock_hostname, mock_lm) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23114–L23122` |
| `LibvirtConnTestCase.test_live_migration_force_complete` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23124–L23132` |
| `LibvirtConnTestCase.test_live_migration_abort` | method | (self, mock_abort, mock_conn) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23136–L23143` |
| `LibvirtConnTestCase.test_check_instance_shared_storage_local_raw` | method | (self, mock_close, mock_mkstemp, mock_exists) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23148–L23162` |
| `LibvirtConnTestCase.test_check_instance_shared_storage_local_rbd` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23164–L23170` |
| `LibvirtConnTestCase.test_version_to_string` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23172–L23174` |
| `LibvirtConnTestCase.test_virtuozzo_min_version_fail` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23176–L23185` |
| `LibvirtConnTestCase.test_virtuozzo_min_version_ok` | method | (self, mock_get_virtuozzo_version) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23193–L23196` |
| `LibvirtConnTestCase.test_get_guest_config_parallels_vm` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23198–L23233` |
| `LibvirtConnTestCase.test_get_guest_config_parallels_ct_rescue` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23235–L23236` |
| `LibvirtConnTestCase.test_get_guest_config_parallels_ct` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23238–L23239` |
| `LibvirtConnTestCase._test_get_guest_config_parallels_ct` | method | (self, rescue=False) | private | not declared | 4/49 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23241–L23294` |
| `LibvirtConnTestCase._test_get_guest_config_parallels_volume` | method | (self, vmmode, devices) | private | not declared | 5/46 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23296–L23348` |
| `LibvirtConnTestCase.test_get_guest_config_parallels_volume` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23350–L23352` |
| `LibvirtConnTestCase.test_get_guest_config_accel_pci` | method | (self, mock_add_pci) | public | not declared | 2/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23356–L23371` |
| `LibvirtConnTestCase.test_get_guest_config_accel_mdev` | method | (self, mock_add_pci) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23375–L23389` |
| `LibvirtConnTestCase.test_get_guest_config_accel_mixed_pci_and_mdev` | method | (self, mock_add_pci) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23393–L23411` |
| `LibvirtConnTestCase.test_get_guest_config_accel_unsupported_type` | method | (self, mock_add_pci, mock_log) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23416–L23433` |
| `LibvirtConnTestCase.test_allocate_cyborg_mdevs` | method | (self, mock_warn, mock_create_mdev) | public | not declared | 1/27 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23439–L23468` |
| `LibvirtConnTestCase.test_allocate_cyborg_mdevs_reuses_existing_devices` | method | (self, mock_warn, mock_create_mdev) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23474–L23493` |
| `LibvirtConnTestCase.test_allocate_cyborg_mdevs_reraises_lookup_errors` | method | (self, mock_warn, mock_create_mdev) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23499–L23516` |
| `LibvirtConnTestCase.test_warn_if_nova_managed` | method | (self, mock_log) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23519–L23538` |
| `LibvirtConnTestCase.test_warn_if_nova_managed_default` | method | (self, mock_log) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23541–L23551` |
| `LibvirtConnTestCase.test_get_guest_disk_config_rbd_older_config_drive_fall_back` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23553–L23583` |
| `LibvirtConnTestCase._test_suspend_guest_for_snapshot` | method | (self, live_snapshot, state) | private | `mock_suspend.called` (src/nova/tests/unit/virt/libvirt/test_driver.py:L23593) | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23585–L23593` |
| `LibvirtConnTestCase.test_suspend_guest_for_snapshot` | method | (self) | public | not declared | 3/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23595–L23603` |
| `LibvirtConnTestCase.test_suspend_guest_for_snapshot__lxc` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23605–L23610` |
| `LibvirtConnTestCase.test_suspend_guest_for_snapshot__live_snapshots` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23612–L23616` |
| `LibvirtConnTestCase._test_resume_guest_after_snapshot` | method | (self, live_snapshot, state) | private | `guest.launch.called` (src/nova/tests/unit/virt/libvirt/test_driver.py:L23630) | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23618–L23630` |
| `LibvirtConnTestCase.test_resume_guest_after_snapshot` | method | (self) | public | not declared | 3/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23632–L23640` |
| `LibvirtConnTestCase.test_resume_guest_after_snapshot__lxc` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23642–L23647` |
| `LibvirtConnTestCase.test_resume_guest_after_snapshot__live_snapshots` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23649–L23653` |
| `LibvirtConnTestCase.test_get_instance_disk_info_parallels_ct` | method | (self, mock_get_domain, mock_qemu_img_info, mock_isdir, mock_getsize, mock_exists, mock_walk) | public | not declared | 1/36 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23661–L23706` |
| `LibvirtConnTestCase.test_get_instance_disk_info_parallels_ct.getsize_sideeffect` | function | (*args, **kwargs) | public | `790` (src/nova/tests/unit/virt/libvirt/test_driver.py:L23692); `827326464` (src/nova/tests/unit/virt/libvirt/test_driver.py:L23694) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23690–L23694` |
| `LibvirtConnTestCase.test_get_guest_config_with_mdevs` | method | (self) | public | not declared | 3/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23708–L23724` |
| `LibvirtConnTestCase.test_get_guest_config_with_vpmems` | method | (self, mock_get_vpmems_label) | public | not declared | 3/31 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23727–L23759` |
| `LibvirtConnTestCase.test_get_cpu_model_mapping` | method | (self, mock_cap) | public | not declared | 4/26 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23762–L23788` |
| `LibvirtConnTestCase.test_update_host_specific_capabilities_with_maxphysaddr` | method | (self, mock_get_lib_version, mock_type) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23795–L23802` |
| `LibvirtConnTestCase.test_update_host_specific_capabilities_without_stateless_firmware` | method | (self, mock_get_version) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23807–L23812` |
| `LibvirtConnTestCase.test_update_host_specific_capabilities_with_stateless_firmware` | method | (self, mock_get_version) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23817–L23822` |
| `LibvirtConnTestCase.test_update_host_specific_capabilities_without_maxphysaddr` | method | (self, mock_get_lib_version, mock_type) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23829–L23836` |
| `LibvirtConnTestCase.test_get_guest_config_feature_tcg` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23838–L23851` |
| `LibvirtConnTestCase.test_cleanup_host` | method | (self, mock_cleanup) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23854–L23857` |
| `TestGuestConfigSysinfoSerialOS` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23860–L23957` |
| `TestGuestConfigSysinfoSerialOS.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23861–L23871` |
| `TestGuestConfigSysinfoSerialOS._test_get_guest_config_sysinfo_serial` | method | (self, expected_serial) | private | not declared | 2/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23873–L23895` |
| `TestGuestConfigSysinfoSerialOS.test_get_guest_config_sysinfo_serial_none` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23897–L23899` |
| `TestGuestConfigSysinfoSerialOS.test_get_guest_config_sysinfo_serial_hardware` | method | (self, mock_uuid) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23903–L23909` |
| `TestGuestConfigSysinfoSerialOS.test_get_guest_config_sysinfo_serial_os` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23911–L23918` |
| `TestGuestConfigSysinfoSerialOS.test_get_guest_config_sysinfo_serial_os_empty_machine_id` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23920–L23927` |
| `TestGuestConfigSysinfoSerialOS.test_get_guest_config_sysinfo_serial_os_no_machine_id_file` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23929–L23934` |
| `TestGuestConfigSysinfoSerialOS.theuuid` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23936–L23936` |
| `TestGuestConfigSysinfoSerialOS.test_get_guest_config_sysinfo_serial_auto_hardware` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23939–L23947` |
| `TestGuestConfigSysinfoSerialOS.test_get_guest_config_sysinfo_serial_auto_os` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23951–L23953` |
| `TestGuestConfigSysinfoSerialOS.test_get_guest_config_sysinfo_serial_unique` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23955–L23957` |
| `HostStateTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23960–L24094` |
| `HostStateTestCase.cpu_info` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23962–L23967` |
| `HostStateTestCase.instance_caps` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23968–L23969` |
| `HostStateTestCase.pci_devices` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23970–L23976` |
| `HostStateTestCase.numa_topology` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23977–L23997` |
| `HostStateTestCase.FakeConnection` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L23999–L24055` |
| `HostStateTestCase.FakeConnection.__init__` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24002–L24015` |
| `HostStateTestCase.FakeConnection.__init__._get_memory_mb_total` | function | — | private | `497` (src/nova/tests/unit/virt/libvirt/test_driver.py:L24009) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24008–L24009` |
| `HostStateTestCase.FakeConnection.__init__._get_memory_mb_used` | function | — | private | `88` (src/nova/tests/unit/virt/libvirt/test_driver.py:L24012) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24011–L24012` |
| `HostStateTestCase.FakeConnection._get_pcpu_available` | method | (self) | private | `set([0])` (src/nova/tests/unit/virt/libvirt/test_driver.py:L24018) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24017–L24018` |
| `HostStateTestCase.FakeConnection._get_vcpu_available` | method | (self) | private | `set([1])` (src/nova/tests/unit/virt/libvirt/test_driver.py:L24021) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24020–L24021` |
| `HostStateTestCase.FakeConnection._get_vcpu_used` | method | (self) | private | `0` (src/nova/tests/unit/virt/libvirt/test_driver.py:L24024) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24023–L24024` |
| `HostStateTestCase.FakeConnection._get_cpu_info` | method | (self) | private | `HostStateTestCase.cpu_info` (src/nova/tests/unit/virt/libvirt/test_driver.py:L24027) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24026–L24027` |
| `HostStateTestCase.FakeConnection._get_disk_over_committed_size_total` | method | (self) | private | `0` (src/nova/tests/unit/virt/libvirt/test_driver.py:L24030) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24029–L24030` |
| `HostStateTestCase.FakeConnection._get_local_gb_info` | method | (self) | private | `{'total': 100, 'used': 20, 'free': 80}` (src/nova/tests/unit/virt/libvirt/test_driver.py:L24033) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24032–L24033` |
| `HostStateTestCase.FakeConnection.get_host_uptime` | method | (self) | public | `('10:01:16 up 1:36, 6 users, ' 'load average: 0.21, 0.16, 0.19')` (src/nova/tests/unit/virt/libvirt/test_driver.py:L24036) | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24035–L24037` |
| `HostStateTestCase.FakeConnection._get_disk_available_least` | method | (self) | private | `13091` (src/nova/tests/unit/virt/libvirt/test_driver.py:L24040) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24039–L24040` |
| `HostStateTestCase.FakeConnection._get_instance_capabilities` | method | (self) | private | `HostStateTestCase.instance_caps` (src/nova/tests/unit/virt/libvirt/test_driver.py:L24043) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24042–L24043` |
| `HostStateTestCase.FakeConnection._get_pci_passthrough_devices` | method | (self) | private | `jsonutils.dumps(HostStateTestCase.pci_devices)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L24046) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24045–L24046` |
| `HostStateTestCase.FakeConnection._get_mdev_capable_devices` | method | (self, types=None) | private | `[]` (src/nova/tests/unit/virt/libvirt/test_driver.py:L24049) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24048–L24049` |
| `HostStateTestCase.FakeConnection._get_mediated_devices` | method | (self, types=None) | private | `[]` (src/nova/tests/unit/virt/libvirt/test_driver.py:L24052) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24051–L24052` |
| `HostStateTestCase.FakeConnection._get_host_numa_topology` | method | (self) | private | `HostStateTestCase.numa_topology` (src/nova/tests/unit/virt/libvirt/test_driver.py:L24055) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24054–L24055` |
| `HostStateTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24057–L24059` |
| `HostStateTestCase.test_update_status` | method | (self, mock_open) | public | not declared | 1/31 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24062–L24094` |
| `TestUpdateProviderTree` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24097–L25208` |
| `TestUpdateProviderTree.vcpus` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24098–L24098` |
| `TestUpdateProviderTree.pcpus` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24099–L24099` |
| `TestUpdateProviderTree.memory_mb` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24100–L24100` |
| `TestUpdateProviderTree.disk_gb` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24101–L24101` |
| `TestUpdateProviderTree.cpu_traits` | field | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24102–L24102` |
| `TestUpdateProviderTree.setUp` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24104–L24125` |
| `TestUpdateProviderTree._get_inventory` | method | (self) | private | `{ orc.VCPU: { 'total': self.vcpus, 'min_unit': 1, 'max_unit': self.vcpus, 'step_size': 1, 'allocation_ratio': 4.0, 'reserved': 0, }, orc.PCPU: { 'total': self.pcpus, 'min_unit': 1, 'max_unit': self.pc` (src/nova/tests/unit/virt/libvirt/test_driver.py:L24128) | 1/35 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24127–L24161` |
| `TestUpdateProviderTree._test_update_provider_tree` | method | (self, mock_gpu_invs, gpu_invs=None, vpmems=None) | private | not declared | 3/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24178–L24186` |
| `TestUpdateProviderTree.test_update_provider_tree` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24188–L24193` |
| `TestUpdateProviderTree.test_update_provider_tree_zero_total` | method | (self, mock_gpu_invs) | public | not declared | 2/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24210–L24246` |
| `TestUpdateProviderTree.test_update_provider_tree_with_vgpus` | method | (self) | public | not declared | 3/46 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24248–L24300` |
| `TestUpdateProviderTree.test_update_provider_tree_for_vpmem` | method | (self) | public | not declared | 1/51 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24302–L24353` |
| `TestUpdateProviderTree.test_update_provider_tree_with_memory_encryption_sev` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24355–L24385` |
| `TestUpdateProviderTree.test_update_provider_tree_with_memory_encryption_sev_es` | method | (self) | public | not declared | 1/45 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24387–L24435` |
| `TestUpdateProviderTree.test_update_provider_tree_with_memory_encryption_sev_snp` | method | (self) | public | not declared | 1/45 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24437–L24485` |
| `TestUpdateProviderTree.test_update_provider_tree_for_shared_disk_gb_resource` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24497–L24528` |
| `TestUpdateProviderTree.test_update_provider_tree_with_file_backed_memory` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24530–L24535` |
| `TestUpdateProviderTree.test_update_provider_tree_with_cpu_traits` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24537–L24543` |
| `TestUpdateProviderTree.test_update_provider_tree_with_tpm_secret_security_traits` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24545–L24556` |
| `TestUpdateProviderTree.test_update_provider_tree_with_tpm_secret_security_traits_none` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24558–L24567` |
| `TestUpdateProviderTree.test_update_provider_tree_with_tpm_traits_supported` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24573–L24579` |
| `TestUpdateProviderTree.test_update_provider_tree_with_tpm_traits_versions` | method | (self) | public | not declared | 3/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24585–L24591` |
| `TestUpdateProviderTree.test_update_provider_tree_for_vgpu_reshape` | method | (self, mock_gpus, mock_get_devs, mock_get_mdev_info) | public | not declared | 4/89 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24612–L24730` |
| `TestUpdateProviderTree.test_update_provider_tree_for_vgpu_reshape_fails` | method | (self, mock_gpus) | public | not declared | 1/46 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24744–L24801` |
| `TestUpdateProviderTree.test_update_provider_tree_for_memory_encryption_reshape` | method | (self) | public | not declared | 1/76 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24814–L24915` |
| `TestUpdateProviderTree.test_update_provider_tree_for_memory_encryption_reshape_fails` | method | (self) | public | not declared | 1/36 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24928–L24970` |
| `TestUpdateProviderTree.test_update_provider_tree_for_pcpu_reshape` | method | (self, mock_get_cn, mock_get_instances, mock_get_migrations, mock_get_instance) | public | not declared | 1/136 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L24988–L25181` |
| `TestUpdateProviderTree.test_image_cache_disk_reservation` | method | (self, mock_cache_manager) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25185–L25208` |
| `TraitsComparisonMixin` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25211–L25216` |
| `TraitsComparisonMixin.assertTraitsEqual` | method | (self, expected, actual) | public | not declared | 2/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25213–L25216` |
| `LibvirtDriverTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25220–L31396` |
| `LibvirtDriverTestCase.setUp` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25223–L25236` |
| `LibvirtDriverTestCase._create_instance` | method | (self, params=None) | private | `instance` (src/nova/tests/unit/virt/libvirt/test_driver.py:L25296) | 3/48 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25238–L25296` |
| `LibvirtDriverTestCase.test_migrate_disk_and_power_off_exception` | method | (self, mock_execute, mock_exists, mock_rename, mock_is_shared, mock_get_host_ip, mock_destroy, mock_get_disk_info) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25309–L25323` |
| `LibvirtDriverTestCase._test_migrate_disk_and_power_off` | method | (self, ctxt, flavor_obj, mock_execute, mock_exists, mock_rename, mock_is_shared, mock_get_host_ip, mock_destroy, mock_get_disk_info, mock_vtpm, mock_unplug_vifs, mock_cleanup, block_device_info=None, params_for_instance=None) | private | not declared | 1/27 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25339–L25374` |
| `LibvirtDriverTestCase.test_migrate_disk_and_power_off` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25376–L25379` |
| `LibvirtDriverTestCase.test_migrate_disk_and_power_off_boot_from_volume` | method | (self, disconnect_volume) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25382–L25403` |
| `LibvirtDriverTestCase.test_migrate_disk_and_power_off_boot_from_volume_backed_snapshot` | method | (self, disconnect_volume) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25406–L25429` |
| `LibvirtDriverTestCase.test_migrate_disk_and_power_off_swap` | method | (self, mock_get_disk_info, get_host_ip_addr, mock_destroy, mock_copy_image, mock_rename) | public | not declared | 3/25 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25439–L25479` |
| `LibvirtDriverTestCase._test_migrate_disk_and_power_off_resize_check` | method | (self, expected_exc) | private | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25483–L25494` |
| `LibvirtDriverTestCase._test_migrate_disk_and_power_off_backing_file` | method | (self, shared_storage, mock_is_shared_storage, mock_get_disk_info, mock_destroy, mock_rename, mock_execute, mock_vtpm) | private | not declared | 2/30 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25506–L25543` |
| `LibvirtDriverTestCase._test_migrate_disk_and_power_off_backing_file.fake_execute` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25524–L25525` |
| `LibvirtDriverTestCase.test_migrate_disk_and_power_off_shared_storage` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25545–L25546` |
| `LibvirtDriverTestCase.test_migrate_disk_and_power_off_non_shared_storage` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25548–L25549` |
| `LibvirtDriverTestCase.test_migrate_disk_and_power_off_lvm` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25551–L25555` |
| `LibvirtDriverTestCase.test_migrate_disk_and_power_off_resize_cannot_ssh` | method | (self, mock_is_shared) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25559–L25567` |
| `LibvirtDriverTestCase.test_migrate_disk_and_power_off_resize_cannot_ssh.fake_execute` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25561–L25562` |
| `LibvirtDriverTestCase.test_migrate_disk_and_power_off_resize_error` | method | (self, mock_get_disk_info) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25571–L25580` |
| `LibvirtDriverTestCase.test_migrate_disk_and_power_off_resize_error_rbd` | method | (self, mock_get_disk_info) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25584–L25600` |
| `LibvirtDriverTestCase.test_migrate_disk_and_power_off_resize_error_default_ephemeral` | method | (self, mock_get_disk_info) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25604–L25614` |
| `LibvirtDriverTestCase.test_migrate_disk_and_power_off_resize_error_eph` | method | (self, mock_get) | public | not declared | 1/52 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25617–L25673` |
| `LibvirtDriverTestCase.test_migrate_disk_and_power_off_resize_copy_disk_info` | method | (self, mock_disk_info, mock_shared, mock_path, mock_destroy, mock_copy, mock_execute, mock_rename) | public | not declared | 1/25 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25686–L25716` |
| `LibvirtDriverTestCase.test_wait_for_running` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25718–L25744` |
| `LibvirtDriverTestCase.test_wait_for_running.fake_get_info` | function | (self, instance) | public | `hardware.InstanceInfo(state=power_state.RUNNING)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L25723); `hardware.InstanceInfo(state=power_state.SHUTDOWN)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L25725) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25719–L25725` |
| `LibvirtDriverTestCase.test_disk_raw_to_qcow2` | method | (self, mock_rename, mock_execute, mock_direct_io, mock_disk_op_sema) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25750–L25762` |
| `LibvirtDriverTestCase.test_disk_raw_to_qcow2_no_directio` | method | (self, mock_rename, mock_execute, mock_direct_io, mock_disk_op_sema) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25768–L25782` |
| `LibvirtDriverTestCase._test_finish_migration` | method | (self, mock_instance_metadata, mock_supports_direct_io, mock_build_device_metadata, mock_set_host_enabled, mock_raw_to_qcow2, mock_create_guest_with_network, mock_get_info, mock_inject_data, mock_finish_vtpm, mock_alloc_mdevs, power_on=True, resize_instance=False) | private | not declared | 5/55 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25798–L25884` |
| `LibvirtDriverTestCase.test_finish_migration_resize` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25886–L25890` |
| `LibvirtDriverTestCase.test_finish_migration_power_on` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25892–L25896` |
| `LibvirtDriverTestCase.test_finish_migration_power_off` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25898–L25899` |
| `LibvirtDriverTestCase._test_finish_migration_vtpm` | method | (self, old_flavor, new_flavor, instance=None) | private | not declared | 4/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25901–L25907` |
| `LibvirtDriverTestCase.test_finish_migration_vtpm` | method | (self, mock_exists, mock_restore, mock_get_path, mock_rmtree) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25913–L25925` |
| `LibvirtDriverTestCase.test_finish_migration_vtpm_version_change` | method | (self, mock_exists, mock_restore, mock_get_path, mock_rmtree) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25931–L25947` |
| `LibvirtDriverTestCase.test_finish_migration_vtpm_no_tpm` | method | (self, mock_exists, mock_restore, mock_rmtree) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25952–L25962` |
| `LibvirtDriverTestCase.test_finish_migration_vtpm_no_swtpm_dir` | method | (self, mock_exists, mock_restore, mock_rmtree) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25967–L25973` |
| `LibvirtDriverTestCase.test_finish_revert_migration_vtpm__no_vtpm_back_to_vtpm` | method | (self, mock_path, mock_join, mock_exists, mock_restore_vtpm) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25979–L25992` |
| `LibvirtDriverTestCase.test_finish_revert_migration_vtpm__vtpm_back_to_no_vtpm` | method | (self, mock_delete_vtpm) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L25995–L26006` |
| `LibvirtDriverTestCase.test_finish_revert_migration_vtpm__no_vtpm` | method | (self, mock_restore_vtpm, mock_delete_vtpm) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26010–L26021` |
| `LibvirtDriverTestCase._test_finish_revert_migration` | method | (self, power_on) | private | not declared | 1/45 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26023–L26098` |
| `LibvirtDriverTestCase._test_finish_revert_migration.fake_execute` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26031–L26032` |
| `LibvirtDriverTestCase._test_finish_revert_migration.fake_plug_vifs` | function | (self, instance, network_info) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26034–L26035` |
| `LibvirtDriverTestCase._test_finish_revert_migration.fake_create_guest_with_network` | function | (_self, context, xml, instance, network_info, block_device_info, power_on=None, vifs_already_plugged=None, post_xml_callback=None, cleanup_instance_dir=False, cleanup_instance_disks=False) | public | `mock.MagicMock()` (src/nova/tests/unit/virt/libvirt/test_driver.py:L26045) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26037–L26045` |
| `LibvirtDriverTestCase._test_finish_revert_migration.fake_get_info` | function | (self, instance) | public | `hardware.InstanceInfo(state=power_state.RUNNING)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L26049); `hardware.InstanceInfo(state=power_state.SHUTDOWN)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L26051) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26047–L26051` |
| `LibvirtDriverTestCase._test_finish_revert_migration.fake_to_xml` | function | (self, context, instance, network_info, disk_info, image_meta=None, rescue=None, block_device_info=None, mdevs=None, share_info=None, old_guest=None) | public | `""` (src/nova/tests/unit/virt/libvirt/test_driver.py:L26057) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26053–L26057` |
| `LibvirtDriverTestCase.test_finish_revert_migration_power_on` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26100–L26101` |
| `LibvirtDriverTestCase.test_finish_revert_migration_power_off` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26103–L26104` |
| `LibvirtDriverTestCase._test_finish_revert_migration_after_crash` | method | (self, backup_made=True, del_inst_failed=False) | private | not declared | 3/38 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26106–L26147` |
| `LibvirtDriverTestCase.test_finish_revert_migration_after_crash` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26149–L26150` |
| `LibvirtDriverTestCase.test_finish_revert_migration_after_crash_before_new` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26152–L26153` |
| `LibvirtDriverTestCase.test_finish_revert_migration_after_crash_before_backup` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26155–L26156` |
| `LibvirtDriverTestCase.test_finish_revert_migration_after_crash_delete_failed` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26158–L26160` |
| `LibvirtDriverTestCase.test_finish_revert_migration_preserves_disk_bus` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26162–L26192` |
| `LibvirtDriverTestCase.test_finish_revert_migration_preserves_disk_bus.fake_get_guest_xml` | function | (context, instance, network_info, disk_info, image_meta, block_device_info=None, mdevs=None, old_guest=None, share_info=None) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26164–L26167` |
| `LibvirtDriverTestCase.test_finish_revert_migration_snap_backend` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26194–L26218` |
| `LibvirtDriverTestCase.test_finish_revert_migration_snap_backend_snapshot_not_found` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26220–L26243` |
| `LibvirtDriverTestCase.test_finish_revert_migration_snap_backend_image_does_not_exist` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26245–L26268` |
| `LibvirtDriverTestCase.test_cleanup_failed_instance_base` | method | (self, mock_rmtree) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26271–L26273` |
| `LibvirtDriverTestCase.test_confirm_migration` | method | (self, mock_cleanup) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26276–L26282` |
| `LibvirtDriverTestCase.test_cleanup_resize_same_host` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26285–L26306` |
| `LibvirtDriverTestCase.test_cleanup_resize_not_same_host` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26309–L26339` |
| `LibvirtDriverTestCase.test_cleanup_resize_not_same_host_works_when_unplug_fails` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26342–L26377` |
| `LibvirtDriverTestCase.test_cleanup_resize_not_same_host_volume_backed` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26380–L26415` |
| `LibvirtDriverTestCase.test_cleanup_resize_snap_backend` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26418–L26443` |
| `LibvirtDriverTestCase.test_cleanup_resize_snap_backend_image_does_not_exist` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26446–L26475` |
| `LibvirtDriverTestCase.test_get_instance_disk_info_exception` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26477–L26494` |
| `LibvirtDriverTestCase.test_get_instance_disk_info_exception.FakeExceptionDomain` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26480–L26485` |
| `LibvirtDriverTestCase.test_get_instance_disk_info_exception.FakeExceptionDomain.__init__` | method | (self) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26481–L26482` |
| `LibvirtDriverTestCase.test_get_instance_disk_info_exception.FakeExceptionDomain.XMLDesc` | method | (self, flags) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26484–L26485` |
| `LibvirtDriverTestCase.test_get_instance_disk_info_exception.fake_get_domain` | function | (self, instance) | public | `FakeExceptionDomain()` (src/nova/tests/unit/virt/libvirt/test_driver.py:L26488) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26487–L26488` |
| `LibvirtDriverTestCase.test_lvm_disks` | method | (self, listlvs, exists) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26498–L26505` |
| `LibvirtDriverTestCase.test_is_booted_from_volume` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26507–L26524` |
| `LibvirtDriverTestCase._test_noop_flatten_fetch_image_cache` | method | (self, instance) | private | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26526–L26543` |
| `LibvirtDriverTestCase.test_unshelve_noop_flatten_fetch_image_cache` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26545–L26548` |
| `LibvirtDriverTestCase.test_cross_cell_move_noop_flatten_fetch_image_cache` | method | (self, mock_is_ccm) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26552–L26556` |
| `LibvirtDriverTestCase._test_rbd_image_flatten_during_fetch_image_cache` | method | (self, instance) | private | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26558–L26583` |
| `LibvirtDriverTestCase.test_rbd_image_flatten_during_fetch_image_cache` | method | (self, mock_debug) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26586–L26591` |
| `LibvirtDriverTestCase.test_cross_cell_move_rbd_flatten_fetch_image_cache` | method | (self, mock_is_ccm, mock_debug) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26596–L26604` |
| `LibvirtDriverTestCase._test_qcow2_rebase_image_during_create` | method | (self, mock_rebase, mock_fetch, image_ref, base_image_ref, vm_state=None, task_state=None, original_image_in_glance=True, rebase_expected=True) | private | not declared | 3/51 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26608–L26677` |
| `LibvirtDriverTestCase.test_unshelve_qcow2_rebase_image_during_create` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26679–L26688` |
| `LibvirtDriverTestCase.test_unshelve_qcow2_rebase_image_during_create_notfound` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26690–L26699` |
| `LibvirtDriverTestCase.test_cross_cell_resize_qcow2_rebase_image_during_create` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26701–L26706` |
| `LibvirtDriverTestCase.test_cross_cell_resize_qcow2_rebase_image_during_create_notfound` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26708–L26714` |
| `LibvirtDriverTestCase.test_local_cell_resize_qcow2_rebase_image_during_create` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26716–L26724` |
| `LibvirtDriverTestCase.test_data_not_injects_with_configdrive` | method | (self, mock_inject) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26730–L26746` |
| `LibvirtDriverTestCase.test_create_fetch_image_ceph_workaround` | method | (self, mock_image, mock_rbd, mock_fetch) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26751–L26796` |
| `LibvirtDriverTestCase.test_create_fetch_image_ceph_workaround.do_create` | function | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26770–L26781` |
| `LibvirtDriverTestCase._test_inject_data` | method | (self, instance, injection_info, path, disk_params, mock_conn, disk_inject_data, inj_network, called=True) | private | not declared | 2/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26801–L26830` |
| `LibvirtDriverTestCase._test_inject_data.ImageBackend` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26804–L26809` |
| `LibvirtDriverTestCase._test_inject_data.ImageBackend.get_model` | method | (self, connection) | public | `imgmodel.LocalFileImage(self.path, imgmodel.FORMAT_RAW)` (src/nova/tests/unit/virt/libvirt/test_driver.py:L26808) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26807–L26809` |
| `LibvirtDriverTestCase._test_inject_data.fake_inj_network` | function | (*args, **kwds) | public | `args[0] or None` (src/nova/tests/unit/virt/libvirt/test_driver.py:L26812) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26811–L26812` |
| `LibvirtDriverTestCase.test_inject_data_adminpass` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26832–L26848` |
| `LibvirtDriverTestCase.test_inject_data_key` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26850–L26868` |
| `LibvirtDriverTestCase.test_inject_data_metadata` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26870–L26880` |
| `LibvirtDriverTestCase.test_inject_data_files` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26882–L26892` |
| `LibvirtDriverTestCase.test_inject_data_net` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26894–L26904` |
| `LibvirtDriverTestCase.test_inject_not_exist_image` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26906–L26917` |
| `LibvirtDriverTestCase.test_attach_interface_build_metadata_fails` | method | (self) | public | not declared | 1/52 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26919–L26970` |
| `LibvirtDriverTestCase.test_attach_interface_guest_set_metadata` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L26972–L27000` |
| `LibvirtDriverTestCase._test_attach_interface` | method | (self, power_state, expected_flags, mock_get_domain, mock_attach, mock_info, mock_build, mock_save, mock_get_network_info, mock_me_config, me_config=None) | private | not declared | 1/44 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27010–L27056` |
| `LibvirtDriverTestCase.test_attach_interface_with_running_instance` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27058–L27062` |
| `LibvirtDriverTestCase.test_attach_interface_with_pause_instance` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27064–L27068` |
| `LibvirtDriverTestCase.test_attach_interface_with_shutdown_instance` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27070–L27072` |
| `LibvirtDriverTestCase._test_detach_interface` | method | (self, state, device_not_found=False) | private | not declared | 5/104 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27074–L27189` |
| `LibvirtDriverTestCase.test_detach_interface_with_running_instance` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27191–L27193` |
| `LibvirtDriverTestCase.test_detach_interface_with_running_instance_device_not_found` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27195–L27198` |
| `LibvirtDriverTestCase.test_detach_interface_with_pause_instance` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27200–L27202` |
| `LibvirtDriverTestCase.test_detach_interface_with_shutdown_instance` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27204–L27205` |
| `LibvirtDriverTestCase.test_detach_interface_device_not_found` | method | (self, mock_log) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27208–L27228` |
| `LibvirtDriverTestCase.test_detach_interface_device_with_same_mac_address` | method | (self, mock_get_domain, mock_detach, mock_info) | public | not declared | 1/76 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27233–L27309` |
| `LibvirtDriverTestCase.test_detach_interface_guest_set_metadata` | method | (self) | public | not declared | 1/43 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27311–L27354` |
| `LibvirtDriverTestCase.test__detach_with_retry_persistent_success` | method | (self) | public | not declared | 1/30 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27356–L27394` |
| `LibvirtDriverTestCase.test__detach_with_retry_live_success` | method | (self, state, device_class) | public | not declared | 1/34 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27405–L27448` |
| `LibvirtDriverTestCase.test__detach_with_retry_persistent_and_live_success` | method | (self, state) | public | not declared | 1/37 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27451–L27507` |
| `LibvirtDriverTestCase.test__detach_with_retry_persistent_and_live_success.fake_detach` | function | (dev, persistent, live) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27478–L27481` |
| `LibvirtDriverTestCase.test__detach_with_retry_persistent_but_guest_is_not` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27509–L27529` |
| `LibvirtDriverTestCase.test__detach_with_retry_persistent_dev_not_found` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27531–L27555` |
| `LibvirtDriverTestCase.test__detach_with_retry_live_dev_not_found` | method | (self, state) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27558–L27581` |
| `LibvirtDriverTestCase.test__detach_with_retry_live_dev_not_found_operation_failed` | method | (self, state) | public | not declared | 1/27 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27584–L27627` |
| `LibvirtDriverTestCase.test__detach_with_retry_async_fail` | method | (self, state) | public | not declared | 1/25 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27630–L27663` |
| `LibvirtDriverTestCase.test__detach_with_retry_timeout_retry_succeeds` | method | (self, state, mock_event_wait) | public | not declared | 1/32 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27668–L27720` |
| `LibvirtDriverTestCase.test__detach_with_retry_timeout_retry_unplug_in_progress` | method | (self, mock_event_wait) | public | not declared | 1/34 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27724–L27800` |
| `LibvirtDriverTestCase.test__detach_with_retry_timeout_retry_unplug_in_progress.fake_detach_device` | function | (dev, persistent, live) | public | `` (src/nova/tests/unit/virt/libvirt/test_driver.py:L27766) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27764–L27779` |
| `LibvirtDriverTestCase.test__detach_with_retry_timeout_run_out_of_retries` | method | (self, state, mock_event_wait) | public | not declared | 1/29 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27805–L27851` |
| `LibvirtDriverTestCase.test__detach_with_retry_libvirt_reports_not_found_live_detach_done` | method | (self, state) | public | not declared | 1/38 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27854–L27923` |
| `LibvirtDriverTestCase.test__detach_with_retry_libvirt_reports_not_found_live_detach_done.fake_detach_device` | function | (dev, persistent, live) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27889–L27898` |
| `LibvirtDriverTestCase.test__detach_with_retry_libvirt_reports_not_found_give_up` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27925–L27965` |
| `LibvirtDriverTestCase.test__detach_with_retry_libvirt_reports_domain_not_found` | method | (self, mock_warning) | public | not declared | 1/34 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L27968–L28015` |
| `LibvirtDriverTestCase.test__detach_with_retry_other_sync_libvirt_error` | method | (self, state) | public | not declared | 1/29 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28018–L28056` |
| `LibvirtDriverTestCase._test_rescue` | method | (self, instance, mock_instance_metadata, mock_supports_direct_io, mock_build_device_metadata, mock_set_host_enabled, mock_get_mdev, mock_get_guest, mock_get_image_meta_by_ref, image_meta_dict=None, exists=None, instance_image_meta_dict=None, block_device_info=None, share_info=None) | private | `backend, etree.fromstring(domain_xml[0])` (src/nova/tests/unit/virt/libvirt/test_driver.py:L28125) | 3/35 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28072–L28125` |
| `LibvirtDriverTestCase._test_rescue.fake_create_guest` | function | (context, xml, instance, power_on=True, pause=False, post_xml_callback=None) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28103–L28109` |
| `LibvirtDriverTestCase.test_rescue` | method | (self) | public | not declared | 5/25 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28127–L28167` |
| `LibvirtDriverTestCase.test_rescue_with_different_hw_disk_bus` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28169–L28190` |
| `LibvirtDriverTestCase.test_rescue_config_drive` | method | (self, mock_mkisofs) | public | not declared | 5/27 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28193–L28236` |
| `LibvirtDriverTestCase.test_rescue_stable_device_unsupported_virt_types` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28239–L28254` |
| `LibvirtDriverTestCase.test_rescue_stable_device` | method | (self) | public | not declared | 2/31 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28256–L28295` |
| `LibvirtDriverTestCase.test_rescue_stable_device_with_volume_attached` | method | (self) | public | not declared | 1/48 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28297–L28353` |
| `LibvirtDriverTestCase.test_supports_bfv_rescue_capability` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28355–L28358` |
| `LibvirtDriverTestCase.test_rescue_stable_device_bfv_without_instance_image_ref` | method | (self) | public | not declared | 1/64 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28360–L28438` |
| `LibvirtDriverTestCase.test_rescue_stable_device_bfv` | method | (self) | public | not declared | 1/42 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28440–L28496` |
| `LibvirtDriverTestCase._test_unrescue` | method | (self, instance, mock_get_domain, mock_load_file, mock_get_instance_path) | private | not declared | 1/45 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28502–L28553` |
| `LibvirtDriverTestCase._test_unrescue.isdir_sideeffect` | function | (*args, **kwargs) | public | `False` (src/nova/tests/unit/virt/libvirt/test_driver.py:L28523); `True` (src/nova/tests/unit/virt/libvirt/test_driver.py:L28525) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28521–L28525` |
| `LibvirtDriverTestCase.test_unrescue` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28555–L28557` |
| `LibvirtDriverTestCase.test_unrescue_rbd` | method | (self, mock_rados, mock_rbd, mock_connect, mock_disconnect, mock_destroy_volume) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28564–L28576` |
| `LibvirtDriverTestCase.test_delete_instance_files` | method | (self, mock_get_instance_path, mock_exists, mock_rename, mock_shutil) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28582–L28594` |
| `LibvirtDriverTestCase.test_delete_instance_files_kill_running` | method | (self, mock_get_instance_path, mock_kill, mock_exists, mock_rename, mock_shutil) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28601–L28618` |
| `LibvirtDriverTestCase.test_delete_instance_files_resize` | method | (self, mock_get_instance_path, mock_exists, mock_rename, mock_shutil) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28624–L28639` |
| `LibvirtDriverTestCase.test_delete_instance_files_failed` | method | (self, mock_get_instance_path, mock_exists, mock_rename, mock_shutil) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28645–L28657` |
| `LibvirtDriverTestCase.test_delete_instance_files_mv_failed` | method | (self, mock_get_instance_path, mock_exists, mock_rename, mock_shutil) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28663–L28677` |
| `LibvirtDriverTestCase.test_delete_instance_files_resume` | method | (self, mock_get_instance_path, mock_exists, mock_rename, mock_shutil) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28683–L28697` |
| `LibvirtDriverTestCase.test_delete_instance_files_none` | method | (self, mock_get_instance_path, mock_exists, mock_rename, mock_shutil) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28703–L28718` |
| `LibvirtDriverTestCase.test_delete_instance_files_concurrent` | method | (self, mock_get_instance_path, mock_exists, mock_rename, mock_shutil) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28724–L28740` |
| `LibvirtDriverTestCase._assert_on_id_map` | method | (self, idmap, klass, start, target, count) | private | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28742–L28746` |
| `LibvirtDriverTestCase.test_get_id_maps` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28748–L28768` |
| `LibvirtDriverTestCase.test_get_id_maps_not_lxc` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28770–L28776` |
| `LibvirtDriverTestCase.test_get_id_maps_only_uid` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28778–L28791` |
| `LibvirtDriverTestCase.test_get_id_maps_only_gid` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28793–L28806` |
| `LibvirtDriverTestCase.test_instance_on_disk` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28808–L28811` |
| `LibvirtDriverTestCase.test_instance_on_disk_rbd` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28813–L28817` |
| `LibvirtDriverTestCase.test_vcpu_model_from_config` | method | (self) | public | not declared | 2/26 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28819–L28847` |
| `LibvirtDriverTestCase.test_cleanup_lvm_encrypted` | method | (self, mock_save, mock_undefine_domain, mock_delete_volume, mock_get_guest, mock_get_lvm_size, mock_get_size) | public | not declared | 1/33 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28855–L28887` |
| `LibvirtDriverTestCase._test_cleanup_lvm` | method | (self, mock_delete_volume, mock_get_guest, mock_lvm_size, mock_get_size, encrypted=False) | private | not declared | 3/31 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28893–L28925` |
| `LibvirtDriverTestCase.test_cleanup_lvm` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28927–L28928` |
| `LibvirtDriverTestCase.test_cleanup_encrypted_lvm` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28930–L28931` |
| `LibvirtDriverTestCase.test_vcpu_model_to_config` | method | (self) | public | not declared | 3/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28933–L28954` |
| `LibvirtDriverTestCase.test_trigger_crash_dump` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28956–L28962` |
| `LibvirtDriverTestCase.test_trigger_crash_dump_not_running` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28964–L28977` |
| `LibvirtDriverTestCase.test_trigger_crash_dump_not_supported` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28979–L28992` |
| `LibvirtDriverTestCase.test_trigger_crash_dump_unexpected_error` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L28994–L29007` |
| `LibvirtDriverTestCase.test_get_volume_driver_invalid_type` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29009–L29024` |
| `LibvirtDriverTestCase.test_get_volume_driver` | method | (self, mock_import_class) | public | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29027–L29060` |
| `LibvirtDriverTestCase.test_get_volume_driver_unsupported_protocol` | method | (self, mock_import_class) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29063–L29081` |
| `LibvirtDriverTestCase._test_get_gpu_inventories` | method | (self, drvr, expected, expected_types, get_mdev_capable_devs, get_mediated_devices) | private | not declared | 1/35 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29087–L29122` |
| `LibvirtDriverTestCase.test_get_gpu_inventories_with_a_single_type` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29124–L29150` |
| `LibvirtDriverTestCase.test_get_gpu_inventories_with_two_types` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29152–L29182` |
| `LibvirtDriverTestCase.test_get_gpu_inventories_with_max_instances_per_type` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29184–L29218` |
| `LibvirtDriverTestCase.test_get_supported_vgpu_types_fails` | method | (self, mock_warning) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29221–L29239` |
| `LibvirtDriverTestCase.test_get_supported_vgpu_types_two_types_unset` | method | (self, mock_warning) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29242–L29258` |
| `LibvirtDriverTestCase.test_get_supported_vgpu_types` | method | (self, mock_warning) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29261–L29282` |
| `LibvirtDriverTestCase.test_get_supported_vgpu_types_with_duplicate_types` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29284–L29295` |
| `LibvirtDriverTestCase.test_get_supported_vgpu_types_with_invalid_pci_address` | method | (self, mock_exists) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29298–L29309` |
| `LibvirtDriverTestCase.test_get_supported_vgpu_types_with_a_single_type` | method | (self, mock_warning) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29312–L29328` |
| `LibvirtDriverTestCase.test_get_supported_vgpu_types_with_default_type` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29330–L29343` |
| `LibvirtDriverTestCase.test_get_supported_vgpu_types_with_duplicate_default_type` | method | (self, mock_warning) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29346–L29371` |
| `LibvirtDriverTestCase.test_get_supported_vgpu_types_with_virtual_devices` | method | (self, mock_exists) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29374–L29384` |
| `LibvirtDriverTestCase.test_get_vgpu_type_per_pgpu` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29386–L29416` |
| `LibvirtDriverTestCase.test_get_vgpu_type_per_pgpu_with_incorrect_pci_addr` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29418–L29428` |
| `LibvirtDriverTestCase.test_get_vgpu_type_per_pgpu_with_unconfigured_pgpu` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29430–L29440` |
| `LibvirtDriverTestCase.test_get_vgpu_type_per_pgpu_with_default_type` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29442–L29454` |
| `LibvirtDriverTestCase.test_get_vgpu_type_per_pgpu_with_virtual_devices` | method | (self, mock_exists) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29457–L29465` |
| `LibvirtDriverTestCase.test_get_resource_class_for_device` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29467–L29483` |
| `LibvirtDriverTestCase.test_get_resource_class_for_device_with_incorrect_pci_addr` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29485–L29496` |
| `LibvirtDriverTestCase.test_get_resource_class_for_device_with_unconfigured_pgpu` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29498–L29509` |
| `LibvirtDriverTestCase.test_get_supported_mdev_resource_classes` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29511–L29523` |
| `LibvirtDriverTestCase.test_get_mdev_capable_devices` | method | (self, list_mdev_capable_devs, device_lookup_by_name) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29527–L29544` |
| `LibvirtDriverTestCase.test_get_mdev_capable_devices.fake_nodeDeviceLookupByName` | function | (name) | public | `FakeNodeDevice(_fake_NodeDevXml[name])` (src/nova/tests/unit/virt/libvirt/test_driver.py:L29532) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29531–L29532` |
| `LibvirtDriverTestCase.test_get_mdev_capable_devices_filtering` | method | (self, list_mdev_capable_devs, device_lookup_by_name) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29548–L29561` |
| `LibvirtDriverTestCase.test_get_mdev_capable_devices_filtering.fake_nodeDeviceLookupByName` | function | (name) | public | `FakeNodeDevice(_fake_NodeDevXml[name])` (src/nova/tests/unit/virt/libvirt/test_driver.py:L29553) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29552–L29553` |
| `LibvirtDriverTestCase.test_get_mdev_capabilities_for_dev_name_optional` | method | (self, device_lookup_by_name) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29564–L29583` |
| `LibvirtDriverTestCase.test_get_mdev_capabilities_for_dev_name_optional.fake_nodeDeviceLookupByName` | function | (name) | public | `FakeNodeDevice(_fake_NodeDevXml[name])` (src/nova/tests/unit/virt/libvirt/test_driver.py:L29569) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29568–L29569` |
| `LibvirtDriverTestCase.test_get_mediated_devices` | method | (self, list_mediated_devices, device_lookup_by_name) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29587–L29603` |
| `LibvirtDriverTestCase.test_get_mediated_devices.fake_nodeDeviceLookupByName` | function | (name) | public | `FakeNodeDevice(_fake_NodeDevXml[name])` (src/nova/tests/unit/virt/libvirt/test_driver.py:L29593) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29592–L29593` |
| `LibvirtDriverTestCase.test_get_mediated_devices_filtering` | method | (self, list_mediated_devices, device_lookup_by_name) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29607–L29619` |
| `LibvirtDriverTestCase.test_get_mediated_devices_filtering.fake_nodeDeviceLookupByName` | function | (name) | public | `FakeNodeDevice(_fake_NodeDevXml[name])` (src/nova/tests/unit/virt/libvirt/test_driver.py:L29613) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29612–L29613` |
| `LibvirtDriverTestCase.test_get_mdev_types_from_uuids` | method | (self, mock_get_mdevs) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29622–L29629` |
| `LibvirtDriverTestCase.test_get_mdev_types_from_uuids_missing` | method | (self, mock_get_mdevs) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29632–L29635` |
| `LibvirtDriverTestCase.test_get_all_assigned_mediated_devices` | method | (self, list_guests) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29638–L29655` |
| `LibvirtDriverTestCase.test_get_all_assigned_mediated_devices_for_an_instance` | method | (self, get_guest) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29658–L29677` |
| `LibvirtDriverTestCase.test_get_all_assigned_mediated_devices_for_a_non_existing_instance` | method | (self, get_guest) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29680–L29686` |
| `LibvirtDriverTestCase.test_get_all_assigned_mediated_devices_with_claimed_mdevs` | method | (self, list_guests) | public | not declared | 1/28 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29689–L29720` |
| `LibvirtDriverTestCase.test_allocate_mdevs_with_no_vgpu_allocations` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29722–L29732` |
| `LibvirtDriverTestCase._get_fake_provider_tree_with_vgpu` | method | (self) | private | `pt` (src/nova/tests/unit/virt/libvirt/test_driver.py:L29767) | 1/25 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29734–L29767` |
| `LibvirtDriverTestCase.test_allocate_mdevs_with_available_mdevs` | method | (self, get_supported_mdev_rcs, get_unassigned_mdevs) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29773–L29791` |
| `LibvirtDriverTestCase.test_allocate_mdevs_with_multiple_allocs` | method | (self, get_supported_mdev_rcs, get_unassigned_mdevs) | public | not declared | 1/25 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29797–L29822` |
| `LibvirtDriverTestCase.test_allocate_mdevs_with_no_gpu_capacity` | method | (self, get_supported_mdev_rcs, unallocated_mdevs, get_mdev_capable_devs) | public | not declared | 1/26 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29830–L29858` |
| `LibvirtDriverTestCase.test_allocate_mdevs_with_no_idea_of_the_provider` | method | (self, get_supported_mdev_rcs, mock_warning) | public | not declared | 1/28 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29863–L29896` |
| `LibvirtDriverTestCase.test_allocate_mdevs_with_a_different_class` | method | (self, get_supported_mdev_rcs, get_unassigned_mdevs) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29902–L29921` |
| `LibvirtDriverTestCase.test_get_existing_mdevs_not_assigned` | method | (self, get_all_assigned_mdevs, get_mediated_devices, get_vgpu_type_per_pgpu) | public | not declared | 1/25 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29927–L29959` |
| `LibvirtDriverTestCase.test_get_existing_mdevs_not_assigned._fake_get_vgpu_type_per_pgpu` | function | (parent_addr) | private | `'nvidia-11'` (src/nova/tests/unit/virt/libvirt/test_driver.py:L29952) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29950–L29952` |
| `LibvirtDriverTestCase.test_create_mdev` | method | (self, mock_generate_uuid, uuid=None, drvr=None) | public | not declared | 3/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29962–L29981` |
| `LibvirtDriverTestCase.test_create_mdev_with_uuid` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29983–L29984` |
| `LibvirtDriverTestCase.test_create_mdev_autostart_error` | method | (self, mock_log_info) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L29987–L29998` |
| `LibvirtDriverTestCase.test_start_inactive_mediated_devices_on_init_host` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30003–L30018` |
| `LibvirtDriverTestCase._test_hard_reboot_allocate_missing_mdevs` | method | (self, mock_get_xml, mock_image_meta, mock_allocate_mdevs, mock_get_guest, mock_db, mock_build_metadata) | private | `ctxt, mock_get_xml, instance` (src/nova/tests/unit/virt/libvirt/test_driver.py:L30082) | 1/38 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30041–L30082` |
| `LibvirtDriverTestCase.test_hard_reboot_allocate_missing_mdevs` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30087–L30091` |
| `LibvirtDriverTestCase.test_hard_reboot_allocate_missing_mdevs_fail` | method | (self, mock_create_guest) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30095–L30116` |
| `LibvirtDriverTestCase.test_hard_reboot_cyborg_mdevs_not_duplicated` | method | (self, mock_get_xml, mock_image_meta, mock_get_guest, mock_db, mock_build_metadata) | public | not declared | 1/44 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30141–L30189` |
| `LibvirtDriverTestCase._test_detach_mediated_devices` | method | (self, side_effect, detach_device) | private | `detach_device` (src/nova/tests/unit/virt/libvirt/test_driver.py:L30220) | 1/26 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30192–L30220` |
| `LibvirtDriverTestCase.test_detach_mediated_devices` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30222–L30228` |
| `LibvirtDriverTestCase.test_detach_mediated_devices.fake_detach_device` | function | (cfg_obj, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30223–L30225` |
| `LibvirtDriverTestCase.test_detach_mediated_devices_raises_exc_unsupported` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30230–L30236` |
| `LibvirtDriverTestCase.test_detach_mediated_devices_raises_exc` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30238–L30242` |
| `LibvirtDriverTestCase._test_attach_mediated_devices` | method | (self, side_effect, attach_device) | private | `attach_device` (src/nova/tests/unit/virt/libvirt/test_driver.py:L30277) | 1/30 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30245–L30277` |
| `LibvirtDriverTestCase.test_attach_mediated_devices` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30279–L30285` |
| `LibvirtDriverTestCase.test_attach_mediated_devices.fake_attach_device` | function | (cfg_obj, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30280–L30282` |
| `LibvirtDriverTestCase.test_attach_mediated_devices_raises_exc` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30287–L30291` |
| `LibvirtDriverTestCase.test_storage_bus_traits__qemu_kvm` | method | (self) | public | not declared | 4/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30293–L30312` |
| `LibvirtDriverTestCase.test_storage_bus_traits__non_qemu_kvm` | method | (self) | public | not declared | 4/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30314–L30328` |
| `LibvirtDriverTestCase.test_vif_model_traits` | method | (self, mock_has_min_version) | public | not declared | 4/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30332–L30346` |
| `LibvirtDriverTestCase.test_vif_model_traits_old_version_no_igb_support` | method | (self, mock_has_min_version) | public | not declared | 2/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30350–L30362` |
| `LibvirtDriverTestCase.test_video_model_traits` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30364–L30374` |
| `LibvirtDriverTestCase.test_cpu_traits__hyperthreading_support` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30378–L30383` |
| `LibvirtDriverTestCase.test_cpu_traits_with_passthrough_mode` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30385–L30392` |
| `LibvirtDriverTestCase.test_cpu_traits_with_mode_none` | method | (self, mock_baseline) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30395–L30412` |
| `LibvirtDriverTestCase.test_cpu_traits_with_mode_custom` | method | (self, mock_baseline) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30415–L30448` |
| `LibvirtDriverTestCase.test_cpu_traits_with_mode_custom_multi_models` | method | (self, mocked_baseline, mocked_cap) | public | not declared | 1/37 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30452–L30514` |
| `LibvirtDriverTestCase.test_cpu_traits_with_mode_custom_multi_models_and_extra_flags` | method | (self, mocked_baseline, mocked_cap) | public | not declared | 1/39 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30518–L30582` |
| `LibvirtDriverTestCase.test_cpu_traits_with_no_baseline_support` | method | (self, mock_baseline) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30585–L30593` |
| `LibvirtDriverTestCase.test_cpu_traits_on_s390x` | method | (self, mock_baseline, mock_cap) | public | not declared | 1/27 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30597–L30636` |
| `LibvirtDriverTestCase.test_cpu_traits_on_s390x.mocked_baseline` | function | (cpu_xml, *args) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30628–L30633` |
| `LibvirtDriverTestCase.test_cpu_traits_with_mode_passthrough_and_extra_flags` | method | (self, mock_to_traits, mock_cap) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30640–L30664` |
| `LibvirtDriverTestCase.test_cpu_traits_with_mode_custom_and_extra_flags` | method | (self, mock_to_traits, mock_baseline) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30668–L30693` |
| `LibvirtDriverTestCase.test_cpu_traits_with_mode_not_set_and_extra_flags` | method | (self, mock_to_traits, mock_baseline) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30697–L30714` |
| `LibvirtDriverTestCase.test_cpu_traits_with_mode_none_and_invalid_virt_type` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30716–L30723` |
| `LibvirtDriverTestCase.test_cpu_traits_with_mode_none_on_power` | method | (self, mock_baseline, mock_cap) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30727–L30757` |
| `LibvirtDriverTestCase._fake_get_host_capabilities` | method | (self, **args) | private | `caps` (src/nova/tests/unit/virt/libvirt/test_driver.py:L30766) | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30759–L30766` |
| `LibvirtDriverTestCase.test__get_cpu_arch_traits` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30768–L30772` |
| `LibvirtDriverTestCase.test_cache_image_uncached` | method | (self, mock_fetch, mock_utime, mock_exists, mock_isdir, mock_et, first_time=False) | public | not declared | 2/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30779–L30800` |
| `LibvirtDriverTestCase.test_cache_image_uncached_first_time` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30802–L30806` |
| `LibvirtDriverTestCase.test_cache_image_existing` | method | (self, mock_fetch, mock_utime, mock_exists, mock_isdir, mock_et) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30813–L30830` |
| `LibvirtDriverTestCase.test_rebase_with_qemu_img` | method | (self, mock_execute, mock_qemu_img_info) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30835–L30849` |
| `LibvirtDriverTestCase._test__validate_pinning_configuration` | method | (self, supports_pcpus=True) | private | not declared | 1/46 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30851–L30903` |
| `LibvirtDriverTestCase.test__validate_pinning_configuration_valid_config` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30905–L30912` |
| `LibvirtDriverTestCase.test__validate_pinning_configuration_invalid_unpinned_config` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30914–L30925` |
| `LibvirtDriverTestCase.test__validate_pinning_configuration_invalid_pinned_config` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30927–L30938` |
| `LibvirtDriverTestCase.test__validate_pinning_configuration_warning` | method | (self, mock_log) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30941–L30954` |
| `LibvirtDriverTestCase.test__validate_pinning_configuration_no_config` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30956–L30966` |
| `LibvirtDriverTestCase.test__validate_pinning_configuration_not_supported` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30968–L30972` |
| `LibvirtDriverTestCase.test_process_instances_at_startup` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30974–L30995` |
| `LibvirtDriverTestCase.test_validate_vtpm_configuration_enabled` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L30997–L31008` |
| `LibvirtDriverTestCase.test_validate_vtpm_configuration_disabled` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31010–L31022` |
| `LibvirtDriverTestCase._test__validate_mem_encryption_configuration` | method | (self, sev, sev_es, sev_snp, intel_tdx) | private | not declared | 1/40 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31024–L31097` |
| `LibvirtDriverTestCase._test__validate_mem_encryption_configuration.fake_is_supported_mem_encryption_model` | function | (me_model) | public | `intel_tdx` (src/nova/tests/unit/virt/libvirt/test_driver.py:L31081); `sev_snp` (src/nova/tests/unit/virt/libvirt/test_driver.py:L31083); `sev_es` (src/nova/tests/unit/virt/libvirt/test_driver.py:L31085); `sev` (src/nova/tests/unit/virt/libvirt/test_driver.py:L31086) | 4/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31079–L31086` |
| `LibvirtDriverTestCase.test__validate_mem_encryption_configuration_sev_unsupported` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31099–L31111` |
| `LibvirtDriverTestCase.test__validate_mem_encryption_configuration_sev_es_unsupported` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31113–L31125` |
| `LibvirtDriverTestCase.test__validate_mem_encryption_configuration_sev_snp_unsupported` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31127–L31139` |
| `LibvirtDriverTestCase.test__validate_mem_encryption_configuration_tdx_unsupported` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31141–L31153` |
| `LibvirtDriverTestCase.test__validate_mem_encryption_configuration_supported` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31155–L31160` |
| `LibvirtDriverTestCase.test_register_machine_type_already_registered_image_metadata` | method | (self, mock_instance_save) | public | not declared | 1/26 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31163–L31192` |
| `LibvirtDriverTestCase.test_register_machine_type` | method | (self, mock_instance_save) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31197–L31217` |
| `LibvirtDriverTestCase.test_register_all_undefined_details_unknown_failure` | method | (self, mock_log_exc) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31220–L31239` |
| `LibvirtDriverTestCase.test_register_all_undefined_details_unknown_failure_finding_default` | method | (self, mock_get_bdms, mock_save, mock_log_exc) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31246–L31271` |
| `LibvirtDriverTestCase.test_register_undefined_instance_details_nothing_to_register` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31279–L31287` |
| `LibvirtDriverTestCase.test_register_undefined_instance_details_disk_info_and_guest_config` | method | (self, mock_get_bdms, mock_get_guest, mock_save) | public | not declared | 1/43 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31293–L31352` |
| `LibvirtDriverTestCase.test_set_features_windows` | method | (self) | public | not declared | 3/28 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31354–L31386` |
| `LibvirtDriverTestCase.test_get_pci_passthrough_devices_lru_cache_called_once` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31388–L31396` |
| `LibvirtVolumeUsageTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31399–L31447` |
| `LibvirtVolumeUsageTestCase.setUp` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31402–L31417` |
| `LibvirtVolumeUsageTestCase.test_get_all_volume_usage` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31419–L31437` |
| `LibvirtVolumeUsageTestCase.test_get_all_volume_usage_device_not_found` | method | (self, mock_get_domain) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31442–L31447` |
| `LibvirtNonblockingTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31450–L31514` |
| `LibvirtNonblockingTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31453–L31457` |
| `LibvirtNonblockingTestCase.test_connection_to_primitive` | method | (self) | public | not declared | 2/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31459–L31474` |
| `LibvirtNonblockingTestCase.test_tpool_execute_calls_libvirt` | method | (self, mock_svc) | public | not declared | 3/34 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31477–L31514` |
| `LibvirtVolumeSnapshotTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31517–L32426` |
| `LibvirtVolumeSnapshotTestCase.setUp` | method | (self) | public | not declared | 1/104 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31520–L31641` |
| `LibvirtVolumeSnapshotTestCase.test_volume_refresh_connection_info` | method | (self, mock_get_by_volume_and_instance, mock_refresh_connection_info) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31647–L31668` |
| `LibvirtVolumeSnapshotTestCase._test_volume_snapshot_create` | method | (self, mock_get, mock_xml, mock_snapshot, quiesce=True, can_quiesce=True, quiesce_required=False) | private | not declared | 12/63 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31673–L31757` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_create_libgfapi` | method | (self, mock_get, mock_xml, mock_snapshot) | public | not declared | 1/46 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31762–L31818` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_create_cannot_quiesce` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31820–L31822` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_create_cannot_quiesce_quiesce_required` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31824–L31827` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_create_can_quiesce_quiesce_required_fails` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31829–L31832` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_create_noquiesce` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31834–L31836` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_create_noquiesce_cannot_quiesce` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31838–L31840` |
| `LibvirtVolumeSnapshotTestCase.test_can_quiesce` | method | (self, ver) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31844–L31850` |
| `LibvirtVolumeSnapshotTestCase.test_can_quiesce_bad_hyp` | method | (self, ver) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31854–L31861` |
| `LibvirtVolumeSnapshotTestCase.test_can_quiesce_agent_not_enable` | method | (self, ver) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31865–L31870` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_create_outer_success` | method | (self, mock_refresh, mock_snap_create, mock_loop) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31877–L31919` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_create_outer_success.FakeLoopingCall` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31879–L31891` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_create_outer_success.FakeLoopingCall.__init__` | method | (self, func) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31880–L31881` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_create_outer_success.FakeLoopingCall.start` | method | (self, *a, **k) | public | `self` (src/nova/tests/unit/virt/libvirt/test_driver.py:L31888) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31883–L31888` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_create_outer_success.FakeLoopingCall.wait` | method | (self) | public | `None` (src/nova/tests/unit/virt/libvirt/test_driver.py:L31891) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31890–L31891` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_create_outer_success._test` | function | (mock_get_guest, mock_vol_api) | private | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31902–L31917` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_create_outer_failure` | method | (self, mock_get, mock_update, mock_snapshot) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31924–L31945` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_delete_1` | method | (self, mock_is_job_complete, mock_get, mock_xml, mock_rebase, mock_commit) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31953–L31978` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_delete_relative_1` | method | (self, mock_is_job_complete, mock_get, mock_xml, mock_rebase, mock_commit) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L31986–L32013` |
| `LibvirtVolumeSnapshotTestCase._setup_block_rebase_domain_and_guest_mocks` | method | (self, dom_xml) | private | `mock_domain, guest` (src/nova/tests/unit/virt/libvirt/test_driver.py:L32025) | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32015–L32025` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_delete_when_dom_not_running` | method | (self, mock_execute, mock_qemu_img_info, mock_disk_op_sema) | public | not declared | 1/34 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32035–L32075` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_delete_when_dom_not_running_and_no_rebase_base` | method | (self, mock_execute, mock_qemu_img_info, mock_disk_op_sema) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32085–L32106` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_delete_when_dom_with_nw_disk_not_running` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32112–L32127` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_delete_relative_2` | method | (self, mock_is_job_complete, mock_xml, mock_rebase, mock_commit, mock_get) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32135–L32161` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_delete_nonrelative_null_base` | method | (self, mock_is_job_complete) | public | not declared | 1/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32164–L32191` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_delete_netdisk_nonrelative_null_base` | method | (self, mock_is_job_complete) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32194–L32221` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_delete_outer_success` | method | (self, mock_get, mock_snapshot, mock_refresh, mock_update) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32229–L32244` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_delete_outer_failure` | method | (self, mock_get, mock_snapshot, mock_update) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32250–L32268` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_delete_invalid_type` | method | (self, mock_get, mock_update) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32272–L32286` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_delete_with_delete_type_none` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32288–L32297` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_delete_netdisk_1` | method | (self, mock_is_job_complete, mock_get) | public | not declared | 1/26 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32302–L32339` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_delete_netdisk_1.FakeNetdiskDomain` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32306–L32311` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_delete_netdisk_1.FakeNetdiskDomain.__init__` | method | (self, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32307–L32308` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_delete_netdisk_1.FakeNetdiskDomain.XMLDesc` | method | (self, flags) | public | `self.dom_netdisk_xml` (src/nova/tests/unit/virt/libvirt/test_driver.py:L32311) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32310–L32311` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_delete_netdisk_relative_1` | method | (self, mock_is_job_complete, mock_get) | public | not declared | 1/27 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32344–L32382` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_delete_netdisk_relative_1.FakeNetdiskDomain` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32348–L32353` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_delete_netdisk_relative_1.FakeNetdiskDomain.__init__` | method | (self, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32349–L32350` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_delete_netdisk_relative_1.FakeNetdiskDomain.XMLDesc` | method | (self, flags) | public | `self.dom_netdisk_xml` (src/nova/tests/unit/virt/libvirt/test_driver.py:L32353) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32352–L32353` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_delete_netdisk_relative_2` | method | (self, mock_is_job_complete, mock_get) | public | not declared | 1/28 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32387–L32426` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_delete_netdisk_relative_2.FakeNetdiskDomain` | class | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32391–L32396` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_delete_netdisk_relative_2.FakeNetdiskDomain.__init__` | method | (self, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32392–L32393` |
| `LibvirtVolumeSnapshotTestCase.test_volume_snapshot_delete_netdisk_relative_2.FakeNetdiskDomain.XMLDesc` | method | (self, flags) | public | `self.dom_netdisk_xml` (src/nova/tests/unit/virt/libvirt/test_driver.py:L32396) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32395–L32396` |
| `_fake_convert_image` | function | (source, dest, in_format, out_format, run_as_root=True) | unexported | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32429–L32431` |
| `_fake_file_like_object` | function | (*args, **kwargs) | unexported | `io.BytesIO(b'')` (src/nova/tests/unit/virt/libvirt/test_driver.py:L32435) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32434–L32435` |
| `_BaseSnapshotTests` | class | — | unexported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32438–L32521` |
| `_BaseSnapshotTests.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32439–L32453` |
| `_BaseSnapshotTests._assert_snapshot` | method | (self, snapshot, disk_format, expected_properties=None) | private | not declared | 3/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32455–L32471` |
| `_BaseSnapshotTests._create_image` | method | (self, extra_properties=None) | private | `recv_meta` (src/nova/tests/unit/virt/libvirt/test_driver.py:L32489) | 2/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32475–L32489` |
| `_BaseSnapshotTests._snapshot` | method | (self, image_id, mock_file_open, mock_extract_snapshot, mock_get_domain, mock_resolve, mock_version, mock_disk_op_sema, mock_chown) | private | `snapshot` (src/nova/tests/unit/virt/libvirt/test_driver.py:L32515) | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32507–L32515` |
| `_BaseSnapshotTests._test_snapshot` | method | (self, disk_format, extra_properties=None) | private | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32517–L32521` |
| `LibvirtSnapshotTests` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32524–L32835` |
| `LibvirtSnapshotTests.test_ami` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32530–L32538` |
| `LibvirtSnapshotTests.test_raw` | method | (self, mock_convert_image) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32547–L32548` |
| `LibvirtSnapshotTests.test_qcow2` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32554–L32555` |
| `LibvirtSnapshotTests.test_ploop` | method | (self, mock_convert_image) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32564–L32565` |
| `LibvirtSnapshotTests.test_no_image_architecture` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32571–L32573` |
| `LibvirtSnapshotTests.test_no_original_image` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32579–L32581` |
| `LibvirtSnapshotTests.test_snapshot_metadata_image` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32587–L32597` |
| `LibvirtSnapshotTests.test_snapshot_update_task_state_failed` | method | (self, mock_exception) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32604–L32609` |
| `LibvirtSnapshotTests.test_failing_domain_not_found` | method | (self, mock_write_config, mock_get_guest) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32615–L32628` |
| `LibvirtSnapshotTests.test_raw_with_rbd_clone` | method | (self, mock_rbd, mock_driver) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32637–L32644` |
| `LibvirtSnapshotTests.test_raw_with_rbd_clone_graceful_fallback` | method | (self, mock_rbd, mock_driver, mock_convert_image) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32655–L32662` |
| `LibvirtSnapshotTests.test_raw_with_rbd_clone_eperm` | method | (self, mock_rbd, mock_driver, mock_convert_image) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32673–L32684` |
| `LibvirtSnapshotTests.test_raw_with_rbd_clone_post_process_fails` | method | (self, mock_rbd, mock_driver) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32693–L32707` |
| `LibvirtSnapshotTests.test_raw_with_rbd_clone_fails_image_deleted` | method | (self, mock_rbd, mock_driver, mock_log) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32717–L32737` |
| `LibvirtSnapshotTests.test_raw_with_rbd_clone_is_live_snapshot` | method | (self, mock_get_guest, mock_version, mock_resolve, mock_snapshot, mock_rbd, mock_driver) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32750–L32762` |
| `LibvirtSnapshotTests.test_raw_with_rbd_clone_failure_does_cold_snapshot` | method | (self, mock_rbd, mock_driver, mock_get_guest, mock_version, mock_resolve, mock_find_disk) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32778–L32796` |
| `LibvirtSnapshotTests.test_cold_snapshot_based_on_power_state` | method | (self, mock_version, mock_get_guest) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32809–L32835` |
| `LXCSnapshotTests` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32838–L32846` |
| `LXCSnapshotTests.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32841–L32843` |
| `LXCSnapshotTests.test_raw_with_rbd_clone_failure_does_cold_snapshot` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32845–L32846` |
| `LVMSnapshotTests` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32849–L32876` |
| `LVMSnapshotTests._test_lvm_snapshot` | method | (self, disk_format, mock_volume_info, mock_convert_image) | private | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32859–L32869` |
| `LVMSnapshotTests.test_raw` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32871–L32872` |
| `LVMSnapshotTests.test_qcow2` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32874–L32876` |
| `vc` | variable | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32879–L32879` |
| `TestLibvirtSEV` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32882–L32895` |
| `TestLibvirtSEV.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32885–L32895` |
| `TestLibvirtSEV.setUp.fake_exists` | function | (path) | public | `True` (src/nova/tests/unit/virt/libvirt/test_driver.py:L32892); `False` (src/nova/tests/unit/virt/libvirt/test_driver.py:L32893) | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32890–L32893` |
| `TestLibvirtSEVUnsupported` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32899–L32914` |
| `TestLibvirtSEVUnsupported.test_get_memory_encryption_inventories_unsupported` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32900–L32914` |
| `TestLibvirtSEVSupported` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32919–L32946` |
| `TestLibvirtSEVSupported.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32922–L32924` |
| `TestLibvirtSEVSupported.test_get_memory_encryption_inventories` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32926–L32946` |
| `LibvirtPMEMNamespaceTests` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32949–L33200` |
| `LibvirtPMEMNamespaceTests.setUp` | method | (self) | public | not declared | 1/63 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L32951–L33014` |
| `LibvirtPMEMNamespaceTests.test_discover_vpmems` | method | (self, mock_get) | public | not declared | 3/20 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33019–L33038` |
| `LibvirtPMEMNamespaceTests.test_vpmems_not_on_host` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33043–L33048` |
| `LibvirtPMEMNamespaceTests.test_vpmems_invalid_format` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33053–L33058` |
| `LibvirtPMEMNamespaceTests.test_vpmems_duplicated_config` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33063–L33068` |
| `LibvirtPMEMNamespaceTests.test_get_vpmems_on_host__exception` | method | (self, mock_get_ns) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33071–L33077` |
| `LibvirtPMEMNamespaceTests.test_get_ordered_vpmems` | method | (self, mock_labels) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33080–L33105` |
| `LibvirtPMEMNamespaceTests.test_sorted_migrating_vpmem_resources` | method | (self, mock_labels) | public | not declared | 2/18 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33108–L33128` |
| `LibvirtPMEMNamespaceTests.test_cleanup_vpmems` | method | (self, mock_cleanup_vpmem) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33131–L33138` |
| `LibvirtPMEMNamespaceTests.test_cleanup_vpmems_fail` | method | (self, mock_cleanup_vpmem) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33141–L33146` |
| `LibvirtPMEMNamespaceTests.test_guest_add_vpmems_int_values` | method | (self) | public | not declared | 1/38 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33148–L33189` |
| `LibvirtPMEMNamespaceTests.test_cleanup_lingering_instance_resources_deletes_mdevs` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33191–L33200` |
| `LibvirtDeviceRemoveEventTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33204–L33224` |
| `LibvirtDeviceRemoveEventTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33205–L33207` |
| `LibvirtDeviceRemoveEventTestCase.test_libvirt_device_removal_events` | method | (self, event_type, mock_base_handles, mock_warning) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33214–L33224` |
| `AsyncDeviceEventsHandlerTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33227–L33364` |
| `AsyncDeviceEventsHandlerTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33229–L33231` |
| `AsyncDeviceEventsHandlerTestCase.assert_handler_clean` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33233–L33234` |
| `AsyncDeviceEventsHandlerTestCase._call_parallel_after_a_delay` | method | (self, func) | private | `thread` (src/nova/tests/unit/virt/libvirt/test_driver.py:L33243) | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33236–L33243` |
| `AsyncDeviceEventsHandlerTestCase._call_parallel_after_a_delay.run` | function | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33237–L33239` |
| `AsyncDeviceEventsHandlerTestCase.test_event_received_after_wait` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33245–L33258` |
| `AsyncDeviceEventsHandlerTestCase.test_event_received_before_wait` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33260–L33271` |
| `AsyncDeviceEventsHandlerTestCase.test_event_not_received` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33273–L33280` |
| `AsyncDeviceEventsHandlerTestCase.test_event_received_without_waiter` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33282–L33289` |
| `AsyncDeviceEventsHandlerTestCase.test_create_remove_waiter_without_event` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33291–L33296` |
| `AsyncDeviceEventsHandlerTestCase.test_waiter_cleanup` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33298–L33328` |
| `AsyncDeviceEventsHandlerTestCase.test_multiple_clients_for_the_same_event` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33330–L33364` |
| `EphemeralEncryptionTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33368–L33880` |
| `EphemeralEncryptionTestCase.setUp` | method | (self) | public | not declared | 1/46 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33370–L33424` |
| `EphemeralEncryptionTestCase._test_spawn_with_ephemeral_encryption` | method | (self, encryption_format=None) | private | not declared | 3/51 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33426–L33506` |
| `EphemeralEncryptionTestCase.test_spawn_with_ephemeral_encryption_defaults` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33508–L33511` |
| `EphemeralEncryptionTestCase.test_spawn_with_ephemeral_encryption_non_default` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33513–L33515` |
| `EphemeralEncryptionTestCase.test_spawn_with_ephemeral_encryption_secret_not_found` | method | (self) | public | not declared | 1/45 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33517–L33589` |
| `EphemeralEncryptionTestCase.test_spawn_with_ephemeral_encryption_secret_create_fail` | method | (self) | public | not declared | 1/52 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33591–L33664` |
| `EphemeralEncryptionTestCase.test_spawn_with_ephemeral_encryption_cleanup_fails` | method | (self, mock_log_exc) | public | not declared | 1/27 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33667–L33705` |
| `EphemeralEncryptionTestCase.test_spawn_with_ephemeral_encryption_mix_with_without_secrets` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33707–L33733` |
| `EphemeralEncryptionTestCase._test_cleanup_with_ephemeral_encryption` | method | (self, has_key_mgr_secret=True, has_libvirt_secret=True, destroy_disks=True) | private | not declared | 5/34 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33736–L33778` |
| `EphemeralEncryptionTestCase.test_cleanup_with_ephemeral_encryption` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33780–L33781` |
| `EphemeralEncryptionTestCase.test_cleanup_with_ephemeral_encryption_no_key_mgr_secret` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33783–L33784` |
| `EphemeralEncryptionTestCase.test_cleanup_with_ephemeral_encryption_no_libvirt_secret` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33786–L33787` |
| `EphemeralEncryptionTestCase.test_cleanup_with_ephemeral_encryption_no_destroy_disks` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33789–L33790` |
| `EphemeralEncryptionTestCase.test__cleanup_delete_secret_fails` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33792–L33817` |
| `EphemeralEncryptionTestCase.test__cleanup_with_ephemeral_encryption_no_cleanup_instance_dir` | method | (self, images_type, mock_cleanup_secrets) | public | not declared | 2/23 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33826–L33854` |
| `EphemeralEncryptionTestCase.test__cleanup_with_ephemeral_encryption_cleanup_instance_dir_failed` | method | (self, mock_cleanup_secrets, mock_delete_files) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_driver.py:L33860–L33880` |
| `LibvirtConnTestCase.test_live_migration_data_gb_block.fake_stat.StatResult.st_size` | property | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_driver.py:L15002–L15004` |

## Dependencies

- `import binascii` (src/nova/tests/unit/virt/libvirt/test_driver.py:L16)
- `import collections` (src/nova/tests/unit/virt/libvirt/test_driver.py:L17)
- `import contextlib` (src/nova/tests/unit/virt/libvirt/test_driver.py:L18)
- `import copy` (src/nova/tests/unit/virt/libvirt/test_driver.py:L19)
- `import datetime` (src/nova/tests/unit/virt/libvirt/test_driver.py:L20)
- `import errno` (src/nova/tests/unit/virt/libvirt/test_driver.py:L21)
- `import glob` (src/nova/tests/unit/virt/libvirt/test_driver.py:L22)
- `import io` (src/nova/tests/unit/virt/libvirt/test_driver.py:L23)
- `import os` (src/nova/tests/unit/virt/libvirt/test_driver.py:L24)
- `import random` (src/nova/tests/unit/virt/libvirt/test_driver.py:L25)
- `import re` (src/nova/tests/unit/virt/libvirt/test_driver.py:L26)
- `import shutil` (src/nova/tests/unit/virt/libvirt/test_driver.py:L27)
- `import signal` (src/nova/tests/unit/virt/libvirt/test_driver.py:L28)
- `import sys` (src/nova/tests/unit/virt/libvirt/test_driver.py:L29)
- `import testtools` (src/nova/tests/unit/virt/libvirt/test_driver.py:L30)
- `import threading` (src/nova/tests/unit/virt/libvirt/test_driver.py:L31)
- `import time` (src/nova/tests/unit/virt/libvirt/test_driver.py:L32)
- `import unittest` (src/nova/tests/unit/virt/libvirt/test_driver.py:L33)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/test_driver.py:L34)
- `castellan`: imports `key_manager` (src/nova/tests/unit/virt/libvirt/test_driver.py:L36)
- `import ddt` (src/nova/tests/unit/virt/libvirt/test_driver.py:L37)
- `import fixtures` (src/nova/tests/unit/virt/libvirt/test_driver.py:L38)
- `import futurist` (src/nova/tests/unit/virt/libvirt/test_driver.py:L39)
- `lxml`: imports `etree` (src/nova/tests/unit/virt/libvirt/test_driver.py:L40)
- `os_brick`: imports `encryptors` (src/nova/tests/unit/virt/libvirt/test_driver.py:L41)
- `os_brick`: imports `exception as brick_exception` (src/nova/tests/unit/virt/libvirt/test_driver.py:L42)
- `os_brick.initiator`: imports `connector` (src/nova/tests/unit/virt/libvirt/test_driver.py:L43)
- `import os_resource_classes as orc` (src/nova/tests/unit/virt/libvirt/test_driver.py:L44)
- `import os_traits as ot` (src/nova/tests/unit/virt/libvirt/test_driver.py:L45)
- `import os_vif` (src/nova/tests/unit/virt/libvirt/test_driver.py:L46)
- `oslo_concurrency`: imports `lockutils` (src/nova/tests/unit/virt/libvirt/test_driver.py:L47)
- `oslo_concurrency`: imports `processutils` (src/nova/tests/unit/virt/libvirt/test_driver.py:L48)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/virt/libvirt/test_driver.py:L49)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/virt/libvirt/test_driver.py:L50)
- `oslo_service`: imports `loopingcall` (src/nova/tests/unit/virt/libvirt/test_driver.py:L51)
- `oslo_utils`: imports `fileutils` (src/nova/tests/unit/virt/libvirt/test_driver.py:L52)
- `oslo_utils`: imports `fixture as utils_fixture` (src/nova/tests/unit/virt/libvirt/test_driver.py:L53)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/virt/libvirt/test_driver.py:L54)
- `oslo_utils`: imports `strutils` (src/nova/tests/unit/virt/libvirt/test_driver.py:L55)
- `oslo_utils`: imports `units` (src/nova/tests/unit/virt/libvirt/test_driver.py:L56)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/virt/libvirt/test_driver.py:L57)
- `oslo_utils`: imports `versionutils` (src/nova/tests/unit/virt/libvirt/test_driver.py:L58)
- `nova.api.metadata`: imports `base as instance_metadata` (src/nova/tests/unit/virt/libvirt/test_driver.py:L60)
- `nova.compute`: imports `manager` (src/nova/tests/unit/virt/libvirt/test_driver.py:L61)
- `nova.compute`: imports `power_state` (src/nova/tests/unit/virt/libvirt/test_driver.py:L62)
- `nova.compute`: imports `provider_tree` (src/nova/tests/unit/virt/libvirt/test_driver.py:L63)
- `nova.compute`: imports `task_states` (src/nova/tests/unit/virt/libvirt/test_driver.py:L64)
- `nova.compute`: imports `utils as compute_utils` (src/nova/tests/unit/virt/libvirt/test_driver.py:L65)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/virt/libvirt/test_driver.py:L66)
- `import nova.conf` (src/nova/tests/unit/virt/libvirt/test_driver.py:L67)
- `nova`: imports `context` (src/nova/tests/unit/virt/libvirt/test_driver.py:L68)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/virt/libvirt/test_driver.py:L69)
- `nova`: imports `exception` (src/nova/tests/unit/virt/libvirt/test_driver.py:L70)
- `nova.network`: imports `model as network_model` (src/nova/tests/unit/virt/libvirt/test_driver.py:L71)
- `nova`: imports `objects` (src/nova/tests/unit/virt/libvirt/test_driver.py:L72)
- `nova.objects`: imports `block_device as block_device_obj` (src/nova/tests/unit/virt/libvirt/test_driver.py:L73)
- `nova.objects`: imports `fields` (src/nova/tests/unit/virt/libvirt/test_driver.py:L74)
- `nova.objects`: imports `migrate_data as migrate_data_obj` (src/nova/tests/unit/virt/libvirt/test_driver.py:L75)
- `nova.objects`: imports `virtual_interface as obj_vif` (src/nova/tests/unit/virt/libvirt/test_driver.py:L76)
- `nova.pci`: imports `utils as pci_utils` (src/nova/tests/unit/virt/libvirt/test_driver.py:L77)
- `import nova.privsep.fs` (src/nova/tests/unit/virt/libvirt/test_driver.py:L78)
- `import nova.privsep.libvirt` (src/nova/tests/unit/virt/libvirt/test_driver.py:L79)
- `nova.storage`: imports `rbd_utils` (src/nova/tests/unit/virt/libvirt/test_driver.py:L80)
- `nova`: imports `test` (src/nova/tests/unit/virt/libvirt/test_driver.py:L81)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/virt/libvirt/test_driver.py:L82)
- `nova.tests.fixtures`: imports `cyborg` (src/nova/tests/unit/virt/libvirt/test_driver.py:L83)
- `nova.tests.fixtures`: imports `libvirt as fakelibvirt` (src/nova/tests/unit/virt/libvirt/test_driver.py:L84)
- `nova.tests.fixtures`: imports `libvirt_data as fake_libvirt_data` (src/nova/tests/unit/virt/libvirt/test_driver.py:L85)
- `nova.tests.unit`: imports `fake_block_device` (src/nova/tests/unit/virt/libvirt/test_driver.py:L86)
- `nova.tests.unit`: imports `fake_diagnostics` (src/nova/tests/unit/virt/libvirt/test_driver.py:L87)
- `nova.tests.unit`: imports `fake_flavor` (src/nova/tests/unit/virt/libvirt/test_driver.py:L88)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/virt/libvirt/test_driver.py:L89)
- `nova.tests.unit`: imports `fake_network` (src/nova/tests/unit/virt/libvirt/test_driver.py:L90)
- `import nova.tests.unit.image.fake as fake_image` (src/nova/tests/unit/virt/libvirt/test_driver.py:L91)
- `nova.tests.unit`: imports `matchers` (src/nova/tests/unit/virt/libvirt/test_driver.py:L92)
- `nova.tests.unit.objects`: imports `test_diagnostics` (src/nova/tests/unit/virt/libvirt/test_driver.py:L93)
- `nova.tests.unit.objects`: imports `test_instance_numa` (src/nova/tests/unit/virt/libvirt/test_driver.py:L94)
- `nova.tests.unit.objects`: imports `test_pci_device` (src/nova/tests/unit/virt/libvirt/test_driver.py:L95)
- `nova.tests.unit.objects`: imports `test_vcpu_model` (src/nova/tests/unit/virt/libvirt/test_driver.py:L96)
- `nova.tests.unit`: imports `utils as test_utils` (src/nova/tests/unit/virt/libvirt/test_driver.py:L97)
- `nova`: imports `thread_pool_factory` (src/nova/tests/unit/virt/libvirt/test_driver.py:L98)
- `nova`: imports `utils` (src/nova/tests/unit/virt/libvirt/test_driver.py:L99)
- `nova`: imports `version` (src/nova/tests/unit/virt/libvirt/test_driver.py:L100)
- `nova.virt`: imports `block_device as driver_block_device` (src/nova/tests/unit/virt/libvirt/test_driver.py:L101)
- `nova.virt`: imports `driver` (src/nova/tests/unit/virt/libvirt/test_driver.py:L102)
- `nova.virt`: imports `fake` (src/nova/tests/unit/virt/libvirt/test_driver.py:L103)
- `nova.virt`: imports `hardware` (src/nova/tests/unit/virt/libvirt/test_driver.py:L104)
- `nova.virt.image`: imports `model as imgmodel` (src/nova/tests/unit/virt/libvirt/test_driver.py:L105)
- `nova.virt.libvirt`: imports `blockinfo` (src/nova/tests/unit/virt/libvirt/test_driver.py:L106)
- `nova.virt.libvirt`: imports `config as vconfig` (src/nova/tests/unit/virt/libvirt/test_driver.py:L107)
- `nova.virt.libvirt`: imports `driver as libvirt_driver` (src/nova/tests/unit/virt/libvirt/test_driver.py:L108)
- `nova.virt.libvirt`: imports `event as libvirtevent` (src/nova/tests/unit/virt/libvirt/test_driver.py:L109)
- `nova.virt.libvirt`: imports `guest as libvirt_guest` (src/nova/tests/unit/virt/libvirt/test_driver.py:L110)
- `nova.virt.libvirt`: imports `host` (src/nova/tests/unit/virt/libvirt/test_driver.py:L111)
- `nova.virt.libvirt`: imports `imagebackend` (src/nova/tests/unit/virt/libvirt/test_driver.py:L112)
- `nova.virt.libvirt`: imports `imagecache` (src/nova/tests/unit/virt/libvirt/test_driver.py:L113)
- `nova.virt.libvirt`: imports `migration as libvirt_migrate` (src/nova/tests/unit/virt/libvirt/test_driver.py:L114)
- `nova.virt.libvirt.storage`: imports `dmcrypt` (src/nova/tests/unit/virt/libvirt/test_driver.py:L115)
- `nova.virt.libvirt.storage`: imports `lvm` (src/nova/tests/unit/virt/libvirt/test_driver.py:L116)
- `nova.virt.libvirt`: imports `utils as libvirt_utils` (src/nova/tests/unit/virt/libvirt/test_driver.py:L117)
- `nova.virt.libvirt`: imports `vif as libvirt_vif` (src/nova/tests/unit/virt/libvirt/test_driver.py:L118)
- `nova.virt.libvirt.volume`: imports `volume as volume_drivers` (src/nova/tests/unit/virt/libvirt/test_driver.py:L119)
- `import nova.virt.libvirt.driver as libvirt_driver` (src/nova/tests/unit/virt/libvirt/test_driver.py:L31471)

## Side Effects

- **process-spawn**: import nova.privsep.fs (src/nova/tests/unit/virt/libvirt/test_driver.py:L78)
- **process-spawn**: import nova.privsep.libvirt (src/nova/tests/unit/virt/libvirt/test_driver.py:L79)
- **process-spawn**: eph_default_ext = utils.get_hash_str(nova.privsep.fs._DEFAULT_FILE_SYSTEM)[:7] (src/nova/tests/unit/virt/libvirt/test_driver.py:L162)
- **file-io**: instance_dir = os.path.join(CONF.instances_path, instance.uuid) (src/nova/tests/unit/virt/libvirt/test_driver.py:L315)
- **file-io**: return os.path.join(instance_dir, name) (src/nova/tests/unit/virt/libvirt/test_driver.py:L318)
- **syscall**: signal.set() (src/nova/tests/unit/virt/libvirt/test_driver.py:L425)
- **file-io**: self.lock_path = os.path.join(CONF.instances_path, 'locks') (src/nova/tests/unit/virt/libvirt/test_driver.py:L543)
- **file-io**: fileutils.ensure_tree(self.lock_path) (src/nova/tests/unit/virt/libvirt/test_driver.py:L544)
- **file-io**: basedir = os.path.join(CONF.instances_path, (src/nova/tests/unit/virt/libvirt/test_driver.py:L547)
- **file-io**: self.stub_out('os.path.exists', fake_exists) (src/nova/tests/unit/virt/libvirt/test_driver.py:L553)
- **file-io**: return os.path.relpath(path, CONF.instances_path) (src/nova/tests/unit/virt/libvirt/test_driver.py:L789)
- **file-io**: open(args[-1], "a").close() (src/nova/tests/unit/virt/libvirt/test_driver.py:L981)
- **network**: def test_versioned_notification(self, mock_notify, mock_get): (src/nova/tests/unit/virt/libvirt/test_driver.py:L2361)
- **network**: mock_notify.assert_called_once_with(self.context, ip=CONF.my_ip, (src/nova/tests/unit/virt/libvirt/test_driver.py:L2375)
- **process-spawn**: @mock.patch('nova.privsep.utils.supports_direct_io', (src/nova/tests/unit/virt/libvirt/test_driver.py:L3551)
- **process-spawn**: @mock.patch('nova.privsep.utils.supports_direct_io', (src/nova/tests/unit/virt/libvirt/test_driver.py:L4169)
- **file-io**: @mock.patch('nova.virt.libvirt.driver.os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L6072)
- **file-io**: @mock.patch('nova.virt.libvirt.driver.os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L6114)
- **file-io**: @mock.patch('nova.virt.libvirt.driver.os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L6160)
- **file-io**: @mock.patch('nova.virt.libvirt.driver.os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L6319)
- **file-io**: @mock.patch('nova.virt.libvirt.driver.os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L6373)
- **file-io**: @mock.patch('oslo_utils.fileutils.ensure_tree') (src/nova/tests/unit/virt/libvirt/test_driver.py:L8070)
- **file-io**: @mock.patch('nova.virt.libvirt.driver.os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L8304)
- **file-io**: @mock.patch('nova.virt.libvirt.driver.os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L8349)
- **process-spawn**: self.stub_out('nova.privsep.utils.supports_direct_io', (src/nova/tests/unit/virt/libvirt/test_driver.py:L12222)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/virt/libvirt/test_driver.py:L13132)
- **file-io**: tmpfile_path = os.path.join(CONF.instances_path, 'tmp123') (src/nova/tests/unit/virt/libvirt/test_driver.py:L13136)
- **file-io**: @mock.patch('os.path.exists', return_value=False) (src/nova/tests/unit/virt/libvirt/test_driver.py:L13143)
- **file-io**: tmpfile_path = os.path.join(CONF.instances_path, 'tmp123') (src/nova/tests/unit/virt/libvirt/test_driver.py:L13147)
- **file-io**: mock.patch('os.path.getsize', mock_get_size), (src/nova/tests/unit/virt/libvirt/test_driver.py:L13670)
- **file-io**: @mock.patch('shutil.rmtree') (src/nova/tests/unit/virt/libvirt/test_driver.py:L14781)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/virt/libvirt/test_driver.py:L14782)
- **file-io**: fake_instance_path = os.path.join(cfg.CONF.instances_path, (src/nova/tests/unit/virt/libvirt/test_driver.py:L14793)
- **file-io**: mock_shutil.assert_called_once_with(fake_instance_path) (src/nova/tests/unit/virt/libvirt/test_driver.py:L14806)
- **file-io**: @mock.patch('shutil.rmtree') (src/nova/tests/unit/virt/libvirt/test_driver.py:L14808)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L14809)
- **file-io**: self.assertFalse(mock_shutil.called) (src/nova/tests/unit/virt/libvirt/test_driver.py:L14840)
- **file-io**: @mock.patch('os.path.exists', return_value=False) (src/nova/tests/unit/virt/libvirt/test_driver.py:L15840)
- **process-spawn**: @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_driver.py:L15895)
- **file-io**: base_dir = os.path.join(CONF.instances_path, (src/nova/tests/unit/virt/libvirt/test_driver.py:L15900)
- **file-io**: backfile_path = os.path.join(base_dir, backing_file) (src/nova/tests/unit/virt/libvirt/test_driver.py:L15914)
- **file-io**: with open(dest, 'a'): (src/nova/tests/unit/virt/libvirt/test_driver.py:L15930)
- **file-io**: kernel_path = os.path.join(CONF.instances_path, (src/nova/tests/unit/virt/libvirt/test_driver.py:L15946)
- **file-io**: ramdisk_path = os.path.join(CONF.instances_path, (src/nova/tests/unit/virt/libvirt/test_driver.py:L15949)
- **file-io**: base_dir = os.path.join(CONF.instances_path, (src/nova/tests/unit/virt/libvirt/test_driver.py:L15987)
- **file-io**: backfile_path = os.path.join(base_dir, backing_file) (src/nova/tests/unit/virt/libvirt/test_driver.py:L15999)
- **file-io**: kernel_path = os.path.join(CONF.instances_path, (src/nova/tests/unit/virt/libvirt/test_driver.py:L16020)
- **file-io**: ramdisk_path = os.path.join(CONF.instances_path, (src/nova/tests/unit/virt/libvirt/test_driver.py:L16022)
- **process-spawn**: @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_driver.py:L16072)
- **file-io**: base_dir = os.path.join(CONF.instances_path, (src/nova/tests/unit/virt/libvirt/test_driver.py:L16078)
- **file-io**: os.path.join(base_dir, name) (src/nova/tests/unit/virt/libvirt/test_driver.py:L16101)
- **file-io**: instance_path = os.path.dirname(disk_info[0]['path']) (src/nova/tests/unit/virt/libvirt/test_driver.py:L16720)
- **file-io**: disk_info_path = os.path.join(instance_path, 'disk.info') (src/nova/tests/unit/virt/libvirt/test_driver.py:L16721)
- **file-io**: @mock.patch('os.path.getsize') (src/nova/tests/unit/virt/libvirt/test_driver.py:L16764)
- **file-io**: @mock.patch('os.path.getsize') (src/nova/tests/unit/virt/libvirt/test_driver.py:L16883)
- **file-io**: @mock.patch('os.path.getsize') (src/nova/tests/unit/virt/libvirt/test_driver.py:L16948)
- **process-spawn**: 'nova.privsep.fs._MKFS_COMMAND', (src/nova/tests/unit/virt/libvirt/test_driver.py:L17519)
- **file-io**: expected_config_drive_path = os.path.join( (src/nova/tests/unit/virt/libvirt/test_driver.py:L17651)
- **process-spawn**: @mock.patch('nova.privsep.fs.get_file_extension_for_os_type') (src/nova/tests/unit/virt/libvirt/test_driver.py:L17813)
- **process-spawn**: @mock.patch('nova.privsep.fs.mkfs') (src/nova/tests/unit/virt/libvirt/test_driver.py:L17858)
- **process-spawn**: @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_driver.py:L17868)
- **process-spawn**: @mock.patch('nova.privsep.fs.mkfs') (src/nova/tests/unit/virt/libvirt/test_driver.py:L17904)
- **process-spawn**: @mock.patch('nova.privsep.fs.mkfs') (src/nova/tests/unit/virt/libvirt/test_driver.py:L17912)
- **process-spawn**: @mock.patch('nova.privsep.fs.configurable_mkfs') (src/nova/tests/unit/virt/libvirt/test_driver.py:L17921)
- **process-spawn**: self.stub_out('nova.privsep.fs._MKFS_COMMAND', (src/nova/tests/unit/virt/libvirt/test_driver.py:L17924)
- **process-spawn**: @mock.patch('nova.privsep.fs.configurable_mkfs') (src/nova/tests/unit/virt/libvirt/test_driver.py:L17932)
- **process-spawn**: self.stub_out('nova.privsep.fs._MKFS_COMMAND', (src/nova/tests/unit/virt/libvirt/test_driver.py:L17935)
- **process-spawn**: @mock.patch('nova.privsep.fs.unprivileged_mkfs') (src/nova/tests/unit/virt/libvirt/test_driver.py:L17955)
- **process-spawn**: @mock.patch('nova.privsep.path.last_bytes', (src/nova/tests/unit/virt/libvirt/test_driver.py:L17998)
- **file-io**: console_dir = (os.path.join(tmpdir, instance['name'])) (src/nova/tests/unit/virt/libvirt/test_driver.py:L18008)
- **file-io**: with mock.patch('os.path.exists', return_value=True): (src/nova/tests/unit/virt/libvirt/test_driver.py:L18035)
- **process-spawn**: @mock.patch('nova.privsep.path.last_bytes', (src/nova/tests/unit/virt/libvirt/test_driver.py:L18045)
- **file-io**: console_dir = (os.path.join(tmpdir, instance['name'])) (src/nova/tests/unit/virt/libvirt/test_driver.py:L18057)
- **file-io**: with mock.patch('os.path.exists', return_value=True): (src/nova/tests/unit/virt/libvirt/test_driver.py:L18083)
- **file-io**: console_log = os.path.join(tmpdir, instance['name'], (src/nova/tests/unit/virt/libvirt/test_driver.py:L18098)
- **file-io**: with mock.patch('os.path.exists', return_value=False): (src/nova/tests/unit/virt/libvirt/test_driver.py:L18122)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/virt/libvirt/test_driver.py:L18127)
- **process-spawn**: @mock.patch('nova.privsep.path.last_bytes', (src/nova/tests/unit/virt/libvirt/test_driver.py:L18128)
- **process-spawn**: @mock.patch('nova.privsep.path.writefile') (src/nova/tests/unit/virt/libvirt/test_driver.py:L18130)
- **process-spawn**: @mock.patch('nova.privsep.libvirt.readpty') (src/nova/tests/unit/virt/libvirt/test_driver.py:L18131)
- **file-io**: console_dir = (os.path.join(tmpdir, instance['name'])) (src/nova/tests/unit/virt/libvirt/test_driver.py:L18141)
- **file-io**: return os.path.basename(path) in fake_files (src/nova/tests/unit/virt/libvirt/test_driver.py:L18234)
- **file-io**: mock.patch('os.path.exists', (src/nova/tests/unit/virt/libvirt/test_driver.py:L18272)
- **file-io**: with mock.patch('os.path.exists', return_value=True): (src/nova/tests/unit/virt/libvirt/test_driver.py:L18741)
- **file-io**: disks = {os.path.basename(name): value (src/nova/tests/unit/virt/libvirt/test_driver.py:L18760)
- **file-io**: 'os.path.exists', return_value=True (src/nova/tests/unit/virt/libvirt/test_driver.py:L18857)
- **file-io**: disks = {os.path.basename(name): value (src/nova/tests/unit/virt/libvirt/test_driver.py:L18871)
- **file-io**: @mock.patch('oslo_utils.fileutils.ensure_tree', new=mock.Mock()) (src/nova/tests/unit/virt/libvirt/test_driver.py:L19034)
- **file-io**: @mock.patch('oslo_utils.fileutils.ensure_tree') (src/nova/tests/unit/virt/libvirt/test_driver.py:L19080)
- **file-io**: @mock.patch('os.path.getsize') (src/nova/tests/unit/virt/libvirt/test_driver.py:L20160)
- **file-io**: @mock.patch('oslo_utils.fileutils.ensure_tree') (src/nova/tests/unit/virt/libvirt/test_driver.py:L21664)
- **file-io**: @mock.patch('oslo_utils.fileutils.ensure_tree') (src/nova/tests/unit/virt/libvirt/test_driver.py:L21711)
- **file-io**: @mock.patch('oslo_utils.fileutils.ensure_tree') (src/nova/tests/unit/virt/libvirt/test_driver.py:L21774)
- **process-spawn**: supported_fs = [nova.privsep.fs.FS_FORMAT_EXT2, (src/nova/tests/unit/virt/libvirt/test_driver.py:L22090)
- **process-spawn**: nova.privsep.fs.FS_FORMAT_EXT3, (src/nova/tests/unit/virt/libvirt/test_driver.py:L22091)
- **process-spawn**: nova.privsep.fs.FS_FORMAT_EXT4, (src/nova/tests/unit/virt/libvirt/test_driver.py:L22092)
- **process-spawn**: nova.privsep.fs.FS_FORMAT_XFS] (src/nova/tests/unit/virt/libvirt/test_driver.py:L22093)
- **process-spawn**: @mock.patch('nova.privsep.path.chown') (src/nova/tests/unit/virt/libvirt/test_driver.py:L23018)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/virt/libvirt/test_driver.py:L23145)
- **file-io**: @mock.patch('tempfile.mkstemp') (src/nova/tests/unit/virt/libvirt/test_driver.py:L23146)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L23656)
- **file-io**: @mock.patch('os.path.getsize') (src/nova/tests/unit/virt/libvirt/test_driver.py:L23657)
- **file-io**: @mock.patch('os.path.isdir') (src/nova/tests/unit/virt/libvirt/test_driver.py:L23658)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/virt/libvirt/test_driver.py:L25306)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/virt/libvirt/test_driver.py:L25337)
- **file-io**: instance_base = os.path.dirname(disk_info[0]['path']) (src/nova/tests/unit/virt/libvirt/test_driver.py:L25692)
- **file-io**: src_disk_info_path = os.path.join(instance_base + '_resize', (src/nova/tests/unit/virt/libvirt/test_driver.py:L25700)
- **file-io**: dst_disk_info_path = os.path.join(instance_base, 'disk.info') (src/nova/tests/unit/virt/libvirt/test_driver.py:L25713)
- **process-spawn**: @mock.patch('nova.privsep.utils.supports_direct_io', return_value=True) (src/nova/tests/unit/virt/libvirt/test_driver.py:L25747)
- **process-spawn**: @mock.patch('nova.privsep.utils.supports_direct_io', return_value=False) (src/nova/tests/unit/virt/libvirt/test_driver.py:L25765)
- **process-spawn**: @mock.patch('nova.privsep.utils.supports_direct_io') (src/nova/tests/unit/virt/libvirt/test_driver.py:L25795)
- **file-io**: convert_calls = [mock.call(os.path.join(instance_path, name)) (src/nova/tests/unit/virt/libvirt/test_driver.py:L25846)
- **file-io**: @mock.patch('shutil.rmtree') (src/nova/tests/unit/virt/libvirt/test_driver.py:L25909)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L25912)
- **file-io**: @mock.patch('shutil.rmtree') (src/nova/tests/unit/virt/libvirt/test_driver.py:L25927)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L25930)
- **file-io**: @mock.patch('shutil.rmtree') (src/nova/tests/unit/virt/libvirt/test_driver.py:L25949)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L25951)
- **file-io**: @mock.patch('shutil.rmtree') (src/nova/tests/unit/virt/libvirt/test_driver.py:L25964)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L25966)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L25976)
- **file-io**: @mock.patch('os.path.join') (src/nova/tests/unit/virt/libvirt/test_driver.py:L25977)
- **file-io**: os.mkdir(os.path.join(tmpdir, instance.name)) (src/nova/tests/unit/virt/libvirt/test_driver.py:L26077)
- **file-io**: libvirt_xml_path = os.path.join(tmpdir, (src/nova/tests/unit/virt/libvirt/test_driver.py:L26078)
- **file-io**: f = open(libvirt_xml_path, 'w') (src/nova/tests/unit/virt/libvirt/test_driver.py:L26081)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L26496)
- **file-io**: disk_path = os.path.join(instance_dir, 'disk') (src/nova/tests/unit/virt/libvirt/test_driver.py:L26636)
- **file-io**: expected_backing_file = os.path.join( (src/nova/tests/unit/virt/libvirt/test_driver.py:L26641)
- **process-spawn**: @mock.patch('nova.privsep.utils.supports_direct_io') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28069)
- **file-io**: expected_kernel_ramdisk_paths = [os.path.join(CONF.instances_path, (src/nova/tests/unit/virt/libvirt/test_driver.py:L28156)
- **file-io**: expected_kernel_ramdisk_paths = [os.path.join(CONF.instances_path, (src/nova/tests/unit/virt/libvirt/test_driver.py:L28229)
- **file-io**: unrescue_xml_path = os.path.join('/path', 'unrescue.xml') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28517)
- **file-io**: rescue_file = os.path.join('/path', 'rescue.file') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28518)
- **file-io**: rescue_dir = os.path.join('/path', 'rescue.dir') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28519)
- **file-io**: @mock.patch('shutil.rmtree') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28578)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28580)
- **file-io**: mock_shutil.assert_called_with('/path_del') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28593)
- **file-io**: @mock.patch('shutil.rmtree') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28596)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28598)
- **syscall**: [mock.call(3, signal.SIGKILL), mock.call(3, 0), (src/nova/tests/unit/virt/libvirt/test_driver.py:L28614)
- **syscall**: mock.call(4, signal.SIGKILL), mock.call(4, 0)]) (src/nova/tests/unit/virt/libvirt/test_driver.py:L28615)
- **file-io**: mock_shutil.assert_called_with('/path_del') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28616)
- **file-io**: @mock.patch('shutil.rmtree') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28620)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28622)
- **file-io**: mock_shutil.assert_called_with('/path_del') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28638)
- **file-io**: @mock.patch('shutil.rmtree') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28641)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28643)
- **file-io**: mock_shutil.assert_called_with('/path_del') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28656)
- **file-io**: @mock.patch('shutil.rmtree') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28659)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28661)
- **file-io**: @mock.patch('shutil.rmtree') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28679)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28681)
- **file-io**: @mock.patch('shutil.rmtree') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28699)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28701)
- **file-io**: self.assertEqual(0, len(mock_shutil.mock_calls)) (src/nova/tests/unit/virt/libvirt/test_driver.py:L28717)
- **file-io**: @mock.patch('shutil.rmtree') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28720)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28722)
- **file-io**: mock_shutil.assert_called_with('/path_del') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28739)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L29297)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L29373)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L29456)
- **file-io**: @mock.patch('oslo_utils.fileutils.ensure_tree', new=mock.Mock()) (src/nova/tests/unit/virt/libvirt/test_driver.py:L30029)
- **file-io**: @mock.patch('oslo_utils.fileutils.ensure_tree', new=mock.Mock()) (src/nova/tests/unit/virt/libvirt/test_driver.py:L30125)
- **file-io**: @mock.patch('oslo_utils.fileutils.ensure_tree') (src/nova/tests/unit/virt/libvirt/test_driver.py:L30774)
- **file-io**: @mock.patch('os.path.isdir') (src/nova/tests/unit/virt/libvirt/test_driver.py:L30775)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L30776)
- **file-io**: expected_fn = os.path.join('/nova/instances/cache', (src/nova/tests/unit/virt/libvirt/test_driver.py:L30786)
- **file-io**: @mock.patch('oslo_utils.fileutils.ensure_tree') (src/nova/tests/unit/virt/libvirt/test_driver.py:L30808)
- **file-io**: @mock.patch('os.path.isdir') (src/nova/tests/unit/virt/libvirt/test_driver.py:L30809)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_driver.py:L30810)
- **process-spawn**: @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_driver.py:L30811)
- **file-io**: expected_fn = os.path.join('/nova/instances/cache', (src/nova/tests/unit/virt/libvirt/test_driver.py:L30820)
- **process-spawn**: @mock.patch('nova.privsep.path.chown') (src/nova/tests/unit/virt/libvirt/test_driver.py:L32491)
- **file-io**: self.stub_out('os.path.exists', fake_exists) (src/nova/tests/unit/virt/libvirt/test_driver.py:L32895)
- **process-spawn**: @mock.patch('nova.privsep.libvirt.get_pmem_namespaces') (src/nova/tests/unit/virt/libvirt/test_driver.py:L33018)
- **process-spawn**: @mock.patch('nova.privsep.libvirt.get_pmem_namespaces') (src/nova/tests/unit/virt/libvirt/test_driver.py:L33042)
- **process-spawn**: @mock.patch('nova.privsep.libvirt.get_pmem_namespaces') (src/nova/tests/unit/virt/libvirt/test_driver.py:L33052)
- **process-spawn**: @mock.patch('nova.privsep.libvirt.get_pmem_namespaces') (src/nova/tests/unit/virt/libvirt/test_driver.py:L33062)
- **process-spawn**: @mock.patch('nova.privsep.libvirt.get_pmem_namespaces') (src/nova/tests/unit/virt/libvirt/test_driver.py:L33070)
- **process-spawn**: @mock.patch('nova.privsep.libvirt.cleanup_vpmem') (src/nova/tests/unit/virt/libvirt/test_driver.py:L33130)
- **process-spawn**: @mock.patch('nova.privsep.libvirt.cleanup_vpmem') (src/nova/tests/unit/virt/libvirt/test_driver.py:L33140)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/virt/libvirt/test_driver.py:L121)
- **global-mutation**: REQUIRES_LOCKING = True (src/nova/tests/unit/virt/libvirt/test_driver.py:L728)
- **global-mutation**: TEST_AMOUNT_OF_PCIE_SLOTS = 8 (src/nova/tests/unit/virt/libvirt/test_driver.py:L3230)
- **global-mutation**: TEST_AMOUNT_OF_PCIE_SLOTS = 8 (src/nova/tests/unit/virt/libvirt/test_driver.py:L8960)
- **global-mutation**: EXPECT_SUCCESS = 1 (src/nova/tests/unit/virt/libvirt/test_driver.py:L15022)
- **global-mutation**: EXPECT_FAILURE = 2 (src/nova/tests/unit/virt/libvirt/test_driver.py:L15023)
- **global-mutation**: EXPECT_ABORT = 3 (src/nova/tests/unit/virt/libvirt/test_driver.py:L15024)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.fs (src/nova/tests/unit/virt/libvirt/test_driver.py:L78)
- **privilege** (`privsep-entrypoint`): import nova.privsep.libvirt (src/nova/tests/unit/virt/libvirt/test_driver.py:L79)
- **privilege** (`privsep-entrypoint`): eph_default_ext = utils.get_hash_str(nova.privsep.fs._DEFAULT_FILE_SYSTEM)[:7] (src/nova/tests/unit/virt/libvirt/test_driver.py:L162)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.utils.supports_direct_io', (src/nova/tests/unit/virt/libvirt/test_driver.py:L3551)
- **sink** (`db-write`): pci_device_info.update(compute_node_id=1, (src/nova/tests/unit/virt/libvirt/test_driver.py:L4139)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.utils.supports_direct_io', (src/nova/tests/unit/virt/libvirt/test_driver.py:L4169)
- **sink** (`db-write`): pci_device_info.update(compute_node_id=1, (src/nova/tests/unit/virt/libvirt/test_driver.py:L4192)
- **sink** (`db-write`): pci_device_info.update(numa_node=0, address='0000:00:00.2') (src/nova/tests/unit/virt/libvirt/test_driver.py:L4201)
- **sink** (`db-write`): pci_device_info.update( (src/nova/tests/unit/virt/libvirt/test_driver.py:L8775)
- **sink** (`db-write`): Test that the driver will select model3 but not model2. (src/nova/tests/unit/virt/libvirt/test_driver.py:L9643)
- **sink** (`db-write`): fake_qemu64_cpu_feature_with_avx2.insert( (src/nova/tests/unit/virt/libvirt/test_driver.py:L9648)
- **privilege** (`crypto-key`): mock_get_volume_encryption, mock_get_key_mgr): (src/nova/tests/unit/virt/libvirt/test_driver.py:L10758)
- **privilege** (`crypto-key`): mock_key_mgr = mock.Mock() (src/nova/tests/unit/virt/libvirt/test_driver.py:L10781)
- **privilege** (`crypto-key`): mock_get_key_mgr.return_value = mock_key_mgr (src/nova/tests/unit/virt/libvirt/test_driver.py:L10782)
- **privilege** (`crypto-key`): mock_key_mgr.get.return_value = mock_key (src/nova/tests/unit/virt/libvirt/test_driver.py:L10783)
- **privilege** (`crypto-key`): mock_get_encryptor, mock_get_metadata, mock_get_key_mgr): (src/nova/tests/unit/virt/libvirt/test_driver.py:L11893)
- **privilege** (`crypto-key`): mock_key_mgr = mock.Mock() (src/nova/tests/unit/virt/libvirt/test_driver.py:L11908)
- **privilege** (`crypto-key`): mock_get_key_mgr.return_value = mock_key_mgr (src/nova/tests/unit/virt/libvirt/test_driver.py:L11909)
- **privilege** (`crypto-key`): mock_key_mgr.get.return_value = mock_key (src/nova/tests/unit/virt/libvirt/test_driver.py:L11910)
- **privilege** (`privsep-entrypoint`): self.stub_out('nova.privsep.utils.supports_direct_io', (src/nova/tests/unit/virt/libvirt/test_driver.py:L12222)
- **sink** (`db-write`): instance_dict.update({'host': 'fake', (src/nova/tests/unit/virt/libvirt/test_driver.py:L13777)
- **sink** (`db-write`): instance_dict.update({'host': 'fake', (src/nova/tests/unit/virt/libvirt/test_driver.py:L13815)
- **sink** (`db-write`): instance_dict.update({'host': 'fake', (src/nova/tests/unit/virt/libvirt/test_driver.py:L14440)
- **sink** (`db-write`): self.test_instance.update({'user_id': 'fake-user', (src/nova/tests/unit/virt/libvirt/test_driver.py:L15873)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_driver.py:L15895)
- **sink** (`db-write`): self.test_instance.update({'user_id': 'fake-user', (src/nova/tests/unit/virt/libvirt/test_driver.py:L15905)
- **sink** (`db-write`): self.test_instance.update({ (src/nova/tests/unit/virt/libvirt/test_driver.py:L15989)
- **sink** (`db-write`): self.test_instance.update({'user_id': 'fake-user', (src/nova/tests/unit/virt/libvirt/test_driver.py:L16048)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_driver.py:L16072)
- **privilege** (`privsep-entrypoint`): 'nova.privsep.fs._MKFS_COMMAND', (src/nova/tests/unit/virt/libvirt/test_driver.py:L17519)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.get_file_extension_for_os_type') (src/nova/tests/unit/virt/libvirt/test_driver.py:L17813)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.mkfs') (src/nova/tests/unit/virt/libvirt/test_driver.py:L17858)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_driver.py:L17868)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.mkfs') (src/nova/tests/unit/virt/libvirt/test_driver.py:L17904)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.mkfs') (src/nova/tests/unit/virt/libvirt/test_driver.py:L17912)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.configurable_mkfs') (src/nova/tests/unit/virt/libvirt/test_driver.py:L17921)
- **privilege** (`privsep-entrypoint`): self.stub_out('nova.privsep.fs._MKFS_COMMAND', (src/nova/tests/unit/virt/libvirt/test_driver.py:L17924)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.configurable_mkfs') (src/nova/tests/unit/virt/libvirt/test_driver.py:L17932)
- **privilege** (`privsep-entrypoint`): self.stub_out('nova.privsep.fs._MKFS_COMMAND', (src/nova/tests/unit/virt/libvirt/test_driver.py:L17935)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.unprivileged_mkfs') (src/nova/tests/unit/virt/libvirt/test_driver.py:L17955)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.last_bytes', (src/nova/tests/unit/virt/libvirt/test_driver.py:L17998)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.last_bytes', (src/nova/tests/unit/virt/libvirt/test_driver.py:L18045)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.last_bytes', (src/nova/tests/unit/virt/libvirt/test_driver.py:L18128)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.writefile') (src/nova/tests/unit/virt/libvirt/test_driver.py:L18130)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.libvirt.readpty') (src/nova/tests/unit/virt/libvirt/test_driver.py:L18131)
- **privilege** (`privsep-entrypoint`): supported_fs = [nova.privsep.fs.FS_FORMAT_EXT2, (src/nova/tests/unit/virt/libvirt/test_driver.py:L22090)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.FS_FORMAT_EXT3, (src/nova/tests/unit/virt/libvirt/test_driver.py:L22091)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.FS_FORMAT_EXT4, (src/nova/tests/unit/virt/libvirt/test_driver.py:L22092)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.FS_FORMAT_XFS] (src/nova/tests/unit/virt/libvirt/test_driver.py:L22093)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.chown') (src/nova/tests/unit/virt/libvirt/test_driver.py:L23018)
- **sink** (`db-write`): inventory.update(vgpu_inventory) (src/nova/tests/unit/virt/libvirt/test_driver.py:L24655)
- **sink** (`db-write`): inventory.update(vgpu_inventory) (src/nova/tests/unit/virt/libvirt/test_driver.py:L24777)
- **sink** (`db-write`): inventory.update(sev_inventory) (src/nova/tests/unit/virt/libvirt/test_driver.py:L24832)
- **sink** (`db-write`): inventory.update(sev_inventory) (src/nova/tests/unit/virt/libvirt/test_driver.py:L24946)
- **sink** (`db-write`): flavor.update(params.pop('flavor', {})) (src/nova/tests/unit/virt/libvirt/test_driver.py:L25254)
- **sink** (`db-write`): inst.update(params) (src/nova/tests/unit/virt/libvirt/test_driver.py:L25280)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.utils.supports_direct_io', return_value=True) (src/nova/tests/unit/virt/libvirt/test_driver.py:L25747)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.utils.supports_direct_io', return_value=False) (src/nova/tests/unit/virt/libvirt/test_driver.py:L25765)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.utils.supports_direct_io') (src/nova/tests/unit/virt/libvirt/test_driver.py:L25795)
- **sink** (`file-write`): f = open(libvirt_xml_path, 'w') (src/nova/tests/unit/virt/libvirt/test_driver.py:L26081)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.utils.supports_direct_io') (src/nova/tests/unit/virt/libvirt/test_driver.py:L28069)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_driver.py:L30811)
- **sink** (`db-write`): properties.update(extra_properties) (src/nova/tests/unit/virt/libvirt/test_driver.py:L32479)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.chown') (src/nova/tests/unit/virt/libvirt/test_driver.py:L32491)
- **sink** (`db-write`): with mock.patch.object(self.image_service, 'update', (src/nova/tests/unit/virt/libvirt/test_driver.py:L32699)
- **sink** (`db-write`): with mock.patch.object(self.image_service, 'update', (src/nova/tests/unit/virt/libvirt/test_driver.py:L32723)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.libvirt.get_pmem_namespaces') (src/nova/tests/unit/virt/libvirt/test_driver.py:L33018)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.libvirt.get_pmem_namespaces') (src/nova/tests/unit/virt/libvirt/test_driver.py:L33042)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.libvirt.get_pmem_namespaces') (src/nova/tests/unit/virt/libvirt/test_driver.py:L33052)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.libvirt.get_pmem_namespaces') (src/nova/tests/unit/virt/libvirt/test_driver.py:L33062)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.libvirt.get_pmem_namespaces') (src/nova/tests/unit/virt/libvirt/test_driver.py:L33070)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.libvirt.cleanup_vpmem') (src/nova/tests/unit/virt/libvirt/test_driver.py:L33130)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.libvirt.cleanup_vpmem') (src/nova/tests/unit/virt/libvirt/test_driver.py:L33140)
- **privilege** (`crypto-key`): self, has_key_mgr_secret=True, has_libvirt_secret=True, (src/nova/tests/unit/virt/libvirt/test_driver.py:L33737)
- **privilege** (`crypto-key`): encryption_secret_uuid = uuids.secret if has_key_mgr_secret else None (src/nova/tests/unit/virt/libvirt/test_driver.py:L33751)
- **privilege** (`crypto-key`): def test_cleanup_with_ephemeral_encryption_no_key_mgr_secret(self): (src/nova/tests/unit/virt/libvirt/test_driver.py:L33783)
- **privilege** (`crypto-key`): self._test_cleanup_with_ephemeral_encryption(has_key_mgr_secret=False) (src/nova/tests/unit/virt/libvirt/test_driver.py:L33784)

## Notes

- KB `sideEffects` entries at L2361 have targets that appear to be code fragments rather than resource paths; documented as recorded.

