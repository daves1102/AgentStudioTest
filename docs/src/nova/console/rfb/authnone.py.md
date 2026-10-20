# src/nova/console/rfb/authnone.py

## Overview

This file implements the `authnone` module, defining 1 class, 2 methods, 1 import.

Lines: total 24, code 6, comment 13, blank 5

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `RFBAuthSchemeNone` | class | — | exported | not declared | — | `src/nova/console/rfb/authnone.py:L18–L24` |
| `RFBAuthSchemeNone.security_type` | method | (self) | public | `auth.AuthType.NONE` (src/nova/console/rfb/authnone.py:L21) | 1/2 | `src/nova/console/rfb/authnone.py:L20–L21` |
| `RFBAuthSchemeNone.security_handshake` | method | (self, compute_sock) | public | `compute_sock` (src/nova/console/rfb/authnone.py:L24) | 1/2 | `src/nova/console/rfb/authnone.py:L23–L24` |

## Dependencies

- `nova.console.rfb`: imports `auth` (src/nova/console/rfb/authnone.py:L15)

