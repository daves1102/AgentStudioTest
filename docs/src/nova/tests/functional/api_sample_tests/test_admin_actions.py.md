# src/nova/tests/functional/api_sample_tests/test_admin_actions.py

## Overview

This file implements the `test_admin_actions` module, defining 1 class, 1 constant, 1 field, 4 methods, 1 import, 1 side effect.

Lines: total 48, code 22, comment 18, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `AdminActionsSamplesJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_admin_actions.py:L19–L48` |
| `AdminActionsSamplesJsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_admin_actions.py:L21–L21` |
| `AdminActionsSamplesJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_admin_actions.py:L22–L22` |
| `AdminActionsSamplesJsonTest.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_admin_actions.py:L24–L30` |
| `AdminActionsSamplesJsonTest.test_post_reset_network` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_admin_actions.py:L32–L36` |
| `AdminActionsSamplesJsonTest.test_post_inject_network_info` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_admin_actions.py:L38–L42` |
| `AdminActionsSamplesJsonTest.test_post_reset_state` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_admin_actions.py:L44–L48` |

## Dependencies

- `nova.tests.functional.api_sample_tests`: imports `test_servers` (src/nova/tests/functional/api_sample_tests/test_admin_actions.py:L16)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_admin_actions.py:L21)

