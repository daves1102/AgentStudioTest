# src/nova/notifications/base.py

## Overview

This file implements the `base` module, defining 2 constants, 11 functions, 14 imports, 2 side effects, 12 security surface entries.

Lines: total 399, code 256, comment 75, blank 68

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/notifications/base.py:L39–L39` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/notifications/base.py:L41–L41` |
| `send_update` | function | (context, old_instance, new_instance, service="compute", host=None) | exported | `` (src/nova/notifications/base.py:L52) | 9/32 | `src/nova/notifications/base.py:L44–L92` |
| `send_update_with_states` | function | (context, instance, old_vm_state, new_vm_state, old_task_state, new_task_state, service="compute", host=None, verify_states=False) | exported | `` (src/nova/notifications/base.py:L104) | 9/26 | `src/nova/notifications/base.py:L95–L135` |
| `_compute_states_payload` | function | (instance, old_vm_state=None, old_task_state=None, new_vm_state=None, new_task_state=None) | unexported | `states_payload` (src/nova/notifications/base.py:L163) | 5/17 | `src/nova/notifications/base.py:L138–L163` |
| `send_instance_update_notification` | function | (context, instance, old_vm_state=None, old_task_state=None, new_vm_state=None, new_task_state=None, service="compute", host=None, old_display_name=None) | exported | not declared | 2/19 | `src/nova/notifications/base.py:L166–L199` |
| `_send_versioned_instance_update` | function | (context, instance, payload, host, service) | unexported | not declared | 2/26 | `src/nova/notifications/base.py:L203–L237` |
| `_send_versioned_instance_update._map_legacy_service_to_source` | function | (legacy_service) | private | `'nova-' + service` (src/nova/notifications/base.py:L207); `service` (src/nova/notifications/base.py:L209) | — | `src/nova/notifications/base.py:L205–L209` |
| `audit_period_bounds` | function | (current_period=False) | exported | `(audit_start, audit_end)` (src/nova/notifications/base.py:L256) | 2/9 | `src/nova/notifications/base.py:L240–L256` |
| `image_meta` | function | (system_metadata) | exported | `image_meta` (src/nova/notifications/base.py:L268) | 3/6 | `src/nova/notifications/base.py:L259–L268` |
| `null_safe_str` | function | (s) | exported | `str(s) if s else ''` (src/nova/notifications/base.py:L272) | 2/2 | `src/nova/notifications/base.py:L271–L272` |
| `null_safe_isotime` | function | (s) | exported | `utils.strtime(s)` (src/nova/notifications/base.py:L277); `str(s) if s else ''` (src/nova/notifications/base.py:L279) | 3/5 | `src/nova/notifications/base.py:L275–L279` |
| `info_from_instance` | function | (context, instance, network_info, populate_image_ref_url=False, **kw) | exported | `instance_info` (src/nova/notifications/base.py:L399) | 8/62 | `src/nova/notifications/base.py:L282–L399` |

## Dependencies

- `import datetime` (src/nova/notifications/base.py:L21)
- `keystoneauth1`: imports `exceptions as ks_exc` (src/nova/notifications/base.py:L23)
- `oslo_log`: imports `log` (src/nova/notifications/base.py:L24)
- `oslo_utils`: imports `excutils` (src/nova/notifications/base.py:L25)
- `oslo_utils`: imports `timeutils` (src/nova/notifications/base.py:L26)
- `import nova.conf` (src/nova/notifications/base.py:L28)
- `import nova.context` (src/nova/notifications/base.py:L29)
- `nova`: imports `exception` (src/nova/notifications/base.py:L30)
- `nova.image`: imports `glance` (src/nova/notifications/base.py:L31)
- `nova.notifications.objects`: imports `base as notification_base` (src/nova/notifications/base.py:L32)
- `nova.notifications.objects`: imports `instance as instance_notification` (src/nova/notifications/base.py:L33)
- `nova.objects`: imports `fields` (src/nova/notifications/base.py:L34)
- `nova`: imports `rpc` (src/nova/notifications/base.py:L35)
- `nova`: imports `utils` (src/nova/notifications/base.py:L36)

## Side Effects

- **global-mutation**: LOG = log.getLogger(__name__) (src/nova/notifications/base.py:L39)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/notifications/base.py:L41)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as ks_exc (src/nova/notifications/base.py:L23)
- **sink** (`db-write`): """Send compute.instance.update notification to report any changes occurred (src/nova/notifications/base.py:L46)
- **sink** (`db-write`): LOG.debug('Failed to send instance update notification. The ' (src/nova/notifications/base.py:L87)
- **sink** (`db-write`): LOG.exception("Failed to send state update notification", (src/nova/notifications/base.py:L91)
- **sink** (`db-write`): """Send compute.instance.update notification to report changes if there (src/nova/notifications/base.py:L98)
- **sink** (`db-write`): LOG.debug('Failed to send instance update notification. The ' (src/nova/notifications/base.py:L130)
- **sink** (`db-write`): LOG.exception("Failed to send state update notification", (src/nova/notifications/base.py:L134)
- **sink** (`db-write`): """Send 'compute.instance.update' notification to inform observers (src/nova/notifications/base.py:L169)
- **sink** (`db-write`): payload.update( (src/nova/notifications/base.py:L182)
- **sink** (`db-write`): 'compute.instance.update', payload) (src/nova/notifications/base.py:L197)
- **sink** (`db-write`): action=fields.NotificationAction.UPDATE), (src/nova/notifications/base.py:L232)
- **sink** (`db-write`): instance_info.update(kw) (src/nova/notifications/base.py:L398)

