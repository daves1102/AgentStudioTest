# src/nova/tests/functional/api_sample_tests/test_instance_usage_audit_log.py

## Overview

This file implements the `test_instance_usage_audit_log` module, defining 1 class, 1 constant, 1 field, 2 functions, 4 methods, 5 imports, 1 side effect.

Lines: total 78, code 50, comment 15, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `InstanceUsageAuditLogJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_usage_audit_log.py:L24–L78` |
| `InstanceUsageAuditLogJsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_usage_audit_log.py:L25–L25` |
| `InstanceUsageAuditLogJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_instance_usage_audit_log.py:L26–L26` |
| `InstanceUsageAuditLogJsonTest.setUp` | method | (self) | public | not declared | 2/16 | `src/nova/tests/functional/api_sample_tests/test_instance_usage_audit_log.py:L28–L52` |
| `InstanceUsageAuditLogJsonTest.setUp.fake_service_get_all` | function | (self, context, filters=None, set_zones=False) | public | `[objects.Service(host=host) for host in hosts]` (src/nova/tests/functional/api_sample_tests/test_instance_usage_audit_log.py:L40) | — | `src/nova/tests/functional/api_sample_tests/test_instance_usage_audit_log.py:L38–L40` |
| `InstanceUsageAuditLogJsonTest.setUp.fake_utcnow` | function | (with_timezone=False) | public | `datetime(2012, 7, 3, 19, 36, 5, 0)` (src/nova/tests/functional/api_sample_tests/test_instance_usage_audit_log.py:L44) | — | `src/nova/tests/functional/api_sample_tests/test_instance_usage_audit_log.py:L42–L44` |
| `InstanceUsageAuditLogJsonTest._create_task_log` | method | (self, host, num_instances) | private | not declared | 1/14 | `src/nova/tests/functional/api_sample_tests/test_instance_usage_audit_log.py:L54–L67` |
| `InstanceUsageAuditLogJsonTest.test_show_instance_usage_audit_log` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_instance_usage_audit_log.py:L69–L73` |
| `InstanceUsageAuditLogJsonTest.test_index_instance_usage_audit_log` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_instance_usage_audit_log.py:L75–L78` |

## Dependencies

- `datetime`: imports `datetime` (src/nova/tests/functional/api_sample_tests/test_instance_usage_audit_log.py:L16)
- `import urllib` (src/nova/tests/functional/api_sample_tests/test_instance_usage_audit_log.py:L17)
- `nova`: imports `context` (src/nova/tests/functional/api_sample_tests/test_instance_usage_audit_log.py:L19)
- `nova`: imports `objects` (src/nova/tests/functional/api_sample_tests/test_instance_usage_audit_log.py:L20)
- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/api_sample_tests/test_instance_usage_audit_log.py:L21)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_instance_usage_audit_log.py:L25)

