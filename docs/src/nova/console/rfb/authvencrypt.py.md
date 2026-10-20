# src/nova/console/rfb/authvencrypt.py

## Overview

This file implements the `authvencrypt` module, defining 2 classs, 11 constants, 1 function, 2 methods, 8 imports, 11 side effects.

Lines: total 162, code 109, comment 22, blank 31

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/console/rfb/authvencrypt.py:L26–L26` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/console/rfb/authvencrypt.py:L27–L27` |
| `AuthVeNCryptSubtype` | class | — | exported | not declared | — | `src/nova/console/rfb/authvencrypt.py:L30–L44` |
| `AuthVeNCryptSubtype.PLAIN` | constant | — | public | not declared | — | `src/nova/console/rfb/authvencrypt.py:L36–L36` |
| `AuthVeNCryptSubtype.TLSNONE` | constant | — | public | not declared | — | `src/nova/console/rfb/authvencrypt.py:L37–L37` |
| `AuthVeNCryptSubtype.TLSVNC` | constant | — | public | not declared | — | `src/nova/console/rfb/authvencrypt.py:L38–L38` |
| `AuthVeNCryptSubtype.TLSPLAIN` | constant | — | public | not declared | — | `src/nova/console/rfb/authvencrypt.py:L39–L39` |
| `AuthVeNCryptSubtype.X509NONE` | constant | — | public | not declared | — | `src/nova/console/rfb/authvencrypt.py:L40–L40` |
| `AuthVeNCryptSubtype.X509VNC` | constant | — | public | not declared | — | `src/nova/console/rfb/authvencrypt.py:L41–L41` |
| `AuthVeNCryptSubtype.X509PLAIN` | constant | — | public | not declared | — | `src/nova/console/rfb/authvencrypt.py:L42–L42` |
| `AuthVeNCryptSubtype.X509SASL` | constant | — | public | not declared | — | `src/nova/console/rfb/authvencrypt.py:L43–L43` |
| `AuthVeNCryptSubtype.TLSSASL` | constant | — | public | not declared | — | `src/nova/console/rfb/authvencrypt.py:L44–L44` |
| `RFBAuthSchemeVeNCrypt` | class | — | exported | not declared | — | `src/nova/console/rfb/authvencrypt.py:L47–L162` |
| `RFBAuthSchemeVeNCrypt.security_type` | method | (self) | public | `auth.AuthType.VENCRYPT` (src/nova/console/rfb/authvencrypt.py:L60) | 1/2 | `src/nova/console/rfb/authvencrypt.py:L59–L60` |
| `RFBAuthSchemeVeNCrypt.security_handshake` | method | (self, compute_sock) | public | `wrapped_sock` (src/nova/console/rfb/authvencrypt.py:L158) | 10/68 | `src/nova/console/rfb/authvencrypt.py:L62–L162` |
| `RFBAuthSchemeVeNCrypt.security_handshake.recv` | function | (num) | public | `b` (src/nova/console/rfb/authvencrypt.py:L70) | — | `src/nova/console/rfb/authvencrypt.py:L63–L70` |

## Dependencies

- `import enum` (src/nova/console/rfb/authvencrypt.py:L15)
- `import ssl` (src/nova/console/rfb/authvencrypt.py:L16)
- `import struct` (src/nova/console/rfb/authvencrypt.py:L17)
- `oslo_config`: imports `cfg` (src/nova/console/rfb/authvencrypt.py:L19)
- `oslo_log`: imports `log as logging` (src/nova/console/rfb/authvencrypt.py:L20)
- `nova.console.rfb`: imports `auth` (src/nova/console/rfb/authvencrypt.py:L22)
- `nova`: imports `exception` (src/nova/console/rfb/authvencrypt.py:L23)
- `nova.i18n`: imports `_` (src/nova/console/rfb/authvencrypt.py:L24)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/console/rfb/authvencrypt.py:L26)
- **global-mutation**: CONF = cfg.CONF (src/nova/console/rfb/authvencrypt.py:L27)
- **global-mutation**: PLAIN = 256 (src/nova/console/rfb/authvencrypt.py:L36)
- **global-mutation**: TLSNONE = 257 (src/nova/console/rfb/authvencrypt.py:L37)
- **global-mutation**: TLSVNC = 258 (src/nova/console/rfb/authvencrypt.py:L38)
- **global-mutation**: TLSPLAIN = 259 (src/nova/console/rfb/authvencrypt.py:L39)
- **global-mutation**: X509NONE = 260 (src/nova/console/rfb/authvencrypt.py:L40)
- **global-mutation**: X509VNC = 261 (src/nova/console/rfb/authvencrypt.py:L41)
- **global-mutation**: X509PLAIN = 262 (src/nova/console/rfb/authvencrypt.py:L42)
- **global-mutation**: X509SASL = 263 (src/nova/console/rfb/authvencrypt.py:L43)
- **global-mutation**: TLSSASL = 264 (src/nova/console/rfb/authvencrypt.py:L44)

