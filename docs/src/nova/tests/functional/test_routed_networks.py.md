# src/nova/tests/functional/test_routed_networks.py

## Overview

This file implements the `test_routed_networks` module, defining 2 classs, 1 constant, 13 fields, 15 methods, 6 imports, 1 side effect, 1 security surface entry.

Lines: total 529, code 387, comment 90, blank 52

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NeutronRoutedNetworksFixture` | class | — | exported | not declared | — | `src/nova/tests/functional/test_routed_networks.py:L23–L279` |
| `NeutronRoutedNetworksFixture.tenant_id` | field | — | public | not declared | — | `src/nova/tests/functional/test_routed_networks.py:L24–L24` |
| `NeutronRoutedNetworksFixture.network_multisegment` | field | — | public | not declared | — | `src/nova/tests/functional/test_routed_networks.py:L26–L56` |
| `NeutronRoutedNetworksFixture.segment_id_0` | field | — | public | not declared | — | `src/nova/tests/functional/test_routed_networks.py:L58–L69` |
| `NeutronRoutedNetworksFixture.segment_id_2` | field | — | public | not declared | — | `src/nova/tests/functional/test_routed_networks.py:L70–L81` |
| `NeutronRoutedNetworksFixture.segments` | field | — | public | not declared | — | `src/nova/tests/functional/test_routed_networks.py:L82–L82` |
| `NeutronRoutedNetworksFixture.subnet_for_segment_id_0` | field | — | public | not declared | — | `src/nova/tests/functional/test_routed_networks.py:L84–L106` |
| `NeutronRoutedNetworksFixture.subnet_for_segment_id_2` | field | — | public | not declared | — | `src/nova/tests/functional/test_routed_networks.py:L108–L130` |
| `NeutronRoutedNetworksFixture.port_with_deferred_ip_allocation` | field | — | public | not declared | — | `src/nova/tests/functional/test_routed_networks.py:L136–L156` |
| `NeutronRoutedNetworksFixture.port_with_deferred_ip_allocation_bound_to_segment_0` | field | — | public | not declared | — | `src/nova/tests/functional/test_routed_networks.py:L159–L160` |
| `NeutronRoutedNetworksFixture.port_on_segment_id_0` | field | — | public | not declared | — | `src/nova/tests/functional/test_routed_networks.py:L168–L189` |
| `NeutronRoutedNetworksFixture.port_on_segment_id_2` | field | — | public | not declared | — | `src/nova/tests/functional/test_routed_networks.py:L191–L212` |
| `NeutronRoutedNetworksFixture.__init__` | method | (self, test) | public | not declared | 1/20 | `src/nova/tests/functional/test_routed_networks.py:L214–L235` |
| `NeutronRoutedNetworksFixture.list_extensions` | method | (self, *args, **kwargs) | public | `{ 'extensions': [ { # Copied from neutron-lib segment.py "updated": "2016-02-24T17:00:00-00:00", "name": constants.SEGMENT, "links": [], "alias": "segment", "description": "Segments extension." } ] }` (src/nova/tests/functional/test_routed_networks.py:L238) | 1/12 | `src/nova/tests/functional/test_routed_networks.py:L237–L249` |
| `NeutronRoutedNetworksFixture.list_subnets` | method | (self, retrieve_all=True, **_params) | public | `{'subnets': filtered_subnets}` (src/nova/tests/functional/test_routed_networks.py:L260); `super().list_subnets(retrieve_all, **_params)` (src/nova/tests/functional/test_routed_networks.py:L262) | 4/12 | `src/nova/tests/functional/test_routed_networks.py:L251–L262` |
| `NeutronRoutedNetworksFixture.create_port` | method | (self, body=None) | public | `super().create_port(body)` (src/nova/tests/functional/test_routed_networks.py:L279) | 2/9 | `src/nova/tests/functional/test_routed_networks.py:L264–L279` |
| `RoutedNetworkTests` | class | — | exported | not declared | — | `src/nova/tests/functional/test_routed_networks.py:L282–L529` |
| `RoutedNetworkTests.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_routed_networks.py:L283–L283` |
| `RoutedNetworkTests.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_routed_networks.py:L284–L284` |
| `RoutedNetworkTests.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/test_routed_networks.py:L285–L285` |
| `RoutedNetworkTests.setUp` | method | (self) | public | not declared | 3/26 | `src/nova/tests/functional/test_routed_networks.py:L287–L330` |
| `RoutedNetworkTests._create_multisegment_placement_setup` | method | (self, segment_to_compute_rp) | private | not declared | 3/38 | `src/nova/tests/functional/test_routed_networks.py:L332–L378` |
| `RoutedNetworkTests.test_boot_with_deferred_port` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_routed_networks.py:L380–L391` |
| `RoutedNetworkTests.test_boot_with_immediate_port` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_routed_networks.py:L393–L404` |
| `RoutedNetworkTests.test_boot_with_network` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/test_routed_networks.py:L406–L425` |
| `RoutedNetworkTests.test_boot_with_two_nics` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_routed_networks.py:L427–L439` |
| `RoutedNetworkTests.test_migrate` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_routed_networks.py:L441–L454` |
| `RoutedNetworkTests.test_live_migrate` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_routed_networks.py:L456–L469` |
| `RoutedNetworkTests.test_evacuate` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_routed_networks.py:L471–L486` |
| `RoutedNetworkTests.test_unshelve_after_shelve` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_routed_networks.py:L488–L502` |
| `RoutedNetworkTests.test_boot_with_immediate_port_fails_due_to_config` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/test_routed_networks.py:L504–L529` |

## Dependencies

- `import copy` (src/nova/tests/functional/test_routed_networks.py:L13)
- `unittest`: imports `mock` (src/nova/tests/functional/test_routed_networks.py:L14)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/test_routed_networks.py:L16)
- `nova.network`: imports `constants` (src/nova/tests/functional/test_routed_networks.py:L18)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/test_routed_networks.py:L19)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_routed_networks.py:L20)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/test_routed_networks.py:L285)

## Security Surface

- **sink** (`db-write`): port_with_deferred_ip_allocation_bound_to_segment_0.update({ (src/nova/tests/functional/test_routed_networks.py:L161)

