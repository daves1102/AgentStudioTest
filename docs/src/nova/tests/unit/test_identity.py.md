# src/nova/tests/unit/test_identity.py

## Overview

This file implements the `test_identity` module, defining 1 class, 8 methods, 7 imports, 5 security surface entries.

Lines: total 132, code 89, comment 14, blank 29

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `IdentityValidationTest` | class | — | exported | not declared | — | `src/nova/tests/unit/test_identity.py:L27–L132` |
| `IdentityValidationTest.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_identity.py:L48–L54` |
| `IdentityValidationTest.validate_common` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_identity.py:L56–L60` |
| `IdentityValidationTest.test_good_id` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_identity.py:L62–L71` |
| `IdentityValidationTest.test_no_project` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_identity.py:L73–L84` |
| `IdentityValidationTest.test_unknown_id` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_identity.py:L86–L95` |
| `IdentityValidationTest.test_unknown_error` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_identity.py:L97–L107` |
| `IdentityValidationTest.test_early_fail` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_identity.py:L109–L118` |
| `IdentityValidationTest.test_wrong_version` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_identity.py:L120–L132` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/test_identity.py:L16)
- `keystoneauth1.adapter`: imports `Adapter` (src/nova/tests/unit/test_identity.py:L18)
- `keystoneauth1`: imports `exceptions as kse` (src/nova/tests/unit/test_identity.py:L19)
- `import webob` (src/nova/tests/unit/test_identity.py:L20)
- `nova.api.openstack`: imports `identity` (src/nova/tests/unit/test_identity.py:L22)
- `nova`: imports `test` (src/nova/tests/unit/test_identity.py:L23)
- `nova.tests.unit`: imports `fake_requests` (src/nova/tests/unit/test_identity.py:L24)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1.adapter import Adapter (src/nova/tests/unit/test_identity.py:L18)
- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as kse (src/nova/tests/unit/test_identity.py:L19)
- **privilege** (`crypto-key`): This is only tested in unit tests through mocking out keystoneauth (src/nova/tests/unit/test_identity.py:L36)
- **privilege** (`crypto-key`): """Test if we get a keystoneauth exception. (src/nova/tests/unit/test_identity.py:L110)
- **privilege** (`crypto-key`): If we get a random keystoneauth exception, fall back and (src/nova/tests/unit/test_identity.py:L112)

