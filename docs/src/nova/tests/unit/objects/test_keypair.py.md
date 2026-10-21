# src/nova/tests/unit/objects/test_keypair.py

## Overview

This file implements the `test_keypair` module, defining 3 classs, 1 constant, 10 methods, 1 variable, 5 imports, 1 side effect.

Lines: total 169, code 121, comment 13, blank 35

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NOW` | constant | — | exported | not declared | — | `src/nova/tests/unit/objects/test_keypair.py:L23–L23` |
| `fake_keypair` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_keypair.py:L24–L35` |
| `_TestKeyPairObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_keypair.py:L38–L161` |
| `_TestKeyPairObject.test_create` | method | (self, mock_kp_create) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_keypair.py:L41–L53` |
| `_TestKeyPairObject.test_recreate_fails` | method | (self, mock_kp_create) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_keypair.py:L56–L68` |
| `_TestKeyPairObject.test_destroy` | method | (self, mock_kp_destroy) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_keypair.py:L71–L79` |
| `_TestKeyPairObject.test_destroy_by_name` | method | (self, mock_kp_destroy) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_keypair.py:L82–L87` |
| `_TestKeyPairObject.test_get_by_user` | method | (self, mock_api_count, mock_api_get) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_keypair.py:L91–L105` |
| `_TestKeyPairObject.test_obj_make_compatible` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_keypair.py:L107–L112` |
| `_TestKeyPairObject.test_get_by_user_limit` | method | (self, mock_api_get) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_keypair.py:L115–L123` |
| `_TestKeyPairObject.test_get_by_user_marker` | method | (self, mock_api_get) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_keypair.py:L126–L136` |
| `_TestKeyPairObject.test_get_by_user_limit_and_marker_api` | method | (self, mock_api_get) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_keypair.py:L139–L151` |
| `_TestKeyPairObject.test_get_by_user_limit_and_marker_invalid_marker` | method | (self, mock_api_get) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_keypair.py:L154–L161` |
| `TestMigrationObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_keypair.py:L164–L165` |
| `TestRemoteMigrationObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_keypair.py:L168–L169` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_keypair.py:L15)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/objects/test_keypair.py:L17)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_keypair.py:L19)
- `nova.objects`: imports `keypair` (src/nova/tests/unit/objects/test_keypair.py:L20)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_keypair.py:L21)

## Side Effects

- **global-mutation**: NOW = timeutils.utcnow().replace(microsecond=0) (src/nova/tests/unit/objects/test_keypair.py:L23)

