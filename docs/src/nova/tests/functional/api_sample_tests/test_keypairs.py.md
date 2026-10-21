# src/nova/tests/functional/api_sample_tests/test_keypairs.py

## Overview

This file implements the `test_keypairs` module, defining 6 classs, 4 constants, 20 fields, 38 methods, 5 imports, 4 side effects, 1 security surface entry.

Lines: total 384, code 264, comment 51, blank 69

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `KeyPairsSampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L24–L97` |
| `KeyPairsSampleJsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L25–L25` |
| `KeyPairsSampleJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L26–L26` |
| `KeyPairsSampleJsonTest.expected_delete_status_code` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L27–L27` |
| `KeyPairsSampleJsonTest.expected_post_status_code` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L28–L28` |
| `KeyPairsSampleJsonTest.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L30–L32` |
| `KeyPairsSampleJsonTest.generalize_subs` | method | (self, subs, vanilla_regexes) | public | `subs` (src/nova/tests/functional/api_sample_tests/test_keypairs.py:L38) | 1/3 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L36–L38` |
| `KeyPairsSampleJsonTest.test_keypairs_post` | method | (self) | public | `self._check_keypairs_post()` (src/nova/tests/functional/api_sample_tests/test_keypairs.py:L41) | 1/2 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L40–L41` |
| `KeyPairsSampleJsonTest._check_keypairs_post` | method | (self, **kwargs) | private | `key_name` (src/nova/tests/functional/api_sample_tests/test_keypairs.py:L58) | 2/10 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L43–L58` |
| `KeyPairsSampleJsonTest.test_keypairs_import_key_post` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L60–L62` |
| `KeyPairsSampleJsonTest._check_keypairs_import_key_post` | method | (self, public_key, **kwargs) | private | not declared | 1/12 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L64–L76` |
| `KeyPairsSampleJsonTest.test_keypairs_list` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L78–L83` |
| `KeyPairsSampleJsonTest.test_keypairs_get` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L85–L90` |
| `KeyPairsSampleJsonTest.test_keypairs_delete` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L92–L97` |
| `KeyPairsV22SampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L100–L157` |
| `KeyPairsV22SampleJsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L101–L101` |
| `KeyPairsV22SampleJsonTest.expected_post_status_code` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L102–L102` |
| `KeyPairsV22SampleJsonTest.expected_delete_status_code` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L103–L103` |
| `KeyPairsV22SampleJsonTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L107–L107` |
| `KeyPairsV22SampleJsonTest.test_keypairs_post` | method | (self) | public | `self._check_keypairs_post( keypair_type=keypair_obj.KEYPAIR_TYPE_SSH)` (src/nova/tests/functional/api_sample_tests/test_keypairs.py:L112) | 1/3 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L109–L113` |
| `KeyPairsV22SampleJsonTest.test_keypairs_post_x509` | method | (self) | public | `self._check_keypairs_post( keypair_type=keypair_obj.KEYPAIR_TYPE_X509)` (src/nova/tests/functional/api_sample_tests/test_keypairs.py:L116) | 1/3 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L115–L117` |
| `KeyPairsV22SampleJsonTest.test_keypairs_post_invalid` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L119–L124` |
| `KeyPairsV22SampleJsonTest.test_keypairs_import_key_post` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L126–L131` |
| `KeyPairsV22SampleJsonTest.test_keypairs_import_key_post_x509` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L133–L137` |
| `KeyPairsV22SampleJsonTest._check_keypairs_import_key_post_invalid` | method | (self, keypair_type) | private | not declared | 1/10 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L139–L149` |
| `KeyPairsV22SampleJsonTest.test_keypairs_import_key_post_invalid_type` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L151–L153` |
| `KeyPairsV22SampleJsonTest.test_keypairs_import_key_post_invalid_combination` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L155–L157` |
| `KeyPairsV210SampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L160–L221` |
| `KeyPairsV210SampleJsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L161–L161` |
| `KeyPairsV210SampleJsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L162–L162` |
| `KeyPairsV210SampleJsonTest.expected_post_status_code` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L163–L163` |
| `KeyPairsV210SampleJsonTest.expected_delete_status_code` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L164–L164` |
| `KeyPairsV210SampleJsonTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L165–L165` |
| `KeyPairsV210SampleJsonTest.test_keypair_create_for_user` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L167–L173` |
| `KeyPairsV210SampleJsonTest.test_keypairs_post` | method | (self) | public | `self._check_keypairs_post( keypair_type=keypair_obj.KEYPAIR_TYPE_SSH, user_id="admin")` (src/nova/tests/functional/api_sample_tests/test_keypairs.py:L176) | 1/4 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L175–L178` |
| `KeyPairsV210SampleJsonTest.test_keypairs_import_key_post` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L180–L186` |
| `KeyPairsV210SampleJsonTest.test_keypairs_delete_for_user` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L188–L198` |
| `KeyPairsV210SampleJsonTest.test_keypairs_list_for_different_users` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L200–L221` |
| `KeyPairsV210SampleJsonTestNotAdmin` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L224–L250` |
| `KeyPairsV210SampleJsonTestNotAdmin.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L225–L225` |
| `KeyPairsV210SampleJsonTestNotAdmin.test_keypairs_post` | method | (self) | public | `self._check_keypairs_post( keypair_type=keypair_obj.KEYPAIR_TYPE_SSH, user_id="fake")` (src/nova/tests/functional/api_sample_tests/test_keypairs.py:L228) | 1/4 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L227–L230` |
| `KeyPairsV210SampleJsonTestNotAdmin.test_keypairs_post_for_other_user` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L232–L242` |
| `KeyPairsV210SampleJsonTestNotAdmin.test_keypairs_list_for_different_users` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L244–L250` |
| `KeyPairsV235SampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L253–L321` |
| `KeyPairsV235SampleJsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L254–L254` |
| `KeyPairsV235SampleJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L255–L255` |
| `KeyPairsV235SampleJsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L256–L256` |
| `KeyPairsV235SampleJsonTest.expected_post_status_code` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L257–L257` |
| `KeyPairsV235SampleJsonTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L258–L258` |
| `KeyPairsV235SampleJsonTest.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L260–L262` |
| `KeyPairsV235SampleJsonTest.generalize_subs` | method | (self, subs, vanilla_regexes) | public | `subs` (src/nova/tests/functional/api_sample_tests/test_keypairs.py:L268) | 1/3 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L266–L268` |
| `KeyPairsV235SampleJsonTest.test_keypairs_post` | method | (self, user="admin", kp_name=None) | public | `self._check_keypairs_post( keypair_type=keypair_obj.KEYPAIR_TYPE_SSH, user_id=user, kp_name=kp_name)` (src/nova/tests/functional/api_sample_tests/test_keypairs.py:L271) | 1/4 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L270–L273` |
| `KeyPairsV235SampleJsonTest._check_keypairs_post` | method | (self, **kwargs) | private | `key_name` (src/nova/tests/functional/api_sample_tests/test_keypairs.py:L287) | 2/10 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L275–L287` |
| `KeyPairsV235SampleJsonTest.test_keypairs_list` | method | (self) | public | not declared | 2/5 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L289–L297` |
| `KeyPairsV235SampleJsonTest.test_keypairs_list_for_different_users` | method | (self) | public | not declared | 4/14 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L299–L321` |
| `KeyPairsV292SampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L324–L384` |
| `KeyPairsV292SampleJsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L325–L325` |
| `KeyPairsV292SampleJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L326–L326` |
| `KeyPairsV292SampleJsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L327–L327` |
| `KeyPairsV292SampleJsonTest.expected_post_status_code` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L328–L328` |
| `KeyPairsV292SampleJsonTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L329–L329` |
| `KeyPairsV292SampleJsonTest.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L331–L333` |
| `KeyPairsV292SampleJsonTest.generalize_subs` | method | (self, subs, vanilla_regexes) | public | `subs` (src/nova/tests/functional/api_sample_tests/test_keypairs.py:L339) | 1/3 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L337–L339` |
| `KeyPairsV292SampleJsonTest.test_keypairs_post_no_longer_supported` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L341–L348` |
| `KeyPairsV292SampleJsonTest.test_keypairs_import_key_invalid_name` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L350–L360` |
| `KeyPairsV292SampleJsonTest._test_keypairs_import_key_post` | method | (self, name=None) | private | not declared | 2/15 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L362–L378` |
| `KeyPairsV292SampleJsonTest.test_keypairs_import_key_post` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L380–L381` |
| `KeyPairsV292SampleJsonTest.test_keypairs_import_key_special_characters` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_keypairs.py:L383–L384` |

## Dependencies

- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/api_sample_tests/test_keypairs.py:L16)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/functional/api_sample_tests/test_keypairs.py:L17)
- `nova.objects`: imports `keypair as keypair_obj` (src/nova/tests/functional/api_sample_tests/test_keypairs.py:L19)
- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/api_sample_tests/test_keypairs.py:L20)
- `nova.tests.unit`: imports `fake_crypto` (src/nova/tests/functional/api_sample_tests/test_keypairs.py:L21)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_keypairs.py:L161)
- **global-mutation**: ADMIN_API = False (src/nova/tests/functional/api_sample_tests/test_keypairs.py:L225)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_keypairs.py:L254)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_keypairs.py:L325)

## Security Surface

- **sink** (`db-write`): params.update(**kwargs) (src/nova/tests/functional/api_sample_tests/test_keypairs.py:L72)

