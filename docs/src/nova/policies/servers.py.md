# src/nova/policies/servers.py

## Overview

This file implements the `servers` module, defining 7 constants, 1 function, 1 variable, 2 imports, 7 side effects, 3 security surface entries.

Lines: total 492, code 458, comment 16, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SERVERS` | constant | — | exported | not declared | — | `src/nova/policies/servers.py:L19–L19` |
| `NETWORK_ATTACH_EXTERNAL` | constant | — | exported | not declared | — | `src/nova/policies/servers.py:L20–L20` |
| `ZERO_DISK_FLAVOR` | constant | — | exported | not declared | — | `src/nova/policies/servers.py:L21–L21` |
| `REQUESTED_DESTINATION` | constant | — | exported | not declared | — | `src/nova/policies/servers.py:L22–L22` |
| `CROSS_CELL_RESIZE` | constant | — | exported | not declared | — | `src/nova/policies/servers.py:L23–L23` |
| `DEPRECATED_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/servers.py:L25–L28` |
| `DEPRECATED_REASON` | constant | — | exported | not declared | — | `src/nova/policies/servers.py:L30–L34` |
| `rules` | variable | — | exported | not declared | — | `src/nova/policies/servers.py:L36–L488` |
| `list_rules` | function | — | exported | `rules` (src/nova/policies/servers.py:L492) | 1/2 | `src/nova/policies/servers.py:L491–L492` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/servers.py:L14)
- `nova.policies`: imports `base` (src/nova/policies/servers.py:L16)

## Side Effects

- **global-mutation**: SERVERS = 'os_compute_api:servers:%s' (src/nova/policies/servers.py:L19)
- **global-mutation**: NETWORK_ATTACH_EXTERNAL = 'network:attach_external_network' (src/nova/policies/servers.py:L20)
- **global-mutation**: ZERO_DISK_FLAVOR = SERVERS % 'create:zero_disk_flavor' (src/nova/policies/servers.py:L21)
- **global-mutation**: REQUESTED_DESTINATION = 'compute:servers:create:requested_destination' (src/nova/policies/servers.py:L22)
- **global-mutation**: CROSS_CELL_RESIZE = 'compute:servers:resize:cross_cell' (src/nova/policies/servers.py:L23)
- **global-mutation**: DEPRECATED_POLICY = policy.DeprecatedRule( (src/nova/policies/servers.py:L25)
- **global-mutation**: DEPRECATED_REASON = """ (src/nova/policies/servers.py:L30)

## Security Surface

- **sink** (`db-write`): cannot select the compute host based on the virtual image size. Therefore, 0 (src/nova/policies/servers.py:L297)
- **sink** (`db-write`): name=SERVERS % 'update', (src/nova/policies/servers.py:L342)
- **sink** (`db-write`): description="Update a server", (src/nova/policies/servers.py:L344)

