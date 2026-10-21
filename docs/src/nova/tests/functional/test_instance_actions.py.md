# src/nova/tests/functional/test_instance_actions.py

## Overview

This file implements the `test_instance_actions` module, defining 4 classs, 1 field, 9 methods, 9 imports.

Lines: total 277, code 169, comment 74, blank 34

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `InstanceActionsTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_instance_actions.py:L28–L41` |
| `InstanceActionsTest.test_get_instance_actions` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_instance_actions.py:L31–L34` |
| `InstanceActionsTest.test_get_instance_actions_deleted` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_instance_actions.py:L36–L41` |
| `InstanceActionsTestV221` | class | — | exported | not declared | — | `src/nova/tests/functional/test_instance_actions.py:L44–L65` |
| `InstanceActionsTestV221.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_instance_actions.py:L45–L45` |
| `InstanceActionsTestV221.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_instance_actions.py:L47–L49` |
| `InstanceActionsTestV221.test_get_instance_actions_deleted` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_instance_actions.py:L51–L56` |
| `InstanceActionsTestV221.test_get_instance_actions_shelve_deleted` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_instance_actions.py:L58–L65` |
| `HypervisorError` | class | — | exported | not declared | — | `src/nova/tests/functional/test_instance_actions.py:L68–L70` |
| `InstanceActionEventFaultsTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/test_instance_actions.py:L73–L277` |
| `InstanceActionEventFaultsTestCase.setUp` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/test_instance_actions.py:L78–L94` |
| `InstanceActionEventFaultsTestCase._set_policy_rules` | method | (self, overwrite=True) | private | not declared | 1/6 | `src/nova/tests/functional/test_instance_actions.py:L96–L101` |
| `InstanceActionEventFaultsTestCase.test_instance_action_event_details_non_nova_exception` | method | (self) | public | not declared | 3/47 | `src/nova/tests/functional/test_instance_actions.py:L103–L191` |
| `InstanceActionEventFaultsTestCase.test_instance_action_event_details_with_nova_exception` | method | (self) | public | not declared | 3/47 | `src/nova/tests/functional/test_instance_actions.py:L193–L277` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/functional/test_instance_actions.py:L15)
- `oslo_policy`: imports `policy as oslo_policy` (src/nova/tests/functional/test_instance_actions.py:L17)
- `nova`: imports `exception` (src/nova/tests/functional/test_instance_actions.py:L19)
- `nova`: imports `policy` (src/nova/tests/functional/test_instance_actions.py:L20)
- `nova`: imports `test` (src/nova/tests/functional/test_instance_actions.py:L21)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/test_instance_actions.py:L22)
- `nova.tests.functional.api`: imports `client` (src/nova/tests/functional/test_instance_actions.py:L23)
- `nova.tests.functional`: imports `fixtures as func_fixtures` (src/nova/tests/functional/test_instance_actions.py:L24)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_instance_actions.py:L25)

