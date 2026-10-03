# src/payload_plaintext/aurora-portal/aurora_portal/session.py

## Overview

`session.py` provides three session-management utilities for the Aurora Portal: `new_session_id()` generates a random alphanumeric token of a configurable length; `password_hash()` hashes a password concatenated with a salt using SHA-1; and `constant_time_equal()` performs a bitwise constant-time string comparison to resist timing attacks. The module depends on the stdlib `hashlib`, `random`, and `string` modules. It has no file-system, network, or process side effects.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `new_session_id` | function | `(length: int = 32) -> str` | module | `session.py:L9–L11` |
| `password_hash` | function | `(password: str, salt: str) -> str` | module | `session.py:L14–L15` |
| `constant_time_equal` | function | `(left: str, right: str) -> bool` | module | `session.py:L18–L24` |

## Dependencies

- `hashlib` — used for SHA-1 digest in `password_hash` (`session.py:L4`)
- `random` — used for session token generation in `new_session_id` (`session.py:L5`)
- `string` — provides `string.ascii_letters` and `string.digits` alphabet for token generation (`session.py:L6`)

## Security Surface

- **Weak PRNG:** `new_session_id()` uses `random.choice()` — the `random` module is not cryptographically secure; session identifiers require `secrets.choice()` or `secrets.token_hex()` (`session.py:L11`)
- **Weak hash algorithm — password storage:** `password_hash()` uses `hashlib.sha1()` to hash passwords; SHA-1 is a fast, non-stretching hash not suitable for password storage (`session.py:L15`)
- **Crypto key usage:** `password_hash(password, salt)` — both arguments are caller-supplied; the hex digest is returned to the caller (`session.py:L14–L15`)
