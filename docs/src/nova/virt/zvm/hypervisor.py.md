# src/nova/virt/zvm/hypervisor.py

## Overview

This file implements the `hypervisor` module, defining 1 class, 2 constants, 26 methods, 7 imports, 2 side effects.

Lines: total 167, code 106, comment 19, blank 42

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/zvm/hypervisor.py:L26–L26` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/zvm/hypervisor.py:L27–L27` |
| `Hypervisor` | class | — | exported | not declared | — | `src/nova/virt/zvm/hypervisor.py:L30–L167` |
| `Hypervisor.__init__` | method | (self, zcc_url, ca_file=None) | public | not declared | 1/8 | `src/nova/virt/zvm/hypervisor.py:L33–L46` |
| `Hypervisor._get_host_info` | method | (self) | private | `host_stats` (src/nova/virt/zvm/hypervisor.py:L54) | 2/7 | `src/nova/virt/zvm/hypervisor.py:L48–L54` |
| `Hypervisor.get_available_resource` | method | (self) | public | `self._get_host_info()` (src/nova/virt/zvm/hypervisor.py:L57) | 1/2 | `src/nova/virt/zvm/hypervisor.py:L56–L57` |
| `Hypervisor.get_available_nodes` | method | (self, refresh=False) | public | `[self._hypervisor_hostname]` (src/nova/virt/zvm/hypervisor.py:L62) | 1/2 | `src/nova/virt/zvm/hypervisor.py:L59–L62` |
| `Hypervisor.list_names` | method | (self) | public | `self._reqh.call('guest_list')` (src/nova/virt/zvm/hypervisor.py:L66) | 1/2 | `src/nova/virt/zvm/hypervisor.py:L64–L66` |
| `Hypervisor.get_host_uptime` | method | (self) | public | `host_info['ipl_time']` (src/nova/virt/zvm/hypervisor.py:L71) | 1/3 | `src/nova/virt/zvm/hypervisor.py:L68–L71` |
| `Hypervisor.guest_exists` | method | (self, instance) | public | `instance.name.upper() in self.list_names()` (src/nova/virt/zvm/hypervisor.py:L74) | 1/2 | `src/nova/virt/zvm/hypervisor.py:L73–L74` |
| `Hypervisor.guest_get_power_state` | method | (self, name) | public | `power_state` (src/nova/virt/zvm/hypervisor.py:L89) | 3/12 | `src/nova/virt/zvm/hypervisor.py:L76–L89` |
| `Hypervisor.guest_create` | method | (self, name, vcpus, memory_mb, disk_list) | public | not declared | 1/3 | `src/nova/virt/zvm/hypervisor.py:L91–L93` |
| `Hypervisor.guest_deploy` | method | (self, name, image_name, transportfiles) | public | not declared | 1/3 | `src/nova/virt/zvm/hypervisor.py:L95–L97` |
| `Hypervisor.guest_delete` | method | (self, name) | public | not declared | 1/2 | `src/nova/virt/zvm/hypervisor.py:L99–L100` |
| `Hypervisor.guest_start` | method | (self, name) | public | not declared | 1/2 | `src/nova/virt/zvm/hypervisor.py:L102–L103` |
| `Hypervisor.guest_create_network_interface` | method | (self, name, distro, nets) | public | not declared | 1/3 | `src/nova/virt/zvm/hypervisor.py:L105–L107` |
| `Hypervisor.guest_config_minidisks` | method | (self, name, disk_list) | public | not declared | 1/2 | `src/nova/virt/zvm/hypervisor.py:L109–L110` |
| `Hypervisor.guest_capture` | method | (self, name, image_id) | public | not declared | 1/2 | `src/nova/virt/zvm/hypervisor.py:L112–L113` |
| `Hypervisor.guest_softstop` | method | (self, name, timeout=0, retry_interval=0) | public | not declared | 1/3 | `src/nova/virt/zvm/hypervisor.py:L115–L117` |
| `Hypervisor.guest_pause` | method | (self, name) | public | not declared | 1/2 | `src/nova/virt/zvm/hypervisor.py:L119–L120` |
| `Hypervisor.guest_unpause` | method | (self, name) | public | not declared | 1/2 | `src/nova/virt/zvm/hypervisor.py:L122–L123` |
| `Hypervisor.guest_reboot` | method | (self, name) | public | not declared | 1/2 | `src/nova/virt/zvm/hypervisor.py:L125–L126` |
| `Hypervisor.guest_reset` | method | (self, name) | public | not declared | 1/2 | `src/nova/virt/zvm/hypervisor.py:L128–L129` |
| `Hypervisor.guest_get_console_output` | method | (self, name) | public | `self._reqh.call('guest_get_console_output', name)` (src/nova/virt/zvm/hypervisor.py:L136) | 1/2 | `src/nova/virt/zvm/hypervisor.py:L131–L136` |
| `Hypervisor.image_query` | method | (self, imagename) | public | `self._reqh.call('image_query', imagename=imagename)` (src/nova/virt/zvm/hypervisor.py:L144) | 1/2 | `src/nova/virt/zvm/hypervisor.py:L138–L144` |
| `Hypervisor.image_get_root_disk_size` | method | (self, imagename) | public | `self._reqh.call('image_get_root_disk_size', imagename)` (src/nova/virt/zvm/hypervisor.py:L151) | 1/2 | `src/nova/virt/zvm/hypervisor.py:L146–L151` |
| `Hypervisor.image_import` | method | (self, image_href, image_url, image_meta) | public | not declared | 1/3 | `src/nova/virt/zvm/hypervisor.py:L153–L155` |
| `Hypervisor.image_export` | method | (self, image_id, dest_path) | public | `resp` (src/nova/virt/zvm/hypervisor.py:L164) | 1/4 | `src/nova/virt/zvm/hypervisor.py:L157–L164` |
| `Hypervisor.image_delete` | method | (self, image_id) | public | not declared | 1/2 | `src/nova/virt/zvm/hypervisor.py:L166–L167` |

## Dependencies

- `import os` (src/nova/virt/zvm/hypervisor.py:L15)
- `import pwd` (src/nova/virt/zvm/hypervisor.py:L16)
- `oslo_log`: imports `log as logging` (src/nova/virt/zvm/hypervisor.py:L18)
- `nova.compute`: imports `power_state as compute_power_state` (src/nova/virt/zvm/hypervisor.py:L20)
- `nova`: imports `conf` (src/nova/virt/zvm/hypervisor.py:L21)
- `nova`: imports `exception` (src/nova/virt/zvm/hypervisor.py:L22)
- `nova.virt.zvm`: imports `utils as zvmutils` (src/nova/virt/zvm/hypervisor.py:L23)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/zvm/hypervisor.py:L26)
- **global-mutation**: CONF = conf.CONF (src/nova/virt/zvm/hypervisor.py:L27)

