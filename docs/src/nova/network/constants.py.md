# src/nova/network/constants.py

## Overview

This file implements the `constants` module, defining 20 constants, 20 side effects.

Lines: total 52, code 20, comment 20, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BINDING_PROFILE` | constant | — | exported | not declared | — | `src/nova/network/constants.py:L18–L18` |
| `BINDING_HOST_ID` | constant | — | exported | not declared | — | `src/nova/network/constants.py:L19–L19` |
| `RESOURCE_REQUEST` | constant | — | exported | not declared | — | `src/nova/network/constants.py:L20–L20` |
| `REQUEST_GROUPS` | constant | — | exported | not declared | — | `src/nova/network/constants.py:L21–L21` |
| `NUMA_POLICY` | constant | — | exported | not declared | — | `src/nova/network/constants.py:L22–L22` |
| `MIGRATING_ATTR` | constant | — | exported | not declared | — | `src/nova/network/constants.py:L26–L26` |
| `ALLOCATION` | constant | — | exported | not declared | — | `src/nova/network/constants.py:L27–L27` |
| `DNS_INTEGRATION` | constant | — | exported | not declared | — | `src/nova/network/constants.py:L31–L31` |
| `MULTI_PROVIDER` | constant | — | exported | not declared | — | `src/nova/network/constants.py:L32–L32` |
| `FIP_PORT_DETAILS` | constant | — | exported | not declared | — | `src/nova/network/constants.py:L33–L33` |
| `PORT_BINDING` | constant | — | exported | not declared | — | `src/nova/network/constants.py:L34–L34` |
| `PORT_BINDING_EXTENDED` | constant | — | exported | not declared | — | `src/nova/network/constants.py:L35–L35` |
| `SUBSTR_PORT_FILTERING` | constant | — | exported | not declared | — | `src/nova/network/constants.py:L36–L36` |
| `SEGMENT` | constant | — | exported | not declared | — | `src/nova/network/constants.py:L37–L37` |
| `RESOURCE_REQUEST_GROUPS` | constant | — | exported | not declared | — | `src/nova/network/constants.py:L38–L38` |
| `SG_SHARED_FILTER` | constant | — | exported | not declared | — | `src/nova/network/constants.py:L39–L39` |
| `VNIC_INDEX` | constant | — | exported | not declared | — | `src/nova/network/constants.py:L43–L43` |
| `NET_EXTERNAL` | constant | — | exported | not declared | — | `src/nova/network/constants.py:L47–L47` |
| `DEFAULT_SECGROUP` | constant | — | exported | not declared | — | `src/nova/network/constants.py:L51–L51` |
| `L3_NETWORK_TYPES` | constant | — | exported | not declared | — | `src/nova/network/constants.py:L52–L52` |

## Dependencies

None.

## Side Effects

- **global-mutation**: BINDING_PROFILE = 'binding:profile' (src/nova/network/constants.py:L18)
- **global-mutation**: BINDING_HOST_ID = 'binding:host_id' (src/nova/network/constants.py:L19)
- **global-mutation**: RESOURCE_REQUEST = 'resource_request' (src/nova/network/constants.py:L20)
- **global-mutation**: REQUEST_GROUPS = 'request_groups' (src/nova/network/constants.py:L21)
- **global-mutation**: NUMA_POLICY = 'numa_affinity_policy' (src/nova/network/constants.py:L22)
- **global-mutation**: MIGRATING_ATTR = 'migrating_to' (src/nova/network/constants.py:L26)
- **global-mutation**: ALLOCATION = 'allocation' (src/nova/network/constants.py:L27)
- **global-mutation**: DNS_INTEGRATION = 'dns-integration' (src/nova/network/constants.py:L31)
- **global-mutation**: MULTI_PROVIDER = 'multi-provider' (src/nova/network/constants.py:L32)
- **global-mutation**: FIP_PORT_DETAILS = 'fip-port-details' (src/nova/network/constants.py:L33)
- **global-mutation**: PORT_BINDING = 'binding' (src/nova/network/constants.py:L34)
- **global-mutation**: PORT_BINDING_EXTENDED = 'binding-extended' (src/nova/network/constants.py:L35)
- **global-mutation**: SUBSTR_PORT_FILTERING = 'ip-substring-filtering' (src/nova/network/constants.py:L36)
- **global-mutation**: SEGMENT = 'segment' (src/nova/network/constants.py:L37)
- **global-mutation**: RESOURCE_REQUEST_GROUPS = 'port-resource-request-groups' (src/nova/network/constants.py:L38)
- **global-mutation**: SG_SHARED_FILTER = "security-groups-shared-filtering" (src/nova/network/constants.py:L39)
- **global-mutation**: VNIC_INDEX = 'vnic-index'  # this is provided by the vmware_nsx project (src/nova/network/constants.py:L43)
- **global-mutation**: NET_EXTERNAL = 'router:external' (src/nova/network/constants.py:L47)
- **global-mutation**: DEFAULT_SECGROUP = 'default' (src/nova/network/constants.py:L51)
- **global-mutation**: L3_NETWORK_TYPES = ['vxlan', 'gre', 'geneve'] (src/nova/network/constants.py:L52)

