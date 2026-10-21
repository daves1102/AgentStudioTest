# src/nova/tests/unit/test_versions.py

## Overview

This file implements the `test_versions` module, defining 1 class, 1 function, 2 methods, 3 imports.

Lines: total 53, code 30, comment 13, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `VersionTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_versions.py:L21–L53` |
| `VersionTestCase.test_version_string_with_package_is_good` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_versions.py:L24–L31` |
| `VersionTestCase.test_release_file` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_versions.py:L39–L53` |
| `VersionTestCase.test_release_file.fake_find_file` | function | (self, name) | public | `"/etc/nova/release"` (src/nova/tests/unit/test_versions.py:L45); `real_find_file(self, name)` (src/nova/tests/unit/test_versions.py:L46) | — | `src/nova/tests/unit/test_versions.py:L43–L46` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/tests/unit/test_versions.py:L15)
- `nova`: imports `test` (src/nova/tests/unit/test_versions.py:L17)
- `nova`: imports `version` (src/nova/tests/unit/test_versions.py:L18)

