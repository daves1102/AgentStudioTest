# src/nova/tests/unit/pci/test_whitelist.py

## Overview

This file implements the `test_whitelist` module, defining 1 class, 12 methods, 1 variable, 4 imports.

Lines: total 142, code 110, comment 14, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `dev_dict` | variable | — | exported | not declared | — | `src/nova/tests/unit/pci/test_whitelist.py:L22–L29` |
| `WhitelistTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/pci/test_whitelist.py:L33–L142` |
| `WhitelistTestCase.test_whitelist` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/pci/test_whitelist.py:L34–L37` |
| `WhitelistTestCase.test_whitelist_list_format` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_whitelist.py:L39–L43` |
| `WhitelistTestCase.test_whitelist_empty` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/pci/test_whitelist.py:L45–L47` |
| `WhitelistTestCase.test_whitelist_multiple` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_whitelist.py:L49–L53` |
| `WhitelistTestCase.test_device_assignable_glob` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_whitelist.py:L55–L59` |
| `WhitelistTestCase.test_device_not_assignable_glob` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/pci/test_whitelist.py:L61–L65` |
| `WhitelistTestCase.test_device_assignable_regex` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/pci/test_whitelist.py:L67–L73` |
| `WhitelistTestCase.test_device_not_assignable_regex` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/pci/test_whitelist.py:L75–L81` |
| `WhitelistTestCase.test_device_assignable` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/pci/test_whitelist.py:L83–L86` |
| `WhitelistTestCase.test_device_tags` | method | (self, data) | public | not declared | 1/12 | `src/nova/tests/unit/pci/test_whitelist.py:L102–L113` |
| `WhitelistTestCase.test_device_managed_not_set` | method | (self, data) | public | not declared | 1/7 | `src/nova/tests/unit/pci/test_whitelist.py:L117–L123` |
| `WhitelistTestCase.test_device_managed_invalid_value` | method | (self, data) | public | not declared | 1/14 | `src/nova/tests/unit/pci/test_whitelist.py:L127–L142` |

## Dependencies

- `import ddt` (src/nova/tests/unit/pci/test_whitelist.py:L16)
- `nova`: imports `exception` (src/nova/tests/unit/pci/test_whitelist.py:L17)
- `nova.pci`: imports `whitelist` (src/nova/tests/unit/pci/test_whitelist.py:L18)
- `nova`: imports `test` (src/nova/tests/unit/pci/test_whitelist.py:L19)

