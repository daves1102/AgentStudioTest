# src/nova/objects/virtual_interface.py

## Overview

This file implements the `virtual_interface` module, defining 2 classs, 5 constants, 2 fields, 4 functions, 13 methods, 1 variable, 10 imports, 8 side effects.

Lines: total 338, code 232, comment 62, blank 44

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/objects/virtual_interface.py:L27–L27` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/virtual_interface.py:L29–L33` |
| `VIF_OPTIONAL_FIELDS` | constant | — | exported | not declared | — | `src/nova/objects/virtual_interface.py:L35–L35` |
| `FAKE_UUID` | constant | — | exported | not declared | — | `src/nova/objects/virtual_interface.py:L36–L36` |
| `VirtualInterface` | class | — | exported | not declared | — | `src/nova/objects/virtual_interface.py:L40–L134` |
| `VirtualInterface.VERSION` | constant | — | public | not declared | — | `src/nova/objects/virtual_interface.py:L45–L45` |
| `VirtualInterface.fields` | field | — | public | not declared | — | `src/nova/objects/virtual_interface.py:L47–L55` |
| `VirtualInterface.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 3/4 | `src/nova/objects/virtual_interface.py:L57–L60` |
| `VirtualInterface._from_db_object` | method | (context, vif, db_vif) | private | `vif` (src/nova/objects/virtual_interface.py:L76) | 6/11 | `src/nova/objects/virtual_interface.py:L63–L76` |
| `VirtualInterface.get_by_id` | method | (cls, context, vif_id) | public | `cls._from_db_object(context, cls(), db_vif)` (src/nova/objects/virtual_interface.py:L83) | 2/4 | `src/nova/objects/virtual_interface.py:L80–L83` |
| `VirtualInterface.get_by_uuid` | method | (cls, context, vif_uuid) | public | `cls._from_db_object(context, cls(), db_vif)` (src/nova/objects/virtual_interface.py:L90) | 2/4 | `src/nova/objects/virtual_interface.py:L87–L90` |
| `VirtualInterface.get_by_address` | method | (cls, context, address) | public | `cls._from_db_object(context, cls(), db_vif)` (src/nova/objects/virtual_interface.py:L97) | 2/4 | `src/nova/objects/virtual_interface.py:L94–L97` |
| `VirtualInterface.get_by_instance_and_network` | method | (cls, context, instance_uuid, network_id) | public | `cls._from_db_object(context, cls(), db_vif)` (src/nova/objects/virtual_interface.py:L105) | 2/5 | `src/nova/objects/virtual_interface.py:L101–L105` |
| `VirtualInterface.create` | method | (self) | public | not declared | 2/7 | `src/nova/objects/virtual_interface.py:L108–L114` |
| `VirtualInterface.save` | method | (self) | public | `self._from_db_object(self._context, self, db_vif)` (src/nova/objects/virtual_interface.py:L124) | 2/8 | `src/nova/objects/virtual_interface.py:L117–L124` |
| `VirtualInterface.delete_by_instance_uuid` | method | (cls, context, instance_uuid) | public | not declared | 1/3 | `src/nova/objects/virtual_interface.py:L128–L130` |
| `VirtualInterface.destroy` | method | (self) | public | not declared | 1/2 | `src/nova/objects/virtual_interface.py:L133–L134` |
| `VirtualInterfaceList` | class | — | exported | not declared | — | `src/nova/objects/virtual_interface.py:L138–L163` |
| `VirtualInterfaceList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/virtual_interface.py:L140–L140` |
| `VirtualInterfaceList.fields` | field | — | public | not declared | — | `src/nova/objects/virtual_interface.py:L141–L143` |
| `VirtualInterfaceList.get_all` | method | (cls, context) | public | `base.obj_make_list(context, cls(context), db_vifs)` (src/nova/objects/virtual_interface.py:L149) | 1/3 | `src/nova/objects/virtual_interface.py:L147–L149` |
| `VirtualInterfaceList._db_virtual_interface_get_by_instance` | method | (context, instance_uuid, use_slave=False) | private | `main_db_api.virtual_interface_get_by_instance( context, instance_uuid)` (src/nova/objects/virtual_interface.py:L155) | 1/4 | `src/nova/objects/virtual_interface.py:L153–L156` |
| `VirtualInterfaceList.get_by_instance_uuid` | method | (cls, context, instance_uuid, use_slave=False) | public | `base.obj_make_list(context, cls(context), db_vifs)` (src/nova/objects/virtual_interface.py:L163) | 1/4 | `src/nova/objects/virtual_interface.py:L160–L163` |
| `fill_virtual_interface_list` | function | (context, max_count) | exported | `count_all, count_hit` (src/nova/objects/virtual_interface.py:L294) | 13/73 | `src/nova/objects/virtual_interface.py:L167–L294` |
| `fill_virtual_interface_list._regenerate_vif_list_base_on_cache` | function | (context, instance, old_vif_list, nw_info) | private | not declared | — | `src/nova/objects/virtual_interface.py:L172–L189` |
| `_set_or_delete_marker_for_migrate_instances` | function | (context, marker=None) | unexported | not declared | 3/19 | `src/nova/objects/virtual_interface.py:L305–L330` |
| `_get_marker_for_migrate_instances` | function | (context) | unexported | `marker` (src/nova/objects/virtual_interface.py:L338) | 2/5 | `src/nova/objects/virtual_interface.py:L334–L338` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/objects/virtual_interface.py:L15)
- `oslo_utils`: imports `versionutils` (src/nova/objects/virtual_interface.py:L16)
- `nova`: imports `context as nova_context` (src/nova/objects/virtual_interface.py:L18)
- `nova.db.api`: imports `api as api_db_api` (src/nova/objects/virtual_interface.py:L19)
- `nova.db.main`: imports `api as main_db_api` (src/nova/objects/virtual_interface.py:L20)
- `nova.db.main`: imports `models as main_db_models` (src/nova/objects/virtual_interface.py:L21)
- `nova`: imports `exception` (src/nova/objects/virtual_interface.py:L22)
- `nova`: imports `objects` (src/nova/objects/virtual_interface.py:L23)
- `nova.objects`: imports `base` (src/nova/objects/virtual_interface.py:L24)
- `nova.objects`: imports `fields` (src/nova/objects/virtual_interface.py:L25)

## Side Effects

- **network**: context.session.query(main_db_models.VirtualInterface).filter_by( (src/nova/objects/virtual_interface.py:L306)
- **network**: instance = context.session.query(main_db_models.Instance).filter_by( (src/nova/objects/virtual_interface.py:L311)
- **network**: vif = (context.session.query(main_db_models.VirtualInterface).filter_by( (src/nova/objects/virtual_interface.py:L335)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/objects/virtual_interface.py:L27)
- **global-mutation**: VIF_OPTIONAL_FIELDS = ['network_id'] (src/nova/objects/virtual_interface.py:L35)
- **global-mutation**: FAKE_UUID = '00000000-0000-0000-0000-000000000000' (src/nova/objects/virtual_interface.py:L36)
- **global-mutation**: VERSION = '1.3' (src/nova/objects/virtual_interface.py:L45)
- **global-mutation**: VERSION = '1.0' (src/nova/objects/virtual_interface.py:L140)

