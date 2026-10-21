# src/nova/virt/libvirt/config.py

## Overview

This file implements the `config` module, defining 114 classs, 3 classmethods, 16 constants, 2 functions, 312 methods, 17 propertys, 2 staticmethods, 11 imports, 17 side effects.

Lines: total 4271, code 3239, comment 141, blank 891

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L40–L40` |
| `NOVA_NS` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L43–L43` |
| `make_libvirt_device_alias` | function | (identifier) | exported | `'ua-%s' % identifier` (src/nova/virt/libvirt/config.py:L47) | 1/2 | `src/nova/virt/libvirt/config.py:L46–L47` |
| `parse_libvirt_device_alias` | function | (alias) | exported | `alias.split('-', 1)[1]` (src/nova/virt/libvirt/config.py:L52); `alias` (src/nova/virt/libvirt/config.py:L54) | 2/5 | `src/nova/virt/libvirt/config.py:L50–L54` |
| `LibvirtConfigObject` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L57–L122` |
| `LibvirtConfigObject.__init__` | method | (self, *, root_name, ns_prefix=None, ns_uri=None) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L59–L64` |
| `LibvirtConfigObject._new_node` | method | (self, node_name, **kwargs) | private | `etree.Element(node_name, **kwargs)` (src/nova/virt/libvirt/config.py:L68); `etree.Element("{" + self.ns_uri + "}" + node_name, nsmap={self.ns_prefix: self.ns_uri}, **kwargs)` (src/nova/virt/libvirt/config.py:L70) | 2/7 | `src/nova/virt/libvirt/config.py:L66–L72` |
| `LibvirtConfigObject._text_node` | method | (self, node_name, value, **kwargs) | private | `child` (src/nova/virt/libvirt/config.py:L78) | 2/5 | `src/nova/virt/libvirt/config.py:L74–L78` |
| `LibvirtConfigObject.format_dom` | method | (self) | public | `self._new_node(self.root_name)` (src/nova/virt/libvirt/config.py:L81) | 1/2 | `src/nova/virt/libvirt/config.py:L80–L81` |
| `LibvirtConfigObject.parse_str` | method | (self, xmlstr) | public | not declared | 2/6 | `src/nova/virt/libvirt/config.py:L83–L88` |
| `LibvirtConfigObject.parse_dom` | method | (self, xmldoc) | public | not declared | 2/5 | `src/nova/virt/libvirt/config.py:L90–L94` |
| `LibvirtConfigObject.to_xml` | method | (self, pretty_print=True) | public | `xml_str` (src/nova/virt/libvirt/config.py:L100) | 1/5 | `src/nova/virt/libvirt/config.py:L96–L100` |
| `LibvirtConfigObject.parse_on_off_str` | method | (self, value) | public | `value == 'on'` (src/nova/virt/libvirt/config.py:L111) | 3/8 | `src/nova/virt/libvirt/config.py:L103–L111` |
| `LibvirtConfigObject.get_yes_no_str` | method | (self, value) | public | `'yes' if value else 'no'` (src/nova/virt/libvirt/config.py:L115) | 2/2 | `src/nova/virt/libvirt/config.py:L114–L115` |
| `LibvirtConfigObject.get_on_off_str` | method | (self, value) | public | `'on' if value else 'off'` (src/nova/virt/libvirt/config.py:L119) | 2/2 | `src/nova/virt/libvirt/config.py:L118–L119` |
| `LibvirtConfigObject.__repr__` | method | (self) | public | `self.to_xml(pretty_print=False)` (src/nova/virt/libvirt/config.py:L122) | 1/2 | `src/nova/virt/libvirt/config.py:L121–L122` |
| `LibvirtConfigCaps` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L125–L154` |
| `LibvirtConfigCaps.__init__` | method | (self, **kwargs) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L127–L131` |
| `LibvirtConfigCaps.parse_dom` | method | (self, xmldoc) | public | not declared | 4/11 | `src/nova/virt/libvirt/config.py:L133–L144` |
| `LibvirtConfigCaps.format_dom` | method | (self) | public | `caps` (src/nova/virt/libvirt/config.py:L154) | 3/7 | `src/nova/virt/libvirt/config.py:L146–L154` |
| `LibvirtConfigDomainCaps` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L157–L217` |
| `LibvirtConfigDomainCaps.__init__` | method | (self, **kwargs) | public | not declared | 1/8 | `src/nova/virt/libvirt/config.py:L159–L166` |
| `LibvirtConfigDomainCaps.parse_dom` | method | (self, xmldoc) | public | not declared | 6/17 | `src/nova/virt/libvirt/config.py:L168–L185` |
| `LibvirtConfigDomainCaps.features` | method | (self) | public | `[]` (src/nova/virt/libvirt/config.py:L190); `self._features.features` (src/nova/virt/libvirt/config.py:L191) | 2/4 | `src/nova/virt/libvirt/config.py:L188–L191` |
| `LibvirtConfigDomainCaps.machine_type` | method | (self) | public | `""` (src/nova/virt/libvirt/config.py:L196); `self._machine` (src/nova/virt/libvirt/config.py:L197) | 2/4 | `src/nova/virt/libvirt/config.py:L194–L197` |
| `LibvirtConfigDomainCaps.machine_type_alias` | method | (self) | public | `self._machine` (src/nova/virt/libvirt/config.py:L202); `self._alias` (src/nova/virt/libvirt/config.py:L203) | 2/4 | `src/nova/virt/libvirt/config.py:L200–L203` |
| `LibvirtConfigDomainCaps.machine_type_alias` | method | (self, alias) | public | not declared | 1/2 | `src/nova/virt/libvirt/config.py:L206–L207` |
| `LibvirtConfigDomainCaps.devices` | method | (self) | public | `[]` (src/nova/virt/libvirt/config.py:L212); `self._devices` (src/nova/virt/libvirt/config.py:L213) | 2/4 | `src/nova/virt/libvirt/config.py:L210–L213` |
| `LibvirtConfigDomainCaps.os` | method | (self) | public | `self._os` (src/nova/virt/libvirt/config.py:L217) | 1/2 | `src/nova/virt/libvirt/config.py:L216–L217` |
| `LibvirtConfigDomainCapsVideoModels` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L220–L233` |
| `LibvirtConfigDomainCapsVideoModels.__init__` | method | (self, **kwargs) | public | not declared | 1/4 | `src/nova/virt/libvirt/config.py:L222–L225` |
| `LibvirtConfigDomainCapsVideoModels.parse_dom` | method | (self, xmldoc) | public | not declared | 3/6 | `src/nova/virt/libvirt/config.py:L227–L233` |
| `LibvirtConfigDomainCapsDiskBuses` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L236–L249` |
| `LibvirtConfigDomainCapsDiskBuses.__init__` | method | (self, **kwargs) | public | not declared | 1/4 | `src/nova/virt/libvirt/config.py:L238–L241` |
| `LibvirtConfigDomainCapsDiskBuses.parse_dom` | method | (self, xmldoc) | public | not declared | 3/6 | `src/nova/virt/libvirt/config.py:L243–L249` |
| `LibvirtConfigDomainCapsTpm` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L252–L283` |
| `LibvirtConfigDomainCapsTpm.__init__` | method | (self, **kwargs) | public | not declared | 1/6 | `src/nova/virt/libvirt/config.py:L254–L261` |
| `LibvirtConfigDomainCapsTpm.parse_dom` | method | (self, xmldoc) | public | not declared | 14/20 | `src/nova/virt/libvirt/config.py:L263–L283` |
| `LibvirtConfigDomainCapsDevices` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L286–L323` |
| `LibvirtConfigDomainCapsDevices.DEVICE_PARSERS` | constant | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L287–L291` |
| `LibvirtConfigDomainCapsDevices.__init__` | method | (self, **kwargs) | public | not declared | 1/3 | `src/nova/virt/libvirt/config.py:L293–L295` |
| `LibvirtConfigDomainCapsDevices.parse_dom` | method | (self, xmldoc) | public | not declared | 3/8 | `src/nova/virt/libvirt/config.py:L297–L305` |
| `LibvirtConfigDomainCapsDevices._get_device` | method | (self, device_type) | private | `device` (src/nova/virt/libvirt/config.py:L310); `None` (src/nova/virt/libvirt/config.py:L311) | 3/5 | `src/nova/virt/libvirt/config.py:L307–L311` |
| `LibvirtConfigDomainCapsDevices.disk` | method | (self) | public | `self._get_device('disk')` (src/nova/virt/libvirt/config.py:L315) | 1/2 | `src/nova/virt/libvirt/config.py:L314–L315` |
| `LibvirtConfigDomainCapsDevices.video` | method | (self) | public | `self._get_device('video')` (src/nova/virt/libvirt/config.py:L319) | 1/2 | `src/nova/virt/libvirt/config.py:L318–L319` |
| `LibvirtConfigDomainCapsDevices.tpm` | method | (self) | public | `self._get_device('tpm')` (src/nova/virt/libvirt/config.py:L323) | 1/2 | `src/nova/virt/libvirt/config.py:L322–L323` |
| `LibvirtConfigDomainCapsFeatures` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L326–L358` |
| `LibvirtConfigDomainCapsFeatures.__init__` | method | (self, **kwargs) | public | not declared | 1/4 | `src/nova/virt/libvirt/config.py:L328–L331` |
| `LibvirtConfigDomainCapsFeatures.parse_dom` | method | (self, xmldoc) | public | not declared | 6/13 | `src/nova/virt/libvirt/config.py:L333–L351` |
| `LibvirtConfigDomainCapsFeatures.format_dom` | method | (self) | public | not declared | 1/2 | `src/nova/virt/libvirt/config.py:L357–L358` |
| `LibvirtConfigDomainCapsFeatureSev` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L361–L379` |
| `LibvirtConfigDomainCapsFeatureSev.__init__` | method | (self, **kwargs) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L363–L367` |
| `LibvirtConfigDomainCapsFeatureSev.parse_dom` | method | (self, xmldoc) | public | not declared | 5/9 | `src/nova/virt/libvirt/config.py:L369–L379` |
| `LibvirtConfigDomainCapsFeatureLaunchSecurity` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L382–L399` |
| `LibvirtConfigDomainCapsFeatureLaunchSecurity.__init__` | method | (self, **kwargs) | public | not declared | 1/4 | `src/nova/virt/libvirt/config.py:L384–L387` |
| `LibvirtConfigDomainCapsFeatureLaunchSecurity.parse_dom` | method | (self, xmldoc) | public | not declared | 7/9 | `src/nova/virt/libvirt/config.py:L389–L399` |
| `LibvirtConfigDomainCapsFeatureTDX` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L402–L412` |
| `LibvirtConfigDomainCapsFeatureTDX.__init__` | method | (self, **kwargs) | public | not declared | 1/3 | `src/nova/virt/libvirt/config.py:L404–L406` |
| `LibvirtConfigDomainCapsFeatureTDX.parse_dom` | method | (self, xmldoc) | public | not declared | 2/4 | `src/nova/virt/libvirt/config.py:L408–L412` |
| `LibvirtConfigDomainCapsOS` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L415–L456` |
| `LibvirtConfigDomainCapsOS.__init__` | method | (self, **kwargs) | public | not declared | 1/8 | `src/nova/virt/libvirt/config.py:L417–L425` |
| `LibvirtConfigDomainCapsOS.parse_dom` | method | (self, xmldoc) | public | not declared | 16/23 | `src/nova/virt/libvirt/config.py:L427–L456` |
| `LibvirtConfigCapsNUMATopology` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L459–L487` |
| `LibvirtConfigCapsNUMATopology.__init__` | method | (self, **kwargs) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L461–L466` |
| `LibvirtConfigCapsNUMATopology.parse_dom` | method | (self, xmldoc) | public | not declared | 2/7 | `src/nova/virt/libvirt/config.py:L468–L475` |
| `LibvirtConfigCapsNUMATopology.format_dom` | method | (self) | public | `topo` (src/nova/virt/libvirt/config.py:L487) | 2/8 | `src/nova/virt/libvirt/config.py:L477–L487` |
| `LibvirtConfigCapsNUMACell` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L490–L537` |
| `LibvirtConfigCapsNUMACell.__init__` | method | (self, **kwargs) | public | not declared | 1/7 | `src/nova/virt/libvirt/config.py:L492–L499` |
| `LibvirtConfigCapsNUMACell.parse_dom` | method | (self, xmldoc) | public | not declared | 6/15 | `src/nova/virt/libvirt/config.py:L501–L516` |
| `LibvirtConfigCapsNUMACell.format_dom` | method | (self) | public | `cell` (src/nova/virt/libvirt/config.py:L537) | 3/15 | `src/nova/virt/libvirt/config.py:L518–L537` |
| `LibvirtConfigCapsNUMACPU` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L540–L576` |
| `LibvirtConfigCapsNUMACPU.__init__` | method | (self, **kwargs) | public | not declared | 1/7 | `src/nova/virt/libvirt/config.py:L542–L549` |
| `LibvirtConfigCapsNUMACPU.parse_dom` | method | (self, xmldoc) | public | not declared | 4/10 | `src/nova/virt/libvirt/config.py:L551–L562` |
| `LibvirtConfigCapsNUMACPU.format_dom` | method | (self) | public | `cpu` (src/nova/virt/libvirt/config.py:L576) | 4/11 | `src/nova/virt/libvirt/config.py:L564–L576` |
| `LibvirtConfigCapsNUMAPages` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L579–L601` |
| `LibvirtConfigCapsNUMAPages.__init__` | method | (self, **kwargs) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L581–L586` |
| `LibvirtConfigCapsNUMAPages.parse_dom` | method | (self, xmldoc) | public | not declared | 1/4 | `src/nova/virt/libvirt/config.py:L588–L592` |
| `LibvirtConfigCapsNUMAPages.format_dom` | method | (self) | public | `pages` (src/nova/virt/libvirt/config.py:L601) | 1/6 | `src/nova/virt/libvirt/config.py:L594–L601` |
| `LibvirtConfigCapsHost` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L604–L638` |
| `LibvirtConfigCapsHost.__init__` | method | (self, **kwargs) | public | not declared | 1/6 | `src/nova/virt/libvirt/config.py:L606–L612` |
| `LibvirtConfigCapsHost.parse_dom` | method | (self, xmldoc) | public | not declared | 5/12 | `src/nova/virt/libvirt/config.py:L614–L626` |
| `LibvirtConfigCapsHost.format_dom` | method | (self) | public | `caps` (src/nova/virt/libvirt/config.py:L638) | 4/9 | `src/nova/virt/libvirt/config.py:L628–L638` |
| `LibvirtConfigCapsGuest` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L641–L722` |
| `LibvirtConfigCapsGuest.__init__` | method | (self, **kwargs) | public | not declared | 1/7 | `src/nova/virt/libvirt/config.py:L643–L652` |
| `LibvirtConfigCapsGuest.parse_dom` | method | (self, xmldoc) | public | not declared | 4/7 | `src/nova/virt/libvirt/config.py:L654–L661` |
| `LibvirtConfigCapsGuest.parse_arch` | method | (self, xmldoc) | public | not declared | 4/15 | `src/nova/virt/libvirt/config.py:L663–L696` |
| `LibvirtConfigCapsGuest.format_dom` | method | (self) | public | `caps` (src/nova/virt/libvirt/config.py:L707) | 3/8 | `src/nova/virt/libvirt/config.py:L698–L707` |
| `LibvirtConfigCapsGuest.format_arch` | method | (self) | public | `arch` (src/nova/virt/libvirt/config.py:L722) | 4/10 | `src/nova/virt/libvirt/config.py:L709–L722` |
| `LibvirtConfigCapsGuestDomain` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L725–L778` |
| `LibvirtConfigCapsGuestDomain.__init__` | method | (self, **kwargs) | public | not declared | 1/7 | `src/nova/virt/libvirt/config.py:L726–L738` |
| `LibvirtConfigCapsGuestDomain.parse_dom` | method | (self, xmldoc) | public | not declared | 2/5 | `src/nova/virt/libvirt/config.py:L740–L746` |
| `LibvirtConfigCapsGuestDomain.parse_child` | method | (self, xmldoc) | public | not declared | 3/5 | `src/nova/virt/libvirt/config.py:L748–L752` |
| `LibvirtConfigCapsGuestDomain.parse_domain` | method | (self, xmldoc) | public | not declared | 2/5 | `src/nova/virt/libvirt/config.py:L754–L758` |
| `LibvirtConfigCapsGuestDomain.parse_machine` | method | (self, xmldoc) | public | not declared | 2/5 | `src/nova/virt/libvirt/config.py:L760–L764` |
| `LibvirtConfigCapsGuestDomain.format_dom` | method | (self) | public | `domain` (src/nova/virt/libvirt/config.py:L778) | 5/11 | `src/nova/virt/libvirt/config.py:L766–L778` |
| `LibvirtConfigGuestTimer` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L781–L803` |
| `LibvirtConfigGuestTimer.__init__` | method | (self, **kwargs) | public | not declared | 1/7 | `src/nova/virt/libvirt/config.py:L783–L790` |
| `LibvirtConfigGuestTimer.format_dom` | method | (self) | public | `tm` (src/nova/virt/libvirt/config.py:L803) | 4/10 | `src/nova/virt/libvirt/config.py:L792–L803` |
| `LibvirtConfigGuestClock` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L806–L832` |
| `LibvirtConfigGuestClock.__init__` | method | (self, **kwargs) | public | not declared | 1/7 | `src/nova/virt/libvirt/config.py:L808–L815` |
| `LibvirtConfigGuestClock.format_dom` | method | (self) | public | `clk` (src/nova/virt/libvirt/config.py:L829) | 4/10 | `src/nova/virt/libvirt/config.py:L817–L829` |
| `LibvirtConfigGuestClock.add_timer` | method | (self, tm) | public | not declared | 1/2 | `src/nova/virt/libvirt/config.py:L831–L832` |
| `LibvirtConfigCPUFeature` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L835–L866` |
| `LibvirtConfigCPUFeature.__init__` | method | (self, name=None, **kwargs) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L837–L842` |
| `LibvirtConfigCPUFeature.parse_dom` | method | (self, xmldoc) | public | not declared | 1/4 | `src/nova/virt/libvirt/config.py:L844–L848` |
| `LibvirtConfigCPUFeature.format_dom` | method | (self) | public | `ft` (src/nova/virt/libvirt/config.py:L855) | 1/4 | `src/nova/virt/libvirt/config.py:L850–L855` |
| `LibvirtConfigCPUFeature.__eq__` | method | (self, other) | public | `False` (src/nova/virt/libvirt/config.py:L859); `other.name == self.name` (src/nova/virt/libvirt/config.py:L860) | 2/4 | `src/nova/virt/libvirt/config.py:L857–L860` |
| `LibvirtConfigCPUFeature.__ne__` | method | (self, obj) | public | `obj.name != self.name` (src/nova/virt/libvirt/config.py:L863) | 1/2 | `src/nova/virt/libvirt/config.py:L862–L863` |
| `LibvirtConfigCPUFeature.__hash__` | method | (self) | public | `hash(self.name)` (src/nova/virt/libvirt/config.py:L866) | 1/2 | `src/nova/virt/libvirt/config.py:L865–L866` |
| `LibvirtConfigCPUMaxPhysAddr` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L869–L893` |
| `LibvirtConfigCPUMaxPhysAddr.__init__` | method | (self, **kwargs) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L871–L876` |
| `LibvirtConfigCPUMaxPhysAddr.parse_dom` | method | (self, xmldoc) | public | not declared | 2/5 | `src/nova/virt/libvirt/config.py:L878–L883` |
| `LibvirtConfigCPUMaxPhysAddr.format_dom` | method | (self) | public | `m` (src/nova/virt/libvirt/config.py:L893) | 2/6 | `src/nova/virt/libvirt/config.py:L885–L893` |
| `LibvirtConfigGuestCPUMaxPhysAddr` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L896–L897` |
| `LibvirtConfigCPU` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L900–L970` |
| `LibvirtConfigCPU.__init__` | method | (self, **kwargs) | public | not declared | 1/11 | `src/nova/virt/libvirt/config.py:L902–L916` |
| `LibvirtConfigCPU.parse_dom` | method | (self, xmldoc) | public | not declared | 9/21 | `src/nova/virt/libvirt/config.py:L918–L939` |
| `LibvirtConfigCPU.format_dom` | method | (self) | public | `cpu` (src/nova/virt/libvirt/config.py:L967) | 9/21 | `src/nova/virt/libvirt/config.py:L941–L967` |
| `LibvirtConfigCPU.add_feature` | method | (self, feat) | public | not declared | 1/2 | `src/nova/virt/libvirt/config.py:L969–L970` |
| `LibvirtConfigGuestCPUFeature` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L973–L985` |
| `LibvirtConfigGuestCPUFeature.__init__` | method | (self, name=None, policy="require", **kwargs) | public | not declared | 1/3 | `src/nova/virt/libvirt/config.py:L975–L978` |
| `LibvirtConfigGuestCPUFeature.format_dom` | method | (self) | public | `ft` (src/nova/virt/libvirt/config.py:L985) | 1/4 | `src/nova/virt/libvirt/config.py:L980–L985` |
| `LibvirtConfigGuestCPUNUMACell` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L988–L1020` |
| `LibvirtConfigGuestCPUNUMACell.__init__` | method | (self, **kwargs) | public | not declared | 1/7 | `src/nova/virt/libvirt/config.py:L990–L996` |
| `LibvirtConfigGuestCPUNUMACell.parse_dom` | method | (self, xmldoc) | public | not declared | 4/8 | `src/nova/virt/libvirt/config.py:L998–L1005` |
| `LibvirtConfigGuestCPUNUMACell.format_dom` | method | (self) | public | `cell` (src/nova/virt/libvirt/config.py:L1020) | 5/12 | `src/nova/virt/libvirt/config.py:L1007–L1020` |
| `LibvirtConfigGuestCPUNUMA` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L1023–L1046` |
| `LibvirtConfigGuestCPUNUMA.__init__` | method | (self, **kwargs) | public | not declared | 1/4 | `src/nova/virt/libvirt/config.py:L1025–L1029` |
| `LibvirtConfigGuestCPUNUMA.parse_dom` | method | (self, xmldoc) | public | not declared | 3/7 | `src/nova/virt/libvirt/config.py:L1031–L1038` |
| `LibvirtConfigGuestCPUNUMA.format_dom` | method | (self) | public | `numa` (src/nova/virt/libvirt/config.py:L1046) | 2/5 | `src/nova/virt/libvirt/config.py:L1040–L1046` |
| `LibvirtConfigGuestCPU` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L1049–L1082` |
| `LibvirtConfigGuestCPU.__init__` | method | (self, **kwargs) | public | not declared | 1/6 | `src/nova/virt/libvirt/config.py:L1051–L1057` |
| `LibvirtConfigGuestCPU.parse_dom` | method | (self, xmldoc) | public | not declared | 4/13 | `src/nova/virt/libvirt/config.py:L1059–L1071` |
| `LibvirtConfigGuestCPU.format_dom` | method | (self) | public | `cpu` (src/nova/virt/libvirt/config.py:L1082) | 3/8 | `src/nova/virt/libvirt/config.py:L1073–L1082` |
| `LibvirtConfigGuestSMBIOS` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L1085–L1097` |
| `LibvirtConfigGuestSMBIOS.__init__` | method | (self, **kwargs) | public | not declared | 1/4 | `src/nova/virt/libvirt/config.py:L1087–L1091` |
| `LibvirtConfigGuestSMBIOS.format_dom` | method | (self) | public | `smbios` (src/nova/virt/libvirt/config.py:L1097) | 1/4 | `src/nova/virt/libvirt/config.py:L1093–L1097` |
| `LibvirtConfigGuestSysinfo` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L1100–L1162` |
| `LibvirtConfigGuestSysinfo.__init__` | method | (self, **kwargs) | public | not declared | 1/12 | `src/nova/virt/libvirt/config.py:L1102–L1114` |
| `LibvirtConfigGuestSysinfo.format_dom` | method | (self) | public | `sysinfo` (src/nova/virt/libvirt/config.py:L1162) | 11/34 | `src/nova/virt/libvirt/config.py:L1116–L1162` |
| `LibvirtConfigGuestDevice` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L1165–L1168` |
| `LibvirtConfigGuestDevice.__init__` | method | (self, **kwargs) | public | not declared | 1/2 | `src/nova/virt/libvirt/config.py:L1167–L1168` |
| `LibvirtConfigGuestVTPM` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L1171–L1195` |
| `LibvirtConfigGuestVTPM.__init__` | method | (self, vtpm_config, vtpm_secret_uuid, **kwargs) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L1173–L1178` |
| `LibvirtConfigGuestVTPM.format_dom` | method | (self) | public | `dev` (src/nova/virt/libvirt/config.py:L1195) | 1/11 | `src/nova/virt/libvirt/config.py:L1180–L1195` |
| `LibvirtConfigGuestDisk` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L1198–L1476` |
| `LibvirtConfigGuestDisk.__init__` | method | (self, **kwargs) | public | not declared | 1/47 | `src/nova/virt/libvirt/config.py:L1200–L1247` |
| `LibvirtConfigGuestDisk._format_iotune` | method | (self, dev) | private | not declared | 15/43 | `src/nova/virt/libvirt/config.py:L1249–L1305` |
| `LibvirtConfigGuestDisk.format_dom` | method | (self) | public | `dev` (src/nova/virt/libvirt/config.py:L1410) | 31/78 | `src/nova/virt/libvirt/config.py:L1307–L1410` |
| `LibvirtConfigGuestDisk.parse_dom` | method | (self, xmldoc) | public | not declared | 23/61 | `src/nova/virt/libvirt/config.py:L1412–L1476` |
| `LibvirtConfigGuestDiskBackingStore` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L1479–L1516` |
| `LibvirtConfigGuestDiskBackingStore.__init__` | method | (self, **kwargs) | public | not declared | 1/13 | `src/nova/virt/libvirt/config.py:L1480–L1493` |
| `LibvirtConfigGuestDiskBackingStore.parse_dom` | method | (self, xmldoc) | public | not declared | 8/20 | `src/nova/virt/libvirt/config.py:L1495–L1516` |
| `LibvirtConfigGuestSnapshotDisk` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L1519–L1647` |
| `LibvirtConfigGuestSnapshotDisk.__init__` | method | (self, **kwargs) | public | not declared | 1/22 | `src/nova/virt/libvirt/config.py:L1528–L1550` |
| `LibvirtConfigGuestSnapshotDisk.format_dom` | method | (self) | public | `dev` (src/nova/virt/libvirt/config.py:L1609) | 22/51 | `src/nova/virt/libvirt/config.py:L1552–L1609` |
| `LibvirtConfigGuestSnapshotDisk.parse_dom` | method | (self, xmldoc) | public | not declared | 14/32 | `src/nova/virt/libvirt/config.py:L1611–L1647` |
| `LibvirtConfigGuestFilesys` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L1650–L1708` |
| `LibvirtConfigGuestFilesys.__init__` | method | (self, **kwargs) | public | not declared | 1/11 | `src/nova/virt/libvirt/config.py:L1652–L1663` |
| `LibvirtConfigGuestFilesys.format_dom` | method | (self) | public | `dev` (src/nova/virt/libvirt/config.py:L1685) | 6/18 | `src/nova/virt/libvirt/config.py:L1665–L1685` |
| `LibvirtConfigGuestFilesys.parse_dom` | method | (self, xmldoc) | public | not declared | 9/20 | `src/nova/virt/libvirt/config.py:L1687–L1708` |
| `LibvirtConfigGuestDiskEncryptionSecret` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L1711–L1726` |
| `LibvirtConfigGuestDiskEncryptionSecret.__init__` | method | (self, **kwargs) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L1712–L1716` |
| `LibvirtConfigGuestDiskEncryptionSecret.parse_dom` | method | (self, xmldoc) | public | not declared | 1/3 | `src/nova/virt/libvirt/config.py:L1718–L1720` |
| `LibvirtConfigGuestDiskEncryptionSecret.format_dom` | method | (self) | public | `obj` (src/nova/virt/libvirt/config.py:L1726) | 1/5 | `src/nova/virt/libvirt/config.py:L1722–L1726` |
| `LibvirtConfigGuestDiskEncryption` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L1729–L1752` |
| `LibvirtConfigGuestDiskEncryption.__init__` | method | (self, **kwargs) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L1733–L1737` |
| `LibvirtConfigGuestDiskEncryption.parse_dom` | method | (self, xmldoc) | public | not declared | 3/7 | `src/nova/virt/libvirt/config.py:L1739–L1745` |
| `LibvirtConfigGuestDiskEncryption.format_dom` | method | (self) | public | `obj` (src/nova/virt/libvirt/config.py:L1752) | 1/5 | `src/nova/virt/libvirt/config.py:L1747–L1752` |
| `LibvirtConfigGuestDiskMirror` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L1755–L1763` |
| `LibvirtConfigGuestDiskMirror.__init__` | method | (self, **kwargs) | public | not declared | 1/4 | `src/nova/virt/libvirt/config.py:L1757–L1760` |
| `LibvirtConfigGuestDiskMirror.parse_dom` | method | (self, xmldoc) | public | not declared | 1/2 | `src/nova/virt/libvirt/config.py:L1762–L1763` |
| `LibvirtConfigGuestIDMap` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L1766–L1788` |
| `LibvirtConfigGuestIDMap.__init__` | method | (self, **kwargs) | public | not declared | 2/7 | `src/nova/virt/libvirt/config.py:L1768–L1774` |
| `LibvirtConfigGuestIDMap.parse_dom` | method | (self, xmldoc) | public | not declared | 1/4 | `src/nova/virt/libvirt/config.py:L1776–L1779` |
| `LibvirtConfigGuestIDMap.format_dom` | method | (self) | public | `obj` (src/nova/virt/libvirt/config.py:L1788) | 1/6 | `src/nova/virt/libvirt/config.py:L1781–L1788` |
| `LibvirtConfigGuestUIDMap` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L1791–L1795` |
| `LibvirtConfigGuestUIDMap.__init__` | method | (self, **kwargs) | public | not declared | 1/3 | `src/nova/virt/libvirt/config.py:L1793–L1795` |
| `LibvirtConfigGuestGIDMap` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L1798–L1802` |
| `LibvirtConfigGuestGIDMap.__init__` | method | (self, **kwargs) | public | not declared | 1/3 | `src/nova/virt/libvirt/config.py:L1800–L1802` |
| `LibvirtConfigGuestDeviceAddress` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L1805–L1826` |
| `LibvirtConfigGuestDeviceAddress.__init__` | method | (self, type=None, **kwargs) | public | not declared | 1/4 | `src/nova/virt/libvirt/config.py:L1806–L1809` |
| `LibvirtConfigGuestDeviceAddress.format_dom` | method | (self) | public | `xml` (src/nova/virt/libvirt/config.py:L1814) | 1/4 | `src/nova/virt/libvirt/config.py:L1811–L1814` |
| `LibvirtConfigGuestDeviceAddress.parse_dom` | method | (xmldoc) | public | `None` (src/nova/virt/libvirt/config.py:L1824); `obj` (src/nova/virt/libvirt/config.py:L1826) | 3/10 | `src/nova/virt/libvirt/config.py:L1817–L1826` |
| `LibvirtConfigGuestDeviceAddressDrive` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L1829–L1859` |
| `LibvirtConfigGuestDeviceAddressDrive.__init__` | method | (self, **kwargs) | public | not declared | 1/7 | `src/nova/virt/libvirt/config.py:L1830–L1836` |
| `LibvirtConfigGuestDeviceAddressDrive.format_dom` | method | (self) | public | `xml` (src/nova/virt/libvirt/config.py:L1850) | 5/11 | `src/nova/virt/libvirt/config.py:L1838–L1850` |
| `LibvirtConfigGuestDeviceAddressDrive.parse_dom` | method | (self, xmldoc) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L1852–L1856` |
| `LibvirtConfigGuestDeviceAddressDrive.format_address` | method | (self) | public | `None` (src/nova/virt/libvirt/config.py:L1859) | 1/2 | `src/nova/virt/libvirt/config.py:L1858–L1859` |
| `LibvirtConfigGuestDeviceAddressPCI` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L1862–L1896` |
| `LibvirtConfigGuestDeviceAddressPCI.__init__` | method | (self, **kwargs) | public | not declared | 1/7 | `src/nova/virt/libvirt/config.py:L1863–L1869` |
| `LibvirtConfigGuestDeviceAddressPCI.format_dom` | method | (self) | public | `xml` (src/nova/virt/libvirt/config.py:L1883) | 5/11 | `src/nova/virt/libvirt/config.py:L1871–L1883` |
| `LibvirtConfigGuestDeviceAddressPCI.parse_dom` | method | (self, xmldoc) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L1885–L1889` |
| `LibvirtConfigGuestDeviceAddressPCI.format_address` | method | (self) | public | `pci_utils.get_pci_address(self.domain[2:], self.bus[2:], self.slot[2:], self.function[2:])` (src/nova/virt/libvirt/config.py:L1893) | 2/6 | `src/nova/virt/libvirt/config.py:L1891–L1896` |
| `LibvirtConfigGuestInterface` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L1899–L2175` |
| `LibvirtConfigGuestInterface.__init__` | method | (self, **kwargs) | public | not declared | 1/34 | `src/nova/virt/libvirt/config.py:L1901–L1935` |
| `LibvirtConfigGuestInterface.__eq__` | method | (self, other) | public | `False` (src/nova/virt/libvirt/config.py:L1939); `( self.mac_addr == other.mac_addr and self.net_type == other.net_type and self.source_dev == other.source_dev and (self.net_type == 'vhostuser' or not self.target_dev or self.target_dev == other.targe` (src/nova/virt/libvirt/config.py:L1947) | 8/10 | `src/nova/virt/libvirt/config.py:L1937–L1953` |
| `LibvirtConfigGuestInterface.format_dom` | method | (self) | public | `dev` (src/nova/virt/libvirt/config.py:L2078) | 45/108 | `src/nova/virt/libvirt/config.py:L1955–L2078` |
| `LibvirtConfigGuestInterface.parse_dom` | method | (self, xmldoc) | public | not declared | 37/80 | `src/nova/virt/libvirt/config.py:L2080–L2169` |
| `LibvirtConfigGuestInterface.add_filter_param` | method | (self, key, value) | public | not declared | 1/2 | `src/nova/virt/libvirt/config.py:L2171–L2172` |
| `LibvirtConfigGuestInterface.add_vport_param` | method | (self, key, value) | public | not declared | 1/2 | `src/nova/virt/libvirt/config.py:L2174–L2175` |
| `LibvirtConfigGuestInput` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2178–L2193` |
| `LibvirtConfigGuestInput.__init__` | method | (self, **kwargs) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L2180–L2185` |
| `LibvirtConfigGuestInput.format_dom` | method | (self) | public | `dev` (src/nova/virt/libvirt/config.py:L2193) | 1/5 | `src/nova/virt/libvirt/config.py:L2187–L2193` |
| `LibvirtConfigGuestGraphics` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2196–L2247` |
| `LibvirtConfigGuestGraphics.__init__` | method | (self, **kwargs) | public | not declared | 1/13 | `src/nova/virt/libvirt/config.py:L2198–L2212` |
| `LibvirtConfigGuestGraphics.format_dom` | method | (self) | public | `dev` (src/nova/virt/libvirt/config.py:L2247) | 11/31 | `src/nova/virt/libvirt/config.py:L2214–L2247` |
| `LibvirtConfigSeclabel` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2250–L2265` |
| `LibvirtConfigSeclabel.__init__` | method | (self, **kwargs) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L2252–L2256` |
| `LibvirtConfigSeclabel.format_dom` | method | (self) | public | `seclabel` (src/nova/virt/libvirt/config.py:L2265) | 2/6 | `src/nova/virt/libvirt/config.py:L2258–L2265` |
| `LibvirtConfigGuestVideo` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2268–L2292` |
| `LibvirtConfigGuestVideo.__init__` | method | (self, **kwargs) | public | not declared | 1/6 | `src/nova/virt/libvirt/config.py:L2270–L2276` |
| `LibvirtConfigGuestVideo.format_dom` | method | (self) | public | `dev` (src/nova/virt/libvirt/config.py:L2292) | 3/10 | `src/nova/virt/libvirt/config.py:L2278–L2292` |
| `LibvirtConfigMemoryBalloon` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2295–L2310` |
| `LibvirtConfigMemoryBalloon.__init__` | method | (self, **kwargs) | public | not declared | 1/6 | `src/nova/virt/libvirt/config.py:L2296–L2301` |
| `LibvirtConfigMemoryBalloon.format_dom` | method | (self) | public | `dev` (src/nova/virt/libvirt/config.py:L2310) | 2/8 | `src/nova/virt/libvirt/config.py:L2303–L2310` |
| `LibvirtConfigGuestController` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2313–L2333` |
| `LibvirtConfigGuestController.__init__` | method | (self, **kwargs) | public | not declared | 1/6 | `src/nova/virt/libvirt/config.py:L2315–L2321` |
| `LibvirtConfigGuestController.format_dom` | method | (self) | public | `controller` (src/nova/virt/libvirt/config.py:L2333) | 3/8 | `src/nova/virt/libvirt/config.py:L2323–L2333` |
| `LibvirtConfigGuestUSBHostController` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2336–L2340` |
| `LibvirtConfigGuestUSBHostController.__init__` | method | (self, **kwargs) | public | not declared | 1/3 | `src/nova/virt/libvirt/config.py:L2338–L2340` |
| `LibvirtConfigGuestPCIeRootController` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2343–L2349` |
| `LibvirtConfigGuestPCIeRootController.__init__` | method | (self, **kwargs) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L2345–L2349` |
| `LibvirtConfigGuestPCIeRootPortController` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2352–L2358` |
| `LibvirtConfigGuestPCIeRootPortController.__init__` | method | (self, **kwargs) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L2354–L2358` |
| `LibvirtConfigGuestHostdev` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2361–L2384` |
| `LibvirtConfigGuestHostdev.__init__` | method | (self, **kwargs) | public | not declared | 1/7 | `src/nova/virt/libvirt/config.py:L2362–L2370` |
| `LibvirtConfigGuestHostdev.format_dom` | method | (self) | public | `dev` (src/nova/virt/libvirt/config.py:L2377) | 1/6 | `src/nova/virt/libvirt/config.py:L2372–L2377` |
| `LibvirtConfigGuestHostdev.parse_dom` | method | (self, xmldoc) | public | `list(xmldoc)` (src/nova/virt/libvirt/config.py:L2384) | 1/6 | `src/nova/virt/libvirt/config.py:L2379–L2384` |
| `LibvirtConfigGuestHostdevPCI` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2387–L2446` |
| `LibvirtConfigGuestHostdevPCI.__init__` | method | (self, **kwargs) | public | not declared | 1/10 | `src/nova/virt/libvirt/config.py:L2388–L2404` |
| `LibvirtConfigGuestHostdevPCI.__eq__` | method | (self, other) | public | `False` (src/nova/virt/libvirt/config.py:L2408); `( int(self.domain, 16) == int(other.domain, 16) and int(self.bus, 16) == int(other.bus, 16) and int(self.slot, 16) == int(other.slot, 16) and int(self.function, 16) == int(other.function, 16))` (src/nova/virt/libvirt/config.py:L2413) | 5/8 | `src/nova/virt/libvirt/config.py:L2406–L2417` |
| `LibvirtConfigGuestHostdevPCI.format_dom` | method | (self) | public | `dev` (src/nova/virt/libvirt/config.py:L2433) | 5/14 | `src/nova/virt/libvirt/config.py:L2419–L2433` |
| `LibvirtConfigGuestHostdevPCI.parse_dom` | method | (self, xmldoc) | public | not declared | 6/12 | `src/nova/virt/libvirt/config.py:L2435–L2446` |
| `LibvirtConfigGuestHostdevMDEV` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2449–L2481` |
| `LibvirtConfigGuestHostdevMDEV.__init__` | method | (self, **kwargs) | public | not declared | 1/7 | `src/nova/virt/libvirt/config.py:L2450–L2459` |
| `LibvirtConfigGuestHostdevMDEV.format_dom` | method | (self) | public | `dev` (src/nova/virt/libvirt/config.py:L2470) | 2/9 | `src/nova/virt/libvirt/config.py:L2461–L2470` |
| `LibvirtConfigGuestHostdevMDEV.parse_dom` | method | (self, xmldoc) | public | `` (src/nova/virt/libvirt/config.py:L2481) | 6/10 | `src/nova/virt/libvirt/config.py:L2472–L2481` |
| `LibvirtConfigGuestCharBase` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2484–L2513` |
| `LibvirtConfigGuestCharBase.__init__` | method | (self, **kwargs) | public | not declared | 1/7 | `src/nova/virt/libvirt/config.py:L2486–L2493` |
| `LibvirtConfigGuestCharBase.format_dom` | method | (self) | public | `dev` (src/nova/virt/libvirt/config.py:L2513) | 5/15 | `src/nova/virt/libvirt/config.py:L2495–L2513` |
| `LibvirtConfigGuestChar` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2516–L2535` |
| `LibvirtConfigGuestChar.__init__` | method | (self, **kwargs) | public | not declared | 1/4 | `src/nova/virt/libvirt/config.py:L2518–L2522` |
| `LibvirtConfigGuestChar.format_dom` | method | (self) | public | `dev` (src/nova/virt/libvirt/config.py:L2535) | 5/10 | `src/nova/virt/libvirt/config.py:L2524–L2535` |
| `LibvirtConfigGuestCharDeviceLog` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2538–L2556` |
| `LibvirtConfigGuestCharDeviceLog.__init__` | method | (self, **kwargs) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L2541–L2545` |
| `LibvirtConfigGuestCharDeviceLog.parse_dom` | method | (self, xmldoc) | public | not declared | 1/4 | `src/nova/virt/libvirt/config.py:L2547–L2550` |
| `LibvirtConfigGuestCharDeviceLog.format_dom` | method | (self) | public | `log` (src/nova/virt/libvirt/config.py:L2556) | 1/5 | `src/nova/virt/libvirt/config.py:L2552–L2556` |
| `LibvirtConfigGuestSerial` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2559–L2563` |
| `LibvirtConfigGuestSerial.__init__` | method | (self, **kwargs) | public | not declared | 1/3 | `src/nova/virt/libvirt/config.py:L2561–L2563` |
| `LibvirtConfigGuestConsole` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2566–L2570` |
| `LibvirtConfigGuestConsole.__init__` | method | (self, **kwargs) | public | not declared | 1/3 | `src/nova/virt/libvirt/config.py:L2568–L2570` |
| `LibvirtConfigGuestChannel` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2573–L2590` |
| `LibvirtConfigGuestChannel.__init__` | method | (self, **kwargs) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L2575–L2580` |
| `LibvirtConfigGuestChannel.format_dom` | method | (self) | public | `dev` (src/nova/virt/libvirt/config.py:L2590) | 2/7 | `src/nova/virt/libvirt/config.py:L2582–L2590` |
| `LibvirtConfigGuestWatchdog` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2593–L2607` |
| `LibvirtConfigGuestWatchdog.__init__` | method | (self, **kwargs) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L2594–L2599` |
| `LibvirtConfigGuestWatchdog.format_dom` | method | (self) | public | `dev` (src/nova/virt/libvirt/config.py:L2607) | 1/5 | `src/nova/virt/libvirt/config.py:L2601–L2607` |
| `LibvirtConfigGuestCPUTuneVCPUPin` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2610–L2628` |
| `LibvirtConfigGuestCPUTuneVCPUPin.__init__` | method | (self, **kwargs) | public | not declared | 1/6 | `src/nova/virt/libvirt/config.py:L2612–L2618` |
| `LibvirtConfigGuestCPUTuneVCPUPin.format_dom` | method | (self) | public | `root` (src/nova/virt/libvirt/config.py:L2628) | 2/7 | `src/nova/virt/libvirt/config.py:L2620–L2628` |
| `LibvirtConfigGuestCPUTuneEmulatorPin` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2631–L2647` |
| `LibvirtConfigGuestCPUTuneEmulatorPin.__init__` | method | (self, **kwargs) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L2633–L2638` |
| `LibvirtConfigGuestCPUTuneEmulatorPin.format_dom` | method | (self) | public | `root` (src/nova/virt/libvirt/config.py:L2647) | 2/6 | `src/nova/virt/libvirt/config.py:L2640–L2647` |
| `LibvirtConfigGuestCPUTuneIOThreadPin` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2650–L2669` |
| `LibvirtConfigGuestCPUTuneIOThreadPin.__init__` | method | (self, **kwargs) | public | not declared | 1/6 | `src/nova/virt/libvirt/config.py:L2652–L2658` |
| `LibvirtConfigGuestCPUTuneIOThreadPin.format_dom` | method | (self) | public | `root` (src/nova/virt/libvirt/config.py:L2669) | 3/8 | `src/nova/virt/libvirt/config.py:L2660–L2669` |
| `LibvirtConfigGuestCPUTuneVCPUSched` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2672–L2694` |
| `LibvirtConfigGuestCPUTuneVCPUSched.__init__` | method | (self, **kwargs) | public | not declared | 1/7 | `src/nova/virt/libvirt/config.py:L2674–L2681` |
| `LibvirtConfigGuestCPUTuneVCPUSched.format_dom` | method | (self) | public | `root` (src/nova/virt/libvirt/config.py:L2694) | 4/10 | `src/nova/virt/libvirt/config.py:L2683–L2694` |
| `LibvirtConfigGuestCPUTune` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2697–L2732` |
| `LibvirtConfigGuestCPUTune.__init__` | method | (self, **kwargs) | public | not declared | 1/10 | `src/nova/virt/libvirt/config.py:L2699–L2708` |
| `LibvirtConfigGuestCPUTune.format_dom` | method | (self) | public | `root` (src/nova/virt/libvirt/config.py:L2732) | 10/18 | `src/nova/virt/libvirt/config.py:L2710–L2732` |
| `LibvirtConfigGuestMemoryBacking` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2735–L2770` |
| `LibvirtConfigGuestMemoryBacking.__init__` | method | (self, **kwargs) | public | not declared | 1/10 | `src/nova/virt/libvirt/config.py:L2737–L2747` |
| `LibvirtConfigGuestMemoryBacking.format_dom` | method | (self) | public | `root` (src/nova/virt/libvirt/config.py:L2770) | 9/20 | `src/nova/virt/libvirt/config.py:L2749–L2770` |
| `LibvirtConfigGuestMemoryBackingPage` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2773–L2789` |
| `LibvirtConfigGuestMemoryBackingPage.__init__` | method | (self, **kwargs) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L2775–L2780` |
| `LibvirtConfigGuestMemoryBackingPage.format_dom` | method | (self) | public | `page` (src/nova/virt/libvirt/config.py:L2789) | 1/6 | `src/nova/virt/libvirt/config.py:L2782–L2789` |
| `LibvirtConfigGuestMemoryTune` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2792–L2823` |
| `LibvirtConfigGuestMemoryTune.__init__` | method | (self, **kwargs) | public | not declared | 1/7 | `src/nova/virt/libvirt/config.py:L2794–L2801` |
| `LibvirtConfigGuestMemoryTune.format_dom` | method | (self) | public | `root` (src/nova/virt/libvirt/config.py:L2823) | 5/19 | `src/nova/virt/libvirt/config.py:L2803–L2823` |
| `LibvirtConfigGuestNUMATuneMemory` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2826–L2841` |
| `LibvirtConfigGuestNUMATuneMemory.__init__` | method | (self, **kwargs) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L2828–L2833` |
| `LibvirtConfigGuestNUMATuneMemory.format_dom` | method | (self) | public | `root` (src/nova/virt/libvirt/config.py:L2841) | 1/5 | `src/nova/virt/libvirt/config.py:L2835–L2841` |
| `LibvirtConfigGuestNUMATuneMemNode` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2844–L2861` |
| `LibvirtConfigGuestNUMATuneMemNode.__init__` | method | (self, **kwargs) | public | not declared | 1/6 | `src/nova/virt/libvirt/config.py:L2846–L2852` |
| `LibvirtConfigGuestNUMATuneMemNode.format_dom` | method | (self) | public | `root` (src/nova/virt/libvirt/config.py:L2861) | 1/6 | `src/nova/virt/libvirt/config.py:L2854–L2861` |
| `LibvirtConfigGuestNUMATune` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2864–L2881` |
| `LibvirtConfigGuestNUMATune.__init__` | method | (self, **kwargs) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L2866–L2871` |
| `LibvirtConfigGuestNUMATune.format_dom` | method | (self) | public | `root` (src/nova/virt/libvirt/config.py:L2881) | 3/7 | `src/nova/virt/libvirt/config.py:L2873–L2881` |
| `LibvirtConfigGuestFeature` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2884–L2893` |
| `LibvirtConfigGuestFeature.__init__` | method | (self, name, **kwargs) | public | not declared | 1/3 | `src/nova/virt/libvirt/config.py:L2886–L2888` |
| `LibvirtConfigGuestFeature.__eq__` | method | (self, other) | public | `False` (src/nova/virt/libvirt/config.py:L2892); `other.root_name == self.root_name` (src/nova/virt/libvirt/config.py:L2893) | 2/4 | `src/nova/virt/libvirt/config.py:L2890–L2893` |
| `LibvirtConfigGuestFeatureACPI` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2896–L2900` |
| `LibvirtConfigGuestFeatureACPI.__init__` | method | (self, **kwargs) | public | not declared | 1/3 | `src/nova/virt/libvirt/config.py:L2898–L2900` |
| `LibvirtConfigGuestFeatureAPIC` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2903–L2907` |
| `LibvirtConfigGuestFeatureAPIC.__init__` | method | (self, **kwargs) | public | not declared | 1/3 | `src/nova/virt/libvirt/config.py:L2905–L2907` |
| `LibvirtConfigGuestFeatureKvmHidden` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2910–L2921` |
| `LibvirtConfigGuestFeatureKvmHidden.__init__` | method | (self, **kwargs) | public | not declared | 1/3 | `src/nova/virt/libvirt/config.py:L2912–L2914` |
| `LibvirtConfigGuestFeatureKvmHidden.format_dom` | method | (self) | public | `root` (src/nova/virt/libvirt/config.py:L2921) | 1/4 | `src/nova/virt/libvirt/config.py:L2916–L2921` |
| `LibvirtConfigGuestFeatureSMM` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2924–L2939` |
| `LibvirtConfigGuestFeatureSMM.__init__` | method | (self, **kwargs) | public | not declared | 1/2 | `src/nova/virt/libvirt/config.py:L2926–L2932` |
| `LibvirtConfigGuestFeatureSMM.format_dom` | method | (self) | public | `root` (src/nova/virt/libvirt/config.py:L2939) | 1/4 | `src/nova/virt/libvirt/config.py:L2934–L2939` |
| `LibvirtConfigGuestFeatureTCG` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2942–L2954` |
| `LibvirtConfigGuestFeatureTCG.__init__` | method | (self, cache_size, **kwargs) | public | not declared | 1/3 | `src/nova/virt/libvirt/config.py:L2944–L2947` |
| `LibvirtConfigGuestFeatureTCG.format_dom` | method | (self) | public | `root` (src/nova/virt/libvirt/config.py:L2954) | 1/5 | `src/nova/virt/libvirt/config.py:L2949–L2954` |
| `LibvirtConfigGuestFeaturePMU` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2957–L2970` |
| `LibvirtConfigGuestFeaturePMU.__init__` | method | (self, state, **kwargs) | public | not declared | 1/3 | `src/nova/virt/libvirt/config.py:L2959–L2965` |
| `LibvirtConfigGuestFeaturePMU.format_dom` | method | (self) | public | `root` (src/nova/virt/libvirt/config.py:L2970) | 2/4 | `src/nova/virt/libvirt/config.py:L2967–L2970` |
| `LibvirtConfigGuestFeatureIOAPIC` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2973–L2982` |
| `LibvirtConfigGuestFeatureIOAPIC.__init__` | method | (self, **kwargs) | public | not declared | 1/3 | `src/nova/virt/libvirt/config.py:L2975–L2977` |
| `LibvirtConfigGuestFeatureIOAPIC.format_dom` | method | (self) | public | `root` (src/nova/virt/libvirt/config.py:L2982) | 1/4 | `src/nova/virt/libvirt/config.py:L2979–L2982` |
| `LibvirtConfigGuestFeatureHyperV` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L2985–L3044` |
| `LibvirtConfigGuestFeatureHyperV.MIN_SPINLOCK_RETRIES` | constant | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L2988–L2988` |
| `LibvirtConfigGuestFeatureHyperV.SPOOFED_VENDOR_ID` | constant | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L2990–L2990` |
| `LibvirtConfigGuestFeatureHyperV.__init__` | method | (self, **kwargs) | public | not declared | 1/18 | `src/nova/virt/libvirt/config.py:L2992–L3010` |
| `LibvirtConfigGuestFeatureHyperV.format_dom` | method | (self) | public | `root` (src/nova/virt/libvirt/config.py:L3044) | 14/31 | `src/nova/virt/libvirt/config.py:L3012–L3044` |
| `LibvirtConfigGuestSEVLaunchSecurity` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L3047–L3078` |
| `LibvirtConfigGuestSEVLaunchSecurity.SEV_POLICY_NODEBG` | constant | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L3050–L3050` |
| `LibvirtConfigGuestSEVLaunchSecurity.SEV_POLICY_NOKS` | constant | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L3051–L3051` |
| `LibvirtConfigGuestSEVLaunchSecurity.SEV_POLICY_ES` | constant | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L3052–L3052` |
| `LibvirtConfigGuestSEVLaunchSecurity.SEV_POLICY_NOSEND` | constant | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L3053–L3053` |
| `LibvirtConfigGuestSEVLaunchSecurity.SEV_POLICY_DOMAIN` | constant | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L3054–L3054` |
| `LibvirtConfigGuestSEVLaunchSecurity.SEV_POLICY_SEV` | constant | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L3055–L3055` |
| `LibvirtConfigGuestSEVLaunchSecurity.DEFAULT_SEV_POLICY` | constant | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L3057–L3059` |
| `LibvirtConfigGuestSEVLaunchSecurity.DEFAULT_SEV_ES_POLICY` | constant | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L3060–L3061` |
| `LibvirtConfigGuestSEVLaunchSecurity.__init__` | method | (self, **kwargs) | public | not declared | 1/4 | `src/nova/virt/libvirt/config.py:L3063–L3068` |
| `LibvirtConfigGuestSEVLaunchSecurity.format_dom` | method | (self) | public | `root` (src/nova/virt/libvirt/config.py:L3078) | 1/7 | `src/nova/virt/libvirt/config.py:L3070–L3078` |
| `LibvirtConfigGuestSEVSNPLaunchSecurity` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L3081–L3108` |
| `LibvirtConfigGuestSEVSNPLaunchSecurity.SEV_SNP_POLICY_SMT` | constant | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L3082–L3082` |
| `LibvirtConfigGuestSEVSNPLaunchSecurity.SEV_SNP_POLICY_RESERVED` | constant | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L3083–L3083` |
| `LibvirtConfigGuestSEVSNPLaunchSecurity.DEFAULT_SEV_SNP_POLICY` | constant | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L3085–L3086` |
| `LibvirtConfigGuestSEVSNPLaunchSecurity.__init__` | method | (self, **kwargs) | public | not declared | 1/7 | `src/nova/virt/libvirt/config.py:L3088–L3094` |
| `LibvirtConfigGuestSEVSNPLaunchSecurity.format_dom` | method | (self) | public | `root` (src/nova/virt/libvirt/config.py:L3108) | 1/10 | `src/nova/virt/libvirt/config.py:L3096–L3108` |
| `LibvirtConfigGuestTDXLaunchSecurity` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L3111–L3131` |
| `LibvirtConfigGuestTDXLaunchSecurity.__init__` | method | (self, **kwargs) | public | not declared | 1/3 | `src/nova/virt/libvirt/config.py:L3118–L3120` |
| `LibvirtConfigGuestTDXLaunchSecurity.format_dom` | method | (self) | public | `root` (src/nova/virt/libvirt/config.py:L3131) | 1/6 | `src/nova/virt/libvirt/config.py:L3122–L3131` |
| `LibvirtConfigGuestFeatureVMCoreInfo` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L3134–L3137` |
| `LibvirtConfigGuestFeatureVMCoreInfo.__init__` | method | (self, **kwargs) | public | not declared | 1/2 | `src/nova/virt/libvirt/config.py:L3136–L3137` |
| `LibvirtConfigGuest` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L3140–L3509` |
| `LibvirtConfigGuest.__init__` | method | (self, **kwargs) | public | not declared | 1/46 | `src/nova/virt/libvirt/config.py:L3142–L3188` |
| `LibvirtConfigGuest._format_basic_props` | method | (self, root) | private | not declared | 8/25 | `src/nova/virt/libvirt/config.py:L3190–L3215` |
| `LibvirtConfigGuest._format_os` | method | (self, root) | private | not declared | 25/66 | `src/nova/virt/libvirt/config.py:L3217–L3291` |
| `LibvirtConfigGuest._format_features` | method | (self, root) | private | not declared | 3/6 | `src/nova/virt/libvirt/config.py:L3293–L3298` |
| `LibvirtConfigGuest._format_devices` | method | (self, root) | private | `` (src/nova/virt/libvirt/config.py:L3302) | 3/7 | `src/nova/virt/libvirt/config.py:L3300–L3306` |
| `LibvirtConfigGuest._format_idmaps` | method | (self, root) | private | `` (src/nova/virt/libvirt/config.py:L3310) | 3/7 | `src/nova/virt/libvirt/config.py:L3308–L3314` |
| `LibvirtConfigGuest._format_perf_events` | method | (self, root) | private | `` (src/nova/virt/libvirt/config.py:L3318) | 3/8 | `src/nova/virt/libvirt/config.py:L3316–L3323` |
| `LibvirtConfigGuest._format_sev` | method | (self, root) | private | not declared | 2/3 | `src/nova/virt/libvirt/config.py:L3325–L3327` |
| `LibvirtConfigGuest.format_dom` | method | (self) | public | `root` (src/nova/virt/libvirt/config.py:L3363) | 6/21 | `src/nova/virt/libvirt/config.py:L3329–L3363` |
| `LibvirtConfigGuest._parse_basic_props` | method | (self, xmldoc) | private | not declared | 6/11 | `src/nova/virt/libvirt/config.py:L3365–L3377` |
| `LibvirtConfigGuest._parse_os` | method | (self, xmldoc) | private | not declared | 21/42 | `src/nova/virt/libvirt/config.py:L3379–L3423` |
| `LibvirtConfigGuest.parse_dom` | method | (self, xmldoc) | public | not declared | 30/61 | `src/nova/virt/libvirt/config.py:L3425–L3497` |
| `LibvirtConfigGuest.add_feature` | method | (self, dev) | public | not declared | 1/2 | `src/nova/virt/libvirt/config.py:L3499–L3500` |
| `LibvirtConfigGuest.add_device` | method | (self, dev) | public | not declared | 1/2 | `src/nova/virt/libvirt/config.py:L3502–L3503` |
| `LibvirtConfigGuest.add_perf_event` | method | (self, event) | public | not declared | 1/2 | `src/nova/virt/libvirt/config.py:L3505–L3506` |
| `LibvirtConfigGuest.set_clock` | method | (self, clk) | public | not declared | 1/2 | `src/nova/virt/libvirt/config.py:L3508–L3509` |
| `LibvirtConfigGuestSnapshot` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L3512–L3538` |
| `LibvirtConfigGuestSnapshot.__init__` | method | (self, **kwargs) | public | not declared | 1/6 | `src/nova/virt/libvirt/config.py:L3514–L3520` |
| `LibvirtConfigGuestSnapshot.format_dom` | method | (self) | public | `ss` (src/nova/virt/libvirt/config.py:L3535) | 3/9 | `src/nova/virt/libvirt/config.py:L3522–L3535` |
| `LibvirtConfigGuestSnapshot.add_disk` | method | (self, disk) | public | not declared | 1/2 | `src/nova/virt/libvirt/config.py:L3537–L3538` |
| `LibvirtConfigNodeDevice` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L3541–L3588` |
| `LibvirtConfigNodeDevice.__init__` | method | (self, **kwargs) | public | not declared | 1/10 | `src/nova/virt/libvirt/config.py:L3544–L3553` |
| `LibvirtConfigNodeDevice.format_dom` | method | (self) | public | `dev` (src/nova/virt/libvirt/config.py:L3563) | 4/9 | `src/nova/virt/libvirt/config.py:L3555–L3563` |
| `LibvirtConfigNodeDevice.parse_dom` | method | (self, xmldoc) | public | not declared | 12/23 | `src/nova/virt/libvirt/config.py:L3565–L3588` |
| `LibvirtConfigNodeDeviceVDPACap` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L3591–L3601` |
| `LibvirtConfigNodeDeviceVDPACap.__init__` | method | (self, **kwargs) | public | not declared | 1/4 | `src/nova/virt/libvirt/config.py:L3592–L3595` |
| `LibvirtConfigNodeDeviceVDPACap.parse_dom` | method | (self, xmldoc) | public | not declared | 3/5 | `src/nova/virt/libvirt/config.py:L3597–L3601` |
| `LibvirtConfigNodeDevicePciCap` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L3604–L3671` |
| `LibvirtConfigNodeDevicePciCap.__init__` | method | (self, **kwargs) | public | not declared | 1/19 | `src/nova/virt/libvirt/config.py:L3607–L3625` |
| `LibvirtConfigNodeDevicePciCap.parse_dom` | method | (self, xmldoc) | public | not declared | 19/40 | `src/nova/virt/libvirt/config.py:L3627–L3667` |
| `LibvirtConfigNodeDevicePciCap.pci_address` | method | (self) | public | `"%04x:%02x:%02x.%01x" % ( self.domain, self.bus, self.slot, self.function)` (src/nova/virt/libvirt/config.py:L3670) | 1/3 | `src/nova/virt/libvirt/config.py:L3669–L3671` |
| `LibvirtConfigNodeDevicePciSubFunctionCap` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L3674–L3689` |
| `LibvirtConfigNodeDevicePciSubFunctionCap.__init__` | method | (self, **kwargs) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L3675–L3679` |
| `LibvirtConfigNodeDevicePciSubFunctionCap.parse_dom` | method | (self, xmldoc) | public | not declared | 3/9 | `src/nova/virt/libvirt/config.py:L3681–L3689` |
| `LibvirtConfigNodeDeviceMdevCapableSubFunctionCap` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L3692–L3716` |
| `LibvirtConfigNodeDeviceMdevCapableSubFunctionCap.__init__` | method | (self, **kwargs) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L3693–L3700` |
| `LibvirtConfigNodeDeviceMdevCapableSubFunctionCap.parse_dom` | method | (self, xmldoc) | public | not declared | 7/15 | `src/nova/virt/libvirt/config.py:L3702–L3716` |
| `LibvirtConfigNodeDeviceMdevInformation` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L3719–L3751` |
| `LibvirtConfigNodeDeviceMdevInformation.__init__` | method | (self, **kwargs) | public | not declared | 1/6 | `src/nova/virt/libvirt/config.py:L3720–L3725` |
| `LibvirtConfigNodeDeviceMdevInformation.format_dom` | method | (self) | public | `dev` (src/nova/virt/libvirt/config.py:L3740) | 4/14 | `src/nova/virt/libvirt/config.py:L3727–L3740` |
| `LibvirtConfigNodeDeviceMdevInformation.parse_dom` | method | (self, xmldoc) | public | not declared | 5/10 | `src/nova/virt/libvirt/config.py:L3742–L3751` |
| `LibvirtConfigNodeDeviceVpdCap` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L3754–L3846` |
| `LibvirtConfigNodeDeviceVpdCap.__init__` | method | (self, **kwargs) | public | not declared | 1/12 | `src/nova/virt/libvirt/config.py:L3756–L3767` |
| `LibvirtConfigNodeDeviceVpdCap._process_custom_field` | method | (fields_dict, field_element) | private | not declared | 2/4 | `src/nova/virt/libvirt/config.py:L3770–L3773` |
| `LibvirtConfigNodeDeviceVpdCap._parse_ro_fields` | method | (self, fields_element) | private | not declared | 7/12 | `src/nova/virt/libvirt/config.py:L3775–L3786` |
| `LibvirtConfigNodeDeviceVpdCap._parse_rw_fields` | method | (self, fields_element) | private | not declared | 5/8 | `src/nova/virt/libvirt/config.py:L3788–L3795` |
| `LibvirtConfigNodeDeviceVpdCap.parse_dom` | method | (self, xmldoc) | public | not declared | 7/14 | `src/nova/virt/libvirt/config.py:L3797–L3810` |
| `LibvirtConfigNodeDeviceVpdCap.card_name` | method | (self) | public | `self._card_name` (src/nova/virt/libvirt/config.py:L3814) | 1/2 | `src/nova/virt/libvirt/config.py:L3813–L3814` |
| `LibvirtConfigNodeDeviceVpdCap.change_level` | method | (self) | public | `self._change_level` (src/nova/virt/libvirt/config.py:L3818) | 1/2 | `src/nova/virt/libvirt/config.py:L3817–L3818` |
| `LibvirtConfigNodeDeviceVpdCap.manufacture_id` | method | (self) | public | `self._manufacture_id` (src/nova/virt/libvirt/config.py:L3822) | 1/2 | `src/nova/virt/libvirt/config.py:L3821–L3822` |
| `LibvirtConfigNodeDeviceVpdCap.part_number` | method | (self) | public | `self._part_number` (src/nova/virt/libvirt/config.py:L3826) | 1/2 | `src/nova/virt/libvirt/config.py:L3825–L3826` |
| `LibvirtConfigNodeDeviceVpdCap.card_serial_number` | method | (self) | public | `self._serial_number` (src/nova/virt/libvirt/config.py:L3830) | 1/2 | `src/nova/virt/libvirt/config.py:L3829–L3830` |
| `LibvirtConfigNodeDeviceVpdCap.asset_tag` | method | (self) | public | `self._asset_tag` (src/nova/virt/libvirt/config.py:L3834) | 1/2 | `src/nova/virt/libvirt/config.py:L3833–L3834` |
| `LibvirtConfigNodeDeviceVpdCap.ro_vendor_fields` | method | (self) | public | `self._ro_vendor_fields` (src/nova/virt/libvirt/config.py:L3838) | 1/2 | `src/nova/virt/libvirt/config.py:L3837–L3838` |
| `LibvirtConfigNodeDeviceVpdCap.rw_vendor_fields` | method | (self) | public | `self._rw_vendor_fields` (src/nova/virt/libvirt/config.py:L3842) | 1/2 | `src/nova/virt/libvirt/config.py:L3841–L3842` |
| `LibvirtConfigNodeDeviceVpdCap.rw_system_fields` | method | (self) | public | `self._rw_system_fields` (src/nova/virt/libvirt/config.py:L3846) | 1/2 | `src/nova/virt/libvirt/config.py:L3845–L3846` |
| `LibvirtConfigGuestRng` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L3849–L3877` |
| `LibvirtConfigGuestRng.__init__` | method | (self, **kwargs) | public | not declared | 1/8 | `src/nova/virt/libvirt/config.py:L3851–L3859` |
| `LibvirtConfigGuestRng.format_dom` | method | (self) | public | `dev` (src/nova/virt/libvirt/config.py:L3877) | 3/13 | `src/nova/virt/libvirt/config.py:L3861–L3877` |
| `LibvirtConfigGuestMetaNovaInstance` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L3880–L3925` |
| `LibvirtConfigGuestMetaNovaInstance.__init__` | method | (self) | public | not declared | 1/14 | `src/nova/virt/libvirt/config.py:L3882–L3896` |
| `LibvirtConfigGuestMetaNovaInstance.format_dom` | method | (self) | public | `meta` (src/nova/virt/libvirt/config.py:L3925) | 9/25 | `src/nova/virt/libvirt/config.py:L3898–L3925` |
| `LibvirtConfigGuestMetaNovaFlavor` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L3928–L3963` |
| `LibvirtConfigGuestMetaNovaFlavor.__init__` | method | (self) | public | not declared | 1/13 | `src/nova/virt/libvirt/config.py:L3930–L3943` |
| `LibvirtConfigGuestMetaNovaFlavor.format_dom` | method | (self) | public | `meta` (src/nova/virt/libvirt/config.py:L3963) | 7/19 | `src/nova/virt/libvirt/config.py:L3945–L3963` |
| `LibvirtConfigGuestMetaNovaFlavorExtraSpecs` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L3966–L3981` |
| `LibvirtConfigGuestMetaNovaFlavorExtraSpecs.__init__` | method | (self) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L3968–L3972` |
| `LibvirtConfigGuestMetaNovaFlavorExtraSpecs.format_dom` | method | (self) | public | `meta` (src/nova/virt/libvirt/config.py:L3981) | 3/8 | `src/nova/virt/libvirt/config.py:L3974–L3981` |
| `LibvirtConfigGuestMetaImage` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L3984–L4013` |
| `LibvirtConfigGuestMetaImage.__init__` | method | (self) | public | not declared | 1/11 | `src/nova/virt/libvirt/config.py:L3986–L3997` |
| `LibvirtConfigGuestMetaImage.format_dom` | method | (self) | public | `meta` (src/nova/virt/libvirt/config.py:L4013) | 6/14 | `src/nova/virt/libvirt/config.py:L3999–L4013` |
| `LibvirtConfigGuestMetaImageProperties` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L4016–L4031` |
| `LibvirtConfigGuestMetaImageProperties.__init__` | method | (self) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L4018–L4022` |
| `LibvirtConfigGuestMetaImageProperties.format_dom` | method | (self) | public | `meta` (src/nova/virt/libvirt/config.py:L4031) | 3/8 | `src/nova/virt/libvirt/config.py:L4024–L4031` |
| `LibvirtConfigGuestMetaNovaOwner` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L4034–L4057` |
| `LibvirtConfigGuestMetaNovaOwner.__init__` | method | (self) | public | not declared | 1/9 | `src/nova/virt/libvirt/config.py:L4036–L4045` |
| `LibvirtConfigGuestMetaNovaOwner.format_dom` | method | (self) | public | `meta` (src/nova/virt/libvirt/config.py:L4057) | 5/11 | `src/nova/virt/libvirt/config.py:L4047–L4057` |
| `LibvirtConfigSecret` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L4060–L4089` |
| `LibvirtConfigSecret.__init__` | method | (self) | public | not declared | 1/9 | `src/nova/virt/libvirt/config.py:L4062–L4070` |
| `LibvirtConfigSecret.format_dom` | method | (self) | public | `root` (src/nova/virt/libvirt/config.py:L4089) | 6/18 | `src/nova/virt/libvirt/config.py:L4072–L4089` |
| `LibvirtConfigGuestVPMEM` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L4092–L4146` |
| `LibvirtConfigGuestVPMEM.__init__` | method | (self, **kwargs) | public | not declared | 1/11 | `src/nova/virt/libvirt/config.py:L4093–L4105` |
| `LibvirtConfigGuestVPMEM.format_dom` | method | (self) | public | `memory` (src/nova/virt/libvirt/config.py:L4129) | 2/18 | `src/nova/virt/libvirt/config.py:L4107–L4129` |
| `LibvirtConfigGuestVPMEM.parse_dom` | method | (self, xmldoc) | public | not declared | 9/15 | `src/nova/virt/libvirt/config.py:L4131–L4146` |
| `LibvirtConfigGuestIOMMU` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L4149–L4193` |
| `LibvirtConfigGuestIOMMU.__init__` | method | (self, **kwargs) | public | not declared | 1/7 | `src/nova/virt/libvirt/config.py:L4152–L4159` |
| `LibvirtConfigGuestIOMMU.format_dom` | method | (self) | public | `iommu` (src/nova/virt/libvirt/config.py:L4178) | 2/12 | `src/nova/virt/libvirt/config.py:L4161–L4178` |
| `LibvirtConfigGuestIOMMU.parse_dom` | method | (self, xmldoc) | public | not declared | 3/13 | `src/nova/virt/libvirt/config.py:L4180–L4193` |
| `LibvirtConfigGuestMetaNovaPorts` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L4196–L4208` |
| `LibvirtConfigGuestMetaNovaPorts.__init__` | method | (self, ports=None) | public | not declared | 1/4 | `src/nova/virt/libvirt/config.py:L4198–L4202` |
| `LibvirtConfigGuestMetaNovaPorts.format_dom` | method | (self) | public | `meta` (src/nova/virt/libvirt/config.py:L4208) | 3/5 | `src/nova/virt/libvirt/config.py:L4204–L4208` |
| `LibvirtConfigGuestMetaNovaPort` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L4211–L4225` |
| `LibvirtConfigGuestMetaNovaPort.__init__` | method | (self, uuid, ips=None) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L4213–L4218` |
| `LibvirtConfigGuestMetaNovaPort.format_dom` | method | (self) | public | `meta` (src/nova/virt/libvirt/config.py:L4225) | 3/6 | `src/nova/virt/libvirt/config.py:L4220–L4225` |
| `LibvirtConfigGuestMetaNovaIp` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L4228–L4243` |
| `LibvirtConfigGuestMetaNovaIp.__init__` | method | (self, ip_type, address, ip_version) | public | not declared | 1/6 | `src/nova/virt/libvirt/config.py:L4230–L4236` |
| `LibvirtConfigGuestMetaNovaIp.format_dom` | method | (self) | public | `meta` (src/nova/virt/libvirt/config.py:L4243) | 1/6 | `src/nova/virt/libvirt/config.py:L4238–L4243` |
| `LibvirtConfigGuestSound` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L4246–L4255` |
| `LibvirtConfigGuestSound.__init__` | method | (self, model) | public | not declared | 1/3 | `src/nova/virt/libvirt/config.py:L4248–L4250` |
| `LibvirtConfigGuestSound.format_dom` | method | (self) | public | `meta` (src/nova/virt/libvirt/config.py:L4255) | 1/4 | `src/nova/virt/libvirt/config.py:L4252–L4255` |
| `LibvirtConfigGuestUSBRedirect` | class | — | exported | not declared | — | `src/nova/virt/libvirt/config.py:L4258–L4271` |
| `LibvirtConfigGuestUSBRedirect.__init__` | method | (self, **kwargs) | public | not declared | 1/5 | `src/nova/virt/libvirt/config.py:L4260–L4265` |
| `LibvirtConfigGuestUSBRedirect.format_dom` | method | (self) | public | `meta` (src/nova/virt/libvirt/config.py:L4271) | 1/5 | `src/nova/virt/libvirt/config.py:L4267–L4271` |
| `LibvirtConfigObject.parse_on_off_str` | classmethod | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L102–L111` |
| `LibvirtConfigObject.get_yes_no_str` | classmethod | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L113–L115` |
| `LibvirtConfigObject.get_on_off_str` | classmethod | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L117–L119` |
| `LibvirtConfigDomainCaps.features` | property | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L187–L191` |
| `LibvirtConfigDomainCaps.machine_type` | property | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L193–L197` |
| `LibvirtConfigDomainCaps.machine_type_alias` | property | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L199–L203` |
| `LibvirtConfigDomainCaps.devices` | property | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L209–L213` |
| `LibvirtConfigDomainCaps.os` | property | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L215–L217` |
| `LibvirtConfigDomainCapsDevices.disk` | property | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L313–L315` |
| `LibvirtConfigDomainCapsDevices.video` | property | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L317–L319` |
| `LibvirtConfigDomainCapsDevices.tpm` | property | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L321–L323` |
| `LibvirtConfigGuestDeviceAddress.parse_dom` | staticmethod | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L1816–L1826` |
| `LibvirtConfigNodeDeviceVpdCap._process_custom_field` | staticmethod | — | private | not declared | — | `src/nova/virt/libvirt/config.py:L3769–L3773` |
| `LibvirtConfigNodeDeviceVpdCap.card_name` | property | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L3812–L3814` |
| `LibvirtConfigNodeDeviceVpdCap.change_level` | property | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L3816–L3818` |
| `LibvirtConfigNodeDeviceVpdCap.manufacture_id` | property | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L3820–L3822` |
| `LibvirtConfigNodeDeviceVpdCap.part_number` | property | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L3824–L3826` |
| `LibvirtConfigNodeDeviceVpdCap.card_serial_number` | property | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L3828–L3830` |
| `LibvirtConfigNodeDeviceVpdCap.asset_tag` | property | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L3832–L3834` |
| `LibvirtConfigNodeDeviceVpdCap.ro_vendor_fields` | property | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L3836–L3838` |
| `LibvirtConfigNodeDeviceVpdCap.rw_vendor_fields` | property | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L3840–L3842` |
| `LibvirtConfigNodeDeviceVpdCap.rw_system_fields` | property | — | public | not declared | — | `src/nova/virt/libvirt/config.py:L3844–L3846` |

## Dependencies

- `import time` (src/nova/virt/libvirt/config.py:L26)
- `collections`: imports `OrderedDict` (src/nova/virt/libvirt/config.py:L28)
- `lxml`: imports `etree` (src/nova/virt/libvirt/config.py:L29)
- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/config.py:L30)
- `oslo_utils`: imports `strutils` (src/nova/virt/libvirt/config.py:L31)
- `oslo_utils`: imports `units` (src/nova/virt/libvirt/config.py:L32)
- `nova`: imports `exception` (src/nova/virt/libvirt/config.py:L34)
- `nova.i18n`: imports `_` (src/nova/virt/libvirt/config.py:L35)
- `nova.objects`: imports `fields` (src/nova/virt/libvirt/config.py:L36)
- `nova.pci`: imports `utils as pci_utils` (src/nova/virt/libvirt/config.py:L37)
- `nova.virt`: imports `hardware` (src/nova/virt/libvirt/config.py:L38)

## Side Effects

- **network**: NOVA_NS = "http://openstack.org/xmlns/libvirt/nova/1.1" (src/nova/virt/libvirt/config.py:L43)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/config.py:L40)
- **global-mutation**: NOVA_NS = "http://openstack.org/xmlns/libvirt/nova/1.1" (src/nova/virt/libvirt/config.py:L43)
- **global-mutation**: DEVICE_PARSERS = { (src/nova/virt/libvirt/config.py:L287)
- **global-mutation**: MIN_SPINLOCK_RETRIES = 4095 (src/nova/virt/libvirt/config.py:L2988)
- **global-mutation**: SPOOFED_VENDOR_ID = "1234567890ab" (src/nova/virt/libvirt/config.py:L2990)
- **global-mutation**: SEV_POLICY_NODEBG = 0x1 (src/nova/virt/libvirt/config.py:L3050)
- **global-mutation**: SEV_POLICY_NOKS = 0x2 (src/nova/virt/libvirt/config.py:L3051)
- **global-mutation**: SEV_POLICY_ES = 0x4 (src/nova/virt/libvirt/config.py:L3052)
- **global-mutation**: SEV_POLICY_NOSEND = 0x8 (src/nova/virt/libvirt/config.py:L3053)
- **global-mutation**: SEV_POLICY_DOMAIN = 0x10 (src/nova/virt/libvirt/config.py:L3054)
- **global-mutation**: SEV_POLICY_SEV = 0x20 (src/nova/virt/libvirt/config.py:L3055)
- **global-mutation**: DEFAULT_SEV_POLICY = ( (src/nova/virt/libvirt/config.py:L3057)
- **global-mutation**: DEFAULT_SEV_ES_POLICY = ( (src/nova/virt/libvirt/config.py:L3060)
- **global-mutation**: SEV_SNP_POLICY_SMT = 0x00010000 (src/nova/virt/libvirt/config.py:L3082)
- **global-mutation**: SEV_SNP_POLICY_RESERVED = 0x00020000 (src/nova/virt/libvirt/config.py:L3083)
- **global-mutation**: DEFAULT_SEV_SNP_POLICY = ( (src/nova/virt/libvirt/config.py:L3085)

