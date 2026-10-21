# src/nova/tests/unit/volume/test_cinder.py

## Overview

This file implements the `test_cinder` module, defining 6 classs, 1 constant, 109 methods, 16 imports, 2 side effects, 12 security surface entries.

Lines: total 1330, code 1064, comment 30, blank 236

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/volume/test_cinder.py:L36–L36` |
| `FakeVolume` | class | — | exported | not declared | — | `src/nova/tests/unit/volume/test_cinder.py:L39–L57` |
| `FakeVolume.__init__` | method | (self, volume_id, size=1, attachments=None, multiattach=False) | public | not declared | 2/14 | `src/nova/tests/unit/volume/test_cinder.py:L41–L54` |
| `FakeVolume.get` | method | (self, volume_id) | public | `self.volume_id` (src/nova/tests/unit/volume/test_cinder.py:L57) | 1/2 | `src/nova/tests/unit/volume/test_cinder.py:L56–L57` |
| `FakeSnapshot` | class | — | exported | not declared | — | `src/nova/tests/unit/volume/test_cinder.py:L60–L71` |
| `FakeSnapshot.__init__` | method | (self, snapshot_id, volume_id, size=1) | public | not declared | 1/10 | `src/nova/tests/unit/volume/test_cinder.py:L62–L71` |
| `FakeVolumeType` | class | — | exported | not declared | — | `src/nova/tests/unit/volume/test_cinder.py:L74–L77` |
| `FakeVolumeType.__init__` | method | (self, volume_type_name, volume_type_id) | public | not declared | 1/3 | `src/nova/tests/unit/volume/test_cinder.py:L75–L77` |
| `FakeAttachment` | class | — | exported | not declared | — | `src/nova/tests/unit/volume/test_cinder.py:L80–L113` |
| `FakeAttachment.__init__` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/volume/test_cinder.py:L82–L101` |
| `FakeAttachment.get` | method | (self, key, default=None) | public | `self.att.get(key, default)` (src/nova/tests/unit/volume/test_cinder.py:L104) | 1/2 | `src/nova/tests/unit/volume/test_cinder.py:L103–L104` |
| `FakeAttachment.__setitem__` | method | (self, key, value) | public | not declared | 1/2 | `src/nova/tests/unit/volume/test_cinder.py:L106–L107` |
| `FakeAttachment.__getitem__` | method | (self, key) | public | `self.att[key]` (src/nova/tests/unit/volume/test_cinder.py:L110) | 1/2 | `src/nova/tests/unit/volume/test_cinder.py:L109–L110` |
| `FakeAttachment.to_dict` | method | (self) | public | `self.att` (src/nova/tests/unit/volume/test_cinder.py:L113) | 1/2 | `src/nova/tests/unit/volume/test_cinder.py:L112–L113` |
| `CinderApiTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/volume/test_cinder.py:L116–L1215` |
| `CinderApiTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/volume/test_cinder.py:L117–L121` |
| `CinderApiTestCase.test_get` | method | (self, mock_cinderclient) | public | not declared | 1/7 | `src/nova/tests/unit/volume/test_cinder.py:L124–L132` |
| `CinderApiTestCase.test_get_failed_notfound` | method | (self, mock_cinderclient) | public | not declared | 1/5 | `src/nova/tests/unit/volume/test_cinder.py:L135–L140` |
| `CinderApiTestCase.test_get_failed_badrequest` | method | (self, mock_cinderclient) | public | not declared | 1/5 | `src/nova/tests/unit/volume/test_cinder.py:L143–L148` |
| `CinderApiTestCase.test_get_failed_connection_failed` | method | (self, mock_cinderclient) | public | not declared | 1/5 | `src/nova/tests/unit/volume/test_cinder.py:L151–L156` |
| `CinderApiTestCase.test_get_with_shared_targets` | method | (self, mock_cinderclient) | public | not declared | 1/13 | `src/nova/tests/unit/volume/test_cinder.py:L159–L174` |
| `CinderApiTestCase.test_get_microversion_not_supported` | method | (self, mock_cinderclient) | public | not declared | 1/4 | `src/nova/tests/unit/volume/test_cinder.py:L179–L185` |
| `CinderApiTestCase.test_create` | method | (self, mock_cinderclient) | public | not declared | 1/15 | `src/nova/tests/unit/volume/test_cinder.py:L188–L204` |
| `CinderApiTestCase.test_create_failed` | method | (self, mock_cinderclient) | public | not declared | 1/5 | `src/nova/tests/unit/volume/test_cinder.py:L207–L212` |
| `CinderApiTestCase.test_create_failed_not_found` | method | (self, mock_cinderclient) | public | not declared | 1/6 | `src/nova/tests/unit/volume/test_cinder.py:L215–L221` |
| `CinderApiTestCase.test_create_over_quota_failed` | method | (self, mock_cinderclient) | public | not declared | 1/9 | `src/nova/tests/unit/volume/test_cinder.py:L224–L232` |
| `CinderApiTestCase.test_get_all` | method | (self, mock_cinderclient) | public | not declared | 2/13 | `src/nova/tests/unit/volume/test_cinder.py:L235–L250` |
| `CinderApiTestCase.test_get_all_with_search` | method | (self, mock_cinderclient) | public | not declared | 1/11 | `src/nova/tests/unit/volume/test_cinder.py:L253–L266` |
| `CinderApiTestCase.test_check_availability_zone_differs` | method | (self, mock_get_instance_az) | public | not declared | 1/12 | `src/nova/tests/unit/volume/test_cinder.py:L270–L284` |
| `CinderApiTestCase.test_reserve_volume` | method | (self, mock_cinderclient) | public | not declared | 1/6 | `src/nova/tests/unit/volume/test_cinder.py:L287–L294` |
| `CinderApiTestCase.test_unreserve_volume` | method | (self, mock_cinderclient) | public | not declared | 1/6 | `src/nova/tests/unit/volume/test_cinder.py:L297–L304` |
| `CinderApiTestCase.test_begin_detaching` | method | (self, mock_cinderclient) | public | not declared | 1/6 | `src/nova/tests/unit/volume/test_cinder.py:L307–L314` |
| `CinderApiTestCase.test_roll_detaching` | method | (self, mock_cinderclient) | public | not declared | 1/6 | `src/nova/tests/unit/volume/test_cinder.py:L317–L324` |
| `CinderApiTestCase.test_attach` | method | (self, mock_cinderclient) | public | not declared | 1/7 | `src/nova/tests/unit/volume/test_cinder.py:L327–L335` |
| `CinderApiTestCase.test_attach_with_mode` | method | (self, mock_cinderclient) | public | not declared | 1/7 | `src/nova/tests/unit/volume/test_cinder.py:L338–L346` |
| `CinderApiTestCase.test_attachment_create` | method | (self, mock_cinderclient) | public | not declared | 1/12 | `src/nova/tests/unit/volume/test_cinder.py:L349–L363` |
| `CinderApiTestCase.test_attachment_create_with_mountpoint` | method | (self, mock_cinderclient) | public | not declared | 1/17 | `src/nova/tests/unit/volume/test_cinder.py:L366–L387` |
| `CinderApiTestCase.test_attachment_create_volume_not_found` | method | (self, mock_cinderclient) | public | not declared | 1/5 | `src/nova/tests/unit/volume/test_cinder.py:L390–L396` |
| `CinderApiTestCase.test_attachment_create_unsupported_api_version` | method | (self, mock_cinderclient) | public | not declared | 1/6 | `src/nova/tests/unit/volume/test_cinder.py:L401–L409` |
| `CinderApiTestCase.test_attachment_update` | method | (self, mock_cinderclient) | public | not declared | 1/23 | `src/nova/tests/unit/volume/test_cinder.py:L412–L438` |
| `CinderApiTestCase.test_attachment_update_with_mountpoint` | method | (self, mock_cinderclient) | public | not declared | 1/25 | `src/nova/tests/unit/volume/test_cinder.py:L441–L470` |
| `CinderApiTestCase.test_attachment_update_attachment_not_found` | method | (self, mock_cinderclient) | public | not declared | 1/7 | `src/nova/tests/unit/volume/test_cinder.py:L473–L481` |
| `CinderApiTestCase.test_attachment_update_attachment_no_connector` | method | (self, mock_cinderclient) | public | not declared | 1/7 | `src/nova/tests/unit/volume/test_cinder.py:L484–L492` |
| `CinderApiTestCase.test_attachment_update_unsupported_api_version` | method | (self, mock_cinderclient) | public | not declared | 1/7 | `src/nova/tests/unit/volume/test_cinder.py:L497–L506` |
| `CinderApiTestCase.test_attachment_delete` | method | (self, mock_cinderclient) | public | not declared | 1/9 | `src/nova/tests/unit/volume/test_cinder.py:L509–L519` |
| `CinderApiTestCase.test_attachment_delete_failed` | method | (self, mock_cinderclient, mock_log) | public | not declared | 1/9 | `src/nova/tests/unit/volume/test_cinder.py:L523–L533` |
| `CinderApiTestCase.test_attachment_delete_unsupported_api_version` | method | (self, mock_cinderclient) | public | not declared | 1/7 | `src/nova/tests/unit/volume/test_cinder.py:L538–L547` |
| `CinderApiTestCase.test_attachment_delete_not_found` | method | (self, mock_cinderclient) | public | not declared | 1/6 | `src/nova/tests/unit/volume/test_cinder.py:L550–L557` |
| `CinderApiTestCase.test_attachment_delete_internal_server_error` | method | (self, mock_cinderclient) | public | not declared | 1/7 | `src/nova/tests/unit/volume/test_cinder.py:L560–L568` |
| `CinderApiTestCase.test_attachment_delete_internal_server_error_do_not_raise` | method | (self, mock_cinderclient) | public | not declared | 1/7 | `src/nova/tests/unit/volume/test_cinder.py:L571–L580` |
| `CinderApiTestCase.test_attachment_delete_gateway_timeout` | method | (self, mock_cinderclient) | public | not declared | 1/7 | `src/nova/tests/unit/volume/test_cinder.py:L583–L591` |
| `CinderApiTestCase.test_attachment_delete_gateway_timeout_do_not_raise` | method | (self, mock_cinderclient) | public | not declared | 1/7 | `src/nova/tests/unit/volume/test_cinder.py:L594–L603` |
| `CinderApiTestCase.test_attachment_delete_bad_request_exception` | method | (self, mock_cinderclient) | public | not declared | 1/7 | `src/nova/tests/unit/volume/test_cinder.py:L606–L614` |
| `CinderApiTestCase.test_attachment_complete` | method | (self, mock_cinderclient) | public | not declared | 1/9 | `src/nova/tests/unit/volume/test_cinder.py:L617–L627` |
| `CinderApiTestCase.test_attachment_complete_failed` | method | (self, mock_cinderclient) | public | not declared | 1/10 | `src/nova/tests/unit/volume/test_cinder.py:L630–L641` |
| `CinderApiTestCase.test_attachment_complete_unsupported_api_version` | method | (self, mock_cinderclient) | public | not declared | 1/7 | `src/nova/tests/unit/volume/test_cinder.py:L646–L657` |
| `CinderApiTestCase.test_detach` | method | (self, mock_cinderclient) | public | not declared | 1/8 | `src/nova/tests/unit/volume/test_cinder.py:L660–L669` |
| `CinderApiTestCase.test_detach_no_attachment_id` | method | (self, mock_cinderclient) | public | not declared | 1/12 | `src/nova/tests/unit/volume/test_cinder.py:L672–L686` |
| `CinderApiTestCase.test_detach_no_attachment_id_multiattach` | method | (self, mock_cinderclient) | public | not declared | 1/12 | `src/nova/tests/unit/volume/test_cinder.py:L689–L703` |
| `CinderApiTestCase.test_detach_internal_server_error` | method | (self, mock_cinderclient) | public | not declared | 1/8 | `src/nova/tests/unit/volume/test_cinder.py:L706–L715` |
| `CinderApiTestCase.test_detach_internal_server_error_do_not_raise` | method | (self, mock_cinderclient) | public | not declared | 1/8 | `src/nova/tests/unit/volume/test_cinder.py:L718–L728` |
| `CinderApiTestCase.test_detach_bad_request_exception` | method | (self, mock_cinderclient) | public | not declared | 1/5 | `src/nova/tests/unit/volume/test_cinder.py:L732–L738` |
| `CinderApiTestCase.test_attachment_get` | method | (self, mock_cinderclient) | public | not declared | 1/9 | `src/nova/tests/unit/volume/test_cinder.py:L741–L751` |
| `CinderApiTestCase.test_attachment_get_all_by_instance` | method | (self, mock_cinderclient) | public | not declared | 1/10 | `src/nova/tests/unit/volume/test_cinder.py:L754–L764` |
| `CinderApiTestCase.test_attachment_get_all_by_volume` | method | (self, mock_cinderclient) | public | not declared | 1/10 | `src/nova/tests/unit/volume/test_cinder.py:L767–L777` |
| `CinderApiTestCase.test_attachment_get_all_failed` | method | (self, mock_cinderclient) | public | not declared | 1/8 | `src/nova/tests/unit/volume/test_cinder.py:L780–L789` |
| `CinderApiTestCase.test_attachment_get_failed` | method | (self, mock_cinderclient) | public | not declared | 1/10 | `src/nova/tests/unit/volume/test_cinder.py:L792–L803` |
| `CinderApiTestCase.test_attachment_get_unsupported_api_version` | method | (self, mock_cinderclient) | public | not declared | 1/6 | `src/nova/tests/unit/volume/test_cinder.py:L808–L818` |
| `CinderApiTestCase.test_initialize_connection` | method | (self, mock_cinderclient) | public | not declared | 1/12 | `src/nova/tests/unit/volume/test_cinder.py:L821–L835` |
| `CinderApiTestCase.test_initialize_connection_exception_no_code` | method | (self, mock_cinderclient, mock_log) | public | not declared | 1/15 | `src/nova/tests/unit/volume/test_cinder.py:L839–L854` |
| `CinderApiTestCase.test_initialize_connection_rollback` | method | (self, mock_cinderclient) | public | not declared | 1/13 | `src/nova/tests/unit/volume/test_cinder.py:L857–L870` |
| `CinderApiTestCase.test_initialize_connection_no_rollback` | method | (self, mock_cinderclient) | public | not declared | 1/11 | `src/nova/tests/unit/volume/test_cinder.py:L873–L884` |
| `CinderApiTestCase.test_terminate_connection` | method | (self, mock_cinderclient) | public | not declared | 1/7 | `src/nova/tests/unit/volume/test_cinder.py:L887–L895` |
| `CinderApiTestCase.test_terminate_connection_internal_server_error` | method | (self, mock_cinderclient) | public | not declared | 1/8 | `src/nova/tests/unit/volume/test_cinder.py:L898–L907` |
| `CinderApiTestCase.test_terminate_connection_internal_server_error_do_not_raise` | method | (self, mock_cinderclient) | public | not declared | 1/7 | `src/nova/tests/unit/volume/test_cinder.py:L910–L919` |
| `CinderApiTestCase.test_terminate_connection_bad_request_exception` | method | (self, mock_cinderclient) | public | not declared | 1/6 | `src/nova/tests/unit/volume/test_cinder.py:L923–L929` |
| `CinderApiTestCase.test_delete` | method | (self, mock_cinderclient) | public | not declared | 1/6 | `src/nova/tests/unit/volume/test_cinder.py:L932–L939` |
| `CinderApiTestCase.test_update` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/volume/test_cinder.py:L941–L943` |
| `CinderApiTestCase.test_get_absolute_limits_forbidden` | method | (self, cinderclient) | public | not declared | 1/5 | `src/nova/tests/unit/volume/test_cinder.py:L946–L953` |
| `CinderApiTestCase.test_get_absolute_limits` | method | (self, cinderclient) | public | not declared | 1/17 | `src/nova/tests/unit/volume/test_cinder.py:L956–L973` |
| `CinderApiTestCase.test_get_snapshot` | method | (self, mock_cinderclient) | public | not declared | 1/8 | `src/nova/tests/unit/volume/test_cinder.py:L976–L985` |
| `CinderApiTestCase.test_get_snapshot_failed_notfound` | method | (self, mock_cinderclient) | public | not declared | 1/5 | `src/nova/tests/unit/volume/test_cinder.py:L988–L993` |
| `CinderApiTestCase.test_get_snapshot_connection_failed` | method | (self, mock_cinderclient) | public | not declared | 1/5 | `src/nova/tests/unit/volume/test_cinder.py:L996–L1001` |
| `CinderApiTestCase.test_get_all_snapshots` | method | (self, mock_cinderclient) | public | not declared | 3/16 | `src/nova/tests/unit/volume/test_cinder.py:L1004–L1022` |
| `CinderApiTestCase.test_create_snapshot` | method | (self, mock_cinderclient) | public | not declared | 1/16 | `src/nova/tests/unit/volume/test_cinder.py:L1025–L1042` |
| `CinderApiTestCase.test_create_force` | method | (self, mock_cinderclient) | public | not declared | 1/16 | `src/nova/tests/unit/volume/test_cinder.py:L1045–L1062` |
| `CinderApiTestCase.test_delete_snapshot` | method | (self, mock_cinderclient) | public | not declared | 1/7 | `src/nova/tests/unit/volume/test_cinder.py:L1065–L1073` |
| `CinderApiTestCase.test_update_snapshot_status` | method | (self, mock_cinderclient) | public | not declared | 1/8 | `src/nova/tests/unit/volume/test_cinder.py:L1076–L1085` |
| `CinderApiTestCase.test_get_all_volume_types` | method | (self, mock_cinderclient) | public | not declared | 3/16 | `src/nova/tests/unit/volume/test_cinder.py:L1088–L1106` |
| `CinderApiTestCase.test_get_volume_encryption_metadata` | method | (self, mock_cinderclient) | public | not declared | 1/9 | `src/nova/tests/unit/volume/test_cinder.py:L1109–L1119` |
| `CinderApiTestCase.test_volume_reimage` | method | (self, mock_cinderclient) | public | not declared | 1/9 | `src/nova/tests/unit/volume/test_cinder.py:L1122–L1130` |
| `CinderApiTestCase.test_translate_cinder_exception_no_error` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/volume/test_cinder.py:L1132–L1141` |
| `CinderApiTestCase.test_translate_cinder_exception_cinder_connection_error` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/volume/test_cinder.py:L1143–L1146` |
| `CinderApiTestCase.test_translate_cinder_exception_keystone_connection_error` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/volume/test_cinder.py:L1148–L1151` |
| `CinderApiTestCase.test_translate_cinder_exception_cinder_bad_request` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/volume/test_cinder.py:L1153–L1156` |
| `CinderApiTestCase.test_translate_cinder_exception_keystone_bad_request` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/volume/test_cinder.py:L1158–L1161` |
| `CinderApiTestCase.test_translate_cinder_exception_cinder_forbidden` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/volume/test_cinder.py:L1163–L1166` |
| `CinderApiTestCase.test_translate_cinder_exception_keystone_forbidden` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/volume/test_cinder.py:L1168–L1171` |
| `CinderApiTestCase.test_translate_mixed_exception_over_limit` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/volume/test_cinder.py:L1173–L1176` |
| `CinderApiTestCase.test_translate_mixed_exception_volume_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/volume/test_cinder.py:L1178–L1181` |
| `CinderApiTestCase.test_translate_mixed_exception_keystone_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/volume/test_cinder.py:L1183–L1186` |
| `CinderApiTestCase.test_translate_create_exception_keystone_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/volume/test_cinder.py:L1188–L1191` |
| `CinderApiTestCase.test_translate_create_exception_volume_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/volume/test_cinder.py:L1193–L1196` |
| `CinderApiTestCase._do_translate_cinder_exception_test` | method | (self, raised_exc, expected_exc) | private | not declared | 1/3 | `src/nova/tests/unit/volume/test_cinder.py:L1198–L1200` |
| `CinderApiTestCase._do_translate_mixed_exception_test` | method | (self, raised_exc, expected_exc) | private | not declared | 1/3 | `src/nova/tests/unit/volume/test_cinder.py:L1202–L1204` |
| `CinderApiTestCase._do_translate_create_exception_test` | method | (self, raised_exc, expected_exc) | private | not declared | 1/3 | `src/nova/tests/unit/volume/test_cinder.py:L1206–L1208` |
| `CinderApiTestCase._do_translate_exception_test` | method | (self, raised_exc, expected_exc, wrapper) | private | not declared | 1/5 | `src/nova/tests/unit/volume/test_cinder.py:L1210–L1215` |
| `CinderClientTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/volume/test_cinder.py:L1218–L1330` |
| `CinderClientTestCase.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/volume/test_cinder.py:L1221–L1231` |
| `CinderClientTestCase.test_create_v3_client_no_microversion` | method | (self, get_volume_api) | public | not declared | 1/6 | `src/nova/tests/unit/volume/test_cinder.py:L1235–L1243` |
| `CinderClientTestCase.test_create_v3_client_with_microversion_too_new` | method | (self, get_volume_api, get_highest_version) | public | not declared | 1/9 | `src/nova/tests/unit/volume/test_cinder.py:L1250–L1262` |
| `CinderClientTestCase.test_create_v3_client_with_microversion_available` | method | (self, get_volume_api, get_highest_version) | public | not declared | 1/10 | `src/nova/tests/unit/volume/test_cinder.py:L1269–L1282` |
| `CinderClientTestCase.test_create_v3_client_with_microversion_skip_version_check` | method | (self, get_volume_api, get_highest_version) | public | not declared | 1/8 | `src/nova/tests/unit/volume/test_cinder.py:L1288–L1298` |
| `CinderClientTestCase.test_load_auth_plugin_failed` | method | (self, mock_load_from_conf, mock_log_err) | public | not declared | 1/7 | `src/nova/tests/unit/volume/test_cinder.py:L1302–L1308` |
| `CinderClientTestCase.test_admin_context_without_token` | method | (self, mock_admin_auth) | public | not declared | 1/5 | `src/nova/tests/unit/volume/test_cinder.py:L1311–L1316` |
| `CinderClientTestCase.test_admin_context_without_user_token_but_with_service_token` | method | (self, mock_admin_auth, mock_service_auth) | public | not declared | 1/11 | `src/nova/tests/unit/volume/test_cinder.py:L1320–L1330` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/volume/test_cinder.py:L16)
- `cinderclient`: imports `api_versions as cinder_api_versions` (src/nova/tests/unit/volume/test_cinder.py:L18)
- `cinderclient`: imports `exceptions as cinder_exception` (src/nova/tests/unit/volume/test_cinder.py:L19)
- `cinderclient.v3`: imports `limits as cinder_limits` (src/nova/tests/unit/volume/test_cinder.py:L20)
- `keystoneauth1`: imports `exceptions as keystone_exception` (src/nova/tests/unit/volume/test_cinder.py:L21)
- `keystoneauth1`: imports `loading as ks_loading` (src/nova/tests/unit/volume/test_cinder.py:L22)
- `keystoneauth1`: imports `session` (src/nova/tests/unit/volume/test_cinder.py:L23)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/volume/test_cinder.py:L24)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/volume/test_cinder.py:L25)
- `import nova.conf` (src/nova/tests/unit/volume/test_cinder.py:L27)
- `nova`: imports `context` (src/nova/tests/unit/volume/test_cinder.py:L28)
- `nova`: imports `exception` (src/nova/tests/unit/volume/test_cinder.py:L29)
- `nova`: imports `service_auth` (src/nova/tests/unit/volume/test_cinder.py:L30)
- `nova`: imports `test` (src/nova/tests/unit/volume/test_cinder.py:L31)
- `nova.tests.unit.fake_instance`: imports `fake_instance_obj` (src/nova/tests/unit/volume/test_cinder.py:L32)
- `nova.volume`: imports `cinder` (src/nova/tests/unit/volume/test_cinder.py:L33)

## Side Effects

- **network**: @mock.patch('nova.service_auth.get_service_user_token_auth_plugin') (src/nova/tests/unit/volume/test_cinder.py:L1318)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/volume/test_cinder.py:L36)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as keystone_exception (src/nova/tests/unit/volume/test_cinder.py:L21)
- **privilege** (`crypto-key`): from keystoneauth1 import loading as ks_loading (src/nova/tests/unit/volume/test_cinder.py:L22)
- **privilege** (`crypto-key`): from keystoneauth1 import session (src/nova/tests/unit/volume/test_cinder.py:L23)
- **sink** (`db-write`): mock_cinderclient.return_value.attachments.update.return_value = ( (src/nova/tests/unit/volume/test_cinder.py:L430)
- **sink** (`db-write`): mock_cinderclient.return_value.attachments.update.\ (src/nova/tests/unit/volume/test_cinder.py:L437)
- **sink** (`db-write`): mock_cinderclient.return_value.attachments.update.return_value = ( (src/nova/tests/unit/volume/test_cinder.py:L460)
- **sink** (`db-write`): mock_cinderclient.return_value.attachments.update.\ (src/nova/tests/unit/volume/test_cinder.py:L469)
- **sink** (`db-write`): mock_cinderclient.return_value.attachments.update.side_effect = ( (src/nova/tests/unit/volume/test_cinder.py:L476)
- **sink** (`db-write`): mock_cinderclient.return_value.attachments.update.side_effect = ( (src/nova/tests/unit/volume/test_cinder.py:L488)
- **sink** (`db-write`): self.api.update, self.ctx, '', '') (src/nova/tests/unit/volume/test_cinder.py:L943)
- **privilege** (`crypto-key`): patcher = mock.patch('keystoneauth1.loading.' (src/nova/tests/unit/volume/test_cinder.py:L1227)
- **privilege** (`crypto-key`): @mock.patch('nova.service_auth.get_service_user_token_auth_plugin') (src/nova/tests/unit/volume/test_cinder.py:L1318)

