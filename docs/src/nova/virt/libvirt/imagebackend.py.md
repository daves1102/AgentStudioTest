# src/nova/virt/libvirt/imagebackend.py

## Overview

This file implements the `imagebackend` module, defining 7 classs, 6 constants, 10 functions, 82 methods, 7 staticmethods, 32 imports, 57 side effects, 9 security surface entries.

Lines: total 1414, code 1020, comment 177, blank 217

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L51–L51` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L53–L53` |
| `IMAGE_API` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L54–L54` |
| `_update_utime_ignore_eacces` | function | (path) | unexported | not declared | 3/9 | `src/nova/virt/libvirt/imagebackend.py:L71–L79` |
| `Image` | class | — | exported | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L82–L546` |
| `Image.SUPPORTS_CLONE` | constant | — | public | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L84–L84` |
| `Image.SUPPORTS_LUKS` | constant | — | public | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L85–L85` |
| `Image.__init__` | method | (self, path, source_type, driver_format, is_block_dev=False, disk_info_mapping=None) | public | not declared | 3/23 | `src/nova/virt/libvirt/imagebackend.py:L87–L129` |
| `Image._supports_encryption` | method | (self) | private | `False` (src/nova/virt/libvirt/imagebackend.py:L135) | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L131–L135` |
| `Image.create_image` | method | (self, prepare_template, base, size, safe=False, *args, **kwargs) | public | not declared | 1/3 | `src/nova/virt/libvirt/imagebackend.py:L138–L151` |
| `Image.resize_image` | method | (self, size) | public | not declared | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L154–L160` |
| `Image.libvirt_info` | method | (self, cache_mode, extra_specs, boot_order=None, disk_unit=None) | public | `info` (src/nova/virt/libvirt/imagebackend.py:L209) | 8/36 | `src/nova/virt/libvirt/imagebackend.py:L162–L209` |
| `Image.disk_scsi` | method | (self, info, disk_unit) | public | not declared | 2/5 | `src/nova/virt/libvirt/imagebackend.py:L211–L226` |
| `Image.disk_qos` | method | (self, info, extra_specs) | public | not declared | 5/9 | `src/nova/virt/libvirt/imagebackend.py:L228–L236` |
| `Image.libvirt_fs_info` | method | (self, target, driver_type=None) | public | `info` (src/nova/virt/libvirt/imagebackend.py:L263) | 4/18 | `src/nova/virt/libvirt/imagebackend.py:L238–L263` |
| `Image.exists` | method | (self) | public | `os.path.exists(self.path)` (src/nova/virt/libvirt/imagebackend.py:L266) | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L265–L266` |
| `Image.cache` | method | (self, fetch_func, filename, size=None, safe=False, *args, **kwargs) | public | not declared | 10/19 | `src/nova/virt/libvirt/imagebackend.py:L268–L316` |
| `Image.cache.fetch_func_sync` | function | (target, *args, **kwargs) | public | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L288–L301` |
| `Image._can_fallocate` | method | (self) | private | `can_fallocate` (src/nova/virt/libvirt/imagebackend.py:L332) | 3/12 | `src/nova/virt/libvirt/imagebackend.py:L318–L332` |
| `Image.verify_base_size` | method | (self, base, size, base_size=0) | public | `` (src/nova/virt/libvirt/imagebackend.py:L350) | 5/13 | `src/nova/virt/libvirt/imagebackend.py:L334–L362` |
| `Image.get_disk_size` | method | (self, name) | public | `disk.get_disk_size(name)` (src/nova/virt/libvirt/imagebackend.py:L365) | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L364–L365` |
| `Image.snapshot_extract` | method | (self, target, out_format) | public | not declared | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L368–L377` |
| `Image._get_driver_format` | method | (self) | private | `self.driver_format` (src/nova/virt/libvirt/imagebackend.py:L380) | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L379–L380` |
| `Image.resolve_driver_format` | method | (self) | public | `driver_format` (src/nova/virt/libvirt/imagebackend.py:L430); `driver_format` (src/nova/virt/libvirt/imagebackend.py:L437) | 8/21 | `src/nova/virt/libvirt/imagebackend.py:L382–L437` |
| `Image.resolve_driver_format._dict_from_line` | function | (line) | private | `{}` (src/nova/virt/libvirt/imagebackend.py:L393); `jsonutils.loads(line)` (src/nova/virt/libvirt/imagebackend.py:L395) | — | `src/nova/virt/libvirt/imagebackend.py:L391–L400` |
| `Image.resolve_driver_format.write_to_disk_info_file` | function | — | public | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L404–L420` |
| `Image.is_shared_block_storage` | method | — | public | `False` (src/nova/virt/libvirt/imagebackend.py:L442) | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L440–L442` |
| `Image.is_file_in_instance_path` | method | — | public | `False` (src/nova/virt/libvirt/imagebackend.py:L447) | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L445–L447` |
| `Image.clone` | method | (self, context, image_id_or_uri) | public | not declared | 1/4 | `src/nova/virt/libvirt/imagebackend.py:L449–L462` |
| `Image.flatten` | method | (self) | public | not declared | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L464–L470` |
| `Image.direct_snapshot` | method | (self, context, snapshot_name, image_format, image_id, base_image_id) | public | not declared | 1/3 | `src/nova/virt/libvirt/imagebackend.py:L472–L483` |
| `Image.cleanup_direct_snapshot` | method | (self, location, also_destroy_volume=False, ignore_errors=False) | public | not declared | 1/3 | `src/nova/virt/libvirt/imagebackend.py:L485–L492` |
| `Image._get_lock_name` | method | (self, base) | private | `os.path.split(base)[-1]` (src/nova/virt/libvirt/imagebackend.py:L496) | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L494–L496` |
| `Image.get_model` | method | (self, connection) | public | not declared | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L499–L504` |
| `Image.import_file` | method | (self, instance, local_file, remote_name) | public | not declared | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L506–L521` |
| `Image.create_snap` | method | (self, name) | public | not declared | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L523–L529` |
| `Image.remove_snap` | method | (self, name, ignore_errors=False) | public | not declared | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L531–L538` |
| `Image.rollback_to_snap` | method | (self, name) | public | not declared | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L540–L546` |
| `Flat` | class | — | exported | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L549–L650` |
| `Flat.__init__` | method | (self, instance=None, disk_name=None, path=None, disk_info_mapping=None) | public | not declared | 3/16 | `src/nova/virt/libvirt/imagebackend.py:L556–L572` |
| `Flat._get_driver_format` | method | (self) | private | `data.file_format` (src/nova/virt/libvirt/imagebackend.py:L577); `'raw'` (src/nova/virt/libvirt/imagebackend.py:L582) | 2/9 | `src/nova/virt/libvirt/imagebackend.py:L574–L582` |
| `Flat._supports_encryption` | method | (self) | private | `False` (src/nova/virt/libvirt/imagebackend.py:L592); `True` (src/nova/virt/libvirt/imagebackend.py:L594) | 2/5 | `src/nova/virt/libvirt/imagebackend.py:L584–L594` |
| `Flat.correct_format` | method | (self) | public | not declared | 2/3 | `src/nova/virt/libvirt/imagebackend.py:L596–L598` |
| `Flat.create_image` | method | (self, prepare_template, base, size, safe=False, *args, **kwargs) | public | not declared | 6/21 | `src/nova/virt/libvirt/imagebackend.py:L600–L635` |
| `Flat.create_image.copy_raw_image` | function | (base, target, size) | public | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L605–L608` |
| `Flat.resize_image` | method | (self, size) | public | not declared | 1/3 | `src/nova/virt/libvirt/imagebackend.py:L637–L639` |
| `Flat.snapshot_extract` | method | (self, target, out_format) | public | not declared | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L641–L642` |
| `Flat.is_file_in_instance_path` | method | — | public | `True` (src/nova/virt/libvirt/imagebackend.py:L646) | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L645–L646` |
| `Flat.get_model` | method | (self, connection) | public | `imgmodel.LocalFileImage(self.path, imgmodel.FORMAT_RAW)` (src/nova/virt/libvirt/imagebackend.py:L649) | 1/3 | `src/nova/virt/libvirt/imagebackend.py:L648–L650` |
| `Qcow2` | class | — | exported | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L653–L752` |
| `Qcow2.__init__` | method | (self, instance=None, disk_name=None, path=None, disk_info_mapping=None) | public | not declared | 3/15 | `src/nova/virt/libvirt/imagebackend.py:L654–L669` |
| `Qcow2.create_image` | method | (self, prepare_template, base, size, safe=False, *args, **kwargs) | public | not declared | 12/39 | `src/nova/virt/libvirt/imagebackend.py:L671–L735` |
| `Qcow2.create_image.create_qcow2_image` | function | (base, target, size, safe=False) | public | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L676–L678` |
| `Qcow2.resize_image` | method | (self, size) | public | not declared | 1/3 | `src/nova/virt/libvirt/imagebackend.py:L737–L739` |
| `Qcow2.snapshot_extract` | method | (self, target, out_format) | public | not declared | 1/4 | `src/nova/virt/libvirt/imagebackend.py:L741–L744` |
| `Qcow2.is_file_in_instance_path` | method | — | public | `True` (src/nova/virt/libvirt/imagebackend.py:L748) | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L747–L748` |
| `Qcow2.get_model` | method | (self, connection) | public | `imgmodel.LocalFileImage(self.path, imgmodel.FORMAT_QCOW2)` (src/nova/virt/libvirt/imagebackend.py:L751) | 1/3 | `src/nova/virt/libvirt/imagebackend.py:L750–L752` |
| `Lvm` | class | — | exported | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L755–L897` |
| `Lvm.escape` | method | (filename) | public | `filename.replace('_', '__')` (src/nova/virt/libvirt/imagebackend.py:L758) | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L757–L758` |
| `Lvm.__init__` | method | (self, instance=None, disk_name=None, path=None, disk_info_mapping=None) | public | not declared | 7/37 | `src/nova/virt/libvirt/imagebackend.py:L760–L803` |
| `Lvm._supports_encryption` | method | (self) | private | `True` (src/nova/virt/libvirt/imagebackend.py:L806) | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L805–L806` |
| `Lvm._can_fallocate` | method | (self) | private | `False` (src/nova/virt/libvirt/imagebackend.py:L809) | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L808–L809` |
| `Lvm.create_image` | method | (self, prepare_template, base, size, safe=False, *args, **kwargs) | public | not declared | 8/31 | `src/nova/virt/libvirt/imagebackend.py:L811–L873` |
| `Lvm.create_image.encrypt_lvm_image` | function | — | public | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L813–L818` |
| `Lvm.create_image.create_lvm_image` | function | (base, size) | public | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L823–L843` |
| `Lvm.resize_image` | method | (self, size) | public | not declared | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L877–L878` |
| `Lvm.remove_volume_on_error` | method | (self, path) | public | not declared | 3/10 | `src/nova/virt/libvirt/imagebackend.py:L881–L890` |
| `Lvm.snapshot_extract` | method | (self, target, out_format) | public | not declared | 1/3 | `src/nova/virt/libvirt/imagebackend.py:L892–L894` |
| `Lvm.get_model` | method | (self, connection) | public | `imgmodel.LocalBlockImage(self.path)` (src/nova/virt/libvirt/imagebackend.py:L897) | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L896–L897` |
| `Rbd` | class | — | exported | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L900–L1267` |
| `Rbd.SUPPORTS_CLONE` | constant | — | public | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L902–L902` |
| `Rbd.__init__` | method | (self, instance=None, disk_name=None, path=None, disk_info_mapping=None) | public | not declared | 6/25 | `src/nova/virt/libvirt/imagebackend.py:L904–L933` |
| `Rbd.libvirt_info` | method | (self, cache_mode, extra_specs, boot_order=None, disk_unit=None) | public | `info` (src/nova/virt/libvirt/imagebackend.py:L975) | 5/31 | `src/nova/virt/libvirt/imagebackend.py:L935–L975` |
| `Rbd._can_fallocate` | method | (self) | private | `False` (src/nova/virt/libvirt/imagebackend.py:L978) | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L977–L978` |
| `Rbd.exists` | method | (self) | public | `self.driver.exists(self.rbd_name)` (src/nova/virt/libvirt/imagebackend.py:L981) | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L980–L981` |
| `Rbd.get_disk_size` | method | (self, name) | public | `self.driver.size(self.rbd_name)` (src/nova/virt/libvirt/imagebackend.py:L989) | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L983–L989` |
| `Rbd._remove_non_raw_cache_image` | method | (base) | private | `True` (src/nova/virt/libvirt/imagebackend.py:L1000) | 4/10 | `src/nova/virt/libvirt/imagebackend.py:L992–L1007` |
| `Rbd.create_image` | method | (self, prepare_template, base, size, safe=False, *args, **kwargs) | public | not declared | 5/10 | `src/nova/virt/libvirt/imagebackend.py:L1009–L1023` |
| `Rbd.resize_image` | method | (self, size) | public | not declared | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L1025–L1026` |
| `Rbd.snapshot_extract` | method | (self, target, out_format) | public | not declared | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L1028–L1029` |
| `Rbd.is_shared_block_storage` | method | — | public | `True` (src/nova/virt/libvirt/imagebackend.py:L1033) | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L1032–L1033` |
| `Rbd.copy_to_store` | method | (self, context, image_meta) | public | not declared | 5/34 | `src/nova/virt/libvirt/imagebackend.py:L1035–L1103` |
| `Rbd.copy_to_store._wait_for_copy` | function | — | private | `True` (src/nova/virt/libvirt/imagebackend.py:L1066) | — | `src/nova/virt/libvirt/imagebackend.py:L1051–L1066` |
| `Rbd.clone` | method | (self, context, image_id_or_uri, copy_to_store=True) | public | `self.driver.clone(location, self.rbd_name)` (src/nova/virt/libvirt/imagebackend.py:L1120); `self.clone(context, image_id_or_uri, copy_to_store=False)` (src/nova/virt/libvirt/imagebackend.py:L1126) | 6/19 | `src/nova/virt/libvirt/imagebackend.py:L1105–L1130` |
| `Rbd.flatten` | method | (self) | public | not declared | 2/10 | `src/nova/virt/libvirt/imagebackend.py:L1132–L1143` |
| `Rbd.get_model` | method | (self, connection) | public | `imgmodel.RBDImage(self.rbd_name, self.driver.pool, self.driver.rbd_user, secret, servers)` (src/nova/virt/libvirt/imagebackend.py:L1158) | 3/13 | `src/nova/virt/libvirt/imagebackend.py:L1145–L1162` |
| `Rbd.import_file` | method | (self, instance, local_file, remote_name) | public | not declared | 2/5 | `src/nova/virt/libvirt/imagebackend.py:L1164–L1168` |
| `Rbd.create_snap` | method | (self, name) | public | `self.driver.create_snap(self.rbd_name, name)` (src/nova/virt/libvirt/imagebackend.py:L1171) | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L1170–L1171` |
| `Rbd.remove_snap` | method | (self, name, ignore_errors=False) | public | `self.driver.remove_snap(self.rbd_name, name, ignore_errors)` (src/nova/virt/libvirt/imagebackend.py:L1174) | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L1173–L1174` |
| `Rbd.rollback_to_snap` | method | (self, name) | public | `self.driver.rollback_to_snap(self.rbd_name, name)` (src/nova/virt/libvirt/imagebackend.py:L1177) | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L1176–L1177` |
| `Rbd._get_parent_pool` | method | (self, context, base_image_id, fsid) | private | `parent_pool` (src/nova/virt/libvirt/imagebackend.py:L1216) | 7/30 | `src/nova/virt/libvirt/imagebackend.py:L1179–L1216` |
| `Rbd.direct_snapshot` | method | (self, context, snapshot_name, image_format, image_id, base_image_id) | public | `('rbd://%(fsid)s/%(pool)s/%(image)s/snap' % dict(fsid=fsid, pool=parent_pool, image=image_id))` (src/nova/virt/libvirt/imagebackend.py:L1251) | 2/19 | `src/nova/virt/libvirt/imagebackend.py:L1218–L1252` |
| `Rbd.cleanup_direct_snapshot` | method | (self, location, also_destroy_volume=False, ignore_errors=False) | public | not declared | 3/8 | `src/nova/virt/libvirt/imagebackend.py:L1254–L1267` |
| `Ploop` | class | — | exported | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L1270–L1360` |
| `Ploop.__init__` | method | (self, instance=None, disk_name=None, path=None, disk_info_mapping=None) | public | not declared | 2/10 | `src/nova/virt/libvirt/imagebackend.py:L1271–L1281` |
| `Ploop.create_image` | method | (self, prepare_template, base, size, safe=False, *args, **kwargs) | public | `` (src/nova/virt/libvirt/imagebackend.py:L1310); `` (src/nova/virt/libvirt/imagebackend.py:L1323) | 8/41 | `src/nova/virt/libvirt/imagebackend.py:L1285–L1346` |
| `Ploop.create_image._copy_ploop_image` | function | (base, target, size) | private | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L1292–L1302` |
| `Ploop.resize_image` | method | (self, size) | public | not declared | 1/3 | `src/nova/virt/libvirt/imagebackend.py:L1348–L1350` |
| `Ploop.snapshot_extract` | method | (self, target, out_format) | public | not declared | 1/6 | `src/nova/virt/libvirt/imagebackend.py:L1352–L1357` |
| `Ploop.get_model` | method | (self, connection) | public | `imgmodel.LocalFileImage(self.path, imgmodel.FORMAT_PLOOP)` (src/nova/virt/libvirt/imagebackend.py:L1360) | 1/2 | `src/nova/virt/libvirt/imagebackend.py:L1359–L1360` |
| `Backend` | class | — | exported | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L1363–L1414` |
| `Backend.__init__` | method | (self, use_cow) | public | not declared | 2/10 | `src/nova/virt/libvirt/imagebackend.py:L1364–L1373` |
| `Backend.backend` | method | (self, image_type=None) | public | `image` (src/nova/virt/libvirt/imagebackend.py:L1381) | 3/7 | `src/nova/virt/libvirt/imagebackend.py:L1375–L1381` |
| `Backend.by_name` | method | (self, instance, name, image_type=None, disk_info_mapping=None) | public | `backend( instance=instance, disk_name=name, disk_info_mapping=disk_info_mapping)` (src/nova/virt/libvirt/imagebackend.py:L1399) | 2/6 | `src/nova/virt/libvirt/imagebackend.py:L1383–L1401` |
| `Backend.by_libvirt_path` | method | (self, instance, path, image_type=None) | public | `backend(instance=instance, path=path)` (src/nova/virt/libvirt/imagebackend.py:L1414) | 1/3 | `src/nova/virt/libvirt/imagebackend.py:L1403–L1414` |
| `Image.is_shared_block_storage` | staticmethod | — | public | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L439–L442` |
| `Image.is_file_in_instance_path` | staticmethod | — | public | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L444–L447` |
| `Flat.is_file_in_instance_path` | staticmethod | — | public | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L644–L646` |
| `Qcow2.is_file_in_instance_path` | staticmethod | — | public | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L746–L748` |
| `Lvm.escape` | staticmethod | — | public | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L756–L758` |
| `Rbd._remove_non_raw_cache_image` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L991–L1007` |
| `Rbd.is_shared_block_storage` | staticmethod | — | public | not declared | — | `src/nova/virt/libvirt/imagebackend.py:L1031–L1033` |

## Dependencies

- `import abc` (src/nova/virt/libvirt/imagebackend.py:L16)
- `import base64` (src/nova/virt/libvirt/imagebackend.py:L17)
- `import contextlib` (src/nova/virt/libvirt/imagebackend.py:L18)
- `import errno` (src/nova/virt/libvirt/imagebackend.py:L19)
- `import functools` (src/nova/virt/libvirt/imagebackend.py:L20)
- `import os` (src/nova/virt/libvirt/imagebackend.py:L21)
- `import shutil` (src/nova/virt/libvirt/imagebackend.py:L22)
- `castellan`: imports `key_manager` (src/nova/virt/libvirt/imagebackend.py:L24)
- `oslo_concurrency`: imports `processutils` (src/nova/virt/libvirt/imagebackend.py:L25)
- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/imagebackend.py:L26)
- `oslo_serialization`: imports `jsonutils` (src/nova/virt/libvirt/imagebackend.py:L27)
- `oslo_service`: imports `loopingcall` (src/nova/virt/libvirt/imagebackend.py:L28)
- `oslo_utils`: imports `excutils` (src/nova/virt/libvirt/imagebackend.py:L29)
- `oslo_utils`: imports `fileutils` (src/nova/virt/libvirt/imagebackend.py:L30)
- `oslo_utils.imageutils`: imports `format_inspector` (src/nova/virt/libvirt/imagebackend.py:L31)
- `oslo_utils`: imports `strutils` (src/nova/virt/libvirt/imagebackend.py:L32)
- `oslo_utils`: imports `units` (src/nova/virt/libvirt/imagebackend.py:L33)
- `import nova.conf` (src/nova/virt/libvirt/imagebackend.py:L35)
- `nova`: imports `exception` (src/nova/virt/libvirt/imagebackend.py:L36)
- `nova.i18n`: imports `_` (src/nova/virt/libvirt/imagebackend.py:L37)
- `nova.image`: imports `glance` (src/nova/virt/libvirt/imagebackend.py:L38)
- `import nova.privsep.libvirt` (src/nova/virt/libvirt/imagebackend.py:L39)
- `import nova.privsep.path` (src/nova/virt/libvirt/imagebackend.py:L40)
- `nova.storage`: imports `rbd_utils` (src/nova/virt/libvirt/imagebackend.py:L41)
- `nova`: imports `utils` (src/nova/virt/libvirt/imagebackend.py:L42)
- `nova.virt.disk`: imports `api as disk` (src/nova/virt/libvirt/imagebackend.py:L43)
- `nova.virt.image`: imports `model as imgmodel` (src/nova/virt/libvirt/imagebackend.py:L44)
- `nova.virt`: imports `images` (src/nova/virt/libvirt/imagebackend.py:L45)
- `nova.virt.libvirt`: imports `config as vconfig` (src/nova/virt/libvirt/imagebackend.py:L46)
- `nova.virt.libvirt.storage`: imports `dmcrypt` (src/nova/virt/libvirt/imagebackend.py:L47)
- `nova.virt.libvirt.storage`: imports `lvm` (src/nova/virt/libvirt/imagebackend.py:L48)
- `nova.virt.libvirt`: imports `utils as libvirt_utils` (src/nova/virt/libvirt/imagebackend.py:L49)

## Side Effects

- **process-spawn**: import nova.privsep.libvirt (src/nova/virt/libvirt/imagebackend.py:L39)
- **process-spawn**: import nova.privsep.path (src/nova/virt/libvirt/imagebackend.py:L40)
- **process-spawn**: nova.privsep.path.utime(path) (src/nova/virt/libvirt/imagebackend.py:L73)
- **file-io**: self.lock_path = os.path.join(CONF.instances_path, 'locks') (src/nova/virt/libvirt/imagebackend.py:L129)
- **file-io**: return os.path.exists(self.path) (src/nova/virt/libvirt/imagebackend.py:L266)
- **file-io**: base_dir = os.path.join(CONF.instances_path, (src/nova/virt/libvirt/imagebackend.py:L281)
- **file-io**: if not os.path.exists(base_dir): (src/nova/virt/libvirt/imagebackend.py:L283)
- **file-io**: fileutils.ensure_tree(base_dir) (src/nova/virt/libvirt/imagebackend.py:L284)
- **file-io**: base = os.path.join(base_dir, filename) (src/nova/virt/libvirt/imagebackend.py:L285)
- **file-io**: if target != base or not os.path.exists(target): (src/nova/virt/libvirt/imagebackend.py:L300)
- **file-io**: if not self.exists() or not os.path.exists(base): (src/nova/virt/libvirt/imagebackend.py:L303)
- **file-io**: if os.path.exists(base) and size > self.get_disk_size(base): (src/nova/virt/libvirt/imagebackend.py:L311)
- **file-io**: fileutils.delete_if_exists(test_path) (src/nova/virt/libvirt/imagebackend.py:L326)
- **file-io**: fd = os.open(self.disk_info_path, os.O_RDONLY | os.O_CREAT, 0o644) (src/nova/virt/libvirt/imagebackend.py:L406)
- **file-io**: fd = os.open(tmp_path, os.O_WRONLY | os.O_CREAT, 0o644) (src/nova/virt/libvirt/imagebackend.py:L417)
- **file-io**: os.path.exists(self.disk_info_path)): (src/nova/virt/libvirt/imagebackend.py:L424)
- **file-io**: with open(self.disk_info_path) as disk_info_file: (src/nova/virt/libvirt/imagebackend.py:L425)
- **file-io**: fileutils.ensure_tree(os.path.dirname(self.disk_info_path)) (src/nova/virt/libvirt/imagebackend.py:L433)
- **file-io**: return os.path.split(base)[-1] (src/nova/virt/libvirt/imagebackend.py:L496)
- **file-io**: path = (path or os.path.join(libvirt_utils.get_instance_path(instance), (src/nova/virt/libvirt/imagebackend.py:L560)
- **file-io**: self.disk_info_path = os.path.join(os.path.dirname(path), 'disk.info') (src/nova/virt/libvirt/imagebackend.py:L571)
- **file-io**: if os.path.exists(self.path): (src/nova/virt/libvirt/imagebackend.py:L597)
- **file-io**: if not os.path.exists(base): (src/nova/virt/libvirt/imagebackend.py:L624)
- **file-io**: if not os.path.exists(self.path): (src/nova/virt/libvirt/imagebackend.py:L631)
- **file-io**: with fileutils.remove_path_on_error(self.path): (src/nova/virt/libvirt/imagebackend.py:L632)
- **file-io**: path = (path or os.path.join(libvirt_utils.get_instance_path(instance), (src/nova/virt/libvirt/imagebackend.py:L657)
- **file-io**: self.disk_info_path = os.path.join(os.path.dirname(path), 'disk.info') (src/nova/virt/libvirt/imagebackend.py:L668)
- **file-io**: if not os.path.exists(base): (src/nova/virt/libvirt/imagebackend.py:L681)
- **file-io**: if os.path.exists(self.path): (src/nova/virt/libvirt/imagebackend.py:L713)
- **file-io**: backing_file = os.path.basename(backing_path) (src/nova/virt/libvirt/imagebackend.py:L716)
- **file-io**: if not os.path.exists(legacy_base): (src/nova/virt/libvirt/imagebackend.py:L726)
- **file-io**: with fileutils.remove_path_on_error(legacy_base): (src/nova/virt/libvirt/imagebackend.py:L727)
- **file-io**: if not os.path.exists(self.path): (src/nova/virt/libvirt/imagebackend.py:L733)
- **file-io**: with fileutils.remove_path_on_error(self.path): (src/nova/virt/libvirt/imagebackend.py:L734)
- **file-io**: path = os.path.join('/dev', self.vg, self.lv) (src/nova/virt/libvirt/imagebackend.py:L787)
- **file-io**: self.lv_path = os.path.join('/dev', self.vg, self.lv) (src/nova/virt/libvirt/imagebackend.py:L789)
- **file-io**: if not os.path.exists(base): (src/nova/virt/libvirt/imagebackend.py:L870)
- **file-io**: if not os.path.exists(base): (src/nova/virt/libvirt/imagebackend.py:L999)
- **file-io**: path = (path or os.path.join(libvirt_utils.get_instance_path(instance), (src/nova/virt/libvirt/imagebackend.py:L1274)
- **file-io**: filename = os.path.basename(base) (src/nova/virt/libvirt/imagebackend.py:L1287)
- **file-io**: fileutils.ensure_tree(target) (src/nova/virt/libvirt/imagebackend.py:L1295)
- **file-io**: image_path = os.path.join(target, "root.hds") (src/nova/virt/libvirt/imagebackend.py:L1296)
- **process-spawn**: nova.privsep.libvirt.ploop_restore_descriptor(target, (src/nova/virt/libvirt/imagebackend.py:L1298)
- **file-io**: remove_func = functools.partial(fileutils.delete_if_exists, (src/nova/virt/libvirt/imagebackend.py:L1306)
- **file-io**: remove=shutil.rmtree) (src/nova/virt/libvirt/imagebackend.py:L1307)
- **file-io**: if os.path.exists(self.path): (src/nova/virt/libvirt/imagebackend.py:L1309)
- **file-io**: with fileutils.remove_path_on_error(self.path, remove=remove_func): (src/nova/virt/libvirt/imagebackend.py:L1311)
- **file-io**: if not os.path.exists(base): (src/nova/virt/libvirt/imagebackend.py:L1315)
- **file-io**: if os.path.exists(self.path): (src/nova/virt/libvirt/imagebackend.py:L1322)
- **file-io**: with fileutils.remove_path_on_error(self.path, remove=remove_func): (src/nova/virt/libvirt/imagebackend.py:L1345)
- **file-io**: img_path = os.path.join(self.path, "root.hds") (src/nova/virt/libvirt/imagebackend.py:L1353)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/libvirt/imagebackend.py:L51)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/imagebackend.py:L53)
- **global-mutation**: IMAGE_API = glance.API() (src/nova/virt/libvirt/imagebackend.py:L54)
- **global-mutation**: SUPPORTS_CLONE = False (src/nova/virt/libvirt/imagebackend.py:L84)
- **global-mutation**: SUPPORTS_LUKS = False (src/nova/virt/libvirt/imagebackend.py:L85)
- **global-mutation**: SUPPORTS_CLONE = True (src/nova/virt/libvirt/imagebackend.py:L902)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.libvirt (src/nova/virt/libvirt/imagebackend.py:L39)
- **privilege** (`privsep-entrypoint`): import nova.privsep.path (src/nova/virt/libvirt/imagebackend.py:L40)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.utime(path) (src/nova/virt/libvirt/imagebackend.py:L73)
- **sink** (`db-write`): LOG.warning("Ignoring failure to update utime of %(path)s: " (src/nova/virt/libvirt/imagebackend.py:L77)
- **sink** (`db-write`): dct.update({self.path: driver_format}) (src/nova/virt/libvirt/imagebackend.py:L414)
- **sink** (`file-write`): with os.fdopen(fd, "w") as tmp_file: (src/nova/virt/libvirt/imagebackend.py:L418)
- **sink** (`file-write`): tmp_file.write('%s\n' % jsonutils.dumps(dct)) (src/nova/virt/libvirt/imagebackend.py:L419)
- **sink** (`db-write`): the image API for a list of image "locations" and select one or more (src/nova/virt/libvirt/imagebackend.py:L453)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.ploop_restore_descriptor(target, (src/nova/virt/libvirt/imagebackend.py:L1298)

