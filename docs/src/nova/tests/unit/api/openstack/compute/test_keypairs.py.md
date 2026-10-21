# src/nova/tests/unit/api/openstack/compute/test_keypairs.py

## Overview

This file implements the `test_keypairs` module, defining 6 classs, 2 constants, 8 fields, 6 functions, 49 methods, 2 variables, 12 imports, 3 side effects.

Lines: total 599, code 485, comment 15, blank 99

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `QUOTAS` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L32–L32` |
| `keypair_data` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L35–L38` |
| `FAKE_UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L40–L40` |
| `keypair_name_2_92_compatible` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L42–L42` |
| `fake_keypair` | function | (name) | exported | `dict(test_keypair.fake_keypair, name=name, **keypair_data)` (src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L46) | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L45–L47` |
| `_fake_get_from_db` | function | (context, user_id, name=None, limit=None, marker=None) | unexported | `fake_keypair('FAKE')` (src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L54); `[fake_keypair('FAKE')]` (src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L55) | 3/6 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L50–L55` |
| `_fake_get_count_from_db` | function | (context, user_id) | unexported | `1` (src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L59) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L58–L59` |
| `_fake_create_in_db` | function | (context, values) | unexported | `fake_keypair(name=values['name'])` (src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L63) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L62–L63` |
| `_fake_destroy_in_db` | function | (context, user_id, name) | unexported | not declared | 4/5 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L66–L71` |
| `db_key_pair_create_duplicate` | function | (context) | exported | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L74–L75` |
| `KeypairsTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L78–L287` |
| `KeypairsTestV21.base_url` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L79–L79` |
| `KeypairsTestV21.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L80–L80` |
| `KeypairsTestV21._setup_app_and_controller` | method | (self) | private | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L82–L84` |
| `KeypairsTestV21.setUp` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L86–L104` |
| `KeypairsTestV21.test_keypair_list` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L106–L109` |
| `KeypairsTestV21.test_keypair_create` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L111–L116` |
| `KeypairsTestV21.test_keypair_create_with_empty_name` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L118–L123` |
| `KeypairsTestV21.test_keypair_create_with_name_too_long` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L125–L133` |
| `KeypairsTestV21.test_keypair_create_with_name_leading_trailing_spaces` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L135–L144` |
| `KeypairsTestV21.test_keypair_create_with_name_leading_trailing_spaces_compat_mode` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L146–L151` |
| `KeypairsTestV21.test_keypair_create_with_non_alphanumeric_name` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L153–L162` |
| `KeypairsTestV21.test_keypair_create_with_special_characters` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L164–L173` |
| `KeypairsTestV21.test_keypair_import_bad_key` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L175–L184` |
| `KeypairsTestV21.test_keypair_create_with_invalid_keypair_body` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L186–L191` |
| `KeypairsTestV21.test_keypair_import` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L193–L212` |
| `KeypairsTestV21.test_keypair_import_quota_limit` | method | (self, mock_check) | public | not declared | 1/20 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L215–L235` |
| `KeypairsTestV21.test_keypair_create_quota_limit` | method | (self, mock_check) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L238–L249` |
| `KeypairsTestV21.test_keypair_create_duplicate` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L251–L258` |
| `KeypairsTestV21.test_keypair_delete` | method | (self, mock_get_by_name) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L261–L264` |
| `KeypairsTestV21.test_keypair_get_keypair_not_found` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L266–L268` |
| `KeypairsTestV21.test_keypair_delete_not_found` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L270–L272` |
| `KeypairsTestV21.test_keypair_show` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L274–L280` |
| `KeypairsTestV21.test_keypair_show_not_found` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L282–L284` |
| `KeypairsTestV21._assert_keypair_type` | method | (self, res_dict) | private | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L286–L287` |
| `KeypairsTestV22` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L290–L304` |
| `KeypairsTestV22.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L291–L291` |
| `KeypairsTestV22.test_keypair_list` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L293–L297` |
| `KeypairsTestV22._assert_keypair_type` | method | (self, res_dict) | private | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L299–L300` |
| `KeypairsTestV22.test_keypair_create_with_name_leading_trailing_spaces_compat_mode` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L302–L304` |
| `KeypairsTestV210` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L307–L405` |
| `KeypairsTestV210.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L308–L308` |
| `KeypairsTestV210.test_keypair_create_with_name_leading_trailing_spaces_compat_mode` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L310–L312` |
| `KeypairsTestV210.test_keypair_list_other_user` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L314–L331` |
| `KeypairsTestV210.test_keypair_show_other_user` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L333–L346` |
| `KeypairsTestV210.test_keypair_delete_other_user` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L348–L358` |
| `KeypairsTestV210.test_keypair_create_other_user` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L360–L376` |
| `KeypairsTestV210.test_keypair_import_other_user` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L378–L395` |
| `KeypairsTestV210.test_keypair_list_other_user_invalid_in_old_microversion` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L397–L405` |
| `KeypairsTestV235` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L408–L469` |
| `KeypairsTestV235.base_url` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L409–L409` |
| `KeypairsTestV235.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L410–L410` |
| `KeypairsTestV235._setup_app_and_controller` | method | (self) | private | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L412–L414` |
| `KeypairsTestV235.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L416–L418` |
| `KeypairsTestV235.test_keypair_list_limit_and_marker` | method | (self, mock_kp_get) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L421–L435` |
| `KeypairsTestV235.test_keypair_list_limit_and_marker_invalid_marker` | method | (self, mock_kp_get) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L438–L445` |
| `KeypairsTestV235.test_keypair_list_limit_and_marker_invalid_limit` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L447–L453` |
| `KeypairsTestV235.test_keypair_list_limit_and_marker_invalid_in_old_microversion` | method | (self, mock_kp_get) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L456–L469` |
| `KeypairsTestV275` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L472–L517` |
| `KeypairsTestV275.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L473–L475` |
| `KeypairsTestV275.test_keypair_list_additional_param_old_version` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L477–L496` |
| `KeypairsTestV275.test_keypair_list_additional_param` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L498–L503` |
| `KeypairsTestV275.test_keypair_show_additional_param` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L505–L510` |
| `KeypairsTestV275.test_keypair_delete_additional_param` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L512–L517` |
| `KeypairsTestV292` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L520–L599` |
| `KeypairsTestV292.wsgi_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L521–L521` |
| `KeypairsTestV292.wsgi_old_api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L522–L522` |
| `KeypairsTestV292.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L524–L532` |
| `KeypairsTestV292.test_keypair_create_no_longer_supported` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L534–L541` |
| `KeypairsTestV292.test_keypair_create_works_with_old_version` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L543–L551` |
| `KeypairsTestV292.test_keypair_import_works_with_new_version` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L553–L570` |
| `KeypairsTestV292.test_keypair_create_refuses_special_chars_with_old_version` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L572–L579` |
| `KeypairsTestV292.test_keypair_import_with_special_characters` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L581–L599` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L16)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L18)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L19)
- `nova.api.openstack.compute`: imports `keypairs as keypairs_v21` (src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L21)
- `nova.api.openstack`: imports `wsgi as os_wsgi` (src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L22)
- `nova`: imports `context as nova_context` (src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L23)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L24)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L25)
- `nova`: imports `quota` (src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L26)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L27)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L28)
- `nova.tests.unit.objects`: imports `test_keypair` (src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L29)

## Side Effects

- **network**: from nova.api.openstack.compute import keypairs as keypairs_v21 (src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L21)
- **global-mutation**: QUOTAS = quota.QUOTAS (src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L32)
- **global-mutation**: FAKE_UUID = 'b48316c5-71e8-45e4-9884-6c78055b9b13' (src/nova/tests/unit/api/openstack/compute/test_keypairs.py:L40)

