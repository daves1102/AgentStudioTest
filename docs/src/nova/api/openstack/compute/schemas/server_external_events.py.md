# src/nova/api/openstack/compute/schemas/server_external_events.py

## Overview

This file implements the `server_external_events` module, defining 18 variables, 2 imports, 2 security surface entries.

Lines: total 142, code 116, comment 15, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `create` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_external_events.py:L18–L55` |
| `create_v251` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_external_events.py:L57–L57` |
| `name` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_external_events.py:L58–L58` |
| `create_v276` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_external_events.py:L61–L61` |
| `name` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_external_events.py:L62–L62` |
| `create_v282` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_external_events.py:L65–L65` |
| `name` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_external_events.py:L66–L66` |
| `create_v293` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_external_events.py:L69–L69` |
| `name` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_external_events.py:L70–L70` |
| `create_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_external_events.py:L73–L118` |
| `create_response_v251` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_external_events.py:L120–L120` |
| `name` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_external_events.py:L121–L123` |
| `create_response_v276` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_external_events.py:L126–L126` |
| `name` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_external_events.py:L127–L129` |
| `create_response_v282` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_external_events.py:L132–L132` |
| `name` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_external_events.py:L133–L135` |
| `create_response_v293` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_external_events.py:L138–L138` |
| `name` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/server_external_events.py:L139–L141` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/schemas/server_external_events.py:L14)
- `nova.objects`: imports `external_event as external_event_obj` (src/nova/api/openstack/compute/schemas/server_external_events.py:L16)

## Security Surface

- **sink** (`db-write`): name['enum'].append('power-update') (src/nova/api/openstack/compute/schemas/server_external_events.py:L63)
- **sink** (`db-write`): name['enum'].append('power-update') (src/nova/api/openstack/compute/schemas/server_external_events.py:L130)

