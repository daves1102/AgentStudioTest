# src/nova/limit/placement.py

## Overview

This file implements the `placement` module, defining 3 constants, 10 functions, 11 imports, 3 side effects, 1 security surface entry.

Lines: total 239, code 164, comment 33, blank 42

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/limit/placement.py:L28–L28` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/limit/placement.py:L29–L29` |
| `LEGACY_LIMITS` | constant | — | exported | not declared | — | `src/nova/limit/placement.py:L31–L35` |
| `_get_placement_usages` | function | (context, project_id) | unexported | `report.report_client_singleton().get_usages_counts_for_limits( context, project_id)` (src/nova/limit/placement.py:L41) | 1/5 | `src/nova/limit/placement.py:L38–L42` |
| `_get_usage` | function | (context, project_id, resource_names) | unexported | `resource_counts` (src/nova/limit/placement.py:L113) | 16/45 | `src/nova/limit/placement.py:L45–L113` |
| `_get_deltas` | function | (request_spec, count) | unexported | `deltas` (src/nova/limit/placement.py:L139) | 6/16 | `src/nova/limit/placement.py:L116–L139` |
| `_get_enforcer` | function | (context, project_id) | unexported | `limit.Enforcer(callback)` (src/nova/limit/placement.py:L149) | 1/5 | `src/nova/limit/placement.py:L142–L149` |
| `_get_enforcer.callback` | function | (project_id, resource_names) | public | `_get_usage(context, project_id, resource_names)` (src/nova/limit/placement.py:L147) | — | `src/nova/limit/placement.py:L146–L147` |
| `enforce_num_instances_and_resources` | function | (context, project_id, request_spec, min_count, max_count, enforcer=None, delta_updates=None) | exported | `max_count` (src/nova/limit/placement.py:L181); `enforce_num_instances_and_resources( context, project_id, request_spec, min_count, max_count - 1, enforcer=enforcer)` (src/nova/limit/placement.py:L203); `max_count` (src/nova/limit/placement.py:L212) | 10/33 | `src/nova/limit/placement.py:L152–L212` |
| `_convert_keys_to_legacy_name` | function | (new_dict) | unexported | `legacy` (src/nova/limit/placement.py:L220) | 3/5 | `src/nova/limit/placement.py:L215–L220` |
| `get_legacy_default_limits` | function | — | exported | `_convert_keys_to_legacy_name(dict(new_limits))` (src/nova/limit/placement.py:L226) | 1/4 | `src/nova/limit/placement.py:L223–L226` |
| `get_legacy_project_limits` | function | (project_id) | exported | `_convert_keys_to_legacy_name(dict(new_limits))` (src/nova/limit/placement.py:L232) | 1/4 | `src/nova/limit/placement.py:L229–L232` |
| `get_legacy_counts` | function | (context, project_id) | exported | `_convert_keys_to_legacy_name(new_usage)` (src/nova/limit/placement.py:L239) | 1/5 | `src/nova/limit/placement.py:L235–L239` |

## Dependencies

- `import os_resource_classes as orc` (src/nova/limit/placement.py:L15)
- `oslo_limit`: imports `exception as limit_exceptions` (src/nova/limit/placement.py:L16)
- `oslo_limit`: imports `limit` (src/nova/limit/placement.py:L17)
- `oslo_log`: imports `log as logging` (src/nova/limit/placement.py:L18)
- `import nova.conf` (src/nova/limit/placement.py:L20)
- `nova`: imports `exception` (src/nova/limit/placement.py:L21)
- `nova.limit`: imports `utils as limit_utils` (src/nova/limit/placement.py:L22)
- `nova`: imports `objects` (src/nova/limit/placement.py:L23)
- `nova`: imports `quota` (src/nova/limit/placement.py:L24)
- `nova.scheduler.client`: imports `report` (src/nova/limit/placement.py:L25)
- `nova.scheduler`: imports `utils` (src/nova/limit/placement.py:L26)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/limit/placement.py:L28)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/limit/placement.py:L29)
- **global-mutation**: LEGACY_LIMITS = { (src/nova/limit/placement.py:L31)

## Security Surface

- **sink** (`db-write`): deltas.update(delta_updates) (src/nova/limit/placement.py:L191)

