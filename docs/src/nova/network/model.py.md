# src/nova/network/model.py

## Overview

This file implements the `model` module, defining 11 classs, 6 classmethods, 69 constants, 1 function, 56 methods, 1 staticmethod, 6 imports, 69 side effects, 1 security surface entry.

Lines: total 633, code 423, comment 83, blank 127

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `VIF_TYPE_OVS` | constant | — | exported | not declared | — | `src/nova/network/model.py:L27–L27` |
| `VIF_TYPE_IVS` | constant | — | exported | not declared | — | `src/nova/network/model.py:L28–L28` |
| `VIF_TYPE_DVS` | constant | — | exported | not declared | — | `src/nova/network/model.py:L29–L29` |
| `VIF_TYPE_IOVISOR` | constant | — | exported | not declared | — | `src/nova/network/model.py:L30–L30` |
| `VIF_TYPE_BRIDGE` | constant | — | exported | not declared | — | `src/nova/network/model.py:L32–L32` |
| `VIF_TYPE_802_QBG` | constant | — | exported | not declared | — | `src/nova/network/model.py:L33–L33` |
| `VIF_TYPE_802_QBH` | constant | — | exported | not declared | — | `src/nova/network/model.py:L34–L34` |
| `VIF_TYPE_HW_VEB` | constant | — | exported | not declared | — | `src/nova/network/model.py:L35–L35` |
| `VIF_TYPE_HYPERV` | constant | — | exported | not declared | — | `src/nova/network/model.py:L36–L36` |
| `VIF_TYPE_HOSTDEV` | constant | — | exported | not declared | — | `src/nova/network/model.py:L37–L37` |
| `VIF_TYPE_IB_HOSTDEV` | constant | — | exported | not declared | — | `src/nova/network/model.py:L38–L38` |
| `VIF_TYPE_MIDONET` | constant | — | exported | not declared | — | `src/nova/network/model.py:L39–L39` |
| `VIF_TYPE_VHOSTUSER` | constant | — | exported | not declared | — | `src/nova/network/model.py:L40–L40` |
| `VIF_TYPE_VROUTER` | constant | — | exported | not declared | — | `src/nova/network/model.py:L41–L41` |
| `VIF_TYPE_OTHER` | constant | — | exported | not declared | — | `src/nova/network/model.py:L42–L42` |
| `VIF_TYPE_TAP` | constant | — | exported | not declared | — | `src/nova/network/model.py:L43–L43` |
| `VIF_TYPE_MACVTAP` | constant | — | exported | not declared | — | `src/nova/network/model.py:L44–L44` |
| `VIF_TYPE_AGILIO_OVS` | constant | — | exported | not declared | — | `src/nova/network/model.py:L45–L45` |
| `VIF_TYPE_BINDING_FAILED` | constant | — | exported | not declared | — | `src/nova/network/model.py:L46–L46` |
| `VIF_TYPE_VIF` | constant | — | exported | not declared | — | `src/nova/network/model.py:L47–L47` |
| `VIF_TYPE_UNBOUND` | constant | — | exported | not declared | — | `src/nova/network/model.py:L48–L48` |
| `VIF_DETAILS_PORT_FILTER` | constant | — | exported | not declared | — | `src/nova/network/model.py:L53–L53` |
| `VIF_DETAILS_OVS_HYBRID_PLUG` | constant | — | exported | not declared | — | `src/nova/network/model.py:L54–L54` |
| `VIF_DETAILS_PHYSICAL_NETWORK` | constant | — | exported | not declared | — | `src/nova/network/model.py:L55–L55` |
| `VIF_DETAILS_BRIDGE_NAME` | constant | — | exported | not declared | — | `src/nova/network/model.py:L56–L56` |
| `VIF_DETAILS_OVS_DATAPATH_TYPE` | constant | — | exported | not declared | — | `src/nova/network/model.py:L57–L57` |
| `VIF_DETAILS_PROFILEID` | constant | — | exported | not declared | — | `src/nova/network/model.py:L61–L61` |
| `VIF_DETAILS_VLAN` | constant | — | exported | not declared | — | `src/nova/network/model.py:L66–L66` |
| `VIF_DETAILS_MACVTAP_SOURCE` | constant | — | exported | not declared | — | `src/nova/network/model.py:L70–L70` |
| `VIF_DETAILS_MACVTAP_MODE` | constant | — | exported | not declared | — | `src/nova/network/model.py:L71–L71` |
| `VIF_DETAILS_PHYS_INTERFACE` | constant | — | exported | not declared | — | `src/nova/network/model.py:L72–L72` |
| `VIF_DETAILS_VHOSTUSER_MODE` | constant | — | exported | not declared | — | `src/nova/network/model.py:L77–L77` |
| `VIF_DETAILS_VHOSTUSER_SOCKET` | constant | — | exported | not declared | — | `src/nova/network/model.py:L79–L79` |
| `VIF_DETAILS_VHOSTUSER_OVS_PLUG` | constant | — | exported | not declared | — | `src/nova/network/model.py:L82–L82` |
| `VIF_DETAILS_VHOSTUSER_FP_PLUG` | constant | — | exported | not declared | — | `src/nova/network/model.py:L85–L85` |
| `VIF_DETAILS_VHOSTUSER_VROUTER_PLUG` | constant | — | exported | not declared | — | `src/nova/network/model.py:L89–L89` |
| `VIF_DETAILS_TAP_MAC_ADDRESS` | constant | — | exported | not declared | — | `src/nova/network/model.py:L93–L93` |
| `VIF_DETAILS_OVS_DATAPATH_SYSTEM` | constant | — | exported | not declared | — | `src/nova/network/model.py:L96–L96` |
| `VIF_DETAILS_OVS_DATAPATH_NETDEV` | constant | — | exported | not declared | — | `src/nova/network/model.py:L97–L97` |
| `VIF_DETAILS_OVS_CREATE_TAP` | constant | — | exported | not declared | — | `src/nova/network/model.py:L102–L102` |
| `VNIC_TYPE_NORMAL` | constant | — | exported | not declared | — | `src/nova/network/model.py:L106–L106` |
| `VNIC_TYPE_DIRECT` | constant | — | exported | not declared | — | `src/nova/network/model.py:L107–L107` |
| `VNIC_TYPE_MACVTAP` | constant | — | exported | not declared | — | `src/nova/network/model.py:L108–L108` |
| `VNIC_TYPE_DIRECT_PHYSICAL` | constant | — | exported | not declared | — | `src/nova/network/model.py:L109–L109` |
| `VNIC_TYPE_BAREMETAL` | constant | — | exported | not declared | — | `src/nova/network/model.py:L110–L110` |
| `VNIC_TYPE_VIRTIO_FORWARDER` | constant | — | exported | not declared | — | `src/nova/network/model.py:L111–L111` |
| `VNIC_TYPE_VDPA` | constant | — | exported | not declared | — | `src/nova/network/model.py:L112–L112` |
| `VNIC_TYPE_ACCELERATOR_DIRECT` | constant | — | exported | not declared | — | `src/nova/network/model.py:L113–L113` |
| `VNIC_TYPE_ACCELERATOR_DIRECT_PHYSICAL` | constant | — | exported | not declared | — | `src/nova/network/model.py:L114–L114` |
| `VNIC_TYPE_REMOTE_MANAGED` | constant | — | exported | not declared | — | `src/nova/network/model.py:L115–L115` |
| `VNIC_TYPES_SRIOV` | constant | — | exported | not declared | — | `src/nova/network/model.py:L129–L132` |
| `VNIC_TYPES_DIRECT_PASSTHROUGH` | constant | — | exported | not declared | — | `src/nova/network/model.py:L136–L140` |
| `VNIC_TYPES_ACCELERATOR` | constant | — | exported | not declared | — | `src/nova/network/model.py:L143–L145` |
| `VIF_MODEL_VIRTIO` | constant | — | exported | not declared | — | `src/nova/network/model.py:L148–L148` |
| `VIF_MODEL_NE2K_PCI` | constant | — | exported | not declared | — | `src/nova/network/model.py:L149–L149` |
| `VIF_MODEL_PCNET` | constant | — | exported | not declared | — | `src/nova/network/model.py:L150–L150` |
| `VIF_MODEL_RTL8139` | constant | — | exported | not declared | — | `src/nova/network/model.py:L151–L151` |
| `VIF_MODEL_E1000` | constant | — | exported | not declared | — | `src/nova/network/model.py:L152–L152` |
| `VIF_MODEL_E1000E` | constant | — | exported | not declared | — | `src/nova/network/model.py:L153–L153` |
| `VIF_MODEL_NETFRONT` | constant | — | exported | not declared | — | `src/nova/network/model.py:L154–L154` |
| `VIF_MODEL_SPAPR_VLAN` | constant | — | exported | not declared | — | `src/nova/network/model.py:L155–L155` |
| `VIF_MODEL_LAN9118` | constant | — | exported | not declared | — | `src/nova/network/model.py:L156–L156` |
| `VIF_MODEL_IGB` | constant | — | exported | not declared | — | `src/nova/network/model.py:L157–L157` |
| `VIF_MODEL_SRIOV` | constant | — | exported | not declared | — | `src/nova/network/model.py:L159–L159` |
| `VIF_MODEL_VMXNET` | constant | — | exported | not declared | — | `src/nova/network/model.py:L160–L160` |
| `VIF_MODEL_VMXNET3` | constant | — | exported | not declared | — | `src/nova/network/model.py:L161–L161` |
| `VIF_MODEL_ALL` | constant | — | exported | not declared | — | `src/nova/network/model.py:L163–L177` |
| `LEGACY_EXPOSED_VIF_TYPES` | constant | — | exported | not declared | — | `src/nova/network/model.py:L180–L189` |
| `NIC_NAME_LEN` | constant | — | exported | not declared | — | `src/nova/network/model.py:L194–L194` |
| `Model` | class | — | exported | not declared | — | `src/nova/network/model.py:L197–L211` |
| `Model.__repr__` | method | (self) | public | `jsonutils.dumps(self)` (src/nova/network/model.py:L201) | 1/2 | `src/nova/network/model.py:L200–L201` |
| `Model._set_meta` | method | (self, kwargs) | private | not declared | 1/3 | `src/nova/network/model.py:L203–L207` |
| `Model.get_meta` | method | (self, key, default=None) | public | `self['meta'].get(key, default)` (src/nova/network/model.py:L211) | 1/2 | `src/nova/network/model.py:L209–L211` |
| `IP` | class | — | exported | not declared | — | `src/nova/network/model.py:L214–L252` |
| `IP.__init__` | method | (self, address=None, type=None, **kwargs) | public | not declared | 4/12 | `src/nova/network/model.py:L217–L232` |
| `IP.__eq__` | method | (self, other) | public | `all(self[k] == other[k] for k in keys)` (src/nova/network/model.py:L236) | 2/3 | `src/nova/network/model.py:L234–L236` |
| `IP.__ne__` | method | (self, other) | public | `not self.__eq__(other)` (src/nova/network/model.py:L239) | 1/2 | `src/nova/network/model.py:L238–L239` |
| `IP.is_in_subnet` | method | (self, subnet) | public | `(netaddr.IPAddress(self['address']) in netaddr.IPNetwork(subnet['cidr']))` (src/nova/network/model.py:L243); `False` (src/nova/network/model.py:L246) | 3/6 | `src/nova/network/model.py:L241–L246` |
| `IP.hydrate` | method | (cls, ip) | public | `cls(**ip)` (src/nova/network/model.py:L251); `None` (src/nova/network/model.py:L252) | 2/4 | `src/nova/network/model.py:L249–L252` |
| `FixedIP` | class | — | exported | not declared | — | `src/nova/network/model.py:L255–L284` |
| `FixedIP.__init__` | method | (self, floating_ips=None, **kwargs) | public | not declared | 3/5 | `src/nova/network/model.py:L258–L263` |
| `FixedIP.add_floating_ip` | method | (self, floating_ip) | public | not declared | 2/3 | `src/nova/network/model.py:L265–L267` |
| `FixedIP.floating_ip_addresses` | method | (self) | public | `[ip['address'] for ip in self['floating_ips']]` (src/nova/network/model.py:L270) | 2/2 | `src/nova/network/model.py:L269–L270` |
| `FixedIP.hydrate` | method | (fixed_ip) | public | `fixed_ip` (src/nova/network/model.py:L277) | 2/5 | `src/nova/network/model.py:L273–L277` |
| `FixedIP.__eq__` | method | (self, other) | public | `all(self[k] == other[k] for k in keys)` (src/nova/network/model.py:L281) | 2/3 | `src/nova/network/model.py:L279–L281` |
| `FixedIP.__ne__` | method | (self, other) | public | `not self.__eq__(other)` (src/nova/network/model.py:L284) | 1/2 | `src/nova/network/model.py:L283–L284` |
| `Route` | class | — | exported | not declared | — | `src/nova/network/model.py:L287–L304` |
| `Route.__init__` | method | (self, cidr=None, gateway=None, interface=None, **kwargs) | public | not declared | 1/6 | `src/nova/network/model.py:L290–L298` |
| `Route.hydrate` | method | (cls, route) | public | `route` (src/nova/network/model.py:L304) | 1/4 | `src/nova/network/model.py:L301–L304` |
| `Subnet` | class | — | exported | not declared | — | `src/nova/network/model.py:L307–L356` |
| `Subnet.__init__` | method | (self, cidr=None, dns=None, gateway=None, ips=None, routes=None, **kwargs) | public | not declared | 6/12 | `src/nova/network/model.py:L310–L324` |
| `Subnet.__eq__` | method | (self, other) | public | `all(self[k] == other[k] for k in keys)` (src/nova/network/model.py:L328) | 2/3 | `src/nova/network/model.py:L326–L328` |
| `Subnet.__ne__` | method | (self, other) | public | `not self.__eq__(other)` (src/nova/network/model.py:L331) | 1/2 | `src/nova/network/model.py:L330–L331` |
| `Subnet.add_route` | method | (self, new_route) | public | not declared | 2/3 | `src/nova/network/model.py:L333–L335` |
| `Subnet.add_dns` | method | (self, dns) | public | not declared | 2/3 | `src/nova/network/model.py:L337–L339` |
| `Subnet.add_ip` | method | (self, ip) | public | not declared | 2/3 | `src/nova/network/model.py:L341–L343` |
| `Subnet.as_netaddr` | method | (self) | public | `netaddr.IPNetwork(self['cidr'])` (src/nova/network/model.py:L347) | 1/2 | `src/nova/network/model.py:L345–L347` |
| `Subnet.hydrate` | method | (cls, subnet) | public | `subnet` (src/nova/network/model.py:L356) | 4/7 | `src/nova/network/model.py:L350–L356` |
| `Network` | class | — | exported | not declared | — | `src/nova/network/model.py:L359–L390` |
| `Network.__init__` | method | (self, id=None, bridge=None, label=None, subnets=None, **kwargs) | public | not declared | 2/8 | `src/nova/network/model.py:L362–L371` |
| `Network.add_subnet` | method | (self, subnet) | public | not declared | 2/3 | `src/nova/network/model.py:L373–L375` |
| `Network.hydrate` | method | (cls, network) | public | `network` (src/nova/network/model.py:L383) | 3/6 | `src/nova/network/model.py:L378–L383` |
| `Network.__eq__` | method | (self, other) | public | `all(self[k] == other[k] for k in keys)` (src/nova/network/model.py:L387) | 2/3 | `src/nova/network/model.py:L385–L387` |
| `Network.__ne__` | method | (self, other) | public | `not self.__eq__(other)` (src/nova/network/model.py:L390) | 1/2 | `src/nova/network/model.py:L389–L390` |
| `VIF8021QbgParams` | class | — | exported | not declared | — | `src/nova/network/model.py:L393–L402` |
| `VIF8021QbgParams.__init__` | method | (self, managerid, typeid, typeidversion, instanceid) | public | not declared | 1/6 | `src/nova/network/model.py:L396–L402` |
| `VIF8021QbhParams` | class | — | exported | not declared | — | `src/nova/network/model.py:L405–L411` |
| `VIF8021QbhParams.__init__` | method | (self, profileid) | public | not declared | 1/3 | `src/nova/network/model.py:L408–L411` |
| `VIF` | class | — | exported | not declared | — | `src/nova/network/model.py:L414–L517` |
| `VIF.__init__` | method | (self, id=None, address=None, network=None, type=None, details=None, devname=None, ovs_interfaceid=None, qbh_params=None, qbg_params=None, active=False, vnic_type=VNIC_TYPE_NORMAL, profile=None, preserve_on_delete=False, delegate_create=False, **kwargs) | public | not declared | 3/22 | `src/nova/network/model.py:L417–L441` |
| `VIF.__eq__` | method | (self, other) | public | `all(self[k] == other[k] for k in keys)` (src/nova/network/model.py:L448) | 2/6 | `src/nova/network/model.py:L443–L448` |
| `VIF.__ne__` | method | (self, other) | public | `not self.__eq__(other)` (src/nova/network/model.py:L451) | 1/2 | `src/nova/network/model.py:L450–L451` |
| `VIF.fixed_ips` | method | (self) | public | `[fixed_ip for subnet in self['network']['subnets'] for fixed_ip in subnet['ips']]` (src/nova/network/model.py:L455); `[]` (src/nova/network/model.py:L458) | 4/6 | `src/nova/network/model.py:L453–L458` |
| `VIF.floating_ips` | method | (self) | public | `[floating_ip for fixed_ip in self.fixed_ips() for floating_ip in fixed_ip['floating_ips']]` (src/nova/network/model.py:L461) | 3/3 | `src/nova/network/model.py:L460–L462` |
| `VIF.labeled_ips` | method | (self) | public | `{'network_label': self['network']['label'], 'network_id': self['network']['id'], 'ips': ips}` (src/nova/network/model.py:L493); `[]` (src/nova/network/model.py:L496) | 4/10 | `src/nova/network/model.py:L464–L496` |
| `VIF.is_hybrid_plug_enabled` | method | (self) | public | `self['details'].get(VIF_DETAILS_OVS_HYBRID_PLUG, False)` (src/nova/network/model.py:L499) | 1/2 | `src/nova/network/model.py:L498–L499` |
| `VIF.is_neutron_filtering_enabled` | method | (self) | public | `self['details'].get(VIF_DETAILS_PORT_FILTER, False)` (src/nova/network/model.py:L502) | 1/2 | `src/nova/network/model.py:L501–L502` |
| `VIF.get_physical_network` | method | (self) | public | `phy_network` (src/nova/network/model.py:L508) | 2/5 | `src/nova/network/model.py:L504–L508` |
| `VIF.hydrate` | method | (cls, vif) | public | `vif` (src/nova/network/model.py:L514) | 1/4 | `src/nova/network/model.py:L511–L514` |
| `VIF.has_allocation` | method | (self) | public | `self['profile'] and bool(self['profile'].get('allocation'))` (src/nova/network/model.py:L517) | 2/2 | `src/nova/network/model.py:L516–L517` |
| `get_netmask` | function | (ip, subnet) | exported | `str(subnet.as_netaddr().netmask)` (src/nova/network/model.py:L523); `subnet.as_netaddr()._prefixlen` (src/nova/network/model.py:L524) | 2/4 | `src/nova/network/model.py:L520–L524` |
| `NetworkInfo` | class | — | exported | not declared | — | `src/nova/network/model.py:L527–L559` |
| `NetworkInfo.fixed_ips` | method | (self) | public | `[ip for vif in self for ip in vif.fixed_ips()]` (src/nova/network/model.py:L534) | 3/2 | `src/nova/network/model.py:L532–L534` |
| `NetworkInfo.floating_ips` | method | (self) | public | `[ip for vif in self for ip in vif.floating_ips()]` (src/nova/network/model.py:L538) | 3/2 | `src/nova/network/model.py:L536–L538` |
| `NetworkInfo.hydrate` | method | (cls, network_info) | public | `cls([VIF.hydrate(vif) for vif in network_info])` (src/nova/network/model.py:L544) | 3/4 | `src/nova/network/model.py:L541–L544` |
| `NetworkInfo.wait` | method | (self, do_raise=True) | public | not declared | 1/2 | `src/nova/network/model.py:L546–L553` |
| `NetworkInfo.json` | method | (self) | public | `jsonutils.dumps(self)` (src/nova/network/model.py:L556) | 1/2 | `src/nova/network/model.py:L555–L556` |
| `NetworkInfo.has_port_with_allocation` | method | (self) | public | `any(vif.has_allocation() for vif in self)` (src/nova/network/model.py:L559) | 2/2 | `src/nova/network/model.py:L558–L559` |
| `NetworkInfoAsyncWrapper` | class | — | exported | not declared | — | `src/nova/network/model.py:L562–L633` |
| `NetworkInfoAsyncWrapper.__init__` | method | (self, async_method, *args, **kwargs) | public | not declared | 2/9 | `src/nova/network/model.py:L583–L592` |
| `NetworkInfoAsyncWrapper._sync_wrapper` | method | (self, wrapped, *args, **kwargs) | private | `wrapped(*args, **kwargs)` (src/nova/network/model.py:L597) | 1/3 | `src/nova/network/model.py:L594–L597` |
| `NetworkInfoAsyncWrapper.__getitem__` | method | (self, *args, **kwargs) | public | `self._sync_wrapper(fn, *args, **kwargs)` (src/nova/network/model.py:L601) | 1/3 | `src/nova/network/model.py:L599–L601` |
| `NetworkInfoAsyncWrapper.__iter__` | method | (self, *args, **kwargs) | public | `self._sync_wrapper(fn, *args, **kwargs)` (src/nova/network/model.py:L605) | 1/3 | `src/nova/network/model.py:L603–L605` |
| `NetworkInfoAsyncWrapper.__len__` | method | (self, *args, **kwargs) | public | `self._sync_wrapper(fn, *args, **kwargs)` (src/nova/network/model.py:L609) | 1/3 | `src/nova/network/model.py:L607–L609` |
| `NetworkInfoAsyncWrapper.__str__` | method | (self, *args, **kwargs) | public | `self._sync_wrapper(fn, *args, **kwargs)` (src/nova/network/model.py:L613) | 1/3 | `src/nova/network/model.py:L611–L613` |
| `NetworkInfoAsyncWrapper.__repr__` | method | (self, *args, **kwargs) | public | `self._sync_wrapper(fn, *args, **kwargs)` (src/nova/network/model.py:L617) | 1/3 | `src/nova/network/model.py:L615–L617` |
| `NetworkInfoAsyncWrapper.wait` | method | (self, do_raise=True) | public | not declared | 5/9 | `src/nova/network/model.py:L619–L633` |
| `IP.hydrate` | classmethod | — | public | not declared | — | `src/nova/network/model.py:L248–L252` |
| `FixedIP.hydrate` | staticmethod | — | public | not declared | — | `src/nova/network/model.py:L272–L277` |
| `Route.hydrate` | classmethod | — | public | not declared | — | `src/nova/network/model.py:L300–L304` |
| `Subnet.hydrate` | classmethod | — | public | not declared | — | `src/nova/network/model.py:L349–L356` |
| `Network.hydrate` | classmethod | — | public | not declared | — | `src/nova/network/model.py:L377–L383` |
| `VIF.hydrate` | classmethod | — | public | not declared | — | `src/nova/network/model.py:L510–L514` |
| `NetworkInfo.hydrate` | classmethod | — | public | not declared | — | `src/nova/network/model.py:L540–L544` |

## Dependencies

- `import functools` (src/nova/network/model.py:L16)
- `import netaddr` (src/nova/network/model.py:L18)
- `oslo_serialization`: imports `jsonutils` (src/nova/network/model.py:L19)
- `nova`: imports `exception` (src/nova/network/model.py:L21)
- `nova.i18n`: imports `_` (src/nova/network/model.py:L22)
- `nova`: imports `thread_pool_factory` (src/nova/network/model.py:L23)

## Side Effects

- **global-mutation**: VIF_TYPE_OVS = 'ovs' (src/nova/network/model.py:L27)
- **global-mutation**: VIF_TYPE_IVS = 'ivs' (src/nova/network/model.py:L28)
- **global-mutation**: VIF_TYPE_DVS = 'dvs' (src/nova/network/model.py:L29)
- **global-mutation**: VIF_TYPE_IOVISOR = 'iovisor' (src/nova/network/model.py:L30)
- **global-mutation**: VIF_TYPE_BRIDGE = 'bridge' (src/nova/network/model.py:L32)
- **global-mutation**: VIF_TYPE_802_QBG = '802.1qbg' (src/nova/network/model.py:L33)
- **global-mutation**: VIF_TYPE_802_QBH = '802.1qbh' (src/nova/network/model.py:L34)
- **global-mutation**: VIF_TYPE_HW_VEB = 'hw_veb' (src/nova/network/model.py:L35)
- **global-mutation**: VIF_TYPE_HYPERV = 'hyperv' (src/nova/network/model.py:L36)
- **global-mutation**: VIF_TYPE_HOSTDEV = 'hostdev_physical' (src/nova/network/model.py:L37)
- **global-mutation**: VIF_TYPE_IB_HOSTDEV = 'ib_hostdev' (src/nova/network/model.py:L38)
- **global-mutation**: VIF_TYPE_MIDONET = 'midonet' (src/nova/network/model.py:L39)
- **global-mutation**: VIF_TYPE_VHOSTUSER = 'vhostuser' (src/nova/network/model.py:L40)
- **global-mutation**: VIF_TYPE_VROUTER = 'vrouter' (src/nova/network/model.py:L41)
- **global-mutation**: VIF_TYPE_OTHER = 'other' (src/nova/network/model.py:L42)
- **global-mutation**: VIF_TYPE_TAP = 'tap' (src/nova/network/model.py:L43)
- **global-mutation**: VIF_TYPE_MACVTAP = 'macvtap' (src/nova/network/model.py:L44)
- **global-mutation**: VIF_TYPE_AGILIO_OVS = 'agilio_ovs' (src/nova/network/model.py:L45)
- **global-mutation**: VIF_TYPE_BINDING_FAILED = 'binding_failed' (src/nova/network/model.py:L46)
- **global-mutation**: VIF_TYPE_VIF = 'vif' (src/nova/network/model.py:L47)
- **global-mutation**: VIF_TYPE_UNBOUND = 'unbound' (src/nova/network/model.py:L48)
- **global-mutation**: VIF_DETAILS_PORT_FILTER = 'port_filter' (src/nova/network/model.py:L53)
- **global-mutation**: VIF_DETAILS_OVS_HYBRID_PLUG = 'ovs_hybrid_plug' (src/nova/network/model.py:L54)
- **global-mutation**: VIF_DETAILS_PHYSICAL_NETWORK = 'physical_network' (src/nova/network/model.py:L55)
- **global-mutation**: VIF_DETAILS_BRIDGE_NAME = 'bridge_name' (src/nova/network/model.py:L56)
- **global-mutation**: VIF_DETAILS_OVS_DATAPATH_TYPE = 'datapath_type' (src/nova/network/model.py:L57)
- **global-mutation**: VIF_DETAILS_PROFILEID = 'profileid' (src/nova/network/model.py:L61)
- **global-mutation**: VIF_DETAILS_VLAN = 'vlan' (src/nova/network/model.py:L66)
- **global-mutation**: VIF_DETAILS_MACVTAP_SOURCE = 'macvtap_source' (src/nova/network/model.py:L70)
- **global-mutation**: VIF_DETAILS_MACVTAP_MODE = 'macvtap_mode' (src/nova/network/model.py:L71)
- **global-mutation**: VIF_DETAILS_PHYS_INTERFACE = 'physical_interface' (src/nova/network/model.py:L72)
- **global-mutation**: VIF_DETAILS_VHOSTUSER_MODE = 'vhostuser_mode' (src/nova/network/model.py:L77)
- **global-mutation**: VIF_DETAILS_VHOSTUSER_SOCKET = 'vhostuser_socket' (src/nova/network/model.py:L79)
- **global-mutation**: VIF_DETAILS_VHOSTUSER_OVS_PLUG = 'vhostuser_ovs_plug' (src/nova/network/model.py:L82)
- **global-mutation**: VIF_DETAILS_VHOSTUSER_FP_PLUG = 'vhostuser_fp_plug' (src/nova/network/model.py:L85)
- **global-mutation**: VIF_DETAILS_VHOSTUSER_VROUTER_PLUG = 'vhostuser_vrouter_plug' (src/nova/network/model.py:L89)
- **global-mutation**: VIF_DETAILS_TAP_MAC_ADDRESS = 'mac_address' (src/nova/network/model.py:L93)
- **global-mutation**: VIF_DETAILS_OVS_DATAPATH_SYSTEM = 'system' (src/nova/network/model.py:L96)
- **global-mutation**: VIF_DETAILS_OVS_DATAPATH_NETDEV = 'netdev' (src/nova/network/model.py:L97)
- **global-mutation**: VIF_DETAILS_OVS_CREATE_TAP = 'ovs_create_tap' (src/nova/network/model.py:L102)
- **global-mutation**: VNIC_TYPE_NORMAL = 'normal' (src/nova/network/model.py:L106)
- **global-mutation**: VNIC_TYPE_DIRECT = 'direct' (src/nova/network/model.py:L107)
- **global-mutation**: VNIC_TYPE_MACVTAP = 'macvtap' (src/nova/network/model.py:L108)
- **global-mutation**: VNIC_TYPE_DIRECT_PHYSICAL = 'direct-physical' (src/nova/network/model.py:L109)
- **global-mutation**: VNIC_TYPE_BAREMETAL = 'baremetal' (src/nova/network/model.py:L110)
- **global-mutation**: VNIC_TYPE_VIRTIO_FORWARDER = 'virtio-forwarder' (src/nova/network/model.py:L111)
- **global-mutation**: VNIC_TYPE_VDPA = 'vdpa' (src/nova/network/model.py:L112)
- **global-mutation**: VNIC_TYPE_ACCELERATOR_DIRECT = 'accelerator-direct' (src/nova/network/model.py:L113)
- **global-mutation**: VNIC_TYPE_ACCELERATOR_DIRECT_PHYSICAL = 'accelerator-direct-physical' (src/nova/network/model.py:L114)
- **global-mutation**: VNIC_TYPE_REMOTE_MANAGED = "remote-managed" (src/nova/network/model.py:L115)
- **global-mutation**: VNIC_TYPES_SRIOV = ( (src/nova/network/model.py:L129)
- **global-mutation**: VNIC_TYPES_DIRECT_PASSTHROUGH = ( (src/nova/network/model.py:L136)
- **global-mutation**: VNIC_TYPES_ACCELERATOR = ( (src/nova/network/model.py:L143)
- **global-mutation**: VIF_MODEL_VIRTIO = 'virtio' (src/nova/network/model.py:L148)
- **global-mutation**: VIF_MODEL_NE2K_PCI = 'ne2k_pci' (src/nova/network/model.py:L149)
- **global-mutation**: VIF_MODEL_PCNET = 'pcnet' (src/nova/network/model.py:L150)
- **global-mutation**: VIF_MODEL_RTL8139 = 'rtl8139' (src/nova/network/model.py:L151)
- **global-mutation**: VIF_MODEL_E1000 = 'e1000' (src/nova/network/model.py:L152)
- **global-mutation**: VIF_MODEL_E1000E = 'e1000e' (src/nova/network/model.py:L153)
- **global-mutation**: VIF_MODEL_NETFRONT = 'netfront' (src/nova/network/model.py:L154)
- **global-mutation**: VIF_MODEL_SPAPR_VLAN = 'spapr-vlan' (src/nova/network/model.py:L155)
- **global-mutation**: VIF_MODEL_LAN9118 = 'lan9118' (src/nova/network/model.py:L156)
- **global-mutation**: VIF_MODEL_IGB = 'igb' (src/nova/network/model.py:L157)
- **global-mutation**: VIF_MODEL_SRIOV = 'sriov' (src/nova/network/model.py:L159)
- **global-mutation**: VIF_MODEL_VMXNET = 'vmxnet' (src/nova/network/model.py:L160)
- **global-mutation**: VIF_MODEL_VMXNET3 = 'vmxnet3' (src/nova/network/model.py:L161)
- **global-mutation**: VIF_MODEL_ALL = ( (src/nova/network/model.py:L163)
- **global-mutation**: LEGACY_EXPOSED_VIF_TYPES = ( (src/nova/network/model.py:L180)
- **global-mutation**: NIC_NAME_LEN = 14 (src/nova/network/model.py:L194)

## Security Surface

- **sink** (`db-write`): self['meta'].update(kwargs) (src/nova/network/model.py:L207)

