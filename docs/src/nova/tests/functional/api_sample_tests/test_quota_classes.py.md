# src/nova/tests/functional/api_sample_tests/test_quota_classes.py

## Overview

This file implements the `test_quota_classes` module, defining 3 classs, 1 constant, 6 fields, 2 methods, 1 import, 1 side effect, 2 security surface entries.

Lines: total 47, code 22, comment 16, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `QuotaClassesSampleJsonTests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_quota_classes.py:L19–L37` |
| `QuotaClassesSampleJsonTests.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_quota_classes.py:L20–L20` |
| `QuotaClassesSampleJsonTests.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_quota_classes.py:L21–L21` |
| `QuotaClassesSampleJsonTests.set_id` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_quota_classes.py:L22–L22` |
| `QuotaClassesSampleJsonTests.test_show_quota_classes` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_quota_classes.py:L24–L29` |
| `QuotaClassesSampleJsonTests.test_update_quota_classes` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_quota_classes.py:L31–L37` |
| `QuotaClassesV250SampleJsonTests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_quota_classes.py:L40–L42` |
| `QuotaClassesV250SampleJsonTests.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_quota_classes.py:L41–L41` |
| `QuotaClassesV250SampleJsonTests.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_quota_classes.py:L42–L42` |
| `QuotaClassesV257SampleJsonTests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_quota_classes.py:L45–L47` |
| `QuotaClassesV257SampleJsonTests.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_quota_classes.py:L46–L46` |
| `QuotaClassesV257SampleJsonTests.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_quota_classes.py:L47–L47` |

## Dependencies

- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/api_sample_tests/test_quota_classes.py:L16)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_quota_classes.py:L20)

## Security Surface

- **sink** (`db-write`): 'quota-classes-update-post-req', (src/nova/tests/functional/api_sample_tests/test_quota_classes.py:L34)
- **sink** (`db-write`): self._verify_response('quota-classes-update-post-resp', (src/nova/tests/functional/api_sample_tests/test_quota_classes.py:L36)

