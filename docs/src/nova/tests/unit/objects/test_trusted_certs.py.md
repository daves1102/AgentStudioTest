# src/nova/tests/unit/objects/test_trusted_certs.py

## Overview

This file implements the `test_trusted_certs` module, defining 3 classs, 1 method, 2 variables, 4 imports.

Lines: total 43, code 22, comment 11, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_trusted_certs` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_trusted_certs.py:L19–L20` |
| `fake_instance_extras` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_trusted_certs.py:L21–L23` |
| `_TestTrustedCertsObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_trusted_certs.py:L26–L33` |
| `_TestTrustedCertsObject.test_get_by_instance_uuid` | method | (self, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_trusted_certs.py:L29–L33` |
| `TestTrustedCertsObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_trusted_certs.py:L36–L38` |
| `TestRemoteTrustedCertsObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_trusted_certs.py:L41–L43` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_trusted_certs.py:L13)
- `nova.objects`: imports `trusted_certs` (src/nova/tests/unit/objects/test_trusted_certs.py:L15)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_trusted_certs.py:L16)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/objects/test_trusted_certs.py:L17)

