# src/nova/console/rfb/auth.py

## Overview

This file implements the `auth` module, defining 2 classs, 16 constants, 2 methods, 2 imports, 16 side effects.

Lines: total 65, code 38, comment 13, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `VERSION_LENGTH` | constant | — | exported | not declared | — | `src/nova/console/rfb/auth.py:L18–L18` |
| `SUBTYPE_LENGTH` | constant | — | exported | not declared | — | `src/nova/console/rfb/auth.py:L19–L19` |
| `AUTH_STATUS_FAIL` | constant | — | exported | not declared | — | `src/nova/console/rfb/auth.py:L21–L21` |
| `AUTH_STATUS_PASS` | constant | — | exported | not declared | — | `src/nova/console/rfb/auth.py:L22–L22` |
| `AuthType` | class | — | exported | not declared | — | `src/nova/console/rfb/auth.py:L26–L39` |
| `AuthType.INVALID` | constant | — | public | not declared | — | `src/nova/console/rfb/auth.py:L28–L28` |
| `AuthType.NONE` | constant | — | public | not declared | — | `src/nova/console/rfb/auth.py:L29–L29` |
| `AuthType.VNC` | constant | — | public | not declared | — | `src/nova/console/rfb/auth.py:L30–L30` |
| `AuthType.RA2` | constant | — | public | not declared | — | `src/nova/console/rfb/auth.py:L31–L31` |
| `AuthType.RA2NE` | constant | — | public | not declared | — | `src/nova/console/rfb/auth.py:L32–L32` |
| `AuthType.TIGHT` | constant | — | public | not declared | — | `src/nova/console/rfb/auth.py:L33–L33` |
| `AuthType.ULTRA` | constant | — | public | not declared | — | `src/nova/console/rfb/auth.py:L34–L34` |
| `AuthType.TLS` | constant | — | public | not declared | — | `src/nova/console/rfb/auth.py:L35–L35` |
| `AuthType.VENCRYPT` | constant | — | public | not declared | — | `src/nova/console/rfb/auth.py:L36–L36` |
| `AuthType.SASL` | constant | — | public | not declared | — | `src/nova/console/rfb/auth.py:L37–L37` |
| `AuthType.ARD` | constant | — | public | not declared | — | `src/nova/console/rfb/auth.py:L38–L38` |
| `AuthType.MSLOGON` | constant | — | public | not declared | — | `src/nova/console/rfb/auth.py:L39–L39` |
| `RFBAuthScheme` | class | — | exported | not declared | — | `src/nova/console/rfb/auth.py:L42–L65` |
| `RFBAuthScheme.security_type` | method | (self) | public | not declared | 1/2 | `src/nova/console/rfb/auth.py:L45–L51` |
| `RFBAuthScheme.security_handshake` | method | (self, compute_sock) | public | not declared | 1/2 | `src/nova/console/rfb/auth.py:L54–L65` |

## Dependencies

- `import abc` (src/nova/console/rfb/auth.py:L15)
- `import enum` (src/nova/console/rfb/auth.py:L16)

## Side Effects

- **global-mutation**: VERSION_LENGTH = 12 (src/nova/console/rfb/auth.py:L18)
- **global-mutation**: SUBTYPE_LENGTH = 4 (src/nova/console/rfb/auth.py:L19)
- **global-mutation**: AUTH_STATUS_FAIL = b"\x00" (src/nova/console/rfb/auth.py:L21)
- **global-mutation**: AUTH_STATUS_PASS = b"\x01" (src/nova/console/rfb/auth.py:L22)
- **global-mutation**: INVALID = 0 (src/nova/console/rfb/auth.py:L28)
- **global-mutation**: NONE = 1 (src/nova/console/rfb/auth.py:L29)
- **global-mutation**: VNC = 2 (src/nova/console/rfb/auth.py:L30)
- **global-mutation**: RA2 = 5 (src/nova/console/rfb/auth.py:L31)
- **global-mutation**: RA2NE = 6 (src/nova/console/rfb/auth.py:L32)
- **global-mutation**: TIGHT = 16 (src/nova/console/rfb/auth.py:L33)
- **global-mutation**: ULTRA = 17 (src/nova/console/rfb/auth.py:L34)
- **global-mutation**: TLS = 18  # Used by VINO (src/nova/console/rfb/auth.py:L35)
- **global-mutation**: VENCRYPT = 19  # Used by VeNCrypt and QEMU (src/nova/console/rfb/auth.py:L36)
- **global-mutation**: SASL = 20  # SASL type used by VINO and QEMU (src/nova/console/rfb/auth.py:L37)
- **global-mutation**: ARD = 30  # Apple remote desktop (screen sharing) (src/nova/console/rfb/auth.py:L38)
- **global-mutation**: MSLOGON = 0xfffffffa  # Used by UltraVNC (src/nova/console/rfb/auth.py:L39)

