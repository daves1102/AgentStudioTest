# src/nova/tests/unit/conductor/test_conductor.py

## Overview

This file implements the `test_conductor` module, defining 15 classs, 4 classmethods, 2 constants, 39 functions, 187 methods, 13 variables, 53 imports, 89 side effects, 3 security surface entries.

Lines: total 5525, code 4702, comment 252, blank 571

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L75–L75` |
| `fake_alloc1` | variable | — | exported | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L78–L89` |
| `fake_alloc2` | variable | — | exported | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L90–L101` |
| `fake_alloc3` | variable | — | exported | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L102–L113` |
| `fake_alloc_json1` | variable | — | exported | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L114–L114` |
| `fake_alloc_json2` | variable | — | exported | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L115–L115` |
| `fake_alloc_json3` | variable | — | exported | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L116–L116` |
| `fake_alloc_version` | variable | — | exported | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L117–L117` |
| `fake_selection1` | variable | — | exported | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L118–L120` |
| `fake_selection2` | variable | — | exported | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L121–L123` |
| `fake_selection3` | variable | — | exported | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L124–L126` |
| `fake_host_lists1` | variable | — | exported | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L127–L127` |
| `fake_host_lists2` | variable | — | exported | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L128–L128` |
| `fake_host_lists_alt` | variable | — | exported | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L129–L129` |
| `FakeContext` | class | — | exported | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L132–L137` |
| `FakeContext.elevated` | method | (self) | public | `self._elevated` (src/nova/tests/unit/conductor/test_conductor.py:L137) | 2/4 | `src/nova/tests/unit/conductor/test_conductor.py:L133–L137` |
| `_BaseTestCase` | class | — | unexported | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L140–L152` |
| `_BaseTestCase.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/conductor/test_conductor.py:L141–L152` |
| `ConductorTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L155–L346` |
| `ConductorTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/conductor/test_conductor.py:L158–L161` |
| `ConductorTestCase._test_object_action` | method | (self, is_classmethod, raise_exception) | private | not declared | 2/18 | `src/nova/tests/unit/conductor/test_conductor.py:L163–L193` |
| `ConductorTestCase._test_object_action.TestObject` | class | — | public | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L164–L176` |
| `ConductorTestCase._test_object_action.TestObject.foo` | method | (self, raise_exception=False) | public | `'test'` (src/nova/tests/unit/conductor/test_conductor.py:L169) | — | `src/nova/tests/unit/conductor/test_conductor.py:L165–L169` |
| `ConductorTestCase._test_object_action.TestObject.bar` | method | (cls, context, raise_exception=False) | public | `'test'` (src/nova/tests/unit/conductor/test_conductor.py:L176) | — | `src/nova/tests/unit/conductor/test_conductor.py:L172–L176` |
| `ConductorTestCase.test_object_action` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/conductor/test_conductor.py:L195–L196` |
| `ConductorTestCase.test_object_action_on_raise` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/conductor/test_conductor.py:L198–L200` |
| `ConductorTestCase.test_object_class_action` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/conductor/test_conductor.py:L202–L203` |
| `ConductorTestCase.test_object_class_action_on_raise` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/conductor/test_conductor.py:L205–L207` |
| `ConductorTestCase.test_object_action_copies_object` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/conductor/test_conductor.py:L209–L228` |
| `ConductorTestCase.test_object_action_copies_object.TestObject` | class | — | public | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L210–L215` |
| `ConductorTestCase.test_object_action_copies_object.TestObject.touch_dict` | method | (self) | public | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L213–L215` |
| `ConductorTestCase.test_object_class_action_versions` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/conductor/test_conductor.py:L230–L251` |
| `ConductorTestCase.test_object_class_action_versions.TestObject` | class | — | public | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L232–L237` |
| `ConductorTestCase.test_object_class_action_versions.TestObject.foo` | method | (cls, context) | public | `cls()` (src/nova/tests/unit/conductor/test_conductor.py:L237) | — | `src/nova/tests/unit/conductor/test_conductor.py:L236–L237` |
| `ConductorTestCase.test_object_class_action_versions_old_object` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/conductor/test_conductor.py:L253–L277` |
| `ConductorTestCase.test_object_class_action_versions_old_object.TestObject` | class | — | public | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L257–L262` |
| `ConductorTestCase.test_object_class_action_versions_old_object.TestObject.foo` | method | (cls, context) | public | `cls()` (src/nova/tests/unit/conductor/test_conductor.py:L262) | — | `src/nova/tests/unit/conductor/test_conductor.py:L261–L262` |
| `ConductorTestCase.test_object_class_action_versions_major_version_diff` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/conductor/test_conductor.py:L279–L300` |
| `ConductorTestCase.test_object_class_action_versions_major_version_diff.TestObject` | class | — | public | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L281–L286` |
| `ConductorTestCase.test_object_class_action_versions_major_version_diff.TestObject.foo` | method | (cls, context) | public | `cls()` (src/nova/tests/unit/conductor/test_conductor.py:L286) | — | `src/nova/tests/unit/conductor/test_conductor.py:L285–L286` |
| `ConductorTestCase.test_reset` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/conductor/test_conductor.py:L302–L306` |
| `ConductorTestCase.test_graceful_shutdown` | method | (self, mock_wait, mock_shutdown_executors) | public | not declared | 1/8 | `src/nova/tests/unit/conductor/test_conductor.py:L311–L319` |
| `ConductorTestCase.test_graceful_shutdown_no_negative_wait_time` | method | (self, mock_wait, mock_shutdown_executors) | public | not declared | 1/5 | `src/nova/tests/unit/conductor/test_conductor.py:L324–L328` |
| `ConductorTestCase.test_graceful_shutdown_handles_shutdown_all_executors_exception` | method | (self, mock_wait, mock_shutdown_executors) | public | not declared | 1/5 | `src/nova/tests/unit/conductor/test_conductor.py:L333–L338` |
| `ConductorTestCase.test_provider_fw_rule_get_all` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/conductor/test_conductor.py:L340–L342` |
| `ConductorTestCase.test_conductor_host` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/conductor/test_conductor.py:L344–L346` |
| `ConductorRPCAPITestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L349–L357` |
| `ConductorRPCAPITestCase.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/conductor/test_conductor.py:L352–L357` |
| `ConductorAPITestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L360–L385` |
| `ConductorAPITestCase.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/conductor/test_conductor.py:L363–L368` |
| `ConductorAPITestCase.test_wait_until_ready` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/conductor/test_conductor.py:L370–L385` |
| `ConductorAPITestCase.test_wait_until_ready.fake_ping` | function | (self, context, message, timeout) | public | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L374–L378` |
| `_BaseTaskTestCase` | class | — | unexported | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L388–L2276` |
| `_BaseTaskTestCase.setUp` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/conductor/test_conductor.py:L389–L407` |
| `_BaseTaskTestCase._prepare_rebuild_args` | method | (self, update_args=None) | private | `rebuild_args, compute_rebuild_args` (src/nova/tests/unit/conductor/test_conductor.py:L436) | 5/25 | `src/nova/tests/unit/conductor/test_conductor.py:L409–L436` |
| `_BaseTaskTestCase._test_cold_migrate` | method | (self, spec_from_components, get_image_from_metadata, migration_task_execute, spec_save, get_im, clean_shutdown=True) | private | not declared | 2/29 | `src/nova/tests/unit/conductor/test_conductor.py:L443–L477` |
| `_BaseTaskTestCase.test_cold_migrate` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/conductor/test_conductor.py:L479–L480` |
| `_BaseTaskTestCase.test_cold_migrate_forced_shutdown` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/conductor/test_conductor.py:L482–L483` |
| `_BaseTaskTestCase.test_build_instances` | method | (self, mock_fp, mock_save, mock_getaz, mock_buildreq, mock_schedule, mock_bdm, mock_build, mock_create_bind_arqs, mock_get_cyborg) | public | not declared | 2/84 | `src/nova/tests/unit/conductor/test_conductor.py:L497–L591` |
| `_BaseTaskTestCase.test_build_instances_arq_failure` | method | (self, mock_fp, mock_save, mock_getaz, mock_buildreq, mock_schedule, mock_bdm, mock_build, mock_create_bind_arqs, mock_cleanup, mock_get_cyborg) | public | not declared | 3/52 | `src/nova/tests/unit/conductor/test_conductor.py:L607–L669` |
| `_BaseTaskTestCase.test_build_instances_scheduler_failure` | method | (self, dest_build_req_mock, cleanup_mock, sd_mock, state_mock, sig_mock, bs_mock) | public | not declared | 3/41 | `src/nova/tests/unit/conductor/test_conductor.py:L679–L724` |
| `_BaseTaskTestCase.test_build_instances_retry_exceeded` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/conductor/test_conductor.py:L726–L765` |
| `_BaseTaskTestCase.test_build_instances_retry_exceeded._test` | function | (populate_retry, build_spec, set_vm_state_and_notify, cleanup_mock) | private | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L737–L763` |
| `_BaseTaskTestCase.test_build_instances_scheduler_group_failure` | method | (self, cleanup_mock, state_mock, sig_mock, bs_mock) | public | not declared | 3/33 | `src/nova/tests/unit/conductor/test_conductor.py:L773–L810` |
| `_BaseTaskTestCase.test_build_instances_no_instance_mapping` | method | (self, _mock_set_state, mock_select_dests, mock_get_by_host, mock_get_inst_map_by_uuid, _mock_save, _mock_buildreq) | public | not declared | 2/25 | `src/nova/tests/unit/conductor/test_conductor.py:L820–L849` |
| `_BaseTaskTestCase.test_build_instances_exhaust_host_list` | method | (self, _mock_save, mock_notify) | public | not declared | 1/22 | `src/nova/tests/unit/conductor/test_conductor.py:L853–L881` |
| `_BaseTaskTestCase.test_build_instances_logs_selected_and_alts` | method | (self, _mock_save, mock_claim, mock_debug, mock_destroy) | public | not declared | 2/22 | `src/nova/tests/unit/conductor/test_conductor.py:L888–L914` |
| `_BaseTaskTestCase.test_build_instances_no_host_mapping` | method | (self, _mock_set_state, mock_select_dests, mock_get_by_host, mock_get_inst_map_by_uuid, _mock_save, mock_buildreq) | public | not declared | 5/31 | `src/nova/tests/unit/conductor/test_conductor.py:L924–L960` |
| `_BaseTaskTestCase.test_build_instances_update_instance_mapping` | method | (self, _mock_set_state, mock_select_dests, mock_get_by_host, mock_get_inst_map_by_uuid, _mock_save, _mock_buildreq) | public | not declared | 5/36 | `src/nova/tests/unit/conductor/test_conductor.py:L969–L1011` |
| `_BaseTaskTestCase.test_build_instances_destroy_build_request` | method | (self, mock_select_dests, mock_build_req_get) | public | not declared | 4/18 | `src/nova/tests/unit/conductor/test_conductor.py:L1018–L1053` |
| `_BaseTaskTestCase.test_build_instances_destroy_build_request.do_test` | function | — | public | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L1036–L1048` |
| `_BaseTaskTestCase.test_build_instances_reschedule_ignores_build_request` | method | (self, mock_select_dests) | public | not declared | 1/15 | `src/nova/tests/unit/conductor/test_conductor.py:L1059–L1118` |
| `_BaseTaskTestCase.test_build_instances_reschedule_ignores_build_request.do_test` | function | (mock_destroy_build_req, mock_pop_inst_map, mock_build_and_run) | public | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L1080–L1116` |
| `_BaseTaskTestCase.test_build_instances_reschedule_recalculates_provider_mapping` | method | (self, mock_select_dests) | public | not declared | 1/20 | `src/nova/tests/unit/conductor/test_conductor.py:L1124–L1195` |
| `_BaseTaskTestCase.test_build_instances_reschedule_recalculates_provider_mapping.do_test` | function | (mock_destroy_build_req, mock_pop_inst_map, mock_build_and_run, mock_request_spec_from_primitives, mock_claim, mock_rp_mapping) | public | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L1147–L1193` |
| `_BaseTaskTestCase.test_build_instances_reschedule_not_recalc_mapping_if_claim_fails` | method | (self, mock_select_dests) | public | not declared | 1/21 | `src/nova/tests/unit/conductor/test_conductor.py:L1201–L1279` |
| `_BaseTaskTestCase.test_build_instances_reschedule_not_recalc_mapping_if_claim_fails.do_test` | function | (mock_destroy_build_req, mock_pop_inst_map, mock_build_and_run, mock_request_spec_from_primitives, mock_claim, mock_rp_mapping) | public | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L1226–L1277` |
| `_BaseTaskTestCase.test_validate_existing_attachment_ids_with_missing_attachments` | method | (self, mock_bdm_save, mock_attachment_create, mock_attachment_get) | public | not declared | 1/33 | `src/nova/tests/unit/conductor/test_conductor.py:L1284–L1317` |
| `_BaseTaskTestCase.test_validate_existing_attachment_ids_with_attachments_present` | method | (self, mock_bdm_save, mock_attachment_create, mock_attachment_get) | public | not declared | 1/39 | `src/nova/tests/unit/conductor/test_conductor.py:L1322–L1361` |
| `_BaseTaskTestCase.test_unshelve_instance_on_host` | method | (self, mock_start, mock_unshelve) | public | not declared | 1/13 | `src/nova/tests/unit/conductor/test_conductor.py:L1365–L1379` |
| `_BaseTaskTestCase.test_unshelve_offload_instance_on_host_with_request_spec` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/conductor/test_conductor.py:L1381–L1468` |
| `_BaseTaskTestCase.test_unshelve_offload_instance_on_host_with_request_spec.do_test` | function | (reset_forced_destinations, to_filtprops, sched_instances, populate_filter_properties, unshelve_instance, get_by_instance_uuid) | public | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L1420–L1466` |
| `_BaseTaskTestCase.test_unshelve_offloaded_instance_glance_image_not_found` | method | (self, mock_get, add_instance_fault_from_exc) | public | not declared | 1/22 | `src/nova/tests/unit/conductor/test_conductor.py:L1473–L1497` |
| `_BaseTaskTestCase.test_unshelve_offloaded_instance_image_id_is_none` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/conductor/test_conductor.py:L1499–L1523` |
| `_BaseTaskTestCase.test_unshelve_instance_schedule_and_rebuild` | method | (self, mock_im, mock_get, mock_schedule, mock_unshelve) | public | not declared | 1/31 | `src/nova/tests/unit/conductor/test_conductor.py:L1533–L1567` |
| `_BaseTaskTestCase.test_unshelve_instance_schedule_and_rebuild_novalid_host` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/conductor/test_conductor.py:L1569–L1599` |
| `_BaseTaskTestCase.test_unshelve_instance_schedule_and_rebuild_novalid_host.fake_schedule_instances` | function | (context, request_spec, *instances, **kwargs) | public | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L1576–L1578` |
| `_BaseTaskTestCase.test_unshelve_instance_schedule_and_rebuild_messaging_exception` | method | (self, mock_save, mock_get_image, mock_schedule_instances, mock_im) | public | not declared | 1/22 | `src/nova/tests/unit/conductor/test_conductor.py:L1607–L1629` |
| `_BaseTaskTestCase.test_unshelve_instance_schedule_and_rebuild_volume_backed` | method | (self, mock_im, mock_schedule, mock_unshelve) | public | not declared | 1/21 | `src/nova/tests/unit/conductor/test_conductor.py:L1638–L1659` |
| `_BaseTaskTestCase.test_unshelve_instance_resource_request` | method | (self, mock_schedule, mock_get_res_req, mock_fill_provider_mapping) | public | not declared | 1/28 | `src/nova/tests/unit/conductor/test_conductor.py:L1665–L1698` |
| `_BaseTaskTestCase.test_unshelve_instance_resource_request_with_device_profile` | method | (self, mock_schedule, mock_get_res_req, mock_fill_provider_mapping, mock_get_arq, mock_get_dp) | public | not declared | 1/33 | `src/nova/tests/unit/conductor/test_conductor.py:L1707–L1746` |
| `_BaseTaskTestCase.test_unshelve_instance_resource_request_with_arq_bind_fail` | method | (self, mock_schedule, mock_get_res_req, mock_fill_provider_mapping, mock_get_arqs, mock_get_dp, mock_del_arqs) | public | not declared | 1/28 | `src/nova/tests/unit/conductor/test_conductor.py:L1756–L1785` |
| `_BaseTaskTestCase.test_rebuild_instance` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/conductor/test_conductor.py:L1787–L1810` |
| `_BaseTaskTestCase.test_rebuild_instance_with_scheduler` | method | (self, mock_notify) | public | not declared | 1/42 | `src/nova/tests/unit/conductor/test_conductor.py:L1813–L1854` |
| `_BaseTaskTestCase.test_rebuild_instance_with_device_profile` | method | (self, mock_notify, mock_get_arqs) | public | not declared | 1/47 | `src/nova/tests/unit/conductor/test_conductor.py:L1859–L1905` |
| `_BaseTaskTestCase.test_rebuild_instance_with_scheduler_no_host` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/conductor/test_conductor.py:L1907–L1935` |
| `_BaseTaskTestCase.test_rebuild_instance_with_scheduler_group_failure` | method | (self, state_mock, select_dest_mock, sig_mock, rebuild_mock) | public | not declared | 1/31 | `src/nova/tests/unit/conductor/test_conductor.py:L1944–L1982` |
| `_BaseTaskTestCase.test_rebuild_instance_fill_provider_mapping_raises` | method | (self) | public | not declared | 1/33 | `src/nova/tests/unit/conductor/test_conductor.py:L1984–L2018` |
| `_BaseTaskTestCase.test_rebuild_instance_evacuate_migration_record` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/conductor/test_conductor.py:L2020–L2045` |
| `_BaseTaskTestCase.test_evacuate_instance_with_request_spec` | method | (self, mock_notify) | public | not declared | 1/53 | `src/nova/tests/unit/conductor/test_conductor.py:L2048–L2103` |
| `_BaseTaskTestCase.test_evacuate_instance_with_request_spec_device_profile` | method | (self, mock_notify, mock_get_dp, mock_get_arqs, mock_del_arqs) | public | not declared | 1/62 | `src/nova/tests/unit/conductor/test_conductor.py:L2111–L2175` |
| `_BaseTaskTestCase.test_evacuate_instance_with_request_spec_arq_bind_fail` | method | (self, mock_notify, mock_get_dp, mock_get_arqs, mock_del_arqs_instance, mock_del_arqs) | public | not declared | 1/62 | `src/nova/tests/unit/conductor/test_conductor.py:L2184–L2248` |
| `_BaseTaskTestCase.test_confirm_snapshot_based_resize` | method | (self, mock_execute) | public | not declared | 1/9 | `src/nova/tests/unit/conductor/test_conductor.py:L2252–L2260` |
| `_BaseTaskTestCase.test_revert_snapshot_based_resize` | method | (self, mock_execute, mock_er) | public | not declared | 1/12 | `src/nova/tests/unit/conductor/test_conductor.py:L2265–L2276` |
| `ConductorTaskTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L2279–L4964` |
| `ConductorTaskTestCase.NUMBER_OF_CELLS` | constant | — | public | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L2282–L2282` |
| `ConductorTaskTestCase.setUp` | method | (self) | public | not declared | 1/42 | `src/nova/tests/unit/conductor/test_conductor.py:L2284–L2326` |
| `ConductorTaskTestCase.test_create_bind_arqs_no_device_profile` | method | (self, mock_bind_arqs) | public | not declared | 1/8 | `src/nova/tests/unit/conductor/test_conductor.py:L2329–L2338` |
| `ConductorTaskTestCase.test_create_bind_arqs` | method | (self, mock_create) | public | not declared | 1/19 | `src/nova/tests/unit/conductor/test_conductor.py:L2342–L2365` |
| `ConductorTaskTestCase.test_create_bind_arqs_device_profile_arq_get_fail` | method | (self, mock_create) | public | not declared | 1/20 | `src/nova/tests/unit/conductor/test_conductor.py:L2368–L2391` |
| `ConductorTaskTestCase.test_create_arq_for_port` | method | (self, mock_create_arq, mock_port_get, mock_neutron) | public | not declared | 1/28 | `src/nova/tests/unit/conductor/test_conductor.py:L2396–L2427` |
| `ConductorTaskTestCase.test_create_bind_arqs_for_port_multi_devices` | method | (self, mock_port_get, mock_create) | public | not declared | 1/21 | `src/nova/tests/unit/conductor/test_conductor.py:L2431–L2455` |
| `ConductorTaskTestCase._do_schedule_and_build_instances_test` | method | (self, params, select_destinations, build_and_run_instance, get_az, host_list=None) | private | `instance_uuid` (src/nova/tests/unit/conductor/test_conductor.py:L2493) | 2/25 | `src/nova/tests/unit/conductor/test_conductor.py:L2460–L2493` |
| `ConductorTaskTestCase._do_schedule_and_build_instances_test._build_and_run_instance` | function | (ctxt, *args, **kwargs) | private | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L2469–L2474` |
| `ConductorTaskTestCase.test_schedule_and_build_instances` | method | (self, mock_notify) | public | not declared | 3/17 | `src/nova/tests/unit/conductor/test_conductor.py:L2496–L2528` |
| `ConductorTaskTestCase.test_schedule_and_build_instances.fake_notify` | function | (ctxt, instance, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L2503–L2507` |
| `ConductorTaskTestCase.test_schedule_and_build_instances_no_tags_provided` | method | (self) | public | not declared | 3/16 | `src/nova/tests/unit/conductor/test_conductor.py:L2530–L2549` |
| `ConductorTaskTestCase.test_schedule_and_build_multiple_instances` | method | (self, mock_get_az, get_hostmapping, select_destinations, build_and_run_instance) | public | not declared | 2/31 | `src/nova/tests/unit/conductor/test_conductor.py:L2556–L2613` |
| `ConductorTaskTestCase.test_schedule_and_build_multiple_instances._build_and_run_instance` | function | (ctxt, *args, **kwargs) | private | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L2596–L2604` |
| `ConductorTaskTestCase.test_schedule_and_build_multiple_cells` | method | (self, get_hostmapping, select_destinations, build_and_run_instance) | public | not declared | 1/26 | `src/nova/tests/unit/conductor/test_conductor.py:L2618–L2660` |
| `ConductorTaskTestCase.test_schedule_and_build_multiple_cells._build_and_run_instance` | function | (ctxt, *args, **kwargs) | private | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L2650–L2655` |
| `ConductorTaskTestCase.test_schedule_and_build_scheduler_failure` | method | (self, select_destinations, mock_notify) | public | not declared | 2/20 | `src/nova/tests/unit/conductor/test_conductor.py:L2664–L2684` |
| `ConductorTaskTestCase.test_schedule_and_build_delete_during_scheduling` | method | (self, bury, br_destroy, select_destinations, build_and_run, legacy_notify, notify, taglist_create, taglist_destroy) | public | not declared | 1/27 | `src/nova/tests/unit/conductor/test_conductor.py:L2694–L2723` |
| `ConductorTaskTestCase.test_schedule_and_build_delete_during_scheduling_host_changed` | method | (self, bury, br_destroy, select_destinations, build_and_run, legacy_notify, instance_destroy, notify) | public | not declared | 1/22 | `src/nova/tests/unit/conductor/test_conductor.py:L2732–L2756` |
| `ConductorTaskTestCase.test_schedule_and_build_delete_during_scheduling_instance_not_found` | method | (self, bury, br_destroy, select_destinations, build_and_run, legacy_notify, instance_destroy, notify) | public | not declared | 1/21 | `src/nova/tests/unit/conductor/test_conductor.py:L2765–L2787` |
| `ConductorTaskTestCase.test_schedule_and_build_delete_before_scheduling` | method | (self, inst_create, bury, br_destroy, br_get_by_inst, select_destinations, build_and_run) | public | not declared | 1/17 | `src/nova/tests/unit/conductor/test_conductor.py:L2795–L2819` |
| `ConductorTaskTestCase.test_schedule_and_build_unmapped_host_ends_up_in_cell0` | method | (self, bury, br_destroy, select_dest, build_and_run) | public | not declared | 1/11 | `src/nova/tests/unit/conductor/test_conductor.py:L2825–L2848` |
| `ConductorTaskTestCase.test_schedule_and_build_unmapped_host_ends_up_in_cell0._fake_bury` | function | (ctxt, request_spec, exc, build_requests=None, instances=None, block_device_mapping=None, tags=None) | private | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L2830–L2842` |
| `ConductorTaskTestCase.test_schedule_and_build_over_quota_during_recheck` | method | (self, mock_select, mock_check, mock_notify) | public | not declared | 2/45 | `src/nova/tests/unit/conductor/test_conductor.py:L2853–L2919` |
| `ConductorTaskTestCase.test_schedule_and_build_over_quota_during_recheck.fake_save` | function | (inst, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L2868–L2873` |
| `ConductorTaskTestCase.test_schedule_and_build_over_quota_during_recheck.request_spec_get_all` | function | (context) | public | `context.session.query(api_models.RequestSpec).all()` (src/nova/tests/unit/conductor/test_conductor.py:L2907) | — | `src/nova/tests/unit/conductor/test_conductor.py:L2906–L2907` |
| `ConductorTaskTestCase.test_schedule_and_build_over_quota_during_recheck_ul` | method | (self, mock_select, mock_notify, mock_enforce) | public | not declared | 2/42 | `src/nova/tests/unit/conductor/test_conductor.py:L2924–L2987` |
| `ConductorTaskTestCase.test_schedule_and_build_over_quota_during_recheck_ul.fake_save` | function | (inst, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L2939–L2944` |
| `ConductorTaskTestCase.test_schedule_and_build_over_quota_during_recheck_ul.request_spec_get_all` | function | (context) | public | `context.session.query(api_models.RequestSpec).all()` (src/nova/tests/unit/conductor/test_conductor.py:L2975) | — | `src/nova/tests/unit/conductor/test_conductor.py:L2974–L2975` |
| `ConductorTaskTestCase.test_schedule_and_build_no_quota_recheck` | method | (self, mock_select, mock_check, mock_build) | public | not declared | 1/8 | `src/nova/tests/unit/conductor/test_conductor.py:L2992–L3005` |
| `ConductorTaskTestCase._test_unshelve_over_quota_during_recheck` | method | (self, mock_select, mock_unshelve) | private | `instance, req_spec` (src/nova/tests/unit/conductor/test_conductor.py:L3039) | 1/21 | `src/nova/tests/unit/conductor/test_conductor.py:L3010–L3039` |
| `ConductorTaskTestCase.test_unshelve_over_quota_during_recheck_placement` | method | (self, mock_check) | public | not declared | 1/13 | `src/nova/tests/unit/conductor/test_conductor.py:L3042–L3060` |
| `ConductorTaskTestCase.test_unshelve_over_quota_during_recheck_ul` | method | (self, mock_enforce) | public | not declared | 1/7 | `src/nova/tests/unit/conductor/test_conductor.py:L3064–L3076` |
| `ConductorTaskTestCase.test_unshelve_no_quota_recheck` | method | (self, mock_select, mock_check, mock_enforce, mock_unshelve) | public | not declared | 1/19 | `src/nova/tests/unit/conductor/test_conductor.py:L3083–L3116` |
| `ConductorTaskTestCase.test_unshelve_quota_recheck_disabled` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/conductor/test_conductor.py:L3118–L3121` |
| `ConductorTaskTestCase.test_unshelve_no_quota_recheck_disabled_placement` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/conductor/test_conductor.py:L3123–L3125` |
| `ConductorTaskTestCase.test_unshelve_no_quota_recheck_disabled_ul` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/conductor/test_conductor.py:L3127–L3129` |
| `ConductorTaskTestCase.test_schedule_and_build_instances_fill_request_spec` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/conductor/test_conductor.py:L3131–L3136` |
| `ConductorTaskTestCase.test_schedule_and_build_instances_fill_request_spec_error` | method | (self, mock_fill, mock_cleanup) | public | not declared | 1/7 | `src/nova/tests/unit/conductor/test_conductor.py:L3142–L3149` |
| `ConductorTaskTestCase.test_schedule_and_build_instances_fill_request_spec_noop` | method | (self, mock_map, mock_get_allocs, mock_traits) | public | not declared | 1/4 | `src/nova/tests/unit/conductor/test_conductor.py:L3159–L3165` |
| `ConductorTaskTestCase.test_schedule_and_build_instances_with_arqs_bind_ok` | method | (self, mock_create_bind_arqs, mock_get_client) | public | not declared | 1/10 | `src/nova/tests/unit/conductor/test_conductor.py:L3170–L3184` |
| `ConductorTaskTestCase.test_schedule_and_build_instances_with_device_profile` | method | (self, mock_get, mock_create_arq, mock_bind_arq) | public | not declared | 1/19 | `src/nova/tests/unit/conductor/test_conductor.py:L3192–L3212` |
| `ConductorTaskTestCase.test_schedule_and_build_instances_with_arqs_bind_exception` | method | (self, mock_create_bind_arqs, mock_cleanup) | public | not declared | 2/13 | `src/nova/tests/unit/conductor/test_conductor.py:L3218–L3233` |
| `ConductorTaskTestCase.test_create_and_bind_arq_for_instance` | method | (self, mock_create_bind_arqs, mock_client, mock_request_mappings) | public | not declared | 1/13 | `src/nova/tests/unit/conductor/test_conductor.py:L3239–L3253` |
| `ConductorTaskTestCase.test_create_and_bind_arq_for_instance_from_extra_spec` | method | (self, mock_create_bind_arqs, mock_request_mappings, mock_bind_arqs) | public | not declared | 1/28 | `src/nova/tests/unit/conductor/test_conductor.py:L3259–L3290` |
| `ConductorTaskTestCase.test_create_and_bind_arq_for_instance_request_net` | method | (self, mock_create_bind_arqs, mock_request_mappings, mock_create_arqs_for_port, mock_bind_arqs) | public | not declared | 1/32 | `src/nova/tests/unit/conductor/test_conductor.py:L3298–L3332` |
| `ConductorTaskTestCase.test_create_and_bind_arq_for_instance_both` | method | (self, mock_create_bind_arqs, mock_request_mappings, mock_create_arqs_for_port, mock_bind_arqs) | public | not declared | 1/40 | `src/nova/tests/unit/conductor/test_conductor.py:L3340–L3384` |
| `ConductorTaskTestCase.test_map_instance_to_cell_already_mapped` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/conductor/test_conductor.py:L3386–L3405` |
| `ConductorTaskTestCase.test_cleanup_build_artifacts` | method | (self, inst_map_get) | public | not declared | 1/41 | `src/nova/tests/unit/conductor/test_conductor.py:L3408–L3459` |
| `ConductorTaskTestCase.test_cleanup_build_artifacts.fake_create_block_device_mapping` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L3424–L3425` |
| `ConductorTaskTestCase.test_cleanup_build_artifacts.fake_create_tags` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L3427–L3428` |
| `ConductorTaskTestCase.test_bury_in_cell0_no_cell0` | method | (self, mock_cm_get) | public | not declared | 1/5 | `src/nova/tests/unit/conductor/test_conductor.py:L3462–L3468` |
| `ConductorTaskTestCase.test_bury_in_cell0` | method | (self, mock_notify) | public | not declared | 4/68 | `src/nova/tests/unit/conductor/test_conductor.py:L3471–L3556` |
| `ConductorTaskTestCase.test_bury_in_cell0_with_block_device_mapping` | method | (self, mock_create_bdm, mock_get_cell, mock_notify) | public | not declared | 2/22 | `src/nova/tests/unit/conductor/test_conductor.py:L3562–L3589` |
| `ConductorTaskTestCase.test_bury_in_cell0_with_tags` | method | (self, mock_create_tags, mock_get_cell, mock_notify) | public | not declared | 1/14 | `src/nova/tests/unit/conductor/test_conductor.py:L3595–L3611` |
| `ConductorTaskTestCase.test_bury_in_cell0_already_mapped` | method | (self, mock_inst_create) | public | not declared | 1/15 | `src/nova/tests/unit/conductor/test_conductor.py:L3614–L3637` |
| `ConductorTaskTestCase.test_reset` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/conductor/test_conductor.py:L3639–L3645` |
| `ConductorTaskTestCase.test_migrate_server_fails_with_rebuild` | method | (self, get_im) | public | not declared | 1/7 | `src/nova/tests/unit/conductor/test_conductor.py:L3648–L3655` |
| `ConductorTaskTestCase.test_migrate_server_fails_with_flavor` | method | (self, get_im) | public | not declared | 1/8 | `src/nova/tests/unit/conductor/test_conductor.py:L3658–L3665` |
| `ConductorTaskTestCase._build_request_spec` | method | (self, instance) | private | `{ 'instance_properties': { 'uuid': instance['uuid'], }, }` (src/nova/tests/unit/conductor/test_conductor.py:L3668) | 1/5 | `src/nova/tests/unit/conductor/test_conductor.py:L3667–L3671` |
| `ConductorTaskTestCase._test_migrate_server_deals_with_expected_exceptions` | method | (self, ex, mock_execute, mock_set, get_im) | private | not declared | 1/21 | `src/nova/tests/unit/conductor/test_conductor.py:L3676–L3698` |
| `ConductorTaskTestCase.test_migrate_server_deals_with_invalidcpuinfo_exception` | method | (self, get_im, mock_execute, mock_set) | public | not declared | 1/22 | `src/nova/tests/unit/conductor/test_conductor.py:L3703–L3726` |
| `ConductorTaskTestCase.test_migrate_server_deals_with_expected_exception` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/conductor/test_conductor.py:L3728–L3744` |
| `ConductorTaskTestCase.test_migrate_server_deals_with_unexpected_exceptions` | method | (self, mock_live_migrate, mock_set_state, get_im) | public | not declared | 1/24 | `src/nova/tests/unit/conductor/test_conductor.py:L3749–L3772` |
| `ConductorTaskTestCase.test_set_vm_state_and_notify` | method | (self, mock_set) | public | not declared | 1/6 | `src/nova/tests/unit/conductor/test_conductor.py:L3775–L3780` |
| `ConductorTaskTestCase.test_cold_migrate_no_valid_host_back_in_active_state` | method | (self, _preallocate_migration, rollback_mock, notify_mock, select_dest_mock, metadata_mock, sig_mock, spec_fc_mock, im_mock) | public | not declared | 1/38 | `src/nova/tests/unit/conductor/test_conductor.py:L3791–L3830` |
| `ConductorTaskTestCase.test_cold_migrate_no_valid_host_back_in_stopped_state` | method | (self, _preallocate_migration, rollback_mock, notify_mock, select_dest_mock, metadata_mock, spec_fc_mock, sig_mock, im_mock) | public | not declared | 1/38 | `src/nova/tests/unit/conductor/test_conductor.py:L3841–L3881` |
| `ConductorTaskTestCase.test_cold_migrate_no_valid_host_error_msg` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/conductor/test_conductor.py:L3883–L3908` |
| `ConductorTaskTestCase.test_cold_migrate_no_valid_host_in_group` | method | (self, spec_fc_mock, set_vm_mock, task_rollback_mock, task_exec_mock, image_mock) | public | not declared | 1/36 | `src/nova/tests/unit/conductor/test_conductor.py:L3916–L3954` |
| `ConductorTaskTestCase.test_cold_migrate_exception_host_in_error_state_and_raise` | method | (self, _preallocate_migration, prep_resize_mock, rollback_mock, notify_mock, select_dest_mock, metadata_mock, spec_fc_mock, sig_mock, im_mock, check_cell_mock) | public | not declared | 1/53 | `src/nova/tests/unit/conductor/test_conductor.py:L3969–L4027` |
| `ConductorTaskTestCase.test_cold_migrate_exception_instance_refresh_not_found` | method | (self, mock_refresh, mock_execute) | public | not declared | 1/18 | `src/nova/tests/unit/conductor/test_conductor.py:L4033–L4054` |
| `ConductorTaskTestCase.test_cold_migrate_updates_flavor_if_existing_reqspec` | method | (self, image_mock, task_exec_mock, spec_save_mock) | public | not declared | 1/23 | `src/nova/tests/unit/conductor/test_conductor.py:L4059–L4087` |
| `ConductorTaskTestCase.test_cold_migrate_reschedule_legacy_request_spec` | method | (self, spec_save_mock, from_primitives_mock) | public | not declared | 1/20 | `src/nova/tests/unit/conductor/test_conductor.py:L4091–L4117` |
| `ConductorTaskTestCase.test_resize_no_valid_host_error_msg` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/conductor/test_conductor.py:L4119–L4148` |
| `ConductorTaskTestCase.test_build_instances_instance_not_found` | method | (self, fp, _mock_buildreq, mock_save, mock_build_rspec, mock_schedule, mock_build_run) | public | not declared | 3/50 | `src/nova/tests/unit/conductor/test_conductor.py:L4157–L4214` |
| `ConductorTaskTestCase.test_build_instances_info_cache_not_found` | method | (self, build_request_spec, setup_instance_group) | public | not declared | 2/53 | `src/nova/tests/unit/conductor/test_conductor.py:L4218–L4274` |
| `ConductorTaskTestCase.test_build_instances_max_retries_exceeded` | method | (self, mock_save, mock_notify) | public | not declared | 2/26 | `src/nova/tests/unit/conductor/test_conductor.py:L4278–L4307` |
| `ConductorTaskTestCase.test_build_instances_reschedule_no_valid_host` | method | (self, mock_save, mock_notify) | public | not declared | 2/28 | `src/nova/tests/unit/conductor/test_conductor.py:L4311–L4343` |
| `ConductorTaskTestCase.test_build_reschedule_get_az_error` | method | (self, mock_save, mock_cleanup, mock_get_az, mock_fill, mock_claim) | public | not declared | 1/24 | `src/nova/tests/unit/conductor/test_conductor.py:L4352–L4387` |
| `ConductorTaskTestCase.test_cleanup_arqs_on_reschedule` | method | (self, mock_del_arqs, mock_set_vm, mock_clean_net) | public | not declared | 1/8 | `src/nova/tests/unit/conductor/test_conductor.py:L4394–L4401` |
| `ConductorTaskTestCase.test_cleanup_arqs_on_reschedule_by_uuid` | method | (self, mock_del_arqs, mock_set_vm, mock_clean_net) | public | not declared | 1/11 | `src/nova/tests/unit/conductor/test_conductor.py:L4408–L4418` |
| `ConductorTaskTestCase.test_cleanup_allocated_networks_none_requested` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/conductor/test_conductor.py:L4420–L4436` |
| `ConductorTaskTestCase.test_cleanup_allocated_networks_auto_or_none_provided` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/conductor/test_conductor.py:L4438–L4456` |
| `ConductorTaskTestCase.test_allocate_for_evacuate_dest_host_source_node_not_found_no_reqspec` | method | (self, get_compute_node) | public | not declared | 1/15 | `src/nova/tests/unit/conductor/test_conductor.py:L4460–L4477` |
| `ConductorTaskTestCase.test_allocate_for_evacuate_dest_host_dest_node_not_found_reqspec` | method | (self, get_dest_node, get_source_node) | public | not declared | 1/18 | `src/nova/tests/unit/conductor/test_conductor.py:L4484–L4504` |
| `ConductorTaskTestCase.test_allocate_for_evacuate_dest_host_claim_fails` | method | (self, get_dest_node, get_source_node) | public | not declared | 1/28 | `src/nova/tests/unit/conductor/test_conductor.py:L4511–L4539` |
| `ConductorTaskTestCase.test_live_migrate_instance` | method | (self, mock_execute) | public | not declared | 1/16 | `src/nova/tests/unit/conductor/test_conductor.py:L4542–L4573` |
| `ConductorTaskTestCase.test_live_migrate_instance.fake_event_start` | function | (_cls, ctxt, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L4561–L4565` |
| `ConductorTaskTestCase.test_create_volume_bdm_call_reserve_dev_name` | method | (self, mock_reserve, mock_bdm_save) | public | not declared | 1/24 | `src/nova/tests/unit/conductor/test_conductor.py:L4577–L4600` |
| `ConductorTaskTestCase.test_attach_volume_no_device_new_flow` | method | (self) | public | not declared | 1/44 | `src/nova/tests/unit/conductor/test_conductor.py:L4602–L4648` |
| `ConductorTaskTestCase.test_attach_volume_new_flow` | method | (self) | public | not declared | 1/44 | `src/nova/tests/unit/conductor/test_conductor.py:L4650–L4695` |
| `ConductorTaskTestCase.test_attach_volume_attachment_create_fails` | method | (self, mock_attach, mock_get_by_volume, mock_reserve) | public | not declared | 1/25 | `src/nova/tests/unit/conductor/test_conductor.py:L4700–L4727` |
| `ConductorTaskTestCase.test_attach_volume_reserve_bdm_timeout` | method | (self, mock_get_by_volume, mock_get_by_volume_and_instance, mock_reserve) | public | not declared | 1/21 | `src/nova/tests/unit/conductor/test_conductor.py:L4733–L4758` |
| `ConductorTaskTestCase.test_attach_volume_reserve_bdm_timeout_concurrent_request` | method | (self, mock_get_by_volume, mock_get_by_volume_and_instance, mock_reserve) | public | not declared | 1/21 | `src/nova/tests/unit/conductor/test_conductor.py:L4764–L4799` |
| `ConductorTaskTestCase.test_attach_volume_sets_task_state` | method | (self) | public | not declared | 1/39 | `src/nova/tests/unit/conductor/test_conductor.py:L4801–L4859` |
| `ConductorTaskTestCase.test_attach_volume_sets_task_state._fake_save` | function | (*args, **kwargs) | private | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L4825–L4826` |
| `ConductorTaskTestCase.test_attach_volume_sets_task_state._fake_attach` | function | (context, inst, volume_bdm) | private | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L4828–L4829` |
| `ConductorTaskTestCase.test_attach_volume_rejects_concurrent_request` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/conductor/test_conductor.py:L4861–L4885` |
| `ConductorTaskTestCase.test_attach_volume_resets_task_state_on_timeout` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/conductor/test_conductor.py:L4887–L4927` |
| `ConductorTaskTestCase.test_attach_volume_resets_task_state_on_timeout._fake_save` | function | (*args, **kwargs) | private | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L4901–L4902` |
| `ConductorTaskTestCase.test_tagged_volume_attach_new_flow` | method | (self, mock_attach, mock_get_by_volume, mock_reserve) | public | not declared | 1/30 | `src/nova/tests/unit/conductor/test_conductor.py:L4932–L4964` |
| `ConductorTaskRPCAPITestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L4967–L5370` |
| `ConductorTaskRPCAPITestCase.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/conductor/test_conductor.py:L4971–L4977` |
| `ConductorTaskRPCAPITestCase.test_live_migrate_instance` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/conductor/test_conductor.py:L4979–L5002` |
| `ConductorTaskRPCAPITestCase.test_live_migrate_instance._test` | function | (prepare_mock) | private | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L4990–L5001` |
| `ConductorTaskRPCAPITestCase.test_targets_cell_no_instance_mapping` | method | (self, mock_im) | public | not declared | 1/9 | `src/nova/tests/unit/conductor/test_conductor.py:L5005–L5016` |
| `ConductorTaskRPCAPITestCase.test_targets_cell_no_instance_mapping.test` | function | (self, context, instance) | public | `mock.sentinel.iransofaraway` (src/nova/tests/unit/conductor/test_conductor.py:L5009) | — | `src/nova/tests/unit/conductor/test_conductor.py:L5008–L5009` |
| `ConductorTaskRPCAPITestCase.test_targets_cell_no_api_db_conn_noop` | method | (self, mock_im) | public | not declared | 1/9 | `src/nova/tests/unit/conductor/test_conductor.py:L5020–L5034` |
| `ConductorTaskRPCAPITestCase.test_targets_cell_no_api_db_conn_noop._test` | function | (self, context, instance) | private | `mock.sentinel.iransofaraway` (src/nova/tests/unit/conductor/test_conductor.py:L5028) | — | `src/nova/tests/unit/conductor/test_conductor.py:L5027–L5028` |
| `ConductorTaskRPCAPITestCase.test_targets_cell_no_api_db_conn_reraise` | method | (self, mock_im) | public | not declared | 1/8 | `src/nova/tests/unit/conductor/test_conductor.py:L5038–L5051` |
| `ConductorTaskRPCAPITestCase.test_targets_cell_no_api_db_conn_reraise._test` | function | (self, context, instance) | private | `mock.sentinel.iransofaraway` (src/nova/tests/unit/conductor/test_conductor.py:L5046) | — | `src/nova/tests/unit/conductor/test_conductor.py:L5045–L5046` |
| `ConductorTaskRPCAPITestCase.test_schedule_and_build_instances_with_tags` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/conductor/test_conductor.py:L5053–L5087` |
| `ConductorTaskRPCAPITestCase.test_schedule_and_build_instances_with_tags._test` | function | (prepare_mock, can_send_mock) | private | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L5071–L5086` |
| `ConductorTaskRPCAPITestCase.test_schedule_and_build_instances_with_tags_cannot_send` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/conductor/test_conductor.py:L5089–L5121` |
| `ConductorTaskRPCAPITestCase.test_schedule_and_build_instances_with_tags_cannot_send._test` | function | (prepare_mock, can_send_mock) | private | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L5106–L5120` |
| `ConductorTaskRPCAPITestCase.test_build_instances_with_request_spec_ok` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/conductor/test_conductor.py:L5123–L5151` |
| `ConductorTaskRPCAPITestCase.test_build_instances_with_request_spec_ok._test` | function | (prepare_mock, can_send_mock) | private | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L5134–L5150` |
| `ConductorTaskRPCAPITestCase.test_build_instances_with_request_spec_cannot_send` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/conductor/test_conductor.py:L5153–L5181` |
| `ConductorTaskRPCAPITestCase.test_build_instances_with_request_spec_cannot_send._test` | function | (prepare_mock, can_send_mock) | private | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L5165–L5180` |
| `ConductorTaskRPCAPITestCase.test_cache_images` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/conductor/test_conductor.py:L5183–L5198` |
| `ConductorTaskRPCAPITestCase.test_migrate_server` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/conductor/test_conductor.py:L5200–L5228` |
| `ConductorTaskRPCAPITestCase.test_migrate_server._test` | function | (prepare_mock, can_send_mock) | private | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L5211–L5226` |
| `ConductorTaskRPCAPITestCase.test_migrate_server_cast` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/conductor/test_conductor.py:L5230–L5260` |
| `ConductorTaskRPCAPITestCase.test_migrate_server_cast._test` | function | (prepare_mock, can_send_mock) | private | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L5243–L5258` |
| `ConductorTaskRPCAPITestCase._test_confirm_snapshot_based_resize` | method | (self, do_cast) | private | not declared | 1/8 | `src/nova/tests/unit/conductor/test_conductor.py:L5262–L5282` |
| `ConductorTaskRPCAPITestCase._test_confirm_snapshot_based_resize._test` | function | (prepare_mock, can_send_mock) | private | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L5272–L5281` |
| `ConductorTaskRPCAPITestCase.test_confirm_snapshot_based_resize_cast` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/conductor/test_conductor.py:L5284–L5285` |
| `ConductorTaskRPCAPITestCase.test_confirm_snapshot_based_resize_call` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/conductor/test_conductor.py:L5287–L5288` |
| `ConductorTaskRPCAPITestCase.test_confirm_snapshot_based_resize_old_service` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/conductor/test_conductor.py:L5290–L5297` |
| `ConductorTaskRPCAPITestCase.test_revert_snapshot_based_resize_old_service` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/conductor/test_conductor.py:L5299–L5308` |
| `ConductorTaskRPCAPITestCase.test_evacuate_old_rpc_with_target_state` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/conductor/test_conductor.py:L5310–L5319` |
| `ConductorTaskRPCAPITestCase.test_evacuate_old_rpc_without_target_state` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/conductor/test_conductor.py:L5321–L5333` |
| `ConductorTaskRPCAPITestCase.test_rebuild_instance_volume_backed` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/conductor/test_conductor.py:L5335–L5354` |
| `ConductorTaskRPCAPITestCase.test_rebuild_instance_volume_backed._test` | function | (mock_can_send_ver, prepare_mock) | private | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L5347–L5353` |
| `ConductorTaskRPCAPITestCase.test_rebuild_instance_volume_backed_old_service` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/conductor/test_conductor.py:L5356–L5370` |
| `ConductorTaskAPITestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L5373–L5493` |
| `ConductorTaskAPITestCase.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/conductor/test_conductor.py:L5376–L5382` |
| `ConductorTaskAPITestCase.test_live_migrate` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/conductor/test_conductor.py:L5384–L5396` |
| `ConductorTaskAPITestCase.test_cache_images` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/conductor/test_conductor.py:L5398–L5415` |
| `ConductorTaskAPITestCase.test_cache_images._test` | function | (mock_image, mock_cache) | private | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L5402–L5413` |
| `ConductorTaskAPITestCase.test_cache_images_fail` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/conductor/test_conductor.py:L5417–L5433` |
| `ConductorTaskAPITestCase.test_cache_images_fail._test` | function | (mock_image, mock_cache) | private | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L5421–L5431` |
| `ConductorTaskAPITestCase.test_cache_images_missing` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/conductor/test_conductor.py:L5435–L5449` |
| `ConductorTaskAPITestCase.test_cache_images_missing._test` | function | (mock_image, mock_cache) | private | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L5439–L5447` |
| `ConductorTaskAPITestCase.test_cache_images_failed_compute` | method | (self, mock_service, mock_target, mock_gbh) | public | not declared | 1/26 | `src/nova/tests/unit/conductor/test_conductor.py:L5454–L5493` |
| `ConductorTaskAPITestCase.test_cache_images_failed_compute._test` | function | (mock_cache) | private | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L5477–L5484` |
| `TestConductorTaskManager` | class | — | exported | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L5497–L5525` |
| `TestConductorTaskManager.test_placement_client_startup` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/conductor/test_conductor.py:L5498–L5501` |
| `TestConductorTaskManager.test_placement_client_startup_fatals` | method | (self, exc) | public | not declared | 1/3 | `src/nova/tests/unit/conductor/test_conductor.py:L5506–L5508` |
| `TestConductorTaskManager.test_placement_client_startup_non_fatal` | method | (self, exc) | public | not declared | 1/2 | `src/nova/tests/unit/conductor/test_conductor.py:L5515–L5516` |
| `TestConductorTaskManager._test_placement_client_startup_exception` | method | (self, exc, mock_log) | private | not declared | 2/7 | `src/nova/tests/unit/conductor/test_conductor.py:L5519–L5525` |
| `ConductorTestCase._test_object_action.TestObject.bar` | classmethod | — | public | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L171–L176` |
| `ConductorTestCase.test_object_class_action_versions.TestObject.foo` | classmethod | — | public | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L235–L237` |
| `ConductorTestCase.test_object_class_action_versions_old_object.TestObject.foo` | classmethod | — | public | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L260–L262` |
| `ConductorTestCase.test_object_class_action_versions_major_version_diff.TestObject.foo` | classmethod | — | public | not declared | — | `src/nova/tests/unit/conductor/test_conductor.py:L284–L286` |

## Dependencies

- `import copy` (src/nova/tests/unit/conductor/test_conductor.py:L18)
- `import ddt` (src/nova/tests/unit/conductor/test_conductor.py:L19)
- `unittest`: imports `mock` (src/nova/tests/unit/conductor/test_conductor.py:L20)
- `keystoneauth1`: imports `exceptions as ks_exc` (src/nova/tests/unit/conductor/test_conductor.py:L22)
- `oslo_db`: imports `exception as db_exc` (src/nova/tests/unit/conductor/test_conductor.py:L23)
- `oslo_limit`: imports `exception as limit_exceptions` (src/nova/tests/unit/conductor/test_conductor.py:L24)
- `import oslo_messaging as messaging` (src/nova/tests/unit/conductor/test_conductor.py:L25)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/conductor/test_conductor.py:L26)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/conductor/test_conductor.py:L27)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/conductor/test_conductor.py:L28)
- `oslo_versionedobjects`: imports `exception as ovo_exc` (src/nova/tests/unit/conductor/test_conductor.py:L29)
- `nova.accelerator`: imports `cyborg` (src/nova/tests/unit/conductor/test_conductor.py:L31)
- `nova`: imports `block_device` (src/nova/tests/unit/conductor/test_conductor.py:L32)
- `nova.compute`: imports `flavors` (src/nova/tests/unit/conductor/test_conductor.py:L33)
- `nova.compute`: imports `rpcapi as compute_rpcapi` (src/nova/tests/unit/conductor/test_conductor.py:L34)
- `nova.compute`: imports `task_states` (src/nova/tests/unit/conductor/test_conductor.py:L35)
- `nova.compute`: imports `utils as compute_utils` (src/nova/tests/unit/conductor/test_conductor.py:L36)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/conductor/test_conductor.py:L37)
- `nova.conductor`: imports `api as conductor_api` (src/nova/tests/unit/conductor/test_conductor.py:L38)
- `nova.conductor`: imports `manager as conductor_manager` (src/nova/tests/unit/conductor/test_conductor.py:L39)
- `nova.conductor`: imports `rpcapi as conductor_rpcapi` (src/nova/tests/unit/conductor/test_conductor.py:L40)
- `nova.conductor.tasks`: imports `live_migrate` (src/nova/tests/unit/conductor/test_conductor.py:L41)
- `nova.conductor.tasks`: imports `migrate` (src/nova/tests/unit/conductor/test_conductor.py:L42)
- `nova`: imports `conf` (src/nova/tests/unit/conductor/test_conductor.py:L43)
- `nova`: imports `context` (src/nova/tests/unit/conductor/test_conductor.py:L44)
- `nova.db.api`: imports `api as api_db_api` (src/nova/tests/unit/conductor/test_conductor.py:L45)
- `nova.db.api`: imports `models as api_models` (src/nova/tests/unit/conductor/test_conductor.py:L46)
- `nova.db.main`: imports `api as main_db_api` (src/nova/tests/unit/conductor/test_conductor.py:L47)
- `nova`: imports `exception as exc` (src/nova/tests/unit/conductor/test_conductor.py:L48)
- `nova.image`: imports `glance as image_api` (src/nova/tests/unit/conductor/test_conductor.py:L49)
- `nova.limit`: imports `placement as placement_limit` (src/nova/tests/unit/conductor/test_conductor.py:L50)
- `nova`: imports `objects` (src/nova/tests/unit/conductor/test_conductor.py:L51)
- `nova.objects`: imports `base as obj_base` (src/nova/tests/unit/conductor/test_conductor.py:L52)
- `nova.objects`: imports `block_device as block_device_obj` (src/nova/tests/unit/conductor/test_conductor.py:L53)
- `nova.objects`: imports `fields` (src/nova/tests/unit/conductor/test_conductor.py:L54)
- `nova.objects`: imports `request_spec` (src/nova/tests/unit/conductor/test_conductor.py:L55)
- `nova.scheduler.client`: imports `query` (src/nova/tests/unit/conductor/test_conductor.py:L56)
- `nova.scheduler.client`: imports `report` (src/nova/tests/unit/conductor/test_conductor.py:L57)
- `nova.scheduler`: imports `utils as scheduler_utils` (src/nova/tests/unit/conductor/test_conductor.py:L58)
- `nova`: imports `test` (src/nova/tests/unit/conductor/test_conductor.py:L59)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/conductor/test_conductor.py:L60)
- `nova.tests.fixtures`: imports `cyborg as cyborg_fixture` (src/nova/tests/unit/conductor/test_conductor.py:L61)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/conductor/test_conductor.py:L62)
- `nova.tests.unit.compute`: imports `test_compute` (src/nova/tests/unit/conductor/test_conductor.py:L63)
- `nova.tests.unit`: imports `fake_block_device` (src/nova/tests/unit/conductor/test_conductor.py:L64)
- `nova.tests.unit`: imports `fake_build_request` (src/nova/tests/unit/conductor/test_conductor.py:L65)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/conductor/test_conductor.py:L66)
- `nova.tests.unit`: imports `fake_request_spec` (src/nova/tests/unit/conductor/test_conductor.py:L67)
- `nova.tests.unit`: imports `fake_server_actions` (src/nova/tests/unit/conductor/test_conductor.py:L68)
- `nova.tests.unit`: imports `fake_volume` (src/nova/tests/unit/conductor/test_conductor.py:L69)
- `nova.tests.unit`: imports `utils as test_utils` (src/nova/tests/unit/conductor/test_conductor.py:L70)
- `nova`: imports `utils` (src/nova/tests/unit/conductor/test_conductor.py:L71)
- `nova.volume`: imports `cinder` (src/nova/tests/unit/conductor/test_conductor.py:L72)

## Side Effects

- **network**: @mock.patch.object(scheduler_utils, 'set_vm_state_and_notify') (src/nova/tests/unit/conductor/test_conductor.py:L673)
- **network**: @mock.patch.object(scheduler_utils, 'set_vm_state_and_notify') (src/nova/tests/unit/conductor/test_conductor.py:L734)
- **network**: set_vm_state_and_notify, cleanup_mock): (src/nova/tests/unit/conductor/test_conductor.py:L738)
- **network**: set_vm_state_and_notify.assert_called_once_with( (src/nova/tests/unit/conductor/test_conductor.py:L760)
- **network**: '_set_vm_state_and_notify') (src/nova/tests/unit/conductor/test_conductor.py:L770)
- **network**: '_set_vm_state_and_notify') (src/nova/tests/unit/conductor/test_conductor.py:L819)
- **network**: def test_build_instances_exhaust_host_list(self, _mock_save, mock_notify): (src/nova/tests/unit/conductor/test_conductor.py:L853)
- **network**: mock_notify.assert_called_once_with( (src/nova/tests/unit/conductor/test_conductor.py:L878)
- **network**: '_set_vm_state_and_notify') (src/nova/tests/unit/conductor/test_conductor.py:L923)
- **network**: '_set_vm_state_and_notify') (src/nova/tests/unit/conductor/test_conductor.py:L968)
- **network**: '_set_vm_state_and_notify', new=mock.MagicMock()) (src/nova/tests/unit/conductor/test_conductor.py:L1017)
- **network**: '_set_vm_state_and_notify', new=mock.MagicMock()) (src/nova/tests/unit/conductor/test_conductor.py:L1058)
- **network**: '_set_vm_state_and_notify', new=mock.MagicMock()) (src/nova/tests/unit/conductor/test_conductor.py:L1123)
- **network**: '_set_vm_state_and_notify', new=mock.MagicMock()) (src/nova/tests/unit/conductor/test_conductor.py:L1200)
- **network**: def test_rebuild_instance_with_scheduler(self, mock_notify): (src/nova/tests/unit/conductor/test_conductor.py:L1813)
- **network**: mock_notify.assert_called_once_with( (src/nova/tests/unit/conductor/test_conductor.py:L1852)
- **network**: def test_rebuild_instance_with_device_profile(self, mock_notify, (src/nova/tests/unit/conductor/test_conductor.py:L1859)
- **network**: mock_notify.assert_called_once_with( (src/nova/tests/unit/conductor/test_conductor.py:L1903)
- **network**: mock.patch.object(scheduler_utils, 'set_vm_state_and_notify') (src/nova/tests/unit/conductor/test_conductor.py:L1922)
- **network**: '_set_vm_state_and_notify') (src/nova/tests/unit/conductor/test_conductor.py:L1943)
- **network**: mock.patch.object(scheduler_utils, 'set_vm_state_and_notify'), (src/nova/tests/unit/conductor/test_conductor.py:L1999)
- **network**: def test_evacuate_instance_with_request_spec(self, mock_notify): (src/nova/tests/unit/conductor/test_conductor.py:L2048)
- **network**: mock_notify.assert_called_once_with( (src/nova/tests/unit/conductor/test_conductor.py:L2101)
- **network**: self, mock_notify, mock_get_dp, mock_get_arqs, mock_del_arqs): (src/nova/tests/unit/conductor/test_conductor.py:L2112)
- **network**: mock_notify.assert_called_once_with( (src/nova/tests/unit/conductor/test_conductor.py:L2173)
- **network**: self, mock_notify, mock_get_dp, mock_get_arqs, (src/nova/tests/unit/conductor/test_conductor.py:L2185)
- **network**: mock_notify.assert_called_once_with( (src/nova/tests/unit/conductor/test_conductor.py:L2246)
- **network**: def test_schedule_and_build_instances(self, mock_notify): (src/nova/tests/unit/conductor/test_conductor.py:L2496)
- **network**: def fake_notify(ctxt, instance, *args, **kwargs): (src/nova/tests/unit/conductor/test_conductor.py:L2503)
- **network**: mock_notify.side_effect = fake_notify (src/nova/tests/unit/conductor/test_conductor.py:L2509)
- **network**: mock_notify): (src/nova/tests/unit/conductor/test_conductor.py:L2665)
- **network**: mock_notify.assert_called_once_with( (src/nova/tests/unit/conductor/test_conductor.py:L2677)
- **network**: request_spec_dict = mock_notify.call_args_list[0][0][3] (src/nova/tests/unit/conductor/test_conductor.py:L2681)
- **network**: legacy_notify, (src/nova/tests/unit/conductor/test_conductor.py:L2699)
- **network**: notify, (src/nova/tests/unit/conductor/test_conductor.py:L2700)
- **network**: legacy_notify, notify, (src/nova/tests/unit/conductor/test_conductor.py:L2719)
- **network**: build_and_run, legacy_notify, instance_destroy, notify): (src/nova/tests/unit/conductor/test_conductor.py:L2734)
- **network**: legacy_notify, notify, (src/nova/tests/unit/conductor/test_conductor.py:L2752)
- **network**: build_and_run, legacy_notify, instance_destroy, notify): (src/nova/tests/unit/conductor/test_conductor.py:L2767)
- **network**: legacy_notify, notify, (src/nova/tests/unit/conductor/test_conductor.py:L2783)
- **network**: mock_notify): (src/nova/tests/unit/conductor/test_conductor.py:L2855)
- **network**: mock_notify.assert_called_once_with( (src/nova/tests/unit/conductor/test_conductor.py:L2912)
- **network**: request_spec_dict = mock_notify.call_args_list[0][0][3] (src/nova/tests/unit/conductor/test_conductor.py:L2916)
- **network**: mock_notify, (src/nova/tests/unit/conductor/test_conductor.py:L2925)
- **network**: mock_notify.assert_called_once_with( (src/nova/tests/unit/conductor/test_conductor.py:L2980)
- **network**: request_spec_dict = mock_notify.call_args_list[0][0][3] (src/nova/tests/unit/conductor/test_conductor.py:L2984)
- **network**: '_set_vm_state_and_notify'), (src/nova/tests/unit/conductor/test_conductor.py:L3432)
- **network**: _set_vm_state_and_notify, _create_block_device_mapping, (src/nova/tests/unit/conductor/test_conductor.py:L3441)
- **network**: _set_vm_state_and_notify.assert_called_once_with( (src/nova/tests/unit/conductor/test_conductor.py:L3448)
- **network**: def test_bury_in_cell0(self, mock_notify): (src/nova/tests/unit/conductor/test_conductor.py:L3471)
- **network**: self.assertEqual(4, mock_notify.call_count) (src/nova/tests/unit/conductor/test_conductor.py:L3529)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/conductor/test_conductor.py:L3530)
- **network**: request_spec_dict = mock_notify.call_args_list[i][0][3] (src/nova/tests/unit/conductor/test_conductor.py:L3553)
- **network**: mock_get_cell, mock_notify): (src/nova/tests/unit/conductor/test_conductor.py:L3563)
- **network**: mock_notify.assert_called_once_with( (src/nova/tests/unit/conductor/test_conductor.py:L3579)
- **network**: request_spec_dict = mock_notify.call_args_list[0][0][3] (src/nova/tests/unit/conductor/test_conductor.py:L3586)
- **network**: mock_notify): (src/nova/tests/unit/conductor/test_conductor.py:L3596)
- **network**: @mock.patch.object(scheduler_utils, 'set_vm_state_and_notify') (src/nova/tests/unit/conductor/test_conductor.py:L3674)
- **network**: @mock.patch.object(scheduler_utils, 'set_vm_state_and_notify') (src/nova/tests/unit/conductor/test_conductor.py:L3700)
- **network**: @mock.patch.object(scheduler_utils, 'set_vm_state_and_notify') (src/nova/tests/unit/conductor/test_conductor.py:L3747)
- **network**: @mock.patch.object(scheduler_utils, 'set_vm_state_and_notify') (src/nova/tests/unit/conductor/test_conductor.py:L3774)
- **network**: def test_set_vm_state_and_notify(self, mock_set): (src/nova/tests/unit/conductor/test_conductor.py:L3775)
- **network**: self.conductor._set_vm_state_and_notify( (src/nova/tests/unit/conductor/test_conductor.py:L3776)
- **network**: '_set_vm_state_and_notify') (src/nova/tests/unit/conductor/test_conductor.py:L3788)
- **network**: '_set_vm_state_and_notify') (src/nova/tests/unit/conductor/test_conductor.py:L3838)
- **network**: mock.patch.object(self.conductor, '_set_vm_state_and_notify'), (src/nova/tests/unit/conductor/test_conductor.py:L3897)
- **network**: '_set_vm_state_and_notify') (src/nova/tests/unit/conductor/test_conductor.py:L3914)
- **network**: '_set_vm_state_and_notify') (src/nova/tests/unit/conductor/test_conductor.py:L3965)
- **network**: mock.patch.object(self.conductor, '_set_vm_state_and_notify'), (src/nova/tests/unit/conductor/test_conductor.py:L4137)
- **network**: mock_notify): (src/nova/tests/unit/conductor/test_conductor.py:L4279)
- **network**: mock_notify.assert_called_once_with( (src/nova/tests/unit/conductor/test_conductor.py:L4300)
- **network**: request_spec_dict = mock_notify.call_args_list[0][0][3] (src/nova/tests/unit/conductor/test_conductor.py:L4304)
- **network**: mock_notify): (src/nova/tests/unit/conductor/test_conductor.py:L4312)
- **network**: mock_notify.assert_called_once_with( (src/nova/tests/unit/conductor/test_conductor.py:L4336)
- **network**: request_spec_dict = mock_notify.call_args_list[0][0][3] (src/nova/tests/unit/conductor/test_conductor.py:L4340)
- **network**: '_set_vm_state_and_notify') (src/nova/tests/unit/conductor/test_conductor.py:L4392)
- **network**: '_set_vm_state_and_notify') (src/nova/tests/unit/conductor/test_conductor.py:L4406)
- **network**: '_set_vm_state_and_notify') as notify: (src/nova/tests/unit/conductor/test_conductor.py:L4468)
- **network**: notify.assert_called_once_with( (src/nova/tests/unit/conductor/test_conductor.py:L4475)
- **network**: '_set_vm_state_and_notify') as notify: (src/nova/tests/unit/conductor/test_conductor.py:L4493)
- **network**: notify.assert_called_once_with( (src/nova/tests/unit/conductor/test_conductor.py:L4502)
- **network**: '_set_vm_state_and_notify'), (src/nova/tests/unit/conductor/test_conductor.py:L4519)
- **network**: notify, claim (src/nova/tests/unit/conductor/test_conductor.py:L4524)
- **network**: notify.assert_called_once_with( (src/nova/tests/unit/conductor/test_conductor.py:L4537)
- **global-mutation**: CONF = conf.CONF (src/nova/tests/unit/conductor/test_conductor.py:L75)
- **global-mutation**: VERSION = '1.10' (src/nova/tests/unit/conductor/test_conductor.py:L233)
- **global-mutation**: VERSION = '1.10' (src/nova/tests/unit/conductor/test_conductor.py:L258)
- **global-mutation**: VERSION = '2.10' (src/nova/tests/unit/conductor/test_conductor.py:L282)
- **global-mutation**: NUMBER_OF_CELLS = 2 (src/nova/tests/unit/conductor/test_conductor.py:L2282)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as ks_exc (src/nova/tests/unit/conductor/test_conductor.py:L22)
- **sink** (`db-write`): rebuild_args.update(update_args) (src/nova/tests/unit/conductor/test_conductor.py:L429)
- **sink** (`db-write`): binds_ports.update(binds_extra_spec) (src/nova/tests/unit/conductor/test_conductor.py:L3383)

## Notes

- KB `sideEffects` entries at L853, L1813, L1859, L2048, L2496, L2503, L3471, L3775 have targets that appear to be code fragments rather than resource paths; documented as recorded.

