# src/nova/tests/fixtures/filesystem.py

## Overview

This file implements the `filesystem` module, defining 2 classs, 1 constant, 3 methods, 7 imports, 11 side effects.

Lines: total 88, code 55, comment 17, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SYS` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/filesystem.py:L24–L24` |
| `TempFileSystemFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/filesystem.py:L27–L38` |
| `TempFileSystemFixture._setUp` | method | (self) | private | not declared | 1/3 | `src/nova/tests/fixtures/filesystem.py:L30–L38` |
| `SysFileSystemFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/filesystem.py:L41–L88` |
| `SysFileSystemFixture.__init__` | method | (self, cpus_supported=None, cpufreq_enabled=True) | public | not declared | 2/3 | `src/nova/tests/fixtures/filesystem.py:L42–L49` |
| `SysFileSystemFixture._setUp` | method | (self) | private | not declared | 3/34 | `src/nova/tests/fixtures/filesystem.py:L51–L88` |

## Dependencies

- `import os` (src/nova/tests/fixtures/filesystem.py:L13)
- `import shutil` (src/nova/tests/fixtures/filesystem.py:L14)
- `import tempfile` (src/nova/tests/fixtures/filesystem.py:L15)
- `unittest`: imports `mock` (src/nova/tests/fixtures/filesystem.py:L16)
- `import fixtures` (src/nova/tests/fixtures/filesystem.py:L18)
- `nova`: imports `filesystem` (src/nova/tests/fixtures/filesystem.py:L20)
- `nova.virt.libvirt.cpu`: imports `core` (src/nova/tests/fixtures/filesystem.py:L21)

## Side Effects

- **file-io**: self.temp_dir = tempfile.TemporaryDirectory(prefix='fake_fs') (src/nova/tests/fixtures/filesystem.py:L31)
- **file-io**: self.sys_path = os.path.join(self.temp_dir.name, SYS) (src/nova/tests/fixtures/filesystem.py:L53)
- **file-io**: self.addCleanup(shutil.rmtree, self.sys_path, ignore_errors=True) (src/nova/tests/fixtures/filesystem.py:L54)
- **file-io**: return_value=os.path.join(self.sys_path, (src/nova/tests/fixtures/filesystem.py:L65)
- **file-io**: return_value=os.path.join(self.sys_path, (src/nova/tests/fixtures/filesystem.py:L73)
- **file-io**: cpu_dir = os.path.join(self.cpu_path_mock % {'core': cpu_nr}) (src/nova/tests/fixtures/filesystem.py:L79)
- **file-io**: os.makedirs(cpu_dir) (src/nova/tests/fixtures/filesystem.py:L80)
- **file-io**: filesystem.write_sys(os.path.join(cpu_dir, 'online'), data='1') (src/nova/tests/fixtures/filesystem.py:L81)
- **file-io**: os.makedirs(os.path.join(cpu_dir, 'cpufreq')) (src/nova/tests/fixtures/filesystem.py:L83)
- **file-io**: os.path.join(cpu_dir, 'cpufreq/scaling_governor'), (src/nova/tests/fixtures/filesystem.py:L85)
- **global-mutation**: SYS = 'sys' (src/nova/tests/fixtures/filesystem.py:L24)

