# src/nova/virt/libvirt/designer.py

## Overview

This file implements the `designer` module, defining 13 functions, 1 import.

Lines: total 207, code 153, comment 13, blank 41

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `set_vif_guest_frontend_config` | function | (conf, mac, model, driver, queues, rx_queue_size, packed) | exported | not declared | 6/13 | `src/nova/virt/libvirt/designer.py:L26–L43` |
| `set_vif_host_backend_ethernet_config` | function | (conf, tapname) | exported | not declared | 1/4 | `src/nova/virt/libvirt/designer.py:L46–L57` |
| `set_vif_host_backend_802qbg_config` | function | (conf, devname, managerid, typeid, typeidversion, instanceid, tapname=None) | exported | not declared | 2/13 | `src/nova/virt/libvirt/designer.py:L60–L76` |
| `set_vif_host_backend_802qbh_config` | function | (conf, net_type, devname, profileid, tapname=None) | exported | not declared | 3/14 | `src/nova/virt/libvirt/designer.py:L79–L96` |
| `set_vif_host_backend_hw_veb` | function | (conf, net_type, devname, vlan, tapname=None) | exported | not declared | 3/13 | `src/nova/virt/libvirt/designer.py:L99–L116` |
| `set_vif_host_backend_hostdev_pci_config` | function | (conf, pci_slot) | exported | not declared | 1/3 | `src/nova/virt/libvirt/designer.py:L119–L123` |
| `set_vif_host_backend_direct_config` | function | (conf, devname, mode="passthrough") | exported | not declared | 1/5 | `src/nova/virt/libvirt/designer.py:L126–L134` |
| `set_vif_host_backend_vhostuser_config` | function | (conf, mode, path, rx_queue_size, tx_queue_size, tapname=None) | exported | not declared | 4/12 | `src/nova/virt/libvirt/designer.py:L137–L153` |
| `set_vif_host_backend_vdpa_config` | function | (conf, dev_path, rx_queue_size=None, tx_queue_size=None) | exported | not declared | 3/9 | `src/nova/virt/libvirt/designer.py:L156–L169` |
| `set_vif_mtu_config` | function | (conf, mtu) | exported | not declared | 1/2 | `src/nova/virt/libvirt/designer.py:L172–L176` |
| `set_vif_bandwidth_config` | function | (conf, flavor) | exported | not declared | 5/9 | `src/nova/virt/libvirt/designer.py:L179–L192` |
| `set_numa_memnode` | function | (conf, guest_node_id, host_cell_id) | exported | not declared | 1/4 | `src/nova/virt/libvirt/designer.py:L195–L200` |
| `set_vcpu_realtime_scheduler` | function | (conf, vcpus_rt, priority) | exported | not declared | 1/4 | `src/nova/virt/libvirt/designer.py:L203–L207` |

## Dependencies

- `nova.pci`: imports `utils as pci_utils` (src/nova/virt/libvirt/designer.py:L23)

