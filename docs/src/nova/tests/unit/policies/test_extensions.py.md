# src/nova/tests/unit/policies/test_extensions.py

## Overview

This file implements the `test_extensions` module, defining 2 classs, 1 field, 3 methods, 4 imports, 1 side effect.

Lines: total 56, code 35, comment 12, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ExtensionsPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_extensions.py:L19–L50` |
| `ExtensionsPolicyTest.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_extensions.py:L27–L34` |
| `ExtensionsPolicyTest.test_list_extensions_policy` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_extensions.py:L36–L42` |
| `ExtensionsPolicyTest.test_show_extensions_policy` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_extensions.py:L44–L50` |
| `ExtensionsNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_extensions.py:L53–L56` |
| `ExtensionsNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_extensions.py:L56–L56` |

## Dependencies

- `nova.api.openstack.compute`: imports `extension_info` (src/nova/tests/unit/policies/test_extensions.py:L13)
- `nova.policies`: imports `extensions as policies` (src/nova/tests/unit/policies/test_extensions.py:L14)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_extensions.py:L15)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_extensions.py:L16)

## Side Effects

- **network**: from nova.api.openstack.compute import extension_info (src/nova/tests/unit/policies/test_extensions.py:L13)

