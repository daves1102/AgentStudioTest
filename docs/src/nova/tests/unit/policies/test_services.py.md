# src/nova/tests/unit/policies/test_services.py

## Overview

This file implements the `test_services` module, defining 2 classs, 1 field, 6 methods, 4 imports, 1 side effect, 6 security surface entries.

Lines: total 87, code 56, comment 14, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServicesPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_services.py:L21–L74` |
| `ServicesPolicyTest.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_services.py:L30–L40` |
| `ServicesPolicyTest.test_delete_service_policy` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_services.py:L42–L47` |
| `ServicesPolicyTest.test_index_service_policy` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_services.py:L49–L54` |
| `ServicesPolicyTest.test_old_update_service_policy` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_services.py:L56–L63` |
| `ServicesPolicyTest.test_update_service_policy` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/policies/test_services.py:L65–L74` |
| `ServicesNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_services.py:L77–L87` |
| `ServicesNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_services.py:L84–L84` |
| `ServicesNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/policies/test_services.py:L86–L87` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_services.py:L14)
- `nova.api.openstack.compute`: imports `services as services_v21` (src/nova/tests/unit/policies/test_services.py:L16)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_services.py:L17)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_services.py:L18)

## Side Effects

- **network**: from nova.api.openstack.compute import services as services_v21 (src/nova/tests/unit/policies/test_services.py:L16)

## Security Surface

- **sink** (`db-write`): rule_name = "os_compute_api:os-services:update" (src/nova/tests/unit/policies/test_services.py:L57)
- **sink** (`db-write`): update = 'nova.compute.api.HostAPI.service_update_by_host_and_binary' (src/nova/tests/unit/policies/test_services.py:L59)
- **sink** (`db-write`): with mock.patch(update): (src/nova/tests/unit/policies/test_services.py:L60)
- **sink** (`db-write`): rule_name, self.controller.update, (src/nova/tests/unit/policies/test_services.py:L62)
- **sink** (`db-write`): rule_name = "os_compute_api:os-services:update" (src/nova/tests/unit/policies/test_services.py:L66)
- **sink** (`db-write`): rule_name, self.controller.update, (src/nova/tests/unit/policies/test_services.py:L72)

