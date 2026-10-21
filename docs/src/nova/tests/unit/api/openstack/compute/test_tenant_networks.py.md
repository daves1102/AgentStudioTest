# src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py

## Overview

This file implements the `test_tenant_networks` module, defining 2 classs, 4 constants, 2 fields, 1 function, 9 methods, 9 imports, 5 side effects.

Lines: total 137, code 94, comment 17, blank 26

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L28–L28` |
| `NETWORKS` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L30–L39` |
| `DEFAULT_NETWORK` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L41–L46` |
| `NETWORKS_WITH_DEFAULT_NET` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L48–L48` |
| `fake_network_api_get_all` | function | (context) | exported | `DEFAULT_NETWORK` (src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L54); `NETWORKS` (src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L56) | 2/5 | `src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L52–L56` |
| `TenantNetworksTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L59–L123` |
| `TenantNetworksTestV21.ctrlr` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L60–L60` |
| `TenantNetworksTestV21.validation_error` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L61–L61` |
| `TenantNetworksTestV21.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L63–L71` |
| `TenantNetworksTestV21.tearDown` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L73–L76` |
| `TenantNetworksTestV21.test_network_show` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L78–L88` |
| `TenantNetworksTestV21.test_network_show_not_found` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L90–L97` |
| `TenantNetworksTestV21._test_network_index` | method | (self, default_net=True) | private | not declared | 3/16 | `src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L99–L117` |
| `TenantNetworksTestV21.test_network_index_with_default_net` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L119–L120` |
| `TenantNetworksTestV21.test_network_index_without_default_net` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L122–L123` |
| `TenantNetworksDeprecationTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L126–L137` |
| `TenantNetworksDeprecationTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L128–L131` |
| `TenantNetworksDeprecationTest.test_all_apis_return_not_found` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L133–L137` |

## Dependencies

- `import copy` (src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L16)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L18)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L19)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L20)
- `nova.api.openstack.compute`: imports `tenant_networks as networks_v21` (src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L22–L23)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L24)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L25)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L26)

## Side Effects

- **network**: from nova.api.openstack.compute import tenant_networks \ (src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L22)
- **global-mutation**: CONF = cfg.CONF (src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L28)
- **global-mutation**: NETWORKS = [ (src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L30)
- **global-mutation**: DEFAULT_NETWORK = [ (src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L41)
- **global-mutation**: NETWORKS_WITH_DEFAULT_NET = copy.deepcopy(NETWORKS) (src/nova/tests/unit/api/openstack/compute/test_tenant_networks.py:L48)

