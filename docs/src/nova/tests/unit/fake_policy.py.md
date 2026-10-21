# src/nova/tests/unit/fake_policy.py

## Overview

This file implements the `fake_policy` module, defining 1 variable, 12 security surface entries.

Lines: total 221, code 204, comment 13, blank 4

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `policy_data` | variable | — | exported | not declared | — | `src/nova/tests/unit/fake_policy.py:L16–L221` |

## Dependencies

None.

## Security Surface

- **sink** (`db-write`): "os_compute_api:servers:update": "", (src/nova/tests/unit/fake_policy.py:L29)
- **sink** (`db-write`): "os_compute_api:os-aggregates:update": "", (src/nova/tests/unit/fake_policy.py:L63)
- **sink** (`db-write`): "os_compute_api:os-flavor-extra-specs:update": "", (src/nova/tests/unit/fake_policy.py:L88)
- **sink** (`db-write`): "os_compute_api:os-flavor-manage:update": "", (src/nova/tests/unit/fake_policy.py:L93)
- **sink** (`db-write`): "os_compute_api:os-hosts:update": "", (src/nova/tests/unit/fake_policy.py:L114)
- **sink** (`db-write`): "os_compute_api:os-quota-sets:update": "", (src/nova/tests/unit/fake_policy.py:L144)
- **sink** (`db-write`): "os_compute_api:os-quota-class-sets:update": "", (src/nova/tests/unit/fake_policy.py:L148)
- **sink** (`db-write`): "os_compute_api:os-security-groups:update": "", (src/nova/tests/unit/fake_policy.py:L159)
- **sink** (`db-write`): "os_compute_api:os-server-tags:update": "", (src/nova/tests/unit/fake_policy.py:L172)
- **sink** (`db-write`): "os_compute_api:os-services:update": "", (src/nova/tests/unit/fake_policy.py:L182)
- **sink** (`db-write`): "os_compute_api:os-volumes-attachments:update": "", (src/nova/tests/unit/fake_policy.py:L204)
- **sink** (`db-write`): "os_compute_api:server-metadata:update": "", (src/nova/tests/unit/fake_policy.py:L213)

