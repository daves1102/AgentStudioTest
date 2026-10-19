# src/nova/objects/pci_device.py

## Overview

This file implements the `pci_device` module, defining 2 classs, 3 constants, 2 fields, 2 functions, 29 methods, 4 propertys, 1 variable, 12 imports, 5 side effects.

Lines: total 655, code 466, comment 108, blank 81

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/objects/pci_device.py:L31–L31` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/pci_device.py:L33–L37` |
| `compare_pci_device_attributes` | function | (obj_a, obj_b) | exported | `False` (src/nova/objects/pci_device.py:L42); `False` (src/nova/objects/pci_device.py:L50); `False` (src/nova/objects/pci_device.py:L53); `True` (src/nova/objects/pci_device.py:L54) | 7/15 | `src/nova/objects/pci_device.py:L40–L54` |
| `PciDevice` | class | — | exported | not declared | — | `src/nova/objects/pci_device.py:L58–L612` |
| `PciDevice.VERSION` | constant | — | public | not declared | — | `src/nova/objects/pci_device.py:L106–L106` |
| `PciDevice.fields` | field | — | public | not declared | — | `src/nova/objects/pci_device.py:L108–L126` |
| `PciDevice.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 12/20 | `src/nova/objects/pci_device.py:L128–L147` |
| `PciDevice.__repr__` | method | (self) | public | `( f'PciDevice(address={self.address}, ' f'compute_node_id={self.compute_node_id})' )` (src/nova/objects/pci_device.py:L150) | 1/5 | `src/nova/objects/pci_device.py:L149–L153` |
| `PciDevice.update_device` | method | (self, dev_dict) | public | not declared | 8/19 | `src/nova/objects/pci_device.py:L155–L203` |
| `PciDevice.__init__` | method | (self, *args, **kwargs) | public | not declared | 1/4 | `src/nova/objects/pci_device.py:L205–L212` |
| `PciDevice.obj_load_attr` | method | (self, attr) | public | not declared | 2/5 | `src/nova/objects/pci_device.py:L215–L223` |
| `PciDevice.__eq__` | method | (self, other) | public | `compare_pci_device_attributes(self, other)` (src/nova/objects/pci_device.py:L226) | 1/2 | `src/nova/objects/pci_device.py:L225–L226` |
| `PciDevice.__ne__` | method | (self, other) | public | `not (self == other)` (src/nova/objects/pci_device.py:L229) | 1/2 | `src/nova/objects/pci_device.py:L228–L229` |
| `PciDevice.populate_dev_uuids` | method | (cls, context, max_count) | public | `done, done` (src/nova/objects/pci_device.py:L245) | 2/9 | `src/nova/objects/pci_device.py:L232–L245` |
| `PciDevice.populate_dev_uuids.get_devs_no_uuid` | function | (context) | public | `context.session.query(db_models.PciDevice).\ filter_by(uuid=None).limit(max_count).all()` (src/nova/objects/pci_device.py:L235) | — | `src/nova/objects/pci_device.py:L234–L236` |
| `PciDevice._from_db_object` | method | (cls, context, pci_device, db_dev) | private | `pci_device` (src/nova/objects/pci_device.py:L265) | 5/13 | `src/nova/objects/pci_device.py:L248–L265` |
| `PciDevice._create_uuid` | method | (context, dev_id) | private | `uuid` (src/nova/objects/pci_device.py:L302) | 2/14 | `src/nova/objects/pci_device.py:L269–L302` |
| `PciDevice.get_by_dev_addr` | method | (cls, context, compute_node_id, dev_addr) | public | `cls._from_db_object(context, cls(), db_dev)` (src/nova/objects/pci_device.py:L309) | 1/4 | `src/nova/objects/pci_device.py:L306–L309` |
| `PciDevice.get_by_dev_id` | method | (cls, context, id) | public | `cls._from_db_object(context, cls(), db_dev)` (src/nova/objects/pci_device.py:L315) | 1/3 | `src/nova/objects/pci_device.py:L313–L315` |
| `PciDevice.create` | method | (cls, context, dev_dict) | public | `pci_device` (src/nova/objects/pci_device.py:L333) | 1/8 | `src/nova/objects/pci_device.py:L318–L333` |
| `PciDevice.save` | method | (self) | public | not declared | 6/16 | `src/nova/objects/pci_device.py:L336–L356` |
| `PciDevice._bulk_update_status` | method | (dev_list, status) | private | not declared | 2/3 | `src/nova/objects/pci_device.py:L359–L361` |
| `PciDevice.claim` | method | (self, instance_uuid) | public | not declared | 13/60 | `src/nova/objects/pci_device.py:L363–L442` |
| `PciDevice.allocate` | method | (self, instance) | public | not declared | 12/53 | `src/nova/objects/pci_device.py:L444–L502` |
| `PciDevice.remove` | method | (self) | public | not declared | 4/21 | `src/nova/objects/pci_device.py:L504–L531` |
| `PciDevice.free` | method | (self, instance=None) | public | `free_devs` (src/nova/objects/pci_device.py:L583) | 15/47 | `src/nova/objects/pci_device.py:L533–L583` |
| `PciDevice.is_available` | method | (self) | public | `self.status == fields.PciDeviceStatus.AVAILABLE` (src/nova/objects/pci_device.py:L586) | 1/2 | `src/nova/objects/pci_device.py:L585–L586` |
| `PciDevice.card_serial_number` | method | (self) | public | `caps.get('vpd', {}).get('card_serial_number')` (src/nova/objects/pci_device.py:L592) | 1/4 | `src/nova/objects/pci_device.py:L589–L592` |
| `PciDevice.sriov_cap` | method | (self) | public | `caps.get('sriov', {})` (src/nova/objects/pci_device.py:L598) | 1/4 | `src/nova/objects/pci_device.py:L595–L598` |
| `PciDevice.mac_address` | method | (self) | public | `self.extra_info.get('mac_address')` (src/nova/objects/pci_device.py:L605) | 1/2 | `src/nova/objects/pci_device.py:L601–L605` |
| `PciDevice.network_caps` | method | (self) | public | `caps.get('network', [])` (src/nova/objects/pci_device.py:L612) | 1/4 | `src/nova/objects/pci_device.py:L608–L612` |
| `PciDeviceList` | class | — | exported | not declared | — | `src/nova/objects/pci_device.py:L616–L655` |
| `PciDeviceList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/pci_device.py:L622–L622` |
| `PciDeviceList.fields` | field | — | public | not declared | — | `src/nova/objects/pci_device.py:L624–L626` |
| `PciDeviceList.__init__` | method | (self, *args, **kwargs) | public | not declared | 2/5 | `src/nova/objects/pci_device.py:L628–L632` |
| `PciDeviceList.get_by_compute_node` | method | (cls, context, node_id) | public | `base.obj_make_list(context, cls(context), db_dev_list)` (src/nova/objects/pci_device.py:L638) | 1/3 | `src/nova/objects/pci_device.py:L636–L638` |
| `PciDeviceList.get_by_instance_uuid` | method | (cls, context, uuid) | public | `base.obj_make_list(context, cls(context), db_dev_list)` (src/nova/objects/pci_device.py:L644) | 1/3 | `src/nova/objects/pci_device.py:L642–L644` |
| `PciDeviceList.get_by_parent_address` | method | (cls, context, node_id, parent_addr) | public | `base.obj_make_list(context, cls(context), db_dev_list)` (src/nova/objects/pci_device.py:L652) | 1/5 | `src/nova/objects/pci_device.py:L648–L652` |
| `PciDeviceList.__repr__` | method | (self) | public | `f"PciDeviceList(objects={[repr(obj) for obj in self.objects]})"` (src/nova/objects/pci_device.py:L655) | 2/2 | `src/nova/objects/pci_device.py:L654–L655` |
| `PciDevice.card_serial_number` | property | — | public | not declared | — | `src/nova/objects/pci_device.py:L588–L592` |
| `PciDevice.sriov_cap` | property | — | public | not declared | — | `src/nova/objects/pci_device.py:L594–L598` |
| `PciDevice.mac_address` | property | — | public | not declared | — | `src/nova/objects/pci_device.py:L600–L605` |
| `PciDevice.network_caps` | property | — | public | not declared | — | `src/nova/objects/pci_device.py:L607–L612` |

## Dependencies

- `import copy` (src/nova/objects/pci_device.py:L16)
- `oslo_db`: imports `api as oslo_db_api` (src/nova/objects/pci_device.py:L18)
- `oslo_db.sqlalchemy`: imports `update_match` (src/nova/objects/pci_device.py:L19)
- `oslo_log`: imports `log as logging` (src/nova/objects/pci_device.py:L20)
- `oslo_serialization`: imports `jsonutils` (src/nova/objects/pci_device.py:L21)
- `oslo_utils`: imports `uuidutils` (src/nova/objects/pci_device.py:L22)
- `oslo_utils`: imports `versionutils` (src/nova/objects/pci_device.py:L23)
- `nova.db.main`: imports `api as db` (src/nova/objects/pci_device.py:L25)
- `nova.db.main`: imports `models as db_models` (src/nova/objects/pci_device.py:L26)
- `nova`: imports `exception` (src/nova/objects/pci_device.py:L27)
- `nova.objects`: imports `base` (src/nova/objects/pci_device.py:L28)
- `nova.objects`: imports `fields` (src/nova/objects/pci_device.py:L29)

## Side Effects

- **network**: return context.session.query(db_models.PciDevice).\ (src/nova/objects/pci_device.py:L235)
- **network**: query = context.session.query(db_models.PciDevice).\ (src/nova/objects/pci_device.py:L291)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/objects/pci_device.py:L31)
- **global-mutation**: VERSION = '1.7' (src/nova/objects/pci_device.py:L106)
- **global-mutation**: VERSION = '1.3' (src/nova/objects/pci_device.py:L622)

