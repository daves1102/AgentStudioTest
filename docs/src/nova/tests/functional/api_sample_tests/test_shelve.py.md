# src/nova/tests/functional/api_sample_tests/test_shelve.py

## Overview

This file implements the `test_shelve` module, defining 4 classs, 5 constants, 10 fields, 20 methods, 1 variable, 5 imports, 5 side effects, 4 security surface entries.

Lines: total 355, code 281, comment 28, blank 46

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L23–L23` |
| `fake_aggregate` | variable | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L25–L35` |
| `ShelveJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L38–L68` |
| `ShelveJsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L40–L40` |
| `ShelveJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L41–L41` |
| `ShelveJsonTest.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L43–L46` |
| `ShelveJsonTest._test_server_action` | method | (self, uuid, template, action, subs=None) | private | not declared | 2/7 | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L48–L54` |
| `ShelveJsonTest.test_shelve` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L56–L58` |
| `ShelveJsonTest.test_shelve_offload` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L60–L63` |
| `ShelveJsonTest.test_unshelve` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L65–L68` |
| `UnshelveJson277Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L71–L96` |
| `UnshelveJson277Test.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L72–L72` |
| `UnshelveJson277Test.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L73–L73` |
| `UnshelveJson277Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L74–L74` |
| `UnshelveJson277Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L75–L75` |
| `UnshelveJson277Test.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L77–L82` |
| `UnshelveJson277Test.test_shelve_offload` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L84–L86` |
| `UnshelveJson277Test.test_unshelve_with_az` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L88–L96` |
| `UnshelveJson291Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L99–L236` |
| `UnshelveJson291Test.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L100–L100` |
| `UnshelveJson291Test.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L101–L101` |
| `UnshelveJson291Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L102–L102` |
| `UnshelveJson291Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L103–L103` |
| `UnshelveJson291Test._test_server_action_invalid` | method | (self, uuid, template, action, subs=None, msg=None) | private | not declared | 2/8 | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L105–L112` |
| `UnshelveJson291Test.test_unshelve_with_non_valid_host` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L114–L124` |
| `UnshelveJson291Test.test_unshelve_with_valid_host` | method | (self, compute_node_get_all_by_host, mock_api_get_by_host) | public | not declared | 1/20 | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L128–L152` |
| `UnshelveJson291Test.test_unshelve_with_az_and_host` | method | (self, compute_node_get_all_by_host, mock_api_get_by_host) | public | not declared | 1/20 | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L156–L180` |
| `UnshelveJson291Test.test_unshelve_with_unpin_az_and_host` | method | (self, compute_node_get_all_by_host, mock_api_get_by_host) | public | not declared | 1/20 | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L184–L208` |
| `UnshelveJson291Test.test_unshelve_with_unpin_az` | method | (self, compute_node_get_all_by_host, mock_api_get_by_host) | public | not declared | 1/20 | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L212–L236` |
| `UnshelveJson291NonAdminTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L239–L355` |
| `UnshelveJson291NonAdminTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L241–L241` |
| `UnshelveJson291NonAdminTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L242–L242` |
| `UnshelveJson291NonAdminTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L243–L243` |
| `UnshelveJson291NonAdminTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L244–L244` |
| `UnshelveJson291NonAdminTest._test_server_action_invalid` | method | (self, uuid, template, action, subs=None) | private | not declared | 2/9 | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L246–L254` |
| `UnshelveJson291NonAdminTest._test_server_action` | method | (self, uuid, template, action, subs=None) | private | not declared | 2/7 | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L256–L262` |
| `UnshelveJson291NonAdminTest.test_unshelve_with_non_valid_host` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L264–L275` |
| `UnshelveJson291NonAdminTest.test_unshelve_with_unpin_az_and_host` | method | (self, compute_node_get_all_by_host, mock_api_get_by_host) | public | not declared | 1/20 | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L279–L301` |
| `UnshelveJson291NonAdminTest.test_unshelve_with_valid_host` | method | (self, compute_node_get_all_by_host, mock_api_get_by_host) | public | not declared | 1/20 | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L305–L327` |
| `UnshelveJson291NonAdminTest.test_unshelve_with_az_and_host` | method | (self, compute_node_get_all_by_host, mock_api_get_by_host) | public | not declared | 1/20 | `src/nova/tests/functional/api_sample_tests/test_shelve.py:L331–L355` |

## Dependencies

- `import nova.conf` (src/nova/tests/functional/api_sample_tests/test_shelve.py:L17)
- `nova`: imports `objects` (src/nova/tests/functional/api_sample_tests/test_shelve.py:L18)
- `nova.tests.functional.api_sample_tests`: imports `test_servers` (src/nova/tests/functional/api_sample_tests/test_shelve.py:L19)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/functional/api_sample_tests/test_shelve.py:L20)
- `unittest`: imports `mock` (src/nova/tests/functional/api_sample_tests/test_shelve.py:L21)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/functional/api_sample_tests/test_shelve.py:L23)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_shelve.py:L40)
- **global-mutation**: ADMIN_API = False (src/nova/tests/functional/api_sample_tests/test_shelve.py:L72)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_shelve.py:L100)
- **global-mutation**: ADMIN_API = False (src/nova/tests/functional/api_sample_tests/test_shelve.py:L241)

## Security Surface

- **sink** (`db-write`): subs.update({'action': action}) (src/nova/tests/functional/api_sample_tests/test_shelve.py:L50)
- **sink** (`db-write`): subs.update({'action': action}) (src/nova/tests/functional/api_sample_tests/test_shelve.py:L108)
- **sink** (`db-write`): subs.update({'action': action}) (src/nova/tests/functional/api_sample_tests/test_shelve.py:L248)
- **sink** (`db-write`): subs.update({'action': action}) (src/nova/tests/functional/api_sample_tests/test_shelve.py:L258)

