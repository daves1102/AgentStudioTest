# src/nova/tests/unit/test_crypto.py

## Overview

This file implements the `test_crypto` module, defining 5 classs, 11 fields, 28 methods, 16 imports, 2 side effects, 5 security surface entries.

Lines: total 474, code 382, comment 16, blank 76

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `EncryptionTests` | class | — | exported | not declared | — | `src/nova/tests/unit/test_crypto.py:L39–L110` |
| `EncryptionTests.pubkey` | field | — | public | not declared | — | `src/nova/tests/unit/test_crypto.py:L40–L46` |
| `EncryptionTests.prikey` | field | — | public | not declared | — | `src/nova/tests/unit/test_crypto.py:L47–L73` |
| `EncryptionTests.text` | field | — | public | not declared | — | `src/nova/tests/unit/test_crypto.py:L74–L74` |
| `EncryptionTests._ssh_decrypt_text` | method | (self, ssh_private_key, text) | private | `dec` (src/nova/tests/unit/test_crypto.py:L88) | 2/15 | `src/nova/tests/unit/test_crypto.py:L76–L90` |
| `EncryptionTests.test_ssh_encrypt_decrypt_text` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_crypto.py:L92–L96` |
| `EncryptionTests._test_ssh_encrypt_decrypt_text` | method | (self, key) | private | not declared | 1/7 | `src/nova/tests/unit/test_crypto.py:L98–L106` |
| `EncryptionTests.test_ssh_encrypt_failure` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_crypto.py:L108–L110` |
| `KeyPairTest` | class | — | exported | not declared | — | `src/nova/tests/unit/test_crypto.py:L113–L223` |
| `KeyPairTest.rsa_prv` | field | — | public | not declared | — | `src/nova/tests/unit/test_crypto.py:L114–L142` |
| `KeyPairTest.rsa_pub` | field | — | public | not declared | — | `src/nova/tests/unit/test_crypto.py:L144–L152` |
| `KeyPairTest.rsa_fp` | field | — | public | not declared | — | `src/nova/tests/unit/test_crypto.py:L154–L154` |
| `KeyPairTest.dss_pub` | field | — | public | not declared | — | `src/nova/tests/unit/test_crypto.py:L156–L167` |
| `KeyPairTest.dss_fp` | field | — | public | not declared | — | `src/nova/tests/unit/test_crypto.py:L169–L169` |
| `KeyPairTest.ecdsa_pub` | field | — | public | not declared | — | `src/nova/tests/unit/test_crypto.py:L171–L175` |
| `KeyPairTest.ecdsa_pub_with_spaces` | field | — | public | not declared | — | `src/nova/tests/unit/test_crypto.py:L177–L181` |
| `KeyPairTest.ecdsa_fp` | field | — | public | not declared | — | `src/nova/tests/unit/test_crypto.py:L183–L183` |
| `KeyPairTest.test_generate_fingerprint` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_crypto.py:L185–L196` |
| `KeyPairTest.test_generate_key_pair_2048_bits` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_crypto.py:L198–L203` |
| `KeyPairTest.test_generate_key_pair_1024_bits` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_crypto.py:L205–L211` |
| `KeyPairTest.test_generate_key_pair_mocked_private_key` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_crypto.py:L213–L223` |
| `FakePassphrase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_crypto.py:L226–L233` |
| `FakePassphrase.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_crypto.py:L229–L230` |
| `FakePassphrase.get_encoded` | method | (self) | public | `b'foo'` (src/nova/tests/unit/test_crypto.py:L233) | 1/2 | `src/nova/tests/unit/test_crypto.py:L232–L233` |
| `VTPMTest` | class | — | exported | not declared | — | `src/nova/tests/unit/test_crypto.py:L237–L402` |
| `VTPMTest.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_crypto.py:L239–L241` |
| `VTPMTest.test_ensure_vtpm_secret` | method | (self, mock_get_manager) | public | not declared | 1/10 | `src/nova/tests/unit/test_crypto.py:L244–L259` |
| `VTPMTest.test_ensure_vtpm_secret_error` | method | (self, mock_get_manager) | public | not declared | 1/9 | `src/nova/tests/unit/test_crypto.py:L262–L275` |
| `VTPMTest.test_ensure_vtpm_secret_no_secret` | method | (self, mock_get_manager, mock_pass) | public | not declared | 1/15 | `src/nova/tests/unit/test_crypto.py:L279–L299` |
| `VTPMTest.test_delete_vtpm_secret` | method | (self, mock_get_manager) | public | not declared | 1/11 | `src/nova/tests/unit/test_crypto.py:L302–L318` |
| `VTPMTest.test_ensure_vtpm_secret_create_forbidden` | method | (self, mock_get_manager) | public | not declared | 1/10 | `src/nova/tests/unit/test_crypto.py:L321–L335` |
| `VTPMTest.test_ensure_vtpm_secret_get_forbidden` | method | (self, mock_get_manager) | public | not declared | 1/10 | `src/nova/tests/unit/test_crypto.py:L338–L352` |
| `VTPMTest.test_delete_vtpm_secret_get_forbidden` | method | (self, mock_get_manager) | public | not declared | 1/10 | `src/nova/tests/unit/test_crypto.py:L355–L369` |
| `VTPMTest.test_ensure_vtpm_secret_other_keymanager_error` | method | (self, method, mock_get_manager) | public | not declared | 2/10 | `src/nova/tests/unit/test_crypto.py:L373–L387` |
| `VTPMTest.test_delete_vtpm_secret_other_keymanager_error` | method | (self, mock_get_manager) | public | not declared | 1/8 | `src/nova/tests/unit/test_crypto.py:L390–L402` |
| `EncryptionSecretTest` | class | — | exported | not declared | — | `src/nova/tests/unit/test_crypto.py:L405–L474` |
| `EncryptionSecretTest.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_crypto.py:L407–L409` |
| `EncryptionSecretTest._test_create_encryption_secret` | method | (self, mock_get_manager, mock_pass, mock_text, for_detail=None) | private | not declared | 2/18 | `src/nova/tests/unit/test_crypto.py:L414–L434` |
| `EncryptionSecretTest.test_create_encryption_secret` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_crypto.py:L436–L437` |
| `EncryptionSecretTest.test_create_encryption_secret_for_image` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_crypto.py:L439–L440` |
| `EncryptionSecretTest.test_get_encryption_secret` | method | (self, mock_get_manager) | public | not declared | 1/7 | `src/nova/tests/unit/test_crypto.py:L443–L449` |
| `EncryptionSecretTest.test_get_encryption_secret_not_found` | method | (self, mock_get_manager) | public | not declared | 1/7 | `src/nova/tests/unit/test_crypto.py:L452–L458` |
| `EncryptionSecretTest.test_delete_encryption_secret` | method | (self, mock_get_manager) | public | not declared | 1/5 | `src/nova/tests/unit/test_crypto.py:L461–L465` |
| `EncryptionSecretTest.test_delete_encryption_secret_not_found` | method | (self, mock_get_manager) | public | not declared | 1/7 | `src/nova/tests/unit/test_crypto.py:L468–L474` |

## Dependencies

- `import io` (src/nova/tests/unit/test_crypto.py:L19)
- `import os` (src/nova/tests/unit/test_crypto.py:L20)
- `unittest`: imports `mock` (src/nova/tests/unit/test_crypto.py:L21)
- `castellan.common`: imports `exception as castellan_exception` (src/nova/tests/unit/test_crypto.py:L23)
- `cryptography.hazmat`: imports `backends` (src/nova/tests/unit/test_crypto.py:L24)
- `cryptography.hazmat.primitives`: imports `serialization` (src/nova/tests/unit/test_crypto.py:L25)
- `import ddt` (src/nova/tests/unit/test_crypto.py:L26)
- `oslo_concurrency`: imports `processutils` (src/nova/tests/unit/test_crypto.py:L27)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/test_crypto.py:L28)
- `import paramiko` (src/nova/tests/unit/test_crypto.py:L29)
- `nova`: imports `context as nova_context` (src/nova/tests/unit/test_crypto.py:L31)
- `nova`: imports `crypto` (src/nova/tests/unit/test_crypto.py:L32)
- `nova`: imports `exception` (src/nova/tests/unit/test_crypto.py:L33)
- `nova`: imports `objects` (src/nova/tests/unit/test_crypto.py:L34)
- `nova`: imports `test` (src/nova/tests/unit/test_crypto.py:L35)
- `nova`: imports `utils` (src/nova/tests/unit/test_crypto.py:L36)

## Side Effects

- **file-io**: sshkey = os.path.abspath(os.path.join(tmpdir, 'ssh.key')) (src/nova/tests/unit/test_crypto.py:L78)
- **file-io**: with open(sshkey, 'w') as f: (src/nova/tests/unit/test_crypto.py:L79)

## Security Surface

- **privilege** (`crypto-key`): from cryptography.hazmat import backends (src/nova/tests/unit/test_crypto.py:L24)
- **privilege** (`crypto-key`): from cryptography.hazmat.primitives import serialization (src/nova/tests/unit/test_crypto.py:L25)
- **sink** (`file-write`): with open(sshkey, 'w') as f: (src/nova/tests/unit/test_crypto.py:L79)
- **sink** (`file-write`): f.write(ssh_private_key) (src/nova/tests/unit/test_crypto.py:L80)
- **sink** (`file-write`): keyin.write(self.rsa_prv) (src/nova/tests/unit/test_crypto.py:L215)

