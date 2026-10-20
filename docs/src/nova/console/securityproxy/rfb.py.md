# src/nova/console/securityproxy/rfb.py

## Overview

This file implements the `rfb` module, defining 1 class, 1 constant, 1 function, 5 methods, 1 staticmethod, 7 imports, 1 side effect.

Lines: total 221, code 147, comment 32, blank 42

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/console/securityproxy/rfb.py:L26–L26` |
| `RFBSecurityProxy` | class | — | exported | not declared | — | `src/nova/console/securityproxy/rfb.py:L29–L221` |
| `RFBSecurityProxy.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/console/securityproxy/rfb.py:L51–L52` |
| `RFBSecurityProxy._make_var_str` | method | (self, message) | private | `message_len + message_bytes` (src/nova/console/securityproxy/rfb.py:L58) | 1/5 | `src/nova/console/securityproxy/rfb.py:L54–L58` |
| `RFBSecurityProxy._fail` | method | (self, tenant_sock, compute_sock, message) | private | not declared | 2/5 | `src/nova/console/securityproxy/rfb.py:L60–L68` |
| `RFBSecurityProxy._parse_version` | method | (version_str) | private | `float("%d.%d" % (int(maj_str), int(min_str)))` (src/nova/console/securityproxy/rfb.py:L80) | 1/4 | `src/nova/console/securityproxy/rfb.py:L71–L80` |
| `RFBSecurityProxy.connect` | method | (self, tenant_sock, compute_sock) | public | `compute_sock` (src/nova/console/securityproxy/rfb.py:L221) | 11/88 | `src/nova/console/securityproxy/rfb.py:L82–L221` |
| `RFBSecurityProxy.connect.recv` | function | (sock, num) | public | `b` (src/nova/console/securityproxy/rfb.py:L100) | — | `src/nova/console/securityproxy/rfb.py:L92–L100` |
| `RFBSecurityProxy._parse_version` | staticmethod | — | private | not declared | — | `src/nova/console/securityproxy/rfb.py:L70–L80` |

## Dependencies

- `import struct` (src/nova/console/securityproxy/rfb.py:L16)
- `oslo_log`: imports `log as logging` (src/nova/console/securityproxy/rfb.py:L18)
- `nova.console.rfb`: imports `auth` (src/nova/console/securityproxy/rfb.py:L20)
- `nova.console.rfb`: imports `auths` (src/nova/console/securityproxy/rfb.py:L21)
- `nova.console.securityproxy`: imports `base` (src/nova/console/securityproxy/rfb.py:L22)
- `nova`: imports `exception` (src/nova/console/securityproxy/rfb.py:L23)
- `nova.i18n`: imports `_` (src/nova/console/securityproxy/rfb.py:L24)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/console/securityproxy/rfb.py:L26)

