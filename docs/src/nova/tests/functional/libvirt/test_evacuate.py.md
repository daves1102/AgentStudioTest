# src/nova/tests/functional/libvirt/test_evacuate.py

## Overview

This file implements the `test_evacuate` module, defining 11 classs, 5 constants, 4 fields, 9 functions, 28 methods, 2 staticmethods, 18 imports, 28 side effects.

Lines: total 654, code 431, comment 84, blank 139

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L36–L36` |
| `FLAVOR_FIXTURES` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L39–L49` |
| `IMAGE_ID` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L52–L52` |
| `SERVER_FIXTURES` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L61–L97` |
| `SERVER_DISKS` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L100–L105` |
| `_FileTest` | class | — | unexported | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L108–L143` |
| `_FileTest.setUp` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_evacuate.py:L111–L112` |
| `_FileTest.assert_disks_nonshared_instancedir` | method | (self, server) | public | `` (src/nova/tests/functional/libvirt/test_evacuate.py:L118) | 2/15 | `src/nova/tests/functional/libvirt/test_evacuate.py:L114–L130` |
| `_FileTest.assert_disks_shared_instancedir` | method | (self, server) | public | `` (src/nova/tests/functional/libvirt/test_evacuate.py:L136) | 2/10 | `src/nova/tests/functional/libvirt/test_evacuate.py:L132–L143` |
| `_FlatTest` | class | — | unexported | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L146–L168` |
| `_FlatTest.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/libvirt/test_evacuate.py:L153–L168` |
| `_FlatTest.setUp.fake_create_image` | function | (_self, *args, **kwargs) | public | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L158–L160` |
| `_Qcow2Test` | class | — | unexported | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L171–L189` |
| `_Qcow2Test.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/libvirt/test_evacuate.py:L178–L189` |
| `_Qcow2Test.setUp.fake_create_image` | function | (_self, *args, **kwargs) | public | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L183–L185` |
| `_RbdTest` | class | — | unexported | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L192–L244` |
| `_RbdTest.setUp` | method | (self) | public | not declared | 1/20 | `src/nova/tests/functional/libvirt/test_evacuate.py:L200–L228` |
| `_RbdTest.setUp.fake_create_image` | function | (_self, *args, **kwargs) | public | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L208–L209` |
| `_RbdTest.setUp.fake_exists` | function | (_self) | public | `_self.rbd_name in self.created` (src/nova/tests/functional/libvirt/test_evacuate.py:L212) | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L211–L212` |
| `_RbdTest._assert_disks` | method | (self, server) | private | `` (src/nova/tests/functional/libvirt/test_evacuate.py:L234) | 2/7 | `src/nova/tests/functional/libvirt/test_evacuate.py:L230–L239` |
| `_RbdTest.assert_disks_nonshared_instancedir` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L243–L243` |
| `_RbdTest.assert_disks_shared_instancedir` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L244–L244` |
| `FakeLVM` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L247–L286` |
| `FakeLVM.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_evacuate.py:L248–L249` |
| `FakeLVM._exists` | method | (self, vg, lv) | private | `any([v for v in self.volumes if v[0] == vg and v[1] == lv])` (src/nova/tests/functional/libvirt/test_evacuate.py:L252) | 4/2 | `src/nova/tests/functional/libvirt/test_evacuate.py:L251–L252` |
| `FakeLVM._vg_exists` | method | (self, vg) | private | `any([v for v in self.volumes if v[0] == vg])` (src/nova/tests/functional/libvirt/test_evacuate.py:L255) | 3/2 | `src/nova/tests/functional/libvirt/test_evacuate.py:L254–L255` |
| `FakeLVM._find_vol_from_path` | method | (self, path) | private | `vol` (src/nova/tests/functional/libvirt/test_evacuate.py:L261); `None` (src/nova/tests/functional/libvirt/test_evacuate.py:L262) | 4/6 | `src/nova/tests/functional/libvirt/test_evacuate.py:L257–L262` |
| `FakeLVM.create_volume` | method | (self, vg, lv, size, sparse=False) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_evacuate.py:L264–L265` |
| `FakeLVM.list_volumes` | method | (self, vg_path) | public | `[vol[1] for vol in self.volumes if vol[0] == vg]` (src/nova/tests/functional/libvirt/test_evacuate.py:L269) | 3/3 | `src/nova/tests/functional/libvirt/test_evacuate.py:L267–L269` |
| `FakeLVM.volume_info` | method | (self, path) | public | `{'VG': vg, 'LV': lv}` (src/nova/tests/functional/libvirt/test_evacuate.py:L274) | 1/4 | `src/nova/tests/functional/libvirt/test_evacuate.py:L271–L274` |
| `FakeLVM.get_volume_size` | method | (self, path) | public | `vol[2]` (src/nova/tests/functional/libvirt/test_evacuate.py:L279) | 2/5 | `src/nova/tests/functional/libvirt/test_evacuate.py:L276–L280` |
| `FakeLVM.remove_volumes` | method | (self, paths) | public | not declared | 3/5 | `src/nova/tests/functional/libvirt/test_evacuate.py:L282–L286` |
| `_LVMTest` | class | — | unexported | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L289–L384` |
| `_LVMTest.setUp` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/libvirt/test_evacuate.py:L297–L345` |
| `_LVMTest.setUp.fake_create_image` | function | (_self, prepare_template, base, size, *args, **kwargs) | public | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L310–L312` |
| `_LVMTest.setUp.fake_exists` | function | (_self, *args, **kwargs) | public | `self.fake_lvm._exists(_self.vg, _self.lv)` (src/nova/tests/functional/libvirt/test_evacuate.py:L315) | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L314–L315` |
| `_LVMTest.setUp.fake_path_exists` | function | (path) | public | `True` (src/nova/tests/functional/libvirt/test_evacuate.py:L332); `self.fake_lvm._vg_exists(*paths)` (src/nova/tests/functional/libvirt/test_evacuate.py:L335); `self.fake_lvm._exists(*paths)` (src/nova/tests/functional/libvirt/test_evacuate.py:L338); `False` (src/nova/tests/functional/libvirt/test_evacuate.py:L340); `orig_path_exists(path)` (src/nova/tests/functional/libvirt/test_evacuate.py:L342) | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L326–L342` |
| `_LVMTest._start_compute` | method | (self, name) | private | `compute` (src/nova/tests/functional/libvirt/test_evacuate.py:L360) | 1/8 | `src/nova/tests/functional/libvirt/test_evacuate.py:L347–L360` |
| `_LVMTest._assert_disks` | method | (self, server) | private | `` (src/nova/tests/functional/libvirt/test_evacuate.py:L366) | 2/15 | `src/nova/tests/functional/libvirt/test_evacuate.py:L362–L379` |
| `_LVMTest.assert_disks_nonshared_instancedir` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L383–L383` |
| `_LVMTest.assert_disks_shared_instancedir` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L384–L384` |
| `_LibvirtEvacuateTest` | class | — | unexported | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L387–L638` |
| `_LibvirtEvacuateTest._start_compute` | method | (self, name) | private | `compute` (src/nova/tests/functional/libvirt/test_evacuate.py:L425) | 1/8 | `src/nova/tests/functional/libvirt/test_evacuate.py:L406–L425` |
| `_LibvirtEvacuateTest.setUp` | method | (self) | public | not declared | 3/48 | `src/nova/tests/functional/libvirt/test_evacuate.py:L427–L491` |
| `_LibvirtEvacuateTest.source_instance_path` | method | (server) | public | `os.path.join(CONF.instances_path, server['id'])` (src/nova/tests/functional/libvirt/test_evacuate.py:L495) | 1/2 | `src/nova/tests/functional/libvirt/test_evacuate.py:L494–L495` |
| `_LibvirtEvacuateTest.dest_instance_path` | method | (server) | public | `os.path.join(CONF.instances_path, 'dest', server['id'])` (src/nova/tests/functional/libvirt/test_evacuate.py:L499) | 1/2 | `src/nova/tests/functional/libvirt/test_evacuate.py:L498–L499` |
| `_LibvirtEvacuateTest._create_servers` | method | (self) | private | `[_create_server(server) for server in SERVER_FIXTURES]` (src/nova/tests/functional/libvirt/test_evacuate.py:L514) | 2/3 | `src/nova/tests/functional/libvirt/test_evacuate.py:L501–L514` |
| `_LibvirtEvacuateTest._create_servers._create_server` | function | (server) | private | `self._wait_for_state_change(server, 'ACTIVE', max_retries=30)` (src/nova/tests/functional/libvirt/test_evacuate.py:L511) | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L502–L512` |
| `_LibvirtEvacuateTest._swap_computes` | method | (self, compute0) | private | `self._start_compute('compute1')` (src/nova/tests/functional/libvirt/test_evacuate.py:L522) | 1/4 | `src/nova/tests/functional/libvirt/test_evacuate.py:L516–L522` |
| `_LibvirtEvacuateTest._evacuate_with_failure` | method | (self, server, compute1) | private | `server` (src/nova/tests/functional/libvirt/test_evacuate.py:L544) | 1/11 | `src/nova/tests/functional/libvirt/test_evacuate.py:L524–L544` |
| `_LibvirtEvacuateTest.test_evacuate_failure_nonshared_instancedir` | method | (self) | public | not declared | 2/32 | `src/nova/tests/functional/libvirt/test_evacuate.py:L546–L603` |
| `_LibvirtEvacuateTest.test_evacuate_failure_nonshared_instancedir.dest_get_instance_path` | function | (instance, relative=False) | public | `instance.uuid` (src/nova/tests/functional/libvirt/test_evacuate.py:L582); `dest_instance_path` (src/nova/tests/functional/libvirt/test_evacuate.py:L583) | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L580–L583` |
| `_LibvirtEvacuateTest.test_evacuate_failure_shared_instancedir` | method | (self) | public | not declared | 2/16 | `src/nova/tests/functional/libvirt/test_evacuate.py:L605–L638` |
| `LibvirtFlatEvacuateTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L641–L642` |
| `LibvirtQcowEvacuateTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L645–L646` |
| `LibvirtRbdEvacuateTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L649–L650` |
| `LibvirtLVMEvacuateTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L653–L654` |
| `_LibvirtEvacuateTest.source_instance_path` | staticmethod | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L493–L495` |
| `_LibvirtEvacuateTest.dest_instance_path` | staticmethod | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_evacuate.py:L497–L499` |

## Dependencies

- `import collections` (src/nova/tests/functional/libvirt/test_evacuate.py:L15)
- `import os.path` (src/nova/tests/functional/libvirt/test_evacuate.py:L16)
- `unittest`: imports `mock` (src/nova/tests/functional/libvirt/test_evacuate.py:L17)
- `import fixtures` (src/nova/tests/functional/libvirt/test_evacuate.py:L19)
- `oslo_utils`: imports `fileutils` (src/nova/tests/functional/libvirt/test_evacuate.py:L20)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/libvirt/test_evacuate.py:L21)
- `oslo_utils`: imports `units` (src/nova/tests/functional/libvirt/test_evacuate.py:L22)
- `nova`: imports `conf` (src/nova/tests/functional/libvirt/test_evacuate.py:L24)
- `nova`: imports `context` (src/nova/tests/functional/libvirt/test_evacuate.py:L25)
- `nova`: imports `exception` (src/nova/tests/functional/libvirt/test_evacuate.py:L26)
- `nova`: imports `objects` (src/nova/tests/functional/libvirt/test_evacuate.py:L27)
- `nova`: imports `test` (src/nova/tests/functional/libvirt/test_evacuate.py:L28)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/libvirt/test_evacuate.py:L29)
- `nova.tests.fixtures`: imports `libvirt as fakelibvirt` (src/nova/tests/functional/libvirt/test_evacuate.py:L30)
- `nova.tests.functional`: imports `fixtures as func_fixtures` (src/nova/tests/functional/libvirt/test_evacuate.py:L31)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/libvirt/test_evacuate.py:L32)
- `nova.tests.unit`: imports `fake_network` (src/nova/tests/functional/libvirt/test_evacuate.py:L33)
- `nova.virt.libvirt`: imports `config as libvirt_config` (src/nova/tests/functional/libvirt/test_evacuate.py:L34)

## Side Effects

- **file-io**: source_root_disk = os.path.join(self.source_instance_path(server), (src/nova/tests/functional/libvirt/test_evacuate.py:L120)
- **file-io**: dest_root_disk = os.path.join(self.dest_instance_path(server), (src/nova/tests/functional/libvirt/test_evacuate.py:L122)
- **file-io**: self.assertTrue(os.path.exists(source_root_disk), (src/nova/tests/functional/libvirt/test_evacuate.py:L125)
- **file-io**: self.assertFalse(os.path.exists(dest_root_disk), (src/nova/tests/functional/libvirt/test_evacuate.py:L128)
- **file-io**: source_root_disk = os.path.join( (src/nova/tests/functional/libvirt/test_evacuate.py:L138)
- **file-io**: self.assertTrue(os.path.exists(source_root_disk), (src/nova/tests/functional/libvirt/test_evacuate.py:L141)
- **file-io**: open(_self.path, 'a').close() (src/nova/tests/functional/libvirt/test_evacuate.py:L160)
- **file-io**: open(_self.path, 'a').close() (src/nova/tests/functional/libvirt/test_evacuate.py:L185)
- **file-io**: _, vg = os.path.split(vg_path) (src/nova/tests/functional/libvirt/test_evacuate.py:L268)
- **file-io**: path, lv = os.path.split(path) (src/nova/tests/functional/libvirt/test_evacuate.py:L272)
- **file-io**: path, vg = os.path.split(path) (src/nova/tests/functional/libvirt/test_evacuate.py:L273)
- **file-io**: orig_path_exists = os.path.exists (src/nova/tests/functional/libvirt/test_evacuate.py:L324)
- **file-io**: 'os.path.exists', fake_path_exists)) (src/nova/tests/functional/libvirt/test_evacuate.py:L345)
- **file-io**: return os.path.join(CONF.instances_path, server['id']) (src/nova/tests/functional/libvirt/test_evacuate.py:L495)
- **file-io**: return os.path.join(CONF.instances_path, 'dest', server['id']) (src/nova/tests/functional/libvirt/test_evacuate.py:L499)
- **file-io**: orig_ensure_tree = fileutils.ensure_tree (src/nova/tests/functional/libvirt/test_evacuate.py:L558)
- **file-io**: 'oslo_utils.fileutils.ensure_tree', (src/nova/tests/functional/libvirt/test_evacuate.py:L560)
- **file-io**: self.assertTrue(os.path.exists(source_instance_path), (src/nova/tests/functional/libvirt/test_evacuate.py:L570)
- **file-io**: self.assertFalse(os.path.exists(dest_instance_path), (src/nova/tests/functional/libvirt/test_evacuate.py:L573)
- **file-io**: self.assertTrue(os.path.exists(source_instance_path), (src/nova/tests/functional/libvirt/test_evacuate.py:L592)
- **file-io**: self.assertFalse(os.path.exists(dest_instance_path), (src/nova/tests/functional/libvirt/test_evacuate.py:L595)
- **file-io**: self.assertTrue(os.path.exists(shared_instance_path), (src/nova/tests/functional/libvirt/test_evacuate.py:L624)
- **file-io**: self.assertTrue(os.path.exists(shared_instance_path), (src/nova/tests/functional/libvirt/test_evacuate.py:L631)
- **global-mutation**: CONF = conf.CONF (src/nova/tests/functional/libvirt/test_evacuate.py:L36)
- **global-mutation**: FLAVOR_FIXTURES = [ (src/nova/tests/functional/libvirt/test_evacuate.py:L39)
- **global-mutation**: IMAGE_ID = nova_fixtures.GlanceFixture.auto_disk_config_enabled_image['id'] (src/nova/tests/functional/libvirt/test_evacuate.py:L52)
- **global-mutation**: SERVER_FIXTURES = [ (src/nova/tests/functional/libvirt/test_evacuate.py:L61)
- **global-mutation**: SERVER_DISKS = { (src/nova/tests/functional/libvirt/test_evacuate.py:L100)

