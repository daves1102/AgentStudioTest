# src/nova/tests/unit/objects/test_request_spec.py

## Overview

This file implements the `test_request_spec` module, defining 8 classs, 2 functions, 99 methods, 19 imports.

Lines: total 2117, code 1788, comment 105, blank 224

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_TestRequestSpecObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_request_spec.py:L37–L1104` |
| `_TestRequestSpecObject.test_image_meta_from_image_as_object` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_request_spec.py:L39–L45` |
| `_TestRequestSpecObject.test_image_meta_from_image_as_dict` | method | (self, from_dict) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_request_spec.py:L48–L55` |
| `_TestRequestSpecObject.test_image_meta_from_image_as_none` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_request_spec.py:L57–L61` |
| `_TestRequestSpecObject.test_to_legacy_image` | method | (self, obj_to_primitive) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_request_spec.py:L64–L70` |
| `_TestRequestSpecObject.test_to_legacy_image_with_none` | method | (self, obj_to_primitive) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_request_spec.py:L73–L77` |
| `_TestRequestSpecObject.test_from_instance_as_object` | method | (self) | public | not declared | 3/19 | `src/nova/tests/unit/objects/test_request_spec.py:L79–L98` |
| `_TestRequestSpecObject.test_from_instance_as_dict` | method | (self) | public | not declared | 3/17 | `src/nova/tests/unit/objects/test_request_spec.py:L100–L117` |
| `_TestRequestSpecObject.test_from_instance_with_pci_requests` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/objects/test_request_spec.py:L119–L148` |
| `_TestRequestSpecObject.test_from_instance_with_numa_stuff` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/objects/test_request_spec.py:L150–L169` |
| `_TestRequestSpecObject.test_from_flavor_as_object` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_request_spec.py:L171–L176` |
| `_TestRequestSpecObject.test_from_flavor_as_dict` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_request_spec.py:L178–L185` |
| `_TestRequestSpecObject.test_to_legacy_instance` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/objects/test_request_spec.py:L187–L208` |
| `_TestRequestSpecObject.test_to_legacy_instance_with_unset_values` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_request_spec.py:L210–L212` |
| `_TestRequestSpecObject.test_from_retry` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_request_spec.py:L214–L225` |
| `_TestRequestSpecObject.test_from_retry_missing_values` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_request_spec.py:L227–L232` |
| `_TestRequestSpecObject.test_populate_group_info` | method | (self) | public | not declared | 4/17 | `src/nova/tests/unit/objects/test_request_spec.py:L234–L251` |
| `_TestRequestSpecObject.test_populate_group_info_missing_values` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_request_spec.py:L253–L257` |
| `_TestRequestSpecObject.test_from_limits` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_request_spec.py:L259–L270` |
| `_TestRequestSpecObject.test_from_limits_missing_values` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_request_spec.py:L272–L280` |
| `_TestRequestSpecObject.test_from_hints` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_request_spec.py:L282–L289` |
| `_TestRequestSpecObject.test_from_hints_with_no_hints` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_request_spec.py:L291–L294` |
| `_TestRequestSpecObject.test_from_primitives` | method | (self, mock_limits) | public | not declared | 4/20 | `src/nova/tests/unit/objects/test_request_spec.py:L297–L322` |
| `_TestRequestSpecObject.test_from_primitives_with_requested_destination` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_request_spec.py:L324–L330` |
| `_TestRequestSpecObject.test_from_components` | method | (self) | public | not declared | 4/22 | `src/nova/tests/unit/objects/test_request_spec.py:L332–L356` |
| `_TestRequestSpecObject.test_from_components_with_instance_group` | method | (self, mock_pgi) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_request_spec.py:L359–L374` |
| `_TestRequestSpecObject.test_from_components_without_instance_group` | method | (self, mock_pgi) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_request_spec.py:L377–L392` |
| `_TestRequestSpecObject.test_from_components_without_security_groups` | method | (self, mock_pgi) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_request_spec.py:L395–L409` |
| `_TestRequestSpecObject.test_from_components_with_port_resource_request` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/objects/test_request_spec.py:L411–L431` |
| `_TestRequestSpecObject.test_from_components_flavor_based_pci_requests` | method | (self) | public | not declared | 1/52 | `src/nova/tests/unit/objects/test_request_spec.py:L433–L488` |
| `_TestRequestSpecObject.test_get_scheduler_hint` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_request_spec.py:L490–L497` |
| `_TestRequestSpecObject.test_get_scheduler_hint_with_no_hints` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_request_spec.py:L499–L502` |
| `_TestRequestSpecObject.test_to_legacy_request_spec_dict` | method | (self, image_to_primitive, spec_to_legacy_instance) | public | not declared | 1/32 | `src/nova/tests/unit/objects/test_request_spec.py:L506–L539` |
| `_TestRequestSpecObject.test_to_legacy_request_spec_dict_with_unset_values` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_request_spec.py:L541–L547` |
| `_TestRequestSpecObject.test_to_legacy_filter_properties_dict` | method | (self) | public | not declared | 1/39 | `src/nova/tests/unit/objects/test_request_spec.py:L549–L587` |
| `_TestRequestSpecObject.test_to_legacy_filter_properties_dict_with_nullable_values` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_request_spec.py:L589–L596` |
| `_TestRequestSpecObject.test_to_legacy_filter_properties_dict_with_unset_values` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_request_spec.py:L598–L600` |
| `_TestRequestSpecObject.test_ensure_network_information` | method | (self) | public | not declared | 2/30 | `src/nova/tests/unit/objects/test_request_spec.py:L602–L633` |
| `_TestRequestSpecObject.test_ensure_network_information_missing` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_request_spec.py:L635–L648` |
| `_TestRequestSpecObject.test_get_by_instance_uuid` | method | (self, mock_get_ig, get_by_uuid) | public | not declared | 1/23 | `src/nova/tests/unit/objects/test_request_spec.py:L653–L679` |
| `_TestRequestSpecObject.test_get_by_instance_uuid_deleted_group` | method | (self, mock_get_ig, get_by_uuid) | public | not declared | 1/15 | `src/nova/tests/unit/objects/test_request_spec.py:L685–L703` |
| `_TestRequestSpecObject.test_get_by_instance_uuid_numa_topology_migration` | method | (self, mock_get_ig, get_by_uuid, mock_save) | public | not declared | 2/26 | `src/nova/tests/unit/objects/test_request_spec.py:L709–L744` |
| `_TestRequestSpecObject._check_update_primitive` | method | (self, req_obj, changes) | private | not declared | 3/19 | `src/nova/tests/unit/objects/test_request_spec.py:L746–L769` |
| `_TestRequestSpecObject.test_create` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_request_spec.py:L771–L782` |
| `_TestRequestSpecObject.test_create._test_create_args` | function | (self2, context, changes) | private | `changes` (src/nova/tests/unit/objects/test_request_spec.py:L778) | — | `src/nova/tests/unit/objects/test_request_spec.py:L774–L778` |
| `_TestRequestSpecObject.test_create_id_set` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_request_spec.py:L784–L788` |
| `_TestRequestSpecObject.test_create_does_not_persist_requested_fields` | method | (self) | public | not declared | 1/55 | `src/nova/tests/unit/objects/test_request_spec.py:L790–L862` |
| `_TestRequestSpecObject.test_save_does_not_persist_requested_fields` | method | (self) | public | not declared | 1/53 | `src/nova/tests/unit/objects/test_request_spec.py:L864–L933` |
| `_TestRequestSpecObject.test_save` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_request_spec.py:L935–L949` |
| `_TestRequestSpecObject.test_save._test_save_args` | function | (self2, context, instance_uuid, changes) | private | `changes` (src/nova/tests/unit/objects/test_request_spec.py:L945) | — | `src/nova/tests/unit/objects/test_request_spec.py:L941–L945` |
| `_TestRequestSpecObject.test_destroy` | method | (self, destroy_in_db) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_request_spec.py:L952–L957` |
| `_TestRequestSpecObject.test_destroy_bulk` | method | (self, destroy_bulk_in_db) | public | not declared | 2/11 | `src/nova/tests/unit/objects/test_request_spec.py:L960–L970` |
| `_TestRequestSpecObject.test_reset_forced_destinations` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_request_spec.py:L972–L982` |
| `_TestRequestSpecObject.test_compat_requested_destination` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_request_spec.py:L984–L995` |
| `_TestRequestSpecObject.test_compat_security_groups` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_request_spec.py:L997–L1007` |
| `_TestRequestSpecObject.test_compat_user_id` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_request_spec.py:L1009–L1017` |
| `_TestRequestSpecObject.test_compat_network_metadata` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_request_spec.py:L1019–L1029` |
| `_TestRequestSpecObject.test_compat_requested_resources` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_request_spec.py:L1031–L1039` |
| `_TestRequestSpecObject.test_compat_requested_networks` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_request_spec.py:L1041–L1050` |
| `_TestRequestSpecObject.test_default_requested_destination` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_request_spec.py:L1052–L1054` |
| `_TestRequestSpecObject.test_security_groups_load` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_request_spec.py:L1056–L1061` |
| `_TestRequestSpecObject.test_network_requests_load` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_request_spec.py:L1063–L1068` |
| `_TestRequestSpecObject.test_requested_networks_load` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_request_spec.py:L1070–L1075` |
| `_TestRequestSpecObject.test_create_raises_on_unchanged_object` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_request_spec.py:L1077–L1080` |
| `_TestRequestSpecObject.test_save_can_be_called_on_unchanged_object` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_request_spec.py:L1082–L1085` |
| `_TestRequestSpecObject.test_get_request_group_mapping_no_request` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_request_spec.py:L1087–L1089` |
| `_TestRequestSpecObject.test_get_request_group_mapping` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/objects/test_request_spec.py:L1091–L1104` |
| `TestRequestSpecObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_request_spec.py:L1107–L1109` |
| `TestRemoteRequestSpecObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_request_spec.py:L1112–L1114` |
| `TestInstancePCIRequestToRequestGroups` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_request_spec.py:L1117–L1296` |
| `TestInstancePCIRequestToRequestGroups.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_request_spec.py:L1118–L1120` |
| `TestInstancePCIRequestToRequestGroups.test_pci_reqs_ignored_if_disabled` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/objects/test_request_spec.py:L1122–L1141` |
| `TestInstancePCIRequestToRequestGroups.test_neutron_based_requests_are_ignored` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/objects/test_request_spec.py:L1143–L1159` |
| `TestInstancePCIRequestToRequestGroups.test_rc_from_product_and_vendor` | method | (self) | public | not declared | 1/40 | `src/nova/tests/unit/objects/test_request_spec.py:L1161–L1202` |
| `TestInstancePCIRequestToRequestGroups.test_multi_device_split_to_multiple_groups` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/objects/test_request_spec.py:L1204–L1239` |
| `TestInstancePCIRequestToRequestGroups.test_with_rc_and_traits_from_the_pci_req_spec` | method | (self) | public | not declared | 2/52 | `src/nova/tests/unit/objects/test_request_spec.py:L1241–L1296` |
| `TestRequestGroupObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_request_spec.py:L1299–L1458` |
| `TestRequestGroupObject.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_request_spec.py:L1300–L1304` |
| `TestRequestGroupObject.test_fields_defaulted_at_create` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_request_spec.py:L1306–L1315` |
| `TestRequestGroupObject.test_from_port_request` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/objects/test_request_spec.py:L1317–L1339` |
| `TestRequestGroupObject.test_from_port_request_without_traits` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/objects/test_request_spec.py:L1341–L1359` |
| `TestRequestGroupObject.test_from_extended_port_request` | method | (self) | public | not declared | 1/50 | `src/nova/tests/unit/objects/test_request_spec.py:L1361–L1417` |
| `TestRequestGroupObject.test_compat_requester_and_provider` | method | (self) | public | not declared | 1/40 | `src/nova/tests/unit/objects/test_request_spec.py:L1419–L1458` |
| `TestDestinationObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_request_spec.py:L1461–L1529` |
| `TestDestinationObject.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_request_spec.py:L1462–L1466` |
| `TestDestinationObject.test_destination_aggregates_default` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_request_spec.py:L1468–L1470` |
| `TestDestinationObject.test_destination_require_aggregates` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_request_spec.py:L1472–L1476` |
| `TestDestinationObject.test_destination_forbidden_aggregates_default` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_request_spec.py:L1478–L1480` |
| `TestDestinationObject.test_destination_append_forbidden_aggregates` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_request_spec.py:L1482–L1489` |
| `TestDestinationObject.test_obj_make_compatible` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/objects/test_request_spec.py:L1491–L1529` |
| `TestMappingRequestGroupsToProviders` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_request_spec.py:L1532–L2066` |
| `TestMappingRequestGroupsToProviders.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_request_spec.py:L1533–L1535` |
| `TestMappingRequestGroupsToProviders.test_no_groups` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_request_spec.py:L1537–L1546` |
| `TestMappingRequestGroupsToProviders.test_unnumbered_group_not_supported` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_request_spec.py:L1548–L1558` |
| `TestMappingRequestGroupsToProviders.test_forbidden_traits_not_supported` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_request_spec.py:L1560–L1570` |
| `TestMappingRequestGroupsToProviders.test_aggregates_not_supported` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_request_spec.py:L1572–L1582` |
| `TestMappingRequestGroupsToProviders.test_one_group` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/objects/test_request_spec.py:L1584–L1619` |
| `TestMappingRequestGroupsToProviders.test_one_group_no_matching_allocation` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/objects/test_request_spec.py:L1621–L1658` |
| `TestMappingRequestGroupsToProviders.test_one_group_no_matching_trait` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/objects/test_request_spec.py:L1660–L1699` |
| `TestMappingRequestGroupsToProviders.test_two_groups_same_provider` | method | (self) | public | not declared | 1/44 | `src/nova/tests/unit/objects/test_request_spec.py:L1701–L1747` |
| `TestMappingRequestGroupsToProviders.test_two_groups_different_providers` | method | (self) | public | not declared | 1/53 | `src/nova/tests/unit/objects/test_request_spec.py:L1749–L1804` |
| `TestMappingRequestGroupsToProviders.test_two_groups_different_providers_reverse` | method | (self) | public | not declared | 1/51 | `src/nova/tests/unit/objects/test_request_spec.py:L1806–L1862` |
| `TestMappingRequestGroupsToProviders.test_two_groups_different_providers_different_traits` | method | (self) | public | not declared | 1/51 | `src/nova/tests/unit/objects/test_request_spec.py:L1864–L1917` |
| `TestMappingRequestGroupsToProviders.test_three_groups` | method | (self) | public | not declared | 1/76 | `src/nova/tests/unit/objects/test_request_spec.py:L1919–L2005` |
| `TestMappingRequestGroupsToProviders.test_two_groups_matches_but_allocation_leftover` | method | (self, mock_debug) | public | not declared | 1/51 | `src/nova/tests/unit/objects/test_request_spec.py:L2008–L2066` |
| `TestRequestLevelParams` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_request_spec.py:L2069–L2117` |
| `TestRequestLevelParams.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_request_spec.py:L2070–L2074` |
| `TestRequestLevelParams.test_obj_make_compatible` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/objects/test_request_spec.py:L2076–L2097` |
| `TestRequestLevelParams.test_extend_with` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/objects/test_request_spec.py:L2099–L2117` |

## Dependencies

- `import collections` (src/nova/tests/unit/objects/test_request_spec.py:L14)
- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_request_spec.py:L15)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/objects/test_request_spec.py:L17)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/objects/test_request_spec.py:L18)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/objects/test_request_spec.py:L19)
- `oslo_versionedobjects`: imports `base as ovo_base` (src/nova/tests/unit/objects/test_request_spec.py:L20)
- `nova`: imports `context` (src/nova/tests/unit/objects/test_request_spec.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_request_spec.py:L23)
- `nova.network`: imports `model as network_model` (src/nova/tests/unit/objects/test_request_spec.py:L24)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_request_spec.py:L25)
- `nova.objects`: imports `base` (src/nova/tests/unit/objects/test_request_spec.py:L26)
- `nova.objects`: imports `request_spec` (src/nova/tests/unit/objects/test_request_spec.py:L27)
- `nova`: imports `test` (src/nova/tests/unit/objects/test_request_spec.py:L28)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/objects/test_request_spec.py:L29)
- `nova.tests.unit`: imports `fake_flavor` (src/nova/tests/unit/objects/test_request_spec.py:L30)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/objects/test_request_spec.py:L31)
- `nova.tests.unit`: imports `fake_network_cache_model` (src/nova/tests/unit/objects/test_request_spec.py:L32)
- `nova.tests.unit`: imports `fake_request_spec` (src/nova/tests/unit/objects/test_request_spec.py:L33)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_request_spec.py:L34)

