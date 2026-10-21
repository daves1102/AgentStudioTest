# src/nova/tests/unit/test_utils.py

## Overview

This file implements the `test_utils` module, defining 22 classs, 1 constant, 3 fields, 20 functions, 136 methods, 28 imports, 7 side effects, 12 security surface entries.

Lines: total 1797, code 1376, comment 127, blank 294

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/test_utils.py:L45–L45` |
| `GenericUtilsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_utils.py:L48–L246` |
| `GenericUtilsTestCase.test_parse_server_string` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/test_utils.py:L49–L72` |
| `GenericUtilsTestCase.test_hostname_unicode_sanitization` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_utils.py:L74–L77` |
| `GenericUtilsTestCase.test_hostname_sanitize_periods` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_utils.py:L79–L82` |
| `GenericUtilsTestCase.test_hostname_sanitize_dashes` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_utils.py:L84–L87` |
| `GenericUtilsTestCase.test_hostname_sanitize_characters` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_utils.py:L89–L93` |
| `GenericUtilsTestCase.test_hostname_translate` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_utils.py:L95–L97` |
| `GenericUtilsTestCase.test_hostname_has_default` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_utils.py:L99–L103` |
| `GenericUtilsTestCase.test_hostname_empty_has_default` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_utils.py:L105–L109` |
| `GenericUtilsTestCase.test_hostname_empty_has_default_too_long` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_utils.py:L111–L115` |
| `GenericUtilsTestCase.test_hostname_empty_no_default` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_utils.py:L117–L119` |
| `GenericUtilsTestCase.test_hostname_empty_minus_period` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_utils.py:L121–L123` |
| `GenericUtilsTestCase.test_hostname_with_space` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_utils.py:L125–L127` |
| `GenericUtilsTestCase.test_hostname_too_long` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_utils.py:L129–L131` |
| `GenericUtilsTestCase.test_hostname_truncated_no_hyphen` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_utils.py:L133–L139` |
| `GenericUtilsTestCase.test_generate_password` | method | (self) | public | not declared | 7/7 | `src/nova/tests/unit/test_utils.py:L141–L147` |
| `GenericUtilsTestCase.test_get_shortened_ipv6` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/test_utils.py:L149–L161` |
| `GenericUtilsTestCase.test_get_shortened_ipv6_cidr` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/test_utils.py:L163–L173` |
| `GenericUtilsTestCase.test_safe_ip_format` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_utils.py:L175–L180` |
| `GenericUtilsTestCase.test_format_remote_path` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/test_utils.py:L182–L193` |
| `GenericUtilsTestCase.test_get_hash_str` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_utils.py:L195–L202` |
| `GenericUtilsTestCase.test_get_obj_repr_unicode` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_utils.py:L204–L209` |
| `GenericUtilsTestCase.test_ssh_execute` | method | (self, mock_execute) | public | not declared | 1/5 | `src/nova/tests/unit/test_utils.py:L212–L216` |
| `GenericUtilsTestCase.test_generate_hostid` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_utils.py:L218–L222` |
| `GenericUtilsTestCase.test_generate_hostid_with_none_host` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_utils.py:L224–L226` |
| `GenericUtilsTestCase.test_tpool_wrap_eventlet` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/test_utils.py:L228–L238` |
| `GenericUtilsTestCase.test_tpool_wrap_threading` | method | (self, mock_concurrency_mode) | public | not declared | 1/5 | `src/nova/tests/unit/test_utils.py:L241–L246` |
| `TestCachedFile` | class | — | exported | not declared | — | `src/nova/tests/unit/test_utils.py:L249–L289` |
| `TestCachedFile.test_read_cached_file` | method | (self, getmtime) | public | not declared | 1/7 | `src/nova/tests/unit/test_utils.py:L251–L257` |
| `TestCachedFile.test_read_modified_cached_file` | method | (self, getmtime) | public | not declared | 1/10 | `src/nova/tests/unit/test_utils.py:L260–L273` |
| `TestCachedFile.test_delete_cached_file` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_utils.py:L275–L282` |
| `TestCachedFile.test_delete_cached_file_not_exist` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_utils.py:L284–L289` |
| `AuditPeriodTest` | class | — | exported | not declared | — | `src/nova/tests/unit/test_utils.py:L292–L449` |
| `AuditPeriodTest.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_utils.py:L294–L303` |
| `AuditPeriodTest.test_hour` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/test_utils.py:L305–L316` |
| `AuditPeriodTest.test_hour_with_offset_before_current` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/test_utils.py:L318–L331` |
| `AuditPeriodTest.test_hour_with_offset_after_current` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/test_utils.py:L333–L346` |
| `AuditPeriodTest.test_day` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_utils.py:L348–L357` |
| `AuditPeriodTest.test_day_with_offset_before_current` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/test_utils.py:L359–L370` |
| `AuditPeriodTest.test_day_with_offset_after_current` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/test_utils.py:L372–L383` |
| `AuditPeriodTest.test_month` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_utils.py:L385–L394` |
| `AuditPeriodTest.test_month_with_offset_before_current` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_utils.py:L396–L405` |
| `AuditPeriodTest.test_month_with_offset_after_current` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_utils.py:L407–L416` |
| `AuditPeriodTest.test_year` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_utils.py:L418–L427` |
| `AuditPeriodTest.test_year_with_offset_before_current` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_utils.py:L429–L438` |
| `AuditPeriodTest.test_year_with_offset_after_current` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_utils.py:L440–L449` |
| `MetadataToDictTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_utils.py:L452–L491` |
| `MetadataToDictTestCase.test_metadata_to_dict` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_utils.py:L453–L457` |
| `MetadataToDictTestCase.test_metadata_to_dict_with_include_deleted` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/test_utils.py:L459–L473` |
| `MetadataToDictTestCase.test_metadata_to_dict_empty` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_utils.py:L475–L478` |
| `MetadataToDictTestCase.test_dict_to_metadata` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_utils.py:L480–L488` |
| `MetadataToDictTestCase.test_dict_to_metadata.sort_key` | function | (adict) | public | `sorted(adict.items())` (src/nova/tests/unit/test_utils.py:L482) | — | `src/nova/tests/unit/test_utils.py:L481–L482` |
| `MetadataToDictTestCase.test_dict_to_metadata_empty` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_utils.py:L490–L491` |
| `ExpectedArgsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_utils.py:L494–L543` |
| `ExpectedArgsTestCase.test_passes` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_utils.py:L495–L505` |
| `ExpectedArgsTestCase.test_passes.dec` | function | (f) | public | `f` (src/nova/tests/unit/test_utils.py:L498) | — | `src/nova/tests/unit/test_utils.py:L497–L498` |
| `ExpectedArgsTestCase.test_passes.func` | function | (foo, bar, baz="lol") | public | not declared | — | `src/nova/tests/unit/test_utils.py:L501–L502` |
| `ExpectedArgsTestCase.test_raises` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_utils.py:L507–L515` |
| `ExpectedArgsTestCase.test_raises.dec` | function | (f) | public | `f` (src/nova/tests/unit/test_utils.py:L510) | — | `src/nova/tests/unit/test_utils.py:L509–L510` |
| `ExpectedArgsTestCase.test_raises.func` | function | (bar, baz) | public | not declared | — | `src/nova/tests/unit/test_utils.py:L512–L513` |
| `ExpectedArgsTestCase.test_var_no_of_args` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_utils.py:L517–L527` |
| `ExpectedArgsTestCase.test_var_no_of_args.dec` | function | (f) | public | `f` (src/nova/tests/unit/test_utils.py:L520) | — | `src/nova/tests/unit/test_utils.py:L519–L520` |
| `ExpectedArgsTestCase.test_var_no_of_args.func` | function | (bar, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/test_utils.py:L523–L524` |
| `ExpectedArgsTestCase.test_more_layers` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_utils.py:L529–L543` |
| `ExpectedArgsTestCase.test_more_layers.dec` | function | (f) | public | `f` (src/nova/tests/unit/test_utils.py:L532) | — | `src/nova/tests/unit/test_utils.py:L531–L532` |
| `ExpectedArgsTestCase.test_more_layers.dec_2` | function | (f) | public | `inner_f` (src/nova/tests/unit/test_utils.py:L537) | — | `src/nova/tests/unit/test_utils.py:L534–L537` |
| `ExpectedArgsTestCase.test_more_layers.dec_2.inner_f` | function | (*a, **k) | public | `f()` (src/nova/tests/unit/test_utils.py:L536) | — | `src/nova/tests/unit/test_utils.py:L535–L536` |
| `ExpectedArgsTestCase.test_more_layers.func` | function | (bar, baz) | public | not declared | — | `src/nova/tests/unit/test_utils.py:L540–L541` |
| `StringLengthTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_utils.py:L546–L571` |
| `StringLengthTestCase.test_check_string_length` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/test_utils.py:L547–L558` |
| `StringLengthTestCase.test_check_string_length_noname` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/test_utils.py:L560–L571` |
| `ValidateIntegerTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_utils.py:L574–L593` |
| `ValidateIntegerTestCase.test_exception_converted` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/test_utils.py:L575–L593` |
| `AutoDiskConfigUtilTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_utils.py:L596–L604` |
| `AutoDiskConfigUtilTestCase.test_is_auto_disk_config_disabled` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_utils.py:L597–L598` |
| `AutoDiskConfigUtilTestCase.test_is_auto_disk_config_disabled_none` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_utils.py:L600–L601` |
| `AutoDiskConfigUtilTestCase.test_is_auto_disk_config_disabled_false` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_utils.py:L603–L604` |
| `GetSystemMetadataFromImageTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_utils.py:L607–L693` |
| `GetSystemMetadataFromImageTestCase.get_image` | method | (self) | public | `image_meta` (src/nova/tests/unit/test_utils.py:L618) | 1/10 | `src/nova/tests/unit/test_utils.py:L608–L618` |
| `GetSystemMetadataFromImageTestCase.get_flavor` | method | (self) | public | `flavor` (src/nova/tests/unit/test_utils.py:L626) | 1/6 | `src/nova/tests/unit/test_utils.py:L620–L626` |
| `GetSystemMetadataFromImageTestCase.test_base_image_properties` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/test_utils.py:L628–L638` |
| `GetSystemMetadataFromImageTestCase.test_inherit_image_properties` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/test_utils.py:L640–L649` |
| `GetSystemMetadataFromImageTestCase.test_skip_image_properties` | method | (self) | public | not declared | 3/13 | `src/nova/tests/unit/test_utils.py:L651–L667` |
| `GetSystemMetadataFromImageTestCase.test_vhd_min_disk_image` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_utils.py:L669–L680` |
| `GetSystemMetadataFromImageTestCase.test_dont_inherit_empty_values` | method | (self) | public | not declared | 3/8 | `src/nova/tests/unit/test_utils.py:L682–L693` |
| `GetImageFromSystemMetadataTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_utils.py:L696–L741` |
| `GetImageFromSystemMetadataTestCase.get_system_metadata` | method | (self) | public | `sys_meta` (src/nova/tests/unit/test_utils.py:L705) | 1/8 | `src/nova/tests/unit/test_utils.py:L697–L705` |
| `GetImageFromSystemMetadataTestCase.test_image_from_system_metadata` | method | (self) | public | not declared | 3/15 | `src/nova/tests/unit/test_utils.py:L707–L728` |
| `GetImageFromSystemMetadataTestCase.test_dont_inherit_empty_values` | method | (self) | public | not declared | 3/8 | `src/nova/tests/unit/test_utils.py:L730–L741` |
| `SafeTruncateTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_utils.py:L744–L761` |
| `SafeTruncateTestCase.test_exception_to_dict_with_long_message_3_bytes` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_utils.py:L745–L752` |
| `SafeTruncateTestCase.test_exception_to_dict_with_long_message_2_bytes` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_utils.py:L754–L761` |
| `TestObjectCallHelpers` | class | — | exported | not declared | — | `src/nova/tests/unit/test_utils.py:L764–L824` |
| `TestObjectCallHelpers.test_with_primitives` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_utils.py:L765–L771` |
| `TestObjectCallHelpers.test_with_object` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/test_utils.py:L773–L785` |
| `TestObjectCallHelpers.test_with_object_multiple` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/test_utils.py:L787–L824` |
| `GetKSAAdapterTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_utils.py:L827–L897` |
| `GetKSAAdapterTestCase.setUp` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/test_utils.py:L830–L847` |
| `GetKSAAdapterTestCase.test_bogus_service_type` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_utils.py:L849–L854` |
| `GetKSAAdapterTestCase.test_all_params` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_utils.py:L856–L869` |
| `GetKSAAdapterTestCase.test_auth_from_session` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_utils.py:L871–L883` |
| `GetKSAAdapterTestCase.test_load_auth_and_session` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_utils.py:L885–L897` |
| `TestResourceClassNormalize` | class | — | exported | not declared | — | `src/nova/tests/unit/test_utils.py:L900–L918` |
| `TestResourceClassNormalize.test_normalize_name` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/test_utils.py:L902–L911` |
| `TestResourceClassNormalize.test_normalize_name_bug_1762789` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_utils.py:L913–L918` |
| `TestGetConfGroup` | class | — | exported | not declared | — | `src/nova/tests/unit/test_utils.py:L921–L954` |
| `TestGetConfGroup.test__get_conf_group` | method | (self, mock_get_project_name, mock_conf) | public | not declared | 1/12 | `src/nova/tests/unit/test_utils.py:L925–L940` |
| `TestGetConfGroup.test__get_conf_group_fail` | method | (self, mock_get_project_name) | public | not declared | 1/8 | `src/nova/tests/unit/test_utils.py:L943–L954` |
| `TestGetAuthAndSession` | class | — | exported | not declared | — | `src/nova/tests/unit/test_utils.py:L957–L1034` |
| `TestGetAuthAndSession.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_utils.py:L960–L968` |
| `TestGetAuthAndSession.test_auth_and_session` | method | (self, mock_load_session, mock_load_auth) | public | not declared | 1/7 | `src/nova/tests/unit/test_utils.py:L972–L979` |
| `TestGetAuthAndSession.test_no_session` | method | (self, mock_CONF, mock_load_session, mock_load_auth) | public | not declared | 1/9 | `src/nova/tests/unit/test_utils.py:L984–L995` |
| `TestGetAuthAndSession.test_no_auth` | method | (self, mock_load_session, mock_load_auth) | public | not declared | 1/6 | `src/nova/tests/unit/test_utils.py:L999–L1005` |
| `TestGetAuthAndSession.test_no_auth_no_sauth` | method | (self, mock_CONF, mock_load_session, mock_load_auth) | public | not declared | 1/9 | `src/nova/tests/unit/test_utils.py:L1010–L1019` |
| `TestGetAuthAndSession.test__get_auth_and_session` | method | (self, mock_CONF, mock_load_session, mock_load_auth) | public | not declared | 1/10 | `src/nova/tests/unit/test_utils.py:L1024–L1034` |
| `TestGetSDKAdapter` | class | — | exported | not declared | — | `src/nova/tests/unit/test_utils.py:L1037–L1114` |
| `TestGetSDKAdapter.setUp` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/test_utils.py:L1040–L1059` |
| `TestGetSDKAdapter._test_get_sdk_adapter` | method | (self, admin, strict=False) | private | `actual` (src/nova/tests/unit/test_utils.py:L1073) | 1/11 | `src/nova/tests/unit/test_utils.py:L1061–L1073` |
| `TestGetSDKAdapter.test_get_sdk_adapter` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_utils.py:L1075–L1078` |
| `TestGetSDKAdapter.test_get_sdk_adapter_ksa_auth` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/test_utils.py:L1080–L1094` |
| `TestGetSDKAdapter.test_get_sdk_adapter_strict` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_utils.py:L1096–L1098` |
| `TestGetSDKAdapter.test_get_sdk_adapter_strict_fail` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_utils.py:L1100–L1104` |
| `TestGetSDKAdapter.test_get_sdk_adapter_conf_group_fail` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_utils.py:L1106–L1114` |
| `TestOldComputeCheck` | class | — | exported | not declared | — | `src/nova/tests/unit/test_utils.py:L1117–L1200` |
| `TestOldComputeCheck.test_no_compute` | method | (self, mock_get_min_service) | public | not declared | 1/5 | `src/nova/tests/unit/test_utils.py:L1120–L1126` |
| `TestOldComputeCheck.test_old_but_supported_compute` | method | (self, mock_get_min_service) | public | not declared | 1/7 | `src/nova/tests/unit/test_utils.py:L1129–L1137` |
| `TestOldComputeCheck.test_new_compute` | method | (self, mock_get_min_service) | public | not declared | 1/5 | `src/nova/tests/unit/test_utils.py:L1140–L1146` |
| `TestOldComputeCheck.test_too_old_compute_cell` | method | (self, mock_get_min_service) | public | not declared | 1/9 | `src/nova/tests/unit/test_utils.py:L1149–L1159` |
| `TestOldComputeCheck.test_too_old_compute_top_level` | method | (self, mock_get_min_service) | public | not declared | 1/10 | `src/nova/tests/unit/test_utils.py:L1162–L1173` |
| `TestOldComputeCheck.test_api_db_is_configured_but_the_service_cannot_access_db` | method | (self, mock_get_all, mock_get, mock_warn) | public | not declared | 1/17 | `src/nova/tests/unit/test_utils.py:L1178–L1200` |
| `RunOnceTests` | class | — | exported | not declared | — | `src/nova/tests/unit/test_utils.py:L1203–L1298` |
| `RunOnceTests.fake_logger` | field | — | public | not declared | — | `src/nova/tests/unit/test_utils.py:L1205–L1205` |
| `RunOnceTests.dummy_test_func` | method | (self, fail=False) | public | `True` (src/nova/tests/unit/test_utils.py:L1211) | 2/4 | `src/nova/tests/unit/test_utils.py:L1208–L1211` |
| `RunOnceTests.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_utils.py:L1213–L1216` |
| `RunOnceTests.test_wrapped_functions_called_once` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_utils.py:L1218–L1228` |
| `RunOnceTests.test_wrapped_functions_called_once_raises` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_utils.py:L1230–L1239` |
| `RunOnceTests.test_wrapped_functions_can_be_reset` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_utils.py:L1241–L1254` |
| `RunOnceTests.test_reset_calls_cleanup` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_utils.py:L1256–L1269` |
| `RunOnceTests.test_reset_calls_cleanup.f` | function | — | public | not declared | — | `src/nova/tests/unit/test_utils.py:L1261–L1262` |
| `RunOnceTests.test_clean_is_not_called_at_reset_if_wrapped_not_called` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_utils.py:L1271–L1283` |
| `RunOnceTests.test_clean_is_not_called_at_reset_if_wrapped_not_called.f` | function | — | public | not declared | — | `src/nova/tests/unit/test_utils.py:L1276–L1277` |
| `RunOnceTests.test_reset_works_even_if_cleanup_raises` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_utils.py:L1285–L1298` |
| `RunOnceTests.test_reset_works_even_if_cleanup_raises.f` | function | — | public | not declared | — | `src/nova/tests/unit/test_utils.py:L1290–L1291` |
| `LatchErrorOnRaiseTests` | class | — | exported | not declared | — | `src/nova/tests/unit/test_utils.py:L1301–L1353` |
| `LatchErrorOnRaiseTests.error` | field | — | public | not declared | — | `src/nova/tests/unit/test_utils.py:L1303–L1303` |
| `LatchErrorOnRaiseTests.unrecoverable` | field | — | public | not declared | — | `src/nova/tests/unit/test_utils.py:L1304–L1304` |
| `LatchErrorOnRaiseTests.dummy_test_func` | method | (self, error=None) | public | `True` (src/nova/tests/unit/test_utils.py:L1310) | 2/4 | `src/nova/tests/unit/test_utils.py:L1307–L1310` |
| `LatchErrorOnRaiseTests.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_utils.py:L1312–L1314` |
| `LatchErrorOnRaiseTests.test_wrapped_success` | method | (self, fake_logger) | public | not declared | 1/4 | `src/nova/tests/unit/test_utils.py:L1317–L1320` |
| `LatchErrorOnRaiseTests.test_wrapped_raises_recoverable` | method | (self, fake_logger) | public | not declared | 1/8 | `src/nova/tests/unit/test_utils.py:L1323–L1333` |
| `LatchErrorOnRaiseTests.test_wrapped_raises_unrecoverable` | method | (self, fake_logger) | public | not declared | 1/8 | `src/nova/tests/unit/test_utils.py:L1336–L1343` |
| `LatchErrorOnRaiseTests.test_wrapped_raises_forever` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_utils.py:L1346–L1353` |
| `OsloServiceBackendSelectionTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_utils.py:L1356–L1480` |
| `OsloServiceBackendSelectionTestCase.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_utils.py:L1357–L1369` |
| `OsloServiceBackendSelectionTestCase.setUp.reset` | function | — | public | not declared | — | `src/nova/tests/unit/test_utils.py:L1367–L1368` |
| `OsloServiceBackendSelectionTestCase.test_eventlet_selected` | method | (self, init_backend) | public | not declared | 2/8 | `src/nova/tests/unit/test_utils.py:L1372–L1381` |
| `OsloServiceBackendSelectionTestCase.test_threading_eventlet_poisoned` | method | (self, init_backend) | public | not declared | 2/13 | `src/nova/tests/unit/test_utils.py:L1384–L1401` |
| `OsloServiceBackendSelectionTestCase.test_threading_eventlet_poisoned.eventlet_import` | function | — | public | not declared | — | `src/nova/tests/unit/test_utils.py:L1395–L1396` |
| `OsloServiceBackendSelectionTestCase.test_threading_selected_by_default` | method | (self, init_backend) | public | not declared | 2/10 | `src/nova/tests/unit/test_utils.py:L1404–L1415` |
| `OsloServiceBackendSelectionTestCase.test_invalid_default_backend` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_utils.py:L1417–L1420` |
| `OsloServiceBackendSelectionTestCase.test_config_threading_overrides_eventlet_default` | method | (self, mock_cfg, init_backend, mock_poison) | public | not declared | 1/8 | `src/nova/tests/unit/test_utils.py:L1426–L1437` |
| `OsloServiceBackendSelectionTestCase.test_config_eventlet_overrides_threading_default` | method | (self, mock_cfg, init_backend) | public | not declared | 1/6 | `src/nova/tests/unit/test_utils.py:L1442–L1451` |
| `OsloServiceBackendSelectionTestCase.test_config_auto_defers_to_binary_default_threading` | method | (self, mock_cfg, init_backend, mock_poison) | public | not declared | 1/8 | `src/nova/tests/unit/test_utils.py:L1457–L1467` |
| `OsloServiceBackendSelectionTestCase.test_config_auto_defers_to_binary_default_eventlet` | method | (self, mock_cfg, init_backend) | public | not declared | 1/6 | `src/nova/tests/unit/test_utils.py:L1472–L1480` |
| `TestFairLockGuard` | class | — | exported | not declared | — | `src/nova/tests/unit/test_utils.py:L1483–L1797` |
| `TestFairLockGuard.test_aquire_single_lock` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_utils.py:L1485–L1493` |
| `TestFairLockGuard.test_aquire_multiple_locks` | method | (self) | public | not declared | 4/13 | `src/nova/tests/unit/test_utils.py:L1495–L1507` |
| `TestFairLockGuard.test_aquire_multiple_locks_sorted` | method | (self) | public | not declared | 4/15 | `src/nova/tests/unit/test_utils.py:L1509–L1523` |
| `TestFairLockGuard.test_locks_are_released_on_exception` | method | (self) | public | not declared | 4/15 | `src/nova/tests/unit/test_utils.py:L1525–L1539` |
| `TestFairLockGuard.test_partial_acquire` | method | (self) | public | not declared | 2/24 | `src/nova/tests/unit/test_utils.py:L1541–L1577` |
| `TestFairLockGuard.test_partial_acquire.worker` | function | — | public | not declared | — | `src/nova/tests/unit/test_utils.py:L1550–L1556` |
| `TestFairLockGuard.test_thread_ordering_subset_locks` | method | (self) | public | not declared | 3/34 | `src/nova/tests/unit/test_utils.py:L1579–L1650` |
| `TestFairLockGuard.test_thread_ordering_subset_locks.thread1` | function | — | public | not declared | — | `src/nova/tests/unit/test_utils.py:L1599–L1612` |
| `TestFairLockGuard.test_thread_ordering_subset_locks.thread2` | function | — | public | not declared | — | `src/nova/tests/unit/test_utils.py:L1614–L1621` |
| `TestFairLockGuard.test_context_manager_shared_between_threads` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/test_utils.py:L1652–L1676` |
| `TestFairLockGuard.test_context_manager_shared_between_threads.worker` | function | (id, lock_guard) | public | not declared | — | `src/nova/tests/unit/test_utils.py:L1664–L1668` |
| `TestFairLockGuard.test_context_manager_can_be_acquired_multiple_times` | method | (self) | public | not declared | 3/17 | `src/nova/tests/unit/test_utils.py:L1678–L1695` |
| `TestFairLockGuard.test_nested_context_managers` | method | (self) | public | not declared | 2/32 | `src/nova/tests/unit/test_utils.py:L1697–L1741` |
| `TestFairLockGuard.test_deep_nesting` | method | (self, mock_fair_locks) | public | not declared | 1/15 | `src/nova/tests/unit/test_utils.py:L1744–L1764` |
| `TestFairLockGuard.test_nested_exception_outer_still_holds_locks` | method | (self, mock_fair_locks) | public | not declared | 2/16 | `src/nova/tests/unit/test_utils.py:L1767–L1786` |
| `TestFairLockGuard.test_empty_lock_list` | method | (self, mock_fair_locks) | public | not declared | 1/5 | `src/nova/tests/unit/test_utils.py:L1789–L1797` |

## Dependencies

- `import datetime` (src/nova/tests/unit/test_utils.py:L15)
- `import hashlib` (src/nova/tests/unit/test_utils.py:L16)
- `import os` (src/nova/tests/unit/test_utils.py:L17)
- `import os.path` (src/nova/tests/unit/test_utils.py:L18)
- `import threading` (src/nova/tests/unit/test_utils.py:L19)
- `import time` (src/nova/tests/unit/test_utils.py:L20)
- `unittest`: imports `mock` (src/nova/tests/unit/test_utils.py:L21)
- `import fasteners` (src/nova/tests/unit/test_utils.py:L23)
- `import fixtures` (src/nova/tests/unit/test_utils.py:L24)
- `keystoneauth1.identity`: imports `base as ks_identity` (src/nova/tests/unit/test_utils.py:L25)
- `keystoneauth1`: imports `session as ks_session` (src/nova/tests/unit/test_utils.py:L26)
- `import netaddr` (src/nova/tests/unit/test_utils.py:L27)
- `openstack`: imports `exceptions as sdk_exc` (src/nova/tests/unit/test_utils.py:L28)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/test_utils.py:L29)
- `import oslo_service.backend as oslo_backend` (src/nova/tests/unit/test_utils.py:L30)
- `oslo_utils`: imports `encodeutils` (src/nova/tests/unit/test_utils.py:L31)
- `oslo_utils`: imports `fixture as utils_fixture` (src/nova/tests/unit/test_utils.py:L32)
- `nova`: imports `exception` (src/nova/tests/unit/test_utils.py:L34)
- `nova`: imports `monkey_patch` (src/nova/tests/unit/test_utils.py:L35)
- `nova.objects`: imports `base as obj_base` (src/nova/tests/unit/test_utils.py:L36)
- `nova.objects`: imports `instance as instance_obj` (src/nova/tests/unit/test_utils.py:L37)
- `nova.objects`: imports `service as service_obj` (src/nova/tests/unit/test_utils.py:L38)
- `nova`: imports `test` (src/nova/tests/unit/test_utils.py:L39)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/test_utils.py:L40)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/test_utils.py:L41)
- `nova.tests.unit`: imports `utils as test_utils` (src/nova/tests/unit/test_utils.py:L42)
- `nova`: imports `utils` (src/nova/tests/unit/test_utils.py:L43)
- `import eventlet` (src/nova/tests/unit/test_utils.py:L1396)

## Side Effects

- **file-io**: @mock.patch('os.path.getmtime', return_value=1) (src/nova/tests/unit/test_utils.py:L250)
- **file-io**: @mock.patch('os.path.getmtime', return_value=2) (src/nova/tests/unit/test_utils.py:L259)
- **network**: """Tests for nova.utils.get_sdk_adapter""" (src/nova/tests/unit/test_utils.py:L1038)
- **network**: actual = utils.get_sdk_adapter( (src/nova/tests/unit/test_utils.py:L1062)
- **network**: actual = utils.get_sdk_adapter( (src/nova/tests/unit/test_utils.py:L1085)
- **network**: utils.get_sdk_adapter, self.service_type, True) (src/nova/tests/unit/test_utils.py:L1111)
- **global-mutation**: CONF = cfg.CONF (src/nova/tests/unit/test_utils.py:L45)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1.identity import base as ks_identity (src/nova/tests/unit/test_utils.py:L25)
- **privilege** (`crypto-key`): from keystoneauth1 import session as ks_session (src/nova/tests/unit/test_utils.py:L26)
- **privilege** (`crypto-key`): 'keystoneauth1.loading.load_adapter_from_conf_options') (src/nova/tests/unit/test_utils.py:L837)
- **entry-point** (`env`): env = os.environ.get('OS_NOVA_DISABLE_EVENTLET_PATCHING', '').lower() (src/nova/tests/unit/test_utils.py:L1373)
- **entry-point** (`env`): env = os.environ.get( (src/nova/tests/unit/test_utils.py:L1385)
- **entry-point** (`env`): env = os.environ.get( (src/nova/tests/unit/test_utils.py:L1405)
- **entry-point** (`env`): with mock.patch.dict(os.environ): (src/nova/tests/unit/test_utils.py:L1410)
- **entry-point** (`env`): del os.environ["OS_NOVA_DISABLE_EVENTLET_PATCHING"] (src/nova/tests/unit/test_utils.py:L1411)
- **entry-point** (`env`): with mock.patch.dict(os.environ, (src/nova/tests/unit/test_utils.py:L1431)
- **entry-point** (`env`): with mock.patch.dict(os.environ, (src/nova/tests/unit/test_utils.py:L1447)
- **entry-point** (`env`): with mock.patch.dict(os.environ, (src/nova/tests/unit/test_utils.py:L1461)
- **entry-point** (`env`): with mock.patch.dict(os.environ, (src/nova/tests/unit/test_utils.py:L1476)

