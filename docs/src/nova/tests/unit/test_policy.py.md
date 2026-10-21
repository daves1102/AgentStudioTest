# src/nova/tests/unit/test_policy.py

## Overview

This file implements the `test_policy` module, defining 6 classs, 2 functions, 37 methods, 15 imports, 3 side effects, 16 security surface entries.

Lines: total 649, code 540, comment 38, blank 71

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `PolicyFileTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_policy.py:L37–L67` |
| `PolicyFileTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_policy.py:L38–L41` |
| `PolicyFileTestCase.test_modified_policy_reloads` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/test_policy.py:L43–L67` |
| `PolicyInitTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_policy.py:L70–L117` |
| `PolicyInitTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_policy.py:L71–L74` |
| `PolicyInitTestCase.test_concurrent_init_serializes_and_builds_enforcer_once` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/test_policy.py:L76–L117` |
| `PolicyInitTestCase.test_concurrent_init_serializes_and_builds_enforcer_once.blocking_register_rules` | function | (enforcer) | public | not declared | — | `src/nova/tests/unit/test_policy.py:L84–L94` |
| `PolicyInitTestCase.test_concurrent_init_serializes_and_builds_enforcer_once.second_caller` | function | — | public | not declared | — | `src/nova/tests/unit/test_policy.py:L98–L105` |
| `PolicyTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_policy.py:L120–L285` |
| `PolicyTestCase.setUp` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/test_policy.py:L121–L149` |
| `PolicyTestCase.test_authorize_nonexistent_action_throws` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_policy.py:L151–L154` |
| `PolicyTestCase.test_authorize_bad_action_throws` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_policy.py:L156–L159` |
| `PolicyTestCase.test_authorize_bad_action_noraise` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_policy.py:L161–L164` |
| `PolicyTestCase.test_authorize_good_action` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_policy.py:L166–L169` |
| `PolicyTestCase.test_authorize_http_true` | method | (self, req_mock) | public | not declared | 1/7 | `src/nova/tests/unit/test_policy.py:L172–L178` |
| `PolicyTestCase.test_authorize_http_false` | method | (self, req_mock) | public | not declared | 1/7 | `src/nova/tests/unit/test_policy.py:L181–L187` |
| `PolicyTestCase.test_templatized_authorization` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_policy.py:L189–L199` |
| `PolicyTestCase.test_early_AND_authorization` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_policy.py:L201–L204` |
| `PolicyTestCase.test_early_OR_authorization` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_policy.py:L206–L208` |
| `PolicyTestCase.test_ignore_case_role_check` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_policy.py:L210–L219` |
| `PolicyTestCase.test_warning_when_deprecated_user_based_rule_used` | method | (self, mock_warning) | public | not declared | 1/8 | `src/nova/tests/unit/test_policy.py:L222–L229` |
| `PolicyTestCase.test_no_warning_for_user_based_resource` | method | (self, mock_warning) | public | not declared | 1/5 | `src/nova/tests/unit/test_policy.py:L232–L236` |
| `PolicyTestCase.test_no_warning_for_no_user_based_rule` | method | (self, mock_warning) | public | not declared | 1/5 | `src/nova/tests/unit/test_policy.py:L239–L243` |
| `PolicyTestCase.test_authorize_raise_invalid_scope` | method | (self, req_mock) | public | not declared | 1/14 | `src/nova/tests/unit/test_policy.py:L246–L259` |
| `PolicyTestCase.test_verify_deprecated_policy_using_old_action` | method | (self, mock_warning) | public | not declared | 1/11 | `src/nova/tests/unit/test_policy.py:L262–L275` |
| `PolicyTestCase.test_verify_deprecated_policy_using_new_action` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_policy.py:L277–L285` |
| `IsAdminCheckTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_policy.py:L288–L334` |
| `IsAdminCheckTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_policy.py:L289–L293` |
| `IsAdminCheckTestCase.test_init_true` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_policy.py:L295–L300` |
| `IsAdminCheckTestCase.test_init_false` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_policy.py:L302–L307` |
| `IsAdminCheckTestCase.test_call_true` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_policy.py:L309–L315` |
| `IsAdminCheckTestCase.test_call_false` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_policy.py:L317–L323` |
| `IsAdminCheckTestCase.test_check_is_admin` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_policy.py:L325–L334` |
| `AdminRolePolicyTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_policy.py:L337–L351` |
| `AdminRolePolicyTestCase.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_policy.py:L338–L343` |
| `AdminRolePolicyTestCase.test_authorize_admin_actions_with_nonadmin_context_throws` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/test_policy.py:L345–L351` |
| `RealRolePolicyTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_policy.py:L354–L649` |
| `RealRolePolicyTestCase.setUp` | method | (self) | public | not declared | 1/226 | `src/nova/tests/unit/test_policy.py:L355–L586` |
| `RealRolePolicyTestCase.test_all_rules_in_sample_file` | method | (self) | public | not declared | 3/6 | `src/nova/tests/unit/test_policy.py:L588–L593` |
| `RealRolePolicyTestCase.test_admin_only_rules` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/test_policy.py:L595–L600` |
| `RealRolePolicyTestCase.test_admin_or_owner_rules` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/test_policy.py:L602–L607` |
| `RealRolePolicyTestCase.test_allow_all_rules` | method | (self) | public | not declared | 2/3 | `src/nova/tests/unit/test_policy.py:L609–L611` |
| `RealRolePolicyTestCase.test_allow_nobody_rules` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/test_policy.py:L613–L617` |
| `RealRolePolicyTestCase.test_service_only_rules` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/test_policy.py:L619–L629` |
| `RealRolePolicyTestCase.test_rule_missing` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/test_policy.py:L631–L649` |

## Dependencies

- `import os.path` (src/nova/tests/unit/test_policy.py:L18)
- `import threading` (src/nova/tests/unit/test_policy.py:L19)
- `import time` (src/nova/tests/unit/test_policy.py:L20)
- `unittest`: imports `mock` (src/nova/tests/unit/test_policy.py:L21)
- `oslo_policy`: imports `policy as oslo_policy` (src/nova/tests/unit/test_policy.py:L23)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/test_policy.py:L24)
- `import requests_mock` (src/nova/tests/unit/test_policy.py:L25)
- `nova`: imports `context` (src/nova/tests/unit/test_policy.py:L27)
- `nova`: imports `exception` (src/nova/tests/unit/test_policy.py:L28)
- `nova.policies`: imports `servers as servers_policy` (src/nova/tests/unit/test_policy.py:L29)
- `nova`: imports `policy` (src/nova/tests/unit/test_policy.py:L30)
- `nova`: imports `test` (src/nova/tests/unit/test_policy.py:L31)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/test_policy.py:L32)
- `nova.tests.unit`: imports `fake_policy` (src/nova/tests/unit/test_policy.py:L33)
- `nova`: imports `utils` (src/nova/tests/unit/test_policy.py:L34)

## Side Effects

- **file-io**: tmpfilename = os.path.join(tmpdir, 'policy') (src/nova/tests/unit/test_policy.py:L45)
- **file-io**: with open(tmpfilename, "w") as policyfile: (src/nova/tests/unit/test_policy.py:L60)
- **file-io**: with open(tmpfilename, "w") as policyfile: (src/nova/tests/unit/test_policy.py:L63)

## Security Surface

- **sink** (`file-write`): with open(tmpfilename, "w") as policyfile: (src/nova/tests/unit/test_policy.py:L60)
- **sink** (`file-write`): policyfile.write('{"example:test": ""}') (src/nova/tests/unit/test_policy.py:L61)
- **sink** (`file-write`): with open(tmpfilename, "w") as policyfile: (src/nova/tests/unit/test_policy.py:L63)
- **sink** (`file-write`): policyfile.write('{"example:test": "!"}') (src/nova/tests/unit/test_policy.py:L64)
- **sink** (`db-write`): "os_compute_api:os-aggregates:update", (src/nova/tests/unit/test_policy.py:L387)
- **sink** (`db-write`): "os_compute_api:os-flavor-extra-specs:update", (src/nova/tests/unit/test_policy.py:L397)
- **sink** (`db-write`): "os_compute_api:os-flavor-manage:update", (src/nova/tests/unit/test_policy.py:L400)
- **sink** (`db-write`): "os_compute_api:os-hosts:update", (src/nova/tests/unit/test_policy.py:L402)
- **sink** (`db-write`): "os_compute_api:os-quota-sets:update", (src/nova/tests/unit/test_policy.py:L410)
- **sink** (`db-write`): "os_compute_api:os-services:update", (src/nova/tests/unit/test_policy.py:L414)
- **sink** (`db-write`): "os_compute_api:os-quota-class-sets:update", (src/nova/tests/unit/test_policy.py:L420)
- **sink** (`db-write`): "os_compute_api:server-metadata:update", (src/nova/tests/unit/test_policy.py:L468)
- **sink** (`db-write`): "os_compute_api:servers:update", (src/nova/tests/unit/test_policy.py:L491)
- **sink** (`db-write`): "os_compute_api:os-security-groups:update", (src/nova/tests/unit/test_policy.py:L514)
- **sink** (`db-write`): "os_compute_api:os-server-tags:update", (src/nova/tests/unit/test_policy.py:L523)
- **sink** (`db-write`): "os_compute_api:os-volumes-attachments:update", (src/nova/tests/unit/test_policy.py:L537)

