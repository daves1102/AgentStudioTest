# src/nova/pci/manager.py

## Overview

This file implements the `manager` module, defining 1 class, 2 constants, 19 methods, 1 property, 1 staticmethod, 2 variables, 12 imports, 2 side effects, 4 security surface entries.

Lines: total 505, code 344, comment 99, blank 62

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/pci/manager.py:L32–L32` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/pci/manager.py:L33–L33` |
| `MappingType` | variable | — | exported | not declared | — | `src/nova/pci/manager.py:L35–L35` |
| `PCIInvType` | variable | — | exported | not declared | — | `src/nova/pci/manager.py:L36–L36` |
| `PciDevTracker` | class | — | exported | not declared | — | `src/nova/pci/manager.py:L39–L505` |
| `PciDevTracker.__init__` | method | (self, context, compute_node) | public | not declared | 2/19 | `src/nova/pci/manager.py:L60–L86` |
| `PciDevTracker._initial_instance_usage` | method | (self) | private | not declared | 5/11 | `src/nova/pci/manager.py:L88–L99` |
| `PciDevTracker.save` | method | (self, context) | public | not declared | 4/8 | `src/nova/pci/manager.py:L101–L108` |
| `PciDevTracker.pci_stats` | method | (self) | public | `self.stats` (src/nova/pci/manager.py:L112) | 1/2 | `src/nova/pci/manager.py:L111–L112` |
| `PciDevTracker.update_devices_from_hypervisor_resources` | method | (self, devices_json) | public | not declared | 6/18 | `src/nova/pci/manager.py:L114–L177` |
| `PciDevTracker._build_device_tree` | method | (all_devs) | private | not declared | 6/16 | `src/nova/pci/manager.py:L180–L215` |
| `PciDevTracker._set_hvdevs` | method | (self, devices) | private | not declared | 13/48 | `src/nova/pci/manager.py:L217–L308` |
| `PciDevTracker._claim_instance` | method | (self, context, pci_requests, instance_numa_topology) | private | `[]` (src/nova/pci/manager.py:L323); `devs` (src/nova/pci/manager.py:L333) | 7/22 | `src/nova/pci/manager.py:L310–L333` |
| `PciDevTracker.claim_instance` | method | (self, context, pci_requests, instance_numa_topology) | public | `devs` (src/nova/pci/manager.py:L350) | 4/14 | `src/nova/pci/manager.py:L335–L350` |
| `PciDevTracker._allocate_instance` | method | (self, instance, devs) | private | not declared | 2/5 | `src/nova/pci/manager.py:L352–L356` |
| `PciDevTracker.allocate_instance` | method | (self, instance) | public | not declared | 2/5 | `src/nova/pci/manager.py:L358–L362` |
| `PciDevTracker.free_device` | method | (self, dev, instance) | public | not declared | 4/11 | `src/nova/pci/manager.py:L364–L382` |
| `PciDevTracker._remove_device_from_pci_mapping` | method | (self, instance_uuid, pci_device, pci_mapping) | private | not declared | 3/11 | `src/nova/pci/manager.py:L384–L398` |
| `PciDevTracker._free_device` | method | (self, dev, instance=None) | private | not declared | 5/17 | `src/nova/pci/manager.py:L400–L417` |
| `PciDevTracker.free_instance_allocations` | method | (self, context, instance) | public | `` (src/nova/pci/manager.py:L428) | 5/9 | `src/nova/pci/manager.py:L419–L433` |
| `PciDevTracker.free_instance_claims` | method | (self, context, instance) | public | `` (src/nova/pci/manager.py:L444) | 5/9 | `src/nova/pci/manager.py:L435–L449` |
| `PciDevTracker.free_instance` | method | (self, context, instance) | public | not declared | 1/5 | `src/nova/pci/manager.py:L451–L465` |
| `PciDevTracker.update_pci_for_instance` | method | (self, context, instance, sign) | public | `` (src/nova/pci/manager.py:L475) | 4/12 | `src/nova/pci/manager.py:L467–L480` |
| `PciDevTracker.clean_usage` | method | (self, instances, migrations) | public | not declared | 9/17 | `src/nova/pci/manager.py:L482–L505` |
| `PciDevTracker.pci_stats` | property | — | public | not declared | — | `src/nova/pci/manager.py:L110–L112` |
| `PciDevTracker._build_device_tree` | staticmethod | — | private | not declared | — | `src/nova/pci/manager.py:L179–L215` |

## Dependencies

- `import collections` (src/nova/pci/manager.py:L17)
- `import copy` (src/nova/pci/manager.py:L18)
- `import typing as ty` (src/nova/pci/manager.py:L19)
- `oslo_config`: imports `cfg` (src/nova/pci/manager.py:L21)
- `oslo_log`: imports `log as logging` (src/nova/pci/manager.py:L22)
- `oslo_serialization`: imports `jsonutils` (src/nova/pci/manager.py:L23)
- `nova`: imports `context as ctx` (src/nova/pci/manager.py:L25)
- `nova`: imports `exception` (src/nova/pci/manager.py:L26)
- `nova`: imports `objects` (src/nova/pci/manager.py:L27)
- `nova.objects`: imports `fields` (src/nova/pci/manager.py:L28)
- `nova.pci`: imports `stats` (src/nova/pci/manager.py:L29)
- `nova.pci`: imports `whitelist` (src/nova/pci/manager.py:L30)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/pci/manager.py:L32)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/pci/manager.py:L33)

## Security Surface

- **sink** (`db-write`): devices to/from instances, and to update the available pci passthrough (src/nova/pci/manager.py:L46)
- **sink** (`db-write`): It is unsafe to fetch PciDevice objects elsewhere in the code for update (src/nova/pci/manager.py:L55)
- **sink** (`db-write`): update the tracker and sync the DB information. (src/nova/pci/manager.py:L121)
- **sink** (`db-write`): """Update PCI usage information if devices are de/allocated.""" (src/nova/pci/manager.py:L473)

