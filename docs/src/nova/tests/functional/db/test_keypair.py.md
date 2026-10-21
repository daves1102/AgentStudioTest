# src/nova/tests/functional/db/test_keypair.py

## Overview

This file implements the `test_keypair` module, defining 1 class, 12 methods, 5 imports, 1 security surface entry.

Lines: total 191, code 138, comment 25, blank 28

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `KeyPairObjectTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_keypair.py:L20–L191` |
| `KeyPairObjectTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/db/test_keypair.py:L22–L24` |
| `KeyPairObjectTestCase._create_keypair` | method | (self, **values) | private | `kp` (src/nova/tests/functional/db/test_keypair.py:L35) | 1/10 | `src/nova/tests/functional/db/test_keypair.py:L26–L35` |
| `KeyPairObjectTestCase.test_create` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/db/test_keypair.py:L37–L39` |
| `KeyPairObjectTestCase.test_create_duplicate` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/db/test_keypair.py:L41–L43` |
| `KeyPairObjectTestCase.test_get` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/db/test_keypair.py:L45–L49` |
| `KeyPairObjectTestCase.test_get_not_found` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/db/test_keypair.py:L51–L55` |
| `KeyPairObjectTestCase.test_destroy` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_keypair.py:L57–L62` |
| `KeyPairObjectTestCase.test_destroy_by_name` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/db/test_keypair.py:L64–L70` |
| `KeyPairObjectTestCase.test_get_by_user` | method | (self) | public | not declared | 2/8 | `src/nova/tests/functional/db/test_keypair.py:L72–L79` |
| `KeyPairObjectTestCase.test_get_count_by_user` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/db/test_keypair.py:L81–L86` |
| `KeyPairObjectTestCase.test_get_by_user_limit_and_marker` | method | (self) | public | not declared | 6/43 | `src/nova/tests/functional/db/test_keypair.py:L88–L144` |
| `KeyPairObjectTestCase.test_get_by_user_different_users` | method | (self) | public | not declared | 6/33 | `src/nova/tests/functional/db/test_keypair.py:L146–L191` |

## Dependencies

- `nova`: imports `context` (src/nova/tests/functional/db/test_keypair.py:L13)
- `nova`: imports `exception` (src/nova/tests/functional/db/test_keypair.py:L14)
- `nova`: imports `objects` (src/nova/tests/functional/db/test_keypair.py:L15)
- `nova.objects`: imports `keypair` (src/nova/tests/functional/db/test_keypair.py:L16)
- `nova`: imports `test` (src/nova/tests/functional/db/test_keypair.py:L17)

## Security Surface

- **sink** (`db-write`): kp.update(values) (src/nova/tests/functional/db/test_keypair.py:L33)

