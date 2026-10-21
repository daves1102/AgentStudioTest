# src/nova/tests/unit/policies/test_migrate_server.py

## Overview

This file implements the `test_migrate_server` module, defining 3 classs, 2 fields, 7 methods, 11 imports, 2 side effects.

Lines: total 156, code 115, comment 18, blank 23

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `MigrateServerPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_migrate_server.py:L28–L103` |
| `MigrateServerPolicyTest.setUp` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/policies/test_migrate_server.py:L37–L59` |
| `MigrateServerPolicyTest.test_migrate_server_policy` | method | (self, mock_resize) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_migrate_server.py:L62–L67` |
| `MigrateServerPolicyTest.test_migrate_server_host_policy` | method | (self, mock_resize) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_migrate_server.py:L70–L77` |
| `MigrateServerPolicyTest.test_migrate_live_server_policy` | method | (self, mock_live_migrate) | public | not declared | 1/11 | `src/nova/tests/unit/policies/test_migrate_server.py:L80–L90` |
| `MigrateServerPolicyTest.test_migrate_live_server_host_policy` | method | (self, mock_live_migrate) | public | not declared | 1/11 | `src/nova/tests/unit/policies/test_migrate_server.py:L93–L103` |
| `MigrateServerNoLegacyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_migrate_server.py:L106–L123` |
| `MigrateServerNoLegacyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_migrate_server.py:L111–L111` |
| `MigrateServerNoLegacyTest.rules_without_deprecation` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_migrate_server.py:L112–L117` |
| `MigrateServerNoLegacyTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/policies/test_migrate_server.py:L119–L123` |
| `MigrateServerOverridePolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_migrate_server.py:L126–L156` |
| `MigrateServerOverridePolicyTest.setUp` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/policies/test_migrate_server.py:L134–L156` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_migrate_server.py:L13)
- `import fixtures` (src/nova/tests/unit/policies/test_migrate_server.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_migrate_server.py:L16)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/policies/test_migrate_server.py:L17)
- `nova.api.openstack.compute`: imports `migrate_server` (src/nova/tests/unit/policies/test_migrate_server.py:L19)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_migrate_server.py:L20)
- `nova.policies`: imports `base as base_policy` (src/nova/tests/unit/policies/test_migrate_server.py:L21)
- `nova.policies`: imports `migrate_server as ms_policies` (src/nova/tests/unit/policies/test_migrate_server.py:L22)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_migrate_server.py:L23)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_migrate_server.py:L24)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_migrate_server.py:L25)

## Side Effects

- **network**: from nova.api.openstack.compute import migrate_server (src/nova/tests/unit/policies/test_migrate_server.py:L19)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_migrate_server.py:L43)

