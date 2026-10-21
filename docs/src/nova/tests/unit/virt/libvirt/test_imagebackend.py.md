# src/nova/tests/unit/virt/libvirt/test_imagebackend.py

## Overview

This file implements the `test_imagebackend` module, defining 11 classs, 18 constants, 22 functions, 132 methods, 31 imports, 57 side effects, 19 security surface entries.

Lines: total 2251, code 1809, comment 114, blank 328

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L50–L50` |
| `FakeSecret` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L53–L56` |
| `FakeSecret.value` | method | (self) | public | `base64.b64decode("MTIzNDU2Cg==")` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L56) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L55–L56` |
| `FakeConn` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L59–L62` |
| `FakeConn.secretLookupByUUIDString` | method | (self, uuid) | public | `FakeSecret()` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L62) | 1/2 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L61–L62` |
| `_ImageTestCase` | class | — | unexported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L66–L267` |
| `_ImageTestCase.mock_create_image` | method | (self, image) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L68–L71` |
| `_ImageTestCase.mock_create_image.create_image` | function | (fn, base, size, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L69–L70` |
| `_ImageTestCase.setUp` | method | (self) | public | not declared | 2/21 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L73–L102` |
| `_ImageTestCase.setUp._fake_deco` | function | (func) | private | `func` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L101) | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L100–L101` |
| `_ImageTestCase.tearDown` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L104–L106` |
| `_ImageTestCase.test_prealloc_image` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L108–L128` |
| `_ImageTestCase.test_prealloc_image.fake_fetch` | function | (target, *args, **kwargs) | public | `` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L116) | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L115–L116` |
| `_ImageTestCase.test_prealloc_image_without_write_access` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L130–L151` |
| `_ImageTestCase.test_prealloc_image_without_write_access.fake_fetch` | function | (target, *args, **kwargs) | public | `` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L138) | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L137–L138` |
| `_ImageTestCase.test_libvirt_fs_info` | method | (self) | public | not declared | 2/11 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L153–L165` |
| `_ImageTestCase.test_libvirt_info` | method | (self) | public | not declared | 1/30 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L167–L199` |
| `_ImageTestCase.test_get_disk_size` | method | (self, get_disk_size) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L202–L207` |
| `_ImageTestCase._test_libvirt_info_scsi_with_unit` | method | (self, disk_unit) | private | not declared | 2/15 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L209–L226` |
| `_ImageTestCase.test_libvirt_info_scsi_with_unit` | method | (self, disk_unit) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L229–L230` |
| `_ImageTestCase.test_libvirt_info_with_encryption` | method | (self) | public | not declared | 2/32 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L232–L267` |
| `FlatTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L270–L490` |
| `FlatTestCase.SIZE` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L272–L272` |
| `FlatTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L274–L276` |
| `FlatTestCase.test_cache` | method | (self, mock_exists, mock_ensure) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L280–L294` |
| `FlatTestCase.test_cache_image_exists` | method | (self, mock_exists) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L297–L307` |
| `FlatTestCase.test_cache_base_dir_exists` | method | (self, mock_exists) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L310–L323` |
| `FlatTestCase.test_cache_template_exists` | method | (self, mock_exists) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L326–L337` |
| `FlatTestCase.test_cache_generating_resize` | method | (self, mock_path_exists) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L340–L403` |
| `FlatTestCase.test_cache_generating_resize.fake_exists` | function | (path) | public | `path in existing` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L358) | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L353–L358` |
| `FlatTestCase.test_cache_generating_resize.fake_get_disk_size` | function | (path) | public | `2 * units.Gi` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L367) | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L360–L367` |
| `FlatTestCase.test_cache_generating_resize.fake_template` | function | (target=None, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L369–L372` |
| `FlatTestCase.test_create_image` | method | (self, mock_utime, mock_sync, mock_copy, mock_extend) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L409–L419` |
| `FlatTestCase.test_create_image_generated` | method | (self, mock_sync, mock_copy, mock_extend) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L424–L434` |
| `FlatTestCase.test_create_image_extend` | method | (self, mock_utime, mock_qemu, mock_sync, mock_copy, mock_extend) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L442–L459` |
| `FlatTestCase.test_correct_format` | method | (self, mock_qemu, mock_exist) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L463–L475` |
| `FlatTestCase.test_resolve_driver_format` | method | (self, fake_qemu_img_info) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L480–L483` |
| `FlatTestCase.test_get_model` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L485–L490` |
| `Qcow2TestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L493–L739` |
| `Qcow2TestCase.SIZE` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L494–L494` |
| `Qcow2TestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L496–L500` |
| `Qcow2TestCase.test_cache` | method | (self, mock_exists) | public | not declared | 1/14 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L503–L518` |
| `Qcow2TestCase.test_cache_image_exists` | method | (self, mock_exists) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L521–L532` |
| `Qcow2TestCase.test_cache_base_dir_exists` | method | (self, mock_exists) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L535–L549` |
| `Qcow2TestCase.test_cache_template_exists` | method | (self, mock_exists) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L552–L564` |
| `Qcow2TestCase.test_create_image` | method | (self, mock_utime, mock_verify, mock_exist, mock_create, mock_sync, mock_detect_format) | public | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L572–L597` |
| `Qcow2TestCase.test_create_image_too_small` | method | (self, mock_utime, mock_get, mock_exist, mock_extend, mock_create, mock_sync, mock_detect_format) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L606–L625` |
| `Qcow2TestCase.test_generate_resized_backing_files` | method | (self, mock_utime, mock_copy, mock_verify, mock_exist, mock_extend, mock_get, mock_create, mock_sync, mock_detect_format) | public | not declared | 1/30 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L636–L667` |
| `Qcow2TestCase.test_qcow2_exists_and_has_no_backing_file` | method | (self, mock_utime, mock_verify, mock_exist, mock_extend, mock_get, mock_create, mock_sync, mock_detect_format) | public | not declared | 1/24 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L677–L702` |
| `Qcow2TestCase.test_qcow2_exists_and_fails_safety_check` | method | (self, mock_verify, mock_exist, mock_extend, mock_get, mock_create, mock_sync, mock_detect_format) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L711–L727` |
| `Qcow2TestCase.test_resolve_driver_format` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L729–L732` |
| `Qcow2TestCase.test_get_model` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L734–L739` |
| `LvmTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L742–L984` |
| `LvmTestCase.VG` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L743–L743` |
| `LvmTestCase.TEMPLATE_SIZE` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L744–L744` |
| `LvmTestCase.SIZE` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L745–L745` |
| `LvmTestCase.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L747–L754` |
| `LvmTestCase._create_image` | method | (self, sparse, mock_convert_image, mock_get, mock_create, mock_ignored, mock_disk_op_sema) | private | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L762–L780` |
| `LvmTestCase._create_image_generated` | method | (self, sparse, mock_create) | private | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L783–L792` |
| `LvmTestCase._create_image_resize` | method | (self, sparse, mock_convert_image, mock_get, mock_create, mock_resize, mock_ignored, mock_disk_op_sema) | private | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L801–L817` |
| `LvmTestCase.test_cache` | method | (self, mock_exists, mock_ensure) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L821–L834` |
| `LvmTestCase.test_cache_image_exists` | method | (self, mock_exists) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L837–L846` |
| `LvmTestCase.test_cache_base_dir_exists` | method | (self, mock_exists, mock_ensure) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L850–L861` |
| `LvmTestCase.test_cache_ephemeral` | method | (self, mock_ensure, mock_lvm, mock_synchronized, mock_exists) | public | not declared | 1/21 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L867–L911` |
| `LvmTestCase.test_cache_ephemeral.fake_synchronized` | function | (*args, **kwargs) | public | `outer` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L876) | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L870–L876` |
| `LvmTestCase.test_cache_ephemeral.fake_synchronized.outer` | function | (fn) | public | `wrapper` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L874) | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L871–L874` |
| `LvmTestCase.test_cache_ephemeral.fake_synchronized.outer.wrapper` | function | (*wargs, **wkwargs) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L872–L873` |
| `LvmTestCase.test_cache_ephemeral.fake_exists` | function | (path) | public | `path in exists` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L885) | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L884–L885` |
| `LvmTestCase.test_cache_ephemeral.fake_create_volume` | function | (vg, lv, size, sparse=False) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L890–L891` |
| `LvmTestCase.test_create_image` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L913–L914` |
| `LvmTestCase.test_create_image_sparsed` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L916–L918` |
| `LvmTestCase.test_create_image_generated` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L920–L921` |
| `LvmTestCase.test_create_image_generated_sparsed` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L923–L925` |
| `LvmTestCase.test_create_image_resize` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L927–L928` |
| `LvmTestCase.test_create_image_resize_sparsed` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L930–L932` |
| `LvmTestCase.test_create_image_negative` | method | (self, mock_remove, mock_get, mock_create) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L939–L949` |
| `LvmTestCase.test_create_image_generated_negative` | method | (self, mock_remove, mock_create) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L953–L964` |
| `LvmTestCase.test_prealloc_image` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L966–L984` |
| `LvmTestCase.test_prealloc_image.fake_fetch` | function | (target, *args, **kwargs) | public | `` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L974) | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L973–L974` |
| `EncryptedLvmTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L987–L1337` |
| `EncryptedLvmTestCase.VG` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L988–L988` |
| `EncryptedLvmTestCase.TEMPLATE_SIZE` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L989–L989` |
| `EncryptedLvmTestCase.SIZE` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L990–L990` |
| `EncryptedLvmTestCase.setUp` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L992–L1017` |
| `EncryptedLvmTestCase._create_image` | method | (self, sparse) | private | not declared | 1/35 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1019–L1054` |
| `EncryptedLvmTestCase._create_image_generated` | method | (self, sparse) | private | not declared | 1/30 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1056–L1087` |
| `EncryptedLvmTestCase._create_image_resize` | method | (self, sparse) | private | not declared | 1/38 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1089–L1127` |
| `EncryptedLvmTestCase.test_create_image` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1129–L1130` |
| `EncryptedLvmTestCase.test_create_image_sparsed` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1132–L1134` |
| `EncryptedLvmTestCase.test_create_image_generated` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1136–L1137` |
| `EncryptedLvmTestCase.test_create_image_generated_sparsed` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1139–L1141` |
| `EncryptedLvmTestCase.test_create_image_resize` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1143–L1144` |
| `EncryptedLvmTestCase.test_create_image_resize_sparsed` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1146–L1148` |
| `EncryptedLvmTestCase.test_create_image_negative` | method | (self) | public | not declared | 1/35 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1150–L1186` |
| `EncryptedLvmTestCase.test_create_image_encrypt_negative` | method | (self) | public | not declared | 1/40 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1188–L1229` |
| `EncryptedLvmTestCase.test_create_image_generated_negative` | method | (self) | public | not declared | 1/40 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1231–L1272` |
| `EncryptedLvmTestCase.test_create_image_generated_encrypt_negative` | method | (self) | public | not declared | 1/37 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1274–L1312` |
| `EncryptedLvmTestCase.test_prealloc_image` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1314–L1331` |
| `EncryptedLvmTestCase.test_prealloc_image.fake_fetch` | function | (target, *args, **kwargs) | public | `` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1321) | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1320–L1321` |
| `EncryptedLvmTestCase.test_get_model` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1333–L1337` |
| `RbdTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1341–L2057` |
| `RbdTestCase.FSID` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1342–L1342` |
| `RbdTestCase.POOL` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1343–L1343` |
| `RbdTestCase.USER` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1344–L1344` |
| `RbdTestCase.CONF` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1345–L1345` |
| `RbdTestCase.SIZE` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1346–L1346` |
| `RbdTestCase.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1348–L1360` |
| `RbdTestCase.test_cache` | method | (self, mock_ensure, mock_img_exist, mock_os_exist) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1365–L1377` |
| `RbdTestCase.test_cache_base_dir_exists` | method | (self, mock_ensure, mock_img_exist, mock_os_exist) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1382–L1396` |
| `RbdTestCase.test_cache_image_exists` | method | (self, mock_img_exist, mock_os_exist) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1400–L1408` |
| `RbdTestCase.test_cache_template_exists` | method | (self, mock_img_exist, mock_os_exist) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1412–L1423` |
| `RbdTestCase.test_create_image` | method | (self, mock_exists) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1426–L1446` |
| `RbdTestCase.test__remove_non_raw_cache_image_not_exists` | method | (self, mock_exists, mock_qemu) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1450–L1454` |
| `RbdTestCase.test__remove_non_raw_cache_image_with_raw_cache` | method | (self, mock_exists, mock_qemu, mock_remove) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1460–L1465` |
| `RbdTestCase.test__remove_non_raw_cache_image_with_qcow2_cache` | method | (self, mock_exists, mock_qemu, mock_remove) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1471–L1476` |
| `RbdTestCase.test_create_image_resize` | method | (self, mock_exists, mock_get, mock_verify, mock_resize, mock_qemu) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1484–L1511` |
| `RbdTestCase.test_create_image_already_exists` | method | (self, mock_exists, mock_get, mock_qemu) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1517–L1532` |
| `RbdTestCase.test_prealloc_image` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1534–L1552` |
| `RbdTestCase.test_prealloc_image.fake_fetch` | function | (target, *args, **kwargs) | public | `` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1542) | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1541–L1542` |
| `RbdTestCase.test_parent_compatible` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1554–L1558` |
| `RbdTestCase.test_image_path` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1560–L1573` |
| `RbdTestCase.test_get_disk_size` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1575–L1581` |
| `RbdTestCase.test_create_image_too_small` | method | (self, mock_qemu) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1585–L1595` |
| `RbdTestCase.test_libvirt_info` | method | (self, mock_mon_addrs) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1598–L1605` |
| `RbdTestCase.test_libvirt_info.get_mon_addrs` | function | — | public | `hosts, ports` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1602) | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1599–L1602` |
| `RbdTestCase.test_libvirt_info_scsi_with_unit` | method | (self, disk_unit, mock_mon_addrs) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1609–L1616` |
| `RbdTestCase.test_libvirt_info_scsi_with_unit.get_mon_addrs` | function | — | public | `hosts, ports` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1613) | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1610–L1613` |
| `RbdTestCase.test_get_model` | method | (self, mock_mon_addrs) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1619–L1647` |
| `RbdTestCase.test_get_model.get_mon_addrs` | function | (strip_brackets=True) | public | `hosts, ports` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1636) | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1630–L1636` |
| `RbdTestCase.test_flatten` | method | (self, mock_flatten, mock_parent_info) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1651–L1656` |
| `RbdTestCase.test_flatten_already_flat` | method | (self, mock_flatten, mock_parent_info, mock_log) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1661–L1670` |
| `RbdTestCase.test_import_file` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1672–L1687` |
| `RbdTestCase.test_import_file._test` | function | (mock_import, mock_remove, mock_exists) | private | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1678–L1686` |
| `RbdTestCase.test_import_file_not_found` | method | (self, mock_import, mock_remove, mock_exists) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1692–L1702` |
| `RbdTestCase.test_get_parent_pool` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1704–L1710` |
| `RbdTestCase.test_get_parent_pool_no_parent_info` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1712–L1723` |
| `RbdTestCase.test_get_parent_pool_non_local_image` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1725–L1737` |
| `RbdTestCase.test_direct_snapshot` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1739–L1772` |
| `RbdTestCase.test_direct_snapshot_cleans_up_on_failures` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1774–L1796` |
| `RbdTestCase.test_cleanup_direct_snapshot` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1798–L1815` |
| `RbdTestCase.test_cleanup_direct_snapshot_destroy_volume` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1817–L1833` |
| `RbdTestCase.test_copy_to_store` | method | (self, mock_imgapi) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1836–L1860` |
| `RbdTestCase.test_copy_to_store_race_with_existing` | method | (self, mock_imgapi) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1863–L1890` |
| `RbdTestCase.test_copy_to_store_import_impossible` | method | (self, mock_imgapi) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1893–L1903` |
| `RbdTestCase.test_copy_to_store_import_failed_other_reason` | method | (self, mock_imgapi) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1906–L1917` |
| `RbdTestCase.test_copy_to_store_import_failed_in_progress` | method | (self, mock_imgapi) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1920–L1940` |
| `RbdTestCase.test_copy_to_store_import_failed_timeout` | method | (self, mock_imgapi, mock_timer_start) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1945–L1958` |
| `RbdTestCase.test_clone_copy_to_store` | method | (self, mock_imgapi, mock_driver_) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1962–L1985` |
| `RbdTestCase.test_clone_copy_to_store_failed` | method | (self, mock_imgapi, mock_driver_) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1989–L2014` |
| `RbdTestCase.test_clone_without_needed_copy` | method | (self, mock_imgapi, mock_driver_) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2018–L2035` |
| `RbdTestCase.test_clone_copy_not_configured` | method | (self, mock_imgapi, mock_driver_) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2039–L2057` |
| `PloopTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2060–L2131` |
| `PloopTestCase.SIZE` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2061–L2061` |
| `PloopTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2063–L2066` |
| `PloopTestCase.test_cache` | method | (self, mock_exists, mock_ensure) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2070–L2082` |
| `PloopTestCase.test_create_image` | method | (self, mock_extend, mock_ploop_restore_descriptor, mock_copy, mock_sync, mock_get) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2090–L2107` |
| `PloopTestCase.test_create_image_generated` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2109–L2114` |
| `PloopTestCase.test_prealloc_image` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2116–L2131` |
| `PloopTestCase.test_prealloc_image.fake_fetch` | function | (target, *args, **kwargs) | public | `` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2123) | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2122–L2123` |
| `BackendTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2134–L2210` |
| `BackendTestCase.INSTANCE` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2135–L2135` |
| `BackendTestCase.NAME` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2136–L2136` |
| `BackendTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2138–L2142` |
| `BackendTestCase.get_image` | method | (self, use_cow, image_type) | public | `imagebackend.Backend(use_cow).by_name(self.INSTANCE, self.NAME, image_type)` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2145) | 1/3 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2144–L2146` |
| `BackendTestCase._test_image` | method | (self, image_type, image_not_cow, image_cow) | private | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2148–L2159` |
| `BackendTestCase._test_image.assertIsInstance` | function | (instance, class_object) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2152–L2156` |
| `BackendTestCase.test_image_flat` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2161–L2162` |
| `BackendTestCase.test_image_flat_preallocate_images` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2164–L2167` |
| `BackendTestCase.test_image_flat_native_io` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2169–L2172` |
| `BackendTestCase.test_image_qcow2` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2174–L2175` |
| `BackendTestCase.test_image_qcow2_preallocate_images` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2177–L2180` |
| `BackendTestCase.test_image_qcow2_native_io` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2182–L2185` |
| `BackendTestCase.test_image_lvm_native_io` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2187–L2194` |
| `BackendTestCase.test_image_lvm_native_io._test_native_io` | function | (is_sparse, driver_io) | private | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2188–L2192` |
| `BackendTestCase.test_image_lvm` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2196–L2198` |
| `BackendTestCase.test_image_rbd` | method | (self, mock_rados, mock_rbd) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2202–L2207` |
| `BackendTestCase.test_image_default` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2209–L2210` |
| `UtimeWorkaroundTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2213–L2251` |
| `UtimeWorkaroundTestCase.ERROR_STUB` | constant | — | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2214–L2214` |
| `UtimeWorkaroundTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2216–L2219` |
| `UtimeWorkaroundTestCase.test_update_utime_no_error` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2221–L2225` |
| `UtimeWorkaroundTestCase.test_update_utime_eacces` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2227–L2236` |
| `UtimeWorkaroundTestCase.test_update_utime_eio` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2238–L2251` |

## Dependencies

- `import base64` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L16)
- `import errno` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L17)
- `import inspect` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L18)
- `import os` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L19)
- `import shutil` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L20)
- `import tempfile` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L21)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L22)
- `castellan`: imports `key_manager` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L24)
- `import ddt` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L25)
- `import fixtures` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L26)
- `oslo_concurrency`: imports `lockutils` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L27)
- `oslo_config`: imports `fixture as config_fixture` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L28)
- `oslo_service`: imports `loopingcall` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L29)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L30)
- `oslo_utils`: imports `imageutils` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L31)
- `oslo_utils.imageutils`: imports `format_inspector` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L32)
- `oslo_utils`: imports `units` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L33)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L34)
- `nova.compute`: imports `utils as compute_utils` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L36)
- `import nova.conf` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L37)
- `nova`: imports `context` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L38)
- `nova`: imports `exception` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L39)
- `nova`: imports `objects` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L40)
- `nova.storage`: imports `rbd_utils` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L41)
- `nova`: imports `test` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L42)
- `nova.tests.unit`: imports `fake_processutils` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L43)
- `nova.virt.image`: imports `model as imgmodel` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L44)
- `nova.virt`: imports `images` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L45)
- `nova.virt.libvirt`: imports `config as vconfig` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L46)
- `nova.virt.libvirt`: imports `imagebackend` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L47)
- `nova.virt.libvirt`: imports `utils as libvirt_utils` (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L48)

## Side Effects

- **file-io**: self.INSTANCES_PATH = tempfile.mkdtemp(suffix='instances') (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L76)
- **file-io**: self.DISK_INFO_PATH = os.path.join(self.INSTANCES_PATH, (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L81)
- **file-io**: self.PATH = os.path.join( (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L87)
- **file-io**: self.TEMPLATE_DIR = os.path.join(CONF.instances_path, '_base') (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L92)
- **file-io**: self.TEMPLATE_PATH = os.path.join(self.TEMPLATE_DIR, 'template') (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L93)
- **file-io**: shutil.rmtree(self.INSTANCES_PATH) (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L106)
- **file-io**: self.stub_out('os.path.exists', lambda _: True) (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L118)
- **file-io**: self.stub_out('os.path.exists', lambda _: True) (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L145)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L339)
- **file-io**: base_dir = os.path.join(CONF.instances_path, (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L347)
- **process-spawn**: @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L408)
- **process-spawn**: @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L441)
- **process-spawn**: @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L571)
- **process-spawn**: @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L605)
- **process-spawn**: @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L635)
- **process-spawn**: @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L676)
- **file-io**: self.PATH = os.path.join('/dev', self.VG, self.LV) (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L754)
- **process-spawn**: @mock.patch('nova.privsep.utils.supports_direct_io', return_value=True) (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L757)
- **process-spawn**: @mock.patch('nova.privsep.qemu.convert_image') (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L761)
- **process-spawn**: @mock.patch('nova.privsep.utils.supports_direct_io', return_value=True) (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L795)
- **process-spawn**: @mock.patch('nova.privsep.qemu.convert_image') (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L800)
- **file-io**: @mock.patch('os.path.exists', autospec=True) (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L863)
- **file-io**: exists.add(os.path.join('/dev', vg, lv)) (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L891)
- **file-io**: self.stub_out('os.path.exists', lambda _: True) (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L976)
- **file-io**: self.LV_PATH = os.path.join('/dev', self.VG, self.LV) (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1004)
- **file-io**: self.PATH = os.path.join('/dev/mapper', (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1005)
- **process-spawn**: mock.patch('nova.privsep.utils.supports_direct_io', (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1021)
- **process-spawn**: mock.patch('nova.privsep.qemu.convert_image'), (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1031)
- **process-spawn**: nova.privsep.qemu.convert_image.assert_called_with( (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1051)
- **process-spawn**: mock.patch('nova.privsep.qemu.convert_image')): (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1066)
- **process-spawn**: mock.patch('nova.privsep.utils.supports_direct_io', (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1091)
- **process-spawn**: mock.patch('nova.privsep.qemu.convert_image'), (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1101)
- **process-spawn**: nova.privsep.qemu.convert_image.assert_called_with( (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1123)
- **file-io**: self.stub_out('os.path.exists', lambda _: True) (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1323)
- **file-io**: self.stub_out('os.path.exists', lambda _: True) (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1544)
- **process-spawn**: @mock.patch('nova.privsep.libvirt.ploop_restore_descriptor') (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2088)
- **file-io**: img_path = os.path.join(self.PATH, "root.hds") (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2094)
- **file-io**: self.stub_out('os.path.exists', lambda _: True) (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2125)
- **process-spawn**: fixtures.MockPatch('nova.privsep.path.utime')).mock (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2219)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L50)
- **global-mutation**: SIZE = 1024 (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L272)
- **global-mutation**: SIZE = units.Gi (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L494)
- **global-mutation**: VG = 'FakeVG' (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L743)
- **global-mutation**: TEMPLATE_SIZE = 512 (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L744)
- **global-mutation**: SIZE = 1024 (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L745)
- **global-mutation**: VG = 'FakeVG' (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L988)
- **global-mutation**: TEMPLATE_SIZE = 512 (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L989)
- **global-mutation**: SIZE = 1024 (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L990)
- **global-mutation**: FSID = "FakeFsID" (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1342)
- **global-mutation**: POOL = "FakePool" (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1343)
- **global-mutation**: USER = "FakeUser" (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1344)
- **global-mutation**: CONF = "FakeConf" (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1345)
- **global-mutation**: SIZE = 1024 (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1346)
- **global-mutation**: SIZE = 1024 (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2061)
- **global-mutation**: INSTANCE = objects.Instance(id=1, uuid=uuidutils.generate_uuid()) (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2135)
- **global-mutation**: NAME = 'fake-name.suffix' (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2136)
- **global-mutation**: ERROR_STUB = "sentinel.path: [Errno 13] Permission Denied" (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2214)

## Security Surface

- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L408)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L441)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L571)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L605)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L635)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L676)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.utils.supports_direct_io', return_value=True) (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L757)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.qemu.convert_image') (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L761)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.utils.supports_direct_io', return_value=True) (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L795)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.qemu.convert_image') (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L800)
- **privilege** (`privsep-entrypoint`): mock.patch('nova.privsep.utils.supports_direct_io', (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1021)
- **privilege** (`privsep-entrypoint`): mock.patch('nova.privsep.qemu.convert_image'), (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1031)
- **privilege** (`privsep-entrypoint`): nova.privsep.qemu.convert_image.assert_called_with( (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1051)
- **privilege** (`privsep-entrypoint`): mock.patch('nova.privsep.qemu.convert_image')): (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1066)
- **privilege** (`privsep-entrypoint`): mock.patch('nova.privsep.utils.supports_direct_io', (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1091)
- **privilege** (`privsep-entrypoint`): mock.patch('nova.privsep.qemu.convert_image'), (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1101)
- **privilege** (`privsep-entrypoint`): nova.privsep.qemu.convert_image.assert_called_with( (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L1123)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.libvirt.ploop_restore_descriptor') (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2088)
- **privilege** (`privsep-entrypoint`): fixtures.MockPatch('nova.privsep.path.utime')).mock (src/nova/tests/unit/virt/libvirt/test_imagebackend.py:L2219)

