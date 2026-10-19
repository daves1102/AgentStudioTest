# src/nova/scheduler/filters/affinity_filter.py

## Overview

This file implements the `affinity_filter` module, defining 7 classs, 6 constants, 3 fields, 7 methods, 4 imports, 6 side effects.

Lines: total 165, code 95, comment 36, blank 34

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/scheduler/filters/affinity_filter.py:L24–L24` |
| `DifferentHostFilter` | class | — | exported | not declared | — | `src/nova/scheduler/filters/affinity_filter.py:L27–L40` |
| `DifferentHostFilter.run_filter_once_per_request` | field | — | public | not declared | — | `src/nova/scheduler/filters/affinity_filter.py:L30–L30` |
| `DifferentHostFilter.RUN_ON_REBUILD` | constant | — | public | not declared | — | `src/nova/scheduler/filters/affinity_filter.py:L32–L32` |
| `DifferentHostFilter.host_passes` | method | (self, host_state, spec_obj) | public | `not overlap` (src/nova/scheduler/filters/affinity_filter.py:L38); `True` (src/nova/scheduler/filters/affinity_filter.py:L40) | 2/6 | `src/nova/scheduler/filters/affinity_filter.py:L34–L40` |
| `SameHostFilter` | class | — | exported | not declared | — | `src/nova/scheduler/filters/affinity_filter.py:L43–L58` |
| `SameHostFilter.run_filter_once_per_request` | field | — | public | not declared | — | `src/nova/scheduler/filters/affinity_filter.py:L48–L48` |
| `SameHostFilter.RUN_ON_REBUILD` | constant | — | public | not declared | — | `src/nova/scheduler/filters/affinity_filter.py:L50–L50` |
| `SameHostFilter.host_passes` | method | (self, host_state, spec_obj) | public | `overlap` (src/nova/scheduler/filters/affinity_filter.py:L56); `True` (src/nova/scheduler/filters/affinity_filter.py:L58) | 2/6 | `src/nova/scheduler/filters/affinity_filter.py:L52–L58` |
| `SimpleCIDRAffinityFilter` | class | — | exported | not declared | — | `src/nova/scheduler/filters/affinity_filter.py:L61–L79` |
| `SimpleCIDRAffinityFilter.run_filter_once_per_request` | field | — | public | not declared | — | `src/nova/scheduler/filters/affinity_filter.py:L64–L64` |
| `SimpleCIDRAffinityFilter.RUN_ON_REBUILD` | constant | — | public | not declared | — | `src/nova/scheduler/filters/affinity_filter.py:L66–L66` |
| `SimpleCIDRAffinityFilter.host_passes` | method | (self, host_state, spec_obj) | public | `netaddr.IPAddress(host_ip) in affinity_net` (src/nova/scheduler/filters/affinity_filter.py:L76); `True` (src/nova/scheduler/filters/affinity_filter.py:L79) | 2/9 | `src/nova/scheduler/filters/affinity_filter.py:L68–L79` |
| `_GroupAntiAffinityFilter` | class | — | unexported | not declared | — | `src/nova/scheduler/filters/affinity_filter.py:L82–L128` |
| `_GroupAntiAffinityFilter.RUN_ON_REBUILD` | constant | — | public | not declared | — | `src/nova/scheduler/filters/affinity_filter.py:L87–L87` |
| `_GroupAntiAffinityFilter.host_passes` | method | (self, host_state, spec_obj) | public | `True` (src/nova/scheduler/filters/affinity_filter.py:L94); `True` (src/nova/scheduler/filters/affinity_filter.py:L99); `len(servers_on_host) < max_server_per_host` (src/nova/scheduler/filters/affinity_filter.py:L128) | 8/25 | `src/nova/scheduler/filters/affinity_filter.py:L89–L128` |
| `ServerGroupAntiAffinityFilter` | class | — | exported | not declared | — | `src/nova/scheduler/filters/affinity_filter.py:L131–L134` |
| `ServerGroupAntiAffinityFilter.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/scheduler/filters/affinity_filter.py:L132–L134` |
| `_GroupAffinityFilter` | class | — | unexported | not declared | — | `src/nova/scheduler/filters/affinity_filter.py:L137–L159` |
| `_GroupAffinityFilter.RUN_ON_REBUILD` | constant | — | public | not declared | — | `src/nova/scheduler/filters/affinity_filter.py:L141–L141` |
| `_GroupAffinityFilter.host_passes` | method | (self, host_state, spec_obj) | public | `True` (src/nova/scheduler/filters/affinity_filter.py:L148); `host_state.host in group_hosts` (src/nova/scheduler/filters/affinity_filter.py:L156); `True` (src/nova/scheduler/filters/affinity_filter.py:L159) | 5/13 | `src/nova/scheduler/filters/affinity_filter.py:L143–L159` |
| `ServerGroupAffinityFilter` | class | — | exported | not declared | — | `src/nova/scheduler/filters/affinity_filter.py:L162–L165` |
| `ServerGroupAffinityFilter.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/scheduler/filters/affinity_filter.py:L163–L165` |

## Dependencies

- `import netaddr` (src/nova/scheduler/filters/affinity_filter.py:L18)
- `oslo_log`: imports `log as logging` (src/nova/scheduler/filters/affinity_filter.py:L19)
- `nova.scheduler`: imports `filters` (src/nova/scheduler/filters/affinity_filter.py:L21)
- `nova.scheduler.filters`: imports `utils` (src/nova/scheduler/filters/affinity_filter.py:L22)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/scheduler/filters/affinity_filter.py:L24)
- **global-mutation**: RUN_ON_REBUILD = False (src/nova/scheduler/filters/affinity_filter.py:L32)
- **global-mutation**: RUN_ON_REBUILD = False (src/nova/scheduler/filters/affinity_filter.py:L50)
- **global-mutation**: RUN_ON_REBUILD = False (src/nova/scheduler/filters/affinity_filter.py:L66)
- **global-mutation**: RUN_ON_REBUILD = False (src/nova/scheduler/filters/affinity_filter.py:L87)
- **global-mutation**: RUN_ON_REBUILD = False (src/nova/scheduler/filters/affinity_filter.py:L141)

