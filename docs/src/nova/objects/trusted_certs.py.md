# src/nova/objects/trusted_certs.py

## Overview

This file implements the `trusted_certs` module, defining 1 class, 1 constant, 1 field, 1 method, 1 variable, 4 imports, 1 side effect.

Lines: total 41, code 22, comment 12, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/trusted_certs.py:L19–L21` |
| `TrustedCerts` | class | — | exported | not declared | — | `src/nova/objects/trusted_certs.py:L25–L41` |
| `TrustedCerts.VERSION` | constant | — | public | not declared | — | `src/nova/objects/trusted_certs.py:L27–L27` |
| `TrustedCerts.fields` | field | — | public | not declared | — | `src/nova/objects/trusted_certs.py:L29–L31` |
| `TrustedCerts.get_by_instance_uuid` | method | (cls, context, instance_uuid) | public | `None` (src/nova/objects/trusted_certs.py:L39); `cls.obj_from_primitive( jsonutils.loads(db_extra['trusted_certs']))` (src/nova/objects/trusted_certs.py:L40) | 3/7 | `src/nova/objects/trusted_certs.py:L35–L41` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/objects/trusted_certs.py:L13)
- `nova.db.main`: imports `api as db` (src/nova/objects/trusted_certs.py:L15)
- `nova.objects`: imports `base` (src/nova/objects/trusted_certs.py:L16)
- `nova.objects`: imports `fields` (src/nova/objects/trusted_certs.py:L17)

## Side Effects

- **global-mutation**: VERSION = '1.0' (src/nova/objects/trusted_certs.py:L27)

