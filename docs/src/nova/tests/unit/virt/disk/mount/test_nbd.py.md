# src/nova/tests/unit/virt/disk/mount/test_nbd.py

## Overview

This file implements the `test_nbd` module, defining 2 classs, 2 constants, 13 functions, 17 methods, 9 imports, 36 side effects, 12 security surface entries.

Lines: total 334, code 231, comment 41, blank 62

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ORIG_EXISTS` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L29–L29` |
| `ORIG_LISTDIR` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L30–L30` |
| `_fake_exists_no_users` | function | (path) | unexported | `False` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L36); `True` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L37); `ORIG_EXISTS(path)` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L38) | 3/6 | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L33–L38` |
| `_fake_listdir_nbd_devices` | function | (path) | unexported | `['nbd0', 'nbd1']` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L43); `ORIG_LISTDIR(path)` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L44) | 3/4 | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L41–L44` |
| `_fake_exists_all_used` | function | (path) | unexported | `True` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L49); `ORIG_EXISTS(path)` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L50) | 2/4 | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L47–L50` |
| `_fake_detect_nbd_devices_none` | function | — | unexported | `[]` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L54) | 1/2 | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L53–L54` |
| `_fake_detect_nbd_devices` | function | — | unexported | `['nbd0', 'nbd1']` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L58) | 1/2 | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L57–L58` |
| `_fake_noop` | function | (*args, **kwargs) | unexported | `` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L62) | 1/2 | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L61–L62` |
| `NbdTestCaseNoStub` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L65–L84` |
| `NbdTestCaseNoStub.test_detect_nbd_devices` | method | (self, list_dir_mock) | public | not declared | 2/8 | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L68–L75` |
| `NbdTestCaseNoStub.test_detect_nbd_devices_empty` | method | (self, list_dir_mock) | public | not declared | 1/7 | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L78–L84` |
| `NbdTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L87–L334` |
| `NbdTestCase.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L88–L95` |
| `NbdTestCase.test_nbd_no_devices` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L97–L102` |
| `NbdTestCase.test_nbd_no_free_devices` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L104–L109` |
| `NbdTestCase.test_nbd_not_loaded` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L111–L126` |
| `NbdTestCase.test_nbd_not_loaded.fake_exists` | function | (path) | public | `False` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L118); `ORIG_EXISTS(path)` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L119) | — | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L116–L119` |
| `NbdTestCase.test_nbd_allocation` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L128–L136` |
| `NbdTestCase.test_nbd_allocation_one_in_use` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L138–L158` |
| `NbdTestCase.test_nbd_allocation_one_in_use.fake_exists` | function | (path) | public | `True` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L147); `False` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L149); `True` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L150); `ORIG_EXISTS(path)` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L151) | — | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L144–L151` |
| `NbdTestCase.test_inner_get_dev_no_devices` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L160–L165` |
| `NbdTestCase.test_inner_get_dev_qemu_fails` | method | (self, mock_nbd_connect) | public | not declared | 1/7 | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L168–L176` |
| `NbdTestCase.test_inner_get_dev_qemu_timeout` | method | (self, mock_sleep, mock_nbd_disconnct, mock_nbd_connect, mock_listdir, mock_shuffle) | public | not declared | 1/10 | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L183–L195` |
| `NbdTestCase.test_inner_get_dev_works` | method | (self, mock_nbd_disconnect, mock_nbd_connect, mock_exists, mock_listdir, mock_shuffle) | public | not declared | 1/12 | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L204–L219` |
| `NbdTestCase.test_unget_dev_simple` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L221–L226` |
| `NbdTestCase.test_get_dev` | method | (self, mock_nbd_disconnect, mock_nbd_connect, mock_exists, mock_listdir, mock_shuffle) | public | not declared | 1/12 | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L235–L250` |
| `NbdTestCase.test_get_dev_timeout` | method | (self, mock_get_dev, mock_exists, mock_nbd_disconnect, mock_nbd_connect, mock_sleep, mock_shuffle) | public | not declared | 1/8 | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L259–L268` |
| `NbdTestCase.test_do_mount_need_to_specify_fs_type` | method | (self, mock_mount) | public | not declared | 1/11 | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L271–L286` |
| `NbdTestCase.test_do_mount_need_to_specify_fs_type.fake_returns_true` | function | (*args, **kwargs) | public | `True` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L280) | — | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L279–L280` |
| `NbdTestCase.test_device_creation_race` | method | (self, mock_exists, mock_nbd_disconnect, mock_nbd_connect) | public | not declared | 1/19 | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L291–L334` |
| `NbdTestCase.test_device_creation_race.fake_find_unused` | function | (self) | public | `os.path.join('/dev', free_devices[-1])` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L301) | — | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L300–L301` |
| `NbdTestCase.test_device_creation_race.delay_and_remove_device` | function | (*args, **kwargs) | public | `'', ''` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L312) | — | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L303–L312` |
| `NbdTestCase.test_device_creation_race.pid_exists` | function | (pidfile) | public | `pidfile not in [os.path.join('/sys/block', dev, 'pid') for dev in free_devices]` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L315) | — | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L314–L316` |
| `NbdTestCase.test_device_creation_race.get_a_device` | function | — | public | not declared | — | `src/nova/tests/unit/virt/disk/mount/test_nbd.py:L323–L326` |

## Dependencies

- `import os` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L17)
- `import tempfile` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L18)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L19)
- `import fixtures` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L21)
- `nova`: imports `test` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L23)
- `nova`: imports `thread_pool_factory` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L24)
- `nova`: imports `utils` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L25)
- `nova.virt.disk.mount`: imports `nbd` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L26)
- `nova.virt.image`: imports `model as imgmodel` (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L27)

## Side Effects

- **file-io**: ORIG_EXISTS = os.path.exists (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L29)
- **file-io**: ORIG_LISTDIR = os.listdir (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L30)
- **file-io**: @mock.patch('os.listdir') (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L67)
- **file-io**: @mock.patch('os.listdir') (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L77)
- **file-io**: self.useFixture(fixtures.MonkeyPatch('os.listdir', (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L92)
- **file-io**: self.useFixture(fixtures.MonkeyPatch('os.path.exists', (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L107)
- **file-io**: self.useFixture(fixtures.MonkeyPatch('os.path.exists', fake_exists)) (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L120)
- **file-io**: self.useFixture(fixtures.MonkeyPatch('os.path.exists', (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L131)
- **file-io**: self.useFixture(fixtures.MonkeyPatch('os.path.exists', fake_exists)) (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L152)
- **process-spawn**: @mock.patch('nova.privsep.fs.nbd_connect', return_value=('', 'broken')) (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L167)
- **file-io**: self.useFixture(fixtures.MonkeyPatch('os.path.exists', (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L171)
- **file-io**: @mock.patch('os.listdir', return_value=['nbd0', 'nbd1', 'loop0']) (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L179)
- **process-spawn**: @mock.patch('nova.privsep.fs.nbd_connect', return_value=('', '')) (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L180)
- **process-spawn**: @mock.patch('nova.privsep.fs.nbd_disconnect', return_value=('', '')) (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L181)
- **file-io**: with mock.patch('os.path.exists', side_effect=[ (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L189)
- **file-io**: @mock.patch('os.path.exists', side_effect=[True, False, False, False, (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L199)
- **file-io**: @mock.patch('os.listdir', return_value=['nbd0', 'nbd1', 'loop0']) (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L201)
- **process-spawn**: @mock.patch('nova.privsep.fs.nbd_connect', return_value=('', '')) (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L202)
- **process-spawn**: @mock.patch('nova.privsep.fs.nbd_disconnect') (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L203)
- **file-io**: @mock.patch('os.path.exists', side_effect=[True, False, False, False, (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L230)
- **file-io**: @mock.patch('os.listdir', return_value=['nbd0', 'nbd1', 'loop0']) (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L232)
- **process-spawn**: @mock.patch('nova.privsep.fs.nbd_connect', return_value=('', '')) (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L233)
- **process-spawn**: @mock.patch('nova.privsep.fs.nbd_disconnect') (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L234)
- **process-spawn**: @mock.patch('nova.privsep.fs.nbd_connect') (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L254)
- **process-spawn**: @mock.patch('nova.privsep.fs.nbd_disconnect') (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L255)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L256)
- **process-spawn**: @mock.patch('nova.privsep.fs.mount', return_value=('', 'broken')) (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L270)
- **file-io**: imgfile = tempfile.NamedTemporaryFile() (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L274)
- **syscall**: self.assertFalse(mount.do_mount()) (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L284)
- **process-spawn**: @mock.patch('nova.privsep.fs.nbd_connect') (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L288)
- **process-spawn**: @mock.patch('nova.privsep.fs.nbd_disconnect') (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L289)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L290)
- **file-io**: return os.path.join('/dev', free_devices[-1]) (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L301)
- **file-io**: return pidfile not in [os.path.join('/sys/block', dev, 'pid') (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L315)
- **global-mutation**: ORIG_EXISTS = os.path.exists (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L29)
- **global-mutation**: ORIG_LISTDIR = os.listdir (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L30)

## Security Surface

- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.nbd_connect', return_value=('', 'broken')) (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L167)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.nbd_connect', return_value=('', '')) (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L180)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.nbd_disconnect', return_value=('', '')) (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L181)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.nbd_connect', return_value=('', '')) (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L202)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.nbd_disconnect') (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L203)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.nbd_connect', return_value=('', '')) (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L233)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.nbd_disconnect') (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L234)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.nbd_connect') (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L254)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.nbd_disconnect') (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L255)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.mount', return_value=('', 'broken')) (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L270)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.nbd_connect') (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L288)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.nbd_disconnect') (src/nova/tests/unit/virt/disk/mount/test_nbd.py:L289)

