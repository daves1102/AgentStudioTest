# src/nova/scheduler/filters/isolated_hosts_filter.py

## Overview

This file implements the `isolated_hosts_filter` module, defining 1 class, 2 constants, 1 field, 1 method, 2 imports, 2 side effects.

Lines: total 72, code 36, comment 23, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/scheduler/filters/isolated_hosts_filter.py:L19–L19` |
| `IsolatedHostsFilter` | class | — | exported | not declared | — | `src/nova/scheduler/filters/isolated_hosts_filter.py:L22–L72` |
| `IsolatedHostsFilter.run_filter_once_per_request` | field | — | public | not declared | — | `src/nova/scheduler/filters/isolated_hosts_filter.py:L26–L26` |
| `IsolatedHostsFilter.RUN_ON_REBUILD` | constant | — | public | not declared | — | `src/nova/scheduler/filters/isolated_hosts_filter.py:L28–L28` |
| `IsolatedHostsFilter.host_passes` | method | (self, host_state, spec_obj) | public | `((not restrict_isolated_hosts_to_isolated_images) or (host_state.host not in isolated_hosts))` (src/nova/scheduler/filters/isolated_hosts_filter.py:L59); `(image_isolated == host_isolated)` (src/nova/scheduler/filters/isolated_hosts_filter.py:L70); `(not image_isolated) or host_isolated` (src/nova/scheduler/filters/isolated_hosts_filter.py:L72) | 7/16 | `src/nova/scheduler/filters/isolated_hosts_filter.py:L30–L72` |

## Dependencies

- `import nova.conf` (src/nova/scheduler/filters/isolated_hosts_filter.py:L16)
- `nova.scheduler`: imports `filters` (src/nova/scheduler/filters/isolated_hosts_filter.py:L17)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/scheduler/filters/isolated_hosts_filter.py:L19)
- **global-mutation**: RUN_ON_REBUILD = True (src/nova/scheduler/filters/isolated_hosts_filter.py:L28)

