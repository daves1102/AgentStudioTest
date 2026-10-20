# src/nova/console/rfb/auths.py

## Overview

This file implements the `auths` module, defining 1 class, 2 constants, 2 methods, 4 imports, 2 side effects.

Lines: total 53, code 27, comment 13, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/console/rfb/auths.py:L21–L21` |
| `RFBAuthSchemeList` | class | — | exported | not declared | — | `src/nova/console/rfb/auths.py:L24–L53` |
| `RFBAuthSchemeList.AUTH_SCHEME_MAP` | constant | — | public | not declared | — | `src/nova/console/rfb/auths.py:L26–L29` |
| `RFBAuthSchemeList.__init__` | method | (self) | public | not declared | 2/5 | `src/nova/console/rfb/auths.py:L31–L37` |
| `RFBAuthSchemeList.find_scheme` | method | (self, desired_types) | public | `self.schemes[security_type]` (src/nova/console/rfb/auths.py:L49) | 5/7 | `src/nova/console/rfb/auths.py:L39–L53` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/console/rfb/auths.py:L15)
- `nova.console.rfb`: imports `authnone` (src/nova/console/rfb/auths.py:L17)
- `nova.console.rfb`: imports `authvencrypt` (src/nova/console/rfb/auths.py:L18)
- `nova`: imports `exception` (src/nova/console/rfb/auths.py:L19)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/console/rfb/auths.py:L21)
- **global-mutation**: AUTH_SCHEME_MAP = { (src/nova/console/rfb/auths.py:L26)

