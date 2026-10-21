# src/nova/vtpm.py

## Overview

This file implements the `vtpm` module, defining 4 functions, 5 imports.

Lines: total 75, code 48, comment 11, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `get_instance_tpm_secret_security` | function | (flavor) | exported | `secret_security or 'user'` (src/nova/vtpm.py:L25) | 2/3 | `src/nova/vtpm.py:L23–L25` |
| `get_or_create_secret` | function | (context, instance) | exported | `crypto.ensure_vtpm_secret(use_context, instance)` (src/nova/vtpm.py:L37) | 1/6 | `src/nova/vtpm.py:L28–L37` |
| `delete_secret` | function | (context, instance, flavor=None) | exported | not declared | 2/8 | `src/nova/vtpm.py:L40–L59` |
| `get_request_context` | function | (context, flavor) | exported | `nova_context.get_nova_service_user_context()` (src/nova/vtpm.py:L74); `context` (src/nova/vtpm.py:L75) | 2/7 | `src/nova/vtpm.py:L62–L75` |

## Dependencies

- `import typing as ty` (src/nova/vtpm.py:L13)
- `nova`: imports `objects` (src/nova/vtpm.py:L16)
- `nova`: imports `context as nova_context` (src/nova/vtpm.py:L18)
- `nova`: imports `crypto` (src/nova/vtpm.py:L19)
- `nova.virt`: imports `hardware` (src/nova/vtpm.py:L20)

