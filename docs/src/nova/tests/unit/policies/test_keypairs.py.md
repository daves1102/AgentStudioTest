# src/nova/tests/unit/policies/test_keypairs.py

## Overview

This file implements the `test_keypairs` module, defining 2 classs, 1 constant, 1 field, 10 methods, 9 imports, 2 side effects.

Lines: total 152, code 112, comment 18, blank 22

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FAKE_KEYPAIR` | constant | — | exported | not declared | — | `src/nova/tests/unit/policies/test_keypairs.py:L26–L38` |
| `KeypairsPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_keypairs.py:L41–L141` |
| `KeypairsPolicyTest.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_keypairs.py:L49–L62` |
| `KeypairsPolicyTest.test_index_keypairs_policy` | method | (self, mock_get) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_keypairs.py:L65–L71` |
| `KeypairsPolicyTest.test_index_others_keypairs_policy` | method | (self, mock_get) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_keypairs.py:L74–L81` |
| `KeypairsPolicyTest.test_show_keypairs_policy` | method | (self, mock_get) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_keypairs.py:L84–L90` |
| `KeypairsPolicyTest.test_show_others_keypairs_policy` | method | (self, mock_get) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_keypairs.py:L93–L101` |
| `KeypairsPolicyTest.test_create_keypairs_policy` | method | (self, mock_create) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_keypairs.py:L104–L111` |
| `KeypairsPolicyTest.test_create_others_keypairs_policy` | method | (self, mock_create) | public | not declared | 1/9 | `src/nova/tests/unit/policies/test_keypairs.py:L114–L123` |
| `KeypairsPolicyTest.test_delete_keypairs_policy` | method | (self, mock_delete) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_keypairs.py:L126–L131` |
| `KeypairsPolicyTest.test_delete_others_keypairs_policy` | method | (self, mock_delete) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_keypairs.py:L134–L141` |
| `KeypairsNoLegacyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_keypairs.py:L144–L152` |
| `KeypairsNoLegacyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_keypairs.py:L149–L149` |
| `KeypairsNoLegacyTest.setUp` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/policies/test_keypairs.py:L151–L152` |

## Dependencies

- `import datetime` (src/nova/tests/unit/policies/test_keypairs.py:L13)
- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_keypairs.py:L14)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_keypairs.py:L16)
- `nova.api.openstack.compute`: imports `keypairs` (src/nova/tests/unit/policies/test_keypairs.py:L18)
- `nova`: imports `objects` (src/nova/tests/unit/policies/test_keypairs.py:L19)
- `nova.policies`: imports `keypairs as policies` (src/nova/tests/unit/policies/test_keypairs.py:L20)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_keypairs.py:L21)
- `nova.tests.unit.objects`: imports `test_keypair` (src/nova/tests/unit/policies/test_keypairs.py:L22)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_keypairs.py:L23)

## Side Effects

- **network**: from nova.api.openstack.compute import keypairs (src/nova/tests/unit/policies/test_keypairs.py:L18)
- **global-mutation**: FAKE_KEYPAIR = objects.KeyPair( (src/nova/tests/unit/policies/test_keypairs.py:L26)

