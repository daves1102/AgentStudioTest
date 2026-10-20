# src/nova/api/metadata/password.py

## Overview

This file implements the `password` module, defining 4 constants, 3 functions, 7 imports, 4 side effects, 1 security surface entry.

Lines: total 88, code 56, comment 17, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/api/metadata/password.py:L26–L26` |
| `CHUNKS` | constant | — | exported | not declared | — | `src/nova/api/metadata/password.py:L28–L28` |
| `CHUNK_LENGTH` | constant | — | exported | not declared | — | `src/nova/api/metadata/password.py:L29–L29` |
| `MAX_SIZE` | constant | — | exported | not declared | — | `src/nova/api/metadata/password.py:L30–L30` |
| `extract_password` | function | (instance) | exported | `result or None` (src/nova/api/metadata/password.py:L39) | 4/7 | `src/nova/api/metadata/password.py:L33–L39` |
| `convert_password` | function | (context, password) | exported | `meta` (src/nova/api/metadata/password.py:L55) | 4/9 | `src/nova/api/metadata/password.py:L42–L55` |
| `handle_password` | function | (req, meta_data) | exported | `meta_data.password` (src/nova/api/metadata/password.py:L61) | 8/26 | `src/nova/api/metadata/password.py:L58–L88` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/metadata/password.py:L16)
- `import nova.conf` (src/nova/api/metadata/password.py:L18)
- `nova`: imports `context` (src/nova/api/metadata/password.py:L19)
- `nova`: imports `exception` (src/nova/api/metadata/password.py:L20)
- `nova.i18n`: imports `_` (src/nova/api/metadata/password.py:L21)
- `nova`: imports `objects` (src/nova/api/metadata/password.py:L22)
- `nova`: imports `utils` (src/nova/api/metadata/password.py:L23)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/api/metadata/password.py:L26)
- **global-mutation**: CHUNKS = 4 (src/nova/api/metadata/password.py:L28)
- **global-mutation**: CHUNK_LENGTH = 255 (src/nova/api/metadata/password.py:L29)
- **global-mutation**: MAX_SIZE = CHUNKS * CHUNK_LENGTH (src/nova/api/metadata/password.py:L30)

## Security Surface

- **sink** (`db-write`): instance.system_metadata.update(convert_password(ctxt, req.body)) (src/nova/api/metadata/password.py:L84)

