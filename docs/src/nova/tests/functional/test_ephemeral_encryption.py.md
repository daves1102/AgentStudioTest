# src/nova/tests/functional/test_ephemeral_encryption.py

## Overview

This file implements the `test_ephemeral_encryption` module, defining 5 classs, 9 fields, 28 methods, 4 imports.

Lines: total 381, code 308, comment 25, blank 48

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_TestEphemeralEncryptionBase` | class | — | unexported | not declared | — | `src/nova/tests/functional/test_ephemeral_encryption.py:L20–L76` |
| `_TestEphemeralEncryptionBase.flavors` | field | — | public | not declared | — | `src/nova/tests/functional/test_ephemeral_encryption.py:L34–L34` |
| `_TestEphemeralEncryptionBase.setUp` | method | (self) | public | not declared | 3/17 | `src/nova/tests/functional/test_ephemeral_encryption.py:L36–L58` |
| `_TestEphemeralEncryptionBase._assert_ephemeral_encryption_enabled` | method | (self, server_id, encryption_format=None) | private | not declared | 4/10 | `src/nova/tests/functional/test_ephemeral_encryption.py:L60–L69` |
| `_TestEphemeralEncryptionBase._assert_ephemeral_encryption_disabled` | method | (self, server_id) | private | not declared | 3/6 | `src/nova/tests/functional/test_ephemeral_encryption.py:L71–L76` |
| `TestEphemeralEncryptionAvailable` | class | — | exported | not declared | — | `src/nova/tests/functional/test_ephemeral_encryption.py:L79–L158` |
| `TestEphemeralEncryptionAvailable.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_ephemeral_encryption.py:L81–L81` |
| `TestEphemeralEncryptionAvailable.flavors` | field | — | public | not declared | — | `src/nova/tests/functional/test_ephemeral_encryption.py:L82–L98` |
| `TestEphemeralEncryptionAvailable.test_image_requested` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_ephemeral_encryption.py:L100–L106` |
| `TestEphemeralEncryptionAvailable.test_image_disabled` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_ephemeral_encryption.py:L108–L114` |
| `TestEphemeralEncryptionAvailable.test_flavor_requested` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_ephemeral_encryption.py:L116–L121` |
| `TestEphemeralEncryptionAvailable.test_flavor_disabled` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_ephemeral_encryption.py:L123–L128` |
| `TestEphemeralEncryptionAvailable.test_flavor_and_image_requested` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_ephemeral_encryption.py:L130–L136` |
| `TestEphemeralEncryptionAvailable.test_flavor_and_image_disabled` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_ephemeral_encryption.py:L138–L144` |
| `TestEphemeralEncryptionAvailable.test_flavor_requested_and_image_disabled` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_ephemeral_encryption.py:L146–L151` |
| `TestEphemeralEncryptionAvailable.test_flavor_disabled_and_image_requested` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_ephemeral_encryption.py:L153–L158` |
| `TestEphemeralEncryptionUnavailable` | class | — | exported | not declared | — | `src/nova/tests/functional/test_ephemeral_encryption.py:L161–L202` |
| `TestEphemeralEncryptionUnavailable.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_ephemeral_encryption.py:L163–L163` |
| `TestEphemeralEncryptionUnavailable.flavors` | field | — | public | not declared | — | `src/nova/tests/functional/test_ephemeral_encryption.py:L164–L180` |
| `TestEphemeralEncryptionUnavailable.test_requested_but_unavailable` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_ephemeral_encryption.py:L182–L187` |
| `TestEphemeralEncryptionUnavailable.test_image_disabled` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_ephemeral_encryption.py:L189–L195` |
| `TestEphemeralEncryptionUnavailable.test_flavor_disabled` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_ephemeral_encryption.py:L197–L202` |
| `TestEphemeralEncryptionLUKS` | class | — | exported | not declared | — | `src/nova/tests/functional/test_ephemeral_encryption.py:L205–L292` |
| `TestEphemeralEncryptionLUKS.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_ephemeral_encryption.py:L207–L207` |
| `TestEphemeralEncryptionLUKS.flavors` | field | — | public | not declared | — | `src/nova/tests/functional/test_ephemeral_encryption.py:L208–L239` |
| `TestEphemeralEncryptionLUKS.test_image_requested_luks` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_ephemeral_encryption.py:L241–L248` |
| `TestEphemeralEncryptionLUKS.test_flavor_requested_luks` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_ephemeral_encryption.py:L250–L256` |
| `TestEphemeralEncryptionLUKS.test_flavor_and_image_requested_luks` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_ephemeral_encryption.py:L258–L265` |
| `TestEphemeralEncryptionLUKS.test_image_requested_plain` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_ephemeral_encryption.py:L267–L272` |
| `TestEphemeralEncryptionLUKS.test_flavor_requested_plain` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_ephemeral_encryption.py:L274–L278` |
| `TestEphemeralEncryptionLUKS.test_image_requested_luks_flavor_requested_plain` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_ephemeral_encryption.py:L280–L285` |
| `TestEphemeralEncryptionLUKS.test_image_requested_plain_flavor_requested_luks` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_ephemeral_encryption.py:L287–L292` |
| `TestEphemeralEncryptionPLAIN` | class | — | exported | not declared | — | `src/nova/tests/functional/test_ephemeral_encryption.py:L295–L381` |
| `TestEphemeralEncryptionPLAIN.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_ephemeral_encryption.py:L297–L297` |
| `TestEphemeralEncryptionPLAIN.flavors` | field | — | public | not declared | — | `src/nova/tests/functional/test_ephemeral_encryption.py:L298–L328` |
| `TestEphemeralEncryptionPLAIN.test_image_requested_plain` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_ephemeral_encryption.py:L330–L337` |
| `TestEphemeralEncryptionPLAIN.test_flavor_requested_plain` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_ephemeral_encryption.py:L339–L345` |
| `TestEphemeralEncryptionPLAIN.test_flavor_and_image_requested_plain` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_ephemeral_encryption.py:L347–L354` |
| `TestEphemeralEncryptionPLAIN.test_image_requested_luks` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_ephemeral_encryption.py:L356–L361` |
| `TestEphemeralEncryptionPLAIN.test_flavor_requested_luks` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_ephemeral_encryption.py:L363–L367` |
| `TestEphemeralEncryptionPLAIN.test_image_requested_plain_flavor_requested_luks` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_ephemeral_encryption.py:L369–L374` |
| `TestEphemeralEncryptionPLAIN.test_image_requested_luks_flavor_requested_plain` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_ephemeral_encryption.py:L376–L381` |

## Dependencies

- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/functional/test_ephemeral_encryption.py:L13)
- `nova`: imports `context` (src/nova/tests/functional/test_ephemeral_encryption.py:L15)
- `nova`: imports `objects` (src/nova/tests/functional/test_ephemeral_encryption.py:L16)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_ephemeral_encryption.py:L17)

