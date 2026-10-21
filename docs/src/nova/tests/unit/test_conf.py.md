# src/nova/tests/unit/test_conf.py

## Overview

This file implements the `test_conf` module, defining 3 classs, 7 methods, 7 imports, 3 side effects, 1 security surface entry.

Lines: total 110, code 74, comment 20, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ConfTest` | class | — | exported | not declared | — | `src/nova/tests/unit/test_conf.py:L26–L82` |
| `ConfTest.TestConfigOpts` | class | — | public | not declared | — | `src/nova/tests/unit/test_conf.py:L29–L40` |
| `ConfTest.TestConfigOpts.__call__` | method | (self, args=None, default_config_files=None) | public | `cfg.ConfigOpts.__call__( self, args=args, prog='test', version='1.0', usage='%(prog)s FOO BAR', default_config_files=default_config_files, validate_default_values=True)` (src/nova/tests/unit/test_conf.py:L33) | 2/11 | `src/nova/tests/unit/test_conf.py:L30–L40` |
| `ConfTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_conf.py:L42–L45` |
| `ConfTest.create_tempfiles` | method | (self, files, ext='.conf') | public | `tempfiles` (src/nova/tests/unit/test_conf.py:L60) | 4/14 | `src/nova/tests/unit/test_conf.py:L47–L60` |
| `ConfTest.test_reserved_huge_page` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/test_conf.py:L62–L82` |
| `TestParseArgs` | class | — | exported | not declared | — | `src/nova/tests/unit/test_conf.py:L85–L110` |
| `TestParseArgs.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_conf.py:L87–L94` |
| `TestParseArgs.test_parse_args_glance_debug_false` | method | (self, register_options) | public | not declared | 1/6 | `src/nova/tests/unit/test_conf.py:L97–L102` |
| `TestParseArgs.test_parse_args_glance_debug_true` | method | (self, register_options) | public | not declared | 1/6 | `src/nova/tests/unit/test_conf.py:L105–L110` |

## Dependencies

- `import os` (src/nova/tests/unit/test_conf.py:L15)
- `import tempfile` (src/nova/tests/unit/test_conf.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/test_conf.py:L17)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/test_conf.py:L19)
- `import nova.conf.compute` (src/nova/tests/unit/test_conf.py:L21)
- `nova`: imports `config` (src/nova/tests/unit/test_conf.py:L22)
- `nova`: imports `test` (src/nova/tests/unit/test_conf.py:L23)

## Side Effects

- **file-io**: if not os.path.isabs(basename): (src/nova/tests/unit/test_conf.py:L50)
- **file-io**: (fd, path) = tempfile.mkstemp(prefix=basename, suffix=ext) (src/nova/tests/unit/test_conf.py:L51)
- **file-io**: fd = os.open(path, os.O_CREAT | os.O_WRONLY) (src/nova/tests/unit/test_conf.py:L54)

## Security Surface

- **sink** (`file-write`): os.write(fd, contents.encode('utf-8')) (src/nova/tests/unit/test_conf.py:L57)

