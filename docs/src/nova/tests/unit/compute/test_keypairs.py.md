# src/nova/tests/unit/compute/test_keypairs.py

## Overview

This file implements the `test_keypairs` module, defining 7 classs, 1 constant, 2 fields, 5 functions, 28 methods, 15 imports, 7 side effects.

Lines: total 351, code 272, comment 21, blank 58

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/compute/test_keypairs.py:L35–L35` |
| `KeypairAPITestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_keypairs.py:L38–L106` |
| `KeypairAPITestCase.setUp` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_keypairs.py:L39–L55` |
| `KeypairAPITestCase._keypair_db_call_stubs` | method | (self) | private | not declared | 1/12 | `src/nova/tests/unit/compute/test_keypairs.py:L57–L87` |
| `KeypairAPITestCase._keypair_db_call_stubs.db_key_pair_get_all_by_user` | function | (context, user_id, limit, marker) | public | `[dict(test_keypair.fake_keypair, name=self.existing_key_name, public_key=self.pub_key, fingerprint=self.fingerprint)]` (src/nova/tests/unit/compute/test_keypairs.py:L60) | — | `src/nova/tests/unit/compute/test_keypairs.py:L59–L63` |
| `KeypairAPITestCase._keypair_db_call_stubs.db_key_pair_create` | function | (context, keypair) | public | `dict(test_keypair.fake_keypair, **keypair)` (src/nova/tests/unit/compute/test_keypairs.py:L66) | — | `src/nova/tests/unit/compute/test_keypairs.py:L65–L66` |
| `KeypairAPITestCase._keypair_db_call_stubs.db_key_pair_destroy` | function | (context, user_id, name) | public | not declared | — | `src/nova/tests/unit/compute/test_keypairs.py:L68–L70` |
| `KeypairAPITestCase._keypair_db_call_stubs.db_key_pair_get` | function | (context, user_id, name) | public | `dict(test_keypair.fake_keypair, name=self.existing_key_name, public_key=self.pub_key, fingerprint=self.fingerprint)` (src/nova/tests/unit/compute/test_keypairs.py:L74) | — | `src/nova/tests/unit/compute/test_keypairs.py:L72–L79` |
| `KeypairAPITestCase._check_notifications` | method | (self, action='create', key_name='foo') | private | not declared | 1/16 | `src/nova/tests/unit/compute/test_keypairs.py:L89–L106` |
| `CreateImportSharedTestMixIn` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_keypairs.py:L109–L189` |
| `CreateImportSharedTestMixIn.assertKeypairRaises` | method | (self, exc_class, expected_message, name) | public | not declared | 2/9 | `src/nova/tests/unit/compute/test_keypairs.py:L116–L126` |
| `CreateImportSharedTestMixIn.test_already_exists` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_keypairs.py:L128–L138` |
| `CreateImportSharedTestMixIn.test_already_exists.db_key_pair_create_duplicate` | function | (context, keypair) | public | not declared | — | `src/nova/tests/unit/compute/test_keypairs.py:L129–L130` |
| `CreateImportSharedTestMixIn.test_quota_limit` | method | (self, mock_count_as_dict) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_keypairs.py:L143–L145` |
| `CreateImportSharedTestMixIn._test_quota_during_recheck` | method | (self, mock_method, msg) | private | not declared | 2/5 | `src/nova/tests/unit/compute/test_keypairs.py:L147–L153` |
| `CreateImportSharedTestMixIn.test_quota_during_recheck` | method | (self, mock_check) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_keypairs.py:L156–L165` |
| `CreateImportSharedTestMixIn.test_quota_unified_limits` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_keypairs.py:L167–L173` |
| `CreateImportSharedTestMixIn.test_quota_during_recheck_unified_limits` | method | (self, mock_enforce) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_keypairs.py:L176–L189` |
| `CreateKeypairTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_keypairs.py:L192–L244` |
| `CreateKeypairTestCase.func_name` | field | — | public | not declared | — | `src/nova/tests/unit/compute/test_keypairs.py:L193–L193` |
| `CreateKeypairTestCase._check_success` | method | (self, mock_notify) | private | not declared | 1/11 | `src/nova/tests/unit/compute/test_keypairs.py:L196–L206` |
| `CreateKeypairTestCase.test_success_ssh` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_keypairs.py:L208–L209` |
| `CreateKeypairTestCase.test_success_x509` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_keypairs.py:L211–L213` |
| `CreateKeypairTestCase.test_x509_subject_too_long` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_keypairs.py:L215–L223` |
| `CreateKeypairTestCase.test_success_unified_limits` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_keypairs.py:L225–L229` |
| `CreateKeypairTestCase.test_quota_recheck_disabled` | method | (self, mock_check) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_keypairs.py:L232–L235` |
| `CreateKeypairTestCase.test_quota_recheck_disabled_unified_limits` | method | (self, mock_enforce) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_keypairs.py:L238–L244` |
| `ImportKeypairTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_keypairs.py:L247–L313` |
| `ImportKeypairTestCase.func_name` | field | — | public | not declared | — | `src/nova/tests/unit/compute/test_keypairs.py:L248–L248` |
| `ImportKeypairTestCase._check_success` | method | (self, mock_notify) | private | not declared | 1/17 | `src/nova/tests/unit/compute/test_keypairs.py:L251–L268` |
| `ImportKeypairTestCase.test_success_ssh` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_keypairs.py:L270–L271` |
| `ImportKeypairTestCase.test_success_ssh_ed25519` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_keypairs.py:L273–L277` |
| `ImportKeypairTestCase.test_success_x509` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_keypairs.py:L279–L284` |
| `ImportKeypairTestCase.test_bad_key_data` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_keypairs.py:L286–L292` |
| `ImportKeypairTestCase.test_success_unified_limits` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_keypairs.py:L294–L298` |
| `ImportKeypairTestCase.test_quota_recheck_disabled` | method | (self, mock_check) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_keypairs.py:L301–L304` |
| `ImportKeypairTestCase.test_quota_recheck_disabled_unified_limits` | method | (self, mock_enforce) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_keypairs.py:L307–L313` |
| `GetKeypairTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_keypairs.py:L316–L321` |
| `GetKeypairTestCase.test_success` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_keypairs.py:L317–L321` |
| `GetKeypairsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_keypairs.py:L324–L328` |
| `GetKeypairsTestCase.test_success` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/compute/test_keypairs.py:L325–L328` |
| `DeleteKeypairTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_keypairs.py:L331–L351` |
| `DeleteKeypairTestCase.test_success` | method | (self, mock_notify) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_keypairs.py:L333–L351` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/compute/test_keypairs.py:L17)
- `oslo_concurrency`: imports `processutils` (src/nova/tests/unit/compute/test_keypairs.py:L19)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/compute/test_keypairs.py:L20)
- `oslo_limit`: imports `fixture as limit_fixture` (src/nova/tests/unit/compute/test_keypairs.py:L21)
- `nova.compute`: imports `api as compute_api` (src/nova/tests/unit/compute/test_keypairs.py:L23)
- `nova`: imports `context` (src/nova/tests/unit/compute/test_keypairs.py:L24)
- `nova`: imports `exception` (src/nova/tests/unit/compute/test_keypairs.py:L25)
- `nova.limit`: imports `local as local_limit` (src/nova/tests/unit/compute/test_keypairs.py:L26)
- `nova.objects`: imports `keypair as keypair_obj` (src/nova/tests/unit/compute/test_keypairs.py:L27)
- `nova`: imports `quota` (src/nova/tests/unit/compute/test_keypairs.py:L28)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/compute/test_keypairs.py:L29)
- `nova.tests.unit.compute`: imports `test_compute` (src/nova/tests/unit/compute/test_keypairs.py:L30)
- `nova.tests.unit`: imports `fake_crypto` (src/nova/tests/unit/compute/test_keypairs.py:L31)
- `nova.tests.unit.objects`: imports `test_keypair` (src/nova/tests/unit/compute/test_keypairs.py:L32)
- `nova.tests.unit`: imports `utils as test_utils` (src/nova/tests/unit/compute/test_keypairs.py:L33)

## Side Effects

- **network**: def _check_success(self, mock_notify): (src/nova/tests/unit/compute/test_keypairs.py:L196)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_keypairs.py:L201)
- **network**: def _check_success(self, mock_notify): (src/nova/tests/unit/compute/test_keypairs.py:L251)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_keypairs.py:L263)
- **network**: def test_success(self, mock_notify): (src/nova/tests/unit/compute/test_keypairs.py:L333)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/compute/test_keypairs.py:L343)
- **global-mutation**: CONF = cfg.CONF (src/nova/tests/unit/compute/test_keypairs.py:L35)

## Notes

- KB `sideEffects` entries at L196, L251, L333 have targets that appear to be code fragments rather than resource paths; documented as recorded.

