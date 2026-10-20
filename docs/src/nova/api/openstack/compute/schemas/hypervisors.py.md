# src/nova/api/openstack/compute/schemas/hypervisors.py

## Overview

This file implements the `hypervisors` module, defining 33 variables, 3 imports, 10 security surface entries.

Lines: total 367, code 293, comment 41, blank 33

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `index_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L20–L24` |
| `index_query_v233` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L26–L34` |
| `index_query_v253` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L36–L52` |
| `show_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L54–L58` |
| `show_query_v253` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L60–L67` |
| `statistics_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L71–L71` |
| `search_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L72–L72` |
| `servers_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L73–L73` |
| `uptime_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L74–L74` |
| `_servers_response` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L76–L87` |
| `_hypervisor_response` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L89–L99` |
| `_hypervisor_response_v253` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L101–L101` |
| `_hypervisor_detail_response` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L107–L162` |
| `_hypervisor_detail_response_v228` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L164–L164` |
| `_hypervisor_detail_response_v253` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L175–L177` |
| `_hypervisor_detail_response_v288` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L188–L190` |
| `index_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L212–L222` |
| `index_response_v233` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L225–L225` |
| `index_response_v253` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L236–L236` |
| `search_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L241–L241` |
| `servers_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L243–L243` |
| `detail_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L248–L248` |
| `detail_response_v228` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L254–L254` |
| `detail_response_v233` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L260–L260` |
| `detail_response_v253` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L271–L271` |
| `detail_response_v288` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L278–L278` |
| `show_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L283–L290` |
| `show_response_v228` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L292–L292` |
| `show_response_v253` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L297–L297` |
| `show_response_v288` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L302–L302` |
| `uptime_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L307–L314` |
| `uptime_response_v253` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L320–L320` |
| `statistics_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/hypervisors.py:L329–L367` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/schemas/hypervisors.py:L15)
- `nova.api.validation`: imports `parameter_types` (src/nova/api/openstack/compute/schemas/hypervisors.py:L17)
- `nova.api.validation`: imports `response_types` (src/nova/api/openstack/compute/schemas/hypervisors.py:L18)

## Security Surface

- **sink** (`db-write`): _hypervisor_response_v253['properties'].update({ (src/nova/api/openstack/compute/schemas/hypervisors.py:L102)
- **sink** (`db-write`): _hypervisor_detail_response_v228['properties'].update({ (src/nova/api/openstack/compute/schemas/hypervisors.py:L165)
- **sink** (`db-write`): _hypervisor_detail_response_v253['properties'].update({ (src/nova/api/openstack/compute/schemas/hypervisors.py:L178)
- **sink** (`db-write`): ].update({ (src/nova/api/openstack/compute/schemas/hypervisors.py:L184)
- **sink** (`db-write`): _hypervisor_detail_response_v288['properties'].update({ (src/nova/api/openstack/compute/schemas/hypervisors.py:L207)
- **sink** (`db-write`): index_response_v233['properties'].update({ (src/nova/api/openstack/compute/schemas/hypervisors.py:L226)
- **sink** (`db-write`): servers_response['properties']['hypervisors']['items']['properties'].update({ (src/nova/api/openstack/compute/schemas/hypervisors.py:L244)
- **sink** (`db-write`): detail_response_v233['properties'].update({ (src/nova/api/openstack/compute/schemas/hypervisors.py:L261)
- **sink** (`db-write`): uptime_response['properties']['hypervisor']['properties'].update({ (src/nova/api/openstack/compute/schemas/hypervisors.py:L315)
- **sink** (`db-write`): uptime_response_v253['properties']['hypervisor']['properties'].update({ (src/nova/api/openstack/compute/schemas/hypervisors.py:L324)

