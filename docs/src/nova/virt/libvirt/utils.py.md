# src/nova/virt/libvirt/utils.py

## Overview

This file implements the `utils` module, defining 1 class, 6 constants, 2 fields, 30 functions, 30 imports, 43 side effects, 14 security surface entries.

Lines: total 799, code 561, comment 108, blank 130

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/utils.py:L54–L54` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/utils.py:L55–L55` |
| `RESIZE_SNAPSHOT_NAME` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/utils.py:L57–L57` |
| `CPU_TRAITS_MAPPING` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/utils.py:L61–L110` |
| `make_reverse_cpu_traits_mapping` | function | — | exported | `traits_cpu_mapping` (src/nova/virt/libvirt/utils.py:L121) | 4/9 | `src/nova/virt/libvirt/utils.py:L113–L121` |
| `TRAITS_CPU_MAPPING` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/utils.py:L125–L125` |
| `VTPM_DIR` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/utils.py:L128–L128` |
| `EncryptionOptions` | class | — | exported | not declared | — | `src/nova/virt/libvirt/utils.py:L131–L133` |
| `EncryptionOptions.secret` | field | — | public | not declared | — | `src/nova/virt/libvirt/utils.py:L132–L132` |
| `EncryptionOptions.format` | field | — | public | not declared | — | `src/nova/virt/libvirt/utils.py:L133–L133` |
| `create_image` | function | (path, disk_format, disk_size, backing_file=None, encryption=None, safe=False) | exported | not declared | 13/72 | `src/nova/virt/libvirt/utils.py:L136–L266` |
| `create_ploop_image` | function | (disk_format, path, size, fs_type) | exported | not declared | 3/9 | `src/nova/virt/libvirt/utils.py:L269–L289` |
| `get_disk_size` | function | (path, format=None) | exported | `int(size)` (src/nova/virt/libvirt/utils.py:L301) | 1/3 | `src/nova/virt/libvirt/utils.py:L292–L301` |
| `get_disk_backing_file` | function | (path, basename=True, format=None) | exported | `backing_file` (src/nova/virt/libvirt/utils.py:L316) | 3/7 | `src/nova/virt/libvirt/utils.py:L304–L316` |
| `copy_image` | function | (src, dest, host=None, receive=False, on_execute=None, on_completion=None, compression=True) | exported | not declared | 3/20 | `src/nova/virt/libvirt/utils.py:L319–L356` |
| `chown_for_id_maps` | function | (path, id_maps) | exported | not declared | 5/8 | `src/nova/virt/libvirt/utils.py:L359–L372` |
| `extract_snapshot` | function | (disk_path, source_fmt, out_path, dest_fmt) | exported | not declared | 4/10 | `src/nova/virt/libvirt/utils.py:L375–L392` |
| `load_file` | function | (path) | exported | `fp.read()` (src/nova/virt/libvirt/utils.py:L402) | 1/3 | `src/nova/virt/libvirt/utils.py:L396–L402` |
| `file_open` | function | (*args, **kwargs) | exported | `open(*args, **kwargs)` (src/nova/virt/libvirt/utils.py:L416) | 1/2 | `src/nova/virt/libvirt/utils.py:L407–L416` |
| `find_disk` | function | (guest) | exported | `disk_path, disk_format` (src/nova/virt/libvirt/utils.py:L453) | 15/28 | `src/nova/virt/libvirt/utils.py:L419–L453` |
| `get_disk_type_from_path` | function | (path) | exported | `'lvm'` (src/nova/virt/libvirt/utils.py:L459); `'rbd'` (src/nova/virt/libvirt/utils.py:L461); `'ploop'` (src/nova/virt/libvirt/utils.py:L464); `None` (src/nova/virt/libvirt/utils.py:L467) | 5/9 | `src/nova/virt/libvirt/utils.py:L456–L467` |
| `get_fs_info` | function | (path) | exported | `{'total': total, 'free': free, 'used': used}` (src/nova/virt/libvirt/utils.py:L484) | 1/6 | `src/nova/virt/libvirt/utils.py:L470–L484` |
| `fetch_image` | function | (context, target, image_id, trusted_certs=None) | exported | not declared | 1/7 | `src/nova/virt/libvirt/utils.py:L487–L500` |
| `fetch_raw_image` | function | (context, target, image_id, trusted_certs=None) | exported | not declared | 1/7 | `src/nova/virt/libvirt/utils.py:L503–L519` |
| `get_instance_path` | function | (instance, relative=False) | exported | `instance.uuid` (src/nova/virt/libvirt/utils.py:L535); `os.path.join(CONF.instances_path, instance.uuid)` (src/nova/virt/libvirt/utils.py:L536) | 2/6 | `src/nova/virt/libvirt/utils.py:L522–L536` |
| `get_instance_path_at_destination` | function | (instance, migrate_data=None) | exported | `instance_dir` (src/nova/virt/libvirt/utils.py:L566) | 3/13 | `src/nova/virt/libvirt/utils.py:L539–L566` |
| `get_arch` | function | (image_meta) | exported | `image_arch` (src/nova/virt/libvirt/utils.py:L584); `obj_fields.Architecture.from_host()` (src/nova/virt/libvirt/utils.py:L586) | 3/6 | `src/nova/virt/libvirt/utils.py:L569–L586` |
| `is_mounted` | function | (mount_path, source=None) | exported | `False` (src/nova/virt/libvirt/utils.py:L592); `True` (src/nova/virt/libvirt/utils.py:L595); `any(mnt[0] == source and mnt[1] == mount_path for mnt in mounts)` (src/nova/virt/libvirt/utils.py:L599) | 6/8 | `src/nova/virt/libvirt/utils.py:L589–L599` |
| `is_valid_hostname` | function | (hostname) | exported | `bool(re.match(r"^[\w\-\.:]+$", hostname))` (src/nova/virt/libvirt/utils.py:L603) | 1/2 | `src/nova/virt/libvirt/utils.py:L602–L603` |
| `version_to_string` | function | (version) | exported | `'.'.join([str(x) for x in version])` (src/nova/virt/libvirt/utils.py:L608) | 2/2 | `src/nova/virt/libvirt/utils.py:L606–L608` |
| `cpu_features_to_traits` | function | (features) | exported | `traits` (src/nova/virt/libvirt/utils.py:L625) | 4/7 | `src/nova/virt/libvirt/utils.py:L611–L625` |
| `get_cpu_model_from_arch` | function | (arch) | exported | `mode` (src/nova/virt/libvirt/utils.py:L641) | 4/9 | `src/nova/virt/libvirt/utils.py:L628–L641` |
| `get_machine_type` | function | (image_meta) | exported | `image_meta.properties.hw_machine_type` (src/nova/virt/libvirt/utils.py:L651); `get_default_machine_type(get_arch(image_meta))` (src/nova/virt/libvirt/utils.py:L654) | 2/4 | `src/nova/virt/libvirt/utils.py:L644–L654` |
| `get_default_machine_type` | function | (arch) | exported | `machine_type` (src/nova/virt/libvirt/utils.py:L665); `default_mtypes.get(arch)` (src/nova/virt/libvirt/utils.py:L685) | 5/17 | `src/nova/virt/libvirt/utils.py:L657–L685` |
| `mdev_name2uuid` | function | (mdev_name) | exported | `str(uuid.UUID(mdev_uuid))` (src/nova/virt/libvirt/utils.py:L699) | 1/4 | `src/nova/virt/libvirt/utils.py:L688–L699` |
| `mdev_uuid2name` | function | (mdev_uuid, parent=None) | exported | `name` (src/nova/virt/libvirt/utils.py:L713) | 3/5 | `src/nova/virt/libvirt/utils.py:L702–L713` |
| `get_flags_by_flavor_specs` | function | (flavor) | exported | `set(flags)` (src/nova/virt/libvirt/utils.py:L725) | 3/8 | `src/nova/virt/libvirt/utils.py:L716–L725` |
| `save_and_migrate_vtpm_dir` | function | (instance_uuid, inst_base_resize, inst_base, dest, on_execute=None, on_completion=None) | exported | `` (src/nova/virt/libvirt/utils.py:L754) | 2/19 | `src/nova/virt/libvirt/utils.py:L728–L773` |
| `restore_vtpm_dir` | function | (swtpm_dir) | exported | not declared | 3/12 | `src/nova/virt/libvirt/utils.py:L776–L799` |

## Dependencies

- `collections.abc`: imports `Callable` (src/nova/virt/libvirt/utils.py:L21)
- `import grp` (src/nova/virt/libvirt/utils.py:L22)
- `import os` (src/nova/virt/libvirt/utils.py:L23)
- `import pwd` (src/nova/virt/libvirt/utils.py:L24)
- `import re` (src/nova/virt/libvirt/utils.py:L25)
- `import subprocess` (src/nova/virt/libvirt/utils.py:L26)
- `import tempfile` (src/nova/virt/libvirt/utils.py:L27)
- `import typing as ty` (src/nova/virt/libvirt/utils.py:L28)
- `import uuid` (src/nova/virt/libvirt/utils.py:L29)
- `import os_traits` (src/nova/virt/libvirt/utils.py:L31)
- `oslo_concurrency`: imports `processutils` (src/nova/virt/libvirt/utils.py:L32)
- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/utils.py:L33)
- `oslo_utils`: imports `fileutils` (src/nova/virt/libvirt/utils.py:L34)
- `oslo_utils.imageutils`: imports `format_inspector` (src/nova/virt/libvirt/utils.py:L35)
- `import nova.conf` (src/nova/virt/libvirt/utils.py:L37)
- `nova`: imports `context as nova_context` (src/nova/virt/libvirt/utils.py:L38)
- `nova`: imports `exception` (src/nova/virt/libvirt/utils.py:L39)
- `nova.i18n`: imports `_` (src/nova/virt/libvirt/utils.py:L40)
- `nova`: imports `objects` (src/nova/virt/libvirt/utils.py:L41)
- `nova.objects`: imports `fields as obj_fields` (src/nova/virt/libvirt/utils.py:L42)
- `import nova.privsep.fs` (src/nova/virt/libvirt/utils.py:L43)
- `import nova.privsep.idmapshift` (src/nova/virt/libvirt/utils.py:L44)
- `import nova.privsep.libvirt` (src/nova/virt/libvirt/utils.py:L45)
- `import nova.privsep.path` (src/nova/virt/libvirt/utils.py:L46)
- `nova.scheduler`: imports `utils as scheduler_utils` (src/nova/virt/libvirt/utils.py:L47)
- `nova`: imports `utils` (src/nova/virt/libvirt/utils.py:L48)
- `nova.virt`: imports `images` (src/nova/virt/libvirt/utils.py:L49)
- `nova.virt.libvirt`: imports `config as vconfig` (src/nova/virt/libvirt/utils.py:L50)
- `nova.virt.libvirt`: imports `guest as libvirt_guest` (src/nova/virt/libvirt/utils.py:L51)
- `nova.virt.libvirt.volume`: imports `remotefs` (src/nova/virt/libvirt/utils.py:L52)

## Side Effects

- **process-spawn**: import nova.privsep.fs (src/nova/virt/libvirt/utils.py:L43)
- **process-spawn**: import nova.privsep.idmapshift (src/nova/virt/libvirt/utils.py:L44)
- **process-spawn**: import nova.privsep.libvirt (src/nova/virt/libvirt/utils.py:L45)
- **process-spawn**: import nova.privsep.path (src/nova/virt/libvirt/utils.py:L46)
- **file-io**: with tempfile.NamedTemporaryFile(mode='tr+', encoding='utf-8') as f: (src/nova/virt/libvirt/utils.py:L219)
- **process-spawn**: nova.privsep.fs.FS_FORMAT_EXT4 (src/nova/virt/libvirt/utils.py:L286)
- **file-io**: fileutils.ensure_tree(path) (src/nova/virt/libvirt/utils.py:L287)
- **file-io**: disk_path = os.path.join(path, 'root.hds') (src/nova/virt/libvirt/utils.py:L288)
- **process-spawn**: nova.privsep.libvirt.ploop_init(size, disk_format, fs_type, disk_path) (src/nova/virt/libvirt/utils.py:L289)
- **file-io**: backing_file = os.path.basename(backing_file) (src/nova/virt/libvirt/utils.py:L314)
- **process-spawn**: on_execute: Callable[[subprocess.Popen], None] | None = None, (src/nova/virt/libvirt/utils.py:L324)
- **process-spawn**: on_completion: Callable[[subprocess.Popen], None] | None = None, (src/nova/virt/libvirt/utils.py:L325)
- **process-spawn**: nova.privsep.idmapshift.shift(path, uid_maps, gid_maps) (src/nova/virt/libvirt/utils.py:L372)
- **file-io**: with open(path, 'r') as fp: (src/nova/virt/libvirt/utils.py:L401)
- **file-io**: see built-in open() documentation for more details (src/nova/virt/libvirt/utils.py:L410)
- **file-io**: return open(*args, **kwargs) (src/nova/virt/libvirt/utils.py:L416)
- **file-io**: disk_path = os.path.join(disk_path, 'disk') (src/nova/virt/libvirt/utils.py:L432)
- **file-io**: elif (os.path.isdir(path) and (src/nova/virt/libvirt/utils.py:L462)
- **file-io**: os.path.exists(os.path.join(path, "DiskDescriptor.xml"))): (src/nova/virt/libvirt/utils.py:L463)
- **file-io**: return os.path.join(CONF.instances_path, instance.uuid) (src/nova/virt/libvirt/utils.py:L536)
- **file-io**: instance_dir = os.path.join(CONF.instances_path, (src/nova/virt/libvirt/utils.py:L562)
- **file-io**: if not os.path.ismount(mount_path): (src/nova/virt/libvirt/utils.py:L591)
- **file-io**: with open('/proc/mounts', 'r') as proc_mounts: (src/nova/virt/libvirt/utils.py:L597)
- **process-spawn**: on_execute: Callable[[subprocess.Popen], None] | None = None, (src/nova/virt/libvirt/utils.py:L733)
- **process-spawn**: on_completion: Callable[[subprocess.Popen], None] | None = None, (src/nova/virt/libvirt/utils.py:L734)
- **file-io**: vtpm_dir = os.path.join(VTPM_DIR, instance_uuid) (src/nova/virt/libvirt/utils.py:L752)
- **file-io**: if not os.path.exists(vtpm_dir): (src/nova/virt/libvirt/utils.py:L753)
- **file-io**: swtpm_dir = os.path.join(inst_base_resize, 'swtpm') (src/nova/virt/libvirt/utils.py:L762)
- **file-io**: fileutils.ensure_tree(swtpm_dir) (src/nova/virt/libvirt/utils.py:L763)
- **process-spawn**: nova.privsep.path.move_tree(vtpm_dir, swtpm_dir) (src/nova/virt/libvirt/utils.py:L766)
- **process-spawn**: nova.privsep.path.chown( (src/nova/virt/libvirt/utils.py:L768)
- **file-io**: if not os.path.exists(VTPM_DIR): (src/nova/virt/libvirt/utils.py:L784)
- **process-spawn**: nova.privsep.path.makedirs(VTPM_DIR) (src/nova/virt/libvirt/utils.py:L785)
- **process-spawn**: nova.privsep.path.chmod(VTPM_DIR, 0o711) (src/nova/virt/libvirt/utils.py:L786)
- **file-io**: elif not os.path.isdir(VTPM_DIR): (src/nova/virt/libvirt/utils.py:L787)
- **process-spawn**: nova.privsep.path.chown(swtpm_dir, uid, gid, recursive=True) (src/nova/virt/libvirt/utils.py:L797)
- **process-spawn**: nova.privsep.path.move_tree(swtpm_dir, VTPM_DIR) (src/nova/virt/libvirt/utils.py:L799)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/libvirt/utils.py:L54)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/utils.py:L55)
- **global-mutation**: RESIZE_SNAPSHOT_NAME = 'nova-resize' (src/nova/virt/libvirt/utils.py:L57)
- **global-mutation**: CPU_TRAITS_MAPPING = { (src/nova/virt/libvirt/utils.py:L61)
- **global-mutation**: TRAITS_CPU_MAPPING = make_reverse_cpu_traits_mapping() (src/nova/virt/libvirt/utils.py:L125)
- **global-mutation**: VTPM_DIR = '/var/lib/libvirt/swtpm/' (src/nova/virt/libvirt/utils.py:L128)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.fs (src/nova/virt/libvirt/utils.py:L43)
- **privilege** (`privsep-entrypoint`): import nova.privsep.idmapshift (src/nova/virt/libvirt/utils.py:L44)
- **privilege** (`privsep-entrypoint`): import nova.privsep.libvirt (src/nova/virt/libvirt/utils.py:L45)
- **privilege** (`privsep-entrypoint`): import nova.privsep.path (src/nova/virt/libvirt/utils.py:L46)
- **sink** (`file-write`): f.write(encryption['secret']) (src/nova/virt/libvirt/utils.py:L221)
- **privilege** (`privsep-entrypoint`): nova.privsep.fs.FS_FORMAT_EXT4 (src/nova/virt/libvirt/utils.py:L286)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.ploop_init(size, disk_format, fs_type, disk_path) (src/nova/virt/libvirt/utils.py:L289)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.shift(path, uid_maps, gid_maps) (src/nova/virt/libvirt/utils.py:L372)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.move_tree(vtpm_dir, swtpm_dir) (src/nova/virt/libvirt/utils.py:L766)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.chown( (src/nova/virt/libvirt/utils.py:L768)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.makedirs(VTPM_DIR) (src/nova/virt/libvirt/utils.py:L785)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.chmod(VTPM_DIR, 0o711) (src/nova/virt/libvirt/utils.py:L786)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.chown(swtpm_dir, uid, gid, recursive=True) (src/nova/virt/libvirt/utils.py:L797)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.move_tree(swtpm_dir, VTPM_DIR) (src/nova/virt/libvirt/utils.py:L799)

