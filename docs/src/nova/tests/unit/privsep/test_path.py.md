# src/nova/tests/unit/privsep/test_path.py

## Overview

This file implements the `test_path` module, defining 2 classs, 17 methods, 7 imports, 33 side effects, 18 security surface entries.

Lines: total 172, code 128, comment 15, blank 29

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FileTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/privsep/test_path.py:L28–L138` |
| `FileTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/privsep/test_path.py:L31–L33` |
| `FileTestCase.test_write` | method | (self, mock_exists) | public | not declared | 1/9 | `src/nova/tests/unit/privsep/test_path.py:L36–L45` |
| `FileTestCase.test_write_dir_missing` | method | (self, mock_exists) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_path.py:L48–L51` |
| `FileTestCase.test_chown` | method | (self, mock_chown, mock_exists) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_path.py:L55–L58` |
| `FileTestCase.test_chown_file_not_found` | method | (self, mock_exists) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_path.py:L61–L64` |
| `FileTestCase.test_chown_recursive` | method | (self, mock_chown, mock_exists, mock_isfile, mock_walk) | public | not declared | 1/12 | `src/nova/tests/unit/privsep/test_path.py:L70–L81` |
| `FileTestCase.test_chown_recursive_is_file` | method | (self, mock_chown, mock_exists, mock_isfile, mock_walk) | public | not declared | 1/8 | `src/nova/tests/unit/privsep/test_path.py:L87–L94` |
| `FileTestCase.test_makedirs` | method | (self, mock_ensure_tree) | public | not declared | 1/3 | `src/nova/tests/unit/privsep/test_path.py:L97–L99` |
| `FileTestCase.test_chmod` | method | (self, mock_chmod, mock_exists) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_path.py:L103–L106` |
| `FileTestCase.test_chmod_file_not_found` | method | (self, mock_exists) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_path.py:L109–L112` |
| `FileTestCase.test_utime` | method | (self, mock_utime, mock_exists) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_path.py:L116–L119` |
| `FileTestCase.test_utime_file_not_found` | method | (self, mock_exists) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_path.py:L122–L125` |
| `FileTestCase.test_rmdir` | method | (self, mock_rmdir, mock_exists) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_path.py:L129–L132` |
| `FileTestCase.test_rmdir_file_not_found` | method | (self, mock_exists) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_path.py:L135–L138` |
| `LastBytesTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/privsep/test_path.py:L141–L172` |
| `LastBytesTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/privsep/test_path.py:L144–L146` |
| `LastBytesTestCase.test_truncated` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/privsep/test_path.py:L148–L159` |
| `LastBytesTestCase.test_read_all` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/privsep/test_path.py:L161–L172` |

## Dependencies

- `import os` (src/nova/tests/unit/privsep/test_path.py:L17)
- `unittest`: imports `mock` (src/nova/tests/unit/privsep/test_path.py:L18)
- `import tempfile` (src/nova/tests/unit/privsep/test_path.py:L20)
- `nova`: imports `exception` (src/nova/tests/unit/privsep/test_path.py:L22)
- `import nova.privsep.path` (src/nova/tests/unit/privsep/test_path.py:L23)
- `nova`: imports `test` (src/nova/tests/unit/privsep/test_path.py:L24)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/privsep/test_path.py:L25)

## Side Effects

- **process-spawn**: import nova.privsep.path (src/nova/tests/unit/privsep/test_path.py:L23)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/privsep/test_path.py:L35)
- **process-spawn**: nova.privsep.path.writefile('/fake/path/file', 'w', 'foo') (src/nova/tests/unit/privsep/test_path.py:L39)
- **file-io**: @mock.patch('os.path.exists', return_value=False) (src/nova/tests/unit/privsep/test_path.py:L47)
- **process-spawn**: nova.privsep.path.writefile, (src/nova/tests/unit/privsep/test_path.py:L50)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/privsep/test_path.py:L53)
- **process-spawn**: nova.privsep.path.chown('/fake/path', uid=42, gid=43) (src/nova/tests/unit/privsep/test_path.py:L56)
- **file-io**: @mock.patch('os.path.exists', return_value=False) (src/nova/tests/unit/privsep/test_path.py:L60)
- **process-spawn**: nova.privsep.path.chown, (src/nova/tests/unit/privsep/test_path.py:L63)
- **file-io**: @mock.patch('os.path.isfile', return_value=False) (src/nova/tests/unit/privsep/test_path.py:L67)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/privsep/test_path.py:L68)
- **process-spawn**: nova.privsep.path.chown('/fake/path', uid=42, gid=43, recursive=True) (src/nova/tests/unit/privsep/test_path.py:L73)
- **file-io**: @mock.patch('os.path.isfile', return_value=True) (src/nova/tests/unit/privsep/test_path.py:L84)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/privsep/test_path.py:L85)
- **process-spawn**: nova.privsep.path.chown('/fake/path', uid=42, gid=43, recursive=True) (src/nova/tests/unit/privsep/test_path.py:L90)
- **file-io**: @mock.patch('oslo_utils.fileutils.ensure_tree') (src/nova/tests/unit/privsep/test_path.py:L96)
- **process-spawn**: nova.privsep.path.makedirs('/fake/path') (src/nova/tests/unit/privsep/test_path.py:L98)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/privsep/test_path.py:L101)
- **process-spawn**: nova.privsep.path.chmod('/fake/path', 0x666) (src/nova/tests/unit/privsep/test_path.py:L104)
- **file-io**: @mock.patch('os.path.exists', return_value=False) (src/nova/tests/unit/privsep/test_path.py:L108)
- **process-spawn**: nova.privsep.path.chmod, (src/nova/tests/unit/privsep/test_path.py:L111)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/privsep/test_path.py:L114)
- **process-spawn**: nova.privsep.path.utime('/fake/path') (src/nova/tests/unit/privsep/test_path.py:L117)
- **file-io**: @mock.patch('os.path.exists', return_value=False) (src/nova/tests/unit/privsep/test_path.py:L121)
- **process-spawn**: nova.privsep.path.utime, (src/nova/tests/unit/privsep/test_path.py:L124)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/privsep/test_path.py:L127)
- **process-spawn**: nova.privsep.path.rmdir('/fake/path') (src/nova/tests/unit/privsep/test_path.py:L130)
- **file-io**: @mock.patch('os.path.exists', return_value=False) (src/nova/tests/unit/privsep/test_path.py:L134)
- **process-spawn**: nova.privsep.path.rmdir, (src/nova/tests/unit/privsep/test_path.py:L137)
- **file-io**: fd, path = tempfile.mkstemp() (src/nova/tests/unit/privsep/test_path.py:L150)
- **process-spawn**: out, remaining = nova.privsep.path.last_bytes(path, 5) (src/nova/tests/unit/privsep/test_path.py:L154)
- **file-io**: fd, path = tempfile.mkstemp() (src/nova/tests/unit/privsep/test_path.py:L163)
- **process-spawn**: out, remaining = nova.privsep.path.last_bytes(path, 1000) (src/nova/tests/unit/privsep/test_path.py:L167)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.path (src/nova/tests/unit/privsep/test_path.py:L23)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.writefile('/fake/path/file', 'w', 'foo') (src/nova/tests/unit/privsep/test_path.py:L39)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.writefile, (src/nova/tests/unit/privsep/test_path.py:L50)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.chown('/fake/path', uid=42, gid=43) (src/nova/tests/unit/privsep/test_path.py:L56)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.chown, (src/nova/tests/unit/privsep/test_path.py:L63)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.chown('/fake/path', uid=42, gid=43, recursive=True) (src/nova/tests/unit/privsep/test_path.py:L73)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.chown('/fake/path', uid=42, gid=43, recursive=True) (src/nova/tests/unit/privsep/test_path.py:L90)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.makedirs('/fake/path') (src/nova/tests/unit/privsep/test_path.py:L98)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.chmod('/fake/path', 0x666) (src/nova/tests/unit/privsep/test_path.py:L104)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.chmod, (src/nova/tests/unit/privsep/test_path.py:L111)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.utime('/fake/path') (src/nova/tests/unit/privsep/test_path.py:L117)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.utime, (src/nova/tests/unit/privsep/test_path.py:L124)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.rmdir('/fake/path') (src/nova/tests/unit/privsep/test_path.py:L130)
- **privilege** (`privsep-entrypoint`): nova.privsep.path.rmdir, (src/nova/tests/unit/privsep/test_path.py:L137)
- **sink** (`file-write`): os.write(fd, b'1234567890') (src/nova/tests/unit/privsep/test_path.py:L151)
- **privilege** (`privsep-entrypoint`): out, remaining = nova.privsep.path.last_bytes(path, 5) (src/nova/tests/unit/privsep/test_path.py:L154)
- **sink** (`file-write`): os.write(fd, b'1234567890') (src/nova/tests/unit/privsep/test_path.py:L164)
- **privilege** (`privsep-entrypoint`): out, remaining = nova.privsep.path.last_bytes(path, 1000) (src/nova/tests/unit/privsep/test_path.py:L167)

