# src/nova/virt/configdrive.py

## Overview

This file implements the `configdrive` module, defining 1 class, 2 constants, 2 functions, 11 methods, 11 imports, 15 side effects, 8 security surface entries.

Lines: total 181, code 116, comment 30, blank 35

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/configdrive.py:L32–L32` |
| `CONFIGDRIVESIZE_BYTES` | constant | — | exported | not declared | — | `src/nova/virt/configdrive.py:L35–L35` |
| `ConfigDriveBuilder` | class | — | exported | not declared | — | `src/nova/virt/configdrive.py:L38–L153` |
| `ConfigDriveBuilder.__init__` | method | (self, instance_md=None) | public | not declared | 2/5 | `src/nova/virt/configdrive.py:L41–L46` |
| `ConfigDriveBuilder.__enter__` | method | (self) | public | `self` (src/nova/virt/configdrive.py:L49) | 1/2 | `src/nova/virt/configdrive.py:L48–L49` |
| `ConfigDriveBuilder.__exit__` | method | (self, exctype, excval, exctb) | public | `False` (src/nova/virt/configdrive.py:L56) | 2/4 | `src/nova/virt/configdrive.py:L51–L57` |
| `ConfigDriveBuilder._add_file` | method | (self, basedir, path, data) | private | not declared | 2/8 | `src/nova/virt/configdrive.py:L59–L68` |
| `ConfigDriveBuilder.add_instance_metadata` | method | (self, instance_md) | public | not declared | 2/3 | `src/nova/virt/configdrive.py:L70–L72` |
| `ConfigDriveBuilder._write_md_files` | method | (self, basedir) | private | not declared | 2/3 | `src/nova/virt/configdrive.py:L74–L76` |
| `ConfigDriveBuilder._make_iso9660` | method | (self, path, tmpdir) | private | not declared | 1/20 | `src/nova/virt/configdrive.py:L78–L98` |
| `ConfigDriveBuilder._make_vfat` | method | (self, path, tmpdir) | private | not declared | 5/20 | `src/nova/virt/configdrive.py:L100–L128` |
| `ConfigDriveBuilder.make_drive` | method | (self, path) | public | not declared | 3/10 | `src/nova/virt/configdrive.py:L130–L146` |
| `ConfigDriveBuilder.cleanup` | method | (self) | public | not declared | 2/3 | `src/nova/virt/configdrive.py:L148–L150` |
| `ConfigDriveBuilder.__repr__` | method | (self) | public | `"<ConfigDriveBuilder: " + str(self.mdfiles) + ">"` (src/nova/virt/configdrive.py:L153) | 1/2 | `src/nova/virt/configdrive.py:L152–L153` |
| `required_by` | function | (instance) | exported | `(instance.config_drive or (CONF.force_config_drive and not instance.launched_at) or image_prop == fields.ConfigDrivePolicy.MANDATORY )` (src/nova/virt/configdrive.py:L167) | 4/8 | `src/nova/virt/configdrive.py:L156–L170` |
| `update_instance` | function | (instance) | exported | not declared | 3/3 | `src/nova/virt/configdrive.py:L173–L181` |

## Dependencies

- `import os` (src/nova/virt/configdrive.py:L18)
- `import shutil` (src/nova/virt/configdrive.py:L19)
- `oslo_concurrency`: imports `processutils` (src/nova/virt/configdrive.py:L21)
- `oslo_utils`: imports `fileutils` (src/nova/virt/configdrive.py:L22)
- `oslo_utils`: imports `units` (src/nova/virt/configdrive.py:L23)
- `import nova.conf` (src/nova/virt/configdrive.py:L25)
- `nova`: imports `exception` (src/nova/virt/configdrive.py:L26)
- `nova.objects`: imports `fields` (src/nova/virt/configdrive.py:L27)
- `import nova.privsep.fs` (src/nova/virt/configdrive.py:L28)
- `nova`: imports `utils` (src/nova/virt/configdrive.py:L29)
- `nova`: imports `version` (src/nova/virt/configdrive.py:L30)

## Side Effects

- **process-spawn**: import nova.privsep.fs (src/nova/virt/configdrive.py:L28)
- **file-io**: filepath = os.path.join(basedir, path) (src/nova/virt/configdrive.py:L60)
- **file-io**: dirname = os.path.dirname(filepath) (src/nova/virt/configdrive.py:L61)
- **file-io**: fileutils.ensure_tree(dirname) (src/nova/virt/configdrive.py:L62)
- **file-io**: with open(filepath, 'wb') as f: (src/nova/virt/configdrive.py:L63)
- **file-io**: with open(path, 'wb') as f: (src/nova/virt/configdrive.py:L103)
- **process-spawn**: nova.privsep.fs.unprivileged_mkfs('vfat', path, label='config-2') (src/nova/virt/configdrive.py:L106)
- **process-spawn**: _, err = nova.privsep.fs.mount( (src/nova/virt/configdrive.py:L111)
- **file-io**: for ent in os.listdir(tmpdir): (src/nova/virt/configdrive.py:L122)
- **file-io**: shutil.copytree(os.path.join(tmpdir, ent), (src/nova/virt/configdrive.py:L123)
- **file-io**: os.path.join(mountdir, ent)) (src/nova/virt/configdrive.py:L124)
- **process-spawn**: nova.privsep.fs.umount(mountdir) (src/nova/virt/configdrive.py:L128)
- **file-io**: fileutils.delete_if_exists(self.imagefile) (src/nova/virt/configdrive.py:L150)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/configdrive.py:L32)
- **global-mutation**: CONFIGDRIVESIZE_BYTES = 64 * units.Mi (src/nova/virt/configdrive.py:L35)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.fs (src/nova/virt/configdrive.py:L28)
- **sink** (`file-write`): with open(filepath, 'wb') as f: (src/nova/virt/configdrive.py:L63)
- **sink** (`file-write`): f.write(data) (src/nova/virt/configdrive.py:L68)
- **sink** (`file-write`): with open(path, 'wb') as f: (src/nova/virt/configdrive.py:L103)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.unprivileged_mkfs('vfat', path, label='config-2') (src/nova/virt/configdrive.py:L106)
- **privilege** (`privsep-entrypoint`): _, err = nova.privsep.fs.mount( (src/nova/virt/configdrive.py:L111)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.umount(mountdir) (src/nova/virt/configdrive.py:L128)
- **sink** (`db-write`): """Update the instance config_drive setting if necessary (src/nova/virt/configdrive.py:L174)

