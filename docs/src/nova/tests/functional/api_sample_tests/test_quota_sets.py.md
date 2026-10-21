# src/nova/tests/functional/api_sample_tests/test_quota_sets.py

## Overview

This file implements the `test_quota_sets` module, defining 4 classs, 1 constant, 6 fields, 10 methods, 2 imports, 1 side effect, 6 security surface entries.

Lines: total 102, code 58, comment 25, blank 19

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `QuotaSetsSampleJsonTests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L20–L78` |
| `QuotaSetsSampleJsonTests.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L21–L21` |
| `QuotaSetsSampleJsonTests.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L22–L22` |
| `QuotaSetsSampleJsonTests.test_show_quotas` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L24–L27` |
| `QuotaSetsSampleJsonTests.test_show_quotas_defaults` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L29–L33` |
| `QuotaSetsSampleJsonTests.test_show_quotas_detail` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L35–L39` |
| `QuotaSetsSampleJsonTests.test_update_quotas` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L41–L46` |
| `QuotaSetsSampleJsonTests.test_delete_quotas` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L48–L52` |
| `QuotaSetsSampleJsonTests.test_update_quotas_force` | method | (self) | public | `self._verify_response('quotas-update-force-post-resp', {}, response, 200)` (src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L59) | 1/6 | `src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L54–L60` |
| `QuotaSetsSampleJsonTests.test_show_quotas_for_user` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L62–L65` |
| `QuotaSetsSampleJsonTests.test_delete_quotas_for_user` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L67–L70` |
| `QuotaSetsSampleJsonTests.test_update_quotas_for_user` | method | (self) | public | `self._verify_response('user-quotas-update-post-resp', {}, response, 200)` (src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L77) | 1/6 | `src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L72–L78` |
| `QuotaSetsSampleJsonTests2_36` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L81–L83` |
| `QuotaSetsSampleJsonTests2_36.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L82–L82` |
| `QuotaSetsSampleJsonTests2_36.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L83–L83` |
| `QuotaSetsSampleJsonTestsV2_57` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L86–L91` |
| `QuotaSetsSampleJsonTestsV2_57.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L90–L90` |
| `QuotaSetsSampleJsonTestsV2_57.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L91–L91` |
| `NoopQuotaSetsSampleJsonTests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L94–L102` |
| `NoopQuotaSetsSampleJsonTests.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L95–L95` |
| `NoopQuotaSetsSampleJsonTests.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L97–L102` |

## Dependencies

- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L16)
- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L17)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L21)

## Security Surface

- **sink** (`db-write`): 'quotas-update-post-req', (src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L44)
- **sink** (`db-write`): self._verify_response('quotas-update-post-resp', {}, response, 200) (src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L46)
- **sink** (`db-write`): 'quotas-update-force-post-req', (src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L57)
- **sink** (`db-write`): return self._verify_response('quotas-update-force-post-resp', {}, (src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L59)
- **sink** (`db-write`): 'user-quotas-update-post-req', (src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L75)
- **sink** (`db-write`): return self._verify_response('user-quotas-update-post-resp', {}, (src/nova/tests/functional/api_sample_tests/test_quota_sets.py:L77)

