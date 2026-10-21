# src/nova/virt/ironic/driver.py

## Overview

This file implements the `driver` module, defining 1 class, 3 constants, 2 fields, 18 functions, 69 methods, 1 property, 5 variables, 35 imports, 8 side effects, 8 security surface entries.

Lines: total 2379, code 1795, comment 267, blank 317

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/ironic/driver.py:L60–L60` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/ironic/driver.py:L61–L61` |
| `IRONIC_API_VERSION` | constant | — | exported | not declared | — | `src/nova/virt/ironic/driver.py:L64–L64` |
| `_POWER_STATE_MAP` | variable | — | unexported | not declared | — | `src/nova/virt/ironic/driver.py:L66–L70` |
| `_UNPROVISION_STATES` | variable | — | unexported | not declared | — | `src/nova/virt/ironic/driver.py:L72–L79` |
| `_NODE_FIELDS` | variable | — | unexported | not declared | — | `src/nova/virt/ironic/driver.py:L81–L83` |
| `_CONSOLE_STATE_CHECKING_INTERVAL` | variable | — | unexported | not declared | — | `src/nova/virt/ironic/driver.py:L86–L86` |
| `_HASH_RING_PARTITIONS` | variable | — | unexported | not declared | — | `src/nova/virt/ironic/driver.py:L90–L90` |
| `map_power_state` | function | (state) | exported | `_POWER_STATE_MAP[state]` (src/nova/virt/ironic/driver.py:L95); `power_state.NOSTATE` (src/nova/virt/ironic/driver.py:L98) | 2/6 | `src/nova/virt/ironic/driver.py:L93–L98` |
| `_get_nodes_supported_instances` | function | (cpu_arch=None) | unexported | `[]` (src/nova/virt/ironic/driver.py:L104); `[(cpu_arch, obj_fields.HVType.BAREMETAL, obj_fields.VMMode.HVM)]` (src/nova/virt/ironic/driver.py:L105) | 2/6 | `src/nova/virt/ironic/driver.py:L101–L107` |
| `_log_ironic_polling` | function | (what, node, instance) | unexported | not declared | 5/21 | `src/nova/virt/ironic/driver.py:L110–L130` |
| `_check_peer_list` | function | — | unexported | not declared | 5/17 | `src/nova/virt/ironic/driver.py:L133–L150` |
| `IronicDriver` | class | — | exported | not declared | — | `src/nova/virt/ironic/driver.py:L153–L2379` |
| `IronicDriver.capabilities` | field | — | public | not declared | — | `src/nova/virt/ironic/driver.py:L156–L184` |
| `IronicDriver.rebalances_nodes` | field | — | public | not declared | — | `src/nova/virt/ironic/driver.py:L187–L187` |
| `IronicDriver.__init__` | method | (self, virtapi, read_only=False) | public | not declared | 1/6 | `src/nova/virt/ironic/driver.py:L189–L196` |
| `IronicDriver.ironic_connection` | method | (self) | public | `self._ironic_connection` (src/nova/virt/ironic/driver.py:L206) | 2/5 | `src/nova/virt/ironic/driver.py:L199–L206` |
| `IronicDriver._get_node` | method | (self, node_id) | private | `self.ironic_connection.get_node(node_id, fields=_NODE_FIELDS)` (src/nova/virt/ironic/driver.py:L214) | 1/2 | `src/nova/virt/ironic/driver.py:L208–L214` |
| `IronicDriver._validate_instance_and_node` | method | (self, instance) | private | `node` (src/nova/virt/ironic/driver.py:L233) | 3/11 | `src/nova/virt/ironic/driver.py:L216–L233` |
| `IronicDriver._node_resources_unavailable` | method | (self, node_obj) | private | `(node_obj.is_maintenance or node_obj.power_state in bad_power_states or node_obj.provision_state not in good_provision_states)` (src/nova/virt/ironic/driver.py:L249) | 3/8 | `src/nova/virt/ironic/driver.py:L235–L251` |
| `IronicDriver._node_resources_used` | method | (self, node_obj) | private | `node_obj.instance_id is not None` (src/nova/virt/ironic/driver.py:L267) | 1/2 | `src/nova/virt/ironic/driver.py:L253–L267` |
| `IronicDriver._parse_node_properties` | method | (self, node) | private | `properties` (src/nova/virt/ironic/driver.py:L293) | 5/21 | `src/nova/virt/ironic/driver.py:L269–L293` |
| `IronicDriver._node_resource` | method | (self, node) | private | `dic` (src/nova/virt/ironic/driver.py:L357) | 6/37 | `src/nova/virt/ironic/driver.py:L295–L357` |
| `IronicDriver._set_instance_id` | method | (self, node, instance) | private | not declared | 2/10 | `src/nova/virt/ironic/driver.py:L359–L371` |
| `IronicDriver.prepare_for_spawn` | method | (self, instance) | public | not declared | 4/18 | `src/nova/virt/ironic/driver.py:L373–L397` |
| `IronicDriver.failed_spawn_cleanup` | method | (self, instance) | public | `` (src/nova/virt/ironic/driver.py:L408) | 2/11 | `src/nova/virt/ironic/driver.py:L399–L409` |
| `IronicDriver._is_boot_from_volume` | method | (self, block_device_info) | private | `root_bdm is not None` (src/nova/virt/ironic/driver.py:L414) | 1/4 | `src/nova/virt/ironic/driver.py:L411–L414` |
| `IronicDriver._add_instance_info_to_node` | method | (self, node, instance, image_meta, flavor, metadata, preserve_ephemeral=None, block_device_info=None) | private | not declared | 2/19 | `src/nova/virt/ironic/driver.py:L416–L436` |
| `IronicDriver._remove_instance_info_from_node` | method | (self, node) | private | not declared | 2/10 | `src/nova/virt/ironic/driver.py:L438–L447` |
| `IronicDriver._add_volume_target_info` | method | (self, context, instance, block_device_info) | private | not declared | 4/29 | `src/nova/virt/ironic/driver.py:L449–L480` |
| `IronicDriver._cleanup_volume_target_info` | method | (self, instance) | private | not declared | 4/28 | `src/nova/virt/ironic/driver.py:L482–L510` |
| `IronicDriver._cleanup_deploy` | method | (self, node, instance, network_info=None) | private | not declared | 1/4 | `src/nova/virt/ironic/driver.py:L512–L515` |
| `IronicDriver._wait_for_active` | method | (self, instance) | private | not declared | 8/23 | `src/nova/virt/ironic/driver.py:L517–L550` |
| `IronicDriver._wait_for_power_state` | method | (self, instance, message) | private | not declared | 2/5 | `src/nova/virt/ironic/driver.py:L552–L559` |
| `IronicDriver.init_host` | method | (self, host) | public | not declared | 1/2 | `src/nova/virt/ironic/driver.py:L561–L567` |
| `IronicDriver._get_hypervisor_type` | method | (self) | private | `'ironic'` (src/nova/virt/ironic/driver.py:L571) | 1/2 | `src/nova/virt/ironic/driver.py:L569–L571` |
| `IronicDriver._get_hypervisor_version` | method | (self) | private | `IRONIC_API_VERSION[0]` (src/nova/virt/ironic/driver.py:L575) | 1/2 | `src/nova/virt/ironic/driver.py:L573–L575` |
| `IronicDriver.instance_exists` | method | (self, instance) | public | `True` (src/nova/virt/ironic/driver.py:L589); `False` (src/nova/virt/ironic/driver.py:L591) | 2/6 | `src/nova/virt/ironic/driver.py:L577–L591` |
| `IronicDriver._get_node_list` | method | (self, return_generator=False, **kwargs) | private | `node_generator` (src/nova/virt/ironic/driver.py:L632); `list(node_generator)` (src/nova/virt/ironic/driver.py:L634) | 8/26 | `src/nova/virt/ironic/driver.py:L593–L634` |
| `IronicDriver.get_num_instances` | method | (self) | public | `len(self.list_instance_uuids())` (src/nova/virt/ironic/driver.py:L645) | 1/2 | `src/nova/virt/ironic/driver.py:L636–L645` |
| `IronicDriver.list_instances` | method | (self) | public | `[objects.Instance.get_by_uuid(context, node.instance_id).name for node in self.node_cache.values() if node.instance_id is not None]` (src/nova/virt/ironic/driver.py:L659) | 4/7 | `src/nova/virt/ironic/driver.py:L647–L661` |
| `IronicDriver.list_instance_uuids` | method | (self) | public | `[node.instance_id for node in self.node_cache.values() if node.instance_id is not None]` (src/nova/virt/ironic/driver.py:L673) | 4/6 | `src/nova/virt/ironic/driver.py:L663–L675` |
| `IronicDriver.node_is_available` | method | (self, nodename) | public | `True` (src/nova/virt/ironic/driver.py:L698); `True` (src/nova/virt/ironic/driver.py:L705); `False` (src/nova/virt/ironic/driver.py:L707) | 4/10 | `src/nova/virt/ironic/driver.py:L677–L707` |
| `IronicDriver.is_node_deleted` | method | (self, nodename) | public | `False` (src/nova/virt/ironic/driver.py:L713); `True` (src/nova/virt/ironic/driver.py:L715) | 2/6 | `src/nova/virt/ironic/driver.py:L709–L715` |
| `IronicDriver._refresh_hash_ring` | method | (self, ctxt) | private | not declared | 10/27 | `src/nova/virt/ironic/driver.py:L717–L769` |
| `IronicDriver._refresh_cache` | method | (self) | private | not declared | 8/31 | `src/nova/virt/ironic/driver.py:L771–L835` |
| `IronicDriver._refresh_cache._get_node_list` | function | (**kwargs) | private | `self._get_node_list(fields=_NODE_FIELDS, **kwargs)` (src/nova/virt/ironic/driver.py:L783) | — | `src/nova/virt/ironic/driver.py:L776–L783` |
| `IronicDriver.get_available_nodes` | method | (self, refresh=False) | public | `node_ids` (src/nova/virt/ironic/driver.py:L868) | 1/6 | `src/nova/virt/ironic/driver.py:L837–L868` |
| `IronicDriver.get_nodenames_by_uuid` | method | (self, refresh=False) | public | `dict(zip(nodes, nodes))` (src/nova/virt/ironic/driver.py:L875) | 1/3 | `src/nova/virt/ironic/driver.py:L870–L875` |
| `IronicDriver.update_provider_tree` | method | (self, provider_tree, nodename, allocations=None) | public | not declared | 6/25 | `src/nova/virt/ironic/driver.py:L877–L967` |
| `IronicDriver.get_available_resource` | method | (self, nodename) | public | `self._node_resource(node)` (src/nova/virt/ironic/driver.py:L989) | 2/5 | `src/nova/virt/ironic/driver.py:L969–L989` |
| `IronicDriver._node_from_cache` | method | (self, node_id) | private | `_sync_node_from_cache()` (src/nova/virt/ironic/driver.py:L1010) | 1/4 | `src/nova/virt/ironic/driver.py:L991–L1010` |
| `IronicDriver._node_from_cache._sync_node_from_cache` | function | — | private | `self.node_cache[node_id]` (src/nova/virt/ironic/driver.py:L1003); `node` (src/nova/virt/ironic/driver.py:L1009) | — | `src/nova/virt/ironic/driver.py:L998–L1009` |
| `IronicDriver.get_info` | method | (self, instance, use_cache=True) | public | `_fetch_from_ironic(self, instance)` (src/nova/virt/ironic/driver.py:L1035); `_fetch_from_ironic(self, instance)` (src/nova/virt/ironic/driver.py:L1047); `hardware.InstanceInfo(state=map_power_state(node.power_state))` (src/nova/virt/ironic/driver.py:L1049) | 5/12 | `src/nova/virt/ironic/driver.py:L1012–L1049` |
| `IronicDriver.get_info._fetch_from_ironic` | function | (self, instance) | private | `hardware.InstanceInfo( state=map_power_state(node.power_state))` (src/nova/virt/ironic/driver.py:L1028); `hardware.InstanceInfo( state=map_power_state(ironic_states.NOSTATE))` (src/nova/virt/ironic/driver.py:L1031) | — | `src/nova/virt/ironic/driver.py:L1025–L1032` |
| `IronicDriver._get_network_metadata` | method | (self, node, network_info) | private | `base_metadata` (src/nova/virt/ironic/driver.py:L1112) | 14/40 | `src/nova/virt/ironic/driver.py:L1051–L1112` |
| `IronicDriver._generate_configdrive` | method | (self, context, instance, node, network_info, extra_md=None, files=None) | private | `base64.b64encode(compressed.read()).decode()` (src/nova/virt/ironic/driver.py:L1147) | 2/16 | `src/nova/virt/ironic/driver.py:L1114–L1147` |
| `IronicDriver.spawn` | method | (self, context, instance, image_meta, injected_files, admin_password, allocations, network_info=None, block_device_info=None, power_on=True, accel_info=None) | public | not declared | 16/99 | `src/nova/virt/ironic/driver.py:L1149–L1291` |
| `IronicDriver._unprovision` | method | (self, instance, node) | private | not declared | 3/16 | `src/nova/virt/ironic/driver.py:L1293–L1357` |
| `IronicDriver._unprovision._wait_for_provision_state` | function | — | private | not declared | — | `src/nova/virt/ironic/driver.py:L1310–L1341` |
| `IronicDriver._unprovision._sync_remove_cache_entry` | function | — | private | not declared | — | `src/nova/virt/ironic/driver.py:L1350–L1356` |
| `IronicDriver.destroy` | method | (self, context, instance, network_info, block_device_info=None, destroy_disks=True, destroy_secrets=True) | public | `` (src/nova/virt/ironic/driver.py:L1384) | 4/17 | `src/nova/virt/ironic/driver.py:L1359–L1403` |
| `IronicDriver.reboot` | method | (self, context, instance, network_info, reboot_type, block_device_info=None, bad_volumes_callback=None, accel_info=None, share_info=None) | public | not declared | 5/29 | `src/nova/virt/ironic/driver.py:L1405–L1455` |
| `IronicDriver.power_off` | method | (self, instance, timeout=0, retry_interval=0) | public | `` (src/nova/virt/ironic/driver.py:L1490) | 4/44 | `src/nova/virt/ironic/driver.py:L1457–L1517` |
| `IronicDriver.power_on` | method | (self, context, instance, network_info, block_device_info=None, accel_info=None, share_info=None) | public | not declared | 1/11 | `src/nova/virt/ironic/driver.py:L1519–L1545` |
| `IronicDriver.power_update_event` | method | (self, instance, target_power_state) | public | not declared | 2/15 | `src/nova/virt/ironic/driver.py:L1547–L1565` |
| `IronicDriver.trigger_crash_dump` | method | (self, instance) | public | not declared | 1/6 | `src/nova/virt/ironic/driver.py:L1567–L1583` |
| `IronicDriver._plug_vif` | method | (self, node, port_id) | private | `` (src/nova/virt/ironic/driver.py:L1603); `` (src/nova/virt/ironic/driver.py:L1606) | 4/19 | `src/nova/virt/ironic/driver.py:L1585–L1606` |
| `IronicDriver._plug_vifs` | method | (self, node, instance, network_info) | private | not declared | 2/8 | `src/nova/virt/ironic/driver.py:L1608–L1618` |
| `IronicDriver._unplug_vifs` | method | (self, node, instance, network_info) | private | `` (src/nova/virt/ironic/driver.py:L1629) | 4/14 | `src/nova/virt/ironic/driver.py:L1620–L1636` |
| `IronicDriver.plug_vifs` | method | (self, instance, network_info) | public | not declared | 1/6 | `src/nova/virt/ironic/driver.py:L1638–L1655` |
| `IronicDriver.unplug_vifs` | method | (self, instance, network_info) | public | not declared | 1/3 | `src/nova/virt/ironic/driver.py:L1657–L1666` |
| `IronicDriver.attach_interface` | method | (self, context, instance, image_meta, vif) | public | not declared | 1/3 | `src/nova/virt/ironic/driver.py:L1668–L1687` |
| `IronicDriver.detach_interface` | method | (self, context, instance, vif) | public | not declared | 1/2 | `src/nova/virt/ironic/driver.py:L1689–L1705` |
| `IronicDriver.rebuild` | method | (self, context, instance, image_meta, injected_files, admin_password, allocations, bdms, detach_block_devices, attach_block_devices, network_info=None, evacuate=False, block_device_info=None, preserve_ephemeral=False, accel_uuids=None, reimage_boot_volume=False) | public | not declared | 7/54 | `src/nova/virt/ironic/driver.py:L1707–L1816` |
| `IronicDriver.network_binding_host_id` | method | (self, context, instance) | public | `None` (src/nova/virt/ironic/driver.py:L1846) | 1/2 | `src/nova/virt/ironic/driver.py:L1818–L1846` |
| `IronicDriver._get_node_console_with_reset` | method | (self, instance) | private | `{'node': node, 'console_info': console['console_info']}` (src/nova/virt/ironic/driver.py:L1936) | 4/20 | `src/nova/virt/ironic/driver.py:L1848–L1941` |
| `IronicDriver._get_node_console_with_reset._get_console` | function | — | private | `self.ironic_connection.get_node_console(node_id)` (src/nova/virt/ironic/driver.py:L1867) | — | `src/nova/virt/ironic/driver.py:L1864–L1872` |
| `IronicDriver._get_node_console_with_reset._wait_state` | function | (state) | private | `False` (src/nova/virt/ironic/driver.py:L1883) | — | `src/nova/virt/ironic/driver.py:L1874–L1883` |
| `IronicDriver._get_node_console_with_reset._enable_console` | function | (mode) | private | `timer.start( starting_interval=_CONSOLE_STATE_CHECKING_INTERVAL, timeout=CONF.ironic.serial_console_state_timeout, jitter=0.5).wait()` (src/nova/virt/ironic/driver.py:L1903) | — | `src/nova/virt/ironic/driver.py:L1885–L1912` |
| `IronicDriver._get_vnc_console` | method | (self, instance) | private | `{'node': node, 'console_info': console['console_info']}` (src/nova/virt/ironic/driver.py:L2007) | 2/11 | `src/nova/virt/ironic/driver.py:L1943–L2008` |
| `IronicDriver._get_vnc_console._get_console` | function | — | private | `self.ironic_connection.get_node_console(node_id)` (src/nova/virt/ironic/driver.py:L1959) | — | `src/nova/virt/ironic/driver.py:L1956–L1964` |
| `IronicDriver._get_vnc_console._wait_state` | function | — | private | `False` (src/nova/virt/ironic/driver.py:L1975) | — | `src/nova/virt/ironic/driver.py:L1966–L1975` |
| `IronicDriver._get_vnc_console._enable_console` | function | — | private | `timer.start( starting_interval=_CONSOLE_STATE_CHECKING_INTERVAL, timeout=CONF.ironic.vnc_console_state_timeout, jitter=0.5).wait()` (src/nova/virt/ironic/driver.py:L1991) | — | `src/nova/virt/ironic/driver.py:L1977–L1999` |
| `IronicDriver.get_vnc_console` | method | (self, context, instance) | public | `console_type.ConsoleVNC(host=host, port=port)` (src/nova/virt/ironic/driver.py:L2050) | 5/26 | `src/nova/virt/ironic/driver.py:L2010–L2050` |
| `IronicDriver.get_serial_console` | method | (self, context, instance) | public | `console_type.ConsoleSerial(host=hostname, port=port)` (src/nova/virt/ironic/driver.py:L2095) | 8/39 | `src/nova/virt/ironic/driver.py:L2052–L2103` |
| `IronicDriver.prepare_networks_before_block_device_mapping` | method | (self, instance, network_info) | public | not declared | 2/12 | `src/nova/virt/ironic/driver.py:L2105–L2128` |
| `IronicDriver.clean_networks_preparation` | method | (self, instance, network_info) | public | not declared | 2/9 | `src/nova/virt/ironic/driver.py:L2130–L2143` |
| `IronicDriver.get_volume_connector` | method | (self, instance) | public | `props` (src/nova/virt/ironic/driver.py:L2204) | 7/30 | `src/nova/virt/ironic/driver.py:L2145–L2204` |
| `IronicDriver._get_volume_connector_ip` | method | (self, instance, node, values) | private | `values['ip'][0]` (src/nova/virt/ironic/driver.py:L2210); `fixed_ips_v4[0]['address']` (src/nova/virt/ironic/driver.py:L2223); `fixed_ips[0]['address']` (src/nova/virt/ironic/driver.py:L2225); `None` (src/nova/virt/ironic/driver.py:L2226) | 12/18 | `src/nova/virt/ironic/driver.py:L2206–L2226` |
| `IronicDriver._get_vif_from_macs` | method | (self, node, macs, instance) | private | `vif_id` (src/nova/virt/ironic/driver.py:L2264); `vif_id` (src/nova/virt/ironic/driver.py:L2273); `None` (src/nova/virt/ironic/driver.py:L2275) | 4/20 | `src/nova/virt/ironic/driver.py:L2228–L2275` |
| `IronicDriver._get_vif_from_macs._get_vif` | function | (ports) | private | `vif_id` (src/nova/virt/ironic/driver.py:L2254) | — | `src/nova/virt/ironic/driver.py:L2239–L2254` |
| `IronicDriver._can_send_version` | method | (self, version=None) | private | not declared | 2/6 | `src/nova/virt/ironic/driver.py:L2277–L2283` |
| `IronicDriver.rescue` | method | (self, context, instance, network_info, image_meta, rescue_password, block_device_info, share_info) | public | not declared | 2/17 | `src/nova/virt/ironic/driver.py:L2285–L2334` |
| `IronicDriver.rescue._wait_for_rescue` | function | — | private | not declared | — | `src/nova/virt/ironic/driver.py:L2309–L2320` |
| `IronicDriver.unrescue` | method | (self, context, instance) | public | not declared | 2/19 | `src/nova/virt/ironic/driver.py:L2336–L2374` |
| `IronicDriver.unrescue._wait_for_unrescue` | function | — | private | not declared | — | `src/nova/virt/ironic/driver.py:L2350–L2361` |
| `IronicDriver.manages_network_binding_host_id` | method | (self) | public | `True` (src/nova/virt/ironic/driver.py:L2379) | 1/2 | `src/nova/virt/ironic/driver.py:L2376–L2379` |
| `IronicDriver.ironic_connection` | property | — | public | not declared | — | `src/nova/virt/ironic/driver.py:L198–L206` |

## Dependencies

- `import base64` (src/nova/virt/ironic/driver.py:L22)
- `import gzip` (src/nova/virt/ironic/driver.py:L23)
- `import shutil` (src/nova/virt/ironic/driver.py:L24)
- `import tempfile` (src/nova/virt/ironic/driver.py:L25)
- `import time` (src/nova/virt/ironic/driver.py:L26)
- `urllib`: imports `parse as urlparse` (src/nova/virt/ironic/driver.py:L27)
- `openstack.baremetal.v1.node`: imports `PowerAction` (src/nova/virt/ironic/driver.py:L29)
- `openstack`: imports `exceptions as sdk_exc` (src/nova/virt/ironic/driver.py:L30)
- `openstack`: imports `utils as sdk_utils` (src/nova/virt/ironic/driver.py:L31)
- `oslo_log`: imports `log as logging` (src/nova/virt/ironic/driver.py:L32)
- `oslo_serialization`: imports `jsonutils` (src/nova/virt/ironic/driver.py:L33)
- `oslo_service`: imports `loopingcall` (src/nova/virt/ironic/driver.py:L34)
- `oslo_utils`: imports `excutils` (src/nova/virt/ironic/driver.py:L35)
- `tooz`: imports `hashring as hash_ring` (src/nova/virt/ironic/driver.py:L36)
- `nova.api.metadata`: imports `base as instance_metadata` (src/nova/virt/ironic/driver.py:L38)
- `nova`: imports `block_device` (src/nova/virt/ironic/driver.py:L39)
- `nova.compute`: imports `power_state` (src/nova/virt/ironic/driver.py:L40)
- `nova.compute`: imports `task_states` (src/nova/virt/ironic/driver.py:L41)
- `nova.compute`: imports `vm_states` (src/nova/virt/ironic/driver.py:L42)
- `import nova.conf` (src/nova/virt/ironic/driver.py:L43)
- `nova.console`: imports `type as console_type` (src/nova/virt/ironic/driver.py:L44)
- `nova`: imports `context as nova_context` (src/nova/virt/ironic/driver.py:L45)
- `nova`: imports `exception` (src/nova/virt/ironic/driver.py:L46)
- `nova.i18n`: imports `_` (src/nova/virt/ironic/driver.py:L47)
- `nova`: imports `objects` (src/nova/virt/ironic/driver.py:L48)
- `nova.objects`: imports `external_event as external_event_obj` (src/nova/virt/ironic/driver.py:L49)
- `nova.objects`: imports `fields as obj_fields` (src/nova/virt/ironic/driver.py:L50)
- `nova`: imports `servicegroup` (src/nova/virt/ironic/driver.py:L51)
- `nova`: imports `utils` (src/nova/virt/ironic/driver.py:L52)
- `nova.virt`: imports `configdrive` (src/nova/virt/ironic/driver.py:L53)
- `nova.virt`: imports `driver as virt_driver` (src/nova/virt/ironic/driver.py:L54)
- `nova.virt`: imports `hardware` (src/nova/virt/ironic/driver.py:L55)
- `nova.virt.ironic`: imports `ironic_states` (src/nova/virt/ironic/driver.py:L56)
- `nova.virt.ironic`: imports `patcher` (src/nova/virt/ironic/driver.py:L57)
- `nova.virt`: imports `netutils` (src/nova/virt/ironic/driver.py:L58)

## Side Effects

- **network**: from openstack.baremetal.v1.node import PowerAction (src/nova/virt/ironic/driver.py:L29)
- **network**: self._ironic_connection = utils.get_sdk_adapter( (src/nova/virt/ironic/driver.py:L204)
- **file-io**: with tempfile.NamedTemporaryFile() as uncompressed: (src/nova/virt/ironic/driver.py:L1134)
- **file-io**: with tempfile.NamedTemporaryFile() as compressed: (src/nova/virt/ironic/driver.py:L1138)
- **file-io**: shutil.copyfileobj(uncompressed, gzipped) (src/nova/virt/ironic/driver.py:L1142)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/ironic/driver.py:L60)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/ironic/driver.py:L61)
- **global-mutation**: IRONIC_API_VERSION = (1, 46) (src/nova/virt/ironic/driver.py:L64)

## Security Surface

- **sink** (`db-write`): :param refresh: Boolean value; If True run update first. Ignored by (src/nova/virt/ironic/driver.py:L853)
- **sink** (`db-write`): """Update a ProviderTree object with current resource provider and (src/nova/virt/ironic/driver.py:L878)
- **sink** (`db-write`): link.update({'type': 'bond', 'bond_mode': pg.mode, (src/nova/virt/ironic/driver.py:L1080)
- **sink** (`db-write`): link.update({'ethernet_mac_address': pg.address}) (src/nova/virt/ironic/driver.py:L1087)
- **sink** (`db-write`): link.update({'ethernet_mac_address': p.address, (src/nova/virt/ironic/driver.py:L1108)
- **sink** (`db-write`): """Update power, vm and task states of the specified instance in (src/nova/virt/ironic/driver.py:L1548)
- **sink** (`db-write`): LOG.info('Power update called for instance with ' (src/nova/virt/ironic/driver.py:L1551)
- **sink** (`db-write`): port should not yet be bound; Ironic will make a port-update call to (src/nova/virt/ironic/driver.py:L1824)

