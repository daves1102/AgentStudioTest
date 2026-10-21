# src/nova/virt/block_device.py

## Overview

This file implements the `block_device` module, defining 10 classs, 2 constants, 31 fields, 14 functions, 32 methods, 1 property, 1 staticmethod, 8 variables, 10 imports, 2 side effects, 7 security surface entries.

Lines: total 1068, code 775, comment 138, blank 155

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/block_device.py:L29–L29` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/block_device.py:L31–L31` |
| `_NotTransformable` | class | — | unexported | not declared | — | `src/nova/virt/block_device.py:L34–L35` |
| `_InvalidType` | class | — | unexported | not declared | — | `src/nova/virt/block_device.py:L38–L39` |
| `update_db` | function | (method) | exported | `wrapped` (src/nova/virt/block_device.py:L50) | 1/4 | `src/nova/virt/block_device.py:L42–L50` |
| `update_db.wrapped` | function | (obj, context, *args, **kwargs) | public | `ret_val` (src/nova/virt/block_device.py:L49) | — | `src/nova/virt/block_device.py:L44–L49` |
| `_get_volume_create_az_value` | function | (instance) | unexported | `None` (src/nova/virt/block_device.py:L66); `instance.availability_zone` (src/nova/virt/block_device.py:L78) | 2/4 | `src/nova/virt/block_device.py:L53–L78` |
| `DriverBlockDevice` | class | — | exported | not declared | — | `src/nova/virt/block_device.py:L81–L217` |
| `DriverBlockDevice._fields` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L104–L104` |
| `DriverBlockDevice._readonly_fields` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L105–L105` |
| `DriverBlockDevice._proxy_as_attr_inherited` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L107–L107` |
| `DriverBlockDevice._update_on_save` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L108–L110` |
| `DriverBlockDevice._proxy_as_attr_by_class` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L114–L114` |
| `DriverBlockDevice.__init__` | method | (self, bdm) | public | not declared | 3/6 | `src/nova/virt/block_device.py:L116–L123` |
| `DriverBlockDevice._proxy_as_attr` | method | (self) | private | `self._proxy_as_attr_by_class[self.__class__]` (src/nova/virt/block_device.py:L141) | 4/9 | `src/nova/virt/block_device.py:L126–L141` |
| `DriverBlockDevice.__getattr__` | method | (self, name) | public | `getattr(self._bdm_obj, name)` (src/nova/virt/block_device.py:L145); `self[name]` (src/nova/virt/block_device.py:L147); `super(DriverBlockDevice, self).__getattr__(name)` (src/nova/virt/block_device.py:L149) | 3/7 | `src/nova/virt/block_device.py:L143–L149` |
| `DriverBlockDevice.__setattr__` | method | (self, name, value) | public | not declared | 3/7 | `src/nova/virt/block_device.py:L151–L157` |
| `DriverBlockDevice.__getitem__` | method | (self, name) | public | `getattr(self._bdm_obj, name)` (src/nova/virt/block_device.py:L161); `super(DriverBlockDevice, self).__getitem__(name)` (src/nova/virt/block_device.py:L162) | 2/4 | `src/nova/virt/block_device.py:L159–L162` |
| `DriverBlockDevice.__setitem__` | method | (self, name, value) | public | not declared | 2/4 | `src/nova/virt/block_device.py:L164–L167` |
| `DriverBlockDevice._transform` | method | (self) | private | not declared | 1/2 | `src/nova/virt/block_device.py:L169–L171` |
| `DriverBlockDevice.get` | method | (self, name, default=None) | public | `getattr(self._bdm_obj, name)` (src/nova/virt/block_device.py:L175); `self[name]` (src/nova/virt/block_device.py:L177); `super(DriverBlockDevice, self).get(name, default)` (src/nova/virt/block_device.py:L179) | 3/7 | `src/nova/virt/block_device.py:L173–L179` |
| `DriverBlockDevice.attach` | method | (self, **kwargs) | public | not declared | 1/2 | `src/nova/virt/block_device.py:L181–L187` |
| `DriverBlockDevice.detach` | method | (self, **kwargs) | public | not declared | 1/2 | `src/nova/virt/block_device.py:L189–L197` |
| `DriverBlockDevice.driver_detach` | method | (self, **kwargs) | public | not declared | 1/2 | `src/nova/virt/block_device.py:L199–L205` |
| `DriverBlockDevice.save` | method | (self) | public | not declared | 6/10 | `src/nova/virt/block_device.py:L207–L217` |
| `DriverSwapBlockDevice` | class | — | exported | not declared | — | `src/nova/virt/block_device.py:L220–L253` |
| `DriverSwapBlockDevice._fields` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L221–L229` |
| `DriverSwapBlockDevice._readonly_fields` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L230–L230` |
| `DriverSwapBlockDevice._update_on_save` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L231–L240` |
| `DriverSwapBlockDevice._transform` | method | (self) | private | not declared | 3/12 | `src/nova/virt/block_device.py:L242–L253` |
| `DriverImageBlockDevice` | class | — | exported | not declared | — | `src/nova/virt/block_device.py:L256–L303` |
| `DriverImageBlockDevice._valid_source` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L257–L257` |
| `DriverImageBlockDevice._proxy_as_attr_inherited` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L258–L258` |
| `DriverImageBlockDevice._new_only_fields` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L259–L268` |
| `DriverImageBlockDevice._fields` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L269–L271` |
| `DriverImageBlockDevice._readonly_fields` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L272–L272` |
| `DriverImageBlockDevice._legacy_fields` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L273–L274` |
| `DriverImageBlockDevice._update_on_save` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L275–L285` |
| `DriverImageBlockDevice._transform` | method | (self) | private | not declared | 4/17 | `src/nova/virt/block_device.py:L287–L303` |
| `DriverEphemeralBlockDevice` | class | — | exported | not declared | — | `src/nova/virt/block_device.py:L306–L342` |
| `DriverEphemeralBlockDevice._new_only_fields` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L307–L314` |
| `DriverEphemeralBlockDevice._fields` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L315–L315` |
| `DriverEphemeralBlockDevice._readonly_fields` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L316–L316` |
| `DriverEphemeralBlockDevice._update_on_save` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L317–L327` |
| `DriverEphemeralBlockDevice._transform` | method | (self) | private | not declared | 3/14 | `src/nova/virt/block_device.py:L329–L342` |
| `DriverVolumeBlockDevice` | class | — | exported | not declared | — | `src/nova/virt/block_device.py:L345–L858` |
| `DriverVolumeBlockDevice._new_fields` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L346–L351` |
| `DriverVolumeBlockDevice._fields` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L352–L356` |
| `DriverVolumeBlockDevice._valid_source` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L358–L358` |
| `DriverVolumeBlockDevice._valid_destination` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L359–L359` |
| `DriverVolumeBlockDevice._proxy_as_attr_inherited` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L361–L361` |
| `DriverVolumeBlockDevice._update_on_save` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L362–L366` |
| `DriverVolumeBlockDevice._transform` | method | (self) | private | not declared | 7/16 | `src/nova/virt/block_device.py:L368–L388` |
| `DriverVolumeBlockDevice._preserve_multipath_id` | method | (self, connection_info) | private | not declared | 4/7 | `src/nova/virt/block_device.py:L390–L396` |
| `DriverVolumeBlockDevice.driver_detach` | method | (self, context, instance, volume_api, virt_driver) | public | not declared | 5/33 | `src/nova/virt/block_device.py:L398–L432` |
| `DriverVolumeBlockDevice._get_volume` | method | (context, volume_api, volume_id) | private | `volume_api.get(context, volume_id, microversion=mv)` (src/nova/virt/block_device.py:L441) | 3/7 | `src/nova/virt/block_device.py:L435–L443` |
| `DriverVolumeBlockDevice._create_volume` | method | (self, context, instance, volume_api, size, wait_func=None, **create_kwargs) | private | `vol['id'], attachment_id` (src/nova/virt/block_device.py:L480) | 2/14 | `src/nova/virt/block_device.py:L445–L480` |
| `DriverVolumeBlockDevice._do_detach` | method | (self, context, instance, volume_api, virt_driver, attachment_id=None, destroy_bdm=False) | private | not declared | 13/77 | `src/nova/virt/block_device.py:L482–L594` |
| `DriverVolumeBlockDevice.detach` | method | (self, context, instance, volume_api, virt_driver, attachment_id=None, destroy_bdm=False) | public | not declared | 1/6 | `src/nova/virt/block_device.py:L596–L604` |
| `DriverVolumeBlockDevice._legacy_volume_attach` | method | (self, context, volume, connector, instance, volume_api, virt_driver, do_driver_attach=False) | private | not declared | 10/56 | `src/nova/virt/block_device.py:L606–L675` |
| `DriverVolumeBlockDevice._volume_attach` | method | (self, context, volume, connector, instance, volume_api, virt_driver, attachment_id, do_driver_attach=False) | private | not declared | 11/59 | `src/nova/virt/block_device.py:L677–L768` |
| `DriverVolumeBlockDevice._do_attach` | method | (self, context, instance, volume, volume_api, virt_driver, do_driver_attach) | private | not declared | 2/13 | `src/nova/virt/block_device.py:L770–L787` |
| `DriverVolumeBlockDevice.attach` | method | (self, context, instance, volume_api, virt_driver, do_driver_attach=False, **kwargs) | public | not declared | 1/8 | `src/nova/virt/block_device.py:L790–L800` |
| `DriverVolumeBlockDevice.refresh_connection_info` | method | (self, context, instance, volume_api, virt_driver) | public | `` (src/nova/virt/block_device.py:L807) | 5/20 | `src/nova/virt/block_device.py:L803–L832` |
| `DriverVolumeBlockDevice.save` | method | (self) | public | not declared | 3/9 | `src/nova/virt/block_device.py:L834–L844` |
| `DriverVolumeBlockDevice._call_wait_func` | method | (self, context, wait_func, volume_api, volume_id) | private | not declared | 4/13 | `src/nova/virt/block_device.py:L846–L858` |
| `DriverVolSnapshotBlockDevice` | class | — | exported | not declared | — | `src/nova/virt/block_device.py:L861–L885` |
| `DriverVolSnapshotBlockDevice._valid_source` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L863–L863` |
| `DriverVolSnapshotBlockDevice._proxy_as_attr_inherited` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L864–L864` |
| `DriverVolSnapshotBlockDevice.attach` | method | (self, context, instance, volume_api, virt_driver, wait_func=None) | public | not declared | 4/14 | `src/nova/virt/block_device.py:L866–L885` |
| `DriverVolImageBlockDevice` | class | — | exported | not declared | — | `src/nova/virt/block_device.py:L888–L901` |
| `DriverVolImageBlockDevice._valid_source` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L890–L890` |
| `DriverVolImageBlockDevice._proxy_as_attr_inherited` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L891–L891` |
| `DriverVolImageBlockDevice.attach` | method | (self, context, instance, volume_api, virt_driver, wait_func=None) | public | not declared | 2/8 | `src/nova/virt/block_device.py:L893–L901` |
| `DriverVolBlankBlockDevice` | class | — | exported | not declared | — | `src/nova/virt/block_device.py:L904–L918` |
| `DriverVolBlankBlockDevice._valid_source` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L906–L906` |
| `DriverVolBlankBlockDevice._proxy_as_attr_inherited` | field | — | private | not declared | — | `src/nova/virt/block_device.py:L907–L907` |
| `DriverVolBlankBlockDevice.attach` | method | (self, context, instance, volume_api, virt_driver, wait_func=None) | public | not declared | 2/9 | `src/nova/virt/block_device.py:L909–L918` |
| `_convert_block_devices` | function | (device_type, block_device_mapping) | unexported | `devices` (src/nova/virt/block_device.py:L929) | 3/8 | `src/nova/virt/block_device.py:L921–L929` |
| `convert_swap` | variable | — | exported | not declared | — | `src/nova/virt/block_device.py:L932–L933` |
| `convert_local_images` | variable | — | exported | not declared | — | `src/nova/virt/block_device.py:L935–L936` |
| `convert_ephemerals` | variable | — | exported | not declared | — | `src/nova/virt/block_device.py:L938–L939` |
| `convert_volumes` | variable | — | exported | not declared | — | `src/nova/virt/block_device.py:L941–L942` |
| `convert_snapshots` | variable | — | exported | not declared | — | `src/nova/virt/block_device.py:L944–L945` |
| `convert_images` | variable | — | exported | not declared | — | `src/nova/virt/block_device.py:L947–L948` |
| `convert_blanks` | variable | — | exported | not declared | — | `src/nova/virt/block_device.py:L950–L951` |
| `convert_all_volumes` | function | (*volume_bdms) | exported | `[vol for vol in itertools.chain(source_volume, source_snapshot, source_image, source_blank)]` (src/nova/virt/block_device.py:L960) | 2/8 | `src/nova/virt/block_device.py:L954–L962` |
| `convert_volume` | function | (volume_bdm) | exported | `convert_all_volumes(volume_bdm)[0]` (src/nova/virt/block_device.py:L967) | 2/5 | `src/nova/virt/block_device.py:L965–L969` |
| `attach_block_devices` | function | (block_device_mapping, *attach_args, **attach_kwargs) | exported | `block_device_mapping` (src/nova/virt/block_device.py:L1002) | 2/5 | `src/nova/virt/block_device.py:L972–L1002` |
| `attach_block_devices._log_and_attach` | function | (bdm) | private | not declared | — | `src/nova/virt/block_device.py:L973–L998` |
| `refresh_conn_infos` | function | (block_device_mapping, *refresh_args, **refresh_kwargs) | exported | `block_device_mapping` (src/nova/virt/block_device.py:L1011) | 3/5 | `src/nova/virt/block_device.py:L1005–L1011` |
| `get_swap` | function | (transformed_list) | exported | `None` (src/nova/virt/block_device.py:L1023); `transformed_list.pop()` (src/nova/virt/block_device.py:L1025); `None` (src/nova/virt/block_device.py:L1027) | 5/9 | `src/nova/virt/block_device.py:L1014–L1027` |
| `_IMPLEMENTED_CLASSES` | variable | — | unexported | not declared | — | `src/nova/virt/block_device.py:L1030–L1038` |
| `is_implemented` | function | (bdm) | exported | `True` (src/nova/virt/block_device.py:L1045); `False` (src/nova/virt/block_device.py:L1048) | 3/8 | `src/nova/virt/block_device.py:L1041–L1048` |
| `is_local_image` | function | (bdm) | exported | `bdm.source_type == 'image' and bdm.destination_type == 'local'` (src/nova/virt/block_device.py:L1052) | 2/2 | `src/nova/virt/block_device.py:L1051–L1052` |
| `is_block_device_mapping` | function | (bdm) | exported | `(bdm.source_type in ('image', 'volume', 'snapshot', 'blank') and bdm.destination_type == 'volume' and is_implemented(bdm))` (src/nova/virt/block_device.py:L1056) | 3/4 | `src/nova/virt/block_device.py:L1055–L1058` |
| `get_volume_id` | function | (connection_info) | exported | `volume_id` (src/nova/virt/block_device.py:L1068) | 3/6 | `src/nova/virt/block_device.py:L1061–L1068` |
| `DriverBlockDevice._proxy_as_attr` | property | — | private | not declared | — | `src/nova/virt/block_device.py:L125–L141` |
| `DriverVolumeBlockDevice._get_volume` | staticmethod | — | private | not declared | — | `src/nova/virt/block_device.py:L434–L443` |

## Dependencies

- `import functools` (src/nova/virt/block_device.py:L15)
- `import itertools` (src/nova/virt/block_device.py:L16)
- `os_brick`: imports `encryptors` (src/nova/virt/block_device.py:L18)
- `os_brick.initiator`: imports `utils as brick_utils` (src/nova/virt/block_device.py:L19)
- `oslo_log`: imports `log as logging` (src/nova/virt/block_device.py:L20)
- `oslo_serialization`: imports `jsonutils` (src/nova/virt/block_device.py:L21)
- `oslo_utils`: imports `excutils` (src/nova/virt/block_device.py:L22)
- `nova`: imports `block_device` (src/nova/virt/block_device.py:L25)
- `import nova.conf` (src/nova/virt/block_device.py:L26)
- `nova`: imports `exception` (src/nova/virt/block_device.py:L27)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/block_device.py:L29)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/block_device.py:L31)

## Security Surface

- **sink** (`db-write`): The save() method allows us to update the database using the underlying (src/nova/virt/block_device.py:L94)
- **sink** (`db-write`): dict, before the actual database update is done. (src/nova/virt/block_device.py:L101)
- **sink** (`db-write`): self.update({field: None for field in self._fields}) (src/nova/virt/block_device.py:L122)
- **sink** (`db-write`): self.update({ (src/nova/virt/block_device.py:L245)
- **sink** (`db-write`): self.update({ (src/nova/virt/block_device.py:L291)
- **sink** (`db-write`): self.update({ (src/nova/virt/block_device.py:L332)
- **sink** (`db-write`): self.update( (src/nova/virt/block_device.py:L373)

