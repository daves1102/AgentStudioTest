# src/nova/tests/functional/test_policy.py

## Overview

This file implements the `test_policy` module, defining 1 class, 3 fields, 9 methods, 1 staticmethod, 8 imports, 2 security surface entries.

Lines: total 169, code 96, comment 58, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `HostStatusPolicyTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/test_policy.py:L25–L169` |
| `HostStatusPolicyTestCase.host_status_rule` | field | — | public | not declared | — | `src/nova/tests/functional/test_policy.py:L28–L28` |
| `HostStatusPolicyTestCase.host_status_unknown_only_rule` | field | — | public | not declared | — | `src/nova/tests/functional/test_policy.py:L29–L30` |
| `HostStatusPolicyTestCase.image_uuid` | field | — | public | not declared | — | `src/nova/tests/functional/test_policy.py:L31–L31` |
| `HostStatusPolicyTestCase.setUp` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/test_policy.py:L33–L51` |
| `HostStatusPolicyTestCase._setup_host_status_unknown_only_test` | method | (self, networks=None) | private | `self._create_server(**kwargs)` (src/nova/tests/functional/test_policy.py:L68) | 2/9 | `src/nova/tests/functional/test_policy.py:L53–L68` |
| `HostStatusPolicyTestCase._get_server` | method | (resp) | private | `server` (src/nova/tests/functional/test_policy.py:L77) | 3/5 | `src/nova/tests/functional/test_policy.py:L71–L77` |
| `HostStatusPolicyTestCase._set_server_state_active` | method | (self, server) | private | not declared | 1/3 | `src/nova/tests/functional/test_policy.py:L79–L83` |
| `HostStatusPolicyTestCase._test_host_status_unknown_only` | method | (self, func_name, *args) | private | not declared | 1/28 | `src/nova/tests/functional/test_policy.py:L85–L137` |
| `HostStatusPolicyTestCase.test_get_server_host_status_unknown_only` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_policy.py:L139–L142` |
| `HostStatusPolicyTestCase.test_get_servers_detail_host_status_unknown_only` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_policy.py:L144–L147` |
| `HostStatusPolicyTestCase.test_put_server_host_status_unknown_only` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_policy.py:L149–L158` |
| `HostStatusPolicyTestCase.test_post_server_rebuild_host_status_unknown_only` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_policy.py:L160–L169` |
| `HostStatusPolicyTestCase._get_server` | staticmethod | — | private | not declared | — | `src/nova/tests/functional/test_policy.py:L70–L77` |

## Dependencies

- `import datetime` (src/nova/tests/functional/test_policy.py:L13)
- `oslo_utils`: imports `timeutils` (src/nova/tests/functional/test_policy.py:L15)
- `import nova.policies.base` (src/nova/tests/functional/test_policy.py:L17)
- `nova`: imports `test` (src/nova/tests/functional/test_policy.py:L18)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/test_policy.py:L19)
- `nova.tests.functional`: imports `fixtures as func_fixtures` (src/nova/tests/functional/test_policy.py:L20)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_policy.py:L21)
- `nova`: imports `utils` (src/nova/tests/functional/test_policy.py:L22)

## Security Surface

- **sink** (`db-write`): update = {'server': {'name': 'host-status-unknown-only'}} (src/nova/tests/functional/test_policy.py:L156)
- **sink** (`db-write`): update) (src/nova/tests/functional/test_policy.py:L158)

