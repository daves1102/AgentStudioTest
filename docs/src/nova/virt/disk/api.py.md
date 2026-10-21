# src/nova/virt/disk/api.py

## Overview

This file implements the `api` module, defining 1 class, 3 constants, 1 field, 22 functions, 7 methods, 1 property, 1 staticmethod, 16 imports, 36 side effects, 13 security surface entries.

Lines: total 684, code 477, comment 67, blank 140

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/disk/api.py:L46–L46` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/disk/api.py:L48–L48` |
| `SUPPORTED_FS_TO_EXTEND` | constant | — | exported | not declared | — | `src/nova/virt/disk/api.py:L52–L52` |
| `mkfs` | function | (os_type, fs_label, target, run_as_root=True, specified_fs=None) | exported | not declared | 1/4 | `src/nova/virt/disk/api.py:L63–L66` |
| `resize2fs` | function | (image, check_exit_code=False, run_as_root=False) | exported | not declared | 4/14 | `src/nova/virt/disk/api.py:L69–L86` |
| `get_disk_info` | function | (path) | exported | `images.qemu_img_info(path)` (src/nova/virt/disk/api.py:L95) | 1/2 | `src/nova/virt/disk/api.py:L89–L95` |
| `get_disk_size` | function | (path) | exported | `images.qemu_img_info(path).virtual_size` (src/nova/virt/disk/api.py:L105) | 1/2 | `src/nova/virt/disk/api.py:L98–L105` |
| `extend` | function | (image, size) | exported | `` (src/nova/virt/disk/api.py:L117); `` (src/nova/virt/disk/api.py:L120); `` (src/nova/virt/disk/api.py:L124); `` (src/nova/virt/disk/api.py:L144); `` (src/nova/virt/disk/api.py:L148) | 11/32 | `src/nova/virt/disk/api.py:L108–L170` |
| `extend.safe_resize2fs` | function | (dev, run_as_root=False, finally_call=lambda: None) | public | not declared | — | `src/nova/virt/disk/api.py:L150–L157` |
| `can_resize_image` | function | (image, size) | exported | `False` (src/nova/virt/disk/api.py:L186); `True` (src/nova/virt/disk/api.py:L187) | 2/9 | `src/nova/virt/disk/api.py:L173–L187` |
| `is_image_extendable` | function | (image) | exported | `True` (src/nova/virt/disk/api.py:L204); `False` (src/nova/virt/disk/api.py:L218); `False` (src/nova/virt/disk/api.py:L228); `True` (src/nova/virt/disk/api.py:L230) | 8/29 | `src/nova/virt/disk/api.py:L190–L230` |
| `_DiskImage` | class | — | unexported | not declared | — | `src/nova/virt/disk/api.py:L233–L331` |
| `_DiskImage.tmp_prefix` | field | — | public | not declared | — | `src/nova/virt/disk/api.py:L236–L236` |
| `_DiskImage.__init__` | method | (self, image, partition=None, mount_dir=None) | public | not declared | 3/13 | `src/nova/virt/disk/api.py:L238–L261` |
| `_DiskImage._device_for_path` | method | (path) | private | `device` (src/nova/virt/disk/api.py:L273) | 3/10 | `src/nova/virt/disk/api.py:L264–L273` |
| `_DiskImage._reset` | method | (self, device) | private | not declared | 2/7 | `src/nova/virt/disk/api.py:L275–L283` |
| `_DiskImage.errors` | method | (self) | public | `'\n--\n'.join([''] + self._errors)` (src/nova/virt/disk/api.py:L288) | 1/2 | `src/nova/virt/disk/api.py:L286–L288` |
| `_DiskImage.mount` | method | (self) | public | `self._mounter.device` (src/nova/virt/disk/api.py:L311); `None` (src/nova/virt/disk/api.py:L315) | 4/16 | `src/nova/virt/disk/api.py:L290–L315` |
| `_DiskImage.umount` | method | (self) | public | not declared | 2/4 | `src/nova/virt/disk/api.py:L317–L321` |
| `_DiskImage.teardown` | method | (self) | public | not declared | 4/8 | `src/nova/virt/disk/api.py:L323–L331` |
| `inject_data` | function | (image, key=None, net=None, metadata=None, admin_password=None, files=None, partition=None, mandatory=()) | exported | `False` (src/nova/virt/disk/api.py:L377); `inject_data_into_fs(fs, key, net, metadata, admin_password, files, mandatory)` (src/nova/virt/disk/api.py:L380) | 5/23 | `src/nova/virt/disk/api.py:L336–L383` |
| `setup_container` | function | (image, container_dir) | exported | `dev` (src/nova/virt/disk/api.py:L406) | 2/10 | `src/nova/virt/disk/api.py:L386–L406` |
| `teardown_container` | function | (container_dir, container_root_device=None) | exported | not declared | 5/16 | `src/nova/virt/disk/api.py:L409–L431` |
| `clean_lxc_namespace` | function | (container_dir) | exported | not declared | 2/6 | `src/nova/virt/disk/api.py:L434–L444` |
| `inject_data_into_fs` | function | (fs, key, net, metadata, admin_password, files, mandatory=()) | exported | `status` (src/nova/virt/disk/api.py:L480) | 5/24 | `src/nova/virt/disk/api.py:L447–L480` |
| `_inject_files_into_fs` | function | (files, fs) | unexported | not declared | 5/9 | `src/nova/virt/disk/api.py:L483–L492` |
| `_inject_file_into_fs` | function | (fs, path, contents, append=False) | unexported | not declared | 2/7 | `src/nova/virt/disk/api.py:L495–L501` |
| `_inject_metadata_into_fs` | function | (metadata, fs) | unexported | not declared | 1/4 | `src/nova/virt/disk/api.py:L504–L507` |
| `_setup_selinux_for_keys` | function | (fs, sshdir) | unexported | `` (src/nova/virt/disk/api.py:L514) | 5/16 | `src/nova/virt/disk/api.py:L510–L535` |
| `_inject_key_into_fs` | function | (key, fs) | unexported | not declared | 1/17 | `src/nova/virt/disk/api.py:L538–L564` |
| `_inject_net_into_fs` | function | (net, fs) | unexported | not declared | 1/8 | `src/nova/virt/disk/api.py:L567–L580` |
| `_inject_admin_password_into_fs` | function | (admin_passwd, fs) | unexported | not declared | 1/11 | `src/nova/virt/disk/api.py:L583–L611` |
| `_generate_salt` | function | — | unexported | `''.join([random.choice(salt_set) for c in salt])` (src/nova/virt/disk/api.py:L619) | 2/6 | `src/nova/virt/disk/api.py:L614–L619` |
| `_set_passwd` | function | (username, admin_passwd, passwd_data, shadow_data) | unexported | `"\n".join(new_shadow)` (src/nova/virt/disk/api.py:L684) | 7/32 | `src/nova/virt/disk/api.py:L622–L684` |
| `_DiskImage._device_for_path` | staticmethod | — | private | not declared | — | `src/nova/virt/disk/api.py:L263–L273` |
| `_DiskImage.errors` | property | — | public | not declared | — | `src/nova/virt/disk/api.py:L285–L288` |

## Dependencies

- `import os` (src/nova/virt/disk/api.py:L26)
- `import random` (src/nova/virt/disk/api.py:L27)
- `import tempfile` (src/nova/virt/disk/api.py:L28)
- `oslo_concurrency`: imports `processutils` (src/nova/virt/disk/api.py:L30)
- `oslo_log`: imports `log as logging` (src/nova/virt/disk/api.py:L31)
- `oslo_serialization`: imports `jsonutils` (src/nova/virt/disk/api.py:L32)
- `oslo_utils`: imports `secretutils` (src/nova/virt/disk/api.py:L33)
- `import nova.conf` (src/nova/virt/disk/api.py:L35)
- `nova`: imports `exception` (src/nova/virt/disk/api.py:L36)
- `nova.i18n`: imports `_` (src/nova/virt/disk/api.py:L37)
- `import nova.privsep.fs` (src/nova/virt/disk/api.py:L38)
- `import nova.privsep.libvirt` (src/nova/virt/disk/api.py:L39)
- `nova.virt.disk.mount`: imports `api as mount` (src/nova/virt/disk/api.py:L40)
- `nova.virt.disk.vfs`: imports `api as vfs` (src/nova/virt/disk/api.py:L41)
- `nova.virt.image`: imports `model as imgmodel` (src/nova/virt/disk/api.py:L42)
- `nova.virt`: imports `images` (src/nova/virt/disk/api.py:L43)

## Side Effects

- **process-spawn**: import nova.privsep.fs (src/nova/virt/disk/api.py:L38)
- **process-spawn**: import nova.privsep.libvirt (src/nova/virt/disk/api.py:L39)
- **process-spawn**: SUPPORTED_FS_TO_EXTEND = nova.privsep.fs.SUPPORTED_FS_TO_EXTEND (src/nova/virt/disk/api.py:L52)
- **process-spawn**: nova.privsep.fs.load_mkfs_command(os_type, mkfs_command) (src/nova/virt/disk/api.py:L60)
- **process-spawn**: nova.privsep.fs.configurable_mkfs( (src/nova/virt/disk/api.py:L64)
- **process-spawn**: nova.privsep.fs.e2fsck(image) (src/nova/virt/disk/api.py:L74)
- **process-spawn**: nova.privsep.fs.unprivileged_e2fsck(image) (src/nova/virt/disk/api.py:L76)
- **process-spawn**: nova.privsep.fs.resize2fs(image, check_exit_code) (src/nova/virt/disk/api.py:L84)
- **process-spawn**: nova.privsep.fs.unprivileged_resize2fs(image, check_exit_code) (src/nova/virt/disk/api.py:L86)
- **process-spawn**: nova.privsep.libvirt.ploop_resize(image.path, size) (src/nova/virt/disk/api.py:L123)
- **file-io**: path = os.path.realpath(path) (src/nova/virt/disk/api.py:L266)
- **file-io**: with open("/proc/mounts", 'r') as ifp: (src/nova/virt/disk/api.py:L267)
- **file-io**: mount_name = os.path.basename(self.mount_dir or '') (src/nova/virt/disk/api.py:L282)
- **syscall**: def mount(self): (src/nova/virt/disk/api.py:L290)
- **file-io**: self.mount_dir = tempfile.mkdtemp(prefix=self.tmp_prefix) (src/nova/virt/disk/api.py:L302)
- **syscall**: if mounter.do_mount(): (src/nova/virt/disk/api.py:L309)
- **syscall**: def umount(self): (src/nova/virt/disk/api.py:L317)
- **syscall**: self._mounter.do_umount() (src/nova/virt/disk/api.py:L320)
- **syscall**: dev = img.mount() (src/nova/virt/disk/api.py:L398)
- **process-spawn**: nova.privsep.fs.loopremove(container_root_device) (src/nova/virt/disk/api.py:L423)
- **process-spawn**: nova.privsep.fs.nbd_disconnect(container_root_device) (src/nova/virt/disk/api.py:L426)
- **syscall**: img.umount() (src/nova/virt/disk/api.py:L442)
- **file-io**: parent_dir = os.path.dirname(path) (src/nova/virt/disk/api.py:L486)
- **file-io**: if not fs.has_file(os.path.join("etc", "selinux")): (src/nova/virt/disk/api.py:L513)
- **file-io**: rclocal = os.path.join('etc', 'rc.local') (src/nova/virt/disk/api.py:L516)
- **file-io**: rc_d = os.path.join('etc', 'rc.d') (src/nova/virt/disk/api.py:L517)
- **file-io**: rclocal = os.path.join(rc_d, 'rc.local') (src/nova/virt/disk/api.py:L520)
- **file-io**: sshdir = os.path.join('root', '.ssh') (src/nova/virt/disk/api.py:L546)
- **file-io**: keyfile = os.path.join(sshdir, 'authorized_keys') (src/nova/virt/disk/api.py:L551)
- **file-io**: netdir = os.path.join('etc', 'network') (src/nova/virt/disk/api.py:L574)
- **file-io**: netfile = os.path.join('etc', 'network', 'interfaces') (src/nova/virt/disk/api.py:L579)
- **file-io**: passwd_path = os.path.join('etc', 'passwd') (src/nova/virt/disk/api.py:L602)
- **file-io**: shadow_path = os.path.join('etc', 'shadow') (src/nova/virt/disk/api.py:L603)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/disk/api.py:L46)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/disk/api.py:L48)
- **global-mutation**: SUPPORTED_FS_TO_EXTEND = nova.privsep.fs.SUPPORTED_FS_TO_EXTEND (src/nova/virt/disk/api.py:L52)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.fs (src/nova/virt/disk/api.py:L38)
- **privilege** (`privsep-entrypoint`): import nova.privsep.libvirt (src/nova/virt/disk/api.py:L39)
- **privilege** (`privsep-entrypoint`): SUPPORTED_FS_TO_EXTEND = nova.privsep.fs.SUPPORTED_FS_TO_EXTEND (src/nova/virt/disk/api.py:L52)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.load_mkfs_command(os_type, mkfs_command) (src/nova/virt/disk/api.py:L60)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.configurable_mkfs( (src/nova/virt/disk/api.py:L64)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.e2fsck(image) (src/nova/virt/disk/api.py:L74)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.unprivileged_e2fsck(image) (src/nova/virt/disk/api.py:L76)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.resize2fs(image, check_exit_code) (src/nova/virt/disk/api.py:L84)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.unprivileged_resize2fs(image, check_exit_code) (src/nova/virt/disk/api.py:L86)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.ploop_resize(image.path, size) (src/nova/virt/disk/api.py:L123)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.loopremove(container_root_device) (src/nova/virt/disk/api.py:L423)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.nbd_disconnect(container_root_device) (src/nova/virt/disk/api.py:L426)
- **sink** (`db-write`): restorecon.insert(0, '#!/bin/sh') (src/nova/virt/disk/api.py:L532)

## Notes

- KB `sideEffects` entries at L290, L317 have targets that appear to be code fragments rather than resource paths; documented as recorded.

