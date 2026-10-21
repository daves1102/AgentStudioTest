# src/nova/tests/unit/network/test_network_info.py

## Overview

This file implements the `test_network_info` module, defining 8 classs, 2 functions, 77 methods, 7 imports.

Lines: total 1358, code 1154, comment 27, blank 177

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `RouteTests` | class | — | exported | not declared | — | `src/nova/tests/unit/network/test_network_info.py:L27–L58` |
| `RouteTests.test_create_route_with_attrs` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/network/test_network_info.py:L28–L32` |
| `RouteTests.test_routes_equal` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_network_info.py:L34–L37` |
| `RouteTests.test_routes_not_equal` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/network/test_network_info.py:L39–L50` |
| `RouteTests.test_hydrate` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/network/test_network_info.py:L52–L58` |
| `IPTests` | class | — | exported | not declared | — | `src/nova/tests/unit/network/test_network_info.py:L61–L78` |
| `IPTests.test_ip_equal` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_network_info.py:L62–L65` |
| `IPTests.test_ip_not_equal` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/network/test_network_info.py:L67–L78` |
| `FixedIPTests` | class | — | exported | not declared | — | `src/nova/tests/unit/network/test_network_info.py:L81–L139` |
| `FixedIPTests.test_createnew_fixed_ip_with_attrs` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/network/test_network_info.py:L82–L87` |
| `FixedIPTests.test_create_fixed_ipv6` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/network/test_network_info.py:L89–L94` |
| `FixedIPTests.test_create_fixed_bad_ip_fails` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_network_info.py:L96–L99` |
| `FixedIPTests.test_equate_two_fixed_ips` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_network_info.py:L101–L104` |
| `FixedIPTests.test_equate_two_dissimilar_fixed_ips_fails` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/network/test_network_info.py:L106–L121` |
| `FixedIPTests.test_hydrate` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/network/test_network_info.py:L123–L128` |
| `FixedIPTests.test_add_floating_ip` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_network_info.py:L130–L133` |
| `FixedIPTests.test_add_floating_ip_repeatedly_only_one_instance` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/network/test_network_info.py:L135–L139` |
| `SubnetTests` | class | — | exported | not declared | — | `src/nova/tests/unit/network/test_network_info.py:L142–L273` |
| `SubnetTests.test_create_subnet_with_attrs` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/network/test_network_info.py:L143–L160` |
| `SubnetTests.test_subnet_equal` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_network_info.py:L162–L165` |
| `SubnetTests.test_subnet_not_equal` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/network/test_network_info.py:L167–L190` |
| `SubnetTests.test_add_route` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/network/test_network_info.py:L192–L197` |
| `SubnetTests.test_add_route_a_lot` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/network/test_network_info.py:L199–L205` |
| `SubnetTests.test_add_dns` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/network/test_network_info.py:L207–L215` |
| `SubnetTests.test_add_dns_a_lot` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/network/test_network_info.py:L217–L226` |
| `SubnetTests.test_add_ip` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/network/test_network_info.py:L228–L238` |
| `SubnetTests.test_add_ip_a_lot` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/network/test_network_info.py:L240–L251` |
| `SubnetTests.test_hydrate` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/network/test_network_info.py:L253–L273` |
| `NetworkTests` | class | — | exported | not declared | — | `src/nova/tests/unit/network/test_network_info.py:L276–L341` |
| `NetworkTests.test_create_network` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/network/test_network_info.py:L277–L285` |
| `NetworkTests.test_add_subnet` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/network/test_network_info.py:L287–L296` |
| `NetworkTests.test_add_subnet_a_lot` | method | (self) | public | not declared | 2/11 | `src/nova/tests/unit/network/test_network_info.py:L298–L308` |
| `NetworkTests.test_network_equal` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_network_info.py:L310–L313` |
| `NetworkTests.test_network_not_equal` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/network/test_network_info.py:L315–L330` |
| `NetworkTests.test_hydrate` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/network/test_network_info.py:L332–L341` |
| `VIFTests` | class | — | exported | not declared | — | `src/nova/tests/unit/network/test_network_info.py:L344–L465` |
| `VIFTests.test_create_vif` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/network/test_network_info.py:L345–L350` |
| `VIFTests.test_vif_equal` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_network_info.py:L352–L355` |
| `VIFTests.test_vif_not_equal` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/network/test_network_info.py:L357–L400` |
| `VIFTests.test_create_vif_with_type` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/network/test_network_info.py:L402–L413` |
| `VIFTests.test_vif_get_fixed_ips` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_network_info.py:L415–L422` |
| `VIFTests.test_vif_get_fixed_ips_network_is_none` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_network_info.py:L424–L427` |
| `VIFTests.test_vif_get_floating_ips` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/network/test_network_info.py:L429–L433` |
| `VIFTests.test_vif_get_labeled_ips` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/network/test_network_info.py:L435–L445` |
| `VIFTests.test_hydrate` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/network/test_network_info.py:L447–L452` |
| `VIFTests.test_hydrate_vif_with_type` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/network/test_network_info.py:L454–L465` |
| `NetworkInfoTests` | class | — | exported | not declared | — | `src/nova/tests/unit/network/test_network_info.py:L468–L923` |
| `NetworkInfoTests.test_create_model` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/network/test_network_info.py:L469–L477` |
| `NetworkInfoTests.test_create_async_model` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/network/test_network_info.py:L479–L491` |
| `NetworkInfoTests.test_create_async_model.async_wrapper` | function | — | public | `model.NetworkInfo( [fake_network_cache_model.new_vif(), fake_network_cache_model.new_vif( {'address': 'bb:bb:bb:bb:bb:bb'})])` (src/nova/tests/unit/network/test_network_info.py:L481) | — | `src/nova/tests/unit/network/test_network_info.py:L480–L484` |
| `NetworkInfoTests.test_create_async_model_exceptions` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/network/test_network_info.py:L493–L506` |
| `NetworkInfoTests.test_create_async_model_exceptions.async_wrapper` | function | — | public | not declared | — | `src/nova/tests/unit/network/test_network_info.py:L494–L495` |
| `NetworkInfoTests.test_get_floating_ips` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/network/test_network_info.py:L508–L514` |
| `NetworkInfoTests.test_hydrate` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/network/test_network_info.py:L516–L525` |
| `NetworkInfoTests._setup_injected_network_scenario` | method | (self, should_inject=True, use_ipv4=True, use_ipv6=False, gateway=True, dns=True, two_interfaces=False, libvirt_virt_type=None) | private | `netutils.get_injected_network_template( nwinfo, libvirt_virt_type=libvirt_virt_type)` (src/nova/tests/unit/network/test_network_info.py:L577) | 9/41 | `src/nova/tests/unit/network/test_network_info.py:L527–L578` |
| `NetworkInfoTests.test_injection_dynamic` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_network_info.py:L580–L583` |
| `NetworkInfoTests.test_injection_static` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/network/test_network_info.py:L585–L606` |
| `NetworkInfoTests.test_injection_static_no_gateway` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/network/test_network_info.py:L608–L628` |
| `NetworkInfoTests.test_injection_static_no_dns` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/network/test_network_info.py:L630–L650` |
| `NetworkInfoTests.test_injection_static_overridden_template` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/network/test_network_info.py:L652–L677` |
| `NetworkInfoTests.test_injection_static_ipv6` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/network/test_network_info.py:L679–L706` |
| `NetworkInfoTests.test_injection_static_ipv6_no_gateway` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/network/test_network_info.py:L708–L734` |
| `NetworkInfoTests.test_injection_static_with_ipv4_off` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/network/test_network_info.py:L736–L739` |
| `NetworkInfoTests.test_injection_ipv6_only` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/network/test_network_info.py:L741–L762` |
| `NetworkInfoTests.test_injection_ipv6_only_no_gateway` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/network/test_network_info.py:L764–L785` |
| `NetworkInfoTests.test_injection_ipv6_two_interfaces` | method | (self) | public | not declared | 1/44 | `src/nova/tests/unit/network/test_network_info.py:L787–L830` |
| `NetworkInfoTests.test_injection_ipv6_with_lxc` | method | (self) | public | not declared | 1/36 | `src/nova/tests/unit/network/test_network_info.py:L832–L867` |
| `NetworkInfoTests.test_injection_ipv6_with_lxc_no_gateway` | method | (self) | public | not declared | 1/33 | `src/nova/tests/unit/network/test_network_info.py:L869–L901` |
| `NetworkInfoTests.test_has_port_with_allocation` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/network/test_network_info.py:L903–L923` |
| `TestNetworkMetadata` | class | — | exported | not declared | — | `src/nova/tests/unit/network/test_network_info.py:L926–L1358` |
| `TestNetworkMetadata.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/network/test_network_info.py:L927–L929` |
| `TestNetworkMetadata._new_netinfo` | method | (self, vif_type='ethernet') | private | `netinfo` (src/nova/tests/unit/network/test_network_info.py:L942) | 1/9 | `src/nova/tests/unit/network/test_network_info.py:L931–L942` |
| `TestNetworkMetadata.test_get_network_metadata_json` | method | (self) | public | not declared | 1/59 | `src/nova/tests/unit/network/test_network_info.py:L944–L1008` |
| `TestNetworkMetadata.test_get_network_metadata_json_dhcp` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/network/test_network_info.py:L1010–L1038` |
| `TestNetworkMetadata._test_get_network_metadata_json_ipv6_addr_mode` | method | (self, mode) | private | not declared | 1/32 | `src/nova/tests/unit/network/test_network_info.py:L1040–L1073` |
| `TestNetworkMetadata.test_get_network_metadata_json_ipv6_addr_mode_slaac` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_network_info.py:L1075–L1076` |
| `TestNetworkMetadata.test_get_network_metadata_json_ipv6_addr_mode_stateful` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_network_info.py:L1078–L1079` |
| `TestNetworkMetadata.test_get_network_metadata_json_ipv6_addr_mode_stateless` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/network/test_network_info.py:L1081–L1082` |
| `TestNetworkMetadata.test__get_nets` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/network/test_network_info.py:L1084–L1108` |
| `TestNetworkMetadata.test__get_eth_link` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/network/test_network_info.py:L1110–L1120` |
| `TestNetworkMetadata.test__get_eth_link_physical` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/network/test_network_info.py:L1122–L1131` |
| `TestNetworkMetadata.test__get_default_route` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/network/test_network_info.py:L1133–L1156` |
| `TestNetworkMetadata.test__get_dns_services` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/network/test_network_info.py:L1158–L1168` |
| `TestNetworkMetadata.test_get_network_metadata` | method | (self) | public | not declared | 1/100 | `src/nova/tests/unit/network/test_network_info.py:L1170–L1277` |
| `TestNetworkMetadata.test_get_network_metadata_no_ipv4` | method | (self) | public | not declared | 1/49 | `src/nova/tests/unit/network/test_network_info.py:L1279–L1329` |
| `TestNetworkMetadata.test_legacy_vif_types_type_passed_through` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/network/test_network_info.py:L1331–L1348` |
| `TestNetworkMetadata.test_new_vif_types_get_type_phy` | method | (self) | public | not declared | 2/8 | `src/nova/tests/unit/network/test_network_info.py:L1350–L1358` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/tests/unit/network/test_network_info.py:L17)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/network/test_network_info.py:L18)
- `nova`: imports `exception` (src/nova/tests/unit/network/test_network_info.py:L20)
- `nova.network`: imports `model` (src/nova/tests/unit/network/test_network_info.py:L21)
- `nova`: imports `test` (src/nova/tests/unit/network/test_network_info.py:L22)
- `nova.tests.unit`: imports `fake_network_cache_model` (src/nova/tests/unit/network/test_network_info.py:L23)
- `nova.virt`: imports `netutils` (src/nova/tests/unit/network/test_network_info.py:L24)

