# src/nova/tests/functional/api_sample_tests/test_instance_actions.py

## Overview

This file implements the `test_instance_actions` module, defining 11 classs, 5 constants, 16 fields, 9 methods, 2 imports, 5 side effects.

Lines: total 163, code 108, comment 17, blank 38

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServerActionsSampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L20–L59` |
| `ServerActionsSampleJsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L22–L22` |
| `ServerActionsSampleJsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L23–L23` |
| `ServerActionsSampleJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L24–L24` |
| `ServerActionsSampleJsonTest.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L26–L36` |
| `ServerActionsSampleJsonTest._get_subs` | method | (self) | private | `{ 'uuid': self.uuid, 'project_id': self.action_stop['project_id'] }` (src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L39) | 1/5 | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L38–L42` |
| `ServerActionsSampleJsonTest.test_instance_action_get` | method | (self) | public | not declared | 2/9 | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L44–L54` |
| `ServerActionsSampleJsonTest.test_instance_actions_list` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L56–L59` |
| `ServerActionsV221SampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L62–L64` |
| `ServerActionsV221SampleJsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L63–L63` |
| `ServerActionsV221SampleJsonTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L64–L64` |
| `ServerActionsV251AdminSampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L67–L77` |
| `ServerActionsV251AdminSampleJsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L76–L76` |
| `ServerActionsV251AdminSampleJsonTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L77–L77` |
| `ServerActionsV251NonAdminSampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L80–L91` |
| `ServerActionsV251NonAdminSampleJsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L89–L89` |
| `ServerActionsV251NonAdminSampleJsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L90–L90` |
| `ServerActionsV251NonAdminSampleJsonTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L91–L91` |
| `ServerActionsV258SampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L94–L119` |
| `ServerActionsV258SampleJsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L95–L95` |
| `ServerActionsV258SampleJsonTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L96–L96` |
| `ServerActionsV258SampleJsonTest.test_instance_actions_list_with_limit` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L98–L102` |
| `ServerActionsV258SampleJsonTest.test_instance_actions_list_with_marker` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L104–L110` |
| `ServerActionsV258SampleJsonTest.test_instance_actions_with_changes_since` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L112–L119` |
| `ServerActionsV258NonAdminSampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L122–L123` |
| `ServerActionsV258NonAdminSampleJsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L123–L123` |
| `ServerActionsV262SampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L126–L136` |
| `ServerActionsV262SampleJsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L127–L127` |
| `ServerActionsV262SampleJsonTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L128–L128` |
| `ServerActionsV262SampleJsonTest._get_subs` | method | (self) | private | `{ 'uuid': self.uuid, 'project_id': self.action_stop['project_id'], 'event_host': r'\w+', 'event_hostId': '[a-f0-9]+' }` (src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L131) | 1/7 | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L130–L136` |
| `ServerActionsV262NonAdminSampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L139–L140` |
| `ServerActionsV262NonAdminSampleJsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L140–L140` |
| `ServerActionsV266SampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L143–L154` |
| `ServerActionsV266SampleJsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L144–L144` |
| `ServerActionsV266SampleJsonTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L145–L145` |
| `ServerActionsV266SampleJsonTest.test_instance_actions_with_changes_before` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L147–L154` |
| `ServerActionsV284SampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L157–L159` |
| `ServerActionsV284SampleJsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L158–L158` |
| `ServerActionsV284SampleJsonTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L159–L159` |
| `ServerActionsV284NonAdminSampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L162–L163` |
| `ServerActionsV284NonAdminSampleJsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L163–L163` |

## Dependencies

- `nova.tests.functional.api_sample_tests`: imports `test_servers` (src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L16)
- `nova.tests.functional`: imports `api_samples_test_base` (src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L17)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L23)
- **global-mutation**: ADMIN_API = False (src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L89)
- **global-mutation**: ADMIN_API = False (src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L123)
- **global-mutation**: ADMIN_API = False (src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L140)
- **global-mutation**: ADMIN_API = False (src/nova/tests/functional/api_sample_tests/test_instance_actions.py:L163)

