# src/nova/tests/unit/virt/disk/mount/test_loop.py

## Overview

This file implements the `test_loop` module, defining 1 class, 2 functions, 5 methods, 5 imports, 5 side effects, 5 security surface entries.

Lines: total 95, code 52, comment 22, blank 21

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_fake_noop` | function | (*args, **kwargs) | unexported | `` (src/nova/tests/unit/virt/disk/mount/test_loop.py:L27) | 1/2 | `src/nova/tests/unit/virt/disk/mount/test_loop.py:L26–L27` |
| `LoopTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/disk/mount/test_loop.py:L30–L95` |
| `LoopTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/disk/mount/test_loop.py:L31–L35` |
| `LoopTestCase.test_get_dev` | method | (self, mock_loopremove, mock_loopsetup) | public | not declared | 1/11 | `src/nova/tests/unit/virt/disk/mount/test_loop.py:L39–L53` |
| `LoopTestCase.test_inner_get_dev_fails` | method | (self, mock_loopsetup) | public | not declared | 1/10 | `src/nova/tests/unit/virt/disk/mount/test_loop.py:L56–L69` |
| `LoopTestCase.test_get_dev_timeout` | method | (self, mock_loopsetup) | public | not declared | 1/9 | `src/nova/tests/unit/virt/disk/mount/test_loop.py:L72–L86` |
| `LoopTestCase.test_get_dev_timeout.fake_get_dev_fails` | function | — | public | `False` (src/nova/tests/unit/virt/disk/mount/test_loop.py:L81) | — | `src/nova/tests/unit/virt/disk/mount/test_loop.py:L80–L81` |
| `LoopTestCase.test_unget_dev` | method | (self, mock_loopremove) | public | not declared | 1/4 | `src/nova/tests/unit/virt/disk/mount/test_loop.py:L89–L95` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/virt/disk/mount/test_loop.py:L17)
- `import fixtures` (src/nova/tests/unit/virt/disk/mount/test_loop.py:L19)
- `nova`: imports `test` (src/nova/tests/unit/virt/disk/mount/test_loop.py:L21)
- `nova.virt.disk.mount`: imports `loop` (src/nova/tests/unit/virt/disk/mount/test_loop.py:L22)
- `nova.virt.image`: imports `model as imgmodel` (src/nova/tests/unit/virt/disk/mount/test_loop.py:L23)

## Side Effects

- **process-spawn**: @mock.patch('nova.privsep.fs.loopsetup', return_value=('/dev/loop0', '')) (src/nova/tests/unit/virt/disk/mount/test_loop.py:L37)
- **process-spawn**: @mock.patch('nova.privsep.fs.loopremove') (src/nova/tests/unit/virt/disk/mount/test_loop.py:L38)
- **process-spawn**: @mock.patch('nova.privsep.fs.loopsetup', return_value=('', 'doh')) (src/nova/tests/unit/virt/disk/mount/test_loop.py:L55)
- **process-spawn**: @mock.patch('nova.privsep.fs.loopsetup', return_value=('', 'doh')) (src/nova/tests/unit/virt/disk/mount/test_loop.py:L71)
- **process-spawn**: @mock.patch('nova.privsep.fs.loopremove') (src/nova/tests/unit/virt/disk/mount/test_loop.py:L88)

## Security Surface

- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.loopsetup', return_value=('/dev/loop0', '')) (src/nova/tests/unit/virt/disk/mount/test_loop.py:L37)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.loopremove') (src/nova/tests/unit/virt/disk/mount/test_loop.py:L38)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.loopsetup', return_value=('', 'doh')) (src/nova/tests/unit/virt/disk/mount/test_loop.py:L55)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.loopsetup', return_value=('', 'doh')) (src/nova/tests/unit/virt/disk/mount/test_loop.py:L71)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.fs.loopremove') (src/nova/tests/unit/virt/disk/mount/test_loop.py:L88)

