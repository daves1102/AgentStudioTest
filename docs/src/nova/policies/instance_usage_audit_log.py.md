# src/nova/policies/instance_usage_audit_log.py

## Overview

This file implements the `instance_usage_audit_log` module, defining 3 constants, 1 function, 1 variable, 2 imports, 3 side effects.

Lines: total 68, code 44, comment 14, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BASE_POLICY_NAME` | constant | — | exported | not declared | — | `src/nova/policies/instance_usage_audit_log.py:L21–L21` |
| `DEPRECATED_REASON` | constant | — | exported | not declared | — | `src/nova/policies/instance_usage_audit_log.py:L23–L27` |
| `DEPRECATED_POLICY` | constant | — | exported | not declared | — | `src/nova/policies/instance_usage_audit_log.py:L29–L34` |
| `instance_usage_audit_log_policies` | variable | — | exported | not declared | — | `src/nova/policies/instance_usage_audit_log.py:L36–L64` |
| `list_rules` | function | — | exported | `instance_usage_audit_log_policies` (src/nova/policies/instance_usage_audit_log.py:L68) | 1/2 | `src/nova/policies/instance_usage_audit_log.py:L67–L68` |

## Dependencies

- `oslo_policy`: imports `policy` (src/nova/policies/instance_usage_audit_log.py:L16)
- `nova.policies`: imports `base` (src/nova/policies/instance_usage_audit_log.py:L18)

## Side Effects

- **global-mutation**: BASE_POLICY_NAME = 'os_compute_api:os-instance-usage-audit-log:%s' (src/nova/policies/instance_usage_audit_log.py:L21)
- **global-mutation**: DEPRECATED_REASON = """ (src/nova/policies/instance_usage_audit_log.py:L23)
- **global-mutation**: DEPRECATED_POLICY = policy.DeprecatedRule( (src/nova/policies/instance_usage_audit_log.py:L29)

