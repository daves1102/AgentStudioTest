# src/nova/limit/utils.py

## Overview

This file implements the `utils` module, defining 1 class, 4 constants, 3 fields, 3 functions, 2 methods, 6 imports, 6 side effects.

Lines: total 181, code 95, comment 61, blank 25

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/limit/utils.py:L26–L26` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/limit/utils.py:L27–L27` |
| `UNIFIED_LIMITS_DRIVER` | constant | — | exported | not declared | — | `src/nova/limit/utils.py:L29–L29` |
| `IDENTITY_CLIENT` | constant | — | exported | not declared | — | `src/nova/limit/utils.py:L30–L30` |
| `use_unified_limits` | function | — | exported | `CONF.quota.driver == UNIFIED_LIMITS_DRIVER` (src/nova/limit/utils.py:L34) | 1/2 | `src/nova/limit/utils.py:L33–L34` |
| `IdentityClient` | class | — | exported | not declared | — | `src/nova/limit/utils.py:L37–L49` |
| `IdentityClient.connection` | field | — | public | not declared | — | `src/nova/limit/utils.py:L38–L38` |
| `IdentityClient.service_id` | field | — | public | not declared | — | `src/nova/limit/utils.py:L39–L39` |
| `IdentityClient.region_id` | field | — | public | not declared | — | `src/nova/limit/utils.py:L40–L40` |
| `IdentityClient.__init__` | method | (self, connection, service_id, region_id) | public | not declared | 1/4 | `src/nova/limit/utils.py:L42–L45` |
| `IdentityClient.registered_limits` | method | (self) | public | `list(self.connection.registered_limits( service_id=self.service_id, region_id=self.region_id))` (src/nova/limit/utils.py:L48) | 1/3 | `src/nova/limit/utils.py:L47–L49` |
| `_identity_client` | function | — | unexported | `IDENTITY_CLIENT` (src/nova/limit/utils.py:L88) | 9/31 | `src/nova/limit/utils.py:L52–L88` |
| `should_enforce` | function | (exc) | exported | `True` (src/nova/limit/utils.py:L107); `False` (src/nova/limit/utils.py:L125); `True` (src/nova/limit/utils.py:L153); `bool(enforced)` (src/nova/limit/utils.py:L181) | 12/32 | `src/nova/limit/utils.py:L91–L181` |

## Dependencies

- `import typing as ty` (src/nova/limit/utils.py:L15)
- `openstack`: imports `proxy` (src/nova/limit/utils.py:L18)
- `oslo_limit`: imports `exception as limit_exceptions` (src/nova/limit/utils.py:L20)
- `oslo_log`: imports `log as logging` (src/nova/limit/utils.py:L21)
- `import nova.conf` (src/nova/limit/utils.py:L23)
- `nova`: imports `utils as nova_utils` (src/nova/limit/utils.py:L24)

## Side Effects

- **network**: connection = nova_utils.get_sdk_adapter( (src/nova/limit/utils.py:L55)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/limit/utils.py:L26)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/limit/utils.py:L27)
- **global-mutation**: UNIFIED_LIMITS_DRIVER = "nova.quota.UnifiedLimitsDriver" (src/nova/limit/utils.py:L29)
- **global-mutation**: IDENTITY_CLIENT = None (src/nova/limit/utils.py:L30)
- **global-mutation**: IDENTITY_CLIENT = IdentityClient(connection, service_id, region_id) (src/nova/limit/utils.py:L87)

