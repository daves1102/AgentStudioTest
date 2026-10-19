# src/nova/scheduler/filters/all_hosts_filter.py

## Overview

This file implements the `all_hosts_filter` module, defining 1 class, 1 constant, 1 field, 1 method, 1 import, 1 side effect.

Lines: total 29, code 7, comment 15, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `AllHostsFilter` | class | — | exported | not declared | — | `src/nova/scheduler/filters/all_hosts_filter.py:L20–L29` |
| `AllHostsFilter.run_filter_once_per_request` | field | — | public | not declared | — | `src/nova/scheduler/filters/all_hosts_filter.py:L24–L24` |
| `AllHostsFilter.RUN_ON_REBUILD` | constant | — | public | not declared | — | `src/nova/scheduler/filters/all_hosts_filter.py:L26–L26` |
| `AllHostsFilter.host_passes` | method | (self, host_state, spec_obj) | public | `True` (src/nova/scheduler/filters/all_hosts_filter.py:L29) | 1/2 | `src/nova/scheduler/filters/all_hosts_filter.py:L28–L29` |

## Dependencies

- `nova.scheduler`: imports `filters` (src/nova/scheduler/filters/all_hosts_filter.py:L17)

## Side Effects

- **global-mutation**: RUN_ON_REBUILD = False (src/nova/scheduler/filters/all_hosts_filter.py:L26)

