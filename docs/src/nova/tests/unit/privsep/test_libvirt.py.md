# src/nova/tests/unit/privsep/test_libvirt.py

## Overview

This file implements the `test_libvirt` module, defining 2 classs, 4 constants, 1 function, 18 methods, 8 imports, 25 side effects, 17 security surface entries.

Lines: total 217, code 166, comment 18, blank 33

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LibvirtTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/privsep/test_libvirt.py:L29–L159` |
| `LibvirtTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/privsep/test_libvirt.py:L32–L34` |
| `LibvirtTestCase.test_dmcrypt_create_volume` | method | (self, mock_execute) | public | not declared | 1/7 | `src/nova/tests/unit/privsep/test_libvirt.py:L37–L43` |
| `LibvirtTestCase.test_dmcrypt_delete_volume` | method | (self, mock_execute) | public | not declared | 1/3 | `src/nova/tests/unit/privsep/test_libvirt.py:L46–L48` |
| `LibvirtTestCase.test_ploop_init` | method | (self, mock_chmod, mock_stat, mock_execute) | public | not declared | 1/7 | `src/nova/tests/unit/privsep/test_libvirt.py:L53–L59` |
| `LibvirtTestCase.test_ploop_resize` | method | (self, mock_execute) | public | not declared | 1/8 | `src/nova/tests/unit/privsep/test_libvirt.py:L62–L69` |
| `LibvirtTestCase.test_ploop_restore_descriptor` | method | (self, mock_execute) | public | not declared | 1/6 | `src/nova/tests/unit/privsep/test_libvirt.py:L72–L77` |
| `LibvirtTestCase.test_plug_infiniband_vif` | method | (self, mock_execute) | public | not declared | 1/6 | `src/nova/tests/unit/privsep/test_libvirt.py:L80–L85` |
| `LibvirtTestCase.test_unplug_infiniband_vif` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_libvirt.py:L88–L91` |
| `LibvirtTestCase.test_plug_midonet_vif` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_libvirt.py:L94–L97` |
| `LibvirtTestCase.test_unplug_midonet_vif` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_libvirt.py:L100–L103` |
| `LibvirtTestCase.test_plug_plumgrid_vif` | method | (self, mock_execute) | public | not declared | 1/10 | `src/nova/tests/unit/privsep/test_libvirt.py:L106–L115` |
| `LibvirtTestCase.test_unplug_plumgrid_vif` | method | (self, mock_execute) | public | not declared | 1/7 | `src/nova/tests/unit/privsep/test_libvirt.py:L118–L124` |
| `LibvirtTestCase.test_readpty` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/privsep/test_libvirt.py:L126–L149` |
| `LibvirtTestCase.test_readpty.fake_import` | function | (module, *args) | public | `mock_fcntl` (src/nova/tests/unit/privsep/test_libvirt.py:L133); `orig_import(module, *args)` (src/nova/tests/unit/privsep/test_libvirt.py:L134) | — | `src/nova/tests/unit/privsep/test_libvirt.py:L131–L134` |
| `LibvirtTestCase.test_umount` | method | (self, mock_execute) | public | not declared | 1/3 | `src/nova/tests/unit/privsep/test_libvirt.py:L152–L154` |
| `LibvirtTestCase.test_unprivileged_umount` | method | (self, mock_execute) | public | not declared | 1/3 | `src/nova/tests/unit/privsep/test_libvirt.py:L157–L159` |
| `PrivsepLibvirtMountTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/privsep/test_libvirt.py:L163–L217` |
| `PrivsepLibvirtMountTestCase.QB_BINARY` | constant | — | public | not declared | — | `src/nova/tests/unit/privsep/test_libvirt.py:L165–L165` |
| `PrivsepLibvirtMountTestCase.QB_FIXED_OPT_1` | constant | — | public | not declared | — | `src/nova/tests/unit/privsep/test_libvirt.py:L166–L166` |
| `PrivsepLibvirtMountTestCase.FAKE_VOLUME` | constant | — | public | not declared | — | `src/nova/tests/unit/privsep/test_libvirt.py:L167–L167` |
| `PrivsepLibvirtMountTestCase.FAKE_MOUNT_BASE` | constant | — | public | not declared | — | `src/nova/tests/unit/privsep/test_libvirt.py:L168–L168` |
| `PrivsepLibvirtMountTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/privsep/test_libvirt.py:L170–L172` |
| `PrivsepLibvirtMountTestCase.test_systemd_run_qb_mount` | method | (self, cfg_file, mock_execute) | public | not declared | 2/19 | `src/nova/tests/unit/privsep/test_libvirt.py:L176–L196` |
| `PrivsepLibvirtMountTestCase.test_unprivileged_qb_mount` | method | (self, cfg_file, mock_execute) | public | not declared | 2/16 | `src/nova/tests/unit/privsep/test_libvirt.py:L200–L217` |

## Dependencies

- `import binascii` (src/nova/tests/unit/privsep/test_libvirt.py:L17)
- `unittest`: imports `mock` (src/nova/tests/unit/privsep/test_libvirt.py:L18)
- `import ddt` (src/nova/tests/unit/privsep/test_libvirt.py:L20)
- `import os` (src/nova/tests/unit/privsep/test_libvirt.py:L21)
- `import nova.privsep.libvirt` (src/nova/tests/unit/privsep/test_libvirt.py:L23)
- `nova`: imports `test` (src/nova/tests/unit/privsep/test_libvirt.py:L24)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/privsep/test_libvirt.py:L25)
- `oslo_utils`: imports `units` (src/nova/tests/unit/privsep/test_libvirt.py:L26)

## Side Effects

- **process-spawn**: import nova.privsep.libvirt (src/nova/tests/unit/privsep/test_libvirt.py:L23)
- **process-spawn**: nova.privsep.libvirt.dmcrypt_create_volume( (src/nova/tests/unit/privsep/test_libvirt.py:L38)
- **process-spawn**: nova.privsep.libvirt.dmcrypt_delete_volume('/fake/path') (src/nova/tests/unit/privsep/test_libvirt.py:L47)
- **process-spawn**: nova.privsep.libvirt.ploop_init(1024, 'raw', 'ext4', '/fake/path') (src/nova/tests/unit/privsep/test_libvirt.py:L54)
- **process-spawn**: nova.privsep.libvirt.ploop_resize( (src/nova/tests/unit/privsep/test_libvirt.py:L63)
- **process-spawn**: nova.privsep.libvirt.ploop_restore_descriptor( (src/nova/tests/unit/privsep/test_libvirt.py:L73)
- **process-spawn**: nova.privsep.libvirt.plug_infiniband_vif('fakemac', 'devid', 'fabric', (src/nova/tests/unit/privsep/test_libvirt.py:L81)
- **process-spawn**: nova.privsep.libvirt.unplug_infiniband_vif('fabric', 'fakemac') (src/nova/tests/unit/privsep/test_libvirt.py:L89)
- **process-spawn**: nova.privsep.libvirt.plug_midonet_vif('portid', 'dev') (src/nova/tests/unit/privsep/test_libvirt.py:L95)
- **process-spawn**: nova.privsep.libvirt.unplug_midonet_vif('portid') (src/nova/tests/unit/privsep/test_libvirt.py:L101)
- **process-spawn**: nova.privsep.libvirt.plug_plumgrid_vif( (src/nova/tests/unit/privsep/test_libvirt.py:L107)
- **process-spawn**: nova.privsep.libvirt.unplug_plumgrid_vif('dev') (src/nova/tests/unit/privsep/test_libvirt.py:L119)
- **process-spawn**: nova.privsep.libvirt.readpty('/fake/path') (src/nova/tests/unit/privsep/test_libvirt.py:L140)
- **syscall**: def test_umount(self, mock_execute): (src/nova/tests/unit/privsep/test_libvirt.py:L152)
- **process-spawn**: nova.privsep.libvirt.umount('/fake/path') (src/nova/tests/unit/privsep/test_libvirt.py:L153)
- **syscall**: def test_unprivileged_umount(self, mock_execute): (src/nova/tests/unit/privsep/test_libvirt.py:L157)
- **process-spawn**: nova.privsep.libvirt.unprivileged_umount('/fake/path') (src/nova/tests/unit/privsep/test_libvirt.py:L158)
- **syscall**: def test_systemd_run_qb_mount(self, cfg_file, mock_execute): (src/nova/tests/unit/privsep/test_libvirt.py:L176)
- **process-spawn**: nova.privsep.libvirt.systemd_run_qb_mount( (src/nova/tests/unit/privsep/test_libvirt.py:L180)
- **syscall**: def test_unprivileged_qb_mount(self, cfg_file, mock_execute): (src/nova/tests/unit/privsep/test_libvirt.py:L200)
- **process-spawn**: nova.privsep.libvirt.unprivileged_qb_mount(self.FAKE_VOLUME, (src/nova/tests/unit/privsep/test_libvirt.py:L202)
- **global-mutation**: QB_BINARY = "mount.quobyte" (src/nova/tests/unit/privsep/test_libvirt.py:L165)
- **global-mutation**: QB_FIXED_OPT_1 = "--disable-xattrs" (src/nova/tests/unit/privsep/test_libvirt.py:L166)
- **global-mutation**: FAKE_VOLUME = "fake_volume" (src/nova/tests/unit/privsep/test_libvirt.py:L167)
- **global-mutation**: FAKE_MOUNT_BASE = "/fake/mount/base" (src/nova/tests/unit/privsep/test_libvirt.py:L168)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.libvirt (src/nova/tests/unit/privsep/test_libvirt.py:L23)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.dmcrypt_create_volume( (src/nova/tests/unit/privsep/test_libvirt.py:L38)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.dmcrypt_delete_volume('/fake/path') (src/nova/tests/unit/privsep/test_libvirt.py:L47)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.ploop_init(1024, 'raw', 'ext4', '/fake/path') (src/nova/tests/unit/privsep/test_libvirt.py:L54)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.ploop_resize( (src/nova/tests/unit/privsep/test_libvirt.py:L63)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.ploop_restore_descriptor( (src/nova/tests/unit/privsep/test_libvirt.py:L73)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.plug_infiniband_vif('fakemac', 'devid', 'fabric', (src/nova/tests/unit/privsep/test_libvirt.py:L81)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.unplug_infiniband_vif('fabric', 'fakemac') (src/nova/tests/unit/privsep/test_libvirt.py:L89)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.plug_midonet_vif('portid', 'dev') (src/nova/tests/unit/privsep/test_libvirt.py:L95)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.unplug_midonet_vif('portid') (src/nova/tests/unit/privsep/test_libvirt.py:L101)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.plug_plumgrid_vif( (src/nova/tests/unit/privsep/test_libvirt.py:L107)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.unplug_plumgrid_vif('dev') (src/nova/tests/unit/privsep/test_libvirt.py:L119)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.readpty('/fake/path') (src/nova/tests/unit/privsep/test_libvirt.py:L140)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.umount('/fake/path') (src/nova/tests/unit/privsep/test_libvirt.py:L153)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.unprivileged_umount('/fake/path') (src/nova/tests/unit/privsep/test_libvirt.py:L158)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.systemd_run_qb_mount( (src/nova/tests/unit/privsep/test_libvirt.py:L180)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.unprivileged_qb_mount(self.FAKE_VOLUME, (src/nova/tests/unit/privsep/test_libvirt.py:L202)

## Notes

- KB `sideEffects` entries at L152, L157, L176, L200 have targets that appear to be code fragments rather than resource paths; documented as recorded.

