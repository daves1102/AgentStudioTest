# src/nova/virt/libvirt/vif.py

## Overview

This file implements the `vif` module, defining 1 class, 3 constants, 4 functions, 44 methods, 23 imports, 25 side effects, 22 security surface entries.

Lines: total 922, code 646, comment 135, blank 141

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/vif.py:L48–L48` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/vif.py:L50–L50` |
| `SUPPORTED_VIF_MODELS` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/vif.py:L52–L82` |
| `is_vif_model_valid_for_virt` | function | (virt_type, vif_model) | exported | `True` (src/nova/virt/libvirt/vif.py:L88); `vif_model in SUPPORTED_VIF_MODELS[virt_type]` (src/nova/virt/libvirt/vif.py:L93) | 3/6 | `src/nova/virt/libvirt/vif.py:L85–L93` |
| `set_vf_interface_vlan` | function | (pci_addr, mac_addr, vlan=0) | exported | not declared | 2/11 | `src/nova/virt/libvirt/vif.py:L96–L112` |
| `set_vf_trusted` | function | (pci_addr, trusted) | exported | not declared | 1/6 | `src/nova/virt/libvirt/vif.py:L115–L126` |
| `ensure_vlan` | function | (vlan_num, bridge_interface, mac_address=None, mtu=None, interface=None) | exported | `interface` (src/nova/virt/libvirt/vif.py:L148) | 4/14 | `src/nova/virt/libvirt/vif.py:L130–L148` |
| `LibvirtGenericVIFDriver` | class | — | exported | not declared | — | `src/nova/virt/libvirt/vif.py:L152–L922` |
| `LibvirtGenericVIFDriver.__init__` | method | (self, host=None) | public | not declared | 1/3 | `src/nova/virt/libvirt/vif.py:L155–L157` |
| `LibvirtGenericVIFDriver.get_vif_devname` | method | (self, vif) | public | `vif['devname']` (src/nova/virt/libvirt/vif.py:L161); `("nic" + vif['id'])[:network_model.NIC_NAME_LEN]` (src/nova/virt/libvirt/vif.py:L162) | 2/4 | `src/nova/virt/libvirt/vif.py:L159–L162` |
| `LibvirtGenericVIFDriver.get_vif_model` | method | (self, image_meta=None, vif_model=None) | public | `model` (src/nova/virt/libvirt/vif.py:L180) | 5/9 | `src/nova/virt/libvirt/vif.py:L164–L180` |
| `LibvirtGenericVIFDriver.get_base_config` | method | (self, instance, mac, image_meta, flavor, virt_type, vnic_type) | public | `conf` (src/nova/virt/libvirt/vif.py:L203); `conf` (src/nova/virt/libvirt/vif.py:L218); `conf` (src/nova/virt/libvirt/vif.py:L251) | 10/34 | `src/nova/virt/libvirt/vif.py:L182–L251` |
| `LibvirtGenericVIFDriver.get_base_hostdev_pci_config` | method | (self, vif) | public | `conf` (src/nova/virt/libvirt/vif.py:L257) | 1/5 | `src/nova/virt/libvirt/vif.py:L253–L257` |
| `LibvirtGenericVIFDriver._get_virtio_mq_settings` | method | (self, image_meta, flavor) | private | `(driver, vhost_queues)` (src/nova/virt/libvirt/vif.py:L277) | 5/14 | `src/nova/virt/libvirt/vif.py:L259–L277` |
| `LibvirtGenericVIFDriver._get_max_tap_queues` | method | (self) | private | `CONF.libvirt.max_queues` (src/nova/virt/libvirt/vif.py:L286); `1` (src/nova/virt/libvirt/vif.py:L294); `8` (src/nova/virt/libvirt/vif.py:L296); `256` (src/nova/virt/libvirt/vif.py:L298); `None` (src/nova/virt/libvirt/vif.py:L300) | 5/12 | `src/nova/virt/libvirt/vif.py:L279–L300` |
| `LibvirtGenericVIFDriver._get_packed_virtqueue_settings` | method | (self, image_meta, flavor) | private | `hardware.get_packed_virtqueue_constraint(flavor, image_meta)` (src/nova/virt/libvirt/vif.py:L307) | 2/4 | `src/nova/virt/libvirt/vif.py:L302–L307` |
| `LibvirtGenericVIFDriver.get_bridge_name` | method | (self, vif) | public | `vif['network']['bridge']` (src/nova/virt/libvirt/vif.py:L310) | 1/2 | `src/nova/virt/libvirt/vif.py:L309–L310` |
| `LibvirtGenericVIFDriver.get_veth_pair_names` | method | (self, iface_id) | public | `(("qvb%s" % iface_id)[:network_model.NIC_NAME_LEN], ("qvo%s" % iface_id)[:network_model.NIC_NAME_LEN])` (src/nova/virt/libvirt/vif.py:L313) | 1/3 | `src/nova/virt/libvirt/vif.py:L312–L314` |
| `LibvirtGenericVIFDriver.get_config_802qbg` | method | (self, instance, vif, image_meta, flavor, virt_type) | public | `conf` (src/nova/virt/libvirt/vif.py:L331) | 1/13 | `src/nova/virt/libvirt/vif.py:L316–L331` |
| `LibvirtGenericVIFDriver.get_config_802qbh` | method | (self, instance, vif, image_meta, flavor, virt_type) | public | `conf` (src/nova/virt/libvirt/vif.py:L350) | 2/14 | `src/nova/virt/libvirt/vif.py:L333–L350` |
| `LibvirtGenericVIFDriver.get_config_hw_veb` | method | (self, instance, vif, image_meta, flavor, virt_type) | public | `conf` (src/nova/virt/libvirt/vif.py:L370) | 2/15 | `src/nova/virt/libvirt/vif.py:L352–L370` |
| `LibvirtGenericVIFDriver.get_config_hostdev_physical` | method | (self, instance, vif, image_meta, flavor, virt_type) | public | `self.get_base_hostdev_pci_config(vif)` (src/nova/virt/libvirt/vif.py:L375) | 1/4 | `src/nova/virt/libvirt/vif.py:L372–L375` |
| `LibvirtGenericVIFDriver.get_config_macvtap` | method | (self, instance, vif, image_meta, flavor, virt_type) | public | `conf` (src/nova/virt/libvirt/vif.py:L406) | 5/24 | `src/nova/virt/libvirt/vif.py:L377–L406` |
| `LibvirtGenericVIFDriver.get_config_iovisor` | method | (self, instance, vif, image_meta, flavor, virt_type) | public | `conf` (src/nova/virt/libvirt/vif.py:L418) | 1/8 | `src/nova/virt/libvirt/vif.py:L408–L418` |
| `LibvirtGenericVIFDriver.get_config_midonet` | method | (self, instance, vif, image_meta, flavor, virt_type) | public | `conf` (src/nova/virt/libvirt/vif.py:L428) | 1/7 | `src/nova/virt/libvirt/vif.py:L420–L428` |
| `LibvirtGenericVIFDriver.get_config_tap` | method | (self, instance, vif, image_meta, flavor, virt_type) | public | `conf` (src/nova/virt/libvirt/vif.py:L443) | 3/11 | `src/nova/virt/libvirt/vif.py:L430–L443` |
| `LibvirtGenericVIFDriver.get_config_ib_hostdev` | method | (self, instance, vif, image_meta, flavor, virt_type) | public | `self.get_base_hostdev_pci_config(vif)` (src/nova/virt/libvirt/vif.py:L448) | 1/4 | `src/nova/virt/libvirt/vif.py:L445–L448` |
| `LibvirtGenericVIFDriver._set_config_VIFGeneric` | method | (self, instance, vif, conf) | private | not declared | 1/3 | `src/nova/virt/libvirt/vif.py:L450–L452` |
| `LibvirtGenericVIFDriver._set_config_VIFBridge` | method | (self, instance, vif, conf) | private | not declared | 1/4 | `src/nova/virt/libvirt/vif.py:L454–L457` |
| `LibvirtGenericVIFDriver._set_config_VIFOpenVSwitch` | method | (self, instance, vif, conf) | private | not declared | 7/21 | `src/nova/virt/libvirt/vif.py:L459–L495` |
| `LibvirtGenericVIFDriver._set_config_VIFVHostUser` | method | (self, instance, vif, conf) | private | not declared | 1/5 | `src/nova/virt/libvirt/vif.py:L497–L506` |
| `LibvirtGenericVIFDriver._set_config_VIFHostDevice` | method | (self, instance, vif, conf) | private | not declared | 2/8 | `src/nova/virt/libvirt/vif.py:L508–L522` |
| `LibvirtGenericVIFDriver._set_config_VIFPortProfileOpenVSwitch` | method | (self, profile, conf) | private | not declared | 1/4 | `src/nova/virt/libvirt/vif.py:L524–L527` |
| `LibvirtGenericVIFDriver._set_config_VIFPortProfile` | method | (self, instance, vif, conf) | private | not declared | 2/7 | `src/nova/virt/libvirt/vif.py:L529–L536` |
| `LibvirtGenericVIFDriver._get_vdpa_dev_path` | method | (self, pci_address) | private | `self.host.get_vdpa_device_path(pci_address)` (src/nova/virt/libvirt/vif.py:L540) | 2/4 | `src/nova/virt/libvirt/vif.py:L538–L543` |
| `LibvirtGenericVIFDriver._get_config_os_vif` | method | (self, instance, vif, image_meta, flavor, virt_type, vnic_type) | private | `conf` (src/nova/virt/libvirt/vif.py:L593) | 10/29 | `src/nova/virt/libvirt/vif.py:L545–L593` |
| `LibvirtGenericVIFDriver.get_config` | method | (self, instance, vif, image_meta, flavor, virt_type) | public | `self._get_config_os_vif( instance, vif_obj, image_meta, flavor, virt_type, vnic_type)` (src/nova/virt/libvirt/vif.py:L614); `self.get_config_iovisor(*args)` (src/nova/virt/libvirt/vif.py:L620); `self.get_config_802qbg(*args)` (src/nova/virt/libvirt/vif.py:L622); `self.get_config_802qbh(*args)` (src/nova/virt/libvirt/vif.py:L624); `self.get_config_hw_veb(*args)` (src/nova/virt/libvirt/vif.py:L626); `self.get_config_hostdev_physical(*args)` (src/nova/virt/libvirt/vif.py:L628); `self.get_config_macvtap(*args)` (src/nova/virt/libvirt/vif.py:L630); `self.get_config_midonet(*args)` (src/nova/virt/libvirt/vif.py:L632); `self.get_config_tap(*args)` (src/nova/virt/libvirt/vif.py:L634); `self.get_config_ib_hostdev(*args)` (src/nova/virt/libvirt/vif.py:L636) | 12/36 | `src/nova/virt/libvirt/vif.py:L595–L638` |
| `LibvirtGenericVIFDriver.plug_ib_hostdev` | method | (self, instance, vif) | public | not declared | 3/16 | `src/nova/virt/libvirt/vif.py:L640–L655` |
| `LibvirtGenericVIFDriver.plug_hw_veb` | method | (self, instance, vif) | public | not declared | 4/11 | `src/nova/virt/libvirt/vif.py:L657–L675` |
| `LibvirtGenericVIFDriver.plug_macvtap` | method | (self, instance, vif) | public | not declared | 2/8 | `src/nova/virt/libvirt/vif.py:L677–L684` |
| `LibvirtGenericVIFDriver.plug_midonet` | method | (self, instance, vif) | public | not declared | 2/8 | `src/nova/virt/libvirt/vif.py:L686–L697` |
| `LibvirtGenericVIFDriver.plug_iovisor` | method | (self, instance, vif) | public | not declared | 2/11 | `src/nova/virt/libvirt/vif.py:L699–L714` |
| `LibvirtGenericVIFDriver.plug_tap` | method | (self, instance, vif) | public | not declared | 3/13 | `src/nova/virt/libvirt/vif.py:L716–L731` |
| `LibvirtGenericVIFDriver._plug_os_vif` | method | (self, instance, vif) | private | not declared | 9/19 | `src/nova/virt/libvirt/vif.py:L733–L759` |
| `LibvirtGenericVIFDriver.plug` | method | (self, instance, vif) | public | `` (src/nova/virt/libvirt/vif.py:L780) | 10/35 | `src/nova/virt/libvirt/vif.py:L761–L803` |
| `LibvirtGenericVIFDriver.unplug_ib_hostdev` | method | (self, instance, vif) | public | not declared | 3/11 | `src/nova/virt/libvirt/vif.py:L805–L815` |
| `LibvirtGenericVIFDriver.unplug_hw_veb` | method | (self, instance, vif) | public | not declared | 4/7 | `src/nova/virt/libvirt/vif.py:L817–L833` |
| `LibvirtGenericVIFDriver.unplug_midonet` | method | (self, instance, vif) | public | not declared | 2/8 | `src/nova/virt/libvirt/vif.py:L835–L846` |
| `LibvirtGenericVIFDriver.unplug_tap` | method | (self, instance, vif) | public | not declared | 2/6 | `src/nova/virt/libvirt/vif.py:L848–L854` |
| `LibvirtGenericVIFDriver.unplug_iovisor` | method | (self, instance, vif) | public | not declared | 2/7 | `src/nova/virt/libvirt/vif.py:L856–L867` |
| `LibvirtGenericVIFDriver._unplug_os_vif` | method | (self, instance, vif) | private | not declared | 2/8 | `src/nova/virt/libvirt/vif.py:L869–L877` |
| `LibvirtGenericVIFDriver.unplug` | method | (self, instance, vif) | public | `` (src/nova/virt/libvirt/vif.py:L898) | 9/34 | `src/nova/virt/libvirt/vif.py:L879–L922` |

## Dependencies

- `import os` (src/nova/virt/libvirt/vif.py:L21)
- `import os_vif` (src/nova/virt/libvirt/vif.py:L23)
- `os_vif`: imports `exception as osv_exception` (src/nova/virt/libvirt/vif.py:L24)
- `os_vif.objects`: imports `fields as osv_fields` (src/nova/virt/libvirt/vif.py:L25)
- `os_vif.objects`: imports `vif as osv_vifs` (src/nova/virt/libvirt/vif.py:L26)
- `oslo_concurrency`: imports `processutils` (src/nova/virt/libvirt/vif.py:L27)
- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/vif.py:L28)
- `oslo_utils`: imports `strutils` (src/nova/virt/libvirt/vif.py:L29)
- `import nova.conf` (src/nova/virt/libvirt/vif.py:L31)
- `nova`: imports `exception` (src/nova/virt/libvirt/vif.py:L32)
- `nova.i18n`: imports `_` (src/nova/virt/libvirt/vif.py:L33)
- `nova.network`: imports `model as network_model` (src/nova/virt/libvirt/vif.py:L34)
- `nova.network`: imports `os_vif_util` (src/nova/virt/libvirt/vif.py:L35)
- `nova`: imports `objects` (src/nova/virt/libvirt/vif.py:L36)
- `nova.pci`: imports `utils as pci_utils` (src/nova/virt/libvirt/vif.py:L37)
- `import nova.privsep.linux_net` (src/nova/virt/libvirt/vif.py:L38)
- `nova`: imports `profiler` (src/nova/virt/libvirt/vif.py:L39)
- `nova`: imports `utils` (src/nova/virt/libvirt/vif.py:L40)
- `nova.virt`: imports `hardware` (src/nova/virt/libvirt/vif.py:L41)
- `nova.virt.libvirt`: imports `config as vconfig` (src/nova/virt/libvirt/vif.py:L42)
- `nova.virt.libvirt`: imports `designer` (src/nova/virt/libvirt/vif.py:L43)
- `nova.virt.libvirt`: imports `host as libvirt_host` (src/nova/virt/libvirt/vif.py:L44)
- `nova.virt`: imports `osinfo` (src/nova/virt/libvirt/vif.py:L45)

## Side Effects

- **process-spawn**: import nova.privsep.linux_net (src/nova/virt/libvirt/vif.py:L38)
- **process-spawn**: nova.privsep.linux_net.set_device_macaddr_and_vlan( (src/nova/virt/libvirt/vif.py:L103)
- **process-spawn**: nova.privsep.linux_net.set_device_macaddr(vf_ifname, mac_addr, (src/nova/virt/libvirt/vif.py:L111)
- **process-spawn**: nova.privsep.linux_net.set_device_trust( (src/nova/virt/libvirt/vif.py:L125)
- **process-spawn**: if not nova.privsep.linux_net.device_exists(interface): (src/nova/virt/libvirt/vif.py:L135)
- **process-spawn**: nova.privsep.linux_net.add_vlan(bridge_interface, interface, (src/nova/virt/libvirt/vif.py:L137)
- **process-spawn**: nova.privsep.linux_net.set_device_macaddr( (src/nova/virt/libvirt/vif.py:L142)
- **process-spawn**: nova.privsep.linux_net.set_device_enabled(interface) (src/nova/virt/libvirt/vif.py:L144)
- **process-spawn**: nova.privsep.linux_net.set_device_mtu(interface, mtu) (src/nova/virt/libvirt/vif.py:L147)
- **process-spawn**: nova.privsep.libvirt.plug_infiniband_vif( (src/nova/virt/libvirt/vif.py:L650)
- **process-spawn**: nova.privsep.linux_net.create_tap_dev(dev) (src/nova/virt/libvirt/vif.py:L694)
- **process-spawn**: nova.privsep.libvirt.plug_midonet_vif(port_id, dev) (src/nova/virt/libvirt/vif.py:L695)
- **process-spawn**: nova.privsep.linux_net.create_tap_dev(dev) (src/nova/virt/libvirt/vif.py:L707)
- **process-spawn**: nova.privsep.libvirt.plug_plumgrid_vif( (src/nova/virt/libvirt/vif.py:L711)
- **process-spawn**: nova.privsep.linux_net.create_tap_dev(dev, mac, multiqueue=multiqueue) (src/nova/virt/libvirt/vif.py:L728)
- **process-spawn**: nova.privsep.linux_net.set_device_mtu(dev, mtu) (src/nova/virt/libvirt/vif.py:L731)
- **process-spawn**: nova.privsep.libvirt.unplug_infiniband_vif(fabric, vnic_mac) (src/nova/virt/libvirt/vif.py:L813)
- **process-spawn**: nova.privsep.libvirt.unplug_midonet_vif(port_id) (src/nova/virt/libvirt/vif.py:L843)
- **process-spawn**: nova.privsep.linux_net.delete_net_dev(dev) (src/nova/virt/libvirt/vif.py:L844)
- **process-spawn**: nova.privsep.linux_net.delete_net_dev(dev) (src/nova/virt/libvirt/vif.py:L852)
- **process-spawn**: nova.privsep.libvirt.unplug_plumgrid_vif(dev) (src/nova/virt/libvirt/vif.py:L864)
- **process-spawn**: nova.privsep.linux_net.delete_net_dev(dev) (src/nova/virt/libvirt/vif.py:L865)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/vif.py:L48)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/libvirt/vif.py:L50)
- **global-mutation**: SUPPORTED_VIF_MODELS = { (src/nova/virt/libvirt/vif.py:L52)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.linux_net (src/nova/virt/libvirt/vif.py:L38)
- **privilege** (`privsep-entrypoint`): nova.privsep.linux_net.set_device_macaddr_and_vlan( (src/nova/virt/libvirt/vif.py:L103)
- **privilege** (`privsep-entrypoint`): nova.privsep.linux_net.set_device_macaddr(vf_ifname, mac_addr, (src/nova/virt/libvirt/vif.py:L111)
- **privilege** (`privsep-entrypoint`): nova.privsep.linux_net.set_device_trust( (src/nova/virt/libvirt/vif.py:L125)
- **privilege** (`privsep-entrypoint`): if not nova.privsep.linux_net.device_exists(interface): (src/nova/virt/libvirt/vif.py:L135)
- **privilege** (`privsep-entrypoint`): nova.privsep.linux_net.add_vlan(bridge_interface, interface, (src/nova/virt/libvirt/vif.py:L137)
- **privilege** (`privsep-entrypoint`): nova.privsep.linux_net.set_device_macaddr( (src/nova/virt/libvirt/vif.py:L142)
- **privilege** (`privsep-entrypoint`): nova.privsep.linux_net.set_device_enabled(interface) (src/nova/virt/libvirt/vif.py:L144)
- **privilege** (`privsep-entrypoint`): nova.privsep.linux_net.set_device_mtu(interface, mtu) (src/nova/virt/libvirt/vif.py:L147)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.plug_infiniband_vif( (src/nova/virt/libvirt/vif.py:L650)
- **privilege** (`privsep-entrypoint`): nova.privsep.linux_net.create_tap_dev(dev) (src/nova/virt/libvirt/vif.py:L694)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.plug_midonet_vif(port_id, dev) (src/nova/virt/libvirt/vif.py:L695)
- **privilege** (`privsep-entrypoint`): nova.privsep.linux_net.create_tap_dev(dev) (src/nova/virt/libvirt/vif.py:L707)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.plug_plumgrid_vif( (src/nova/virt/libvirt/vif.py:L711)
- **privilege** (`privsep-entrypoint`): nova.privsep.linux_net.create_tap_dev(dev, mac, multiqueue=multiqueue) (src/nova/virt/libvirt/vif.py:L728)
- **privilege** (`privsep-entrypoint`): nova.privsep.linux_net.set_device_mtu(dev, mtu) (src/nova/virt/libvirt/vif.py:L731)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.unplug_infiniband_vif(fabric, vnic_mac) (src/nova/virt/libvirt/vif.py:L813)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.unplug_midonet_vif(port_id) (src/nova/virt/libvirt/vif.py:L843)
- **privilege** (`privsep-entrypoint`): nova.privsep.linux_net.delete_net_dev(dev) (src/nova/virt/libvirt/vif.py:L844)
- **privilege** (`privsep-entrypoint`): nova.privsep.linux_net.delete_net_dev(dev) (src/nova/virt/libvirt/vif.py:L852)
- **privilege** (`privsep-entrypoint`): nova.privsep.libvirt.unplug_plumgrid_vif(dev) (src/nova/virt/libvirt/vif.py:L864)
- **privilege** (`privsep-entrypoint`): nova.privsep.linux_net.delete_net_dev(dev) (src/nova/virt/libvirt/vif.py:L865)

