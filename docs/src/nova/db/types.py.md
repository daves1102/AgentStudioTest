# src/nova/db/types.py

## Overview

This file implements the `types` module, defining 2 classs, 4 fields, 1 function, 5 methods, 7 imports, 3 security surface entries.

Lines: total 87, code 48, comment 21, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `MediumText` | function | — | exported | `sa.Text().with_variant( sqlalchemy.dialects.mysql.MEDIUMTEXT(), 'mysql')` (src/nova/db/types.py:L33) | 1/3 | `src/nova/db/types.py:L32–L34` |
| `IPAddress` | class | — | exported | not declared | — | `src/nova/db/types.py:L37–L58` |
| `IPAddress.impl` | field | — | public | not declared | — | `src/nova/db/types.py:L40–L40` |
| `IPAddress.cache_ok` | field | — | public | not declared | — | `src/nova/db/types.py:L41–L41` |
| `IPAddress.load_dialect_impl` | method | (self, dialect) | public | `dialect.type_descriptor( sqlalchemy.dialects.postgresql.INET())` (src/nova/db/types.py:L45); `dialect.type_descriptor(types.String(39))` (src/nova/db/types.py:L48) | 2/5 | `src/nova/db/types.py:L43–L48` |
| `IPAddress.process_bind_param` | method | (self, value, dialect) | public | `value` (src/nova/db/types.py:L53); `utils.get_shortened_ipv6(value)` (src/nova/db/types.py:L57); `value` (src/nova/db/types.py:L58) | 3/6 | `src/nova/db/types.py:L50–L58` |
| `CIDR` | class | — | exported | not declared | — | `src/nova/db/types.py:L61–L87` |
| `CIDR.impl` | field | — | public | not declared | — | `src/nova/db/types.py:L64–L64` |
| `CIDR.cache_ok` | field | — | public | not declared | — | `src/nova/db/types.py:L65–L65` |
| `CIDR.load_dialect_impl` | method | (self, dialect) | public | `dialect.type_descriptor( sqlalchemy.dialects.postgresql.INET())` (src/nova/db/types.py:L69); `dialect.type_descriptor(types.String(43))` (src/nova/db/types.py:L72) | 2/5 | `src/nova/db/types.py:L67–L72` |
| `CIDR.process_bind_param` | method | (self, value, dialect) | public | `utils.get_shortened_ipv6_cidr(value)` (src/nova/db/types.py:L78); `value` (src/nova/db/types.py:L79) | 2/4 | `src/nova/db/types.py:L74–L79` |
| `CIDR.process_result_value` | method | (self, value, dialect) | public | `str(netaddr.IPNetwork(value, version=4).cidr)` (src/nova/db/types.py:L83); `str(netaddr.IPNetwork(value, version=6).cidr)` (src/nova/db/types.py:L85); `None` (src/nova/db/types.py:L87) | 3/7 | `src/nova/db/types.py:L81–L87` |

## Dependencies

- `import netaddr` (src/nova/db/types.py:L18)
- `oslo_utils`: imports `netutils` (src/nova/db/types.py:L19)
- `import sqlalchemy as sa` (src/nova/db/types.py:L20)
- `import sqlalchemy.dialects.mysql` (src/nova/db/types.py:L21)
- `import sqlalchemy.dialects.postgresql` (src/nova/db/types.py:L22)
- `sqlalchemy`: imports `types` (src/nova/db/types.py:L23)
- `nova`: imports `utils` (src/nova/db/types.py:L25)

## Security Surface

- **sink** (`db-write`): return sa.Text().with_variant( (src/nova/db/types.py:L33)
- **sink** (`db-write`): """Process/Formats the value before insert it into the db.""" (src/nova/db/types.py:L51)
- **sink** (`db-write`): """Process/Formats the value before insert it into the db.""" (src/nova/db/types.py:L75)

