# src/nova/tests/unit/image/test_glance.py

## Overview

This file implements the `test_glance` module, defining 33 classs, 3 constants, 3 fields, 3 functions, 116 methods, 2 staticmethods, 1 variable, 24 imports, 42 side effects, 17 security surface entries.

Lines: total 2276, code 1920, comment 98, blank 258

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L45–L45` |
| `NOW_GLANCE_FORMAT` | constant | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L46–L46` |
| `tzinfo` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L49–L52` |
| `tzinfo.utcoffset` | method | (*args, **kwargs) | public | `datetime.timedelta()` (src/nova/tests/unit/image/test_glance.py:L52) | 1/2 | `src/nova/tests/unit/image/test_glance.py:L51–L52` |
| `NOW_DATETIME` | constant | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L55–L55` |
| `FakeSchema` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L58–L72` |
| `FakeSchema.__init__` | method | (self, raw_schema) | public | not declared | 1/8 | `src/nova/tests/unit/image/test_glance.py:L59–L66` |
| `FakeSchema.is_base_property` | method | (self, prop_name) | public | `prop_name in self.base_props` (src/nova/tests/unit/image/test_glance.py:L69) | 1/2 | `src/nova/tests/unit/image/test_glance.py:L68–L69` |
| `FakeSchema.raw` | method | (self) | public | `copy.deepcopy(self.raw_schema)` (src/nova/tests/unit/image/test_glance.py:L72) | 1/2 | `src/nova/tests/unit/image/test_glance.py:L71–L72` |
| `image_fixtures` | variable | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L75–L197` |
| `fake_glance_response` | function | (data) | exported | `glanceclient.common.utils.RequestIdProxy([data, None])` (src/nova/tests/unit/image/test_glance.py:L202) | 1/3 | `src/nova/tests/unit/image/test_glance.py:L200–L202` |
| `ImageV2` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L205–L209` |
| `ImageV2.schema` | field | — | public | not declared | — | `src/nova/tests/unit/image/test_glance.py:L209–L209` |
| `TestConversions` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L212–L224` |
| `TestConversions.test_convert_timestamps_to_datetimes` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/image/test_glance.py:L213–L224` |
| `TestExceptionTranslations` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L227–L252` |
| `TestExceptionTranslations.test_client_forbidden_to_imagenotauthed` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/image/test_glance.py:L229–L232` |
| `TestExceptionTranslations.test_client_httpforbidden_converts_to_imagenotauthed` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/image/test_glance.py:L234–L237` |
| `TestExceptionTranslations.test_client_notfound_converts_to_imagenotfound` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/image/test_glance.py:L239–L242` |
| `TestExceptionTranslations.test_client_httpnotfound_converts_to_imagenotfound` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/image/test_glance.py:L244–L247` |
| `TestExceptionTranslations.test_client_httpoverlimit_converts_to_imagequotaexceeded` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/image/test_glance.py:L249–L252` |
| `TestGlanceSerializer` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L255–L276` |
| `TestGlanceSerializer.test_serialize` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/image/test_glance.py:L256–L276` |
| `TestGetImageService` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L279–L297` |
| `TestGetImageService.test_get_remote_service_from_id` | method | (self, gcwi_mocked) | public | not declared | 1/6 | `src/nova/tests/unit/image/test_glance.py:L282–L287` |
| `TestGetImageService.test_get_remote_service_from_href` | method | (self, gcwi_mocked) | public | not declared | 1/7 | `src/nova/tests/unit/image/test_glance.py:L291–L297` |
| `TestCreateGlanceClient` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L300–L331` |
| `TestCreateGlanceClient.test_glanceclient_with_ks_session` | method | (self, mock_client, mock_load, mock_get_auth) | public | not declared | 1/21 | `src/nova/tests/unit/image/test_glance.py:L305–L331` |
| `TestGlanceClientWrapperRetries` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L334–L462` |
| `TestGlanceClientWrapperRetries.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/image/test_glance.py:L336–L344` |
| `TestGlanceClientWrapperRetries.assert_retry_attempted` | method | (self, sleep_mock, client, expected_url) | public | not declared | 1/4 | `src/nova/tests/unit/image/test_glance.py:L346–L349` |
| `TestGlanceClientWrapperRetries.assert_retry_not_attempted` | method | (self, sleep_mock, client) | public | not declared | 1/4 | `src/nova/tests/unit/image/test_glance.py:L351–L354` |
| `TestGlanceClientWrapperRetries.test_static_client_without_retries` | method | (self, create_client_mock, sleep_mock) | public | not declared | 1/7 | `src/nova/tests/unit/image/test_glance.py:L358–L364` |
| `TestGlanceClientWrapperRetries.test_static_client_with_retries` | method | (self, create_client_mock, sleep_mock) | public | not declared | 1/10 | `src/nova/tests/unit/image/test_glance.py:L368–L377` |
| `TestGlanceClientWrapperRetries.test_default_client_with_retries` | method | (self, create_client_mock, sleep_mock, shuffle_mock) | public | not declared | 1/10 | `src/nova/tests/unit/image/test_glance.py:L382–L391` |
| `TestGlanceClientWrapperRetries.test_retry_works_for_corrupted_image` | method | (self, create_client_mock, sleep_mock, shuffle_mock) | public | not declared | 1/10 | `src/nova/tests/unit/image/test_glance.py:L396–L405` |
| `TestGlanceClientWrapperRetries.test_retry_works_with_generators` | method | (self, create_client_mock, sleep_mock, shuffle_mock) | public | not declared | 1/11 | `src/nova/tests/unit/image/test_glance.py:L410–L424` |
| `TestGlanceClientWrapperRetries.test_retry_works_with_generators.some_generator` | function | (exception) | public | not declared | — | `src/nova/tests/unit/image/test_glance.py:L412–L415` |
| `TestGlanceClientWrapperRetries.test_default_client_without_retries` | method | (self, create_client_mock, sleep_mock, shuffle_mock) | public | not declared | 1/14 | `src/nova/tests/unit/image/test_glance.py:L429–L448` |
| `TestGlanceClientWrapperRetries._get_static_client` | method | (self, create_client_mock) | private | `client` (src/nova/tests/unit/image/test_glance.py:L455) | 1/6 | `src/nova/tests/unit/image/test_glance.py:L450–L455` |
| `TestGlanceClientWrapperRetries._mock_client_images_response` | method | (self, create_client_mock, side_effect) | private | not declared | 1/6 | `src/nova/tests/unit/image/test_glance.py:L457–L462` |
| `TestCommonPropertyNameConflicts` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L465–L489` |
| `TestCommonPropertyNameConflicts.test_version_property_conflicts` | method | (self, mock_glance_client) | public | not declared | 1/10 | `src/nova/tests/unit/image/test_glance.py:L475–L489` |
| `TestDownloadNoDirectUri` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L492–L833` |
| `TestDownloadNoDirectUri.test_download_no_data_no_dest_path_v2` | method | (self, show_mock, open_mock) | public | not declared | 1/12 | `src/nova/tests/unit/image/test_glance.py:L500–L512` |
| `TestDownloadNoDirectUri.test_download_no_data_no_dest_path_iterator_v2` | method | (self, show_mock, open_mock) | public | not declared | 1/16 | `src/nova/tests/unit/image/test_glance.py:L516–L531` |
| `TestDownloadNoDirectUri.test_download_data_no_dest_path_v2` | method | (self, show_mock, open_mock) | public | not declared | 1/20 | `src/nova/tests/unit/image/test_glance.py:L535–L555` |
| `TestDownloadNoDirectUri.test_download_no_data_dest_path_v2` | method | (self, fsync_mock, show_mock, open_mock) | public | not declared | 1/24 | `src/nova/tests/unit/image/test_glance.py:L560–L584` |
| `TestDownloadNoDirectUri.test_download_data_dest_path_v2` | method | (self, show_mock, open_mock) | public | not declared | 1/20 | `src/nova/tests/unit/image/test_glance.py:L588–L613` |
| `TestDownloadNoDirectUri.test_download_data_dest_path_write_fails_v2` | method | (self, show_mock, open_mock) | public | not declared | 1/12 | `src/nova/tests/unit/image/test_glance.py:L617–L634` |
| `TestDownloadNoDirectUri.test_download_data_dest_path_write_fails_v2.FakeDiskException` | class | — | public | not declared | — | `src/nova/tests/unit/image/test_glance.py:L626–L627` |
| `TestDownloadNoDirectUri.test_download_data_dest_path_write_fails_v2.Exceptionator` | class | — | public | not declared | — | `src/nova/tests/unit/image/test_glance.py:L629–L631` |
| `TestDownloadNoDirectUri.test_download_data_dest_path_write_fails_v2.Exceptionator.write` | method | (self, _) | public | not declared | — | `src/nova/tests/unit/image/test_glance.py:L630–L631` |
| `TestDownloadNoDirectUri.test_download_no_returned_image_data_v2` | method | (self, show_mock, open_mock) | public | not declared | 1/8 | `src/nova/tests/unit/image/test_glance.py:L638–L647` |
| `TestDownloadNoDirectUri._test_download_direct_rbd_uri_v2` | method | (self, show_mock, get_tran_mock, get_verifier_mock, log_mock, open_mock, getsize_mock, with_verifier=True) | private | not declared | 3/56 | `src/nova/tests/unit/image/test_glance.py:L655–L721` |
| `TestDownloadNoDirectUri.test_download_direct_rbd_uri_v2` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/image/test_glance.py:L723–L724` |
| `TestDownloadNoDirectUri.test_download_direct_rbd_uri_without_verifier_v2` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/image/test_glance.py:L726–L727` |
| `TestDownloadNoDirectUri.test_download_direct_exception_fallback_v2` | method | (self, fsync_mock, show_mock, get_tran_mock) | public | not declared | 1/43 | `src/nova/tests/unit/image/test_glance.py:L732–L782` |
| `TestDownloadNoDirectUri.test_download_direct_no_mod_fallback` | method | (self, fsync_mock, show_mock, get_tran_mock) | public | not declared | 1/39 | `src/nova/tests/unit/image/test_glance.py:L787–L833` |
| `TestDownloadSignatureVerification` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L836–L1034` |
| `TestDownloadSignatureVerification.MockVerifier` | class | — | public | not declared | — | `src/nova/tests/unit/image/test_glance.py:L838–L843` |
| `TestDownloadSignatureVerification.MockVerifier.update` | method | (self, data) | public | `` (src/nova/tests/unit/image/test_glance.py:L840) | 1/2 | `src/nova/tests/unit/image/test_glance.py:L839–L840` |
| `TestDownloadSignatureVerification.MockVerifier.verify` | method | (self) | public | `True` (src/nova/tests/unit/image/test_glance.py:L843) | 1/2 | `src/nova/tests/unit/image/test_glance.py:L842–L843` |
| `TestDownloadSignatureVerification.BadVerifier` | class | — | public | not declared | — | `src/nova/tests/unit/image/test_glance.py:L845–L852` |
| `TestDownloadSignatureVerification.BadVerifier.update` | method | (self, data) | public | `` (src/nova/tests/unit/image/test_glance.py:L847) | 1/2 | `src/nova/tests/unit/image/test_glance.py:L846–L847` |
| `TestDownloadSignatureVerification.BadVerifier.verify` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/image/test_glance.py:L849–L852` |
| `TestDownloadSignatureVerification.setUp` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/image/test_glance.py:L854–L868` |
| `TestDownloadSignatureVerification.test_download_with_signature_verification_v2` | method | (self, mock_get_verifier, mock_show, mock_log) | public | not declared | 1/24 | `src/nova/tests/unit/image/test_glance.py:L873–L898` |
| `TestDownloadSignatureVerification.test_download_dst_path_signature_verification_v2` | method | (self, mock_fsync, mock_get_verifier, mock_show, mock_log, mock_open) | public | not declared | 1/30 | `src/nova/tests/unit/image/test_glance.py:L905–L934` |
| `TestDownloadSignatureVerification.test_download_with_get_verifier_failure_v2` | method | (self, mock_get, mock_show, mock_log) | public | not declared | 1/14 | `src/nova/tests/unit/image/test_glance.py:L939–L952` |
| `TestDownloadSignatureVerification.test_download_with_invalid_signature_v2` | method | (self, mock_get_verifier, mock_show, mock_log) | public | not declared | 1/12 | `src/nova/tests/unit/image/test_glance.py:L957–L968` |
| `TestDownloadSignatureVerification.test_download_missing_signature_metadata_v2` | method | (self, mock_show, mock_log) | public | not declared | 1/12 | `src/nova/tests/unit/image/test_glance.py:L972–L983` |
| `TestDownloadSignatureVerification.test_download_dst_path_signature_fail_v2` | method | (self, mock_fsync, mock_show, mock_log, mock_get_verifier, mock_open) | public | not declared | 1/19 | `src/nova/tests/unit/image/test_glance.py:L990–L1008` |
| `TestDownloadSignatureVerification.test_download_dst_path_with_invalid_signature_v2` | method | (self, mock_fsync, mock_show, mock_get_verifier, mock_open) | public | not declared | 1/21 | `src/nova/tests/unit/image/test_glance.py:L1014–L1034` |
| `TestDownloadCertificateValidation` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L1037–L1202` |
| `TestDownloadCertificateValidation.setUp` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/image/test_glance.py:L1042–L1056` |
| `TestDownloadCertificateValidation.test_download_with_certificate_validation_v2` | method | (self, mock_get_verifier, mock_verify_certificate, mock_show, mock_log) | public | not declared | 1/28 | `src/nova/tests/unit/image/test_glance.py:L1062–L1089` |
| `TestDownloadCertificateValidation.test_download_with_trusted_certs_and_disabled_cert_validation_v2` | method | (self, mock_get_verifier, mock_verify_certificate, mock_show, mock_log) | public | not declared | 1/30 | `src/nova/tests/unit/image/test_glance.py:L1095–L1124` |
| `TestDownloadCertificateValidation.test_download_with_certificate_validation_failure_v2` | method | (self, mock_get_verifier, mock_verify_certificate, mock_show, mock_log) | public | not declared | 1/23 | `src/nova/tests/unit/image/test_glance.py:L1130–L1152` |
| `TestDownloadCertificateValidation.test_download_without_trusted_certs_failure_v2` | method | (self, mock_get_verifier, mock_show, mock_log) | public | not declared | 1/16 | `src/nova/tests/unit/image/test_glance.py:L1157–L1175` |
| `TestDownloadCertificateValidation.test_get_verifier_without_trusted_certs_use_default_certs` | method | (self, mock_verify_certificate, mock_get_verifier, mock_show, mock_log) | public | not declared | 1/18 | `src/nova/tests/unit/image/test_glance.py:L1181–L1202` |
| `TestIsImageAvailable` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L1205–L1285` |
| `TestIsImageAvailable.ImageSpecV2` | class | — | public | not declared | — | `src/nova/tests/unit/image/test_glance.py:L1208–L1210` |
| `TestIsImageAvailable.ImageSpecV2.visibility` | field | — | public | not declared | — | `src/nova/tests/unit/image/test_glance.py:L1209–L1209` |
| `TestIsImageAvailable.ImageSpecV2.properties` | field | — | public | not declared | — | `src/nova/tests/unit/image/test_glance.py:L1210–L1210` |
| `TestIsImageAvailable.test_auth_token_override` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/image/test_glance.py:L1212–L1218` |
| `TestIsImageAvailable.test_admin_override` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/image/test_glance.py:L1220–L1226` |
| `TestIsImageAvailable.test_v2_visibility` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/image/test_glance.py:L1228–L1238` |
| `TestIsImageAvailable.test_project_is_owner` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/image/test_glance.py:L1240–L1250` |
| `TestIsImageAvailable.test_project_context_matches_project_prop` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/image/test_glance.py:L1252–L1262` |
| `TestIsImageAvailable.test_no_user_in_props` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/image/test_glance.py:L1264–L1273` |
| `TestIsImageAvailable.test_user_matches_context` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/image/test_glance.py:L1275–L1285` |
| `TestRBDDownload` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L1288–L1343` |
| `TestRBDDownload.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/image/test_glance.py:L1290–L1296` |
| `TestRBDDownload.test_rbd_download_success` | method | (self, mock_export_image) | public | not declared | 1/9 | `src/nova/tests/unit/image/test_glance.py:L1302–L1314` |
| `TestRBDDownload.test_rbd_download_broken_url` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/image/test_glance.py:L1316–L1327` |
| `TestRBDDownload.test_rbd_download_export_failure` | method | (self, mock_export_image) | public | not declared | 1/8 | `src/nova/tests/unit/image/test_glance.py:L1333–L1343` |
| `TestShow` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L1346–L1510` |
| `TestShow.test_show_success_v2` | method | (self, is_avail_mock, trans_from_mock) | public | not declared | 1/14 | `src/nova/tests/unit/image/test_glance.py:L1351–L1365` |
| `TestShow.test_show_not_available_v2` | method | (self, is_avail_mock, trans_from_mock) | public | not declared | 1/12 | `src/nova/tests/unit/image/test_glance.py:L1369–L1382` |
| `TestShow.test_show_client_failure_v2` | method | (self, is_avail_mock, trans_from_mock, reraise_mock) | public | not declared | 1/15 | `src/nova/tests/unit/image/test_glance.py:L1387–L1402` |
| `TestShow.test_show_queued_image_without_some_attrs_v2` | method | (self, is_avail_mock, mocked_schema) | public | not declared | 1/34 | `src/nova/tests/unit/image/test_glance.py:L1406–L1443` |
| `TestShow.test_show_queued_image_without_some_attrs_v2.fake_image_cls` | class | — | public | not declared | — | `src/nova/tests/unit/image/test_glance.py:L1412–L1413` |
| `TestShow.test_include_locations_success_v2` | method | (self, avail_mock, trans_from_mock) | public | not declared | 1/17 | `src/nova/tests/unit/image/test_glance.py:L1447–L1465` |
| `TestShow.test_include_direct_uri_success_v2` | method | (self, avail_mock, trans_from_mock) | public | not declared | 1/17 | `src/nova/tests/unit/image/test_glance.py:L1469–L1487` |
| `TestShow.test_do_not_show_deleted_images_v2` | method | (self, is_avail_mock, trans_from_mock) | public | not declared | 1/16 | `src/nova/tests/unit/image/test_glance.py:L1491–L1510` |
| `TestShow.test_do_not_show_deleted_images_v2.fake_image_cls` | class | — | public | not declared | — | `src/nova/tests/unit/image/test_glance.py:L1494–L1496` |
| `TestDetail` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L1513–L1590` |
| `TestDetail.test_detail_success_available_v2` | method | (self, is_avail_mock, trans_from_mock, ext_query_mock) | public | not declared | 1/15 | `src/nova/tests/unit/image/test_glance.py:L1520–L1535` |
| `TestDetail.test_detail_success_unavailable_v2` | method | (self, is_avail_mock, trans_from_mock, ext_query_mock) | public | not declared | 1/15 | `src/nova/tests/unit/image/test_glance.py:L1540–L1555` |
| `TestDetail.test_detail_params_passed_v2` | method | (self, is_avail_mock, _trans_from_mock) | public | not declared | 1/8 | `src/nova/tests/unit/image/test_glance.py:L1559–L1567` |
| `TestDetail.test_detail_client_failure_v2` | method | (self, is_avail_mock, trans_from_mock, ext_query_mock, reraise_mock) | public | not declared | 1/16 | `src/nova/tests/unit/image/test_glance.py:L1573–L1590` |
| `TestCreate` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L1593–L1850` |
| `TestCreate.test_create_success_v2` | method | (self, trans_to_mock, trans_from_mock) | public | not declared | 1/22 | `src/nova/tests/unit/image/test_glance.py:L1599–L1628` |
| `TestCreate.test_create_success_v2_force_activate` | method | (self, trans_to_mock, trans_from_mock) | public | not declared | 1/19 | `src/nova/tests/unit/image/test_glance.py:L1632–L1655` |
| `TestCreate.test_create_v2_rejects_incompatible_disk_format` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/image/test_glance.py:L1657–L1667` |
| `TestCreate.test_create_success_v2_with_location` | method | (self, trans_to_mock, trans_from_mock, old_api=False, new_api=True) | public | `` (src/nova/tests/unit/image/test_glance.py:L1698) | 7/36 | `src/nova/tests/unit/image/test_glance.py:L1671–L1708` |
| `TestCreate.test_create_success_v2_with_location_old_api` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/image/test_glance.py:L1710–L1711` |
| `TestCreate.test_create_success_v2_with_location_no_api` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/image/test_glance.py:L1713–L1715` |
| `TestCreate.test_create_success_v2_with_sharing` | method | (self, trans_to_mock, trans_from_mock) | public | not declared | 1/27 | `src/nova/tests/unit/image/test_glance.py:L1719–L1771` |
| `TestCreate.test_create_success_v2_with_sharing.fake_call` | function | (_ctxt, _version, method, controller=None, args=None, kwargs=None) | public | `translated` (src/nova/tests/unit/image/test_glance.py:L1746); `mock.sentinel.member` (src/nova/tests/unit/image/test_glance.py:L1752) | — | `src/nova/tests/unit/image/test_glance.py:L1740–L1754` |
| `TestCreate.test_create_client_failure_v2` | method | (self, trans_to_mock, trans_from_mock, reraise_mock) | public | not declared | 1/14 | `src/nova/tests/unit/image/test_glance.py:L1776–L1790` |
| `TestCreate._test_get_image_create_disk_format_default` | method | (self, test_schema, expected_disk_format) | private | not declared | 1/11 | `src/nova/tests/unit/image/test_glance.py:L1792–L1802` |
| `TestCreate.test_get_image_create_disk_format_default_no_schema` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/image/test_glance.py:L1804–L1808` |
| `TestCreate.test_get_image_create_disk_format_default_single_entry` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/image/test_glance.py:L1810–L1821` |
| `TestCreate.test_get_image_create_disk_format_default_multiple_entries` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/image/test_glance.py:L1823–L1835` |
| `TestCreate.test_get_image_create_disk_format_default_multiple_entries_no_match` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/image/test_glance.py:L1837–L1850` |
| `TestUpdate` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L1853–L1983` |
| `TestUpdate.test_update_success_v2` | method | (self, trans_to_mock, trans_from_mock, show_mock, twrap_mock) | public | not declared | 1/46 | `src/nova/tests/unit/image/test_glance.py:L1860–L1915` |
| `TestUpdate.test_update_success_v2_with_location` | method | (self, trans_to_mock, trans_from_mock, show_mock) | public | not declared | 1/21 | `src/nova/tests/unit/image/test_glance.py:L1920–L1940` |
| `TestUpdate.test_update_client_failure_v2` | method | (self, trans_to_mock, trans_from_mock, reraise_mock, show_mock) | public | not declared | 1/36 | `src/nova/tests/unit/image/test_glance.py:L1946–L1983` |
| `TestDelete` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L1986–L2015` |
| `TestDelete.test_delete_success_v2` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/image/test_glance.py:L1990–L1997` |
| `TestDelete.test_delete_client_failure_v2` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/image/test_glance.py:L1999–L2005` |
| `TestDelete.test_delete_client_conflict_failure_v2` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/image/test_glance.py:L2007–L2015` |
| `TestGlanceApiServers` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L2019–L2058` |
| `TestGlanceApiServers.test_get_api_servers_multiple` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/image/test_glance.py:L2021–L2031` |
| `TestGlanceApiServers.test_get_api_servers_get_ksa_adapter` | method | (self, catalog_url, stripped) | public | not declared | 1/9 | `src/nova/tests/unit/image/test_glance.py:L2048–L2058` |
| `TestExtractAttributes` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L2061–L2077` |
| `TestExtractAttributes.test_extract_image_attributes_active_images_with_locations` | method | (self, mocked_schema) | public | not declared | 1/11 | `src/nova/tests/unit/image/test_glance.py:L2063–L2077` |
| `TestExtractQueryParams` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L2080–L2108` |
| `TestExtractQueryParams.test_detail_extract_query_params_v2` | method | (self, is_avail_mock, _trans_from_mock) | public | not declared | 1/23 | `src/nova/tests/unit/image/test_glance.py:L2083–L2108` |
| `TestTranslateToGlance` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L2111–L2162` |
| `TestTranslateToGlance.setUp` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/image/test_glance.py:L2114–L2140` |
| `TestTranslateToGlance.test_convert_to_v2` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/image/test_glance.py:L2142–L2162` |
| `TestSafeFSync` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L2169–L2202` |
| `TestSafeFSync.common` | method | (mock_isfifo, isfifo, mock_issock, issock, mock_fstat) | public | `fh` (src/nova/tests/unit/image/test_glance.py:L2187) | 2/14 | `src/nova/tests/unit/image/test_glance.py:L2172–L2187` |
| `TestSafeFSync.test_fsync` | method | (self, mock_fstat, mock_fsync, mock_isfifo, mock_issock) | public | not declared | 1/3 | `src/nova/tests/unit/image/test_glance.py:L2189–L2192` |
| `TestSafeFSync.test_fifo` | method | (self, mock_fstat, mock_fsync, mock_isfifo, mock_issock) | public | not declared | 1/3 | `src/nova/tests/unit/image/test_glance.py:L2194–L2197` |
| `TestSafeFSync.test_sock` | method | (self, mock_fstat, mock_fsync, mock_isfifo, mock_issock) | public | not declared | 1/3 | `src/nova/tests/unit/image/test_glance.py:L2199–L2202` |
| `TestImportCopy` | class | — | exported | not declared | — | `src/nova/tests/unit/image/test_glance.py:L2205–L2276` |
| `TestImportCopy._test_import` | method | (self, exception=None) | private | `client` (src/nova/tests/unit/image/test_glance.py:L2219) | 2/11 | `src/nova/tests/unit/image/test_glance.py:L2209–L2219` |
| `TestImportCopy.test_image_import_copy_success` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/image/test_glance.py:L2221–L2227` |
| `TestImportCopy.test_image_import_copy_not_found` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/image/test_glance.py:L2229–L2232` |
| `TestImportCopy.test_image_import_copy_not_authorized` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/image/test_glance.py:L2234–L2237` |
| `TestImportCopy.test_image_import_copy_failed_workflow` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/image/test_glance.py:L2239–L2242` |
| `TestImportCopy.test_image_import_copy_failed_already_imported` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/image/test_glance.py:L2244–L2247` |
| `TestImportCopy.test_api` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/image/test_glance.py:L2249–L2259` |
| `TestImportCopy.test_api_to_client` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/image/test_glance.py:L2261–L2276` |
| `tzinfo.utcoffset` | staticmethod | — | public | not declared | — | `src/nova/tests/unit/image/test_glance.py:L50–L52` |
| `TestSafeFSync.common` | staticmethod | — | public | not declared | — | `src/nova/tests/unit/image/test_glance.py:L2171–L2187` |

## Dependencies

- `import copy` (src/nova/tests/unit/image/test_glance.py:L17)
- `import datetime` (src/nova/tests/unit/image/test_glance.py:L18)
- `import io` (src/nova/tests/unit/image/test_glance.py:L19)
- `io`: imports `StringIO` (src/nova/tests/unit/image/test_glance.py:L20)
- `unittest`: imports `mock` (src/nova/tests/unit/image/test_glance.py:L21)
- `import urllib.parse as urlparse` (src/nova/tests/unit/image/test_glance.py:L22)
- `import cryptography` (src/nova/tests/unit/image/test_glance.py:L24)
- `cursive`: imports `exception as cursive_exception` (src/nova/tests/unit/image/test_glance.py:L25)
- `import ddt` (src/nova/tests/unit/image/test_glance.py:L26)
- `import glanceclient.common.utils` (src/nova/tests/unit/image/test_glance.py:L27)
- `import glanceclient.exc` (src/nova/tests/unit/image/test_glance.py:L28)
- `glanceclient.v1`: imports `images` (src/nova/tests/unit/image/test_glance.py:L29)
- `glanceclient.v2`: imports `schemas` (src/nova/tests/unit/image/test_glance.py:L30)
- `keystoneauth1`: imports `loading as ks_loading` (src/nova/tests/unit/image/test_glance.py:L31)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/image/test_glance.py:L32)
- `import testtools` (src/nova/tests/unit/image/test_glance.py:L33)
- `import nova.conf` (src/nova/tests/unit/image/test_glance.py:L35)
- `nova`: imports `context` (src/nova/tests/unit/image/test_glance.py:L36)
- `nova`: imports `exception` (src/nova/tests/unit/image/test_glance.py:L37)
- `nova.image`: imports `glance` (src/nova/tests/unit/image/test_glance.py:L38)
- `nova`: imports `objects` (src/nova/tests/unit/image/test_glance.py:L39)
- `nova`: imports `service_auth` (src/nova/tests/unit/image/test_glance.py:L40)
- `nova.storage`: imports `rbd_utils` (src/nova/tests/unit/image/test_glance.py:L41)
- `nova`: imports `test` (src/nova/tests/unit/image/test_glance.py:L42)

## Side Effects

- **network**: import glanceclient.common.utils (src/nova/tests/unit/image/test_glance.py:L27)
- **network**: import glanceclient.exc (src/nova/tests/unit/image/test_glance.py:L28)
- **network**: from glanceclient.v1 import images (src/nova/tests/unit/image/test_glance.py:L29)
- **network**: from glanceclient.v2 import schemas (src/nova/tests/unit/image/test_glance.py:L30)
- **network**: with mock.patch('glanceclient.common.utils._extract_request_id'): (src/nova/tests/unit/image/test_glance.py:L201)
- **network**: return glanceclient.common.utils.RequestIdProxy([data, None]) (src/nova/tests/unit/image/test_glance.py:L202)
- **network**: in_exc = glanceclient.exc.HTTPForbidden('123') (src/nova/tests/unit/image/test_glance.py:L230)
- **network**: in_exc = glanceclient.exc.HTTPForbidden('123') (src/nova/tests/unit/image/test_glance.py:L235)
- **network**: in_exc = glanceclient.exc.HTTPNotFound('123') (src/nova/tests/unit/image/test_glance.py:L240)
- **network**: in_exc = glanceclient.exc.HTTPNotFound('123') (src/nova/tests/unit/image/test_glance.py:L245)
- **network**: in_exc = glanceclient.exc.HTTPOverLimit('123') (src/nova/tests/unit/image/test_glance.py:L250)
- **network**: @mock.patch.object(service_auth, 'get_service_user_token_auth_plugin') (src/nova/tests/unit/image/test_glance.py:L302)
- **network**: @mock.patch('glanceclient.Client') (src/nova/tests/unit/image/test_glance.py:L304)
- **network**: side_effect = glanceclient.exc.HTTPServiceUnavailable (src/nova/tests/unit/image/test_glance.py:L360)
- **network**: client = self._get_static_client(create_client_mock) (src/nova/tests/unit/image/test_glance.py:L363)
- **network**: glanceclient.exc.HTTPServiceUnavailable, (src/nova/tests/unit/image/test_glance.py:L371)
- **network**: client = self._get_static_client(create_client_mock) (src/nova/tests/unit/image/test_glance.py:L376)
- **network**: glanceclient.exc.HTTPServiceUnavailable, (src/nova/tests/unit/image/test_glance.py:L385)
- **network**: raise glanceclient.exc.HTTPServiceUnavailable('Boom!') (src/nova/tests/unit/image/test_glance.py:L414)
- **network**: side_effect = glanceclient.exc.HTTPServiceUnavailable (src/nova/tests/unit/image/test_glance.py:L431)
- **network**: client_mock = mock.MagicMock(spec=glanceclient.Client) (src/nova/tests/unit/image/test_glance.py:L458)
- **network**: iterable = glanceclient.common.utils.IterableWithLength( (src/nova/tests/unit/image/test_glance.py:L521)
- **file-io**: @mock.patch('os.path.getsize') (src/nova/tests/unit/image/test_glance.py:L649)
- **network**: self.client.call.return_value = fake_glance_response( (src/nova/tests/unit/image/test_glance.py:L867)
- **network**: self.client.call.return_value = fake_glance_response( (src/nova/tests/unit/image/test_glance.py:L1018)
- **network**: glanceclient.common.utils.IterableWithLength( (src/nova/tests/unit/image/test_glance.py:L1019)
- **network**: self.client.call.return_value = fake_glance_response( (src/nova/tests/unit/image/test_glance.py:L1055)
- **network**: client.call.side_effect = glanceclient.exc.HTTPForbidden (src/nova/tests/unit/image/test_glance.py:L1391)
- **network**: client.call.side_effect = glanceclient.exc.HTTPForbidden (src/nova/tests/unit/image/test_glance.py:L1579)
- **network**: glanceclient.exc.HTTPNotImplemented, (src/nova/tests/unit/image/test_glance.py:L1685)
- **network**: client.call.side_effect = glanceclient.exc.HTTPBadRequest (src/nova/tests/unit/image/test_glance.py:L1783)
- **network**: client.call.side_effect = glanceclient.exc.HTTPForbidden (src/nova/tests/unit/image/test_glance.py:L1963)
- **network**: client.call.side_effect = glanceclient.exc.HTTPNotFound (src/nova/tests/unit/image/test_glance.py:L2001)
- **network**: client.call.side_effect = glanceclient.exc.HTTPConflict( (src/nova/tests/unit/image/test_glance.py:L2010)
- **network**: glanceclient.exc.HTTPNotFound) (src/nova/tests/unit/image/test_glance.py:L2232)
- **network**: glanceclient.exc.HTTPForbidden) (src/nova/tests/unit/image/test_glance.py:L2237)
- **network**: glanceclient.exc.HTTPConflict) (src/nova/tests/unit/image/test_glance.py:L2242)
- **network**: glanceclient.exc.HTTPBadRequest) (src/nova/tests/unit/image/test_glance.py:L2247)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/image/test_glance.py:L45)
- **global-mutation**: NOW_GLANCE_FORMAT = "2010-10-11T10:30:22.000000" (src/nova/tests/unit/image/test_glance.py:L46)
- **global-mutation**: NOW_DATETIME = datetime.datetime(2010, 10, 11, 10, 30, 22, tzinfo=tzinfo()) (src/nova/tests/unit/image/test_glance.py:L55)
- **global-mutation**: NOVA_IMAGE_ATTRIBUTES = set(['size', 'disk_format', 'owner', (src/nova/tests/unit/image/test_glance.py:L1436)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import loading as ks_loading (src/nova/tests/unit/image/test_glance.py:L31)
- **privilege** (`crypto-key`): @mock.patch.object(service_auth, 'get_service_user_token_auth_plugin') (src/nova/tests/unit/image/test_glance.py:L302)
- **sink** (`db-write`): verifier.update.assert_has_calls( (src/nova/tests/unit/image/test_glance.py:L702)
- **sink** (`db-write`): def update(self, data): (src/nova/tests/unit/image/test_glance.py:L839)
- **sink** (`db-write`): def update(self, data): (src/nova/tests/unit/image/test_glance.py:L846)
- **privilege** (`crypto-key`): raise cryptography.exceptions.InvalidSignature( (src/nova/tests/unit/image/test_glance.py:L850)
- **privilege** (`crypto-key`): self.assertRaises(cryptography.exceptions.InvalidSignature, (src/nova/tests/unit/image/test_glance.py:L964)
- **privilege** (`crypto-key`): self.assertRaises(cryptography.exceptions.InvalidSignature, (src/nova/tests/unit/image/test_glance.py:L1000)
- **privilege** (`crypto-key`): self.assertRaises(cryptography.exceptions.InvalidSignature, (src/nova/tests/unit/image/test_glance.py:L1027)
- **sink** (`db-write`): """Tests the update method of the GlanceImageServiceV2.""" (src/nova/tests/unit/image/test_glance.py:L1855)
- **sink** (`db-write`): image_meta = service.update( (src/nova/tests/unit/image/test_glance.py:L1886)
- **sink** (`db-write`): ctx, 2, 'update', kwargs=dict( (src/nova/tests/unit/image/test_glance.py:L1896)
- **sink** (`db-write`): service.update(ctx, mock.sentinel.image_id, {}, (src/nova/tests/unit/image/test_glance.py:L1907)
- **sink** (`db-write`): image_meta = service.update(ctx, mock.sentinel.image_id, (src/nova/tests/unit/image/test_glance.py:L1935)
- **sink** (`db-write`): service.update, ctx, mock.sentinel.image_id, (src/nova/tests/unit/image/test_glance.py:L1974)
- **sink** (`db-write`): ctx, 2, 'update', kwargs=dict( (src/nova/tests/unit/image/test_glance.py:L1977)
- **privilege** (`crypto-key`): with mock.patch('keystoneauth1.adapter.Adapter.' (src/nova/tests/unit/image/test_glance.py:L2051)

