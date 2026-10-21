# src/nova/middleware.py

## Overview

This file implements the `middleware` module, defining 1 function, 1 import, 1 security surface entry.

Lines: total 41, code 25, comment 13, blank 3

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `set_defaults` | function | — | exported | not declared | 1/23 | `src/nova/middleware.py:L18–L41` |

## Dependencies

- `oslo_middleware`: imports `cors` (src/nova/middleware.py:L15)

## Security Surface

- **sink** (`db-write`): """Update default configuration options for oslo.middleware.""" (src/nova/middleware.py:L19)

