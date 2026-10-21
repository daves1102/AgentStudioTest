# src/nova/tests/unit/fake_hosts.py

## Overview

This file implements the `fake_hosts` module, defining 4 constants, 1 variable, 1 import, 4 side effects.

Lines: total 39, code 17, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `HOST_LIST` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_hosts.py:L23–L25` |
| `OS_API_HOST_LIST` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_hosts.py:L27–L27` |
| `HOST_LIST_NOVA_ZONE` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_hosts.py:L29–L31` |
| `service_base` | variable | — | exported | not declared | — | `src/nova/tests/unit/fake_hosts.py:L33–L33` |
| `SERVICES_LIST` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_hosts.py:L35–L39` |

## Dependencies

- `nova.tests.unit.objects`: imports `test_service` (src/nova/tests/unit/fake_hosts.py:L20)

## Side Effects

- **global-mutation**: HOST_LIST = [ (src/nova/tests/unit/fake_hosts.py:L23)
- **global-mutation**: OS_API_HOST_LIST = {"hosts": HOST_LIST} (src/nova/tests/unit/fake_hosts.py:L27)
- **global-mutation**: HOST_LIST_NOVA_ZONE = [ (src/nova/tests/unit/fake_hosts.py:L29)
- **global-mutation**: SERVICES_LIST = [ (src/nova/tests/unit/fake_hosts.py:L35)

