# src/nova/policies/\_\_init\_\_.py

## Overview

This file implements the `__init__` module, defining 1 function, 56 imports.

Lines: total 130, code 114, comment 11, blank 5

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `list_rules` | function | — | exported | `itertools.chain( base.list_rules(), admin_actions.list_rules(), admin_password.list_rules(), aggregates.list_rules(), assisted_volume_snapshots.list_rules(), attach_interfaces.list_rules(), availabili` (src/nova/policies/__init__.py:L74) | 1/58 | `src/nova/policies/__init__.py:L73–L130` |

## Dependencies

- `import itertools` (src/nova/policies/__init__.py:L14)
- `nova.policies`: imports `admin_actions` (src/nova/policies/__init__.py:L16)
- `nova.policies`: imports `admin_password` (src/nova/policies/__init__.py:L17)
- `nova.policies`: imports `aggregates` (src/nova/policies/__init__.py:L18)
- `nova.policies`: imports `assisted_volume_snapshots` (src/nova/policies/__init__.py:L19)
- `nova.policies`: imports `attach_interfaces` (src/nova/policies/__init__.py:L20)
- `nova.policies`: imports `availability_zone` (src/nova/policies/__init__.py:L21)
- `nova.policies`: imports `baremetal_nodes` (src/nova/policies/__init__.py:L22)
- `nova.policies`: imports `base` (src/nova/policies/__init__.py:L23)
- `nova.policies`: imports `console_auth_tokens` (src/nova/policies/__init__.py:L24)
- `nova.policies`: imports `console_output` (src/nova/policies/__init__.py:L25)
- `nova.policies`: imports `create_backup` (src/nova/policies/__init__.py:L26)
- `nova.policies`: imports `deferred_delete` (src/nova/policies/__init__.py:L27)
- `nova.policies`: imports `evacuate` (src/nova/policies/__init__.py:L28)
- `nova.policies`: imports `extended_server_attributes` (src/nova/policies/__init__.py:L29)
- `nova.policies`: imports `extensions` (src/nova/policies/__init__.py:L30)
- `nova.policies`: imports `flavor_access` (src/nova/policies/__init__.py:L31)
- `nova.policies`: imports `flavor_extra_specs` (src/nova/policies/__init__.py:L32)
- `nova.policies`: imports `flavor_manage` (src/nova/policies/__init__.py:L33)
- `nova.policies`: imports `floating_ip_pools` (src/nova/policies/__init__.py:L34)
- `nova.policies`: imports `floating_ips` (src/nova/policies/__init__.py:L35)
- `nova.policies`: imports `hosts` (src/nova/policies/__init__.py:L36)
- `nova.policies`: imports `hypervisors` (src/nova/policies/__init__.py:L37)
- `nova.policies`: imports `instance_actions` (src/nova/policies/__init__.py:L38)
- `nova.policies`: imports `instance_usage_audit_log` (src/nova/policies/__init__.py:L39)
- `nova.policies`: imports `ips` (src/nova/policies/__init__.py:L40)
- `nova.policies`: imports `keypairs` (src/nova/policies/__init__.py:L41)
- `nova.policies`: imports `limits` (src/nova/policies/__init__.py:L42)
- `nova.policies`: imports `lock_server` (src/nova/policies/__init__.py:L43)
- `nova.policies`: imports `migrate_server` (src/nova/policies/__init__.py:L44)
- `nova.policies`: imports `migrations` (src/nova/policies/__init__.py:L45)
- `nova.policies`: imports `multinic` (src/nova/policies/__init__.py:L46)
- `nova.policies`: imports `networks` (src/nova/policies/__init__.py:L47)
- `nova.policies`: imports `pause_server` (src/nova/policies/__init__.py:L48)
- `nova.policies`: imports `quota_class_sets` (src/nova/policies/__init__.py:L49)
- `nova.policies`: imports `quota_sets` (src/nova/policies/__init__.py:L50)
- `nova.policies`: imports `remote_consoles` (src/nova/policies/__init__.py:L51)
- `nova.policies`: imports `rescue` (src/nova/policies/__init__.py:L52)
- `nova.policies`: imports `security_groups` (src/nova/policies/__init__.py:L53)
- `nova.policies`: imports `server_diagnostics` (src/nova/policies/__init__.py:L54)
- `nova.policies`: imports `server_external_events` (src/nova/policies/__init__.py:L55)
- `nova.policies`: imports `server_groups` (src/nova/policies/__init__.py:L56)
- `nova.policies`: imports `server_metadata` (src/nova/policies/__init__.py:L57)
- `nova.policies`: imports `server_password` (src/nova/policies/__init__.py:L58)
- `nova.policies`: imports `server_shares` (src/nova/policies/__init__.py:L59)
- `nova.policies`: imports `server_tags` (src/nova/policies/__init__.py:L60)
- `nova.policies`: imports `server_topology` (src/nova/policies/__init__.py:L61)
- `nova.policies`: imports `servers` (src/nova/policies/__init__.py:L62)
- `nova.policies`: imports `servers_migrations` (src/nova/policies/__init__.py:L63)
- `nova.policies`: imports `services` (src/nova/policies/__init__.py:L64)
- `nova.policies`: imports `shelve` (src/nova/policies/__init__.py:L65)
- `nova.policies`: imports `simple_tenant_usage` (src/nova/policies/__init__.py:L66)
- `nova.policies`: imports `suspend_server` (src/nova/policies/__init__.py:L67)
- `nova.policies`: imports `tenant_networks` (src/nova/policies/__init__.py:L68)
- `nova.policies`: imports `volumes` (src/nova/policies/__init__.py:L69)
- `nova.policies`: imports `volumes_attachments` (src/nova/policies/__init__.py:L70)

