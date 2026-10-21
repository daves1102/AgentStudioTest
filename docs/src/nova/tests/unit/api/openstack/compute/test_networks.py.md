# src/nova/tests/unit/api/openstack/compute/test_networks.py

## Overview

This file implements the `test_networks` module, defining 3 classs, 3 constants, 1 field, 12 methods, 8 imports, 4 side effects.

Lines: total 157, code 106, comment 18, blank 33

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FAKE_NETWORKS` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_networks.py:L31–L40` |
| `USER_RESPONSE_TEMPLATE` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_networks.py:L42–L46` |
| `ADMIN_RESPONSE_TEMPLATE` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_networks.py:L48–L57` |
| `FakeNetworkAPI` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_networks.py:L60–L72` |
| `FakeNetworkAPI.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_networks.py:L62–L63` |
| `FakeNetworkAPI.get_all` | method | (self, context) | public | `self.networks` (src/nova/tests/unit/api/openstack/compute/test_networks.py:L66) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_networks.py:L65–L66` |
| `FakeNetworkAPI.get` | method | (self, context, network_id) | public | `network` (src/nova/tests/unit/api/openstack/compute/test_networks.py:L71) | 3/5 | `src/nova/tests/unit/api/openstack/compute/test_networks.py:L68–L72` |
| `NetworksTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_networks.py:L75–L143` |
| `NetworksTestV21.validation_error` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_networks.py:L76–L76` |
| `NetworksTestV21.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_networks.py:L78–L87` |
| `NetworksTestV21._setup` | method | (self) | private | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_networks.py:L89–L95` |
| `NetworksTestV21.test_network_list_all_as_user` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/api/openstack/compute/test_networks.py:L97–L107` |
| `NetworksTestV21.test_network_list_all_as_admin` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/api/openstack/compute/test_networks.py:L109–L119` |
| `NetworksTestV21.test_network_get_as_user` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_networks.py:L121–L129` |
| `NetworksTestV21.test_network_get_as_admin` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_networks.py:L131–L139` |
| `NetworksTestV21.test_network_get_not_found` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_networks.py:L141–L143` |
| `NetworksDeprecationTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_networks.py:L146–L157` |
| `NetworksDeprecationTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_networks.py:L148–L151` |
| `NetworksDeprecationTest.test_all_api_return_not_found` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_networks.py:L153–L157` |

## Dependencies

- `import copy` (src/nova/tests/unit/api/openstack/compute/test_networks.py:L17)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_networks.py:L19)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_networks.py:L20)
- `nova.api.openstack.compute`: imports `networks as networks_v21` (src/nova/tests/unit/api/openstack/compute/test_networks.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_networks.py:L23)
- `nova.network`: imports `neutron` (src/nova/tests/unit/api/openstack/compute/test_networks.py:L24)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_networks.py:L25)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_networks.py:L26)

## Side Effects

- **network**: from nova.api.openstack.compute import networks as networks_v21 (src/nova/tests/unit/api/openstack/compute/test_networks.py:L22)
- **global-mutation**: FAKE_NETWORKS = [ (src/nova/tests/unit/api/openstack/compute/test_networks.py:L31)
- **global-mutation**: USER_RESPONSE_TEMPLATE = { (src/nova/tests/unit/api/openstack/compute/test_networks.py:L42)
- **global-mutation**: ADMIN_RESPONSE_TEMPLATE = { (src/nova/tests/unit/api/openstack/compute/test_networks.py:L48)

