# src/nova/tests/unit/objects/test_objects.py

## Overview

This file implements the `test_objects` module, defining 39 classs, 2 classmethods, 2 constants, 3 fields, 7 functions, 100 methods, 1 property, 1 staticmethod, 1 variable, 23 imports, 15 side effects, 3 security surface entries.

Lines: total 1397, code 1084, comment 106, blank 207

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `MyOwnedObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L42–L44` |
| `MyOwnedObject.VERSION` | constant | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L43–L43` |
| `MyOwnedObject.fields` | field | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L44–L44` |
| `MyObj` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L47–L111` |
| `MyObj.VERSION` | constant | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L49–L49` |
| `MyObj.fields` | field | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L50–L58` |
| `MyObj._from_db_object` | method | (context, obj, db_obj) | private | `self` (src/nova/tests/unit/objects/test_objects.py:L68) | 1/8 | `src/nova/tests/unit/objects/test_objects.py:L61–L68` |
| `MyObj.obj_load_attr` | method | (self, attrname) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_objects.py:L71–L72` |
| `MyObj.query` | method | (cls, context) | public | `obj` (src/nova/tests/unit/objects/test_objects.py:L79) | 1/4 | `src/nova/tests/unit/objects/test_objects.py:L76–L79` |
| `MyObj.marco` | method | (self) | public | `'polo'` (src/nova/tests/unit/objects/test_objects.py:L83) | 1/2 | `src/nova/tests/unit/objects/test_objects.py:L82–L83` |
| `MyObj._update_test` | method | (self) | private | not declared | 1/2 | `src/nova/tests/unit/objects/test_objects.py:L86–L87` |
| `MyObj.save` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_objects.py:L90–L91` |
| `MyObj.refresh` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_objects.py:L94–L97` |
| `MyObj.modify_save_modify` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_objects.py:L100–L104` |
| `MyObj.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 3/4 | `src/nova/tests/unit/objects/test_objects.py:L106–L111` |
| `RandomMixInWithNoFields` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L114–L116` |
| `SubclassedObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L120–L121` |
| `SubclassedObject.fields` | field | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L121–L121` |
| `TestObjToPrimitive` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L124–L170` |
| `TestObjToPrimitive.test_obj_to_primitive_list` | method | (self) | public | not declared | 2/12 | `src/nova/tests/unit/objects/test_objects.py:L126–L142` |
| `TestObjToPrimitive.test_obj_to_primitive_list.MyObjElement` | class | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L128–L133` |
| `TestObjToPrimitive.test_obj_to_primitive_list.MyObjElement.__init__` | method | (self, foo) | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L131–L133` |
| `TestObjToPrimitive.test_obj_to_primitive_list.MyList` | class | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L136–L137` |
| `TestObjToPrimitive.test_obj_to_primitive_dict` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_objects.py:L144–L148` |
| `TestObjToPrimitive.test_obj_to_primitive_recursive` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/objects/test_objects.py:L150–L160` |
| `TestObjToPrimitive.test_obj_to_primitive_recursive.MyList` | class | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L153–L154` |
| `TestObjToPrimitive.test_obj_to_primitive_with_ip_addr` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_objects.py:L162–L170` |
| `TestObjToPrimitive.test_obj_to_primitive_with_ip_addr.TestObject` | class | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L164–L166` |
| `compare_obj` | function | (test, obj, db_obj, subs=None, allow_missing=None, comparators=None) | exported | not declared | 9/21 | `src/nova/tests/unit/objects/test_objects.py:L173–L208` |
| `_BaseTestCase` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L211–L234` |
| `_BaseTestCase.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_objects.py:L212–L223` |
| `_BaseTestCase.compare_obj` | method | (self, obj, db_obj, subs=None, allow_missing=None, comparators=None) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_objects.py:L225–L228` |
| `_BaseTestCase.str_comparator` | method | (self, expected, obj_val) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_objects.py:L230–L234` |
| `_LocalTest` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L237–L241` |
| `_LocalTest.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_objects.py:L238–L241` |
| `things_temporarily_local` | function | — | exported | not declared | 1/5 | `src/nova/tests/unit/objects/test_objects.py:L245–L251` |
| `FakeIndirectionHack` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L257–L310` |
| `FakeIndirectionHack.object_action` | method | (self, context, objinst, objmethod, args, kwargs) | public | `updates, result` (src/nova/tests/unit/objects/test_objects.py:L273) | 1/16 | `src/nova/tests/unit/objects/test_objects.py:L258–L273` |
| `FakeIndirectionHack.object_class_action` | method | (self, context, objname, objmethod, objver, args, kwargs) | public | `(base.NovaObject.obj_from_primitive( result.obj_to_primitive(target_version=objver, version_manifest=manifest), context=context) if isinstance(result, base.NovaObject) else result)` (src/nova/tests/unit/objects/test_objects.py:L289) | 2/19 | `src/nova/tests/unit/objects/test_objects.py:L275–L293` |
| `FakeIndirectionHack.object_class_action_versions` | method | (self, context, objname, objmethod, object_versions, args, kwargs) | public | `(base.NovaObject.obj_from_primitive( result.obj_to_primitive(target_version=objver), context=context) if isinstance(result, base.NovaObject) else result)` (src/nova/tests/unit/objects/test_objects.py:L307) | 3/16 | `src/nova/tests/unit/objects/test_objects.py:L295–L310` |
| `IndirectionFixture` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L313–L320` |
| `IndirectionFixture.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_objects.py:L314–L320` |
| `_RemoteTest` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L323–L326` |
| `_RemoteTest.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_objects.py:L324–L326` |
| `_TestObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L329–L764` |
| `_TestObject.test_object_attrs_in_init` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_objects.py:L330–L336` |
| `_TestObject.test_hydration_type_error` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_objects.py:L338–L343` |
| `_TestObject.test_hydration` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_objects.py:L345–L359` |
| `_TestObject.test_hydration._obj_from_primitive` | function | (*args) | private | `real_method(*args)` (src/nova/tests/unit/objects/test_objects.py:L353) | — | `src/nova/tests/unit/objects/test_objects.py:L352–L353` |
| `_TestObject.test_hydration_version_different` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_objects.py:L361–L368` |
| `_TestObject.test_hydration_bad_ns` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_objects.py:L370–L376` |
| `_TestObject.test_hydration_additional_unexpected_stuff` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_objects.py:L378–L393` |
| `_TestObject.test_dehydration` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_objects.py:L395–L402` |
| `_TestObject.test_object_property` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_objects.py:L404–L406` |
| `_TestObject.test_object_property_type_error` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_objects.py:L408–L413` |
| `_TestObject.test_object_property_type_error.fail` | function | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L411–L412` |
| `_TestObject.test_load` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_objects.py:L415–L417` |
| `_TestObject.test_load_in_base` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_objects.py:L419–L425` |
| `_TestObject.test_load_in_base.Foo` | class | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L421–L422` |
| `_TestObject.test_loaded_in_primitive` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_objects.py:L427–L437` |
| `_TestObject.test_changes_in_primitive` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_objects.py:L439–L447` |
| `_TestObject.test_orphaned_object` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_objects.py:L449–L453` |
| `_TestObject.test_changed_1` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_objects.py:L455–L461` |
| `_TestObject.test_changed_2` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_objects.py:L463–L469` |
| `_TestObject.test_changed_3` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_objects.py:L471–L478` |
| `_TestObject.test_changed_4` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_objects.py:L480–L488` |
| `_TestObject.test_changed_with_sub_object` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/objects/test_objects.py:L490–L506` |
| `_TestObject.test_changed_with_sub_object.ParentObject` | class | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L492–L495` |
| `_TestObject.test_static_result` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_objects.py:L508–L512` |
| `_TestObject.test_updates` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_objects.py:L514–L518` |
| `_TestObject.test_base_attributes` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/objects/test_objects.py:L520–L537` |
| `_TestObject.test_contains` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_objects.py:L539–L544` |
| `_TestObject.test_obj_attr_is_set` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_objects.py:L546–L550` |
| `_TestObject.test_get` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_objects.py:L552–L567` |
| `_TestObject.test_object_inheritance` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/objects/test_objects.py:L569–L582` |
| `_TestObject.test_obj_alternate_context` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_objects.py:L584–L589` |
| `_TestObject.test_get_changes` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_objects.py:L591–L599` |
| `_TestObject.test_obj_fields` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_objects.py:L601–L612` |
| `_TestObject.test_obj_fields.TestObj` | class | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L603–L609` |
| `_TestObject.test_obj_fields.TestObj.bar` | method | (self) | public | `'this is bar'` (src/nova/tests/unit/objects/test_objects.py:L609) | — | `src/nova/tests/unit/objects/test_objects.py:L608–L609` |
| `_TestObject.test_obj_constructor` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_objects.py:L614–L618` |
| `_TestObject.test_obj_read_only` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_objects.py:L620–L624` |
| `_TestObject.test_obj_mutable_default` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_objects.py:L626–L635` |
| `_TestObject.test_obj_mutable_default_set_default` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_objects.py:L637–L648` |
| `_TestObject.test_obj_repr` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_objects.py:L650–L656` |
| `_TestObject.test_obj_make_obj_compatible` | method | (self) | public | not declared | 1/36 | `src/nova/tests/unit/objects/test_objects.py:L658–L697` |
| `_TestObject.test_obj_make_compatible_hits_sub_objects` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_objects.py:L699–L706` |
| `_TestObject.test_obj_make_compatible_skips_unset_sub_objects` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_objects.py:L708–L713` |
| `_TestObject.test_obj_make_compatible_doesnt_skip_falsey_sub_objects` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/objects/test_objects.py:L715–L736` |
| `_TestObject.test_obj_make_compatible_doesnt_skip_falsey_sub_objects.MyList` | class | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L717–L722` |
| `_TestObject.test_obj_make_compatible_doesnt_skip_falsey_sub_objects.MyOwner` | class | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L727–L732` |
| `_TestObject.test_obj_make_compatible_handles_list_of_objects` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_objects.py:L738–L750` |
| `_TestObject.test_obj_make_compatible_handles_list_of_objects.fake_make_compat` | function | (primitive, version) | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L743–L745` |
| `_TestObject.test_delattr` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_objects.py:L752–L760` |
| `_TestObject.test_delattr_unset` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_objects.py:L762–L764` |
| `TestObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L767–L792` |
| `TestObject.test_set_defaults` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_objects.py:L768–L772` |
| `TestObject.test_set_defaults_no_default` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_objects.py:L774–L777` |
| `TestObject.test_set_all_defaults` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_objects.py:L779–L784` |
| `TestObject.test_set_defaults_not_overwrite` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_objects.py:L786–L792` |
| `TestObjectMisc` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L795–L821` |
| `TestObjectMisc.test_lazy_load_counter` | method | (self, mock_log) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_objects.py:L797–L810` |
| `TestObjectMisc.test_object_id` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_objects.py:L812–L821` |
| `TestObjectSerializer` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L824–L1002` |
| `TestObjectSerializer.test_serialize_entity_primitive` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/objects/test_objects.py:L825–L828` |
| `TestObjectSerializer.test_deserialize_entity_primitive` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/objects/test_objects.py:L830–L833` |
| `TestObjectSerializer.test_serialize_set_to_list` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_objects.py:L835–L837` |
| `TestObjectSerializer._test_deserialize_entity_newer` | method | (self, obj_version, backported_to, my_version='1.6') | private | not declared | 2/19 | `src/nova/tests/unit/objects/test_objects.py:L839–L860` |
| `TestObjectSerializer._test_deserialize_entity_newer.MyTestObj` | class | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L845–L846` |
| `TestObjectSerializer.test_deserialize_entity_newer_version_backports` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_objects.py:L862–L863` |
| `TestObjectSerializer.test_deserialize_entity_newer_revision_does_not_backport_zero` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_objects.py:L865–L866` |
| `TestObjectSerializer.test_deserialize_entity_newer_revision_does_not_backport` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_objects.py:L868–L869` |
| `TestObjectSerializer.test_deserialize_entity_newer_version_passes_revision` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_objects.py:L871–L872` |
| `TestObjectSerializer.test_deserialize_dot_z_with_extra_stuff` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_objects.py:L874–L890` |
| `TestObjectSerializer.test_object_tree_backport` | method | (self, mock_get_versions) | public | not declared | 1/35 | `src/nova/tests/unit/objects/test_objects.py:L893–L962` |
| `TestObjectSerializer.test_object_tree_backport.Child` | class | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L903–L904` |
| `TestObjectSerializer.test_object_tree_backport.Parent` | class | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L907–L912` |
| `TestObjectSerializer.test_object_tree_backport.Parent` | class | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L915–L920` |
| `TestObjectSerializer.test_object_tree_backport.fake_obj_from_primitive` | function | (*a, **k) | public | `real_ofp(*a, **k)` (src/nova/tests/unit/objects/test_objects.py:L941) | — | `src/nova/tests/unit/objects/test_objects.py:L933–L944` |
| `TestObjectSerializer.test_object_serialization` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_objects.py:L964–L971` |
| `TestObjectSerializer.test_object_serialization_iterables` | method | (self) | public | not declared | 6/27 | `src/nova/tests/unit/objects/test_objects.py:L973–L1002` |
| `TestArgsSerializer` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L1005–L1038` |
| `TestArgsSerializer.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_objects.py:L1006–L1010` |
| `TestArgsSerializer._test_serialize_args` | method | (self, *args, **kwargs) | private | not declared | 4/13 | `src/nova/tests/unit/objects/test_objects.py:L1013–L1027` |
| `TestArgsSerializer.test_serialize_args` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_objects.py:L1029–L1032` |
| `TestArgsSerializer.test_serialize_args_non_nova_exception` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_objects.py:L1034–L1038` |
| `TestRegistry` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L1041–L1074` |
| `TestRegistry.test_hook_chooses_newer_properly` | method | (self, mock_objects) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_objects.py:L1043–L1057` |
| `TestRegistry.test_hook_chooses_newer_properly.MyNewerObj` | class | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L1048–L1053` |
| `TestRegistry.test_hook_chooses_newer_properly.MyNewerObj.obj_name` | method | (cls) | public | `'MyObj'` (src/nova/tests/unit/objects/test_objects.py:L1053) | — | `src/nova/tests/unit/objects/test_objects.py:L1052–L1053` |
| `TestRegistry.test_hook_keeps_newer_properly` | method | (self, mock_objects) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_objects.py:L1060–L1074` |
| `TestRegistry.test_hook_keeps_newer_properly.MyOlderObj` | class | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L1065–L1070` |
| `TestRegistry.test_hook_keeps_newer_properly.MyOlderObj.obj_name` | method | (cls) | public | `'MyObj'` (src/nova/tests/unit/objects/test_objects.py:L1070) | — | `src/nova/tests/unit/objects/test_objects.py:L1069–L1070` |
| `object_data` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L1080–L1190` |
| `get_nova_objects` | function | — | exported | `nova_classes` (src/nova/tests/unit/objects/test_objects.py:L1217) | 5/11 | `src/nova/tests/unit/objects/test_objects.py:L1193–L1217` |
| `TestObjectVersions` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L1220–L1317` |
| `TestObjectVersions.test_versions` | method | (self) | public | not declared | 2/14 | `src/nova/tests/unit/objects/test_objects.py:L1221–L1236` |
| `TestObjectVersions.test_obj_make_compatible` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_objects.py:L1238–L1261` |
| `TestObjectVersions.test_list_obj_make_compatible` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/objects/test_objects.py:L1263–L1288` |
| `TestObjectVersions.test_list_obj_make_compatible.TestObj` | class | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L1265–L1267` |
| `TestObjectVersions.test_list_obj_make_compatible.TestListObj` | class | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L1270–L1276` |
| `TestObjectVersions.test_list_obj_make_compatible_when_no_objects` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/objects/test_objects.py:L1290–L1317` |
| `TestObjectVersions.test_list_obj_make_compatible_when_no_objects.TestObj` | class | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L1296–L1298` |
| `TestObjectVersions.test_list_obj_make_compatible_when_no_objects.TestListObj` | class | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L1301–L1307` |
| `TestObjEqualPrims` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L1320–L1349` |
| `TestObjEqualPrims.test_object_equal` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_objects.py:L1322–L1331` |
| `TestObjEqualPrims.test_object_not_equal` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_objects.py:L1333–L1340` |
| `TestObjEqualPrims.test_object_ignore_equal` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_objects.py:L1342–L1349` |
| `TestObjMethodOverrides` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L1352–L1360` |
| `TestObjMethodOverrides.test_obj_reset_changes` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/objects/test_objects.py:L1353–L1360` |
| `TestObjectsDefaultingOnInit` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L1363–L1397` |
| `TestObjectsDefaultingOnInit.test_init_behavior_policy` | method | (self) | public | not declared | 7/18 | `src/nova/tests/unit/objects/test_objects.py:L1364–L1397` |
| `MyObj._from_db_object` | staticmethod | — | private | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L60–L68` |
| `_TestObject.test_obj_fields.TestObj.bar` | property | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L607–L609` |
| `TestRegistry.test_hook_chooses_newer_properly.MyNewerObj.obj_name` | classmethod | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L1051–L1053` |
| `TestRegistry.test_hook_keeps_newer_properly.MyOlderObj.obj_name` | classmethod | — | public | not declared | — | `src/nova/tests/unit/objects/test_objects.py:L1068–L1070` |

## Dependencies

- `import collections` (src/nova/tests/unit/objects/test_objects.py:L15)
- `import contextlib` (src/nova/tests/unit/objects/test_objects.py:L16)
- `import copy` (src/nova/tests/unit/objects/test_objects.py:L17)
- `import datetime` (src/nova/tests/unit/objects/test_objects.py:L18)
- `import inspect` (src/nova/tests/unit/objects/test_objects.py:L19)
- `import os` (src/nova/tests/unit/objects/test_objects.py:L20)
- `import pprint` (src/nova/tests/unit/objects/test_objects.py:L21)
- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_objects.py:L22)
- `import fixtures` (src/nova/tests/unit/objects/test_objects.py:L24)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/objects/test_objects.py:L25)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/objects/test_objects.py:L26)
- `oslo_versionedobjects`: imports `base as ovo_base` (src/nova/tests/unit/objects/test_objects.py:L27)
- `oslo_versionedobjects`: imports `exception as ovo_exc` (src/nova/tests/unit/objects/test_objects.py:L28)
- `oslo_versionedobjects`: imports `fixture` (src/nova/tests/unit/objects/test_objects.py:L29)
- `nova`: imports `context` (src/nova/tests/unit/objects/test_objects.py:L31)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_objects.py:L32)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_objects.py:L33)
- `nova.objects`: imports `base` (src/nova/tests/unit/objects/test_objects.py:L34)
- `nova.objects`: imports `fields` (src/nova/tests/unit/objects/test_objects.py:L35)
- `nova.objects`: imports `virt_device_metadata` (src/nova/tests/unit/objects/test_objects.py:L36)
- `nova`: imports `test` (src/nova/tests/unit/objects/test_objects.py:L37)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/objects/test_objects.py:L38)
- `nova`: imports `utils` (src/nova/tests/unit/objects/test_objects.py:L39)

## Side Effects

- **file-io**: open('object_hashes.txt', 'w').write( (src/nova/tests/unit/objects/test_objects.py:L1227)
- **global-mutation**: VERSION = '1.0' (src/nova/tests/unit/objects/test_objects.py:L43)
- **global-mutation**: VERSION = '1.6' (src/nova/tests/unit/objects/test_objects.py:L49)
- **global-mutation**: VERSION = '1.2' (src/nova/tests/unit/objects/test_objects.py:L718)
- **global-mutation**: VERSION = '1.2' (src/nova/tests/unit/objects/test_objects.py:L728)
- **global-mutation**: VERSION = my_version (src/nova/tests/unit/objects/test_objects.py:L846)
- **global-mutation**: VERSION = '1.10' (src/nova/tests/unit/objects/test_objects.py:L904)
- **global-mutation**: VERSION = '1.0' (src/nova/tests/unit/objects/test_objects.py:L908)
- **global-mutation**: VERSION = '1.1' (src/nova/tests/unit/objects/test_objects.py:L916)
- **global-mutation**: VERSION = '1.123' (src/nova/tests/unit/objects/test_objects.py:L1049)
- **global-mutation**: VERSION = '1.1' (src/nova/tests/unit/objects/test_objects.py:L1066)
- **global-mutation**: VERSION = '1.4' (src/nova/tests/unit/objects/test_objects.py:L1266)
- **global-mutation**: VERSION = '1.5' (src/nova/tests/unit/objects/test_objects.py:L1271)
- **global-mutation**: VERSION = '1.1' (src/nova/tests/unit/objects/test_objects.py:L1297)
- **global-mutation**: VERSION = '1.1' (src/nova/tests/unit/objects/test_objects.py:L1302)

## Security Surface

- **entry-point** (`env`): if os.getenv('GENERATE_HASHES'): (src/nova/tests/unit/objects/test_objects.py:L1226)
- **sink** (`file-write`): open('object_hashes.txt', 'w').write( (src/nova/tests/unit/objects/test_objects.py:L1227)
- **sink** (`db-write`): 'versions have been bumped, and then update their ' (src/nova/tests/unit/objects/test_objects.py:L1235)

