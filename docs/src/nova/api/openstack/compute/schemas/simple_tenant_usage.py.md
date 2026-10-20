# src/nova/api/openstack/compute/schemas/simple_tenant_usage.py

## Overview

This file implements the `simple_tenant_usage` module, defining 12 variables, 4 imports, 2 security surface entries.

Lines: total 185, code 141, comment 29, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `index_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/simple_tenant_usage.py:L22–L34` |
| `show_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/simple_tenant_usage.py:L36–L47` |
| `index_query_v240` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/simple_tenant_usage.py:L49–L49` |
| `show_query_v240` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/simple_tenant_usage.py:L53–L53` |
| `index_query_v275` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/simple_tenant_usage.py:L57–L57` |
| `show_query_v275` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/simple_tenant_usage.py:L60–L60` |
| `_server_usage_response` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/simple_tenant_usage.py:L63–L110` |
| `_usage_response` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/simple_tenant_usage.py:L112–L139` |
| `index_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/simple_tenant_usage.py:L141–L151` |
| `index_response_v240` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/simple_tenant_usage.py:L153–L153` |
| `show_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/simple_tenant_usage.py:L158–L177` |
| `show_response_v240` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/simple_tenant_usage.py:L182–L182` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/schemas/simple_tenant_usage.py:L15)
- `nova.api.validation`: imports `parameter_types` (src/nova/api/openstack/compute/schemas/simple_tenant_usage.py:L17)
- `nova.api.validation`: imports `response_types` (src/nova/api/openstack/compute/schemas/simple_tenant_usage.py:L18)
- `nova.compute`: imports `vm_states` (src/nova/api/openstack/compute/schemas/simple_tenant_usage.py:L19)

## Security Surface

- **sink** (`db-write`): index_query_v240['properties'].update( (src/nova/api/openstack/compute/schemas/simple_tenant_usage.py:L50)
- **sink** (`db-write`): show_query_v240['properties'].update( (src/nova/api/openstack/compute/schemas/simple_tenant_usage.py:L54)

