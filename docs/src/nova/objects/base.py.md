# src/nova/objects/base.py

## Overview

This file implements the `base` module, defining 7 classs, 3 constants, 3 fields, 12 functions, 13 methods, 1 property, 4 variables, 15 imports, 3 side effects.

Lines: total 443, code 322, comment 48, blank 73

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/objects/base.py:L35–L35` |
| `all_things_equal` | function | (obj_a, obj_b) | exported | `False` (src/nova/objects/base.py:L40); `False` (src/nova/objects/base.py:L46); `False` (src/nova/objects/base.py:L51); `True` (src/nova/objects/base.py:L52) | 6/13 | `src/nova/objects/base.py:L38–L52` |
| `get_attrname` | function | (name) | exported | `'_obj_' + name` (src/nova/objects/base.py:L59) | 1/2 | `src/nova/objects/base.py:L55–L59` |
| `raise_on_too_new_values` | function | (version, primitive, field, new_values) | exported | not declared | 2/7 | `src/nova/objects/base.py:L62–L68` |
| `NovaObjectRegistry` | class | — | exported | not declared | — | `src/nova/objects/base.py:L71–L104` |
| `NovaObjectRegistry.notification_classes` | field | — | public | not declared | — | `src/nova/objects/base.py:L72–L72` |
| `NovaObjectRegistry.registration_hook` | method | (self, cls, index) | public | not declared | 3/9 | `src/nova/objects/base.py:L74–L85` |
| `NovaObjectRegistry.register_notification` | method | (cls, notification_cls) | public | `notification_cls` (src/nova/objects/base.py:L95) | 1/4 | `src/nova/objects/base.py:L88–L95` |
| `NovaObjectRegistry.register_notification_objects` | method | (cls) | public | not declared | 2/3 | `src/nova/objects/base.py:L98–L104` |
| `remotable` | variable | — | exported | not declared | — | `src/nova/objects/base.py:L107–L107` |
| `obj_make_list` | variable | — | exported | not declared | — | `src/nova/objects/base.py:L108–L108` |
| `NovaObjectDictCompat` | variable | — | exported | not declared | — | `src/nova/objects/base.py:L109–L109` |
| `NovaTimestampObject` | variable | — | exported | not declared | — | `src/nova/objects/base.py:L110–L110` |
| `object_id` | function | (obj) | exported | `'%s<%s>' % (obj.obj_name(), ident)` (src/nova/objects/base.py:L121) | 3/8 | `src/nova/objects/base.py:L113–L121` |
| `lazy_load_counter` | function | (fn) | exported | `wrapper` (src/nova/objects/base.py:L138) | 1/4 | `src/nova/objects/base.py:L124–L138` |
| `lazy_load_counter.wrapper` | function | (self, attrname) | public | `fn(self, attrname)` (src/nova/objects/base.py:L129) | — | `src/nova/objects/base.py:L127–L136` |
| `NovaObject` | class | — | exported | not declared | — | `src/nova/objects/base.py:L141–L178` |
| `NovaObject.OBJ_SERIAL_NAMESPACE` | constant | — | public | not declared | — | `src/nova/objects/base.py:L151–L151` |
| `NovaObject.OBJ_PROJECT_NAMESPACE` | constant | — | public | not declared | — | `src/nova/objects/base.py:L152–L152` |
| `NovaObject._lazy_loads` | field | — | private | not declared | — | `src/nova/objects/base.py:L158–L158` |
| `NovaObject.should_migrate_data` | method | — | public | not declared | 1/2 | `src/nova/objects/base.py:L162–L168` |
| `NovaObject.obj_alternate_context` | method | (self, context) | public | not declared | 2/7 | `src/nova/objects/base.py:L172–L178` |
| `NovaPersistentObject` | class | — | exported | not declared | — | `src/nova/objects/base.py:L181–L191` |
| `NovaPersistentObject.fields` | field | — | public | not declared | — | `src/nova/objects/base.py:L186–L191` |
| `EphemeralObject` | class | — | exported | not declared | — | `src/nova/objects/base.py:L197–L220` |
| `EphemeralObject.__init__` | method | (self, *args, **kwargs) | public | not declared | 1/3 | `src/nova/objects/base.py:L217–L220` |
| `NovaEphemeralObject` | class | — | exported | not declared | — | `src/nova/objects/base.py:L223–L234` |
| `ObjectListBase` | class | — | exported | not declared | — | `src/nova/objects/base.py:L237–L251` |
| `ObjectListBase._obj_primitive_key` | method | (cls, field) | private | `'nova_object.%s' % field` (src/nova/objects/base.py:L242) | 1/2 | `src/nova/objects/base.py:L241–L242` |
| `ObjectListBase._obj_primitive_field` | method | (cls, primitive, field, default=obj_fields.UnspecifiedDefault) | private | `primitive[key]` (src/nova/objects/base.py:L249); `primitive.get(key, default)` (src/nova/objects/base.py:L251) | 2/7 | `src/nova/objects/base.py:L245–L251` |
| `NovaObjectSerializer` | class | — | exported | not declared | — | `src/nova/objects/base.py:L254–L327` |
| `NovaObjectSerializer.conductor` | method | (self) | public | `self._conductor` (src/nova/objects/base.py:L268) | 2/5 | `src/nova/objects/base.py:L264–L268` |
| `NovaObjectSerializer._process_object` | method | (self, context, objprim) | private | `self._process_object(context, objprim)` (src/nova/objects/base.py:L280); `objinst` (src/nova/objects/base.py:L288) | 4/17 | `src/nova/objects/base.py:L270–L288` |
| `NovaObjectSerializer._process_iterable` | method | (self, context, action_fn, values) | private | `iterable(**{k: action_fn(context, v) for k, v in values.items()})` (src/nova/objects/base.py:L300); `iterable([action_fn(context, value) for value in values])` (src/nova/objects/base.py:L310) | 5/9 | `src/nova/objects/base.py:L290–L310` |
| `NovaObjectSerializer.serialize_entity` | method | (self, context, entity) | public | `entity` (src/nova/objects/base.py:L319) | 4/8 | `src/nova/objects/base.py:L312–L319` |
| `NovaObjectSerializer.deserialize_entity` | method | (self, context, entity) | public | `entity` (src/nova/objects/base.py:L327) | 4/7 | `src/nova/objects/base.py:L321–L327` |
| `obj_to_primitive` | function | (obj) | exported | `[obj_to_primitive(x) for x in obj]` (src/nova/objects/base.py:L337); `result` (src/nova/objects/base.py:L343); `str(obj)` (src/nova/objects/base.py:L345); `str(obj)` (src/nova/objects/base.py:L347); `obj` (src/nova/objects/base.py:L349) | 9/15 | `src/nova/objects/base.py:L330–L349` |
| `obj_make_dict_of_lists` | function | (context, list_cls, obj_list, item_key) | exported | `obj_lists` (src/nova/objects/base.py:L371) | 4/12 | `src/nova/objects/base.py:L352–L371` |
| `serialize_args` | function | (fn) | exported | `(functools.wraps(fn)(wrapper) if hasattr(fn, '__call__') else classmethod(wrapper))` (src/nova/objects/base.py:L407) | 2/6 | `src/nova/objects/base.py:L374–L408` |
| `serialize_args.wrapper` | function | (obj, *args, **kwargs) | public | `fn(obj, *args, **kwargs)` (src/nova/objects/base.py:L400); `fn.__get__(None, obj)(*args, **kwargs)` (src/nova/objects/base.py:L402) | — | `src/nova/objects/base.py:L376–L402` |
| `obj_equal_prims` | function | (obj_1, obj_2, ignore=None) | exported | `prim_1 == prim_2` (src/nova/objects/base.py:L443) | 2/9 | `src/nova/objects/base.py:L411–L443` |
| `obj_equal_prims._strip` | function | (prim, keys) | private | `prim` (src/nova/objects/base.py:L435) | — | `src/nova/objects/base.py:L426–L435` |
| `NovaObjectSerializer.conductor` | property | — | public | not declared | — | `src/nova/objects/base.py:L263–L268` |

## Dependencies

- `import contextlib` (src/nova/objects/base.py:L17)
- `import datetime` (src/nova/objects/base.py:L18)
- `import functools` (src/nova/objects/base.py:L19)
- `import traceback` (src/nova/objects/base.py:L20)
- `import netaddr` (src/nova/objects/base.py:L22)
- `oslo_log`: imports `log as logging` (src/nova/objects/base.py:L23)
- `import oslo_messaging as messaging` (src/nova/objects/base.py:L24)
- `oslo_utils`: imports `versionutils` (src/nova/objects/base.py:L25)
- `oslo_versionedobjects`: imports `base as ovoo_base` (src/nova/objects/base.py:L26)
- `oslo_versionedobjects`: imports `exception as ovoo_exc` (src/nova/objects/base.py:L27)
- `nova`: imports `exception` (src/nova/objects/base.py:L29)
- `nova`: imports `objects` (src/nova/objects/base.py:L30)
- `nova.objects`: imports `fields as obj_fields` (src/nova/objects/base.py:L31)
- `nova`: imports `utils` (src/nova/objects/base.py:L32)
- `nova`: imports `conductor` (src/nova/objects/base.py:L266)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/objects/base.py:L35)
- **global-mutation**: OBJ_SERIAL_NAMESPACE = 'nova_object' (src/nova/objects/base.py:L151)
- **global-mutation**: OBJ_PROJECT_NAMESPACE = 'nova' (src/nova/objects/base.py:L152)

