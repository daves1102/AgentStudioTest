## Overview

Source file `src/aurora/aurora-portal/aurora_portal/session.py` written in Python within the `aurora-portal` component . It contains 3 defined symbol(s), 3 dependency/dependencies.


Lines: total 24, code 15, comment 2, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `new_session_id` | function | `new_session_id(length)` | — | `"".join(random.choice(alphabet) for _ in range(length))` (L11) | 2/3 | L9–L11 (src/aurora/aurora-portal/aurora_portal/session.py:L9–L11) |
| `password_hash` | function | `password_hash(password, salt)` | — | `hashlib.sha1((salt + password).encode("utf-8")).hexdigest()` (L15) | 1/2 | L14–L15 (src/aurora/aurora-portal/aurora_portal/session.py:L14–L15) |
| `constant_time_equal` | function | `constant_time_equal(left, right)` | — | `False` (L20), `result == 0` (L24) | 3/7 | L18–L24 (src/aurora/aurora-portal/aurora_portal/session.py:L18–L24) |

## Dependencies

- `hashlib` (src/aurora/aurora-portal/aurora_portal/session.py:L4)
- `random` (src/aurora/aurora-portal/aurora_portal/session.py:L5)
- `string` (src/aurora/aurora-portal/aurora_portal/session.py:L6)

## Security Surface

- **sink (random)**: call to random.choice: non-cryptographic random (src/aurora/aurora-portal/aurora_portal/session.py:L11)
- **sink (crypto)**: call to hashlib.sha1: hash / MAC computation (src/aurora/aurora-portal/aurora_portal/session.py:L15)
