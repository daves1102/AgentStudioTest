# src/nova/objects/request_spec.py

## Overview

This file implements the `request_spec` module, defining 6 classs, 9 constants, 6 fields, 71 methods, 9 propertys, 1 variable, 16 imports, 13 side effects.

Lines: total 1565, code 1049, comment 344, blank 172

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/objects/request_spec.py:L34–L34` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/objects/request_spec.py:L35–L35` |
| `REQUEST_SPEC_OPTIONAL_ATTRS` | constant | — | exported | not declared | — | `src/nova/objects/request_spec.py:L37–L42` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/request_spec.py:L44–L51` |
| `RequestSpec` | class | — | exported | not declared | — | `src/nova/objects/request_spec.py:L55–L1122` |
| `RequestSpec.VERSION` | constant | — | public | not declared | — | `src/nova/objects/request_spec.py:L72–L72` |
| `RequestSpec.fields` | field | — | public | not declared | — | `src/nova/objects/request_spec.py:L74–L130` |
| `RequestSpec.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 17/24 | `src/nova/objects/request_spec.py:L132–L155` |
| `RequestSpec.obj_load_attr` | method | (self, attrname) | public | `` (src/nova/objects/request_spec.py:L166); `` (src/nova/objects/request_spec.py:L171); `` (src/nova/objects/request_spec.py:L175); `` (src/nova/objects/request_spec.py:L179) | 6/19 | `src/nova/objects/request_spec.py:L158–L184` |
| `RequestSpec.vcpus` | method | (self) | public | `self.flavor.vcpus` (src/nova/objects/request_spec.py:L188) | 1/2 | `src/nova/objects/request_spec.py:L187–L188` |
| `RequestSpec.memory_mb` | method | (self) | public | `self.flavor.memory_mb` (src/nova/objects/request_spec.py:L192) | 1/2 | `src/nova/objects/request_spec.py:L191–L192` |
| `RequestSpec.root_gb` | method | (self) | public | `self.flavor.root_gb` (src/nova/objects/request_spec.py:L196) | 1/2 | `src/nova/objects/request_spec.py:L195–L196` |
| `RequestSpec.ephemeral_gb` | method | (self) | public | `self.flavor.ephemeral_gb` (src/nova/objects/request_spec.py:L200) | 1/2 | `src/nova/objects/request_spec.py:L199–L200` |
| `RequestSpec.swap` | method | (self) | public | `self.flavor.swap` (src/nova/objects/request_spec.py:L204) | 1/2 | `src/nova/objects/request_spec.py:L203–L204` |
| `RequestSpec.root_required` | method | (self) | public | `self.request_level_params.root_required` (src/nova/objects/request_spec.py:L210) | 1/2 | `src/nova/objects/request_spec.py:L207–L210` |
| `RequestSpec.root_forbidden` | method | (self) | public | `self.request_level_params.root_forbidden` (src/nova/objects/request_spec.py:L216) | 1/2 | `src/nova/objects/request_spec.py:L213–L216` |
| `RequestSpec.same_subtree` | method | (self) | public | `self.request_level_params.same_subtree` (src/nova/objects/request_spec.py:L222) | 1/2 | `src/nova/objects/request_spec.py:L219–L222` |
| `RequestSpec._image_meta_from_image` | method | (self, image) | private | not declared | 3/7 | `src/nova/objects/request_spec.py:L224–L234` |
| `RequestSpec._from_instance` | method | (self, instance) | private | `` (src/nova/objects/request_spec.py:L250) | 7/18 | `src/nova/objects/request_spec.py:L236–L262` |
| `RequestSpec._from_instance_pci_requests` | method | (self, pci_requests) | private | not declared | 2/7 | `src/nova/objects/request_spec.py:L264–L270` |
| `RequestSpec._from_instance_numa_topology` | method | (self, numa_topology) | private | not declared | 2/5 | `src/nova/objects/request_spec.py:L272–L277` |
| `RequestSpec._from_flavor` | method | (self, flavor) | private | not declared | 3/5 | `src/nova/objects/request_spec.py:L279–L288` |
| `RequestSpec._from_retry` | method | (self, retry_dict) | private | not declared | 2/3 | `src/nova/objects/request_spec.py:L290–L292` |
| `RequestSpec._populate_group_info` | method | (self, filter_properties) | private | not declared | 4/16 | `src/nova/objects/request_spec.py:L294–L316` |
| `RequestSpec._from_limits` | method | (self, limits) | private | not declared | 2/5 | `src/nova/objects/request_spec.py:L318–L323` |
| `RequestSpec._from_hints` | method | (self, hints_dict) | private | `` (src/nova/objects/request_spec.py:L328) | 4/7 | `src/nova/objects/request_spec.py:L325–L331` |
| `RequestSpec.from_primitives` | method | (cls, context, request_spec, filter_properties) | public | `spec` (src/nova/objects/request_spec.py:L381) | 1/23 | `src/nova/objects/request_spec.py:L334–L381` |
| `RequestSpec.get_scheduler_hint` | method | (self, hint_name, default=None) | public | `default` (src/nova/objects/request_spec.py:L397); `(hint_val[0] if isinstance(hint_val, list) and len(hint_val) == 1 else hint_val)` (src/nova/objects/request_spec.py:L399) | 5/7 | `src/nova/objects/request_spec.py:L383–L400` |
| `RequestSpec._to_legacy_image` | method | (self) | private | `base.obj_to_primitive(self.image) if ( self.obj_attr_is_set('image') and self.image) else {}` (src/nova/objects/request_spec.py:L403) | 3/3 | `src/nova/objects/request_spec.py:L402–L404` |
| `RequestSpec._to_legacy_instance` | method | (self) | private | `instance` (src/nova/objects/request_spec.py:L422); `instance` (src/nova/objects/request_spec.py:L425) | 6/18 | `src/nova/objects/request_spec.py:L406–L425` |
| `RequestSpec._to_legacy_group_info` | method | (self) | private | `{'group_updated': True, 'group_hosts': set(self.instance_group.hosts), 'group_policies': set([self.instance_group.policy]), 'group_members': set(self.instance_group.members), 'group_uuid': self.instan` (src/nova/objects/request_spec.py:L431) | 1/6 | `src/nova/objects/request_spec.py:L427–L435` |
| `RequestSpec.to_legacy_request_spec_dict` | method | (self) | public | `req_spec` (src/nova/objects/request_spec.py:L457) | 3/13 | `src/nova/objects/request_spec.py:L437–L457` |
| `RequestSpec.to_legacy_filter_properties_dict` | method | (self) | public | `filt_props` (src/nova/objects/request_spec.py:L489) | 18/21 | `src/nova/objects/request_spec.py:L459–L489` |
| `RequestSpec._rc_from_request` | method | (spec) | private | `pci_placement_translator.get_resource_class( spec.get("resource_class"), spec.get("vendor_id"), spec.get("product_id"), )` (src/nova/objects/request_spec.py:L493) | 1/6 | `src/nova/objects/request_spec.py:L492–L497` |
| `RequestSpec._traits_from_request` | method | (spec) | private | `pci_placement_translator.get_traits(spec.get("traits", ""))` (src/nova/objects/request_spec.py:L501) | 1/2 | `src/nova/objects/request_spec.py:L500–L501` |
| `RequestSpec.generate_request_groups_from_pci_requests` | method | (self) | public | `False` (src/nova/objects/request_spec.py:L505) | 7/24 | `src/nova/objects/request_spec.py:L503–L599` |
| `RequestSpec.from_components` | method | (cls, context, instance_uuid, image, flavor, numa_topology, pci_requests, filter_properties, instance_group, availability_zone, security_groups=None, project_id=None, user_id=None, port_resource_requests=None, request_level_params=None) | public | `spec_obj` (src/nova/objects/request_spec.py:L678) | 8/38 | `src/nova/objects/request_spec.py:L602–L678` |
| `RequestSpec.ensure_project_and_user_id` | method | (self, instance) | public | not declared | 5/5 | `src/nova/objects/request_spec.py:L680–L684` |
| `RequestSpec.ensure_network_information` | method | (self, instance) | public | `` (src/nova/objects/request_spec.py:L691) | 5/23 | `src/nova/objects/request_spec.py:L686–L721` |
| `RequestSpec._from_db_object` | method | (context, spec, db_spec) | private | `spec` (src/nova/objects/request_spec.py:L781) | 15/36 | `src/nova/objects/request_spec.py:L724–L781` |
| `RequestSpec._get_by_instance_uuid_from_db` | method | (context, instance_uuid) | private | `db_spec` (src/nova/objects/request_spec.py:L791) | 2/7 | `src/nova/objects/request_spec.py:L785–L791` |
| `RequestSpec.get_by_instance_uuid` | method | (cls, context, instance_uuid) | public | `cls._from_db_object(context, cls(), db_spec)` (src/nova/objects/request_spec.py:L797) | 1/3 | `src/nova/objects/request_spec.py:L795–L797` |
| `RequestSpec._get_by_instance_uuids_from_db` | method | (context, instance_uuids) | private | `db_specs` (src/nova/objects/request_spec.py:L804) | 1/4 | `src/nova/objects/request_spec.py:L801–L804` |
| `RequestSpec.get_by_instance_uuids` | method | (cls, context, instance_uuids) | public | `req_specs` (src/nova/objects/request_spec.py:L811); `req_specs` (src/nova/objects/request_spec.py:L815) | 3/8 | `src/nova/objects/request_spec.py:L808–L815` |
| `RequestSpec._create_in_db` | method | (context, updates) | private | `db_spec` (src/nova/objects/request_spec.py:L823) | 1/5 | `src/nova/objects/request_spec.py:L819–L823` |
| `RequestSpec._get_update_primitives` | method | (self) | private | `db_updates` (src/nova/objects/request_spec.py:L866) | 14/22 | `src/nova/objects/request_spec.py:L825–L866` |
| `RequestSpec.create` | method | (self) | public | not declared | 3/10 | `src/nova/objects/request_spec.py:L869–L879` |
| `RequestSpec._save_in_db` | method | (context, instance_uuid, updates) | private | `db_spec` (src/nova/objects/request_spec.py:L890) | 1/6 | `src/nova/objects/request_spec.py:L883–L890` |
| `RequestSpec.save` | method | (self) | public | not declared | 2/7 | `src/nova/objects/request_spec.py:L893–L899` |
| `RequestSpec._destroy_in_db` | method | (context, instance_uuid) | private | not declared | 2/5 | `src/nova/objects/request_spec.py:L903–L907` |
| `RequestSpec.destroy` | method | (self) | public | not declared | 1/2 | `src/nova/objects/request_spec.py:L910–L911` |
| `RequestSpec._destroy_bulk_in_db` | method | (context, instance_uuids) | private | `context.session.query(api_models.RequestSpec).filter( api_models.RequestSpec.instance_uuid.in_(instance_uuids)).\ delete(synchronize_session=False)` (src/nova/objects/request_spec.py:L916) | 1/4 | `src/nova/objects/request_spec.py:L915–L918` |
| `RequestSpec.destroy_bulk` | method | (cls, context, instance_uuids) | public | `cls._destroy_bulk_in_db(context, instance_uuids)` (src/nova/objects/request_spec.py:L922) | 1/2 | `src/nova/objects/request_spec.py:L921–L922` |
| `RequestSpec.reset_forced_destinations` | method | (self) | public | not declared | 1/4 | `src/nova/objects/request_spec.py:L924–L934` |
| `RequestSpec.maps_requested_resources` | method | (self) | public | `'requested_resources' in self and self.requested_resources` (src/nova/objects/request_spec.py:L941) | 2/2 | `src/nova/objects/request_spec.py:L937–L941` |
| `RequestSpec._is_valid_group_rp_mapping` | method | (self, group_rp_mapping, placement_allocations, provider_traits) | private | `False` (src/nova/objects/request_spec.py:L968); `False` (src/nova/objects/request_spec.py:L986); `False` (src/nova/objects/request_spec.py:L988); `False` (src/nova/objects/request_spec.py:L1004); `True` (src/nova/objects/request_spec.py:L1007) | 12/28 | `src/nova/objects/request_spec.py:L943–L1007` |
| `RequestSpec.map_requested_resources_to_providers` | method | (self, placement_allocations, provider_traits) | public | `` (src/nova/objects/request_spec.py:L1046); `` (src/nova/objects/request_spec.py:L1096) | 10/27 | `src/nova/objects/request_spec.py:L1009–L1105` |
| `RequestSpec.get_request_group_mapping` | method | (self) | public | `{ group.requester_id: group.provider_uuids for group in self.requested_resources }` (src/nova/objects/request_spec.py:L1119) | 4/7 | `src/nova/objects/request_spec.py:L1107–L1122` |
| `Destination` | class | — | exported | not declared | — | `src/nova/objects/request_spec.py:L1126–L1209` |
| `Destination.VERSION` | constant | — | public | not declared | — | `src/nova/objects/request_spec.py:L1132–L1132` |
| `Destination.fields` | field | — | public | not declared | — | `src/nova/objects/request_spec.py:L1134–L1155` |
| `Destination.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 9/14 | `src/nova/objects/request_spec.py:L1157–L1170` |
| `Destination.obj_load_attr` | method | (self, attrname) | public | not declared | 1/2 | `src/nova/objects/request_spec.py:L1172–L1173` |
| `Destination.require_aggregates` | method | (self, aggregates) | public | not declared | 2/4 | `src/nova/objects/request_spec.py:L1175–L1195` |
| `Destination.append_forbidden_aggregates` | method | (self, forbidden_aggregates) | public | not declared | 2/4 | `src/nova/objects/request_spec.py:L1197–L1209` |
| `SchedulerRetries` | class | — | exported | not declared | — | `src/nova/objects/request_spec.py:L1213–L1245` |
| `SchedulerRetries.VERSION` | constant | — | public | not declared | — | `src/nova/objects/request_spec.py:L1216–L1216` |
| `SchedulerRetries.fields` | field | — | public | not declared | — | `src/nova/objects/request_spec.py:L1218–L1223` |
| `SchedulerRetries.from_dict` | method | (cls, context, retry_dict) | public | `retry_obj` (src/nova/objects/request_spec.py:L1233); `retry_obj` (src/nova/objects/request_spec.py:L1240) | 4/10 | `src/nova/objects/request_spec.py:L1226–L1240` |
| `SchedulerRetries.to_dict` | method | (self) | public | `{'num_attempts': self.num_attempts, 'hosts': legacy_hosts}` (src/nova/objects/request_spec.py:L1244) | 2/4 | `src/nova/objects/request_spec.py:L1242–L1245` |
| `SchedulerLimits` | class | — | exported | not declared | — | `src/nova/objects/request_spec.py:L1249–L1277` |
| `SchedulerLimits.VERSION` | constant | — | public | not declared | — | `src/nova/objects/request_spec.py:L1251–L1251` |
| `SchedulerLimits.fields` | field | — | public | not declared | — | `src/nova/objects/request_spec.py:L1253–L1260` |
| `SchedulerLimits.from_dict` | method | (cls, limits_dict) | public | `limits` (src/nova/objects/request_spec.py:L1270) | 1/4 | `src/nova/objects/request_spec.py:L1263–L1270` |
| `SchedulerLimits.to_dict` | method | (self) | public | `limits` (src/nova/objects/request_spec.py:L1277) | 3/6 | `src/nova/objects/request_spec.py:L1272–L1277` |
| `RequestGroup` | class | — | exported | not declared | — | `src/nova/objects/request_spec.py:L1281–L1504` |
| `RequestGroup.VERSION` | constant | — | public | not declared | — | `src/nova/objects/request_spec.py:L1289–L1289` |
| `RequestGroup.fields` | field | — | public | not declared | — | `src/nova/objects/request_spec.py:L1291–L1316` |
| `RequestGroup.from_port_request` | method | (cls, context, port_uuid, port_resource_request) | public | `obj` (src/nova/objects/request_spec.py:L1350) | 1/9 | `src/nova/objects/request_spec.py:L1319–L1350` |
| `RequestGroup.from_extended_port_request` | method | (cls, context, port_resource_request) | public | `group_objs` (src/nova/objects/request_spec.py:L1398) | 2/12 | `src/nova/objects/request_spec.py:L1353–L1398` |
| `RequestGroup.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 8/15 | `src/nova/objects/request_spec.py:L1400–L1414` |
| `RequestGroup.add_resource` | method | (self, rclass, amount) | public | `` (src/nova/objects/request_spec.py:L1423); `` (src/nova/objects/request_spec.py:L1433) | 5/17 | `src/nova/objects/request_spec.py:L1416–L1434` |
| `RequestGroup.add_trait` | method | (self, trait_name, trait_type) | public | not declared | 3/10 | `src/nova/objects/request_spec.py:L1436–L1447` |
| `RequestGroup.is_empty` | method | (self) | public | `not any(( self.resources, self.required_traits, self.forbidden_traits, self.aggregates, self.forbidden_aggregates))` (src/nova/objects/request_spec.py:L1450) | 1/5 | `src/nova/objects/request_spec.py:L1449–L1453` |
| `RequestGroup.strip_zeros` | method | (self) | public | not declared | 3/4 | `src/nova/objects/request_spec.py:L1455–L1459` |
| `RequestGroup.to_queryparams` | method | (self) | public | `qs_params` (src/nova/objects/request_spec.py:L1504) | 9/30 | `src/nova/objects/request_spec.py:L1461–L1504` |
| `RequestLevelParams` | class | — | exported | not declared | — | `src/nova/objects/request_spec.py:L1508–L1565` |
| `RequestLevelParams.VERSION` | constant | — | public | not declared | — | `src/nova/objects/request_spec.py:L1515–L1515` |
| `RequestLevelParams.fields` | field | — | public | not declared | — | `src/nova/objects/request_spec.py:L1517–L1527` |
| `RequestLevelParams.obj_load_attr` | method | (self, attrname) | public | not declared | 1/2 | `src/nova/objects/request_spec.py:L1529–L1530` |
| `RequestLevelParams.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 3/6 | `src/nova/objects/request_spec.py:L1532–L1538` |
| `RequestLevelParams.from_port_request` | method | (cls, port_resource_request) | public | `cls(same_subtree=[same_subtree])` (src/nova/objects/request_spec.py:L1552); `cls()` (src/nova/objects/request_spec.py:L1554) | 2/5 | `src/nova/objects/request_spec.py:L1541–L1554` |
| `RequestLevelParams.extend_with` | method | (self, other_req_lvl_params) | public | not declared | 1/6 | `src/nova/objects/request_spec.py:L1556–L1565` |
| `RequestSpec.vcpus` | property | — | public | not declared | — | `src/nova/objects/request_spec.py:L186–L188` |
| `RequestSpec.memory_mb` | property | — | public | not declared | — | `src/nova/objects/request_spec.py:L190–L192` |
| `RequestSpec.root_gb` | property | — | public | not declared | — | `src/nova/objects/request_spec.py:L194–L196` |
| `RequestSpec.ephemeral_gb` | property | — | public | not declared | — | `src/nova/objects/request_spec.py:L198–L200` |
| `RequestSpec.swap` | property | — | public | not declared | — | `src/nova/objects/request_spec.py:L202–L204` |
| `RequestSpec.root_required` | property | — | public | not declared | — | `src/nova/objects/request_spec.py:L206–L210` |
| `RequestSpec.root_forbidden` | property | — | public | not declared | — | `src/nova/objects/request_spec.py:L212–L216` |
| `RequestSpec.same_subtree` | property | — | public | not declared | — | `src/nova/objects/request_spec.py:L218–L222` |
| `RequestSpec.maps_requested_resources` | property | — | public | not declared | — | `src/nova/objects/request_spec.py:L936–L941` |

## Dependencies

- `import copy` (src/nova/objects/request_spec.py:L15)
- `import itertools` (src/nova/objects/request_spec.py:L16)
- `import typing as ty` (src/nova/objects/request_spec.py:L17)
- `import os_resource_classes as orc` (src/nova/objects/request_spec.py:L19)
- `oslo_log`: imports `log as logging` (src/nova/objects/request_spec.py:L20)
- `oslo_serialization`: imports `jsonutils` (src/nova/objects/request_spec.py:L21)
- `oslo_utils`: imports `versionutils` (src/nova/objects/request_spec.py:L22)
- `nova.compute`: imports `pci_placement_translator` (src/nova/objects/request_spec.py:L24)
- `import nova.conf` (src/nova/objects/request_spec.py:L25)
- `nova.db.api`: imports `api as api_db_api` (src/nova/objects/request_spec.py:L26)
- `nova.db.api`: imports `models as api_models` (src/nova/objects/request_spec.py:L27)
- `nova`: imports `exception` (src/nova/objects/request_spec.py:L28)
- `nova`: imports `objects` (src/nova/objects/request_spec.py:L29)
- `nova.objects`: imports `base` (src/nova/objects/request_spec.py:L30)
- `nova.objects`: imports `fields` (src/nova/objects/request_spec.py:L31)
- `nova.objects`: imports `instance as obj_instance` (src/nova/objects/request_spec.py:L32)

## Side Effects

- **network**: db_spec = context.session.query(api_models.RequestSpec).filter_by( (src/nova/objects/request_spec.py:L786)
- **network**: db_specs = context.session.query(api_models.RequestSpec).filter( (src/nova/objects/request_spec.py:L802)
- **network**: result = context.session.query(api_models.RequestSpec).filter_by( (src/nova/objects/request_spec.py:L904)
- **network**: return context.session.query(api_models.RequestSpec).filter( (src/nova/objects/request_spec.py:L916)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/objects/request_spec.py:L34)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/objects/request_spec.py:L35)
- **global-mutation**: REQUEST_SPEC_OPTIONAL_ATTRS = ['requested_destination', (src/nova/objects/request_spec.py:L37)
- **global-mutation**: VERSION = '1.15' (src/nova/objects/request_spec.py:L72)
- **global-mutation**: VERSION = '1.4' (src/nova/objects/request_spec.py:L1132)
- **global-mutation**: VERSION = '1.1' (src/nova/objects/request_spec.py:L1216)
- **global-mutation**: VERSION = '1.0' (src/nova/objects/request_spec.py:L1251)
- **global-mutation**: VERSION = '1.3' (src/nova/objects/request_spec.py:L1289)
- **global-mutation**: VERSION = '1.1' (src/nova/objects/request_spec.py:L1515)

