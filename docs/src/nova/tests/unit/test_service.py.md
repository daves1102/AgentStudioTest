# src/nova/tests/unit/test_service.py

## Overview

This file implements the `test_service` module, defining 7 classs, 2 constants, 1 field, 11 functions, 59 methods, 1 variable, 16 imports, 6 side effects.

Lines: total 889, code 692, comment 57, blank 140

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `test_service_opts` | variable | — | exported | not declared | — | `src/nova/tests/unit/test_service.py:L40–L47` |
| `SSL_CERT_DIR` | constant | — | exported | not declared | — | `src/nova/tests/unit/test_service.py:L48–L50` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/test_service.py:L52–L52` |
| `FakeManager` | class | — | exported | not declared | — | `src/nova/tests/unit/test_service.py:L56–L60` |
| `FakeManager.test_method` | method | (self) | public | `'manager'` (src/nova/tests/unit/test_service.py:L60) | 1/2 | `src/nova/tests/unit/test_service.py:L59–L60` |
| `ExtendedService` | class | — | exported | not declared | — | `src/nova/tests/unit/test_service.py:L63–L65` |
| `ExtendedService.test_method` | method | (self) | public | `'service'` (src/nova/tests/unit/test_service.py:L65) | 1/2 | `src/nova/tests/unit/test_service.py:L64–L65` |
| `ServiceManagerTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_service.py:L68–L92` |
| `ServiceManagerTestCase.test_message_gets_to_manager` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_service.py:L71–L76` |
| `ServiceManagerTestCase.test_override_manager_method` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_service.py:L78–L83` |
| `ServiceManagerTestCase.test_service_with_min_down_time` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_service.py:L85–L92` |
| `ServiceTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_service.py:L95–L677` |
| `ServiceTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_service.py:L98–L102` |
| `ServiceTestCase.test_create` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_service.py:L104–L109` |
| `ServiceTestCase.test_repr` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_service.py:L111–L120` |
| `ServiceTestCase.test_init_and_start_hooks` | method | (self, mock_get_by_host_and_binary, mock_create) | public | not declared | 1/20 | `src/nova/tests/unit/test_service.py:L124–L147` |
| `ServiceTestCase.test_init_with_indirection_api_waits` | method | (self, mock_wait) | public | not declared | 1/9 | `src/nova/tests/unit/test_service.py:L150–L161` |
| `ServiceTestCase.test_init_with_indirection_api_waits.check` | function | (*a, **k) | public | not declared | — | `src/nova/tests/unit/test_service.py:L154–L155` |
| `ServiceTestCase.test_start_updates_version` | method | (self, mock_get_by_host_and_binary) | public | not declared | 1/12 | `src/nova/tests/unit/test_service.py:L164–L179` |
| `ServiceTestCase._test_service_check_create_race` | method | (self, ex, mock_get_by_host_and_binary, mock_create) | private | not declared | 1/18 | `src/nova/tests/unit/test_service.py:L183–L202` |
| `ServiceTestCase.test_service_check_create_race_topic_exists` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_service.py:L204–L206` |
| `ServiceTestCase.test_service_check_create_race_binary_exists` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_service.py:L208–L210` |
| `ServiceTestCase.test_parent_graceful_shutdown` | method | (self, mock_stop, mock_get_by_host_and_binary, mock_create) | public | not declared | 1/22 | `src/nova/tests/unit/test_service.py:L215–L236` |
| `ServiceTestCase.test_service_stop_call_manager_graceful_shutdown` | method | (self, mock_svc_get_by_host_and_binary, mock_API) | public | not declared | 1/14 | `src/nova/tests/unit/test_service.py:L240–L258` |
| `ServiceTestCase.test_service_stop_waits_for_rpcserver` | method | (self, mock_rpc, mock_svc_get_by_host_and_binary, mock_API) | public | not declared | 1/13 | `src/nova/tests/unit/test_service.py:L263–L275` |
| `ServiceTestCase.test_service_stop_calls_manager_graceful_shutdown_before_rpc_wait` | method | (self, mock_rpc, mock_svc_get_by_host_and_binary, mock_API) | public | not declared | 1/19 | `src/nova/tests/unit/test_service.py:L280–L306` |
| `ServiceTestCase.test_service_stop_calls_manager_graceful_shutdown_before_rpc_wait._stop` | function | — | private | not declared | — | `src/nova/tests/unit/test_service.py:L290–L291` |
| `ServiceTestCase.test_service_stop_calls_manager_graceful_shutdown_before_rpc_wait._wait` | function | — | private | not declared | — | `src/nova/tests/unit/test_service.py:L293–L294` |
| `ServiceTestCase.test_service_stop_calls_manager_graceful_shutdown_before_rpc_wait._graceful_shutdown` | function | (timeout) | private | not declared | — | `src/nova/tests/unit/test_service.py:L296–L297` |
| `ServiceTestCase.test_start_wraps_manager_and_additional_endpoints_for_tracking` | method | (self, mock_rpc, mock_svc_get_by_host_and_binary, mock_API) | public | not declared | 1/18 | `src/nova/tests/unit/test_service.py:L311–L338` |
| `ServiceTestCase.test_service_with_two_rpcservers` | method | (self, mock_get, mock_TRANSPORT, mock_svc_get) | public | not declared | 1/22 | `src/nova/tests/unit/test_service.py:L343–L367` |
| `ServiceTestCase.test_service_with_two_rpc_topics_get_two_different_rpcservers` | method | (self, mock_listner, mock_svc_get) | public | not declared | 1/13 | `src/nova/tests/unit/test_service.py:L371–L383` |
| `ServiceTestCase.test_service_stop_marks_shutdown_in_progress_before_rpc_drain` | method | (self, mock_rpc, mock_svc_get_by_host_and_binary, mock_API) | public | not declared | 1/14 | `src/nova/tests/unit/test_service.py:L388–L405` |
| `ServiceTestCase.test_service_stop_marks_shutdown_in_progress_before_rpc_drain._check_shutdown_flag` | function | (*args, **kwargs) | private | not declared | — | `src/nova/tests/unit/test_service.py:L397–L398` |
| `ServiceTestCase._get_service` | method | (self) | private | `service.Service(self.host, self.binary, self.topic, 'nova.tests.unit.test_service.FakeManager')` (src/nova/tests/unit/test_service.py:L408) | 1/5 | `src/nova/tests/unit/test_service.py:L407–L411` |
| `ServiceTestCase.test_get_manager_shutdown_timeout` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_service.py:L413–L416` |
| `ServiceTestCase.test_get_manager_shutdown_timeout_clamped_when_higher` | method | (self, mock_log) | public | not declared | 1/6 | `src/nova/tests/unit/test_service.py:L419–L426` |
| `ServiceTestCase.test_get_manager_shutdown_timeout_no_negative_value` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_service.py:L428–L431` |
| `ServiceTestCase.test_run_manager_graceful_shutdown_passes_timeout` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_service.py:L433–L438` |
| `ServiceTestCase.test_run_manager_graceful_shutdown_handles_exception` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_service.py:L440–L446` |
| `ServiceTestCase.test_run_manager_graceful_shutdown_warns_on_timeout` | method | (self, mock_log) | public | not declared | 1/12 | `src/nova/tests/unit/test_service.py:L449–L468` |
| `ServiceTestCase.test_run_manager_graceful_shutdown_warns_on_timeout.slow_graceful_shutdown` | function | (timeout) | public | not declared | — | `src/nova/tests/unit/test_service.py:L457–L458` |
| `ServiceTestCase.test_service_stop_with_two_rpcservers` | method | (self, mock_rpc, mock_svc_get_by_host_and_binary, mock_API) | public | not declared | 1/18 | `src/nova/tests/unit/test_service.py:L473–L492` |
| `ServiceTestCase.test_service_stop_handle_manager_gs_exception` | method | (self, mock_rpc, mock_svc_get_by_host_and_binary, mock_API) | public | not declared | 1/10 | `src/nova/tests/unit/test_service.py:L497–L508` |
| `ServiceTestCase.test_stop_with_two_rpcservers_handle_manager_gs_exception` | method | (self, mock_rpc, mock_svc_get_by_host_and_binary, mock_API) | public | not declared | 1/17 | `src/nova/tests/unit/test_service.py:L513–L531` |
| `ServiceTestCase.test_stop_before_start_initialize_RPC_does_not_raise` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_service.py:L533–L543` |
| `ServiceTestCase.test_stop_with_topic_alt_before_start_does_not_raise` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_service.py:L545–L554` |
| `ServiceTestCase.test_shutdown_rpc_server` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_service.py:L556–L564` |
| `ServiceTestCase.test_shutdown_rpc_server_handle_exception` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_service.py:L566–L575` |
| `ServiceTestCase.test_service_stop_handle_first_rpcserver_exception` | method | (self, mock_rpc, mock_svc_get_by_host_and_binary, mock_API) | public | not declared | 1/20 | `src/nova/tests/unit/test_service.py:L580–L601` |
| `ServiceTestCase.test_service_stop_handle_2nd_rpcserver_exception` | method | (self, mock_rpc, mock_svc_get_by_host_and_binary, mock_API) | public | not declared | 1/20 | `src/nova/tests/unit/test_service.py:L606–L627` |
| `ServiceTestCase.test_reset` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_service.py:L629–L636` |
| `ServiceTestCase.test_old_compute_version_check_happens_after_wait_for_conductor` | method | (self, mock_check_old, mock_wait) | public | not declared | 1/10 | `src/nova/tests/unit/test_service.py:L640–L654` |
| `ServiceTestCase.test_old_compute_version_check_happens_after_wait_for_conductor.fake_wait` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/test_service.py:L644–L645` |
| `ServiceTestCase.test_old_compute_version_check_workaround` | method | (self, mock_check_old) | public | not declared | 1/16 | `src/nova/tests/unit/test_service.py:L657–L677` |
| `TestLauncher` | class | — | exported | not declared | — | `src/nova/tests/unit/test_service.py:L680–L717` |
| `TestLauncher.test_launch_app` | method | (self, mock_launch) | public | not declared | 1/8 | `src/nova/tests/unit/test_service.py:L683–L690` |
| `TestLauncher.test_launch_app_with_workers` | method | (self, mock_launch) | public | not declared | 1/8 | `src/nova/tests/unit/test_service.py:L693–L700` |
| `TestLauncher.test_launch_app_with_workers_no_fork` | method | (self, mock_launch) | public | not declared | 1/9 | `src/nova/tests/unit/test_service.py:L703–L711` |
| `TestLauncher.test_launch_app_more_than_once_raises` | method | (self, mock_launch) | public | not declared | 1/4 | `src/nova/tests/unit/test_service.py:L714–L717` |
| `_FakeManager` | class | — | unexported | not declared | — | `src/nova/tests/unit/test_service.py:L720–L738` |
| `_FakeManager.target` | field | — | public | not declared | — | `src/nova/tests/unit/test_service.py:L722–L722` |
| `_FakeManager.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_service.py:L724–L725` |
| `_FakeManager.task1` | method | (self, context, instance=None) | public | `'task1 done'` (src/nova/tests/unit/test_service.py:L729) | 1/3 | `src/nova/tests/unit/test_service.py:L727–L729` |
| `_FakeManager.skipped_task` | method | (self, context, instance=None) | public | `'skipped task done'` (src/nova/tests/unit/test_service.py:L734) | 1/3 | `src/nova/tests/unit/test_service.py:L732–L734` |
| `_FakeManager.failing_task` | method | (self, context, instance=None) | public | not declared | 1/3 | `src/nova/tests/unit/test_service.py:L736–L738` |
| `TrackingEndpointWrapperTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_service.py:L741–L889` |
| `TrackingEndpointWrapperTestCase.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_service.py:L743–L749` |
| `TrackingEndpointWrapperTestCase.test_rpc_target` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_service.py:L751–L754` |
| `TrackingEndpointWrapperTestCase.test_hasattr_matches_real_endpoint` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_service.py:L756–L758` |
| `TrackingEndpointWrapperTestCase.test_track_tasks` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/test_service.py:L760–L787` |
| `TrackingEndpointWrapperTestCase.test_track_tasks.check_recorded_tasks` | function | (*args, **kwargs) | public | `key` (src/nova/tests/unit/test_service.py:L772) | — | `src/nova/tests/unit/test_service.py:L767–L772` |
| `TrackingEndpointWrapperTestCase.test_track_tasks_rpc_method_with_instance_as_arg` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/test_service.py:L789–L813` |
| `TrackingEndpointWrapperTestCase.test_track_tasks_rpc_method_with_instance_as_arg.check_recorded_tasks` | function | (*args, **kwargs) | public | `key` (src/nova/tests/unit/test_service.py:L801) | — | `src/nova/tests/unit/test_service.py:L796–L801` |
| `TrackingEndpointWrapperTestCase.test_task_removed_from_tracker_when_task_raises` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/test_service.py:L815–L843` |
| `TrackingEndpointWrapperTestCase.test_task_removed_from_tracker_when_task_raises.check_recorded_tasks` | function | (*args, **kwargs) | public | `key` (src/nova/tests/unit/test_service.py:L827) | — | `src/nova/tests/unit/test_service.py:L822–L827` |
| `TrackingEndpointWrapperTestCase.test_track_tasks_records_success_as_completed` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_service.py:L845–L854` |
| `TrackingEndpointWrapperTestCase.test_task_failure_recorded_as_failed` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_service.py:L856–L866` |
| `TrackingEndpointWrapperTestCase.test_skip_marked_task_are_not_tracked` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_service.py:L868–L885` |
| `TrackingEndpointWrapperTestCase.test_skip_marked_task_are_not_tracked.check_recorded_tasks` | function | (*args, **kwargs) | public | `key` (src/nova/tests/unit/test_service.py:L878) | — | `src/nova/tests/unit/test_service.py:L873–L878` |
| `TrackingEndpointWrapperTestCase.test_default_tracker_is_the_endpoint_itself` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_service.py:L887–L889` |

## Dependencies

- `import copy` (src/nova/tests/unit/test_service.py:L21)
- `import os.path` (src/nova/tests/unit/test_service.py:L22)
- `import threading` (src/nova/tests/unit/test_service.py:L23)
- `unittest`: imports `mock` (src/nova/tests/unit/test_service.py:L24)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/test_service.py:L26)
- `import oslo_messaging as messaging` (src/nova/tests/unit/test_service.py:L27)
- `oslo_service`: imports `service as _service` (src/nova/tests/unit/test_service.py:L28)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/test_service.py:L29)
- `nova`: imports `context` (src/nova/tests/unit/test_service.py:L31)
- `nova`: imports `exception` (src/nova/tests/unit/test_service.py:L32)
- `nova`: imports `manager` (src/nova/tests/unit/test_service.py:L33)
- `nova`: imports `objects` (src/nova/tests/unit/test_service.py:L34)
- `nova.objects`: imports `base as obj_base` (src/nova/tests/unit/test_service.py:L35)
- `nova`: imports `rpc` (src/nova/tests/unit/test_service.py:L36)
- `nova`: imports `service` (src/nova/tests/unit/test_service.py:L37)
- `nova`: imports `test` (src/nova/tests/unit/test_service.py:L38)

## Side Effects

- **file-io**: SSL_CERT_DIR = os.path.normpath( (src/nova/tests/unit/test_service.py:L48)
- **file-io**: os.path.join(os.path.dirname(os.path.abspath(__file__)), 'ssl_cert') (src/nova/tests/unit/test_service.py:L49)
- **network**: self.assertEqual(mock_rpc.call_count, 1) (src/nova/tests/unit/test_service.py:L275)
- **network**: endpoints = mock_rpc.call_args_list[0].args[1] (src/nova/tests/unit/test_service.py:L322)
- **global-mutation**: SSL_CERT_DIR = os.path.normpath( (src/nova/tests/unit/test_service.py:L48)
- **global-mutation**: CONF = cfg.CONF (src/nova/tests/unit/test_service.py:L52)

