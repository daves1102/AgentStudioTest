# src/nova/tests/functional/api_sample_tests/test_remote_consoles.py

## Overview

This file implements the `test_remote_consoles` module, defining 4 classs, 1 constant, 11 fields, 1 function, 12 methods, 4 imports, 1 side effect.

Lines: total 147, code 102, comment 17, blank 28

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `HTTP_RE` | constant | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L22–L22` |
| `ConsolesSampleJsonTests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L25–L82` |
| `ConsolesSampleJsonTests.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L26–L26` |
| `ConsolesSampleJsonTests.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L27–L27` |
| `ConsolesSampleJsonTests.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L29–L34` |
| `ConsolesSampleJsonTests.test_get_vnc_console` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L36–L42` |
| `ConsolesSampleJsonTests.test_get_vnc_console_instance_invalid_state` | method | (self, mock_get_vnc_console) | public | not declared | 1/9 | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L45–L58` |
| `ConsolesSampleJsonTests.test_get_vnc_console_instance_invalid_state.fake_get_vnc_console` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L49–L52` |
| `ConsolesSampleJsonTests.test_get_spice_console` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L60–L66` |
| `ConsolesSampleJsonTests.test_get_rdp_console_bad_request` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L68–L74` |
| `ConsolesSampleJsonTests.test_get_serial_console` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L76–L82` |
| `ConsolesV26SampleJsonTests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L85–L108` |
| `ConsolesV26SampleJsonTests.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L86–L86` |
| `ConsolesV26SampleJsonTests.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L87–L87` |
| `ConsolesV26SampleJsonTests.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L91–L91` |
| `ConsolesV26SampleJsonTests.test_create_console` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L93–L100` |
| `ConsolesV26SampleJsonTests.test_create_rdp_console_bad_request` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L102–L108` |
| `ConsolesV28SampleJsonTests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L111–L127` |
| `ConsolesV28SampleJsonTests.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L112–L112` |
| `ConsolesV28SampleJsonTests.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L113–L113` |
| `ConsolesV28SampleJsonTests.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L114–L114` |
| `ConsolesV28SampleJsonTests.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L116–L118` |
| `ConsolesV28SampleJsonTests.test_create_mks_console` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L120–L127` |
| `ConsolesV299SampleJsonTests` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L130–L147` |
| `ConsolesV299SampleJsonTests.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L131–L131` |
| `ConsolesV299SampleJsonTests.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L132–L132` |
| `ConsolesV299SampleJsonTests.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L133–L133` |
| `ConsolesV299SampleJsonTests.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L135–L137` |
| `ConsolesV299SampleJsonTests.test_create_spice_direct_console` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L139–L147` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L16)
- `nova.compute`: imports `api as compute` (src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L18)
- `nova`: imports `exception` (src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L19)
- `nova.tests.functional.api_sample_tests`: imports `test_servers` (src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L20)

## Side Effects

- **global-mutation**: HTTP_RE = r'(https?://)([\w\d:#@%/;$()~_?\+-=\\.&](#!)?)*' (src/nova/tests/functional/api_sample_tests/test_remote_consoles.py:L22)

