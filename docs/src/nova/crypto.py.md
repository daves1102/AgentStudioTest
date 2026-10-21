# src/nova/crypto.py

## Overview

This file implements the `crypto` module, defining 2 constants, 13 functions, 3 variables, 24 imports, 5 side effects, 17 security surface entries.

Lines: total 329, code 243, comment 30, blank 56

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/crypto.py:L50–L50` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/crypto.py:L52–L52` |
| `_KEYMGR` | variable | — | unexported | not declared | — | `src/nova/crypto.py:L54–L54` |
| `_VTPM_SECRET_BYTE_LENGTH` | variable | — | unexported | not declared | — | `src/nova/crypto.py:L56–L56` |
| `_EPHEMERAL_ENCRYPTION_SECRET_BYTE_LENGTH` | variable | — | unexported | not declared | — | `src/nova/crypto.py:L58–L58` |
| `_get_key_manager` | function | — | unexported | `_KEYMGR` (src/nova/crypto.py:L65) | 2/5 | `src/nova/crypto.py:L61–L65` |
| `generate_fingerprint` | function | (public_key) | exported | `':'.join(a + b for a, b in zip(raw_fp[::2], raw_fp[1::2]))` (src/nova/crypto.py:L78) | 3/11 | `src/nova/crypto.py:L68–L81` |
| `generate_x509_fingerprint` | function | (pem_key) | exported | `':'.join(a + b for a, b in zip(raw_fp[::2], raw_fp[1::2]))` (src/nova/crypto.py:L93) | 4/14 | `src/nova/crypto.py:L84–L97` |
| `generate_key_pair` | function | (bits=2048) | exported | `(private_key, public_key, fingerprint)` (src/nova/crypto.py:L107) | 1/8 | `src/nova/crypto.py:L100–L107` |
| `ssh_encrypt_text` | function | (ssh_public_key, text) | exported | `pub_key.encrypt(text, padding.PKCS1v15())` (src/nova/crypto.py:L121) | 3/10 | `src/nova/crypto.py:L110–L123` |
| `generate_winrm_x509_cert` | function | (user_id, bits=2048) | exported | `(private_key, certificate, fingerprint)` (src/nova/crypto.py:L156) | 1/23 | `src/nova/crypto.py:L126–L156` |
| `_create_x509_openssl_config` | function | (conffile, upn) | unexported | not declared | 1/8 | `src/nova/crypto.py:L159–L167` |
| `_handle_key_manager_error_forbidden` | function | (e, instance) | unexported | not declared | 2/5 | `src/nova/crypto.py:L170–L180` |
| `ensure_vtpm_secret` | function | (context, instance) | exported | `secret.id, secret.get_encoded()` (src/nova/crypto.py:L212); `secret_uuid, secret` (src/nova/crypto.py:L239) | 5/35 | `src/nova/crypto.py:L183–L239` |
| `delete_vtpm_secret` | function | (context, instance) | exported | `` (src/nova/crypto.py:L263) | 4/19 | `src/nova/crypto.py:L242–L277` |
| `create_encryption_secret` | function | (context, instance, driver_bdm, for_detail=None) | exported | `secret_uuid, secret` (src/nova/crypto.py:L299) | 2/19 | `src/nova/crypto.py:L280–L299` |
| `get_encryption_secret` | function | (context, secret_uuid) | exported | `key.get_encoded()` (src/nova/crypto.py:L310); `None` (src/nova/crypto.py:L313) | 2/12 | `src/nova/crypto.py:L302–L313` |
| `delete_encryption_secret` | function | (context, instance_uuid, secret_uuid) | exported | not declared | 2/14 | `src/nova/crypto.py:L316–L329` |

## Dependencies

- `import base64` (src/nova/crypto.py:L22)
- `import binascii` (src/nova/crypto.py:L23)
- `import hashlib` (src/nova/crypto.py:L24)
- `import io` (src/nova/crypto.py:L25)
- `import os` (src/nova/crypto.py:L26)
- `castellan.common`: imports `exception as castellan_exception` (src/nova/crypto.py:L28)
- `castellan.common.objects`: imports `passphrase` (src/nova/crypto.py:L29)
- `castellan`: imports `key_manager` (src/nova/crypto.py:L30)
- `cryptography.hazmat`: imports `backends` (src/nova/crypto.py:L31)
- `cryptography.hazmat.primitives.asymmetric`: imports `padding` (src/nova/crypto.py:L32)
- `cryptography.hazmat.primitives`: imports `hashes` (src/nova/crypto.py:L33)
- `cryptography.hazmat.primitives`: imports `serialization` (src/nova/crypto.py:L34)
- `cryptography`: imports `x509` (src/nova/crypto.py:L35)
- `oslo_concurrency`: imports `processutils` (src/nova/crypto.py:L36)
- `oslo_log`: imports `log as logging` (src/nova/crypto.py:L37)
- `oslo_serialization`: imports `base64 as oslo_base64` (src/nova/crypto.py:L38)
- `import paramiko` (src/nova/crypto.py:L39)
- `import nova.conf` (src/nova/crypto.py:L41)
- `nova`: imports `context as nova_context` (src/nova/crypto.py:L42)
- `nova`: imports `exception` (src/nova/crypto.py:L43)
- `nova.i18n`: imports `_` (src/nova/crypto.py:L44)
- `nova`: imports `objects` (src/nova/crypto.py:L45)
- `nova`: imports `utils` (src/nova/crypto.py:L46)
- `nova.virt`: imports `block_device as driver_block_device` (src/nova/crypto.py:L47)

## Side Effects

- **file-io**: keyfile = os.path.abspath(os.path.join(tmpdir, 'temp.key')) (src/nova/crypto.py:L135)
- **file-io**: conffile = os.path.abspath(os.path.join(tmpdir, 'temp.conf')) (src/nova/crypto.py:L136)
- **file-io**: with open(conffile, 'w') as file: (src/nova/crypto.py:L166)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/crypto.py:L50)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/crypto.py:L52)

## Security Surface

- **privilege** (`crypto-key`): from cryptography.hazmat import backends (src/nova/crypto.py:L31)
- **privilege** (`crypto-key`): from cryptography.hazmat.primitives.asymmetric import padding (src/nova/crypto.py:L32)
- **privilege** (`crypto-key`): from cryptography.hazmat.primitives import hashes (src/nova/crypto.py:L33)
- **privilege** (`crypto-key`): from cryptography.hazmat.primitives import serialization (src/nova/crypto.py:L34)
- **sink** (`file-write`): with open(conffile, 'w') as file: (src/nova/crypto.py:L166)
- **sink** (`file-write`): file.write(content % upn) (src/nova/crypto.py:L167)
- **privilege** (`crypto-key`): key_mgr = _get_key_manager() (src/nova/crypto.py:L201)
- **privilege** (`crypto-key`): secret = key_mgr.get(context, secret_uuid) (src/nova/crypto.py:L207)
- **privilege** (`crypto-key`): secret_uuid = key_mgr.store(context, cmo) (src/nova/crypto.py:L231)
- **privilege** (`crypto-key`): key_mgr = _get_key_manager() (src/nova/crypto.py:L265)
- **privilege** (`crypto-key`): key_mgr.delete(context, secret_uuid) (src/nova/crypto.py:L267)
- **privilege** (`crypto-key`): key_mgr = _get_key_manager() (src/nova/crypto.py:L293)
- **privilege** (`crypto-key`): secret_uuid = key_mgr.store(context, cmo) (src/nova/crypto.py:L294)
- **privilege** (`crypto-key`): key_mgr = _get_key_manager() (src/nova/crypto.py:L306)
- **privilege** (`crypto-key`): key = key_mgr.get(context, secret_uuid) (src/nova/crypto.py:L308)
- **privilege** (`crypto-key`): key_mgr = _get_key_manager() (src/nova/crypto.py:L321)
- **privilege** (`crypto-key`): key_mgr.delete(context, secret_uuid) (src/nova/crypto.py:L323)

