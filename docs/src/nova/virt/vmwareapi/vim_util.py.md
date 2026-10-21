# src/nova/virt/vmwareapi/vim_util.py

## Overview

This file implements the `vim_util` module, defining 1 constant, 11 functions, 2 imports, 1 side effect.

Lines: total 170, code 128, comment 14, blank 28

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/vim_util.py:L25–L25` |
| `object_to_dict` | function | (obj, list_depth=1) | exported | `d` (src/nova/virt/vmwareapi/vim_util.py:L51) | 7/19 | `src/nova/virt/vmwareapi/vim_util.py:L28–L51` |
| `get_object_properties` | function | (vim, collector, mobj, type, properties) | exported | `None` (src/nova/virt/vmwareapi/vim_util.py:L58); `vim.RetrievePropertiesEx(usecoll, specSet=[property_filter_spec], options=options)` (src/nova/virt/vmwareapi/vim_util.py:L74) | 4/21 | `src/nova/virt/vmwareapi/vim_util.py:L54–L75` |
| `get_objects` | function | (vim, type, properties_to_collect=None, all=False) | exported | `vutil.get_objects(vim, type, CONF.vmware.maximum_objects, properties_to_collect, all)` (src/nova/virt/vmwareapi/vim_util.py:L80) | 1/3 | `src/nova/virt/vmwareapi/vim_util.py:L78–L81` |
| `get_inner_objects` | function | (vim, base_obj, path, inner_type, properties_to_collect=None, all=False) | exported | `vim.RetrievePropertiesEx( vim.service_content.propertyCollector, specSet=[property_filter_spec], options=options)` (src/nova/virt/vmwareapi/vim_util.py:L101) | 1/19 | `src/nova/virt/vmwareapi/vim_util.py:L84–L103` |
| `get_prop_spec` | function | (client_factory, spec_type, properties) | exported | `prop_spec` (src/nova/virt/vmwareapi/vim_util.py:L111) | 1/5 | `src/nova/virt/vmwareapi/vim_util.py:L106–L111` |
| `get_obj_spec` | function | (client_factory, obj, select_set=None) | exported | `obj_spec` (src/nova/virt/vmwareapi/vim_util.py:L121) | 2/7 | `src/nova/virt/vmwareapi/vim_util.py:L114–L121` |
| `get_prop_filter_spec` | function | (client_factory, obj_spec, prop_spec) | exported | `prop_filter_spec` (src/nova/virt/vmwareapi/vim_util.py:L129) | 1/5 | `src/nova/virt/vmwareapi/vim_util.py:L124–L129` |
| `get_properties_for_a_collection_of_objects` | function | (vim, type, obj_list, properties) | exported | `[]` (src/nova/virt/vmwareapi/vim_util.py:L139); `vim.RetrievePropertiesEx( vim.service_content.propertyCollector, specSet=[prop_filter_spec], options=options)` (src/nova/virt/vmwareapi/vim_util.py:L148) | 3/16 | `src/nova/virt/vmwareapi/vim_util.py:L132–L150` |
| `get_about_info` | function | (vim) | exported | `vim.service_content.about` (src/nova/virt/vmwareapi/vim_util.py:L155) | 1/2 | `src/nova/virt/vmwareapi/vim_util.py:L153–L155` |
| `get_entity_name` | function | (session, entity) | exported | `session._call_method(vutil, 'get_object_property', entity, 'name')` (src/nova/virt/vmwareapi/vim_util.py:L159) | 1/3 | `src/nova/virt/vmwareapi/vim_util.py:L158–L160` |
| `get_array_items` | function | (array_obj) | exported | `getattr(array_obj, attr_name)` (src/nova/virt/vmwareapi/vim_util.py:L169); `array_obj` (src/nova/virt/vmwareapi/vim_util.py:L170) | 3/7 | `src/nova/virt/vmwareapi/vim_util.py:L163–L170` |

## Dependencies

- `oslo_vmware`: imports `vim_util as vutil` (src/nova/virt/vmwareapi/vim_util.py:L20)
- `import nova.conf` (src/nova/virt/vmwareapi/vim_util.py:L23)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/vmwareapi/vim_util.py:L25)

