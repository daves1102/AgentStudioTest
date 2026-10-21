# src/nova/tests/functional/api_sample_tests/test_server_shares.py

## Overview

This file implements the `test_server_shares` module, defining 3 classs, 1 constant, 3 fields, 38 methods, 7 imports, 1 side effect.

Lines: total 514, code 433, comment 23, blank 58

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServerSharesBase` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L22–L61` |
| `ServerSharesBase.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L23–L23` |
| `ServerSharesBase.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L24–L24` |
| `ServerSharesBase.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L25–L25` |
| `ServerSharesBase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L27–L30` |
| `ServerSharesBase._get_create_subs` | method | (self) | private | `{'share_id': 'e8debdc0-447a-4376-a10a-4cd9122d7986', 'uuid': '[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}' '-[0-9a-f]{4}-[0-9a-f]{12}', }` (src/nova/tests/functional/api_sample_tests/test_server_shares.py:L33) | 1/5 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L32–L36` |
| `ServerSharesBase.create_server_ok` | method | (self, requested_flavor=None) | public | `server['id']` (src/nova/tests/functional/api_sample_tests/test_server_shares.py:L42) | 1/5 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L38–L42` |
| `ServerSharesBase.create_server_not_stopped` | method | (self) | public | `server['id']` (src/nova/tests/functional/api_sample_tests/test_server_shares.py:L46) | 1/3 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L44–L46` |
| `ServerSharesBase._post_server_shares` | method | (self) | private | `uuid` (src/nova/tests/functional/api_sample_tests/test_server_shares.py:L61) | 1/9 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L48–L61` |
| `ServerSharesJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L64–L406` |
| `ServerSharesJsonTest.test_server_shares_create` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L65–L68` |
| `ServerSharesJsonTest.test_server_shares_create_fails_if_already_created` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L70–L85` |
| `ServerSharesJsonTest.test_server_shares_create_with_tag_fails_if_already_created` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L87–L102` |
| `ServerSharesJsonTest.test_server_shares_create_fails_instance_not_stopped` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L104–L113` |
| `ServerSharesJsonTest.test_server_shares_create_fails_incorrect_configuration` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L115–L131` |
| `ServerSharesJsonTest.test_server_shares_create_fails_cannot_allow_policy` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L133–L152` |
| `ServerSharesJsonTest.test_server_shares_create_with_alternative_flavor` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L154–L168` |
| `ServerSharesJsonTest.test_server_shares_create_fails_share_not_found` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L170–L182` |
| `ServerSharesJsonTest.test_server_shares_create_unknown_instance` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L184–L195` |
| `ServerSharesJsonTest.test_server_shares_create_fails_share_in_error` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L197–L214` |
| `ServerSharesJsonTest.test_server_shares_create_fails_export_location_missing` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L216–L233` |
| `ServerSharesJsonTest.test_server_shares_create_fails_unknown_protocol` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L235–L248` |
| `ServerSharesJsonTest.test_server_shares_index` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L250–L256` |
| `ServerSharesJsonTest.test_server_shares_index_unknown_instance` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L258–L266` |
| `ServerSharesJsonTest.test_server_shares_show` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L268–L276` |
| `ServerSharesJsonTest.test_server_shares_show_fails_share_not_found` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L278–L291` |
| `ServerSharesJsonTest.test_server_shares_show_unknown_instance` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L293–L305` |
| `ServerSharesJsonTest.test_server_shares_delete` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L307–L321` |
| `ServerSharesJsonTest.test_server_shares_delete_instance` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L323–L346` |
| `ServerSharesJsonTest.test_server_shares_delete_fails_share_not_found` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L348–L355` |
| `ServerSharesJsonTest.test_server_shares_delete_fails_instance_not_stopped` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L357–L368` |
| `ServerSharesJsonTest.test_server_shares_delete_unknown_instance` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L370–L385` |
| `ServerSharesJsonTest.test_server_shares_delete_fails_cannot_deny_policy` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L387–L406` |
| `ServerSharesJsonAdminTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L409–L514` |
| `ServerSharesJsonAdminTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L410–L410` |
| `ServerSharesJsonAdminTest._post_server_shares` | method | (self) | private | `uuid` (src/nova/tests/functional/api_sample_tests/test_server_shares.py:L424) | 1/9 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L412–L424` |
| `ServerSharesJsonAdminTest.test_server_shares_create` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L426–L429` |
| `ServerSharesJsonAdminTest.test_server_shares_show` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L431–L442` |
| `ServerSharesJsonAdminTest._block_action` | method | (self, body) | private | not declared | 1/13 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L444–L458` |
| `ServerSharesJsonAdminTest.test_shelve_server_with_share_fails` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L460–L461` |
| `ServerSharesJsonAdminTest.test_suspend_server_with_share_fails` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L463–L464` |
| `ServerSharesJsonAdminTest.test_evacuate_server_with_share_fails` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L466–L467` |
| `ServerSharesJsonAdminTest.test_resize_server_with_share_fails` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L469–L486` |
| `ServerSharesJsonAdminTest.test_migrate_server_with_share_fails` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L488–L505` |
| `ServerSharesJsonAdminTest.test_live_migrate_server_with_share_fails` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_server_shares.py:L507–L514` |

## Dependencies

- `nova.compute`: imports `api as compute` (src/nova/tests/functional/api_sample_tests/test_server_shares.py:L13)
- `nova`: imports `exception` (src/nova/tests/functional/api_sample_tests/test_server_shares.py:L14)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/api_sample_tests/test_server_shares.py:L15)
- `nova.tests.functional.api`: imports `client` (src/nova/tests/functional/api_sample_tests/test_server_shares.py:L16)
- `nova.tests.functional.api_sample_tests`: imports `test_servers` (src/nova/tests/functional/api_sample_tests/test_server_shares.py:L17)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/functional/api_sample_tests/test_server_shares.py:L18)
- `unittest`: imports `mock` (src/nova/tests/functional/api_sample_tests/test_server_shares.py:L19)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_server_shares.py:L410)

