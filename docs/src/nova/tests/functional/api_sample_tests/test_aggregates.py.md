# src/nova/tests/functional/api_sample_tests/test_aggregates.py

## Overview

This file implements the `test_aggregates` module, defining 3 classs, 1 constant, 6 fields, 11 methods, 2 imports, 1 side effect, 4 security surface entries.

Lines: total 139, code 94, comment 26, blank 19

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `AggregatesSampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_aggregates.py:L21–L90` |
| `AggregatesSampleJsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_aggregates.py:L22–L22` |
| `AggregatesSampleJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_aggregates.py:L23–L23` |
| `AggregatesSampleJsonTest.extra_subs` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_aggregates.py:L27–L27` |
| `AggregatesSampleJsonTest._test_aggregate_create` | method | (self) | private | `self._verify_response('aggregate-post-resp', subs, response, 200)` (src/nova/tests/functional/api_sample_tests/test_aggregates.py:L34) | 1/7 | `src/nova/tests/functional/api_sample_tests/test_aggregates.py:L29–L35` |
| `AggregatesSampleJsonTest.test_aggregate_create` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_aggregates.py:L37–L38` |
| `AggregatesSampleJsonTest._test_add_host` | method | (self, aggregate_id, host) | private | not declared | 1/9 | `src/nova/tests/functional/api_sample_tests/test_aggregates.py:L40–L48` |
| `AggregatesSampleJsonTest.test_list_aggregates` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_aggregates.py:L50–L54` |
| `AggregatesSampleJsonTest.test_aggregate_get` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_aggregates.py:L56–L60` |
| `AggregatesSampleJsonTest.test_add_metadata` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_aggregates.py:L62–L68` |
| `AggregatesSampleJsonTest.test_add_host` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_aggregates.py:L70–L72` |
| `AggregatesSampleJsonTest.test_remove_host` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/api_sample_tests/test_aggregates.py:L74–L83` |
| `AggregatesSampleJsonTest.test_update_aggregate` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_aggregates.py:L85–L90` |
| `AggregatesV2_41_SampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_aggregates.py:L93–L119` |
| `AggregatesV2_41_SampleJsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_aggregates.py:L94–L94` |
| `AggregatesV2_41_SampleJsonTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_aggregates.py:L95–L101` |
| `AggregatesV2_41_SampleJsonTest._test_aggregate_create` | method | (self) | private | `self._verify_response('aggregate-post-resp', subs, response, 200)` (src/nova/tests/functional/api_sample_tests/test_aggregates.py:L118) | 1/9 | `src/nova/tests/functional/api_sample_tests/test_aggregates.py:L103–L119` |
| `AggregatesV2_81_SampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_aggregates.py:L122–L139` |
| `AggregatesV2_81_SampleJsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_aggregates.py:L123–L123` |
| `AggregatesV2_81_SampleJsonTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_aggregates.py:L124–L130` |
| `AggregatesV2_81_SampleJsonTest.test_images` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_aggregates.py:L132–L139` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/tests/functional/api_sample_tests/test_aggregates.py:L16)
- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/api_sample_tests/test_aggregates.py:L18)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_aggregates.py:L22)

## Security Surface

- **sink** (`db-write`): subs.update(self.extra_subs) (src/nova/tests/functional/api_sample_tests/test_aggregates.py:L46)
- **sink** (`db-write`): subs.update(self.extra_subs) (src/nova/tests/functional/api_sample_tests/test_aggregates.py:L81)
- **sink** (`db-write`): 'aggregate-update-post-req', {}) (src/nova/tests/functional/api_sample_tests/test_aggregates.py:L88)
- **sink** (`db-write`): self._verify_response('aggregate-update-post-resp', (src/nova/tests/functional/api_sample_tests/test_aggregates.py:L89)

