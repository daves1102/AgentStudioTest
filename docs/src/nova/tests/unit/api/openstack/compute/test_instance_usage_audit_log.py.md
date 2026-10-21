# src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py

## Overview

This file implements the `test_instance_usage_audit_log` module, defining 1 class, 4 constants, 3 functions, 6 methods, 5 variables, 7 imports, 5 side effects.

Lines: total 186, code 138, comment 18, blank 30

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `service_base` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L27–L27` |
| `TEST_COMPUTE_SERVICES` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L28–L33` |
| `begin1` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L36–L36` |
| `begin2` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L37–L37` |
| `begin3` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L38–L38` |
| `end3` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L39–L39` |
| `TEST_LOGS1` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L45–L55` |
| `TEST_LOGS2` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L58–L68` |
| `TEST_LOGS3` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L71–L81` |
| `fake_task_log_get_all` | function | (context, task_name, begin, end, host=None, state=None) | exported | `TEST_LOGS1` (src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L89); `TEST_LOGS2` (src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L91); `TEST_LOGS3` (src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L93) | 7/10 | `src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L84–L94` |
| `fake_last_completed_audit_period` | function | (unit=None, before=None) | exported | `begin, end` (src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L104); `begin1, end1` (src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L106) | 4/10 | `src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L97–L106` |
| `InstanceUsageAuditLogTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L109–L186` |
| `InstanceUsageAuditLogTestV21.setUp` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L110–L129` |
| `InstanceUsageAuditLogTestV21.setUp.fake_service_get_all` | function | (context, disabled) | public | `TEST_COMPUTE_SERVICES` (src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L120) | — | `src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L118–L120` |
| `InstanceUsageAuditLogTestV21._set_up_controller` | method | (self) | private | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L131–L132` |
| `InstanceUsageAuditLogTestV21.test_index` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L134–L145` |
| `InstanceUsageAuditLogTestV21.test_show` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L147–L158` |
| `InstanceUsageAuditLogTestV21.test_show_with_running` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L160–L172` |
| `InstanceUsageAuditLogTestV21.test_show_with_errors` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L174–L186` |

## Dependencies

- `import datetime` (src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L16)
- `oslo_utils`: imports `fixture as utils_fixture` (src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L18)
- `nova.api.openstack.compute`: imports `instance_usage_audit_log as v21_ial` (src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L20)
- `nova`: imports `context` (src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L21)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L22)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L23)
- `nova.tests.unit.objects`: imports `test_service` (src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L24)

## Side Effects

- **network**: from nova.api.openstack.compute import instance_usage_audit_log as v21_ial (src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L20)
- **global-mutation**: TEST_COMPUTE_SERVICES = [dict(service_base, host='foo', topic='compute'), (src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L28)
- **global-mutation**: TEST_LOGS1 = [ (src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L45)
- **global-mutation**: TEST_LOGS2 = [ (src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L58)
- **global-mutation**: TEST_LOGS3 = [ (src/nova/tests/unit/api/openstack/compute/test_instance_usage_audit_log.py:L71)

