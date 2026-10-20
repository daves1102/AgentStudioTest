# src/nova/api/openstack/compute/instance_usage_audit_log.py

## Overview

This file implements the `instance_usage_audit_log` module, defining 1 class, 4 methods, 10 imports, 1 side effect.

Lines: total 118, code 92, comment 16, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `InstanceUsageAuditLogController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/instance_usage_audit_log.py:L31–L118` |
| `InstanceUsageAuditLogController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/instance_usage_audit_log.py:L33–L35` |
| `InstanceUsageAuditLogController.index` | method | (self, req) | public | `{'instance_usage_audit_logs': task_log}` (src/nova/api/openstack/compute/instance_usage_audit_log.py:L45) | 1/5 | `src/nova/api/openstack/compute/instance_usage_audit_log.py:L41–L45` |
| `InstanceUsageAuditLogController.show` | method | (self, req, id) | public | `{'instance_usage_audit_log': task_log}` (src/nova/api/openstack/compute/instance_usage_audit_log.py:L65) | 3/15 | `src/nova/api/openstack/compute/instance_usage_audit_log.py:L51–L65` |
| `InstanceUsageAuditLogController._get_audit_task_logs` | method | (self, context, before=None) | private | `dict(period_beginning=str(begin), period_ending=str(end), num_hosts=len(hosts), num_hosts_done=len(done_hosts), num_hosts_running=len(running_hosts), num_hosts_not_run=len(missing_hosts), hosts_not_ru` (src/nova/api/openstack/compute/instance_usage_audit_log.py:L108) | 7/42 | `src/nova/api/openstack/compute/instance_usage_audit_log.py:L67–L118` |

## Dependencies

- `import datetime` (src/nova/api/openstack/compute/instance_usage_audit_log.py:L16)
- `import webob.exc` (src/nova/api/openstack/compute/instance_usage_audit_log.py:L18)
- `nova.api.openstack.compute.schemas`: imports `instance_usage_audit_log as schema` (src/nova/api/openstack/compute/instance_usage_audit_log.py:L20)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/instance_usage_audit_log.py:L21)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/instance_usage_audit_log.py:L22)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/instance_usage_audit_log.py:L23)
- `nova.compute`: imports `rpcapi as compute_rpcapi` (src/nova/api/openstack/compute/instance_usage_audit_log.py:L24)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/instance_usage_audit_log.py:L25)
- `nova.policies`: imports `instance_usage_audit_log as iual_policies` (src/nova/api/openstack/compute/instance_usage_audit_log.py:L26)
- `nova`: imports `utils` (src/nova/api/openstack/compute/instance_usage_audit_log.py:L27)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import instance_usage_audit_log as schema  # noqa: E501 (src/nova/api/openstack/compute/instance_usage_audit_log.py:L20)

