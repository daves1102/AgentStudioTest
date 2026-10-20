# src/nova/network/os_vif_util.py

## Overview

This file implements the `os_vif_util` module, defining 3 constants, 21 functions, 6 imports, 3 side effects.

Lines: total 551, code 396, comment 41, blank 114

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/network/os_vif_util.py:L30–L30` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/network/os_vif_util.py:L31–L31` |
| `LEGACY_VIFS` | constant | — | exported | not declared | — | `src/nova/network/os_vif_util.py:L33–L38` |
| `_get_vif_name` | function | (vif) | unexported | `vif['devname']` (src/nova/network/os_vif_util.py:L53); `('nic' + vif['id'])[:model.NIC_NAME_LEN]` (src/nova/network/os_vif_util.py:L54) | 2/4 | `src/nova/network/os_vif_util.py:L41–L54` |
| `_get_hybrid_bridge_name` | function | (vif) | unexported | `('qbr' + vif['id'])[:model.NIC_NAME_LEN]` (src/nova/network/os_vif_util.py:L68) | 1/2 | `src/nova/network/os_vif_util.py:L57–L68` |
| `_set_vhostuser_settings` | function | (vif, obj) | unexported | not declared | 2/10 | `src/nova/network/os_vif_util.py:L71–L88` |
| `nova_to_osvif_instance` | function | (instance) | exported | `info` (src/nova/network/os_vif_util.py:L107) | 3/8 | `src/nova/network/os_vif_util.py:L91–L107` |
| `_nova_to_osvif_ip` | function | (ip) | unexported | `objects.fixed_ip.FixedIP( address=ip['address'], floating_ips=floating_ips)` (src/nova/network/os_vif_util.py:L118) | 2/5 | `src/nova/network/os_vif_util.py:L110–L120` |
| `_nova_to_osvif_ips` | function | (ips) | unexported | `objects.fixed_ip.FixedIPList( objects=[_nova_to_osvif_ip(ip) for ip in ips])` (src/nova/network/os_vif_util.py:L131) | 2/3 | `src/nova/network/os_vif_util.py:L123–L132` |
| `_nova_to_osvif_route` | function | (route) | unexported | `obj` (src/nova/network/os_vif_util.py:L153) | 4/9 | `src/nova/network/os_vif_util.py:L135–L153` |
| `_nova_to_osvif_routes` | function | (routes) | unexported | `objects.route.RouteList( objects=[_nova_to_osvif_route(route) for route in routes])` (src/nova/network/os_vif_util.py:L164) | 2/3 | `src/nova/network/os_vif_util.py:L156–L165` |
| `_nova_to_osvif_subnet` | function | (subnet) | unexported | `obj` (src/nova/network/os_vif_util.py:L187) | 5/12 | `src/nova/network/os_vif_util.py:L168–L187` |
| `_nova_to_osvif_subnets` | function | (subnets) | unexported | `objects.subnet.SubnetList( objects=[_nova_to_osvif_subnet(subnet) for subnet in subnets])` (src/nova/network/os_vif_util.py:L198) | 2/3 | `src/nova/network/os_vif_util.py:L190–L199` |
| `_nova_to_osvif_network` | function | (network) | unexported | `netobj` (src/nova/network/os_vif_util.py:L233) | 8/22 | `src/nova/network/os_vif_util.py:L202–L233` |
| `_get_vif_instance` | function | (vif, cls, plugin, **kwargs) | unexported | `cls( id=vif['id'], address=vif['address'], network=_nova_to_osvif_network(vif['network']), has_traffic_filtering=vif.is_neutron_filtering_enabled(), preserve_on_delete=vif['preserve_on_delete'], activ` (src/nova/network/os_vif_util.py:L245) | 1/10 | `src/nova/network/os_vif_util.py:L236–L253` |
| `_set_representor_datapath_offload_settings` | function | (vif, obj) | unexported | not declared | 1/5 | `src/nova/network/os_vif_util.py:L256–L270` |
| `_get_vnic_direct_vif_instance` | function | (vif, port_profile, plugin, set_bridge=True) | unexported | `obj` (src/nova/network/os_vif_util.py:L294) | 3/12 | `src/nova/network/os_vif_util.py:L273–L294` |
| `_get_ovs_representor_port_profile` | function | (vif) | unexported | `objects.vif.VIFPortProfileOVSRepresentor( interface_id=vif.get('ovs_interfaceid') or vif['id'], representor_name=_get_vif_name(vif), representor_address=vif["profile"]['pci_slot'])` (src/nova/network/os_vif_util.py:L309) | 2/5 | `src/nova/network/os_vif_util.py:L297–L312` |
| `_nova_to_osvif_vif_ovs` | function | (vif) | unexported | `obj` (src/nova/network/os_vif_util.py:L368) | 7/43 | `src/nova/network/os_vif_util.py:L316–L368` |
| `_nova_to_osvif_vif_agilio_ovs` | function | (vif) | unexported | `obj` (src/nova/network/os_vif_util.py:L394) | 4/23 | `src/nova/network/os_vif_util.py:L372–L394` |
| `_nova_to_osvif_vif_vhostuser` | function | (vif) | unexported | `obj` (src/nova/network/os_vif_util.py:L421); `obj` (src/nova/network/os_vif_util.py:L434); `obj` (src/nova/network/os_vif_util.py:L440); `obj` (src/nova/network/os_vif_util.py:L446) | 11/49 | `src/nova/network/os_vif_util.py:L398–L446` |
| `_nova_to_osvif_vif_ivs` | function | (vif) | unexported | `obj` (src/nova/network/os_vif_util.py:L464) | 2/15 | `src/nova/network/os_vif_util.py:L450–L464` |
| `_nova_to_osvif_vif_vrouter` | function | (vif) | unexported | `obj` (src/nova/network/os_vif_util.py:L495) | 4/28 | `src/nova/network/os_vif_util.py:L468–L495` |
| `nova_to_osvif_vif` | function | (vif) | exported | `None` (src/nova/network/os_vif_util.py:L519); `None` (src/nova/network/os_vif_util.py:L531); `vif_obj` (src/nova/network/os_vif_util.py:L551) | 9/26 | `src/nova/network/os_vif_util.py:L498–L551` |

## Dependencies

- `os_vif`: imports `objects` (src/nova/network/os_vif_util.py:L21)
- `oslo_config`: imports `cfg` (src/nova/network/os_vif_util.py:L22)
- `oslo_log`: imports `log as logging` (src/nova/network/os_vif_util.py:L23)
- `nova`: imports `exception` (src/nova/network/os_vif_util.py:L25)
- `nova.i18n`: imports `_` (src/nova/network/os_vif_util.py:L26)
- `nova.network`: imports `model` (src/nova/network/os_vif_util.py:L27)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/network/os_vif_util.py:L30)
- **global-mutation**: CONF = cfg.CONF (src/nova/network/os_vif_util.py:L31)
- **global-mutation**: LEGACY_VIFS = { (src/nova/network/os_vif_util.py:L33)

