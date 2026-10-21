# src/nova/tests/unit/virt/libvirt/test_imagecache.py

## Overview

This file implements the `test_imagecache` module, defining 2 classs, 1 constant, 12 functions, 32 methods, 18 imports, 85 side effects, 10 security surface entries.

Lines: total 802, code 591, comment 47, blank 164

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L38–L38` |
| `intercept_log_messages` | function | — | exported | not declared | 2/10 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L42–L51` |
| `GetCacheFnameTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L54–L68` |
| `GetCacheFnameTestCase.test_get_cache_fname` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L55–L68` |
| `ImageCacheManagerTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L71–L802` |
| `ImageCacheManagerTestCase.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L73–L78` |
| `ImageCacheManagerTestCase.test_get_age_of_file` | method | (self, mock_getmtime, mock_time, mock_exists) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L83–L87` |
| `ImageCacheManagerTestCase.test_get_age_of_file_not_exists` | method | (self, mock_exists) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L90–L94` |
| `ImageCacheManagerTestCase.test_list_base_images` | method | (self) | public | not declared | 3/46 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L96–L154` |
| `ImageCacheManagerTestCase.test_list_backing_images_small` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L156–L176` |
| `ImageCacheManagerTestCase.test_list_backing_images_resized` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L178–L200` |
| `ImageCacheManagerTestCase.test_list_backing_images_instancename` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L202–L221` |
| `ImageCacheManagerTestCase.test_list_backing_images_disk_notexist` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L223–L240` |
| `ImageCacheManagerTestCase.test_list_backing_images_disk_notexist.fake_get_disk` | function | (disk_path) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L229–L230` |
| `ImageCacheManagerTestCase.test_find_base_file_nothing` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L242–L250` |
| `ImageCacheManagerTestCase.test_find_base_file_small` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L252–L262` |
| `ImageCacheManagerTestCase.test_find_base_file_resized` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L264–L282` |
| `ImageCacheManagerTestCase.test_find_base_file_all` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L284–L304` |
| `ImageCacheManagerTestCase._make_base_file` | method | (self, lock=True) | private | not declared | 2/17 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L307–L328` |
| `ImageCacheManagerTestCase.test_remove_base_file` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L330–L348` |
| `ImageCacheManagerTestCase.test_remove_base_file_original` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L350–L369` |
| `ImageCacheManagerTestCase.test_remove_base_file_dne` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L371–L379` |
| `ImageCacheManagerTestCase.test_remove_base_file_oserror` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L381–L397` |
| `ImageCacheManagerTestCase.test_mark_in_use` | method | (self, mock_utime) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L400–L411` |
| `ImageCacheManagerTestCase.test_verify_base_images` | method | (self, mock_lock, mock_utime) | public | not declared | 4/72 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L415–L577` |
| `ImageCacheManagerTestCase.test_verify_base_images.fq_path` | function | (path) | public | `os.path.join('/instance_path/_base/', path)` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L437) | — | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L436–L437` |
| `ImageCacheManagerTestCase.test_verify_base_images.exists` | function | (path) | public | `orig_exists(path)` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L445); `True` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L452); `True` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L456); `False` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L462) | — | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L442–L464` |
| `ImageCacheManagerTestCase.test_verify_base_images.listdir` | function | (path) | public | `orig_listdir(path)` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L474); `['instance-1', 'instance-2', 'instance-3', '_base']` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L477); `base_file_list` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L480) | — | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L471–L482` |
| `ImageCacheManagerTestCase.test_verify_base_images.isfile` | function | (path) | public | `orig_isfile(path)` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L492); `True` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L496) | — | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L489–L498` |
| `ImageCacheManagerTestCase.test_verify_base_images.get_disk_backing_file` | function | (path) | public | `fq_path('%s_5368709120' % hashed_1)` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L525) | — | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L522–L526` |
| `ImageCacheManagerTestCase.test_verify_base_images.getmtime` | function | (path) | public | `orig_getmtime(path)` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L536); `1000000` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L538) | — | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L534–L538` |
| `ImageCacheManagerTestCase.test_verify_base_images.remove` | function | (path) | public | `orig_remove(path)` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L547); `` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L550) | — | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L545–L550` |
| `ImageCacheManagerTestCase.test_verify_base_images_no_base` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L579–L582` |
| `ImageCacheManagerTestCase.test_run_image_cache_manager_pass` | method | (self, mock_instance_list) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L585–L612` |
| `ImageCacheManagerTestCase.test_run_image_cache_manager_pass.fake_instances` | function | (ctxt) | public | `objects.instance._make_instance_list( ctxt, objects.InstanceList(), instances, None)` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L597) | — | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L587–L598` |
| `ImageCacheManagerTestCase.test_store_swap_image` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L614–L625` |
| `ImageCacheManagerTestCase.test_store_ephemeral_image` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L627–L638` |
| `ImageCacheManagerTestCase.test_age_and_verify_swap_images` | method | (self, mock_utime, mock_remove, mock_getmtime, mock_exist, mock_lock) | public | not declared | 2/18 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L645–L676` |
| `ImageCacheManagerTestCase.test_age_and_verify_swap_images.removefile` | function | (path) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L664–L670` |
| `ImageCacheManagerTestCase.test_age_and_verify_ephemeral_images` | method | (self, mock_utime, mock_remove, mock_getmtime, mock_exist, mock_lock) | public | not declared | 2/18 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L683–L706` |
| `ImageCacheManagerTestCase.test_age_and_verify_ephemeral_images.removefile` | function | (path) | public | not declared | — | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L697–L702` |
| `ImageCacheManagerTestCase.test_lock_acquired_on_removing_old_enough_files` | method | (self, mock_get_age, mock_synchronized) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L711–L720` |
| `ImageCacheManagerTestCase.test_get_disk_usage_cache_is_on_different_disk` | method | (self, mock_stat) | public | not declared | 1/10 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L723–L734` |
| `ImageCacheManagerTestCase.test_get_disk_usage_empty` | method | (self, mock_stat, mock_listdir) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L738–L744` |
| `ImageCacheManagerTestCase.test_get_disk_usage_cache_dir_missing` | method | (self, mock_listdir, mock_stat) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L748–L754` |
| `ImageCacheManagerTestCase.test_get_disk_usage` | method | (self, mock_stat, mock_listdir, mock_isfile) | public | not declared | 1/15 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L759–L778` |
| `ImageCacheManagerTestCase.test_get_disk_usage_io_error_while_reading` | method | (self, mock_stat, mock_listdir, mock_isfile) | public | not declared | 1/16 | `src/nova/tests/unit/virt/libvirt/test_imagecache.py:L783–L802` |

## Dependencies

- `import contextlib` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L17)
- `import io` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L18)
- `import os` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L19)
- `import time` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L20)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L21)
- `oslo_concurrency`: imports `lockutils` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L23)
- `oslo_concurrency`: imports `processutils` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L24)
- `oslo_log`: imports `formatters` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L25)
- `oslo_log`: imports `log as logging` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L26)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L27)
- `nova.compute`: imports `manager as compute_manager` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L29)
- `import nova.conf` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L30)
- `nova`: imports `context` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L31)
- `nova`: imports `objects` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L32)
- `nova`: imports `test` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L33)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L34)
- `nova`: imports `utils` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L35)
- `nova.virt.libvirt`: imports `imagecache` (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L36)

## Side Effects

- **file-io**: self.stub_out('os.listdir', lambda x: listing) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L109)
- **file-io**: self.stub_out('os.path.isfile', lambda x: True) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L110)
- **file-io**: expected = os.path.join(base_dir, (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L124)
- **file-io**: expected = os.path.join(base_dir, (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L128)
- **file-io**: unexpected = os.path.join(base_dir, '00000004') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L133)
- **file-io**: expected = os.path.join(base_dir, (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L141)
- **file-io**: unexpected = os.path.join(base_dir, (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L145)
- **file-io**: self.stub_out('os.listdir', (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L157)
- **file-io**: self.stub_out('os.path.exists', (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L160)
- **file-io**: found = os.path.join(CONF.instances_path, (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L165)
- **file-io**: self.stub_out('os.listdir', (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L179)
- **file-io**: self.stub_out('os.path.exists', (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L182)
- **file-io**: found = os.path.join(CONF.instances_path, (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L188)
- **file-io**: self.stub_out('os.listdir', (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L203)
- **file-io**: self.stub_out('os.path.exists', (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L205)
- **file-io**: found = os.path.join(CONF.instances_path, (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L210)
- **file-io**: self.stub_out('os.listdir', (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L224)
- **file-io**: self.stub_out('os.path.exists', (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L226)
- **file-io**: self.stub_out('os.path.exists', lambda x: False) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L243)
- **file-io**: self.stub_out('os.path.exists', (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L254)
- **file-io**: base_file = os.path.join(base_dir, fingerprint + '_sm') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L261)
- **file-io**: self.stub_out('os.listdir', lambda x: listing) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L271)
- **file-io**: self.stub_out('os.path.exists', (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L272)
- **file-io**: self.stub_out('os.path.isfile', lambda x: True) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L274)
- **file-io**: base_file = os.path.join(base_dir, fingerprint + '_10737418240') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L281)
- **file-io**: self.stub_out('os.listdir', lambda x: listing) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L292)
- **file-io**: self.stub_out('os.path.exists', lambda x: True) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L293)
- **file-io**: self.stub_out('os.path.isfile', lambda x: True) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L294)
- **file-io**: base_file1 = os.path.join(base_dir, fingerprint) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L301)
- **file-io**: base_file2 = os.path.join(base_dir, fingerprint + '_sm') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L302)
- **file-io**: base_file3 = os.path.join(base_dir, fingerprint + '_10737418240') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L303)
- **file-io**: fname = os.path.join(tmpdir, 'aaa') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L312)
- **file-io**: base_file = open(fname, 'w') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L314)
- **file-io**: lockdir = os.path.join(tmpdir, 'locks') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L319)
- **file-io**: lockname = os.path.join(lockdir, 'nova-aaa') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L320)
- **file-io**: lock_file = open(lockname, 'w') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L322)
- **file-io**: base_file = open(fname, 'r') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L326)
- **file-io**: lock_name = 'nova-' + os.path.split(fname)[-1] (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L335)
- **file-io**: lock_dir = os.path.join(CONF.instances_path, 'locks') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L336)
- **file-io**: lock_file = os.path.join(lock_dir, lock_name) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L337)
- **file-io**: self.assertTrue(os.path.exists(fname)) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L340)
- **file-io**: self.assertTrue(os.path.exists(lock_file)) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L341)
- **file-io**: self.assertFalse(os.path.exists(fname)) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L347)
- **file-io**: self.assertFalse(os.path.exists(lock_file)) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L348)
- **file-io**: self.assertTrue(os.path.exists(fname)) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L357)
- **file-io**: self.assertTrue(os.path.exists(fname)) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L363)
- **file-io**: self.assertFalse(os.path.exists(fname)) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L369)
- **file-io**: fname = os.path.join(tmpdir, 'aaa') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L377)
- **file-io**: fname = os.path.join(tmpdir, 'aaa') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L386)
- **file-io**: self.assertTrue(os.path.exists(fname)) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L395)
- **process-spawn**: @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L399)
- **process-spawn**: @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L413)
- **file-io**: return os.path.join('/instance_path/_base/', path) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L437)
- **file-io**: orig_exists = os.path.exists (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L440)
- **file-io**: self.stub_out('os.path.exists', lambda x: exists(x)) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L466)
- **file-io**: orig_listdir = os.listdir (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L469)
- **file-io**: self.stub_out('os.listdir', lambda x: listdir(x)) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L484)
- **file-io**: orig_isfile = os.path.isfile (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L487)
- **file-io**: self.stub_out('os.path.isfile', lambda x: isfile(x)) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L500)
- **file-io**: orig_getmtime = os.path.getmtime (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L532)
- **file-io**: self.stub_out('os.path.getmtime', lambda x: getmtime(x)) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L540)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L641)
- **file-io**: @mock.patch('os.path.getmtime') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L642)
- **process-spawn**: @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L644)
- **file-io**: lambda path: os.path.dirname(path) == base_dir and \ (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L661)
- **file-io**: os.path.basename(path) in expected_exist (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L662)
- **file-io**: self.assertEqual(base_dir, os.path.dirname(path), (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L665)
- **file-io**: fn = os.path.basename(path) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L668)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L679)
- **file-io**: @mock.patch('os.path.getmtime') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L680)
- **process-spawn**: @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L682)
- **file-io**: lambda path: os.path.dirname(path) == base_dir and \ (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L694)
- **file-io**: os.path.basename(path) in expected_exist (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L695)
- **file-io**: self.assertEqual(base_dir, os.path.dirname(path), (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L698)
- **file-io**: fn = os.path.basename(path) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L700)
- **file-io**: lock_path = os.path.join(CONF.instances_path, 'locks') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L714)
- **file-io**: lock_file = os.path.split(base_file)[-1] (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L715)
- **file-io**: os.path.join( (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L732)
- **file-io**: @mock.patch('os.listdir') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L736)
- **file-io**: @mock.patch('os.listdir') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L747)
- **file-io**: @mock.patch('os.path.isfile') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L756)
- **file-io**: @mock.patch('os.listdir') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L757)
- **file-io**: @mock.patch('os.path.isfile') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L780)
- **file-io**: @mock.patch('os.listdir') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L781)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L38)

## Security Surface

- **sink** (`file-write`): base_file = open(fname, 'w') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L314)
- **sink** (`file-write`): base_file.write('data') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L315)
- **sink** (`file-write`): lock_file = open(lockname, 'w') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L322)
- **sink** (`file-write`): lock_file.write('data') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L323)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L399)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L413)
- **sink** (`db-write`): image_cache_manager.update(ctxt, all_instances) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L560)
- **sink** (`db-write`): image_cache_manager.update(None, []) (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L582)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L644)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.path.utime') (src/nova/tests/unit/virt/libvirt/test_imagecache.py:L682)

