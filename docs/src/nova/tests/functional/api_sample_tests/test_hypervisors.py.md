# src/nova/tests/functional/api_sample_tests/test_hypervisors.py

## Overview

This file implements the `test_hypervisors` module, defining 5 classs, 2 constants, 10 fields, 2 functions, 25 methods, 2 imports, 2 side effects.

Lines: total 292, code 230, comment 22, blank 40

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `HypervisorsSampleJsonTests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L21–L91` |
| `HypervisorsSampleJsonTests.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L22–L22` |
| `HypervisorsSampleJsonTests.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L23–L23` |
| `HypervisorsSampleJsonTests.test_hypervisors_list` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L25–L27` |
| `HypervisorsSampleJsonTests.test_hypervisors_search` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L29–L31` |
| `HypervisorsSampleJsonTests.test_hypervisors_without_servers` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L33–L36` |
| `HypervisorsSampleJsonTests.test_hypervisors_with_servers` | method | (self, mock_instance_get) | public | not declared | 1/16 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L39–L55` |
| `HypervisorsSampleJsonTests.test_hypervisors_detail` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L57–L64` |
| `HypervisorsSampleJsonTests.test_hypervisors_show` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L66–L73` |
| `HypervisorsSampleJsonTests.test_hypervisors_statistics` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L75–L77` |
| `HypervisorsSampleJsonTests.test_hypervisors_uptime` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L79–L91` |
| `HypervisorsSampleJsonTests.test_hypervisors_uptime.fake_get_host_uptime` | function | (self, context, hyp) | public | `(" 08:32:11 up 93 days, 18:25, 12 users, load average:" " 0.20, 0.12, 0.14")` (src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L81) | — | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L80–L82` |
| `HypervisorsSampleJson228Tests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L94–L100` |
| `HypervisorsSampleJson228Tests.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L95–L95` |
| `HypervisorsSampleJson228Tests.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L96–L96` |
| `HypervisorsSampleJson228Tests.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L98–L100` |
| `HypervisorsSampleJson233Tests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L103–L129` |
| `HypervisorsSampleJson233Tests.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L104–L104` |
| `HypervisorsSampleJson233Tests.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L105–L105` |
| `HypervisorsSampleJson233Tests.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L106–L106` |
| `HypervisorsSampleJson233Tests.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L107–L107` |
| `HypervisorsSampleJson233Tests.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L109–L115` |
| `HypervisorsSampleJson233Tests.test_hypervisors_list` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L117–L119` |
| `HypervisorsSampleJson233Tests.test_hypervisors_detail` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L121–L129` |
| `HypervisorsSampleJson253Tests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L132–L274` |
| `HypervisorsSampleJson253Tests.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L133–L133` |
| `HypervisorsSampleJson253Tests.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L134–L134` |
| `HypervisorsSampleJson253Tests.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L136–L138` |
| `HypervisorsSampleJson253Tests.generalize_subs` | method | (self, subs, vanilla_regexes) | public | `subs` (src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L148) | 1/4 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L140–L148` |
| `HypervisorsSampleJson253Tests.test_hypervisors_list` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L150–L157` |
| `HypervisorsSampleJson253Tests.test_hypervisors_detail` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L159–L171` |
| `HypervisorsSampleJson253Tests.test_hypervisors_detail_with_servers` | method | (self, instance_get_all_by_host) | public | not declared | 1/18 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L174–L192` |
| `HypervisorsSampleJson253Tests.test_hypervisors_search` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L194–L201` |
| `HypervisorsSampleJson253Tests.test_hypervisors_with_servers` | method | (self, instance_get_all_by_host) | public | not declared | 1/15 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L204–L221` |
| `HypervisorsSampleJson253Tests.test_hypervisors_without_servers` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L223–L226` |
| `HypervisorsSampleJson253Tests.test_hypervisors_uptime` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L228–L240` |
| `HypervisorsSampleJson253Tests.test_hypervisors_uptime.fake_get_host_uptime` | function | (self, context, hyp) | public | `(" 08:32:11 up 93 days, 18:25, 12 users, load average:" " 0.20, 0.12, 0.14")` (src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L230) | — | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L229–L231` |
| `HypervisorsSampleJson253Tests.test_hypervisors_show` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L242–L249` |
| `HypervisorsSampleJson253Tests.test_hypervisors_show_with_servers` | method | (self, instance_get_all_by_host) | public | not declared | 1/20 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L252–L274` |
| `HypervisorsSampleJson288Tests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L277–L292` |
| `HypervisorsSampleJson288Tests.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L278–L278` |
| `HypervisorsSampleJson288Tests.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L279–L279` |
| `HypervisorsSampleJson288Tests.test_hypervisors_uptime` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L281–L286` |
| `HypervisorsSampleJson288Tests.test_hypervisors_statistics` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L288–L292` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L16)
- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L18)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L22)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_hypervisors.py:L104)

